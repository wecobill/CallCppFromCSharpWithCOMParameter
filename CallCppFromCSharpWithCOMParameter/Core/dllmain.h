// dllmain.h : Declaration of module class.

class CCoreModule : public ATL::CAtlDllModuleT< CCoreModule >
{
public :
	DECLARE_LIBID(LIBID_CoreLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_CORE, "{a4c7b952-c8ed-4f7e-90c1-28de5cb5e843}")
};

extern class CCoreModule _AtlModule;
