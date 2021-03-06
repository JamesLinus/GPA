//==============================================================================
// Copyright (c) 2012-2016 Advanced Micro Devices, Inc. All rights reserved.
/// \author AMD Developer Tools Team
/// \file
/// \brief  Helper functions for Counter Generator Unit Tests
//==============================================================================

#include <gtest/gtest.h>
#include "GPUPerfAPI.h"
#include "GPACounterGenerator.h"
#include "GPUPerfAPICounters.h"
#include "GPAHWInfo.h"
#ifdef _WIN32
    #include <windows.h>
#else
    #include <dlfcn.h>
#endif

#ifdef _WIN32
    typedef HMODULE LibHandle; /// typedef for HMODULE for loading the library on windows
#else
    typedef void* LibHandle; /// typedef for void* for loading the library on linux
#endif

typedef decltype(GPA_GetAvailableCounters)* GPA_GetAvailableCountersProc;
typedef decltype(GPA_GetAvailableCountersByGeneration)* GPA_GetAvailableCountersByGenerationProc;

static const unsigned int gDevIdUnknown = 0xFFFFFFFF; //< bogus device id
static const unsigned int gDevIdSI = 0x6798;
static const unsigned int gDevIdCI = 0x6649;
static const unsigned int gDevIdCIHawaii = 0x67A0;
static const unsigned int gDevIdVI = 0x6900;
static const unsigned int gDevIdGfx9 = 0x6863;

#ifdef _WIN32
static const char* countersLibName = "GPUPerfAPICounters" AMDT_PLATFORM_SUFFIX AMDT_DEBUG_SUFFIX AMDT_BUILD_SUFFIX ".dll";
#else
static const char* countersLibName = "libGPUPerfAPICounters" AMDT_PLATFORM_SUFFIX AMDT_DEBUG_SUFFIX AMDT_BUILD_SUFFIX ".so";
#endif

LibHandle LoadLib(const char* pLibName);
void UnloadLib(LibHandle libHandle);
void* GetEntryPoint(LibHandle libHandle, const char* pEntrypointName);

void VerifyNotImplemented(GPA_API_Type api, unsigned int deviceId);
void VerifyNotImplemented(GPA_API_Type api, GPA_HW_GENERATION generation);

void VerifyHardwareNotSupported(GPA_API_Type api, unsigned int deviceId);
void VerifyHardwareNotSupported(GPA_API_Type api, GPA_HW_GENERATION generation);

void VerifyCounterNames(GPA_API_Type api, unsigned int deviceId, std::vector<const char*> expectedNames);
void VerifyCounterNames(GPA_API_Type api, GPA_HW_GENERATION generation, std::vector<const char*> expectedNames);

void VerifyPassCount(GPA_API_Type api, unsigned int deviceId, std::vector<unsigned int> countersToEnable, unsigned int expectedNumPasses);

/// \param api The API being used in the test
/// \param deviceID The hardware being used
/// \param countersToEnable The list of exposed counters being tested
/// \param expectedHwCountersPerPass A list of counters in each pass (list of lists)
/// \param expectedResultLocations A list of maps for the result locations
void VerifyCountersInPass(GPA_API_Type api,
                          unsigned int deviceId,
                          std::vector<unsigned int> countersToEnable,
                          std::vector< std::vector<unsigned int> >& expectedHwCountersPerPass,
                          std::map< unsigned int, std::map<unsigned int, GPA_CounterResultLocation> >& expectedResultLocations);

void VerifyCounterCalculation(GPA_API_Type api, unsigned int deviceId, char* counterName, std::vector<char*>& sampleResults, gpa_float64 expectedResult);
