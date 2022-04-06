// dllmain.h : Declaration of module class.

class CCOMModule : public ATL::CAtlDllModuleT< CCOMModule >
{
public :
	DECLARE_LIBID(LIBID_COMLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_COM, "{84e7e34c-32cb-4363-825b-5d05631636f9}")
};

extern class CCOMModule _AtlModule;
