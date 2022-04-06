// EventData.h : Declaration of the CEventData

#pragma once
#include "resource.h"       // main symbols



#include "Core_i.h"



#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;


// CEventData

class ATL_NO_VTABLE CEventData :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CEventData, &CLSID_EventData>,
	public IDispatchImpl<IEventData, &IID_IEventData, &LIBID_CoreLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
    LONG _key;
public:
	CEventData() :
        _key(0)
	{
	}

DECLARE_REGISTRY_RESOURCEID(107)


BEGIN_COM_MAP(CEventData)
	COM_INTERFACE_ENTRY(IEventData)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()



	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		return S_OK;
	}

	void FinalRelease()
	{
	}

public:
    // COM Interface methods
    STDMETHOD(get_Key)(LONG *pVal);
    STDMETHOD(put_Key)(LONG val);

};

OBJECT_ENTRY_AUTO(__uuidof(EventData), CEventData)
