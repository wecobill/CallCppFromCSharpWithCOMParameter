// DoWork.cpp : Implementation of CDoWork

#include "pch.h"
#include <comdef.h>
#include <thread>

#include "DoWork.h"

// CDoWork
STDMETHODIMP CDoWork::Initialize()
{
    HRESULT hr = CoCreateInstance(__uuidof(Analyze::Class1), NULL, CLSCTX_INPROC_SERVER, __uuidof(Analyze::IProcessingPluginsPtr), (void**)&_piAnalyze);
    _piAnalyze->Initialize(this);
    return S_OK;
}

STDMETHODIMP CDoWork::Test()
{
    new std::thread(&CDoWork::ProcessFlawDataThread, this);
    return S_OK;
}

STDMETHODIMP CDoWork::SendEvent(IDispatch *pIEvent)
{
    try
    {
        IEventData *pIEventData = (IEventData*)pIEvent;
        // Check to make sure we have valid info
        if (pIEventData == nullptr)
        {
            return E_INVALIDARG;
        }
        long myKey = -1;
        HRESULT hr = pIEventData->get_Key(&myKey);  // WHY DOESN'T THIS RETURN 47??

        return S_OK;
    }
    catch (_com_error ex)
    {
       ATLASSERT(false);
    }
    return E_FAIL;
}

void CDoWork::ProcessFlawDataThread()
{
    HRESULT hr = CoInitialize(NULL);
    if (S_OK != hr)
    {
        ATLASSERT(false);
    }

    _piAnalyze->ProcessFlaw();
    Sleep(1000);
    CoUninitialize();
}
