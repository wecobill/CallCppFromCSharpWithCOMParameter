

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Mon Jan 18 19:14:07 2038
 */
/* Compiler settings for Core.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0622 
    protocol : all , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */



#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        EXTERN_C __declspec(selectany) const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif // !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, IID_IDoWork,0xc636d6f8,0x581e,0x4b4e,0xbf,0x29,0xdb,0x71,0x06,0x73,0xba,0x6f);


MIDL_DEFINE_GUID(IID, IID_IEventData,0x26966f2b,0xa975,0x4a4b,0x98,0x55,0x7e,0x93,0xdf,0xb6,0x81,0x5c);


MIDL_DEFINE_GUID(IID, LIBID_CoreLib,0xa4c7b952,0xc8ed,0x4f7e,0x90,0xc1,0x28,0xde,0x5c,0xb5,0xe8,0x43);


MIDL_DEFINE_GUID(CLSID, CLSID_DoWork,0xd4c945f1,0x3aa2,0x4acb,0x9e,0xe7,0xa9,0x2c,0x3b,0xe8,0x89,0xaf);


MIDL_DEFINE_GUID(CLSID, CLSID_EventData,0x28e09e60,0x4236,0x459f,0xbb,0x6a,0x84,0xd5,0xb1,0xdd,0x99,0x6b);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



