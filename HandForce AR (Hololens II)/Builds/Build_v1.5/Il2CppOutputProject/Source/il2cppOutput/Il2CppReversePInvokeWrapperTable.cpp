﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif





// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

struct unitytls_errorstate_tC926EE4582920BE2C1DB1F3F65619B810D5AB902;
struct unitytls_key_ref_t6BD91D013DF11047C53738FEEB12CE290FDC71A2;
struct unitytls_tlsctx_tF8BBCBFE1E957B846442DED65ECB89BC5307DEAE;
struct unitytls_x509list_ref_t6C5C1CF0B720516A681CB741104A164FD8B3CF17;
struct unitytls_x509name_t8A1108C917795D8FE946B50769ACE51489C7BF5D;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// Mono.Unity.UnityTls/unitytls_x509_ref
struct unitytls_x509_ref_t9CEB17766B4144117333AB50379B21A357FA4333 
{
	// System.UInt64 Mono.Unity.UnityTls/unitytls_x509_ref::handle
	uint64_t ___handle_0;
};

// Mono.Unity.UnityTls/unitytls_x509list_ref
struct unitytls_x509list_ref_t6C5C1CF0B720516A681CB741104A164FD8B3CF17 
{
	// System.UInt64 Mono.Unity.UnityTls/unitytls_x509list_ref::handle
	uint64_t ___handle_0;
};

// Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingNameValidationResult
struct SecureRemotingNameValidationResult_t71C9443E3E6714E39C121463AADAC2A21177BC25 
{
	// System.Int32 Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingNameValidationResult::value__
	int32_t ___value___2;
};

// UnityEngine.XR.OpenXR.NativeTypes.XrResult
struct XrResult_tC6E780422C0CF27153FB9B0ED7D1F60015608195 
{
	// System.Int32 UnityEngine.XR.OpenXR.NativeTypes.XrResult::value__
	int32_t ___value___2;
};

// UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/ScriptEvent
struct ScriptEvent_t98D7BEA7A83AEC5AC0316FCED0B85028D4E75DAD 
{
	// System.Int32 UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/ScriptEvent::value__
	int32_t ___value___2;
};

// Mono.Btls.MonoBtlsBioMono/ControlCommand
struct ControlCommand_tB0F1C7ED893D028334F92A046E73D932D64E51D3 
{
	// System.Int32 Mono.Btls.MonoBtlsBioMono/ControlCommand::value__
	int32_t ___value___2;
};

// UnityEngine.XR.OpenXR.Features.OpenXRFeature/NativeEvent
struct NativeEvent_t2C54A0DE392B348B223984562B66B06F48BC7F04 
{
	// System.Int32 UnityEngine.XR.OpenXR.Features.OpenXRFeature/NativeEvent::value__
	int32_t ___value___2;
};

// Mono.Unity.UnityTls/unitytls_x509verify_result
struct unitytls_x509verify_result_tBD0B93AE208F14C2C6CD925F0702A269BFE66FF0 
{
	// System.UInt32 Mono.Unity.UnityTls/unitytls_x509verify_result::value__
	uint32_t ___value___2;
};

// Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingCertificateValidationResult
#pragma pack(push, tp, 8)
struct SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736 
{
	// System.Boolean Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingCertificateValidationResult::TrustedRoot
	bool ___TrustedRoot_0;
	// System.Boolean Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingCertificateValidationResult::Revoked
	bool ___Revoked_1;
	// System.Boolean Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingCertificateValidationResult::Expired
	bool ___Expired_2;
	// System.Boolean Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingCertificateValidationResult::WrongUsage
	bool ___WrongUsage_3;
	// System.Boolean Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingCertificateValidationResult::RevocationCheckFailed
	bool ___RevocationCheckFailed_4;
	// System.Boolean Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingCertificateValidationResult::InvalidCertOrChain
	bool ___InvalidCertOrChain_5;
	// Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingNameValidationResult Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingCertificateValidationResult::NameValidationResult
	int32_t ___NameValidationResult_6;
};
#pragma pack(pop, tp)
// Native definition for P/Invoke marshalling of Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingCertificateValidationResult
#pragma pack(push, tp, 8)
struct SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736_marshaled_pinvoke
{
	int32_t ___TrustedRoot_0;
	int32_t ___Revoked_1;
	int32_t ___Expired_2;
	int32_t ___WrongUsage_3;
	int32_t ___RevocationCheckFailed_4;
	int32_t ___InvalidCertOrChain_5;
	int32_t ___NameValidationResult_6;
};
#pragma pack(pop, tp)
// Native definition for COM marshalling of Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingCertificateValidationResult
#pragma pack(push, tp, 8)
struct SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736_marshaled_com
{
	int32_t ___TrustedRoot_0;
	int32_t ___Revoked_1;
	int32_t ___Expired_2;
	int32_t ___WrongUsage_3;
	int32_t ___RevocationCheckFailed_4;
	int32_t ___InvalidCertOrChain_5;
	int32_t ___NameValidationResult_6;
};
#pragma pack(pop, tp)

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// System.Void

