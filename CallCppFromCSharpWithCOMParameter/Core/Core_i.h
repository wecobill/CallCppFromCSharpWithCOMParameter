

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


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



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __Core_i_h__
#define __Core_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IDoWork_FWD_DEFINED__
#define __IDoWork_FWD_DEFINED__
typedef interface IDoWork IDoWork;

#endif 	/* __IDoWork_FWD_DEFINED__ */


#ifndef __IEventData_FWD_DEFINED__
#define __IEventData_FWD_DEFINED__
typedef interface IEventData IEventData;

#endif 	/* __IEventData_FWD_DEFINED__ */


#ifndef __DoWork_FWD_DEFINED__
#define __DoWork_FWD_DEFINED__

#ifdef __cplusplus
typedef class DoWork DoWork;
#else
typedef struct DoWork DoWork;
#endif /* __cplusplus */

#endif 	/* __DoWork_FWD_DEFINED__ */


#ifndef __EventData_FWD_DEFINED__
#define __EventData_FWD_DEFINED__

#ifdef __cplusplus
typedef class EventData EventData;
#else
typedef struct EventData EventData;
#endif /* __cplusplus */

#endif 	/* __EventData_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "shobjidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IDoWork_INTERFACE_DEFINED__
#define __IDoWork_INTERFACE_DEFINED__

/* interface IDoWork */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IDoWork;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("c636d6f8-581e-4b4e-bf29-db710673ba6f")
    IDoWork : public IDispatch
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Initialize( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Test( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SendEvent( 
            /* [in] */ IDispatch *pIEvent) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDoWorkVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDoWork * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDoWork * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDoWork * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDoWork * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDoWork * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDoWork * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDoWork * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IDoWork * This);
        
        HRESULT ( STDMETHODCALLTYPE *Test )( 
            IDoWork * This);
        
        HRESULT ( STDMETHODCALLTYPE *SendEvent )( 
            IDoWork * This,
            /* [in] */ IDispatch *pIEvent);
        
        END_INTERFACE
    } IDoWorkVtbl;

    interface IDoWork
    {
        CONST_VTBL struct IDoWorkVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDoWork_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDoWork_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDoWork_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDoWork_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDoWork_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDoWork_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDoWork_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDoWork_Initialize(This)	\
    ( (This)->lpVtbl -> Initialize(This) ) 

#define IDoWork_Test(This)	\
    ( (This)->lpVtbl -> Test(This) ) 

#define IDoWork_SendEvent(This,pIEvent)	\
    ( (This)->lpVtbl -> SendEvent(This,pIEvent) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDoWork_INTERFACE_DEFINED__ */


#ifndef __IEventData_INTERFACE_DEFINED__
#define __IEventData_INTERFACE_DEFINED__

/* interface IEventData */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IEventData;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("26966f2b-a975-4a4b-9855-7e93dfb6815c")
    IEventData : public IDispatch
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Key( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Key( 
            /* [in] */ long val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IEventDataVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEventData * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEventData * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEventData * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IEventData * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IEventData * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IEventData * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IEventData * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Key )( 
            IEventData * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Key )( 
            IEventData * This,
            /* [in] */ long val);
        
        END_INTERFACE
    } IEventDataVtbl;

    interface IEventData
    {
        CONST_VTBL struct IEventDataVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEventData_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEventData_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEventData_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEventData_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IEventData_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IEventData_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IEventData_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IEventData_get_Key(This,pVal)	\
    ( (This)->lpVtbl -> get_Key(This,pVal) ) 

#define IEventData_put_Key(This,val)	\
    ( (This)->lpVtbl -> put_Key(This,val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEventData_INTERFACE_DEFINED__ */



#ifndef __CoreLib_LIBRARY_DEFINED__
#define __CoreLib_LIBRARY_DEFINED__

/* library CoreLib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_CoreLib;

EXTERN_C const CLSID CLSID_DoWork;

#ifdef __cplusplus

class DECLSPEC_UUID("d4c945f1-3aa2-4acb-9ee7-a92c3be889af")
DoWork;
#endif

EXTERN_C const CLSID CLSID_EventData;

#ifdef __cplusplus

class DECLSPEC_UUID("28e09e60-4236-459f-bb6a-84d5b1dd996b")
EventData;
#endif
#endif /* __CoreLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


