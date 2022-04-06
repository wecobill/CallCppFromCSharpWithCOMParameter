// EventData.cpp : Implementation of CEventData

#include "pch.h"
#include "EventData.h"


// CEventData
STDMETHODIMP CEventData::get_Key(LONG* pVal)
{
    *pVal = _key;
    return S_OK;
}

STDMETHODIMP CEventData::put_Key(LONG val)
{
    _key = val;
    return S_OK;
}