// System.Void

// Mono.Unity.UnityTls/unitytls_x509_ref

// Mono.Unity.UnityTls/unitytls_x509_ref

// Mono.Unity.UnityTls/unitytls_x509list_ref

// Mono.Unity.UnityTls/unitytls_x509list_ref

// UnityEngine.XR.OpenXR.NativeTypes.XrResult

// UnityEngine.XR.OpenXR.NativeTypes.XrResult

// UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/ScriptEvent

// UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/ScriptEvent

// Mono.Btls.MonoBtlsBioMono/ControlCommand

// Mono.Btls.MonoBtlsBioMono/ControlCommand

// UnityEngine.XR.OpenXR.Features.OpenXRFeature/NativeEvent

// UnityEngine.XR.OpenXR.Features.OpenXRFeature/NativeEvent

// Mono.Unity.UnityTls/unitytls_x509verify_result

// Mono.Unity.UnityTls/unitytls_x509verify_result

// Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingCertificateValidationResult

// Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingCertificateValidationResult
#ifdef __clang__
#pragma clang diagnostic pop
#endif

extern "C" int32_t DEFAULT_CALL ReversePInvokeWrapper_AppRemotingSubsystem_ImplementValidateAuthenticationToken_mFD455DE70BB982F47A6614CCF7EFFE952E11E9E0(char* ___0_authenticationTokenToCheck);
extern "C" SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736_marshaled_pinvoke DEFAULT_CALL ReversePInvokeWrapper_AppRemotingSubsystem_ImplementValidateServerCertificate_m9BBEB3EB86689175C979D0386FD9FD65240270D5(char* ___0_hostName, SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736_marshaled_pinvoke ___1_systemValidationResult);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_CultureInfo_OnCultureInfoChangedInAppX_m407BCFC1029A4485B7B063BC2F3601968C3BE577(Il2CppChar* ___0_language);
extern "C" int32_t CDECL ReversePInvokeWrapper_DeflateStreamNative_UnmanagedRead_m321A2621068F1C9509594A4D8F405F4F12C1CEB3(intptr_t ___0_buffer, int32_t ___1_length, intptr_t ___2_data);
extern "C" int32_t CDECL ReversePInvokeWrapper_DeflateStreamNative_UnmanagedWrite_mB0AD438266A9DD2813715E8BC90BF07DC7A02F52(intptr_t ___0_buffer, int32_t ___1_length, intptr_t ___2_data);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_MockRuntime_AfterFunctionCallback_mFBBF94D9868CA6870E3A6A78D831145376372D46(char* ___0_function, int32_t ___1_result);
extern "C" int32_t DEFAULT_CALL ReversePInvokeWrapper_MockRuntime_BeforeFunctionCallback_m70AB6148D0D9FCD315ACDB6B46131514D128380D(char* ___0_function);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_MockRuntime_ReceiveScriptEvent_m4A8AAF0A455A02262E3B74CB3DB498A88C84AD14(int32_t ___0_evt, uint64_t ___1_param);
extern "C" int64_t CDECL ReversePInvokeWrapper_MonoBtlsBioMono_Control_mA7B1C493171314C6F02CAC5F73EB7CB94B86ED78(intptr_t ___0_instance, int32_t ___1_command, int64_t ___2_arg);
extern "C" int32_t CDECL ReversePInvokeWrapper_MonoBtlsBioMono_OnRead_m8888AD0EA2D55D9FFE183BC63D4023BC621941F9(intptr_t ___0_instance, intptr_t ___1_data, int32_t ___2_dataLength, int32_t* ___3_wantMore);
extern "C" int32_t CDECL ReversePInvokeWrapper_MonoBtlsBioMono_OnWrite_mD90183BD125599306AAF4E74E941A3983027C575(intptr_t ___0_instance, intptr_t ___1_data, int32_t ___2_dataLength);
extern "C" int32_t CDECL ReversePInvokeWrapper_MonoBtlsSsl_PrintErrorsCallback_m93ED1F9335C5974459F0915323C5527382A83959(intptr_t ___0_str, intptr_t ___1_len, intptr_t ___2_ctx);
extern "C" int32_t CDECL ReversePInvokeWrapper_MonoBtlsSslCtx_NativeSelectCallback_m5A906B70CBEC53FE7F4208810264D78D4AA26EE4(intptr_t ___0_instance, int32_t ___1_count, intptr_t ___2_sizes, intptr_t ___3_data);
extern "C" int32_t CDECL ReversePInvokeWrapper_MonoBtlsSslCtx_NativeServerNameCallback_mC76D35B6D2668F93E280D35B5560A06571810857(intptr_t ___0_instance);
extern "C" int32_t CDECL ReversePInvokeWrapper_MonoBtlsSslCtx_NativeVerifyCallback_m13C23EDCF9CDADF430C5A1664D33DC7621974916(intptr_t ___0_instance, int32_t ___1_preverify_ok, intptr_t ___2_store_ctx);
extern "C" int32_t CDECL ReversePInvokeWrapper_MonoBtlsX509LookupMono_OnGetBySubject_m85B0F4B20C12F67DE4CD9521EC58308C9A27BA24(intptr_t ___0_instance, intptr_t ___1_name_ptr, intptr_t* ___2_x509_ptr);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_OSSpecificSynchronizationContext_InvocationEntry_mF93C3CF6DBEC86E377576D840CAF517CB6E4D7E3(intptr_t ___0_arg);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_OpenXRLoaderBase_ReceiveNativeEvent_m521057A79D56E2995A93CEB8B66A60B4297896F0(int32_t ___0_e, uint64_t ___1_payload);
extern "C" void CDECL ReversePInvokeWrapper_UnityTlsContext_CertificateCallback_m8CC672A44A8CCFD2A3EB2D9B38A9A134F6EF706B(void* ___0_userData, unitytls_tlsctx_tF8BBCBFE1E957B846442DED65ECB89BC5307DEAE* ___1_ctx, uint8_t* ___2_cn, intptr_t ___3_cnLen, unitytls_x509name_t8A1108C917795D8FE946B50769ACE51489C7BF5D* ___4_caList, intptr_t ___5_caListLen, unitytls_x509list_ref_t6C5C1CF0B720516A681CB741104A164FD8B3CF17* ___6_chain, unitytls_key_ref_t6BD91D013DF11047C53738FEEB12CE290FDC71A2* ___7_key, unitytls_errorstate_tC926EE4582920BE2C1DB1F3F65619B810D5AB902* ___8_errorState);
extern "C" intptr_t CDECL ReversePInvokeWrapper_UnityTlsContext_ReadCallback_m068A7DC153B3D2C4F6922B46BC5957CF33AE3450(void* ___0_userData, uint8_t* ___1_buffer, intptr_t ___2_bufferLen, unitytls_errorstate_tC926EE4582920BE2C1DB1F3F65619B810D5AB902* ___3_errorState);
extern "C" uint32_t CDECL ReversePInvokeWrapper_UnityTlsContext_VerifyCallback_mC7AE01FAD8A336A6BF11CF8A3EFAC60CF6167E6F(void* ___0_userData, unitytls_x509list_ref_t6C5C1CF0B720516A681CB741104A164FD8B3CF17 ___1_chain, unitytls_errorstate_tC926EE4582920BE2C1DB1F3F65619B810D5AB902* ___2_errorState);
extern "C" intptr_t CDECL ReversePInvokeWrapper_UnityTlsContext_WriteCallback_m74F83CFEE7D8FB7EBD1A1021DCB8945E89382998(void* ___0_userData, uint8_t* ___1_data, intptr_t ___2_bufferLen, unitytls_errorstate_tC926EE4582920BE2C1DB1F3F65619B810D5AB902* ___3_errorState);
extern "C" uint32_t CDECL ReversePInvokeWrapper_UnityTlsProvider_x509verify_callback_mB2465D108005179B9873A37C418CD26A37194E3B(void* ___0_userData, unitytls_x509_ref_t9CEB17766B4144117333AB50379B21A357FA4333 ___1_cert, uint32_t ___2_result, unitytls_errorstate_tC926EE4582920BE2C1DB1F3F65619B810D5AB902* ___3_errorState);


