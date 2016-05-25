//==============================================================================
// Copyright (c) 2016 Advanced Micro Devices, Inc. All rights reserved.
/// \author AMD Developer Tools Team
/// \file
/// \brief Class for counter scheduling for GL
//==============================================================================

#ifndef _GPA_COUNTER_SCHEDULER_GL_H_
#define _GPA_COUNTER_SCHEDULER_GL_H_

#include "GPACounterSchedulerBase.h"

/// Class for counter scheduling for GL
class GPA_CounterSchedulerGL : public GPA_CounterSchedulerBase
{
public:
    /// Constructor
    GPA_CounterSchedulerGL();

protected:
    /// For GL, the preferred splitting algorithm is the consolidated one.
    /// This keeps the overall number of passes down to a reasonable number, but splits the counters up
    /// in a manner that allows them to be more consistent.
    /// \return The splitting algorithm to use.
    virtual GPACounterSplitterAlgorithm GetPreferredSplittingAlgorithm();
};

#endif //_GPA_COUNTER_SCHEDULER_GL_H_
