#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystemDescriptor>
struct List_1_tC22825AB237DE70BB25C7CB8743604D331C95C35;
// Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystemDescriptor[]
struct XRMarkerSubsystemDescriptorU5BU5D_t29D66BBA61AEC7558FAAA08A31214A92ED40E64D;
// Microsoft.MixedReality.OpenXR.IOpenXRContext
struct IOpenXRContext_t9516AC31F508ED22DB3791D6A9A88C9963328263;
// Microsoft.MixedReality.OpenXR.ISubsystemPlugin
struct ISubsystemPlugin_t40FA6639F1F57974DC348B62EA2DCE1A8EB74B82;
// Microsoft.MixedReality.OpenXR.ARSubsystems.MarkerSubsystemController
struct MarkerSubsystemController_t9FD2C3CD0E501738ED6930D1D649CF44D8547CC7;
// System.String
struct String_t;
// Microsoft.MixedReality.OpenXR.SubsystemController
struct SubsystemController_tD5980C0FF070149F54AC1C113942441FCC0A69BF;

IL2CPP_EXTERN_C RuntimeClass* List_1_tC22825AB237DE70BB25C7CB8743604D331C95C35_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MarkerSubsystemController_t9FD2C3CD0E501738ED6930D1D649CF44D8547CC7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0DE17B7149CFC4AD2D8D4499DED4098286557720;
IL2CPP_EXTERN_C String_t* _stringLiteral23DC94C1A21957C047FE1EB19F86F440997C76E7;
IL2CPP_EXTERN_C const RuntimeMethod* ISubsystemPlugin_CreateSubsystem_TisXRMarkerSubsystemDescriptor_t715496976A18AD6956A17832EEF59785900C0DD6_TisXRMarkerSubsystem_t5233A26F1CE4D4DD3DFCCCFC32FDA9C4D992A357_m1A23BDF123AF771DE0E0D8BC99000A2698E7D48A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ISubsystemPlugin_DestroySubsystem_TisXRMarkerSubsystem_t5233A26F1CE4D4DD3DFCCCFC32FDA9C4D992A357_m29E429B7340A8A442182BD2DAA371BE7A9443B36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC591BF6C7964B9359D62D7D0BD6AD4461C35F580_RuntimeMethod_var;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystemDescriptor>
struct List_1_tC22825AB237DE70BB25C7CB8743604D331C95C35  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	XRMarkerSubsystemDescriptorU5BU5D_t29D66BBA61AEC7558FAAA08A31214A92ED40E64D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// Microsoft.MixedReality.OpenXR.SubsystemController
struct SubsystemController_tD5980C0FF070149F54AC1C113942441FCC0A69BF  : public RuntimeObject
{
	// Microsoft.MixedReality.OpenXR.IOpenXRContext Microsoft.MixedReality.OpenXR.SubsystemController::Context
	RuntimeObject* ___Context_0;
};

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

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// Microsoft.MixedReality.OpenXR.ARSubsystems.MarkerSubsystemController
struct MarkerSubsystemController_t9FD2C3CD0E501738ED6930D1D649CF44D8547CC7  : public SubsystemController_tD5980C0FF070149F54AC1C113942441FCC0A69BF
{
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

// System.Collections.Generic.List`1<Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystemDescriptor>
struct List_1_tC22825AB237DE70BB25C7CB8743604D331C95C35_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	XRMarkerSubsystemDescriptorU5BU5D_t29D66BBA61AEC7558FAAA08A31214A92ED40E64D* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystemDescriptor>

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// Microsoft.MixedReality.OpenXR.SubsystemController

// Microsoft.MixedReality.OpenXR.SubsystemController

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// Microsoft.MixedReality.OpenXR.ARSubsystems.MarkerSubsystemController
struct MarkerSubsystemController_t9FD2C3CD0E501738ED6930D1D649CF44D8547CC7_StaticFields
{
	// System.Collections.Generic.List`1<Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystemDescriptor> Microsoft.MixedReality.OpenXR.ARSubsystems.MarkerSubsystemController::s_MarkerDescriptors
	List_1_tC22825AB237DE70BB25C7CB8743604D331C95C35* ___s_MarkerDescriptors_1;
};

// Microsoft.MixedReality.OpenXR.ARSubsystems.MarkerSubsystemController

// System.Void

// System.Void
#ifdef __clang__
#pragma clang diagnostic pop
#endif


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;

// System.Void Microsoft.MixedReality.OpenXR.SubsystemController::.ctor(Microsoft.MixedReality.OpenXR.IOpenXRContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemController__ctor_m860DC323501E43007757630E4E5AE907CC3DBBA4 (SubsystemController_tD5980C0FF070149F54AC1C113942441FCC0A69BF* __this, RuntimeObject* ___0_context, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.OpenXR.OpenXRRuntime::IsExtensionEnabled(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OpenXRRuntime_IsExtensionEnabled_mF0C6FC95EDFD8DA6C5A838EA2053C06F657A2EE5 (String_t* ___0_extensionName, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystemDescriptor>::.ctor()
inline void List_1__ctor_mC591BF6C7964B9359D62D7D0BD6AD4461C35F580 (List_1_tC22825AB237DE70BB25C7CB8743604D331C95C35* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC22825AB237DE70BB25C7CB8743604D331C95C35*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.OpenXR.ARSubsystems.MarkerSubsystemController::.ctor(Microsoft.MixedReality.OpenXR.IOpenXRContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarkerSubsystemController__ctor_mE834221E79C5A9097B7294175A4A96B05B912DBC (MarkerSubsystemController_t9FD2C3CD0E501738ED6930D1D649CF44D8547CC7* __this, RuntimeObject* ___0_context, const RuntimeMethod* method) 
{
	{
		// public MarkerSubsystemController(IOpenXRContext context) : base(context)
		RuntimeObject* L_0 = ___0_context;
		SubsystemController__ctor_m860DC323501E43007757630E4E5AE907CC3DBBA4(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.OpenXR.ARSubsystems.MarkerSubsystemController::OnSubsystemCreate(Microsoft.MixedReality.OpenXR.ISubsystemPlugin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarkerSubsystemController_OnSubsystemCreate_m63487805481D8DAE4482D8121087105B6876F5D8 (MarkerSubsystemController_t9FD2C3CD0E501738ED6930D1D649CF44D8547CC7* __this, RuntimeObject* ___0_plugin, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISubsystemPlugin_CreateSubsystem_TisXRMarkerSubsystemDescriptor_t715496976A18AD6956A17832EEF59785900C0DD6_TisXRMarkerSubsystem_t5233A26F1CE4D4DD3DFCCCFC32FDA9C4D992A357_m1A23BDF123AF771DE0E0D8BC99000A2698E7D48A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarkerSubsystemController_t9FD2C3CD0E501738ED6930D1D649CF44D8547CC7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DE17B7149CFC4AD2D8D4499DED4098286557720);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23DC94C1A21957C047FE1EB19F86F440997C76E7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (OpenXRRuntime.IsExtensionEnabled("XR_MSFT_scene_marker"))
		bool L_0;
		L_0 = OpenXRRuntime_IsExtensionEnabled_mF0C6FC95EDFD8DA6C5A838EA2053C06F657A2EE5(_stringLiteral23DC94C1A21957C047FE1EB19F86F440997C76E7, NULL);
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		// plugin.CreateSubsystem<XRMarkerSubsystemDescriptor, XRMarkerSubsystem>(s_MarkerDescriptors, MarkerSubsystem.Id);
		RuntimeObject* L_1 = ___0_plugin;
		il2cpp_codegen_runtime_class_init_inline(MarkerSubsystemController_t9FD2C3CD0E501738ED6930D1D649CF44D8547CC7_il2cpp_TypeInfo_var);
		List_1_tC22825AB237DE70BB25C7CB8743604D331C95C35* L_2 = ((MarkerSubsystemController_t9FD2C3CD0E501738ED6930D1D649CF44D8547CC7_StaticFields*)il2cpp_codegen_static_fields_for(MarkerSubsystemController_t9FD2C3CD0E501738ED6930D1D649CF44D8547CC7_il2cpp_TypeInfo_var))->___s_MarkerDescriptors_1;
		NullCheck(L_1);
		GenericInterfaceActionInvoker2< List_1_tC22825AB237DE70BB25C7CB8743604D331C95C35*, String_t* >::Invoke(ISubsystemPlugin_CreateSubsystem_TisXRMarkerSubsystemDescriptor_t715496976A18AD6956A17832EEF59785900C0DD6_TisXRMarkerSubsystem_t5233A26F1CE4D4DD3DFCCCFC32FDA9C4D992A357_m1A23BDF123AF771DE0E0D8BC99000A2698E7D48A_RuntimeMethod_var, L_1, L_2, _stringLiteral0DE17B7149CFC4AD2D8D4499DED4098286557720);
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.OpenXR.ARSubsystems.MarkerSubsystemController::OnSubsystemDestroy(Microsoft.MixedReality.OpenXR.ISubsystemPlugin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarkerSubsystemController_OnSubsystemDestroy_m7784FD85FB3DFF1ADD45A5D92E9779490BE5208D (MarkerSubsystemController_t9FD2C3CD0E501738ED6930D1D649CF44D8547CC7* __this, RuntimeObject* ___0_plugin, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISubsystemPlugin_DestroySubsystem_TisXRMarkerSubsystem_t5233A26F1CE4D4DD3DFCCCFC32FDA9C4D992A357_m29E429B7340A8A442182BD2DAA371BE7A9443B36_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// plugin.DestroySubsystem<XRMarkerSubsystem>();
		RuntimeObject* L_0 = ___0_plugin;
		NullCheck(L_0);
		GenericInterfaceActionInvoker0::Invoke(ISubsystemPlugin_DestroySubsystem_TisXRMarkerSubsystem_t5233A26F1CE4D4DD3DFCCCFC32FDA9C4D992A357_m29E429B7340A8A442182BD2DAA371BE7A9443B36_RuntimeMethod_var, L_0);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.OpenXR.ARSubsystems.MarkerSubsystemController::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarkerSubsystemController__cctor_mE0C003AAFAEC4F66A9C97677AD06326098443E8B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC591BF6C7964B9359D62D7D0BD6AD4461C35F580_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC22825AB237DE70BB25C7CB8743604D331C95C35_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarkerSubsystemController_t9FD2C3CD0E501738ED6930D1D649CF44D8547CC7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static List<XRMarkerSubsystemDescriptor> s_MarkerDescriptors = new List<XRMarkerSubsystemDescriptor>();
		List_1_tC22825AB237DE70BB25C7CB8743604D331C95C35* L_0 = (List_1_tC22825AB237DE70BB25C7CB8743604D331C95C35*)il2cpp_codegen_object_new(List_1_tC22825AB237DE70BB25C7CB8743604D331C95C35_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mC591BF6C7964B9359D62D7D0BD6AD4461C35F580(L_0, List_1__ctor_mC591BF6C7964B9359D62D7D0BD6AD4461C35F580_RuntimeMethod_var);
		((MarkerSubsystemController_t9FD2C3CD0E501738ED6930D1D649CF44D8547CC7_StaticFields*)il2cpp_codegen_static_fields_for(MarkerSubsystemController_t9FD2C3CD0E501738ED6930D1D649CF44D8547CC7_il2cpp_TypeInfo_var))->___s_MarkerDescriptors_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((MarkerSubsystemController_t9FD2C3CD0E501738ED6930D1D649CF44D8547CC7_StaticFields*)il2cpp_codegen_static_fields_for(MarkerSubsystemController_t9FD2C3CD0E501738ED6930D1D649CF44D8547CC7_il2cpp_TypeInfo_var))->___s_MarkerDescriptors_1), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