IL2CPP_EXTERN_C const Il2CppMethodPointer g_ReversePInvokeWrapperPointers[];
const Il2CppMethodPointer g_ReversePInvokeWrapperPointers[23] = 
{
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_AppRemotingSubsystem_ImplementValidateAuthenticationToken_mFD455DE70BB982F47A6614CCF7EFFE952E11E9E0),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_AppRemotingSubsystem_ImplementValidateServerCertificate_m9BBEB3EB86689175C979D0386FD9FD65240270D5),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_CultureInfo_OnCultureInfoChangedInAppX_m407BCFC1029A4485B7B063BC2F3601968C3BE577),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_DeflateStreamNative_UnmanagedRead_m321A2621068F1C9509594A4D8F405F4F12C1CEB3),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_DeflateStreamNative_UnmanagedWrite_mB0AD438266A9DD2813715E8BC90BF07DC7A02F52),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_MockRuntime_AfterFunctionCallback_mFBBF94D9868CA6870E3A6A78D831145376372D46),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_MockRuntime_BeforeFunctionCallback_m70AB6148D0D9FCD315ACDB6B46131514D128380D),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_MockRuntime_ReceiveScriptEvent_m4A8AAF0A455A02262E3B74CB3DB498A88C84AD14),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_MonoBtlsBioMono_Control_mA7B1C493171314C6F02CAC5F73EB7CB94B86ED78),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_MonoBtlsBioMono_OnRead_m8888AD0EA2D55D9FFE183BC63D4023BC621941F9),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_MonoBtlsBioMono_OnWrite_mD90183BD125599306AAF4E74E941A3983027C575),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_MonoBtlsSsl_PrintErrorsCallback_m93ED1F9335C5974459F0915323C5527382A83959),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_MonoBtlsSslCtx_NativeSelectCallback_m5A906B70CBEC53FE7F4208810264D78D4AA26EE4),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_MonoBtlsSslCtx_NativeServerNameCallback_mC76D35B6D2668F93E280D35B5560A06571810857),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_MonoBtlsSslCtx_NativeVerifyCallback_m13C23EDCF9CDADF430C5A1664D33DC7621974916),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_MonoBtlsX509LookupMono_OnGetBySubject_m85B0F4B20C12F67DE4CD9521EC58308C9A27BA24),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_OSSpecificSynchronizationContext_InvocationEntry_mF93C3CF6DBEC86E377576D840CAF517CB6E4D7E3),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_OpenXRLoaderBase_ReceiveNativeEvent_m521057A79D56E2995A93CEB8B66A60B4297896F0),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UnityTlsContext_CertificateCallback_m8CC672A44A8CCFD2A3EB2D9B38A9A134F6EF706B),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UnityTlsContext_ReadCallback_m068A7DC153B3D2C4F6922B46BC5957CF33AE3450),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UnityTlsContext_VerifyCallback_mC7AE01FAD8A336A6BF11CF8A3EFAC60CF6167E6F),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UnityTlsContext_WriteCallback_m74F83CFEE7D8FB7EBD1A1021DCB8945E89382998),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UnityTlsProvider_x509verify_callback_mB2465D108005179B9873A37C418CD26A37194E3B),
};
