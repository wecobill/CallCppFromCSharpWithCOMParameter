// DoWork.h : Declaration of the CDoWork

#pragma once
#include "resource.h"       // main symbols


#include "Core_i.h"


#import "..\bin\Debug\Analyze.tlb"


#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;


// CDoWork

class ATL_NO_VTABLE CDoWork :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CDoWork, &CLSID_DoWork>,
	public IDispatchImpl<IDoWork, &IID_IDoWork, &LIBID_CoreLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CDoWork()
	{
	}

DECLARE_REGISTRY_RESOURCEID(106)


BEGIN_COM_MAP(CDoWork)
	COM_INTERFACE_ENTRY(IDoWork)
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
    STDMETHOD(Initialize)();
    STDMETHOD(Test)();
    STDMETHOD(SendEvent)(IDispatch *pIEvent);

private:
    void ProcessFlawDataThread();
    Analyze::IProcessingPluginsPtr _piAnalyze;
};

OBJECT_ENTRY_AUTO(__uuidof(DoWork), CDoWork)
