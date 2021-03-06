//==============================================================================
// Copyright (c) 2016 Advanced Micro Devices, Inc. All rights reserved.
/// \author AMD Developer Tools Team
/// \file
/// \brief  Query adapters' info from GDI32.
//==============================================================================

#include <cassert>
#include <locale>
#include <sstream>

#include "Adapter.h"
#include "Logging.h"
#include "Utility.h"


Adapter::Adapter()
{
}

Adapter::~Adapter()
{
}

bool Adapter::getAsicInfoList(AsicInfoList& asicInfoList)
{
    IDXGIFactory* pDxgiFactory = nullptr;
    HRESULT hr = CreateDXGIFactory(__uuidof(IDXGIFactory), reinterpret_cast<void**>(&pDxgiFactory));
    bool retVal = true;

    if (S_OK != hr)
    {
        retVal = false;
    }
    else
    {
        typedef std::vector<DXGI_ADAPTER_DESC> DxgiAdapterDescList;
        static const size_t DxgiAdapterDescListInitalSize = 32;
        DxgiAdapterDescList dxgiAdapterDescList(DxgiAdapterDescListInitalSize);
        UINT adapterIndex = 0;

        while (S_OK == hr)
        {
            IDXGIAdapter* pDxgiAdapter = nullptr;
            hr = pDxgiFactory->EnumAdapters(adapterIndex, &pDxgiAdapter);

            if (S_OK == hr)
            {
                hr = pDxgiAdapter->GetDesc(&(dxgiAdapterDescList[adapterIndex]));
#ifdef _DEBUG
                assert(S_OK == hr);
#endif // _DEBUG
                pDxgiAdapter->Release();
            }

            ++adapterIndex;

            if (dxgiAdapterDescList.size() <= adapterIndex)
            {
                dxgiAdapterDescList.resize(2 * dxgiAdapterDescList.size());
            }
        }

        // DXGI_ERROR_NOT_FOUND means enum adapters reached the last adapter
        if (DXGI_ERROR_NOT_FOUND != hr)
        {
            retVal = false;
        }
        else
        {
            const size_t listSize = dxgiAdapterDescList.size();
            asicInfoList.resize(listSize);

            for (size_t aii = 0 ; listSize > aii ; ++aii)
            {
                dxgiAdapterDescToAsicInfo(dxgiAdapterDescList[aii], asicInfoList[aii]);
            }
        }

        pDxgiFactory->Release();
    }

    return retVal;
}

void Adapter::dxgiAdapterDescToAsicInfo(const DXGI_ADAPTER_DESC& dxgiAdapterDesc, ADLUtil_ASICInfo& asicInfo)
{
    wcstringToString(dxgiAdapterDesc.Description, asicInfo.adapterName);
    std::stringstream strStream;
    strStream << std::hex << dxgiAdapterDesc.DeviceId;
    asicInfo.deviceIDString = strStream.str();
    asicInfo.vendorID = dxgiAdapterDesc.VendorId;
    asicInfo.deviceID = dxgiAdapterDesc.DeviceId;
}
