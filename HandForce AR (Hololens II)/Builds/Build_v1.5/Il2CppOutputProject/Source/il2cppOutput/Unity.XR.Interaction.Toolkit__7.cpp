#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.AffordanceStateData>
struct Action_1_t1643FA0114A827809902992385492446993A54FA;
// System.Action`1<System.Single>
struct Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A;
// System.Action`1<Unity.Mathematics.float2>
struct Action_1_t589E99142AE3A56042136BE78BB58A315BB8BA00;
// System.Action`1<Unity.Mathematics.float3>
struct Action_1_t81CC87F0365077EC678FAF69B68180DC9750249B;
// System.Action`1<Unity.Mathematics.float4>
struct Action_1_t0E68BC0397A1E694BFCBD1A793724DE2EA532023;
// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.BaseAffordanceTheme`1<System.Single>
struct BaseAffordanceTheme_1_t1E77E3027D1DEBEA5C94340841F9E857938E9637;
// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.BaseAffordanceTheme`1<Unity.Mathematics.float2>
struct BaseAffordanceTheme_1_t8D071F9F08B006341599D081E084B8CBC8D33DB8;
// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.BaseAffordanceTheme`1<Unity.Mathematics.float3>
struct BaseAffordanceTheme_1_tDE4824F41024DDB47B2C61FE23860FB77EA960BB;
// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.BaseAffordanceTheme`1<Unity.Mathematics.float4>
struct BaseAffordanceTheme_1_t60FBA85492EC3431BE3CBD8C976E4135789C1549;
// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.BaseAsyncAffordanceStateReceiver`1<System.Single>
struct BaseAsyncAffordanceStateReceiver_1_t9F71F1E671366CF2426BC30A1CD0D35587818D28;
// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.BaseAsyncAffordanceStateReceiver`1<Unity.Mathematics.float2>
struct BaseAsyncAffordanceStateReceiver_1_t9879CC74B2C80AA315DAA9D5E06D849895E1A9CB;
// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.BaseAsyncAffordanceStateReceiver`1<Unity.Mathematics.float3>
struct BaseAsyncAffordanceStateReceiver_1_t1AF80AFA78475513159AB74414CDD1BF93201ED6;
// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.BaseAsyncAffordanceStateReceiver`1<Unity.Mathematics.float4>
struct BaseAsyncAffordanceStateReceiver_1_tC556B9C9DC69E2C3852D4935744863C36921F072;
// Unity.XR.CoreUtils.Bindings.Variables.BindableVariable`1<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.AffordanceStateData>
struct BindableVariable_1_t8FDD824B71E4868C9A1011DF94BED5A0049FCF42;
// Unity.XR.CoreUtils.Bindings.Variables.BindableVariable`1<System.Single>
struct BindableVariable_1_tAB8C2D23769D801C8E39D4AA927DD23AF0E6816C;
// Unity.XR.CoreUtils.Bindings.Variables.BindableVariable`1<Unity.Mathematics.float2>
struct BindableVariable_1_tD9956DB091E51BF2B9A64DA4F6E4E5A140604DA6;
// Unity.XR.CoreUtils.Bindings.Variables.BindableVariable`1<Unity.Mathematics.float3>
struct BindableVariable_1_tB68DAB26AE7AF6E274A845BB487AEE92F9E1DAA0;
// Unity.XR.CoreUtils.Bindings.Variables.BindableVariable`1<Unity.Mathematics.float4>
struct BindableVariable_1_t972973977CDA4D22EBEFEFDE6154C3FDDB161959;
// Unity.XR.CoreUtils.Datums.DatumProperty`2<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Audio.AudioAffordanceTheme,UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Audio.AudioAffordanceThemeDatum>
struct DatumProperty_2_tC950317A653DFCACA690E035C1A0A6D6C5A7C4F7;
// Unity.XR.CoreUtils.Datums.DatumProperty`2<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.FloatAffordanceTheme,UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.FloatAffordanceThemeDatum>
struct DatumProperty_2_t445759401FE438FD8F8A2459F97810AC7173AC4B;
// Unity.XR.CoreUtils.Datums.DatumProperty`2<System.Object,System.Object>
struct DatumProperty_2_t907D56A52042E7E1BC71047C8EF00A927234B2A9;
// Unity.XR.CoreUtils.Datums.DatumProperty`2<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.Vector2AffordanceTheme,UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.Vector2AffordanceThemeDatum>
struct DatumProperty_2_t59BA55FF291E8F57615B2D3778D96A715F9E16B7;
// Unity.XR.CoreUtils.Datums.DatumProperty`2<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.Vector3AffordanceTheme,UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.Vector3AffordanceThemeDatum>
struct DatumProperty_2_t61D52574939BA04FAE5D715B545BD9B1FA047E3B;
// Unity.XR.CoreUtils.Datums.DatumProperty`2<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.Vector4AffordanceTheme,UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.Vector4AffordanceThemeDatum>
struct DatumProperty_2_t1E26B88ADD7091AA0A2BCEA3BBB13B8AF8D983AB;
// System.Collections.Generic.Dictionary`2<System.Byte,System.String>
struct Dictionary_2_t5BDC855EB3C5F93CBEDD8BFCF6CE61702F13A4A0;
// System.Func`3<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.AffordanceStateData,UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.AffordanceStateData,System.Boolean>
struct Func_3_tC149F26320436BADDA7AA0CDB3C968E516876E90;
// System.Func`3<System.Single,System.Single,System.Boolean>
struct Func_3_tA9AA477D8A5A68C7DC26AE4792295B80F920E61E;
// System.Func`3<Unity.Mathematics.float2,Unity.Mathematics.float2,System.Boolean>
struct Func_3_t8086548CD5FB540AD8F90D0F66CD22B5BDD97206;
// System.Func`3<Unity.Mathematics.float3,Unity.Mathematics.float3,System.Boolean>
struct Func_3_tE454B2F07459EA885F6D39FCB5E70BF80B11F175;
// System.Func`3<Unity.Mathematics.float4,Unity.Mathematics.float4,System.Boolean>
struct Func_3_t0F3960B571C7D586E85A53CA420CA324108BF354;
// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.IAsyncAffordanceStateReceiver>
struct HashSetList_1_t92284BAC91F283150DE3CB869E3E4FB56883AD28;
// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.ISynchronousAffordanceStateReceiver>
struct HashSetList_1_t2264772D6C39BF21F830E7EF4FA5B6032DCF53FA;
// Unity.XR.CoreUtils.Bindings.Variables.IReadOnlyBindableVariable`1<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.AffordanceStateData>
struct IReadOnlyBindableVariable_1_t27AEE302500BB845FE299C6267D0F3D8CDFBC62E;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.AffordanceThemeData`1<System.Single>>
struct List_1_tF426B09E03B503781B5E08E8F9069C53455A9FF6;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.AffordanceThemeData`1<Unity.Mathematics.float2>>
struct List_1_t0B3FF898F03D318C68FE44FDADB11A1E65C29F92;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.AffordanceThemeData`1<Unity.Mathematics.float3>>
struct List_1_t748D9CD720778AA65378813FE06FFF640467E2C6;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.AffordanceThemeData`1<Unity.Mathematics.float4>>
struct List_1_tDE47D0D28835795EE9F5691863BBEFAC86A3555A;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Audio.AudioAffordanceThemeData>
struct List_1_t2FA2D5D90AD1EC54F704E9733AD4DB8D57CFBA54;
// System.Collections.Generic.List`1<Unity.XR.CoreUtils.Bindings.IEventBinding>
struct List_1_t60791FB9179CEFADA93C6B032DED2E65CB5DA58F;
// System.Collections.Generic.List`1<Unity.Jobs.JobHandle>
struct List_1_t4A3FBCBC51814DA87A56C303277E401A0E9A8366;
// UnityEngine.Events.UnityEvent`1<UnityEngine.Quaternion>
struct UnityEvent_1_tA3CC6DC833EBB0864AD5E6F9BE8920D7E71B32A5;
// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4;
// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>
struct UnityEvent_1_t9A868DD8EBFC0D9D8134D903A170ECBDEE567932;
// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector3>
struct UnityEvent_1_tB42B7E8E9010FF524B45FD0EC7AD37D7D3B006AE;
// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector4>
struct UnityEvent_1_t7FA3641C06EC4F8BD5600438DB4CB16B7042FB59;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// Unity.XR.CoreUtils.Datums.AnimationCurveDatumProperty
struct AnimationCurveDatumProperty_t3E647A9E4598F5D7E85766A3449759FA74DBC485;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Audio.AudioAffordanceReceiver
struct AudioAffordanceReceiver_t68854DF37FCFBBCC267549644D37D433B6CC1010;
// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Audio.AudioAffordanceTheme
struct AudioAffordanceTheme_t8BF9C6D960CBE2CE7F33C4B4960F794790DD3CCE;
// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Audio.AudioAffordanceThemeData
struct AudioAffordanceThemeData_t3F29C6FF9ED5593AF503785A5C7FE342A1EE9D0D;
// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Audio.AudioAffordanceThemeDatum
struct AudioAffordanceThemeDatum_t32D005C30340B160AE74BB8A457BDC4324AAE12F;
// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Audio.AudioAffordanceThemeDatumProperty
struct AudioAffordanceThemeDatumProperty_t6C3F44447E2B121AC858FAC94C4A83CC5D52C6D8;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.BaseAffordanceStateProvider
struct BaseAffordanceStateProvider_t5721F9B16D6C029D832F8D6FA0A47326A581D443;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// Unity.XR.CoreUtils.Bindings.BindingsGroup
struct BindingsGroup_tD5EC90BB10F9D310FE467A7E3A4CAE2E32D0397A;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.FloatAffordanceReceiver
struct FloatAffordanceReceiver_t66E763152C12B894353408702914C6241CA05BDE;
// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.FloatAffordanceTheme
struct FloatAffordanceTheme_t8D690D0E9B25A66531A082E48F439E0103EDB7CC;
// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.FloatAffordanceThemeDatum
struct FloatAffordanceThemeDatum_tECC2748C67B4ACE7A0CB7269E5D191A4ABB76C0D;
// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.FloatAffordanceThemeDatumProperty
struct FloatAffordanceThemeDatumProperty_tA307B32B7063CC8BF659E27BF7BCD6D24DC43CD9;
// Unity.XR.CoreUtils.FloatUnityEvent
struct FloatUnityEvent_t46E9673B05FBD9AED74FC5787BAAD6B1523F68CE;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// Unity.XR.CoreUtils.Bindings.IEventBinding
struct IEventBinding_tD24AFBA7F41D64F17C1FA501D200A3B6439C4CBB;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.QuaternionAffordanceReceiver
struct QuaternionAffordanceReceiver_t89BEB49026E8DB40585D46CC46B4FE493E95B218;
// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.QuaternionEulerAffordanceReceiver
struct QuaternionEulerAffordanceReceiver_t6D994D08B0F6E9C7BBF07E91A6D4E1359F38D7BD;
// Unity.XR.CoreUtils.QuaternionUnityEvent
struct QuaternionUnityEvent_t1BEB6C61F25448B45AA9553A256C27310A726A55;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.Vector2AffordanceReceiver
struct Vector2AffordanceReceiver_t47ED28F9A8C82B928592400FC52BD730FF7E8003;
// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.Vector2AffordanceTheme
struct Vector2AffordanceTheme_tCB1DE552963E8DEBF132195D98E2A5E44CF6C0F3;
// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.Vector2AffordanceThemeDatum
struct Vector2AffordanceThemeDatum_tFD6F843759A9408094B283A877BD83A8E273BA4F;
// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.Vector2AffordanceThemeDatumProperty
struct Vector2AffordanceThemeDatumProperty_t698C12459080436F8505FBD63C5CDA5D3A9AD3A4;
// Unity.XR.CoreUtils.Vector2UnityEvent
struct Vector2UnityEvent_tE303206C54DC9947E1777052E0926BFAFC2CE1DC;
// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.Vector3AffordanceReceiver
struct Vector3AffordanceReceiver_t2849A6C2EA72BD2796A4E0A5831DFDF230988458;
// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.Vector3AffordanceTheme
struct Vector3AffordanceTheme_t634E7949441EB1C9CC97EDBECF62A74698525D6D;
// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.Vector3AffordanceThemeDatum
struct Vector3AffordanceThemeDatum_t74F3B9A65163C35F53273CE00AE76A6A7907E614;
// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.Vector3AffordanceThemeDatumProperty
struct Vector3AffordanceThemeDatumProperty_t7AE01710B3906411C8AA4452F3110650DB78C38F;
// Unity.XR.CoreUtils.Vector3UnityEvent
struct Vector3UnityEvent_tBF9BAC8FCCE7BBF3E98E9EDA6157F00E28B9153E;
// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.Vector4AffordanceReceiver
struct Vector4AffordanceReceiver_tAD6C5536CC5C4DD1B982E3DE066EED898F2A605D;
// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.Vector4AffordanceTheme
struct Vector4AffordanceTheme_tFEBF93156999F1929B8C2D3B30B2AF50864CECAF;
// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.Vector4AffordanceThemeDatum
struct Vector4AffordanceThemeDatum_t80D4885B3A6A66B1CF6C56ED9F135A8F73EBA199;
// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.Vector4AffordanceThemeDatumProperty
struct Vector4AffordanceThemeDatumProperty_t1EA63872063AAAFE62442D012086C96D5F685656;
// Unity.XR.CoreUtils.Vector4UnityEvent
struct Vector4UnityEvent_t0DA3E85F1D8C1D7DF9AB40C6D9FB743450D1525F;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t1643FA0114A827809902992385492446993A54FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AffordanceStateShortcuts_t7A59ACF9B6B40EBA55C1B04AB596C869777F496D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BindableVariable_1_t972973977CDA4D22EBEFEFDE6154C3FDDB161959_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BindableVariable_1_tAB8C2D23769D801C8E39D4AA927DD23AF0E6816C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BindableVariable_1_tB68DAB26AE7AF6E274A845BB487AEE92F9E1DAA0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BindableVariable_1_tD9956DB091E51BF2B9A64DA4F6E4E5A140604DA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BindingsGroup_tD5EC90BB10F9D310FE467A7E3A4CAE2E32D0397A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FloatAffordanceTheme_t8D690D0E9B25A66531A082E48F439E0103EDB7CC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyBindableVariable_1_t27AEE302500BB845FE299C6267D0F3D8CDFBC62E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2AffordanceTheme_tCB1DE552963E8DEBF132195D98E2A5E44CF6C0F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3AffordanceTheme_t634E7949441EB1C9CC97EDBECF62A74698525D6D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector4AffordanceTheme_tFEBF93156999F1929B8C2D3B30B2AF50864CECAF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRLoggingUtils_tF0C63DB5488367266FC58DF3AA1D3E98B361A7B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral061E0ABE7ACDAC0E42B94EDF0A84253309EEE0F8;
IL2CPP_EXTERN_C String_t* _stringLiteral1A1CF05AAB23FB516F5054A01B9FA64FDE195373;
IL2CPP_EXTERN_C String_t* _stringLiteral3DFF752277D61098EC31BD7634EEA79875F7108E;
IL2CPP_EXTERN_C String_t* _stringLiteral7235986DB2D84548BA6B9FB5507107B2ACBEA2A6;
IL2CPP_EXTERN_C String_t* _stringLiteral8429215AD9851EFB5AB9CBC64AF5D86F28ADF1F6;
IL2CPP_EXTERN_C String_t* _stringLiteralAB19214357C9B907F084AEE21249D9A6CA372DF9;
IL2CPP_EXTERN_C String_t* _stringLiteralAFB8FE824BD73270D82EDCA13F2E0F7BD34E4B0F;
IL2CPP_EXTERN_C String_t* _stringLiteralEB3613FE280B7E7695302D741A2D0E6116952BE9;
IL2CPP_EXTERN_C String_t* _stringLiteralEC3E296F3933E53A708D8297BE06FBDF3F612458;
IL2CPP_EXTERN_C const RuntimeMethod* AudioAffordanceReceiver_OnAffordanceStateUpdated_m87547740A5FF0FCDC246EC6041B86C1881EBF03B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseAsyncAffordanceStateReceiver_1__ctor_m2FC21462B08F9EFCFB797CA5F749BDE12710A967_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseAsyncAffordanceStateReceiver_1__ctor_m31C1E2011327B9940996B978AEA1ED41C851374C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseAsyncAffordanceStateReceiver_1__ctor_m94BEE2B700A798FAA1700E2C96F1C615C77FA82E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseAsyncAffordanceStateReceiver_1__ctor_mBF5F4D5985C97D9986548E067C9540C134EDD94D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BindableVariable_1__ctor_m3B2BE2508856426BB69A25713700113BE2D879B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BindableVariable_1__ctor_mBD926FA831F5CBD6689542AAFF6367A5AC8E5E0C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BindableVariable_1__ctor_mDC40C552DDD7391A70B329BD063A7C4BBD98E408_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BindableVariable_1__ctor_mE889114EFE12DE8C970F0BF41C8513DBA9330560_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DatumProperty_2_get_Value_m42124DD3823EEDCB315576F6CFB202F7E1EDEE3C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DatumProperty_2_get_Value_m5C2C883AFAA09BCA637B7624F3702C7ED4868331_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DatumProperty_2_get_Value_m89DE407D45539BD40DBBD6E555DA13DD87E2E639_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DatumProperty_2_get_Value_m9D784B9C34F96D570FF46D3F6E0959CD1CD68718_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DatumProperty_2_get_Value_mCB02F12BEE90DAEB35A2455336D82788729DA131_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IJobExtensions_Schedule_TisFloat2TweenJob_t8A50F8709E39BDC0B96C85C802431F6DFB8FB864_mEEAC96C6F46875D406666309C8A98EEF77220C22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IJobExtensions_Schedule_TisFloat3TweenJob_t1ABCE2AF2296C75ECE719050B75BC7A92ED28644_m0296E0B47B8B7BE4F3330C2E5F2174C535AF0B2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IJobExtensions_Schedule_TisFloat4TweenJob_t9D63A32AC58F3FA5F68BF78254D59453B6FD3CCB_m998E94F928F62F881D50BBBC67527BA933BC88B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IJobExtensions_Schedule_TisFloatTweenJob_tA1F66E54D3DBA65A5E68334BA5532EB1D6543F98_mC96694C279FE42D48D23DABA1C3B5DCEBA551748_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenJobData_1_get_stateTransitionAmountFloat_mAB269BE097AFCC8C1BAE64F36A970366E41E4317_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenJobData_1_get_stateTransitionAmountFloat_mC3B2141B141B4BCD6FB60969E41B44A5ED7257C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenJobData_1_get_stateTransitionAmountFloat_mE1CF2FE9E8A0DD1E3595B8077AD3E892C103E0D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenJobData_1_get_stateTransitionAmountFloat_mE222959BD75937C4DCA1A7F1EF540EB9635402FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenJobData_1_get_stateTransitionAmountFloat_mFAE34E3AEE32746766E8DBBE7D53D7440268A069_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_m4A1955C2E48894AD3EDEE54D656EF248CDCE1D33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_m756C9B879DDBE079CDE2D06DC231CE42C01C4AD0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_mB89ED0EFF1CDB8BF69BA4B4E0E158A9F7A704FAF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_mC0D2092AFD86FA47D9A13F41A19963E8E59CA485_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.BaseAffordanceTheme`1<System.Single>
struct BaseAffordanceTheme_1_t1E77E3027D1DEBEA5C94340841F9E857938E9637  : public RuntimeObject
{
	// Unity.XR.CoreUtils.Datums.AnimationCurveDatumProperty UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.BaseAffordanceTheme`1::m_StateAnimationCurve
	AnimationCurveDatumProperty_t3E647A9E4598F5D7E85766A3449759FA74DBC485* ___m_StateAnimationCurve_0;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.AffordanceThemeData`1<T>> UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.BaseAffordanceTheme`1::m_List
	List_1_tF426B09E03B503781B5E08E8F9069C53455A9FF6* ___m_List_1;
};

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.BaseAffordanceTheme`1<Unity.Mathematics.float2>
struct BaseAffordanceTheme_1_t8D071F9F08B006341599D081E084B8CBC8D33DB8  : public RuntimeObject
{
	// Unity.XR.CoreUtils.Datums.AnimationCurveDatumProperty UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.BaseAffordanceTheme`1::m_StateAnimationCurve
	AnimationCurveDatumProperty_t3E647A9E4598F5D7E85766A3449759FA74DBC485* ___m_StateAnimationCurve_0;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.AffordanceThemeData`1<T>> UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.BaseAffordanceTheme`1::m_List
	List_1_t0B3FF898F03D318C68FE44FDADB11A1E65C29F92* ___m_List_1;
};

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.BaseAffordanceTheme`1<Unity.Mathematics.float3>
struct BaseAffordanceTheme_1_tDE4824F41024DDB47B2C61FE23860FB77EA960BB  : public RuntimeObject
{
	// Unity.XR.CoreUtils.Datums.AnimationCurveDatumProperty UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.BaseAffordanceTheme`1::m_StateAnimationCurve
	AnimationCurveDatumProperty_t3E647A9E4598F5D7E85766A3449759FA74DBC485* ___m_StateAnimationCurve_0;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.AffordanceThemeData`1<T>> UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.BaseAffordanceTheme`1::m_List
	List_1_t748D9CD720778AA65378813FE06FFF640467E2C6* ___m_List_1;
};

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.BaseAffordanceTheme`1<Unity.Mathematics.float4>
struct BaseAffordanceTheme_1_t60FBA85492EC3431BE3CBD8C976E4135789C1549  : public RuntimeObject
{
	// Unity.XR.CoreUtils.Datums.AnimationCurveDatumProperty UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.BaseAffordanceTheme`1::m_StateAnimationCurve
	AnimationCurveDatumProperty_t3E647A9E4598F5D7E85766A3449759FA74DBC485* ___m_StateAnimationCurve_0;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.AffordanceThemeData`1<T>> UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.BaseAffordanceTheme`1::m_List
	List_1_tDE47D0D28835795EE9F5691863BBEFAC86A3555A* ___m_List_1;
};

// Unity.XR.CoreUtils.Bindings.Variables.BindableVariableBase`1<System.Single>
struct BindableVariableBase_1_tB9252B4815AD3E511244D3B578854D3FF333E4BD  : public RuntimeObject
{
	// System.Action`1<T> Unity.XR.CoreUtils.Bindings.Variables.BindableVariableBase`1::valueUpdated
	Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___valueUpdated_0;
	// T Unity.XR.CoreUtils.Bindings.Variables.BindableVariableBase`1::m_InternalValue
	float ___m_InternalValue_1;
	// System.Boolean Unity.XR.CoreUtils.Bindings.Variables.BindableVariableBase`1::m_CheckEquality
	bool ___m_CheckEquality_2;
	// System.Boolean Unity.XR.CoreUtils.Bindings.Variables.BindableVariableBase`1::m_IsInitialized
	bool ___m_IsInitialized_3;
	// System.Func`3<T,T,System.Boolean> Unity.XR.CoreUtils.Bindings.Variables.BindableVariableBase`1::m_EqualityMethod
	Func_3_tA9AA477D8A5A68C7DC26AE4792295B80F920E61E* ___m_EqualityMethod_4;
	// System.Int32 Unity.XR.CoreUtils.Bindings.Variables.BindableVariableBase`1::m_BindingCount
	int32_t ___m_BindingCount_5;
};

// Unity.XR.CoreUtils.Datums.DatumProperty`2<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Audio.AudioAffordanceTheme,UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Audio.AudioAffordanceThemeDatum>
struct DatumProperty_2_tC950317A653DFCACA690E035C1A0A6D6C5A7C4F7  : public RuntimeObject
{
	// System.Boolean Unity.XR.CoreUtils.Datums.DatumProperty`2::m_UseConstant
	bool ___m_UseConstant_0;
	// TValue Unity.XR.CoreUtils.Datums.DatumProperty`2::m_ConstantValue
	AudioAffordanceTheme_t8BF9C6D960CBE2CE7F33C4B4960F794790DD3CCE* ___m_ConstantValue_1;
	// TDatum Unity.XR.CoreUtils.Datums.DatumProperty`2::m_Variable
	AudioAffordanceThemeDatum_t32D005C30340B160AE74BB8A457BDC4324AAE12F* ___m_Variable_2;
};

// Unity.XR.CoreUtils.Datums.DatumProperty`2<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.FloatAffordanceTheme,UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.FloatAffordanceThemeDatum>
struct DatumProperty_2_t445759401FE438FD8F8A2459F97810AC7173AC4B  : public RuntimeObject
{
	// System.Boolean Unity.XR.CoreUtils.Datums.DatumProperty`2::m_UseConstant
	bool ___m_UseConstant_0;
	// TValue Unity.XR.CoreUtils.Datums.DatumProperty`2::m_ConstantValue
	FloatAffordanceTheme_t8D690D0E9B25A66531A082E48F439E0103EDB7CC* ___m_ConstantValue_1;
	// TDatum Unity.XR.CoreUtils.Datums.DatumProperty`2::m_Variable
	FloatAffordanceThemeDatum_tECC2748C67B4ACE7A0CB7269E5D191A4ABB76C0D* ___m_Variable_2;
};

// Unity.XR.CoreUtils.Datums.DatumProperty`2<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.Vector2AffordanceTheme,UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.Vector2AffordanceThemeDatum>
struct DatumProperty_2_t59BA55FF291E8F57615B2D3778D96A715F9E16B7  : public RuntimeObject
{
	// System.Boolean Unity.XR.CoreUtils.Datums.DatumProperty`2::m_UseConstant
	bool ___m_UseConstant_0;
	// TValue Unity.XR.CoreUtils.Datums.DatumProperty`2::m_ConstantValue
	Vector2AffordanceTheme_tCB1DE552963E8DEBF132195D98E2A5E44CF6C0F3* ___m_ConstantValue_1;
	// TDatum Unity.XR.CoreUtils.Datums.DatumProperty`2::m_Variable
	Vector2AffordanceThemeDatum_tFD6F843759A9408094B283A877BD83A8E273BA4F* ___m_Variable_2;
};

// Unity.XR.CoreUtils.Datums.DatumProperty`2<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.Vector3AffordanceTheme,UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.Vector3AffordanceThemeDatum>
struct DatumProperty_2_t61D52574939BA04FAE5D715B545BD9B1FA047E3B  : public RuntimeObject
{
	// System.Boolean Unity.XR.CoreUtils.Datums.DatumProperty`2::m_UseConstant
	bool ___m_UseConstant_0;
	// TValue Unity.XR.CoreUtils.Datums.DatumProperty`2::m_ConstantValue
	Vector3AffordanceTheme_t634E7949441EB1C9CC97EDBECF62A74698525D6D* ___m_ConstantValue_1;
	// TDatum Unity.XR.CoreUtils.Datums.DatumProperty`2::m_Variable
	Vector3AffordanceThemeDatum_t74F3B9A65163C35F53273CE00AE76A6A7907E614* ___m_Variable_2;
};

// Unity.XR.CoreUtils.Datums.DatumProperty`2<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.Vector4AffordanceTheme,UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.Vector4AffordanceThemeDatum>
struct DatumProperty_2_t1E26B88ADD7091AA0A2BCEA3BBB13B8AF8D983AB  : public RuntimeObject
{
	// System.Boolean Unity.XR.CoreUtils.Datums.DatumProperty`2::m_UseConstant
	bool ___m_UseConstant_0;
	// TValue Unity.XR.CoreUtils.Datums.DatumProperty`2::m_ConstantValue
	Vector4AffordanceTheme_tFEBF93156999F1929B8C2D3B30B2AF50864CECAF* ___m_ConstantValue_1;
	// TDatum Unity.XR.CoreUtils.Datums.DatumProperty`2::m_Variable
	Vector4AffordanceThemeDatum_t80D4885B3A6A66B1CF6C56ED9F135A8F73EBA199* ___m_Variable_2;
};

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.AffordanceStateShortcuts
struct AffordanceStateShortcuts_t7A59ACF9B6B40EBA55C1B04AB596C869777F496D  : public RuntimeObject
{
};

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Audio.AudioAffordanceTheme
struct AudioAffordanceTheme_t8BF9C6D960CBE2CE7F33C4B4960F794790DD3CCE  : public RuntimeObject
{
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Audio.AudioAffordanceThemeData> UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Audio.AudioAffordanceTheme::m_List
	List_1_t2FA2D5D90AD1EC54F704E9733AD4DB8D57CFBA54* ___m_List_0;
};

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Audio.AudioAffordanceThemeData
struct AudioAffordanceThemeData_t3F29C6FF9ED5593AF503785A5C7FE342A1EE9D0D  : public RuntimeObject
{
	// System.String UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Audio.AudioAffordanceThemeData::stateName
	String_t* ___stateName_0;
	// UnityEngine.AudioClip UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Audio.AudioAffordanceThemeData::stateEntered
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___stateEntered_1;
	// UnityEngine.AudioClip UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Audio.AudioAffordanceThemeData::stateExited
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___stateExited_2;
};

// Unity.XR.CoreUtils.Bindings.BindingsGroup
struct BindingsGroup_tD5EC90BB10F9D310FE467A7E3A4CAE2E32D0397A  : public RuntimeObject
{
	// System.Collections.Generic.List`1<Unity.XR.CoreUtils.Bindings.IEventBinding> Unity.XR.CoreUtils.Bindings.BindingsGroup::m_Bindings
	List_1_t60791FB9179CEFADA93C6B032DED2E65CB5DA58F* ___m_Bindings_0;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
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

// Unity.XR.CoreUtils.Bindings.Variables.BindableVariable`1<System.Single>
struct BindableVariable_1_tAB8C2D23769D801C8E39D4AA927DD23AF0E6816C  : public BindableVariableBase_1_tB9252B4815AD3E511244D3B578854D3FF333E4BD
{
};

// UnityEngine.Events.UnityEvent`1<UnityEngine.Quaternion>
struct UnityEvent_1_tA3CC6DC833EBB0864AD5E6F9BE8920D7E71B32A5  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>
struct UnityEvent_1_t9A868DD8EBFC0D9D8134D903A170ECBDEE567932  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector3>
struct UnityEvent_1_tB42B7E8E9010FF524B45FD0EC7AD37D7D3B006AE  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector4>
struct UnityEvent_1_t7FA3641C06EC4F8BD5600438DB4CB16B7042FB59  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.AffordanceStateData
struct AffordanceStateData_t925209B85B56D04F7F178061B1C91280DA6DBC69 
{
	// System.Byte UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.AffordanceStateData::<stateIndex>k__BackingField
	uint8_t ___U3CstateIndexU3Ek__BackingField_1;
	// System.Byte UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.AffordanceStateData::<stateTransitionIncrement>k__BackingField
	uint8_t ___U3CstateTransitionIncrementU3Ek__BackingField_2;
};

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Audio.AudioAffordanceThemeDatumProperty
struct AudioAffordanceThemeDatumProperty_t6C3F44447E2B121AC858FAC94C4A83CC5D52C6D8  : public DatumProperty_2_tC950317A653DFCACA690E035C1A0A6D6C5A7C4F7
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
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

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.FloatAffordanceTheme
struct FloatAffordanceTheme_t8D690D0E9B25A66531A082E48F439E0103EDB7CC  : public BaseAffordanceTheme_1_t1E77E3027D1DEBEA5C94340841F9E857938E9637
{
};

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.FloatAffordanceThemeDatumProperty
struct FloatAffordanceThemeDatumProperty_tA307B32B7063CC8BF659E27BF7BCD6D24DC43CD9  : public DatumProperty_2_t445759401FE438FD8F8A2459F97810AC7173AC4B
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.Vector2AffordanceTheme
struct Vector2AffordanceTheme_tCB1DE552963E8DEBF132195D98E2A5E44CF6C0F3  : public BaseAffordanceTheme_1_t8D071F9F08B006341599D081E084B8CBC8D33DB8
{
};

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.Vector2AffordanceThemeDatumProperty
struct Vector2AffordanceThemeDatumProperty_t698C12459080436F8505FBD63C5CDA5D3A9AD3A4  : public DatumProperty_2_t59BA55FF291E8F57615B2D3778D96A715F9E16B7
{
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.Vector3AffordanceTheme
struct Vector3AffordanceTheme_t634E7949441EB1C9CC97EDBECF62A74698525D6D  : public BaseAffordanceTheme_1_tDE4824F41024DDB47B2C61FE23860FB77EA960BB
{
};

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.Vector3AffordanceThemeDatumProperty
struct Vector3AffordanceThemeDatumProperty_t7AE01710B3906411C8AA4452F3110650DB78C38F  : public DatumProperty_2_t61D52574939BA04FAE5D715B545BD9B1FA047E3B
{
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.Vector4AffordanceTheme
struct Vector4AffordanceTheme_tFEBF93156999F1929B8C2D3B30B2AF50864CECAF  : public BaseAffordanceTheme_1_t60FBA85492EC3431BE3CBD8C976E4135789C1549
{
};

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.Vector4AffordanceThemeDatumProperty
struct Vector4AffordanceThemeDatumProperty_t1EA63872063AAAFE62442D012086C96D5F685656  : public DatumProperty_2_t1E26B88ADD7091AA0A2BCEA3BBB13B8AF8D983AB
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

// Unity.Mathematics.float2
struct float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA 
{
	// System.Single Unity.Mathematics.float2::x
	float ___x_0;
	// System.Single Unity.Mathematics.float2::y
	float ___y_1;
};

// Unity.Mathematics.float3
struct float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E 
{
	// System.Single Unity.Mathematics.float3::x
	float ___x_0;
	// System.Single Unity.Mathematics.float3::y
	float ___y_1;
	// System.Single Unity.Mathematics.float3::z
	float ___z_2;
};

// Unity.Mathematics.float4
struct float4_t89D9A294E7A79BD81BFBDD18654508532958555E 
{
	// System.Single Unity.Mathematics.float4::x
	float ___x_0;
	// System.Single Unity.Mathematics.float4::y
	float ___y_1;
	// System.Single Unity.Mathematics.float4::z
	float ___z_2;
	// System.Single Unity.Mathematics.float4::w
	float ___w_3;
};

// Unity.XR.CoreUtils.Bindings.Variables.BindableVariableBase`1<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.AffordanceStateData>
struct BindableVariableBase_1_t32CA28067318C6C2AEC7AD2C86F9F1C16561E897  : public RuntimeObject
{
	// System.Action`1<T> Unity.XR.CoreUtils.Bindings.Variables.BindableVariableBase`1::valueUpdated
	Action_1_t1643FA0114A827809902992385492446993A54FA* ___valueUpdated_0;
	// T Unity.XR.CoreUtils.Bindings.Variables.BindableVariableBase`1::m_InternalValue
	AffordanceStateData_t925209B85B56D04F7F178061B1C91280DA6DBC69 ___m_InternalValue_1;
	// System.Boolean Unity.XR.CoreUtils.Bindings.Variables.BindableVariableBase`1::m_CheckEquality
	bool ___m_CheckEquality_2;
	// System.Boolean Unity.XR.CoreUtils.Bindings.Variables.BindableVariableBase`1::m_IsInitialized
	bool ___m_IsInitialized_3;
	// System.Func`3<T,T,System.Boolean> Unity.XR.CoreUtils.Bindings.Variables.BindableVariableBase`1::m_EqualityMethod
	Func_3_tC149F26320436BADDA7AA0CDB3C968E516876E90* ___m_EqualityMethod_4;
	// System.Int32 Unity.XR.CoreUtils.Bindings.Variables.BindableVariableBase`1::m_BindingCount
	int32_t ___m_BindingCount_5;
};

// Unity.XR.CoreUtils.Bindings.Variables.BindableVariableBase`1<Unity.Mathematics.float2>
struct BindableVariableBase_1_t6AFE5CC130D9BEAB469874D2EB96B03B8FEBDFA7  : public RuntimeObject
{
	// System.Action`1<T> Unity.XR.CoreUtils.Bindings.Variables.BindableVariableBase`1::valueUpdated
	Action_1_t589E99142AE3A56042136BE78BB58A315BB8BA00* ___valueUpdated_0;
	// T Unity.XR.CoreUtils.Bindings.Variables.BindableVariableBase`1::m_InternalValue
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___m_InternalValue_1;
	// System.Boolean Unity.XR.CoreUtils.Bindings.Variables.BindableVariableBase`1::m_CheckEquality
	bool ___m_CheckEquality_2;
	// System.Boolean Unity.XR.CoreUtils.Bindings.Variables.BindableVariableBase`1::m_IsInitialized
	bool ___m_IsInitialized_3;
	// System.Func`3<T,T,System.Boolean> Unity.XR.CoreUtils.Bindings.Variables.BindableVariableBase`1::m_EqualityMethod
	Func_3_t8086548CD5FB540AD8F90D0F66CD22B5BDD97206* ___m_EqualityMethod_4;
	// System.Int32 Unity.XR.CoreUtils.Bindings.Variables.BindableVariableBase`1::m_BindingCount
	int32_t ___m_BindingCount_5;
};

// Unity.XR.CoreUtils.Bindings.Variables.BindableVariableBase`1<Unity.Mathematics.float3>
struct BindableVariableBase_1_t6E41640D2419E25E9579C521963F28A608530041  : public RuntimeObject
{
	// System.Action`1<T> Unity.XR.CoreUtils.Bindings.Variables.BindableVariableBase`1::valueUpdated
	Action_1_t81CC87F0365077EC678FAF69B68180DC9750249B* ___valueUpdated_0;
	// T Unity.XR.CoreUtils.Bindings.Variables.BindableVariableBase`1::m_InternalValue
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___m_InternalValue_1;
	// System.Boolean Unity.XR.CoreUtils.Bindings.Variables.BindableVariableBase`1::m_CheckEquality
	bool ___m_CheckEquality_2;
	// System.Boolean Unity.XR.CoreUtils.Bindings.Variables.BindableVariableBase`1::m_IsInitialized
	bool ___m_IsInitialized_3;
	// System.Func`3<T,T,System.Boolean> Unity.XR.CoreUtils.Bindings.Variables.BindableVariableBase`1::m_EqualityMethod
	Func_3_tE454B2F07459EA885F6D39FCB5E70BF80B11F175* ___m_EqualityMethod_4;
	// System.Int32 Unity.XR.CoreUtils.Bindings.Variables.BindableVariableBase`1::m_BindingCount
	int32_t ___m_BindingCount_5;
};

// Unity.XR.CoreUtils.Bindings.Variables.BindableVariableBase`1<Unity.Mathematics.float4>
struct BindableVariableBase_1_tA743BB0869BB2EA62927623EA16A14C162A811A5  : public RuntimeObject
{
	// System.Action`1<T> Unity.XR.CoreUtils.Bindings.Variables.BindableVariableBase`1::valueUpdated
	Action_1_t0E68BC0397A1E694BFCBD1A793724DE2EA532023* ___valueUpdated_0;
	// T Unity.XR.CoreUtils.Bindings.Variables.BindableVariableBase`1::m_InternalValue
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___m_InternalValue_1;
	// System.Boolean Unity.XR.CoreUtils.Bindings.Variables.BindableVariableBase`1::m_CheckEquality
	bool ___m_CheckEquality_2;
	// System.Boolean Unity.XR.CoreUtils.Bindings.Variables.BindableVariableBase`1::m_IsInitialized
	bool ___m_IsInitialized_3;
	// System.Func`3<T,T,System.Boolean> Unity.XR.CoreUtils.Bindings.Variables.BindableVariableBase`1::m_EqualityMethod
	Func_3_t0F3960B571C7D586E85A53CA420CA324108BF354* ___m_EqualityMethod_4;
	// System.Int32 Unity.XR.CoreUtils.Bindings.Variables.BindableVariableBase`1::m_BindingCount
	int32_t ___m_BindingCount_5;
};

// Unity.Collections.Allocator
struct Allocator_t996642592271AAD9EE688F142741D512C07B5824 
{
	// System.Int32 Unity.Collections.Allocator::value__
	int32_t ___value___2;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	intptr_t ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// Unity.XR.CoreUtils.FloatUnityEvent
struct FloatUnityEvent_t46E9673B05FBD9AED74FC5787BAAD6B1523F68CE  : public UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4
{
};

// Unity.Jobs.JobHandle
struct JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 
{
	// System.IntPtr Unity.Jobs.JobHandle::jobGroup
	intptr_t ___jobGroup_0;
	// System.Int32 Unity.Jobs.JobHandle::version
	int32_t ___version_1;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Unity.XR.CoreUtils.QuaternionUnityEvent
struct QuaternionUnityEvent_t1BEB6C61F25448B45AA9553A256C27310A726A55  : public UnityEvent_1_tA3CC6DC833EBB0864AD5E6F9BE8920D7E71B32A5
{
};

// Unity.XR.CoreUtils.Vector2UnityEvent
struct Vector2UnityEvent_tE303206C54DC9947E1777052E0926BFAFC2CE1DC  : public UnityEvent_1_t9A868DD8EBFC0D9D8134D903A170ECBDEE567932
{
};

// Unity.XR.CoreUtils.Vector3UnityEvent
struct Vector3UnityEvent_tBF9BAC8FCCE7BBF3E98E9EDA6157F00E28B9153E  : public UnityEvent_1_tB42B7E8E9010FF524B45FD0EC7AD37D7D3B006AE
{
};

// Unity.XR.CoreUtils.Vector4UnityEvent
struct Vector4UnityEvent_t0DA3E85F1D8C1D7DF9AB40C6D9FB743450D1525F  : public UnityEvent_1_t7FA3641C06EC4F8BD5600438DB4CB16B7042FB59
{
};

// UnityEngine.WrapMode
struct WrapMode_t6C6EABC32662DF078C3C977196618603C2F3A079 
{
	// System.Int32 UnityEngine.WrapMode::value__
	int32_t ___value___2;
};

// Unity.XR.CoreUtils.Bindings.Variables.BindableVariable`1<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.AffordanceStateData>
struct BindableVariable_1_t8FDD824B71E4868C9A1011DF94BED5A0049FCF42  : public BindableVariableBase_1_t32CA28067318C6C2AEC7AD2C86F9F1C16561E897
{
};

// Unity.XR.CoreUtils.Bindings.Variables.BindableVariable`1<Unity.Mathematics.float2>
struct BindableVariable_1_tD9956DB091E51BF2B9A64DA4F6E4E5A140604DA6  : public BindableVariableBase_1_t6AFE5CC130D9BEAB469874D2EB96B03B8FEBDFA7
{
};

// Unity.XR.CoreUtils.Bindings.Variables.BindableVariable`1<Unity.Mathematics.float3>
struct BindableVariable_1_tB68DAB26AE7AF6E274A845BB487AEE92F9E1DAA0  : public BindableVariableBase_1_t6E41640D2419E25E9579C521963F28A608530041
{
};

// Unity.XR.CoreUtils.Bindings.Variables.BindableVariable`1<Unity.Mathematics.float4>
struct BindableVariable_1_t972973977CDA4D22EBEFEFDE6154C3FDDB161959  : public BindableVariableBase_1_tA743BB0869BB2EA62927623EA16A14C162A811A5
{
};

// Unity.Collections.NativeArray`1<UnityEngine.Color>
struct NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<System.Single>
struct NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<Unity.Mathematics.float2>
struct NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<Unity.Mathematics.float3>
struct NativeArray_1_tEDE9DAD2CAE5954286BC0EF394A57ED0AC69FEE6 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<Unity.Mathematics.float4>
struct NativeArray_1_tB5EA234C6ABA1F626A4BEF4053D06783E15A3881 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.Action`1<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.AffordanceStateData>
struct Action_1_t1643FA0114A827809902992385492446993A54FA  : public MulticastDelegate_t
{
};

// System.Func`3<System.Single,System.Single,System.Boolean>
struct Func_3_tA9AA477D8A5A68C7DC26AE4792295B80F920E61E  : public MulticastDelegate_t
{
};

// System.Func`3<Unity.Mathematics.float2,Unity.Mathematics.float2,System.Boolean>
struct Func_3_t8086548CD5FB540AD8F90D0F66CD22B5BDD97206  : public MulticastDelegate_t
{
};

// System.Func`3<Unity.Mathematics.float3,Unity.Mathematics.float3,System.Boolean>
struct Func_3_tE454B2F07459EA885F6D39FCB5E70BF80B11F175  : public MulticastDelegate_t
{
};

// System.Func`3<Unity.Mathematics.float4,Unity.Mathematics.float4,System.Boolean>
struct Func_3_t0F3960B571C7D586E85A53CA420CA324108BF354  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.XR.Interaction.Toolkit.Utilities.Collections.NativeCurve
struct NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2 
{
	// Unity.Collections.NativeArray`1<System.Single> UnityEngine.XR.Interaction.Toolkit.Utilities.Collections.NativeCurve::m_Values
	NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF ___m_Values_0;
	// UnityEngine.WrapMode UnityEngine.XR.Interaction.Toolkit.Utilities.Collections.NativeCurve::m_PreWrapMode
	int32_t ___m_PreWrapMode_1;
	// UnityEngine.WrapMode UnityEngine.XR.Interaction.Toolkit.Utilities.Collections.NativeCurve::m_PostWrapMode
	int32_t ___m_PostWrapMode_2;
};

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1<UnityEngine.Color>
struct TweenJobData_1_t9932452930B7CDE5DC4DA408B50B8E4C7A3AAFB7 
{
	// T UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1::initialValue
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___initialValue_2;
	// T UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1::stateOriginValue
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___stateOriginValue_3;
	// T UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1::stateTargetValue
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___stateTargetValue_4;
	// System.Byte UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1::stateTransitionIncrement
	uint8_t ___stateTransitionIncrement_5;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Collections.NativeCurve UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1::nativeCurve
	NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2 ___nativeCurve_6;
	// T UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1::tweenStartValue
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___tweenStartValue_7;
	// System.Single UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1::tweenAmount
	float ___tweenAmount_8;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1::outputData
	NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D ___outputData_9;
};

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1<System.Single>
struct TweenJobData_1_t06FAD94FCA49A795B22C7FA2EA018F83E450B97E 
{
	// T UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1::initialValue
	float ___initialValue_2;
	// T UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1::stateOriginValue
	float ___stateOriginValue_3;
	// T UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1::stateTargetValue
	float ___stateTargetValue_4;
	// System.Byte UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1::stateTransitionIncrement
	uint8_t ___stateTransitionIncrement_5;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Collections.NativeCurve UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1::nativeCurve
	NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2 ___nativeCurve_6;
	// T UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1::tweenStartValue
	float ___tweenStartValue_7;
	// System.Single UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1::tweenAmount
	float ___tweenAmount_8;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1::outputData
	NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF ___outputData_9;
};

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1<Unity.Mathematics.float2>
struct TweenJobData_1_t6C4118E82C1B93FB8B3D245997EC0C5B35BD9FF3 
{
	// T UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1::initialValue
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___initialValue_2;
	// T UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1::stateOriginValue
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___stateOriginValue_3;
	// T UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1::stateTargetValue
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___stateTargetValue_4;
	// System.Byte UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1::stateTransitionIncrement
	uint8_t ___stateTransitionIncrement_5;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Collections.NativeCurve UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1::nativeCurve
	NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2 ___nativeCurve_6;
	// T UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1::tweenStartValue
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___tweenStartValue_7;
	// System.Single UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1::tweenAmount
	float ___tweenAmount_8;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1::outputData
	NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E ___outputData_9;
};

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1<Unity.Mathematics.float3>
struct TweenJobData_1_t5779EC937EA396970F0C89EB88D60F9D7CB1977D 
{
	// T UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1::initialValue
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___initialValue_2;
	// T UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1::stateOriginValue
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___stateOriginValue_3;
	// T UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1::stateTargetValue
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___stateTargetValue_4;
	// System.Byte UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1::stateTransitionIncrement
	uint8_t ___stateTransitionIncrement_5;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Collections.NativeCurve UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1::nativeCurve
	NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2 ___nativeCurve_6;
	// T UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1::tweenStartValue
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___tweenStartValue_7;
	// System.Single UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1::tweenAmount
	float ___tweenAmount_8;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1::outputData
	NativeArray_1_tEDE9DAD2CAE5954286BC0EF394A57ED0AC69FEE6 ___outputData_9;
};

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1<Unity.Mathematics.float4>
struct TweenJobData_1_t750244DB9B41308E85DF94F53236CD62E3A3483B 
{
	// T UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1::initialValue
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___initialValue_2;
	// T UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1::stateOriginValue
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___stateOriginValue_3;
	// T UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1::stateTargetValue
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___stateTargetValue_4;
	// System.Byte UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1::stateTransitionIncrement
	uint8_t ___stateTransitionIncrement_5;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Collections.NativeCurve UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1::nativeCurve
	NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2 ___nativeCurve_6;
	// T UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1::tweenStartValue
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___tweenStartValue_7;
	// System.Single UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1::tweenAmount
	float ___tweenAmount_8;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1::outputData
	NativeArray_1_tB5EA234C6ABA1F626A4BEF4053D06783E15A3881 ___outputData_9;
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.BaseAffordanceStateReceiver`1<System.Single>
struct BaseAffordanceStateReceiver_1_t35840CFA66BD6E3A9ADCA38630DDB604BC812500  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.BaseAffordanceStateProvider UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.BaseAffordanceStateReceiver`1::m_AffordanceStateProvider
	BaseAffordanceStateProvider_t5721F9B16D6C029D832F8D6FA0A47326A581D443* ___m_AffordanceStateProvider_4;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.BaseAffordanceStateReceiver`1::m_ReplaceIdleStateValueWithInitialValue
	bool ___m_ReplaceIdleStateValueWithInitialValue_5;
	// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.BaseAffordanceTheme`1<T> UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.BaseAffordanceStateReceiver`1::m_AffordanceTheme
	BaseAffordanceTheme_1_t1E77E3027D1DEBEA5C94340841F9E857938E9637* ___m_AffordanceTheme_6;
	// Unity.XR.CoreUtils.Bindings.Variables.BindableVariable`1<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.AffordanceStateData> UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.BaseAffordanceStateReceiver`1::m_AffordanceStateData
	BindableVariable_1_t8FDD824B71E4868C9A1011DF94BED5A0049FCF42* ___m_AffordanceStateData_7;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.BaseAffordanceStateReceiver`1::m_Initialized
	bool ___m_Initialized_8;
	// T UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.BaseAffordanceStateReceiver`1::<initialValue>k__BackingField
	float ___U3CinitialValueU3Ek__BackingField_9;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.BaseAffordanceStateReceiver`1::<initialValueCaptured>k__BackingField
	bool ___U3CinitialValueCapturedU3Ek__BackingField_10;
};

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.BaseAffordanceStateReceiver`1<Unity.Mathematics.float2>
struct BaseAffordanceStateReceiver_1_t28419CB6B416DDA3255D822A07BB8CEEAA179EFC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.BaseAffordanceStateProvider UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.BaseAffordanceStateReceiver`1::m_AffordanceStateProvider
	BaseAffordanceStateProvider_t5721F9B16D6C029D832F8D6FA0A47326A581D443* ___m_AffordanceStateProvider_4;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.BaseAffordanceStateReceiver`1::m_ReplaceIdleStateValueWithInitialValue
	bool ___m_ReplaceIdleStateValueWithInitialValue_5;
	// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.BaseAffordanceTheme`1<T> UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.BaseAffordanceStateReceiver`1::m_AffordanceTheme
	BaseAffordanceTheme_1_t8D071F9F08B006341599D081E084B8CBC8D33DB8* ___m_AffordanceTheme_6;
	// Unity.XR.CoreUtils.Bindings.Variables.BindableVariable`1<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.AffordanceStateData> UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.BaseAffordanceStateReceiver`1::m_AffordanceStateData
	BindableVariable_1_t8FDD824B71E4868C9A1011DF94BED5A0049FCF42* ___m_AffordanceStateData_7;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.BaseAffordanceStateReceiver`1::m_Initialized
	bool ___m_Initialized_8;
	// T UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.BaseAffordanceStateReceiver`1::<initialValue>k__BackingField
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___U3CinitialValueU3Ek__BackingField_9;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.BaseAffordanceStateReceiver`1::<initialValueCaptured>k__BackingField
	bool ___U3CinitialValueCapturedU3Ek__BackingField_10;
};

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.BaseAffordanceStateReceiver`1<Unity.Mathematics.float3>
struct BaseAffordanceStateReceiver_1_t8B790ACDC3D68ED037D4C2E8E8812B2BDA97DBB4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.BaseAffordanceStateProvider UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.BaseAffordanceStateReceiver`1::m_AffordanceStateProvider
	BaseAffordanceStateProvider_t5721F9B16D6C029D832F8D6FA0A47326A581D443* ___m_AffordanceStateProvider_4;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.BaseAffordanceStateReceiver`1::m_ReplaceIdleStateValueWithInitialValue
	bool ___m_ReplaceIdleStateValueWithInitialValue_5;
	// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.BaseAffordanceTheme`1<T> UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.BaseAffordanceStateReceiver`1::m_AffordanceTheme
	BaseAffordanceTheme_1_tDE4824F41024DDB47B2C61FE23860FB77EA960BB* ___m_AffordanceTheme_6;
	// Unity.XR.CoreUtils.Bindings.Variables.BindableVariable`1<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.AffordanceStateData> UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.BaseAffordanceStateReceiver`1::m_AffordanceStateData
	BindableVariable_1_t8FDD824B71E4868C9A1011DF94BED5A0049FCF42* ___m_AffordanceStateData_7;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.BaseAffordanceStateReceiver`1::m_Initialized
	bool ___m_Initialized_8;
	// T UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.BaseAffordanceStateReceiver`1::<initialValue>k__BackingField
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___U3CinitialValueU3Ek__BackingField_9;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.BaseAffordanceStateReceiver`1::<initialValueCaptured>k__BackingField
	bool ___U3CinitialValueCapturedU3Ek__BackingField_10;
};

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.BaseAffordanceStateReceiver`1<Unity.Mathematics.float4>
struct BaseAffordanceStateReceiver_1_t96902C40CFFA7F6BB10876B0B08BA910BAB15C54  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.BaseAffordanceStateProvider UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.BaseAffordanceStateReceiver`1::m_AffordanceStateProvider
	BaseAffordanceStateProvider_t5721F9B16D6C029D832F8D6FA0A47326A581D443* ___m_AffordanceStateProvider_4;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.BaseAffordanceStateReceiver`1::m_ReplaceIdleStateValueWithInitialValue
	bool ___m_ReplaceIdleStateValueWithInitialValue_5;
	// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.BaseAffordanceTheme`1<T> UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.BaseAffordanceStateReceiver`1::m_AffordanceTheme
	BaseAffordanceTheme_1_t60FBA85492EC3431BE3CBD8C976E4135789C1549* ___m_AffordanceTheme_6;
	// Unity.XR.CoreUtils.Bindings.Variables.BindableVariable`1<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.AffordanceStateData> UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.BaseAffordanceStateReceiver`1::m_AffordanceStateData
	BindableVariable_1_t8FDD824B71E4868C9A1011DF94BED5A0049FCF42* ___m_AffordanceStateData_7;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.BaseAffordanceStateReceiver`1::m_Initialized
	bool ___m_Initialized_8;
	// T UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.BaseAffordanceStateReceiver`1::<initialValue>k__BackingField
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___U3CinitialValueU3Ek__BackingField_9;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.BaseAffordanceStateReceiver`1::<initialValueCaptured>k__BackingField
	bool ___U3CinitialValueCapturedU3Ek__BackingField_10;
};

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Audio.AudioAffordanceReceiver
struct AudioAffordanceReceiver_t68854DF37FCFBBCC267549644D37D433B6CC1010  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.BaseAffordanceStateProvider UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Audio.AudioAffordanceReceiver::m_AffordanceStateProvider
	BaseAffordanceStateProvider_t5721F9B16D6C029D832F8D6FA0A47326A581D443* ___m_AffordanceStateProvider_4;
	// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Audio.AudioAffordanceThemeDatumProperty UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Audio.AudioAffordanceReceiver::m_AffordanceThemeDatum
	AudioAffordanceThemeDatumProperty_t6C3F44447E2B121AC858FAC94C4A83CC5D52C6D8* ___m_AffordanceThemeDatum_5;
	// UnityEngine.AudioSource UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Audio.AudioAffordanceReceiver::m_AudioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___m_AudioSource_6;
	// Unity.XR.CoreUtils.Bindings.BindingsGroup UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Audio.AudioAffordanceReceiver::m_BindingsGroup
	BindingsGroup_tD5EC90BB10F9D310FE467A7E3A4CAE2E32D0397A* ___m_BindingsGroup_7;
	// System.Byte UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Audio.AudioAffordanceReceiver::m_LastAffordanceStateIndex
	uint8_t ___m_LastAffordanceStateIndex_8;
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.BaseAffordanceStateProvider
struct BaseAffordanceStateProvider_t5721F9B16D6C029D832F8D6FA0A47326A581D443  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.BaseAffordanceStateProvider::m_TransitionDuration
	float ___m_TransitionDuration_4;
	// Unity.XR.CoreUtils.Bindings.Variables.BindableVariable`1<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.AffordanceStateData> UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.BaseAffordanceStateProvider::m_AffordanceStateData
	BindableVariable_1_t8FDD824B71E4868C9A1011DF94BED5A0049FCF42* ___m_AffordanceStateData_5;
	// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.IAsyncAffordanceStateReceiver> UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.BaseAffordanceStateProvider::m_AsyncAffordanceReceivers
	HashSetList_1_t92284BAC91F283150DE3CB869E3E4FB56883AD28* ___m_AsyncAffordanceReceivers_6;
	// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.ISynchronousAffordanceStateReceiver> UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.BaseAffordanceStateProvider::m_SynchronousAffordanceReceivers
	HashSetList_1_t2264772D6C39BF21F830E7EF4FA5B6032DCF53FA* ___m_SynchronousAffordanceReceivers_7;
	// System.Collections.Generic.List`1<Unity.Jobs.JobHandle> UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.BaseAffordanceStateProvider::m_ScheduledJobs
	List_1_t4A3FBCBC51814DA87A56C303277E401A0E9A8366* ___m_ScheduledJobs_8;
	// Unity.XR.CoreUtils.Bindings.BindingsGroup UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.BaseAffordanceStateProvider::m_BindingsGroup
	BindingsGroup_tD5EC90BB10F9D310FE467A7E3A4CAE2E32D0397A* ___m_BindingsGroup_9;
	// System.Single UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.BaseAffordanceStateProvider::m_TimeSinceLastStateUpdate
	float ___m_TimeSinceLastStateUpdate_10;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.BaseAffordanceStateProvider::m_IsFirstFrame
	bool ___m_IsFirstFrame_11;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.BaseAffordanceStateProvider::m_CompletingTweens
	bool ___m_CompletingTweens_12;
	// System.Single UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.BaseAffordanceStateProvider::m_InterpolationSpeed
	float ___m_InterpolationSpeed_13;
	// System.Single UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.BaseAffordanceStateProvider::m_MaxTransitionDuration
	float ___m_MaxTransitionDuration_14;
};

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.ColorTweenJob
struct ColorTweenJob_t1BEEC88338C32DADE1D0E383FB1E1327444022A4 
{
	// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1<UnityEngine.Color> UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.ColorTweenJob::<jobData>k__BackingField
	TweenJobData_1_t9932452930B7CDE5DC4DA408B50B8E4C7A3AAFB7 ___U3CjobDataU3Ek__BackingField_0;
	// System.Byte UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.ColorTweenJob::<colorBlendMode>k__BackingField
	uint8_t ___U3CcolorBlendModeU3Ek__BackingField_1;
	// System.Single UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.ColorTweenJob::<colorBlendAmount>k__BackingField
	float ___U3CcolorBlendAmountU3Ek__BackingField_2;
};

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.Float2TweenJob
struct Float2TweenJob_t8A50F8709E39BDC0B96C85C802431F6DFB8FB864 
{
	// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1<Unity.Mathematics.float2> UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.Float2TweenJob::<jobData>k__BackingField
	TweenJobData_1_t6C4118E82C1B93FB8B3D245997EC0C5B35BD9FF3 ___U3CjobDataU3Ek__BackingField_0;
};

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.Float3TweenJob
struct Float3TweenJob_t1ABCE2AF2296C75ECE719050B75BC7A92ED28644 
{
	// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1<Unity.Mathematics.float3> UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.Float3TweenJob::<jobData>k__BackingField
	TweenJobData_1_t5779EC937EA396970F0C89EB88D60F9D7CB1977D ___U3CjobDataU3Ek__BackingField_0;
};

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.Float4TweenJob
struct Float4TweenJob_t9D63A32AC58F3FA5F68BF78254D59453B6FD3CCB 
{
	// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1<Unity.Mathematics.float4> UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.Float4TweenJob::<jobData>k__BackingField
	TweenJobData_1_t750244DB9B41308E85DF94F53236CD62E3A3483B ___U3CjobDataU3Ek__BackingField_0;
};

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.FloatTweenJob
struct FloatTweenJob_tA1F66E54D3DBA65A5E68334BA5532EB1D6543F98 
{
	// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1<System.Single> UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.FloatTweenJob::<jobData>k__BackingField
	TweenJobData_1_t06FAD94FCA49A795B22C7FA2EA018F83E450B97E ___U3CjobDataU3Ek__BackingField_0;
};

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.BaseAsyncAffordanceStateReceiver`1<System.Single>
struct BaseAsyncAffordanceStateReceiver_1_t9F71F1E671366CF2426BC30A1CD0D35587818D28  : public BaseAffordanceStateReceiver_1_t35840CFA66BD6E3A9ADCA38630DDB604BC812500
{
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.BaseAsyncAffordanceStateReceiver`1::m_JobOutputStore
	NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF ___m_JobOutputStore_11;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Collections.NativeCurve UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.BaseAsyncAffordanceStateReceiver`1::m_NativeCurve
	NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2 ___m_NativeCurve_12;
	// Unity.Jobs.JobHandle UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.BaseAsyncAffordanceStateReceiver`1::m_LastJobHandle
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___m_LastJobHandle_13;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.BaseAsyncAffordanceStateReceiver`1::m_OutputInitialized
	bool ___m_OutputInitialized_14;
};

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.BaseAsyncAffordanceStateReceiver`1<Unity.Mathematics.float2>
struct BaseAsyncAffordanceStateReceiver_1_t9879CC74B2C80AA315DAA9D5E06D849895E1A9CB  : public BaseAffordanceStateReceiver_1_t28419CB6B416DDA3255D822A07BB8CEEAA179EFC
{
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.BaseAsyncAffordanceStateReceiver`1::m_JobOutputStore
	NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E ___m_JobOutputStore_11;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Collections.NativeCurve UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.BaseAsyncAffordanceStateReceiver`1::m_NativeCurve
	NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2 ___m_NativeCurve_12;
	// Unity.Jobs.JobHandle UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.BaseAsyncAffordanceStateReceiver`1::m_LastJobHandle
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___m_LastJobHandle_13;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.BaseAsyncAffordanceStateReceiver`1::m_OutputInitialized
	bool ___m_OutputInitialized_14;
};

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.BaseAsyncAffordanceStateReceiver`1<Unity.Mathematics.float3>
struct BaseAsyncAffordanceStateReceiver_1_t1AF80AFA78475513159AB74414CDD1BF93201ED6  : public BaseAffordanceStateReceiver_1_t8B790ACDC3D68ED037D4C2E8E8812B2BDA97DBB4
{
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.BaseAsyncAffordanceStateReceiver`1::m_JobOutputStore
	NativeArray_1_tEDE9DAD2CAE5954286BC0EF394A57ED0AC69FEE6 ___m_JobOutputStore_11;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Collections.NativeCurve UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.BaseAsyncAffordanceStateReceiver`1::m_NativeCurve
	NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2 ___m_NativeCurve_12;
	// Unity.Jobs.JobHandle UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.BaseAsyncAffordanceStateReceiver`1::m_LastJobHandle
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___m_LastJobHandle_13;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.BaseAsyncAffordanceStateReceiver`1::m_OutputInitialized
	bool ___m_OutputInitialized_14;
};

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.BaseAsyncAffordanceStateReceiver`1<Unity.Mathematics.float4>
struct BaseAsyncAffordanceStateReceiver_1_tC556B9C9DC69E2C3852D4935744863C36921F072  : public BaseAffordanceStateReceiver_1_t96902C40CFFA7F6BB10876B0B08BA910BAB15C54
{
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.BaseAsyncAffordanceStateReceiver`1::m_JobOutputStore
	NativeArray_1_tB5EA234C6ABA1F626A4BEF4053D06783E15A3881 ___m_JobOutputStore_11;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Collections.NativeCurve UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.BaseAsyncAffordanceStateReceiver`1::m_NativeCurve
	NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2 ___m_NativeCurve_12;
	// Unity.Jobs.JobHandle UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.BaseAsyncAffordanceStateReceiver`1::m_LastJobHandle
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___m_LastJobHandle_13;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.BaseAsyncAffordanceStateReceiver`1::m_OutputInitialized
	bool ___m_OutputInitialized_14;
};

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.FloatAffordanceReceiver
struct FloatAffordanceReceiver_t66E763152C12B894353408702914C6241CA05BDE  : public BaseAsyncAffordanceStateReceiver_1_t9F71F1E671366CF2426BC30A1CD0D35587818D28
{
	// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.FloatAffordanceThemeDatumProperty UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.FloatAffordanceReceiver::m_AffordanceThemeDatum
	FloatAffordanceThemeDatumProperty_tA307B32B7063CC8BF659E27BF7BCD6D24DC43CD9* ___m_AffordanceThemeDatum_15;
	// Unity.XR.CoreUtils.FloatUnityEvent UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.FloatAffordanceReceiver::m_ValueUpdated
	FloatUnityEvent_t46E9673B05FBD9AED74FC5787BAAD6B1523F68CE* ___m_ValueUpdated_16;
	// Unity.XR.CoreUtils.Bindings.Variables.BindableVariable`1<System.Single> UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.FloatAffordanceReceiver::<affordanceValue>k__BackingField
	BindableVariable_1_tAB8C2D23769D801C8E39D4AA927DD23AF0E6816C* ___U3CaffordanceValueU3Ek__BackingField_17;
};

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.Vector2AffordanceReceiver
struct Vector2AffordanceReceiver_t47ED28F9A8C82B928592400FC52BD730FF7E8003  : public BaseAsyncAffordanceStateReceiver_1_t9879CC74B2C80AA315DAA9D5E06D849895E1A9CB
{
	// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.Vector2AffordanceThemeDatumProperty UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.Vector2AffordanceReceiver::m_AffordanceThemeDatum
	Vector2AffordanceThemeDatumProperty_t698C12459080436F8505FBD63C5CDA5D3A9AD3A4* ___m_AffordanceThemeDatum_15;
	// Unity.XR.CoreUtils.Vector2UnityEvent UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.Vector2AffordanceReceiver::m_ValueUpdated
	Vector2UnityEvent_tE303206C54DC9947E1777052E0926BFAFC2CE1DC* ___m_ValueUpdated_16;
	// Unity.XR.CoreUtils.Bindings.Variables.BindableVariable`1<Unity.Mathematics.float2> UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.Vector2AffordanceReceiver::<affordanceValue>k__BackingField
	BindableVariable_1_tD9956DB091E51BF2B9A64DA4F6E4E5A140604DA6* ___U3CaffordanceValueU3Ek__BackingField_17;
};

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.Vector3AffordanceReceiver
struct Vector3AffordanceReceiver_t2849A6C2EA72BD2796A4E0A5831DFDF230988458  : public BaseAsyncAffordanceStateReceiver_1_t1AF80AFA78475513159AB74414CDD1BF93201ED6
{
	// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.Vector3AffordanceThemeDatumProperty UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.Vector3AffordanceReceiver::m_AffordanceThemeDatum
	Vector3AffordanceThemeDatumProperty_t7AE01710B3906411C8AA4452F3110650DB78C38F* ___m_AffordanceThemeDatum_15;
	// Unity.XR.CoreUtils.Vector3UnityEvent UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.Vector3AffordanceReceiver::m_ValueUpdated
	Vector3UnityEvent_tBF9BAC8FCCE7BBF3E98E9EDA6157F00E28B9153E* ___m_ValueUpdated_16;
	// Unity.XR.CoreUtils.Bindings.Variables.BindableVariable`1<Unity.Mathematics.float3> UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.Vector3AffordanceReceiver::<affordanceValue>k__BackingField
	BindableVariable_1_tB68DAB26AE7AF6E274A845BB487AEE92F9E1DAA0* ___U3CaffordanceValueU3Ek__BackingField_17;
};

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.Vector4AffordanceReceiver
struct Vector4AffordanceReceiver_tAD6C5536CC5C4DD1B982E3DE066EED898F2A605D  : public BaseAsyncAffordanceStateReceiver_1_tC556B9C9DC69E2C3852D4935744863C36921F072
{
	// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.Vector4AffordanceThemeDatumProperty UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.Vector4AffordanceReceiver::m_AffordanceThemeDatum
	Vector4AffordanceThemeDatumProperty_t1EA63872063AAAFE62442D012086C96D5F685656* ___m_AffordanceThemeDatum_15;
	// Unity.XR.CoreUtils.Vector4UnityEvent UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.Vector4AffordanceReceiver::m_ValueUpdated
	Vector4UnityEvent_t0DA3E85F1D8C1D7DF9AB40C6D9FB743450D1525F* ___m_ValueUpdated_16;
	// Unity.XR.CoreUtils.Bindings.Variables.BindableVariable`1<Unity.Mathematics.float4> UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.Vector4AffordanceReceiver::<affordanceValue>k__BackingField
	BindableVariable_1_t972973977CDA4D22EBEFEFDE6154C3FDDB161959* ___U3CaffordanceValueU3Ek__BackingField_17;
};

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.QuaternionAffordanceReceiver
struct QuaternionAffordanceReceiver_t89BEB49026E8DB40585D46CC46B4FE493E95B218  : public Vector4AffordanceReceiver_tAD6C5536CC5C4DD1B982E3DE066EED898F2A605D
{
	// Unity.XR.CoreUtils.QuaternionUnityEvent UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.QuaternionAffordanceReceiver::m_QuaternionValueUpdated
	QuaternionUnityEvent_t1BEB6C61F25448B45AA9553A256C27310A726A55* ___m_QuaternionValueUpdated_18;
};

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.QuaternionEulerAffordanceReceiver
struct QuaternionEulerAffordanceReceiver_t6D994D08B0F6E9C7BBF07E91A6D4E1359F38D7BD  : public Vector3AffordanceReceiver_t2849A6C2EA72BD2796A4E0A5831DFDF230988458
{
	// Unity.XR.CoreUtils.QuaternionUnityEvent UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.QuaternionEulerAffordanceReceiver::m_QuaternionValueUpdated
	QuaternionUnityEvent_t1BEB6C61F25448B45AA9553A256C27310A726A55* ___m_QuaternionValueUpdated_18;
};

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.BaseAffordanceTheme`1<System.Single>

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.BaseAffordanceTheme`1<System.Single>

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.BaseAffordanceTheme`1<Unity.Mathematics.float2>

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.BaseAffordanceTheme`1<Unity.Mathematics.float2>

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.BaseAffordanceTheme`1<Unity.Mathematics.float3>

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.BaseAffordanceTheme`1<Unity.Mathematics.float3>

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.BaseAffordanceTheme`1<Unity.Mathematics.float4>

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.BaseAffordanceTheme`1<Unity.Mathematics.float4>

// Unity.XR.CoreUtils.Datums.DatumProperty`2<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Audio.AudioAffordanceTheme,UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Audio.AudioAffordanceThemeDatum>

// Unity.XR.CoreUtils.Datums.DatumProperty`2<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Audio.AudioAffordanceTheme,UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Audio.AudioAffordanceThemeDatum>

// Unity.XR.CoreUtils.Datums.DatumProperty`2<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.FloatAffordanceTheme,UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.FloatAffordanceThemeDatum>

// Unity.XR.CoreUtils.Datums.DatumProperty`2<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.FloatAffordanceTheme,UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.FloatAffordanceThemeDatum>

// Unity.XR.CoreUtils.Datums.DatumProperty`2<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.Vector2AffordanceTheme,UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.Vector2AffordanceThemeDatum>

// Unity.XR.CoreUtils.Datums.DatumProperty`2<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.Vector2AffordanceTheme,UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.Vector2AffordanceThemeDatum>

// Unity.XR.CoreUtils.Datums.DatumProperty`2<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.Vector3AffordanceTheme,UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.Vector3AffordanceThemeDatum>

// Unity.XR.CoreUtils.Datums.DatumProperty`2<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.Vector3AffordanceTheme,UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.Vector3AffordanceThemeDatum>

// Unity.XR.CoreUtils.Datums.DatumProperty`2<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.Vector4AffordanceTheme,UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.Vector4AffordanceThemeDatum>

// Unity.XR.CoreUtils.Datums.DatumProperty`2<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.Vector4AffordanceTheme,UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.Vector4AffordanceThemeDatum>

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.AffordanceStateShortcuts
struct AffordanceStateShortcuts_t7A59ACF9B6B40EBA55C1B04AB596C869777F496D_StaticFields
{
	// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.AffordanceStateData UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.AffordanceStateShortcuts::<disabledState>k__BackingField
	AffordanceStateData_t925209B85B56D04F7F178061B1C91280DA6DBC69 ___U3CdisabledStateU3Ek__BackingField_1;
	// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.AffordanceStateData UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.AffordanceStateShortcuts::<idleState>k__BackingField
	AffordanceStateData_t925209B85B56D04F7F178061B1C91280DA6DBC69 ___U3CidleStateU3Ek__BackingField_3;
	// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.AffordanceStateData UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.AffordanceStateShortcuts::<hoveredState>k__BackingField
	AffordanceStateData_t925209B85B56D04F7F178061B1C91280DA6DBC69 ___U3ChoveredStateU3Ek__BackingField_5;
	// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.AffordanceStateData UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.AffordanceStateShortcuts::<hoveredPriorityState>k__BackingField
	AffordanceStateData_t925209B85B56D04F7F178061B1C91280DA6DBC69 ___U3ChoveredPriorityStateU3Ek__BackingField_7;
	// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.AffordanceStateData UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.AffordanceStateShortcuts::<selectedState>k__BackingField
	AffordanceStateData_t925209B85B56D04F7F178061B1C91280DA6DBC69 ___U3CselectedStateU3Ek__BackingField_9;
	// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.AffordanceStateData UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.AffordanceStateShortcuts::<activatedState>k__BackingField
	AffordanceStateData_t925209B85B56D04F7F178061B1C91280DA6DBC69 ___U3CactivatedStateU3Ek__BackingField_11;
	// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.AffordanceStateData UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.AffordanceStateShortcuts::<focusedState>k__BackingField
	AffordanceStateData_t925209B85B56D04F7F178061B1C91280DA6DBC69 ___U3CfocusedStateU3Ek__BackingField_13;
	// System.Collections.Generic.Dictionary`2<System.Byte,System.String> UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.AffordanceStateShortcuts::k_StateNames
	Dictionary_2_t5BDC855EB3C5F93CBEDD8BFCF6CE61702F13A4A0* ___k_StateNames_14;
	// System.Byte UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.AffordanceStateShortcuts::<stateCount>k__BackingField
	uint8_t ___U3CstateCountU3Ek__BackingField_15;
};

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.AffordanceStateShortcuts

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Audio.AudioAffordanceTheme

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Audio.AudioAffordanceTheme

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Audio.AudioAffordanceThemeData

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Audio.AudioAffordanceThemeData

// Unity.XR.CoreUtils.Bindings.BindingsGroup

// Unity.XR.CoreUtils.Bindings.BindingsGroup

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Text.StringBuilder

// System.Text.StringBuilder

// Unity.XR.CoreUtils.Bindings.Variables.BindableVariable`1<System.Single>

// Unity.XR.CoreUtils.Bindings.Variables.BindableVariable`1<System.Single>

// UnityEngine.Events.UnityEvent`1<UnityEngine.Quaternion>

// UnityEngine.Events.UnityEvent`1<UnityEngine.Quaternion>

// UnityEngine.Events.UnityEvent`1<System.Single>

// UnityEngine.Events.UnityEvent`1<System.Single>

// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>

// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>

// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector3>

// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector3>

// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector4>

// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector4>

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.AffordanceStateData

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.AffordanceStateData

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Audio.AudioAffordanceThemeDatumProperty

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Audio.AudioAffordanceThemeDatumProperty

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

// UnityEngine.Color

// UnityEngine.Color

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.FloatAffordanceTheme

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.FloatAffordanceTheme

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.FloatAffordanceThemeDatumProperty

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.FloatAffordanceThemeDatumProperty

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// System.Single

// System.Single

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector2

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.Vector2AffordanceTheme

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.Vector2AffordanceTheme

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.Vector2AffordanceThemeDatumProperty

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.Vector2AffordanceThemeDatumProperty

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector3

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.Vector3AffordanceTheme

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.Vector3AffordanceTheme

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.Vector3AffordanceThemeDatumProperty

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.Vector3AffordanceThemeDatumProperty

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// UnityEngine.Vector4

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.Vector4AffordanceTheme

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.Vector4AffordanceTheme

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.Vector4AffordanceThemeDatumProperty

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.Vector4AffordanceThemeDatumProperty

// System.Void

// System.Void

// Unity.Mathematics.float2
struct float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA_StaticFields
{
	// Unity.Mathematics.float2 Unity.Mathematics.float2::zero
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___zero_2;
};

// Unity.Mathematics.float2

// Unity.Mathematics.float3
struct float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E_StaticFields
{
	// Unity.Mathematics.float3 Unity.Mathematics.float3::zero
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___zero_3;
};

// Unity.Mathematics.float3

// Unity.Mathematics.float4
struct float4_t89D9A294E7A79BD81BFBDD18654508532958555E_StaticFields
{
	// Unity.Mathematics.float4 Unity.Mathematics.float4::zero
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___zero_4;
};

// Unity.Mathematics.float4

// Unity.XR.CoreUtils.FloatUnityEvent

// Unity.XR.CoreUtils.FloatUnityEvent

// Unity.Jobs.JobHandle

// Unity.Jobs.JobHandle

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// Unity.XR.CoreUtils.QuaternionUnityEvent

// Unity.XR.CoreUtils.QuaternionUnityEvent

// Unity.XR.CoreUtils.Vector2UnityEvent

// Unity.XR.CoreUtils.Vector2UnityEvent

// Unity.XR.CoreUtils.Vector3UnityEvent

// Unity.XR.CoreUtils.Vector3UnityEvent

// Unity.XR.CoreUtils.Vector4UnityEvent

// Unity.XR.CoreUtils.Vector4UnityEvent

// Unity.XR.CoreUtils.Bindings.Variables.BindableVariable`1<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.AffordanceStateData>

// Unity.XR.CoreUtils.Bindings.Variables.BindableVariable`1<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.AffordanceStateData>

// Unity.XR.CoreUtils.Bindings.Variables.BindableVariable`1<Unity.Mathematics.float2>

// Unity.XR.CoreUtils.Bindings.Variables.BindableVariable`1<Unity.Mathematics.float2>

// Unity.XR.CoreUtils.Bindings.Variables.BindableVariable`1<Unity.Mathematics.float3>

// Unity.XR.CoreUtils.Bindings.Variables.BindableVariable`1<Unity.Mathematics.float3>

// Unity.XR.CoreUtils.Bindings.Variables.BindableVariable`1<Unity.Mathematics.float4>

// Unity.XR.CoreUtils.Bindings.Variables.BindableVariable`1<Unity.Mathematics.float4>

// Unity.Collections.NativeArray`1<UnityEngine.Color>

// Unity.Collections.NativeArray`1<UnityEngine.Color>

// Unity.Collections.NativeArray`1<System.Single>

// Unity.Collections.NativeArray`1<System.Single>

// Unity.Collections.NativeArray`1<Unity.Mathematics.float2>

// Unity.Collections.NativeArray`1<Unity.Mathematics.float2>

// Unity.Collections.NativeArray`1<Unity.Mathematics.float3>

// Unity.Collections.NativeArray`1<Unity.Mathematics.float3>

// Unity.Collections.NativeArray`1<Unity.Mathematics.float4>

// Unity.Collections.NativeArray`1<Unity.Mathematics.float4>

// UnityEngine.AudioClip

// UnityEngine.AudioClip

// UnityEngine.Component

// UnityEngine.Component

// System.Action`1<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.AffordanceStateData>

// System.Action`1<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.AffordanceStateData>

// System.Func`3<System.Single,System.Single,System.Boolean>

// System.Func`3<System.Single,System.Single,System.Boolean>

// System.Func`3<Unity.Mathematics.float2,Unity.Mathematics.float2,System.Boolean>

// System.Func`3<Unity.Mathematics.float2,Unity.Mathematics.float2,System.Boolean>

// System.Func`3<Unity.Mathematics.float3,Unity.Mathematics.float3,System.Boolean>

// System.Func`3<Unity.Mathematics.float3,Unity.Mathematics.float3,System.Boolean>

// System.Func`3<Unity.Mathematics.float4,Unity.Mathematics.float4,System.Boolean>

// System.Func`3<Unity.Mathematics.float4,Unity.Mathematics.float4,System.Boolean>

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// UnityEngine.XR.Interaction.Toolkit.Utilities.Collections.NativeCurve

// UnityEngine.XR.Interaction.Toolkit.Utilities.Collections.NativeCurve

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1<UnityEngine.Color>

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1<UnityEngine.Color>

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1<System.Single>

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1<System.Single>

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1<Unity.Mathematics.float2>

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1<Unity.Mathematics.float2>

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1<Unity.Mathematics.float3>

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1<Unity.Mathematics.float3>

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1<Unity.Mathematics.float4>

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1<Unity.Mathematics.float4>

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Audio.AudioAffordanceReceiver

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Audio.AudioAffordanceReceiver

// UnityEngine.AudioSource

// UnityEngine.AudioSource

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.BaseAffordanceStateProvider

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.BaseAffordanceStateProvider

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.ColorTweenJob

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.ColorTweenJob

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.Float2TweenJob

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.Float2TweenJob

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.Float3TweenJob

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.Float3TweenJob

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.Float4TweenJob

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.Float4TweenJob

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.FloatTweenJob

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.FloatTweenJob

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.BaseAsyncAffordanceStateReceiver`1<System.Single>

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.BaseAsyncAffordanceStateReceiver`1<System.Single>

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.BaseAsyncAffordanceStateReceiver`1<Unity.Mathematics.float2>

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.BaseAsyncAffordanceStateReceiver`1<Unity.Mathematics.float2>

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.BaseAsyncAffordanceStateReceiver`1<Unity.Mathematics.float3>

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.BaseAsyncAffordanceStateReceiver`1<Unity.Mathematics.float3>

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.BaseAsyncAffordanceStateReceiver`1<Unity.Mathematics.float4>

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.BaseAsyncAffordanceStateReceiver`1<Unity.Mathematics.float4>

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.FloatAffordanceReceiver

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.FloatAffordanceReceiver

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.Vector2AffordanceReceiver

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.Vector2AffordanceReceiver

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.Vector3AffordanceReceiver

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.Vector3AffordanceReceiver

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.Vector4AffordanceReceiver

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.Vector4AffordanceReceiver

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.QuaternionAffordanceReceiver

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.QuaternionAffordanceReceiver

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.QuaternionEulerAffordanceReceiver

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.QuaternionEulerAffordanceReceiver
#ifdef __clang__
#pragma clang diagnostic pop
#endif


// TValue Unity.XR.CoreUtils.Datums.DatumProperty`2<System.Object,System.Object>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DatumProperty_2_get_Value_mC5323F936C8D38C133F58E702B1C4D59C4BF48EF_gshared (DatumProperty_2_t907D56A52042E7E1BC71047C8EF00A927234B2A9* __this, const RuntimeMethod* method) ;
// Unity.Jobs.JobHandle Unity.Jobs.IJobExtensions::Schedule<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.FloatTweenJob>(T,Unity.Jobs.JobHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 IJobExtensions_Schedule_TisFloatTweenJob_tA1F66E54D3DBA65A5E68334BA5532EB1D6543F98_mC96694C279FE42D48D23DABA1C3B5DCEBA551748_gshared (FloatTweenJob_tA1F66E54D3DBA65A5E68334BA5532EB1D6543F98 ___0_jobData, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___1_dependsOn, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_gshared (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4* __this, float ___0_arg0, const RuntimeMethod* method) ;
// System.Void Unity.XR.CoreUtils.Bindings.Variables.BindableVariable`1<System.Single>::.ctor(T,System.Boolean,System.Func`3<T,T,System.Boolean>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BindableVariable_1__ctor_mDC40C552DDD7391A70B329BD063A7C4BBD98E408_gshared (BindableVariable_1_tAB8C2D23769D801C8E39D4AA927DD23AF0E6816C* __this, float ___0_initialValue, bool ___1_checkEquality, Func_3_tA9AA477D8A5A68C7DC26AE4792295B80F920E61E* ___2_equalityMethod, bool ___3_startInitialized, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.BaseAsyncAffordanceStateReceiver`1<System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseAsyncAffordanceStateReceiver_1__ctor_m94BEE2B700A798FAA1700E2C96F1C615C77FA82E_gshared (BaseAsyncAffordanceStateReceiver_1_t9F71F1E671366CF2426BC30A1CD0D35587818D28* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Quaternion>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m4A1955C2E48894AD3EDEE54D656EF248CDCE1D33_gshared (UnityEvent_1_tA3CC6DC833EBB0864AD5E6F9BE8920D7E71B32A5* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_arg0, const RuntimeMethod* method) ;
// Unity.Jobs.JobHandle Unity.Jobs.IJobExtensions::Schedule<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.Float2TweenJob>(T,Unity.Jobs.JobHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 IJobExtensions_Schedule_TisFloat2TweenJob_t8A50F8709E39BDC0B96C85C802431F6DFB8FB864_mEEAC96C6F46875D406666309C8A98EEF77220C22_gshared (Float2TweenJob_t8A50F8709E39BDC0B96C85C802431F6DFB8FB864 ___0_jobData, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___1_dependsOn, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m756C9B879DDBE079CDE2D06DC231CE42C01C4AD0_gshared (UnityEvent_1_t9A868DD8EBFC0D9D8134D903A170ECBDEE567932* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_arg0, const RuntimeMethod* method) ;
// System.Void Unity.XR.CoreUtils.Bindings.Variables.BindableVariable`1<Unity.Mathematics.float2>::.ctor(T,System.Boolean,System.Func`3<T,T,System.Boolean>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BindableVariable_1__ctor_m3B2BE2508856426BB69A25713700113BE2D879B3_gshared (BindableVariable_1_tD9956DB091E51BF2B9A64DA4F6E4E5A140604DA6* __this, float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___0_initialValue, bool ___1_checkEquality, Func_3_t8086548CD5FB540AD8F90D0F66CD22B5BDD97206* ___2_equalityMethod, bool ___3_startInitialized, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.BaseAsyncAffordanceStateReceiver`1<Unity.Mathematics.float2>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseAsyncAffordanceStateReceiver_1__ctor_mBF5F4D5985C97D9986548E067C9540C134EDD94D_gshared (BaseAsyncAffordanceStateReceiver_1_t9879CC74B2C80AA315DAA9D5E06D849895E1A9CB* __this, const RuntimeMethod* method) ;
// Unity.Jobs.JobHandle Unity.Jobs.IJobExtensions::Schedule<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.Float3TweenJob>(T,Unity.Jobs.JobHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 IJobExtensions_Schedule_TisFloat3TweenJob_t1ABCE2AF2296C75ECE719050B75BC7A92ED28644_m0296E0B47B8B7BE4F3330C2E5F2174C535AF0B2A_gshared (Float3TweenJob_t1ABCE2AF2296C75ECE719050B75BC7A92ED28644 ___0_jobData, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___1_dependsOn, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector3>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_mB89ED0EFF1CDB8BF69BA4B4E0E158A9F7A704FAF_gshared (UnityEvent_1_tB42B7E8E9010FF524B45FD0EC7AD37D7D3B006AE* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_arg0, const RuntimeMethod* method) ;
// System.Void Unity.XR.CoreUtils.Bindings.Variables.BindableVariable`1<Unity.Mathematics.float3>::.ctor(T,System.Boolean,System.Func`3<T,T,System.Boolean>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BindableVariable_1__ctor_mE889114EFE12DE8C970F0BF41C8513DBA9330560_gshared (BindableVariable_1_tB68DAB26AE7AF6E274A845BB487AEE92F9E1DAA0* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___0_initialValue, bool ___1_checkEquality, Func_3_tE454B2F07459EA885F6D39FCB5E70BF80B11F175* ___2_equalityMethod, bool ___3_startInitialized, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.BaseAsyncAffordanceStateReceiver`1<Unity.Mathematics.float3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseAsyncAffordanceStateReceiver_1__ctor_m31C1E2011327B9940996B978AEA1ED41C851374C_gshared (BaseAsyncAffordanceStateReceiver_1_t1AF80AFA78475513159AB74414CDD1BF93201ED6* __this, const RuntimeMethod* method) ;
// Unity.Jobs.JobHandle Unity.Jobs.IJobExtensions::Schedule<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.Float4TweenJob>(T,Unity.Jobs.JobHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 IJobExtensions_Schedule_TisFloat4TweenJob_t9D63A32AC58F3FA5F68BF78254D59453B6FD3CCB_m998E94F928F62F881D50BBBC67527BA933BC88B8_gshared (Float4TweenJob_t9D63A32AC58F3FA5F68BF78254D59453B6FD3CCB ___0_jobData, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___1_dependsOn, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector4>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_mC0D2092AFD86FA47D9A13F41A19963E8E59CA485_gshared (UnityEvent_1_t7FA3641C06EC4F8BD5600438DB4CB16B7042FB59* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_arg0, const RuntimeMethod* method) ;
// System.Void Unity.XR.CoreUtils.Bindings.Variables.BindableVariable`1<Unity.Mathematics.float4>::.ctor(T,System.Boolean,System.Func`3<T,T,System.Boolean>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BindableVariable_1__ctor_mBD926FA831F5CBD6689542AAFF6367A5AC8E5E0C_gshared (BindableVariable_1_t972973977CDA4D22EBEFEFDE6154C3FDDB161959* __this, float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___0_initialValue, bool ___1_checkEquality, Func_3_t0F3960B571C7D586E85A53CA420CA324108BF354* ___2_equalityMethod, bool ___3_startInitialized, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.BaseAsyncAffordanceStateReceiver`1<Unity.Mathematics.float4>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseAsyncAffordanceStateReceiver_1__ctor_m2FC21462B08F9EFCFB797CA5F749BDE12710A967_gshared (BaseAsyncAffordanceStateReceiver_1_tC556B9C9DC69E2C3852D4935744863C36921F072* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.AffordanceStateData>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mCFEB3F79DCD6AA372B280F86825FCA928D251B20_gshared (Action_1_t1643FA0114A827809902992385492446993A54FA* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Single UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1<UnityEngine.Color>::get_stateTransitionAmountFloat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TweenJobData_1_get_stateTransitionAmountFloat_mE1CF2FE9E8A0DD1E3595B8077AD3E892C103E0D6_gshared (TweenJobData_1_t9932452930B7CDE5DC4DA408B50B8E4C7A3AAFB7* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1<System.Single>::get_stateTransitionAmountFloat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TweenJobData_1_get_stateTransitionAmountFloat_mE222959BD75937C4DCA1A7F1EF540EB9635402FC_gshared (TweenJobData_1_t06FAD94FCA49A795B22C7FA2EA018F83E450B97E* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1<Unity.Mathematics.float2>::get_stateTransitionAmountFloat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TweenJobData_1_get_stateTransitionAmountFloat_mFAE34E3AEE32746766E8DBBE7D53D7440268A069_gshared (TweenJobData_1_t6C4118E82C1B93FB8B3D245997EC0C5B35BD9FF3* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1<Unity.Mathematics.float3>::get_stateTransitionAmountFloat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TweenJobData_1_get_stateTransitionAmountFloat_mAB269BE097AFCC8C1BAE64F36A970366E41E4317_gshared (TweenJobData_1_t5779EC937EA396970F0C89EB88D60F9D7CB1977D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1<Unity.Mathematics.float4>::get_stateTransitionAmountFloat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TweenJobData_1_get_stateTransitionAmountFloat_mC3B2141B141B4BCD6FB60969E41B44A5ED7257C4_gshared (TweenJobData_1_t750244DB9B41308E85DF94F53236CD62E3A3483B* __this, const RuntimeMethod* method) ;

// TValue Unity.XR.CoreUtils.Datums.DatumProperty`2<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.FloatAffordanceTheme,UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.FloatAffordanceThemeDatum>::get_Value()
inline FloatAffordanceTheme_t8D690D0E9B25A66531A082E48F439E0103EDB7CC* DatumProperty_2_get_Value_m5C2C883AFAA09BCA637B7624F3702C7ED4868331 (DatumProperty_2_t445759401FE438FD8F8A2459F97810AC7173AC4B* __this, const RuntimeMethod* method)
{
	return ((  FloatAffordanceTheme_t8D690D0E9B25A66531A082E48F439E0103EDB7CC* (*) (DatumProperty_2_t445759401FE438FD8F8A2459F97810AC7173AC4B*, const RuntimeMethod*))DatumProperty_2_get_Value_mC5323F936C8D38C133F58E702B1C4D59C4BF48EF_gshared)(__this, method);
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.FloatTweenJob::set_jobData(UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1<System.Single>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void FloatTweenJob_set_jobData_m62BC555A7F3277F969592FF740F96692C4F340EA_inline (FloatTweenJob_tA1F66E54D3DBA65A5E68334BA5532EB1D6543F98* IL2CPP_PARAMETER_RESTRICT __this, TweenJobData_1_t06FAD94FCA49A795B22C7FA2EA018F83E450B97E ___0_value, const RuntimeMethod* method) ;
// Unity.Jobs.JobHandle Unity.Jobs.IJobExtensions::Schedule<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.FloatTweenJob>(T,Unity.Jobs.JobHandle)
inline JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 IJobExtensions_Schedule_TisFloatTweenJob_tA1F66E54D3DBA65A5E68334BA5532EB1D6543F98_mC96694C279FE42D48D23DABA1C3B5DCEBA551748 (FloatTweenJob_tA1F66E54D3DBA65A5E68334BA5532EB1D6543F98 ___0_jobData, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___1_dependsOn, const RuntimeMethod* method)
{
	return ((  JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 (*) (FloatTweenJob_tA1F66E54D3DBA65A5E68334BA5532EB1D6543F98, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08, const RuntimeMethod*))IJobExtensions_Schedule_TisFloatTweenJob_tA1F66E54D3DBA65A5E68334BA5532EB1D6543F98_mC96694C279FE42D48D23DABA1C3B5DCEBA551748_gshared)(___0_jobData, ___1_dependsOn, method);
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.FloatAffordanceTheme::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatAffordanceTheme__ctor_m5DEDCB9E9F8C82257C380C760F0F88C909D03BCF (FloatAffordanceTheme_t8D690D0E9B25A66531A082E48F439E0103EDB7CC* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::Invoke(T0)
inline void UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805 (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4* __this, float ___0_arg0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4*, float, const RuntimeMethod*))UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_gshared)(__this, ___0_arg0, method);
}
// System.Void Unity.XR.CoreUtils.Bindings.Variables.BindableVariable`1<System.Single>::.ctor(T,System.Boolean,System.Func`3<T,T,System.Boolean>,System.Boolean)
inline void BindableVariable_1__ctor_mDC40C552DDD7391A70B329BD063A7C4BBD98E408 (BindableVariable_1_tAB8C2D23769D801C8E39D4AA927DD23AF0E6816C* __this, float ___0_initialValue, bool ___1_checkEquality, Func_3_tA9AA477D8A5A68C7DC26AE4792295B80F920E61E* ___2_equalityMethod, bool ___3_startInitialized, const RuntimeMethod* method)
{
	((  void (*) (BindableVariable_1_tAB8C2D23769D801C8E39D4AA927DD23AF0E6816C*, float, bool, Func_3_tA9AA477D8A5A68C7DC26AE4792295B80F920E61E*, bool, const RuntimeMethod*))BindableVariable_1__ctor_mDC40C552DDD7391A70B329BD063A7C4BBD98E408_gshared)(__this, ___0_initialValue, ___1_checkEquality, ___2_equalityMethod, ___3_startInitialized, method);
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.BaseAsyncAffordanceStateReceiver`1<System.Single>::.ctor()
inline void BaseAsyncAffordanceStateReceiver_1__ctor_m94BEE2B700A798FAA1700E2C96F1C615C77FA82E (BaseAsyncAffordanceStateReceiver_1_t9F71F1E671366CF2426BC30A1CD0D35587818D28* __this, const RuntimeMethod* method)
{
	((  void (*) (BaseAsyncAffordanceStateReceiver_1_t9F71F1E671366CF2426BC30A1CD0D35587818D28*, const RuntimeMethod*))BaseAsyncAffordanceStateReceiver_1__ctor_m94BEE2B700A798FAA1700E2C96F1C615C77FA82E_gshared)(__this, method);
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.Vector4AffordanceReceiver::OnAffordanceValueUpdated(Unity.Mathematics.float4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector4AffordanceReceiver_OnAffordanceValueUpdated_m5213F46721A36369FD250DDA5EA52CBA601B7387 (Vector4AffordanceReceiver_tAD6C5536CC5C4DD1B982E3DE066EED898F2A605D* __this, float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___0_newValue, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Quaternion>::Invoke(T0)
inline void UnityEvent_1_Invoke_m4A1955C2E48894AD3EDEE54D656EF248CDCE1D33 (UnityEvent_1_tA3CC6DC833EBB0864AD5E6F9BE8920D7E71B32A5* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_arg0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tA3CC6DC833EBB0864AD5E6F9BE8920D7E71B32A5*, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))UnityEvent_1_Invoke_m4A1955C2E48894AD3EDEE54D656EF248CDCE1D33_gshared)(__this, ___0_arg0, method);
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.Vector4AffordanceReceiver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector4AffordanceReceiver__ctor_mFCA23B39F6D1BC12D0ACBEB54EC5A1FFAE47B582 (Vector4AffordanceReceiver_tAD6C5536CC5C4DD1B982E3DE066EED898F2A605D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.Vector3AffordanceReceiver::OnAffordanceValueUpdated(Unity.Mathematics.float3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3AffordanceReceiver_OnAffordanceValueUpdated_mBB5120B9FB6E709161DBD0AD58362174BC06F719 (Vector3AffordanceReceiver_t2849A6C2EA72BD2796A4E0A5831DFDF230988458* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___0_newValue, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Unity.Mathematics.float3::op_Implicit(Unity.Mathematics.float3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 float3_op_Implicit_m9CC301DFD67EEFAA15CA05E91913E862B22326F6 (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___0_v, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.Vector3AffordanceReceiver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3AffordanceReceiver__ctor_m369BD7371AF82E1E303B183EC60F057580C93588 (Vector3AffordanceReceiver_t2849A6C2EA72BD2796A4E0A5831DFDF230988458* __this, const RuntimeMethod* method) ;
// TValue Unity.XR.CoreUtils.Datums.DatumProperty`2<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.Vector2AffordanceTheme,UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.Vector2AffordanceThemeDatum>::get_Value()
inline Vector2AffordanceTheme_tCB1DE552963E8DEBF132195D98E2A5E44CF6C0F3* DatumProperty_2_get_Value_mCB02F12BEE90DAEB35A2455336D82788729DA131 (DatumProperty_2_t59BA55FF291E8F57615B2D3778D96A715F9E16B7* __this, const RuntimeMethod* method)
{
	return ((  Vector2AffordanceTheme_tCB1DE552963E8DEBF132195D98E2A5E44CF6C0F3* (*) (DatumProperty_2_t59BA55FF291E8F57615B2D3778D96A715F9E16B7*, const RuntimeMethod*))DatumProperty_2_get_Value_mC5323F936C8D38C133F58E702B1C4D59C4BF48EF_gshared)(__this, method);
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.Float2TweenJob::set_jobData(UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1<Unity.Mathematics.float2>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Float2TweenJob_set_jobData_m90C78DAA243838C9DF85BFB2EB17D9307D3583AA_inline (Float2TweenJob_t8A50F8709E39BDC0B96C85C802431F6DFB8FB864* IL2CPP_PARAMETER_RESTRICT __this, TweenJobData_1_t6C4118E82C1B93FB8B3D245997EC0C5B35BD9FF3 ___0_value, const RuntimeMethod* method) ;
// Unity.Jobs.JobHandle Unity.Jobs.IJobExtensions::Schedule<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.Float2TweenJob>(T,Unity.Jobs.JobHandle)
inline JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 IJobExtensions_Schedule_TisFloat2TweenJob_t8A50F8709E39BDC0B96C85C802431F6DFB8FB864_mEEAC96C6F46875D406666309C8A98EEF77220C22 (Float2TweenJob_t8A50F8709E39BDC0B96C85C802431F6DFB8FB864 ___0_jobData, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___1_dependsOn, const RuntimeMethod* method)
{
	return ((  JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 (*) (Float2TweenJob_t8A50F8709E39BDC0B96C85C802431F6DFB8FB864, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08, const RuntimeMethod*))IJobExtensions_Schedule_TisFloat2TweenJob_t8A50F8709E39BDC0B96C85C802431F6DFB8FB864_mEEAC96C6F46875D406666309C8A98EEF77220C22_gshared)(___0_jobData, ___1_dependsOn, method);
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.Vector2AffordanceTheme::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2AffordanceTheme__ctor_mC8B6FF38C7F0ED274D871229BA7867D980A1A58D (Vector2AffordanceTheme_tCB1DE552963E8DEBF132195D98E2A5E44CF6C0F3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 Unity.Mathematics.float2::op_Implicit(Unity.Mathematics.float2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 float2_op_Implicit_mBB339033BC4FFDA8BC7A41DF06C1FA97F60115D9 (float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___0_v, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::Invoke(T0)
inline void UnityEvent_1_Invoke_m756C9B879DDBE079CDE2D06DC231CE42C01C4AD0 (UnityEvent_1_t9A868DD8EBFC0D9D8134D903A170ECBDEE567932* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_arg0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t9A868DD8EBFC0D9D8134D903A170ECBDEE567932*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, const RuntimeMethod*))UnityEvent_1_Invoke_m756C9B879DDBE079CDE2D06DC231CE42C01C4AD0_gshared)(__this, ___0_arg0, method);
}
// System.Void Unity.XR.CoreUtils.Bindings.Variables.BindableVariable`1<Unity.Mathematics.float2>::.ctor(T,System.Boolean,System.Func`3<T,T,System.Boolean>,System.Boolean)
inline void BindableVariable_1__ctor_m3B2BE2508856426BB69A25713700113BE2D879B3 (BindableVariable_1_tD9956DB091E51BF2B9A64DA4F6E4E5A140604DA6* __this, float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___0_initialValue, bool ___1_checkEquality, Func_3_t8086548CD5FB540AD8F90D0F66CD22B5BDD97206* ___2_equalityMethod, bool ___3_startInitialized, const RuntimeMethod* method)
{
	((  void (*) (BindableVariable_1_tD9956DB091E51BF2B9A64DA4F6E4E5A140604DA6*, float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA, bool, Func_3_t8086548CD5FB540AD8F90D0F66CD22B5BDD97206*, bool, const RuntimeMethod*))BindableVariable_1__ctor_m3B2BE2508856426BB69A25713700113BE2D879B3_gshared)(__this, ___0_initialValue, ___1_checkEquality, ___2_equalityMethod, ___3_startInitialized, method);
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.BaseAsyncAffordanceStateReceiver`1<Unity.Mathematics.float2>::.ctor()
inline void BaseAsyncAffordanceStateReceiver_1__ctor_mBF5F4D5985C97D9986548E067C9540C134EDD94D (BaseAsyncAffordanceStateReceiver_1_t9879CC74B2C80AA315DAA9D5E06D849895E1A9CB* __this, const RuntimeMethod* method)
{
	((  void (*) (BaseAsyncAffordanceStateReceiver_1_t9879CC74B2C80AA315DAA9D5E06D849895E1A9CB*, const RuntimeMethod*))BaseAsyncAffordanceStateReceiver_1__ctor_mBF5F4D5985C97D9986548E067C9540C134EDD94D_gshared)(__this, method);
}
// TValue Unity.XR.CoreUtils.Datums.DatumProperty`2<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.Vector3AffordanceTheme,UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.Vector3AffordanceThemeDatum>::get_Value()
inline Vector3AffordanceTheme_t634E7949441EB1C9CC97EDBECF62A74698525D6D* DatumProperty_2_get_Value_m42124DD3823EEDCB315576F6CFB202F7E1EDEE3C (DatumProperty_2_t61D52574939BA04FAE5D715B545BD9B1FA047E3B* __this, const RuntimeMethod* method)
{
	return ((  Vector3AffordanceTheme_t634E7949441EB1C9CC97EDBECF62A74698525D6D* (*) (DatumProperty_2_t61D52574939BA04FAE5D715B545BD9B1FA047E3B*, const RuntimeMethod*))DatumProperty_2_get_Value_mC5323F936C8D38C133F58E702B1C4D59C4BF48EF_gshared)(__this, method);
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.Float3TweenJob::set_jobData(UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1<Unity.Mathematics.float3>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Float3TweenJob_set_jobData_m7CFEAA1CE8FA93237FBAC3066BFC53838F77D109_inline (Float3TweenJob_t1ABCE2AF2296C75ECE719050B75BC7A92ED28644* IL2CPP_PARAMETER_RESTRICT __this, TweenJobData_1_t5779EC937EA396970F0C89EB88D60F9D7CB1977D ___0_value, const RuntimeMethod* method) ;
// Unity.Jobs.JobHandle Unity.Jobs.IJobExtensions::Schedule<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.Float3TweenJob>(T,Unity.Jobs.JobHandle)
inline JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 IJobExtensions_Schedule_TisFloat3TweenJob_t1ABCE2AF2296C75ECE719050B75BC7A92ED28644_m0296E0B47B8B7BE4F3330C2E5F2174C535AF0B2A (Float3TweenJob_t1ABCE2AF2296C75ECE719050B75BC7A92ED28644 ___0_jobData, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___1_dependsOn, const RuntimeMethod* method)
{
	return ((  JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 (*) (Float3TweenJob_t1ABCE2AF2296C75ECE719050B75BC7A92ED28644, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08, const RuntimeMethod*))IJobExtensions_Schedule_TisFloat3TweenJob_t1ABCE2AF2296C75ECE719050B75BC7A92ED28644_m0296E0B47B8B7BE4F3330C2E5F2174C535AF0B2A_gshared)(___0_jobData, ___1_dependsOn, method);
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.Vector3AffordanceTheme::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3AffordanceTheme__ctor_mFF15F63CC81C52948E02E9057AFAF905DEEE1D41 (Vector3AffordanceTheme_t634E7949441EB1C9CC97EDBECF62A74698525D6D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector3>::Invoke(T0)
inline void UnityEvent_1_Invoke_mB89ED0EFF1CDB8BF69BA4B4E0E158A9F7A704FAF (UnityEvent_1_tB42B7E8E9010FF524B45FD0EC7AD37D7D3B006AE* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_arg0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tB42B7E8E9010FF524B45FD0EC7AD37D7D3B006AE*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))UnityEvent_1_Invoke_mB89ED0EFF1CDB8BF69BA4B4E0E158A9F7A704FAF_gshared)(__this, ___0_arg0, method);
}
// System.Void Unity.XR.CoreUtils.Bindings.Variables.BindableVariable`1<Unity.Mathematics.float3>::.ctor(T,System.Boolean,System.Func`3<T,T,System.Boolean>,System.Boolean)
inline void BindableVariable_1__ctor_mE889114EFE12DE8C970F0BF41C8513DBA9330560 (BindableVariable_1_tB68DAB26AE7AF6E274A845BB487AEE92F9E1DAA0* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___0_initialValue, bool ___1_checkEquality, Func_3_tE454B2F07459EA885F6D39FCB5E70BF80B11F175* ___2_equalityMethod, bool ___3_startInitialized, const RuntimeMethod* method)
{
	((  void (*) (BindableVariable_1_tB68DAB26AE7AF6E274A845BB487AEE92F9E1DAA0*, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E, bool, Func_3_tE454B2F07459EA885F6D39FCB5E70BF80B11F175*, bool, const RuntimeMethod*))BindableVariable_1__ctor_mE889114EFE12DE8C970F0BF41C8513DBA9330560_gshared)(__this, ___0_initialValue, ___1_checkEquality, ___2_equalityMethod, ___3_startInitialized, method);
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.BaseAsyncAffordanceStateReceiver`1<Unity.Mathematics.float3>::.ctor()
inline void BaseAsyncAffordanceStateReceiver_1__ctor_m31C1E2011327B9940996B978AEA1ED41C851374C (BaseAsyncAffordanceStateReceiver_1_t1AF80AFA78475513159AB74414CDD1BF93201ED6* __this, const RuntimeMethod* method)
{
	((  void (*) (BaseAsyncAffordanceStateReceiver_1_t1AF80AFA78475513159AB74414CDD1BF93201ED6*, const RuntimeMethod*))BaseAsyncAffordanceStateReceiver_1__ctor_m31C1E2011327B9940996B978AEA1ED41C851374C_gshared)(__this, method);
}
// TValue Unity.XR.CoreUtils.Datums.DatumProperty`2<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.Vector4AffordanceTheme,UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.Vector4AffordanceThemeDatum>::get_Value()
inline Vector4AffordanceTheme_tFEBF93156999F1929B8C2D3B30B2AF50864CECAF* DatumProperty_2_get_Value_m89DE407D45539BD40DBBD6E555DA13DD87E2E639 (DatumProperty_2_t1E26B88ADD7091AA0A2BCEA3BBB13B8AF8D983AB* __this, const RuntimeMethod* method)
{
	return ((  Vector4AffordanceTheme_tFEBF93156999F1929B8C2D3B30B2AF50864CECAF* (*) (DatumProperty_2_t1E26B88ADD7091AA0A2BCEA3BBB13B8AF8D983AB*, const RuntimeMethod*))DatumProperty_2_get_Value_mC5323F936C8D38C133F58E702B1C4D59C4BF48EF_gshared)(__this, method);
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.Float4TweenJob::set_jobData(UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1<Unity.Mathematics.float4>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Float4TweenJob_set_jobData_mB155785E23E063AB1FCB3B41923264C85D53CA21_inline (Float4TweenJob_t9D63A32AC58F3FA5F68BF78254D59453B6FD3CCB* IL2CPP_PARAMETER_RESTRICT __this, TweenJobData_1_t750244DB9B41308E85DF94F53236CD62E3A3483B ___0_value, const RuntimeMethod* method) ;
// Unity.Jobs.JobHandle Unity.Jobs.IJobExtensions::Schedule<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.Float4TweenJob>(T,Unity.Jobs.JobHandle)
inline JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 IJobExtensions_Schedule_TisFloat4TweenJob_t9D63A32AC58F3FA5F68BF78254D59453B6FD3CCB_m998E94F928F62F881D50BBBC67527BA933BC88B8 (Float4TweenJob_t9D63A32AC58F3FA5F68BF78254D59453B6FD3CCB ___0_jobData, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___1_dependsOn, const RuntimeMethod* method)
{
	return ((  JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 (*) (Float4TweenJob_t9D63A32AC58F3FA5F68BF78254D59453B6FD3CCB, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08, const RuntimeMethod*))IJobExtensions_Schedule_TisFloat4TweenJob_t9D63A32AC58F3FA5F68BF78254D59453B6FD3CCB_m998E94F928F62F881D50BBBC67527BA933BC88B8_gshared)(___0_jobData, ___1_dependsOn, method);
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.Vector4AffordanceTheme::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector4AffordanceTheme__ctor_mF108CABEB6D30D03E0918D8BE660E32EAAC9EEB1 (Vector4AffordanceTheme_tFEBF93156999F1929B8C2D3B30B2AF50864CECAF* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector4 Unity.Mathematics.float4::op_Implicit(Unity.Mathematics.float4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 float4_op_Implicit_m5E3AEBAF5F12155549CC051E1EEEE81DF3516E92 (float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___0_v, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector4>::Invoke(T0)
inline void UnityEvent_1_Invoke_mC0D2092AFD86FA47D9A13F41A19963E8E59CA485 (UnityEvent_1_t7FA3641C06EC4F8BD5600438DB4CB16B7042FB59* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_arg0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t7FA3641C06EC4F8BD5600438DB4CB16B7042FB59*, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, const RuntimeMethod*))UnityEvent_1_Invoke_mC0D2092AFD86FA47D9A13F41A19963E8E59CA485_gshared)(__this, ___0_arg0, method);
}
// System.Void Unity.XR.CoreUtils.Bindings.Variables.BindableVariable`1<Unity.Mathematics.float4>::.ctor(T,System.Boolean,System.Func`3<T,T,System.Boolean>,System.Boolean)
inline void BindableVariable_1__ctor_mBD926FA831F5CBD6689542AAFF6367A5AC8E5E0C (BindableVariable_1_t972973977CDA4D22EBEFEFDE6154C3FDDB161959* __this, float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___0_initialValue, bool ___1_checkEquality, Func_3_t0F3960B571C7D586E85A53CA420CA324108BF354* ___2_equalityMethod, bool ___3_startInitialized, const RuntimeMethod* method)
{
	((  void (*) (BindableVariable_1_t972973977CDA4D22EBEFEFDE6154C3FDDB161959*, float4_t89D9A294E7A79BD81BFBDD18654508532958555E, bool, Func_3_t0F3960B571C7D586E85A53CA420CA324108BF354*, bool, const RuntimeMethod*))BindableVariable_1__ctor_mBD926FA831F5CBD6689542AAFF6367A5AC8E5E0C_gshared)(__this, ___0_initialValue, ___1_checkEquality, ___2_equalityMethod, ___3_startInitialized, method);
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.BaseAsyncAffordanceStateReceiver`1<Unity.Mathematics.float4>::.ctor()
inline void BaseAsyncAffordanceStateReceiver_1__ctor_m2FC21462B08F9EFCFB797CA5F749BDE12710A967 (BaseAsyncAffordanceStateReceiver_1_tC556B9C9DC69E2C3852D4935744863C36921F072* __this, const RuntimeMethod* method)
{
	((  void (*) (BaseAsyncAffordanceStateReceiver_1_tC556B9C9DC69E2C3852D4935744863C36921F072*, const RuntimeMethod*))BaseAsyncAffordanceStateReceiver_1__ctor_m2FC21462B08F9EFCFB797CA5F749BDE12710A967_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// TValue Unity.XR.CoreUtils.Datums.DatumProperty`2<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Audio.AudioAffordanceTheme,UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Audio.AudioAffordanceThemeDatum>::get_Value()
inline AudioAffordanceTheme_t8BF9C6D960CBE2CE7F33C4B4960F794790DD3CCE* DatumProperty_2_get_Value_m9D784B9C34F96D570FF46D3F6E0959CD1CD68718 (DatumProperty_2_tC950317A653DFCACA690E035C1A0A6D6C5A7C4F7* __this, const RuntimeMethod* method)
{
	return ((  AudioAffordanceTheme_t8BF9C6D960CBE2CE7F33C4B4960F794790DD3CCE* (*) (DatumProperty_2_tC950317A653DFCACA690E035C1A0A6D6C5A7C4F7*, const RuntimeMethod*))DatumProperty_2_get_Value_mC5323F936C8D38C133F58E702B1C4D59C4BF48EF_gshared)(__this, method);
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Audio.AudioAffordanceTheme::ValidateTheme()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioAffordanceTheme_ValidateTheme_mE3EC08D5BC4E08660CDDBB22195FF1C064774A45 (AudioAffordanceTheme_t8BF9C6D960CBE2CE7F33C4B4960F794790DD3CCE* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Audio.AudioAffordanceReceiver::LogIfMissingAffordanceStates(UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Audio.AudioAffordanceTheme)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioAffordanceReceiver_LogIfMissingAffordanceStates_mCC1CC1CFB9F6FBE81E20F9F4D9FD8F6D59F43407 (AudioAffordanceReceiver_t68854DF37FCFBBCC267549644D37D433B6CC1010* __this, AudioAffordanceTheme_t8BF9C6D960CBE2CE7F33C4B4960F794790DD3CCE* ___0_theme, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
// System.Void Unity.XR.CoreUtils.XRLoggingUtils::LogError(System.String,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoggingUtils_LogError_mC5522AB4200CD87E6677D2E59C51BA5824070B63 (String_t* ___0_message, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_context, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___0_value, const RuntimeMethod* method) ;
// Unity.XR.CoreUtils.Bindings.Variables.IReadOnlyBindableVariable`1<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.AffordanceStateData> UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.BaseAffordanceStateProvider::get_currentAffordanceStateData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* BaseAffordanceStateProvider_get_currentAffordanceStateData_m816A94CE0C10C5FC59858FFACBFF407E9D57B9D3_inline (BaseAffordanceStateProvider_t5721F9B16D6C029D832F8D6FA0A47326A581D443* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.AffordanceStateData>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mCFEB3F79DCD6AA372B280F86825FCA928D251B20 (Action_1_t1643FA0114A827809902992385492446993A54FA* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t1643FA0114A827809902992385492446993A54FA*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_mCFEB3F79DCD6AA372B280F86825FCA928D251B20_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void Unity.XR.CoreUtils.Bindings.BindingsGroup::AddBinding(Unity.XR.CoreUtils.Bindings.IEventBinding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BindingsGroup_AddBinding_m18697E73861A1C67DE0674F162B43CCE9E67C89B (BindingsGroup_tD5EC90BB10F9D310FE467A7E3A4CAE2E32D0397A* __this, RuntimeObject* ___0_binding, const RuntimeMethod* method) ;
// System.Void Unity.XR.CoreUtils.Bindings.BindingsGroup::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BindingsGroup_Clear_m092668459F10E46245228224D1334DAB089B72E3 (BindingsGroup_tD5EC90BB10F9D310FE467A7E3A4CAE2E32D0397A* __this, const RuntimeMethod* method) ;
// System.Byte UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.AffordanceStateShortcuts::get_stateCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t AffordanceStateShortcuts_get_stateCount_m4F2C6E48C41BF2AE0097FB1344ADC82BB4E7DF79_inline (const RuntimeMethod* method) ;
// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Audio.AudioAffordanceThemeData UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Audio.AudioAffordanceTheme::GetAffordanceThemeDataForIndex(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioAffordanceThemeData_t3F29C6FF9ED5593AF503785A5C7FE342A1EE9D0D* AudioAffordanceTheme_GetAffordanceThemeDataForIndex_mF454F28C7CB781D17D32C4E04310EC400CF78D7E (AudioAffordanceTheme_t8BF9C6D960CBE2CE7F33C4B4960F794790DD3CCE* __this, uint8_t ___0_stateIndex, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.AffordanceStateShortcuts::GetNameForIndex(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AffordanceStateShortcuts_GetNameForIndex_m760EFA3C4FE7438EA4093A66558D3E46D08E0417 (uint8_t ___0_index, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::AppendLine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88 (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m23033D7E2F0F298BE465B7F3A63CDF40A4EB70EB (RuntimeObject* ___0_message, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_context, const RuntimeMethod* method) ;
// System.Byte UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.AffordanceStateData::get_stateIndex()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t AffordanceStateData_get_stateIndex_m2B9DFBBB1FE3AE1BC2BAC900B2493B72B4D8F341_inline (AffordanceStateData_t925209B85B56D04F7F178061B1C91280DA6DBC69* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Audio.AudioAffordanceReceiver::PlayAudioClip(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioAffordanceReceiver_PlayAudioClip_m6CE8491BBBAC91F254052CCDBE7B0D4C52C9237F (AudioAffordanceReceiver_t68854DF37FCFBBCC267549644D37D433B6CC1010* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_clipToPlay, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, RuntimeObject* ___3_arg2, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_clip, const RuntimeMethod* method) ;
// System.Void Unity.XR.CoreUtils.Bindings.BindingsGroup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BindingsGroup__ctor_m1EFD3F405050571D3A66F9B95E8FBC296866A716 (BindingsGroup_tD5EC90BB10F9D310FE467A7E3A4CAE2E32D0397A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1<UnityEngine.Color> UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.ColorTweenJob::get_jobData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR TweenJobData_1_t9932452930B7CDE5DC4DA408B50B8E4C7A3AAFB7 ColorTweenJob_get_jobData_mA280F7642FD5A049CCA584A9C7643D66D8492F16_inline (ColorTweenJob_t1BEEC88338C32DADE1D0E383FB1E1327444022A4* IL2CPP_PARAMETER_RESTRICT __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.ColorTweenJob::set_jobData(UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1<UnityEngine.Color>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ColorTweenJob_set_jobData_m7753E76538470AEC9A4D639D6C859694230C1E66_inline (ColorTweenJob_t1BEEC88338C32DADE1D0E383FB1E1327444022A4* IL2CPP_PARAMETER_RESTRICT __this, TweenJobData_1_t9932452930B7CDE5DC4DA408B50B8E4C7A3AAFB7 ___0_value, const RuntimeMethod* method) ;
// System.Byte UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.ColorTweenJob::get_colorBlendMode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR uint8_t ColorTweenJob_get_colorBlendMode_m12030B0AB95C1FD2245040701D6E60268E9D4918_inline (ColorTweenJob_t1BEEC88338C32DADE1D0E383FB1E1327444022A4* IL2CPP_PARAMETER_RESTRICT __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.ColorTweenJob::set_colorBlendMode(System.Byte)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ColorTweenJob_set_colorBlendMode_m9794C87EAF0DF0DC3FCCD8FE779415EF9766BA9A_inline (ColorTweenJob_t1BEEC88338C32DADE1D0E383FB1E1327444022A4* IL2CPP_PARAMETER_RESTRICT __this, uint8_t ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.ColorTweenJob::get_colorBlendAmount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR float ColorTweenJob_get_colorBlendAmount_mC6C4A36FB4A513434F012393BBFF399976D8EDFE_inline (ColorTweenJob_t1BEEC88338C32DADE1D0E383FB1E1327444022A4* IL2CPP_PARAMETER_RESTRICT __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.ColorTweenJob::set_colorBlendAmount(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ColorTweenJob_set_colorBlendAmount_mB6495D73D071F8706E3238110A0CE1CC1DD09916_inline (ColorTweenJob_t1BEEC88338C32DADE1D0E383FB1E1327444022A4* IL2CPP_PARAMETER_RESTRICT __this, float ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1<UnityEngine.Color>::get_stateTransitionAmountFloat()
inline float TweenJobData_1_get_stateTransitionAmountFloat_mE1CF2FE9E8A0DD1E3595B8077AD3E892C103E0D6 (TweenJobData_1_t9932452930B7CDE5DC4DA408B50B8E4C7A3AAFB7* __this, const RuntimeMethod* method)
{
	return ((  float (*) (TweenJobData_1_t9932452930B7CDE5DC4DA408B50B8E4C7A3AAFB7*, const RuntimeMethod*))TweenJobData_1_get_stateTransitionAmountFloat_mE1CF2FE9E8A0DD1E3595B8077AD3E892C103E0D6_gshared)(__this, method);
}
// System.Single UnityEngine.XR.Interaction.Toolkit.Utilities.Collections.NativeCurve::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NativeCurve_Evaluate_m863A02A3C819738F373F7EC87BFDEFA113D4E87C (NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2* __this, float ___0_t, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.ColorTweenJob::Lerp(UnityEngine.Color,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ColorTweenJob_Lerp_m8DACBF2895C6CB62302828384FDDC82442AB86F1 (ColorTweenJob_t1BEEC88338C32DADE1D0E383FB1E1327444022A4* IL2CPP_PARAMETER_RESTRICT __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_from, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_to, float ___2_t, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.ColorTweenJob::ProcessTargetAffordanceValue(UnityEngine.Color,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ColorTweenJob_ProcessTargetAffordanceValue_m88916683E2BBBCE88902A20BEAF9436D84940AD9 (ColorTweenJob_t1BEEC88338C32DADE1D0E383FB1E1327444022A4* IL2CPP_PARAMETER_RESTRICT __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_initialValue, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_newValue, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.ColorTweenJob::Execute()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ColorTweenJob_Execute_m81923C5B32D758B4F509616D6DDBA4DA68855DFC (ColorTweenJob_t1BEEC88338C32DADE1D0E383FB1E1327444022A4* IL2CPP_PARAMETER_RESTRICT __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.ColorTweenJob::IsNearlyEqual(UnityEngine.Color,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR bool ColorTweenJob_IsNearlyEqual_m3C886B1F5FF316BE83F799EAB7107578D961BE55 (ColorTweenJob_t1BEEC88338C32DADE1D0E383FB1E1327444022A4* IL2CPP_PARAMETER_RESTRICT __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_from, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_to, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Color::op_Implicit(UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Color_op_Implicit_m9B3228DAFA8DC57A75DE00CBBF13ED4F1E7B01FF_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_c, const RuntimeMethod* method) ;
// Unity.Mathematics.float4 Unity.Mathematics.float4::op_Implicit(UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float4_t89D9A294E7A79BD81BFBDD18654508532958555E float4_op_Implicit_m6D2091EB2CF6E0629A029A7BE9AD230F5F394CB2 (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_v, const RuntimeMethod* method) ;
// Unity.Mathematics.float4 Unity.Mathematics.math::lerp(Unity.Mathematics.float4,Unity.Mathematics.float4,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float4_t89D9A294E7A79BD81BFBDD18654508532958555E math_lerp_mE2700A823A97D3AB6EDF3BEF66FEDA9B53E3DEA9_inline (float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___0_x, float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___1_y, float ___2_s, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::op_Implicit(UnityEngine.Vector4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_op_Implicit_mA8CF4745D766F4F610E1BE0A1ED2F4E5FE5D734C_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_v, const RuntimeMethod* method) ;
// System.Single Unity.Mathematics.math::distancesq(Unity.Mathematics.float4,Unity.Mathematics.float4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_distancesq_m609DF85E2355430E1F4CD51CDC1971BD5F7D4AF3_inline (float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___0_x, float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___1_y, const RuntimeMethod* method) ;
// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1<System.Single> UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.FloatTweenJob::get_jobData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR TweenJobData_1_t06FAD94FCA49A795B22C7FA2EA018F83E450B97E FloatTweenJob_get_jobData_m4AA6AAAC9D6112B8E88153E6076911F693F13CBA_inline (FloatTweenJob_tA1F66E54D3DBA65A5E68334BA5532EB1D6543F98* IL2CPP_PARAMETER_RESTRICT __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1<System.Single>::get_stateTransitionAmountFloat()
inline float TweenJobData_1_get_stateTransitionAmountFloat_mE222959BD75937C4DCA1A7F1EF540EB9635402FC (TweenJobData_1_t06FAD94FCA49A795B22C7FA2EA018F83E450B97E* __this, const RuntimeMethod* method)
{
	return ((  float (*) (TweenJobData_1_t06FAD94FCA49A795B22C7FA2EA018F83E450B97E*, const RuntimeMethod*))TweenJobData_1_get_stateTransitionAmountFloat_mE222959BD75937C4DCA1A7F1EF540EB9635402FC_gshared)(__this, method);
}
// System.Single UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.FloatTweenJob::Lerp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR float FloatTweenJob_Lerp_mE015346044A09355C78CD91F8695D71C684E538A (FloatTweenJob_tA1F66E54D3DBA65A5E68334BA5532EB1D6543F98* IL2CPP_PARAMETER_RESTRICT __this, float ___0_from, float ___1_to, float ___2_t, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.FloatTweenJob::Execute()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void FloatTweenJob_Execute_m1740EF08BC6FC3B1C5A2DF33756526A55E7EB41D (FloatTweenJob_tA1F66E54D3DBA65A5E68334BA5532EB1D6543F98* IL2CPP_PARAMETER_RESTRICT __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.FloatTweenJob::IsNearlyEqual(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR bool FloatTweenJob_IsNearlyEqual_mA34FD5818E7100B8785B58C1CE98877D5670B601 (FloatTweenJob_tA1F66E54D3DBA65A5E68334BA5532EB1D6543F98* IL2CPP_PARAMETER_RESTRICT __this, float ___0_from, float ___1_to, const RuntimeMethod* method) ;
// System.Single Unity.Mathematics.math::lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_lerp_m58A82DB48BBA11871FFA81583C700875B3A9BC84_inline (float ___0_x, float ___1_y, float ___2_s, const RuntimeMethod* method) ;
// System.Single Unity.Mathematics.math::distancesq(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_distancesq_m7C2F819C91158AE7ECC4CAB4BEC1DD0FDF96BCA4_inline (float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1<Unity.Mathematics.float2> UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.Float2TweenJob::get_jobData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR TweenJobData_1_t6C4118E82C1B93FB8B3D245997EC0C5B35BD9FF3 Float2TweenJob_get_jobData_m8CD8E2F93102486DF3C1D7B483BAB73025369558_inline (Float2TweenJob_t8A50F8709E39BDC0B96C85C802431F6DFB8FB864* IL2CPP_PARAMETER_RESTRICT __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1<Unity.Mathematics.float2>::get_stateTransitionAmountFloat()
inline float TweenJobData_1_get_stateTransitionAmountFloat_mFAE34E3AEE32746766E8DBBE7D53D7440268A069 (TweenJobData_1_t6C4118E82C1B93FB8B3D245997EC0C5B35BD9FF3* __this, const RuntimeMethod* method)
{
	return ((  float (*) (TweenJobData_1_t6C4118E82C1B93FB8B3D245997EC0C5B35BD9FF3*, const RuntimeMethod*))TweenJobData_1_get_stateTransitionAmountFloat_mFAE34E3AEE32746766E8DBBE7D53D7440268A069_gshared)(__this, method);
}
// Unity.Mathematics.float2 UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.Float2TweenJob::Lerp(Unity.Mathematics.float2,Unity.Mathematics.float2,System.Single)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA Float2TweenJob_Lerp_mD4925A20F2BFB4CF38B2CD0CCB3323B1F135B984 (Float2TweenJob_t8A50F8709E39BDC0B96C85C802431F6DFB8FB864* IL2CPP_PARAMETER_RESTRICT __this, float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___0_from, float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___1_to, float ___2_t, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.Float2TweenJob::Execute()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Float2TweenJob_Execute_mA29C263AD8C974A76B61FD0B71A69EF6388639A6 (Float2TweenJob_t8A50F8709E39BDC0B96C85C802431F6DFB8FB864* IL2CPP_PARAMETER_RESTRICT __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.Float2TweenJob::IsNearlyEqual(Unity.Mathematics.float2,Unity.Mathematics.float2)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR bool Float2TweenJob_IsNearlyEqual_mF7248DB22D339624EF997D6C8449557C75E3196C (Float2TweenJob_t8A50F8709E39BDC0B96C85C802431F6DFB8FB864* IL2CPP_PARAMETER_RESTRICT __this, float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___0_from, float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___1_to, const RuntimeMethod* method) ;
// Unity.Mathematics.float2 Unity.Mathematics.math::lerp(Unity.Mathematics.float2,Unity.Mathematics.float2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA math_lerp_mD91B5AE263EAACF3CE7DF14579522796CD90859E_inline (float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___0_x, float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___1_y, float ___2_s, const RuntimeMethod* method) ;
// System.Single Unity.Mathematics.math::distancesq(Unity.Mathematics.float2,Unity.Mathematics.float2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_distancesq_m491F2EBC94F119EA8EE8EA6BB30C44BB0BEB37E3_inline (float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___0_x, float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___1_y, const RuntimeMethod* method) ;
// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1<Unity.Mathematics.float3> UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.Float3TweenJob::get_jobData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR TweenJobData_1_t5779EC937EA396970F0C89EB88D60F9D7CB1977D Float3TweenJob_get_jobData_m9B0A1531BF4DA01A4034720C39A289BFCB37D9D3_inline (Float3TweenJob_t1ABCE2AF2296C75ECE719050B75BC7A92ED28644* IL2CPP_PARAMETER_RESTRICT __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1<Unity.Mathematics.float3>::get_stateTransitionAmountFloat()
inline float TweenJobData_1_get_stateTransitionAmountFloat_mAB269BE097AFCC8C1BAE64F36A970366E41E4317 (TweenJobData_1_t5779EC937EA396970F0C89EB88D60F9D7CB1977D* __this, const RuntimeMethod* method)
{
	return ((  float (*) (TweenJobData_1_t5779EC937EA396970F0C89EB88D60F9D7CB1977D*, const RuntimeMethod*))TweenJobData_1_get_stateTransitionAmountFloat_mAB269BE097AFCC8C1BAE64F36A970366E41E4317_gshared)(__this, method);
}
// Unity.Mathematics.float3 UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.Float3TweenJob::Lerp(Unity.Mathematics.float3,Unity.Mathematics.float3,System.Single)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E Float3TweenJob_Lerp_m27D243EEF22A8765FA08B96C52F075A6CE29519C (Float3TweenJob_t1ABCE2AF2296C75ECE719050B75BC7A92ED28644* IL2CPP_PARAMETER_RESTRICT __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___0_from, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___1_to, float ___2_t, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.Float3TweenJob::Execute()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Float3TweenJob_Execute_m9F17DFAF477F93D8A661BD28EBE3B3A45BB90960 (Float3TweenJob_t1ABCE2AF2296C75ECE719050B75BC7A92ED28644* IL2CPP_PARAMETER_RESTRICT __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.Float3TweenJob::IsNearlyEqual(Unity.Mathematics.float3,Unity.Mathematics.float3)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR bool Float3TweenJob_IsNearlyEqual_m767DE1D8CD124E4D6BE791E9D71317EE1FC4D80D (Float3TweenJob_t1ABCE2AF2296C75ECE719050B75BC7A92ED28644* IL2CPP_PARAMETER_RESTRICT __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___0_from, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___1_to, const RuntimeMethod* method) ;
// Unity.Mathematics.float3 Unity.Mathematics.math::lerp(Unity.Mathematics.float3,Unity.Mathematics.float3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E math_lerp_mA20BFB8D988B57C1CFA28047538F3B47208D1371_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___0_x, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___1_y, float ___2_s, const RuntimeMethod* method) ;
// System.Single Unity.Mathematics.math::distancesq(Unity.Mathematics.float3,Unity.Mathematics.float3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_distancesq_mA49E8B34404D0C4DB3C9D4E065CE4CA255C9770B_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___0_x, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___1_y, const RuntimeMethod* method) ;
// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1<Unity.Mathematics.float4> UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.Float4TweenJob::get_jobData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR TweenJobData_1_t750244DB9B41308E85DF94F53236CD62E3A3483B Float4TweenJob_get_jobData_m259D45EFB1C92132AA34925160D5CE7D4E039635_inline (Float4TweenJob_t9D63A32AC58F3FA5F68BF78254D59453B6FD3CCB* IL2CPP_PARAMETER_RESTRICT __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1<Unity.Mathematics.float4>::get_stateTransitionAmountFloat()
inline float TweenJobData_1_get_stateTransitionAmountFloat_mC3B2141B141B4BCD6FB60969E41B44A5ED7257C4 (TweenJobData_1_t750244DB9B41308E85DF94F53236CD62E3A3483B* __this, const RuntimeMethod* method)
{
	return ((  float (*) (TweenJobData_1_t750244DB9B41308E85DF94F53236CD62E3A3483B*, const RuntimeMethod*))TweenJobData_1_get_stateTransitionAmountFloat_mC3B2141B141B4BCD6FB60969E41B44A5ED7257C4_gshared)(__this, method);
}
// Unity.Mathematics.float4 UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.Float4TweenJob::Lerp(Unity.Mathematics.float4,Unity.Mathematics.float4,System.Single)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR float4_t89D9A294E7A79BD81BFBDD18654508532958555E Float4TweenJob_Lerp_mBB8C33897042211F54BACEFA36EAF0266A66A5ED (Float4TweenJob_t9D63A32AC58F3FA5F68BF78254D59453B6FD3CCB* IL2CPP_PARAMETER_RESTRICT __this, float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___0_from, float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___1_to, float ___2_t, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.Float4TweenJob::Execute()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Float4TweenJob_Execute_m30EAD691A19A6B14B68AE350F0FC92D77BE370F9 (Float4TweenJob_t9D63A32AC58F3FA5F68BF78254D59453B6FD3CCB* IL2CPP_PARAMETER_RESTRICT __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.Float4TweenJob::IsNearlyEqual(Unity.Mathematics.float4,Unity.Mathematics.float4)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR bool Float4TweenJob_IsNearlyEqual_m1B0B7A5E9E16C58242607439DE3459F927BF86BC (Float4TweenJob_t9D63A32AC58F3FA5F68BF78254D59453B6FD3CCB* IL2CPP_PARAMETER_RESTRICT __this, float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___0_from, float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___1_to, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) ;
// Unity.Mathematics.float4 Unity.Mathematics.float4::op_Subtraction(Unity.Mathematics.float4,Unity.Mathematics.float4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float4_t89D9A294E7A79BD81BFBDD18654508532958555E float4_op_Subtraction_mBC40F52B8A8EF499A1AA3CC987E5935BD188B4E3_inline (float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___0_lhs, float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___1_rhs, const RuntimeMethod* method) ;
// Unity.Mathematics.float4 Unity.Mathematics.float4::op_Multiply(System.Single,Unity.Mathematics.float4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float4_t89D9A294E7A79BD81BFBDD18654508532958555E float4_op_Multiply_m94C65B5751B7969CD82F15DADB8A6F182BFBD581_inline (float ___0_lhs, float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___1_rhs, const RuntimeMethod* method) ;
// Unity.Mathematics.float4 Unity.Mathematics.float4::op_Addition(Unity.Mathematics.float4,Unity.Mathematics.float4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float4_t89D9A294E7A79BD81BFBDD18654508532958555E float4_op_Addition_m2CF2E1B2DAD4996DE3C5B6DFB90185E4CC8F0F44_inline (float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___0_lhs, float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___1_rhs, const RuntimeMethod* method) ;
// System.Single Unity.Mathematics.math::lengthsq(Unity.Mathematics.float4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_lengthsq_m246AAF09A2EA30D8FE4314442E031D9B5AFF31FF_inline (float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___0_x, const RuntimeMethod* method) ;
// Unity.Mathematics.float2 Unity.Mathematics.float2::op_Subtraction(Unity.Mathematics.float2,Unity.Mathematics.float2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA float2_op_Subtraction_m28172675A65BCFFBC8C9023BE815019E668B8380_inline (float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___0_lhs, float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___1_rhs, const RuntimeMethod* method) ;
// Unity.Mathematics.float2 Unity.Mathematics.float2::op_Multiply(System.Single,Unity.Mathematics.float2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA float2_op_Multiply_m9117237F9A26A1B934C1DE0A5FE5BD6EF7D3B26C_inline (float ___0_lhs, float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___1_rhs, const RuntimeMethod* method) ;
// Unity.Mathematics.float2 Unity.Mathematics.float2::op_Addition(Unity.Mathematics.float2,Unity.Mathematics.float2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA float2_op_Addition_m718974663A956F64D7C45D06C088550637F13693_inline (float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___0_lhs, float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___1_rhs, const RuntimeMethod* method) ;
// System.Single Unity.Mathematics.math::lengthsq(Unity.Mathematics.float2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_lengthsq_mDC7DB2DF1C069D45CE87BC737AF59CB0094042FA_inline (float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___0_x, const RuntimeMethod* method) ;
// Unity.Mathematics.float3 Unity.Mathematics.float3::op_Subtraction(Unity.Mathematics.float3,Unity.Mathematics.float3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E float3_op_Subtraction_mB6036E9849D95650D6E73DA0D179CD7B61E696F2_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___0_lhs, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___1_rhs, const RuntimeMethod* method) ;
// Unity.Mathematics.float3 Unity.Mathematics.float3::op_Multiply(System.Single,Unity.Mathematics.float3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E float3_op_Multiply_m38F52B61F8E5636955A1A6DF3A75BD0724148350_inline (float ___0_lhs, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___1_rhs, const RuntimeMethod* method) ;
// Unity.Mathematics.float3 Unity.Mathematics.float3::op_Addition(Unity.Mathematics.float3,Unity.Mathematics.float3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E float3_op_Addition_mFFCF4F7457594F5EFB0678C0DE90AAD3D3F6947B_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___0_lhs, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___1_rhs, const RuntimeMethod* method) ;
// System.Single Unity.Mathematics.math::lengthsq(Unity.Mathematics.float3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_lengthsq_mC699F3F214F05B26BEBAF1B46E3AA3C00407A532_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___0_x, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Void Unity.Mathematics.float4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void float4__ctor_mB2F7F2D8BCE8159BEF5A0D6400499E211858ED2D_inline (float4_t89D9A294E7A79BD81BFBDD18654508532958555E* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) ;
// System.Single Unity.Mathematics.math::dot(Unity.Mathematics.float4,Unity.Mathematics.float4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_dot_m20F2285F7227DC308D9CF2DCB8EAAD3E774501D4_inline (float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___0_x, float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___1_y, const RuntimeMethod* method) ;
// System.Void Unity.Mathematics.float2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void float2__ctor_m3D598E2C2D173DE852F3AB157502968261383C97_inline (float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// System.Single Unity.Mathematics.math::dot(Unity.Mathematics.float2,Unity.Mathematics.float2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_dot_mF673D3E5B7D267C0A8569B678D05BDCCB667D04D_inline (float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___0_x, float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___1_y, const RuntimeMethod* method) ;
// System.Void Unity.Mathematics.float3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void float3__ctor_mC61002CD0EC13D7C37D846D021A78C028FB80DB9_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Single Unity.Mathematics.math::dot(Unity.Mathematics.float3,Unity.Mathematics.float3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_dot_mE193D8880350D74CC8D63A0D53CDC5902F844AAD_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___0_x, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___1_y, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.FloatAffordanceThemeDatumProperty UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.FloatAffordanceReceiver::get_affordanceThemeDatum()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FloatAffordanceThemeDatumProperty_tA307B32B7063CC8BF659E27BF7BCD6D24DC43CD9* FloatAffordanceReceiver_get_affordanceThemeDatum_m9D93F8CDCF7C03118C3647CDF827F81EFD887560 (FloatAffordanceReceiver_t66E763152C12B894353408702914C6241CA05BDE* __this, const RuntimeMethod* method) 
{
	{
		// get => m_AffordanceThemeDatum;
		FloatAffordanceThemeDatumProperty_tA307B32B7063CC8BF659E27BF7BCD6D24DC43CD9* L_0 = __this->___m_AffordanceThemeDatum_15;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.FloatAffordanceReceiver::set_affordanceThemeDatum(UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.FloatAffordanceThemeDatumProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatAffordanceReceiver_set_affordanceThemeDatum_m38D53D6D6EF3375599159E0287F5100844C6824A (FloatAffordanceReceiver_t66E763152C12B894353408702914C6241CA05BDE* __this, FloatAffordanceThemeDatumProperty_tA307B32B7063CC8BF659E27BF7BCD6D24DC43CD9* ___0_value, const RuntimeMethod* method) 
{
	{
		// set => m_AffordanceThemeDatum = value;
		FloatAffordanceThemeDatumProperty_tA307B32B7063CC8BF659E27BF7BCD6D24DC43CD9* L_0 = ___0_value;
		__this->___m_AffordanceThemeDatum_15 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_AffordanceThemeDatum_15), (void*)L_0);
		return;
	}
}
// Unity.XR.CoreUtils.FloatUnityEvent UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.FloatAffordanceReceiver::get_valueUpdated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FloatUnityEvent_t46E9673B05FBD9AED74FC5787BAAD6B1523F68CE* FloatAffordanceReceiver_get_valueUpdated_m015DA13CE8D5F266D614997A6DE8C4E9D65CD835 (FloatAffordanceReceiver_t66E763152C12B894353408702914C6241CA05BDE* __this, const RuntimeMethod* method) 
{
	{
		// get => m_ValueUpdated;
		FloatUnityEvent_t46E9673B05FBD9AED74FC5787BAAD6B1523F68CE* L_0 = __this->___m_ValueUpdated_16;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.FloatAffordanceReceiver::set_valueUpdated(Unity.XR.CoreUtils.FloatUnityEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatAffordanceReceiver_set_valueUpdated_m838D2D1D6E11C2E901442827980600F6D0ED820B (FloatAffordanceReceiver_t66E763152C12B894353408702914C6241CA05BDE* __this, FloatUnityEvent_t46E9673B05FBD9AED74FC5787BAAD6B1523F68CE* ___0_value, const RuntimeMethod* method) 
{
	{
		// set => m_ValueUpdated = value;
		FloatUnityEvent_t46E9673B05FBD9AED74FC5787BAAD6B1523F68CE* L_0 = ___0_value;
		__this->___m_ValueUpdated_16 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ValueUpdated_16), (void*)L_0);
		return;
	}
}
// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.BaseAffordanceTheme`1<System.Single> UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.FloatAffordanceReceiver::get_defaultAffordanceTheme()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseAffordanceTheme_1_t1E77E3027D1DEBEA5C94340841F9E857938E9637* FloatAffordanceReceiver_get_defaultAffordanceTheme_mC38729859C45DABAB633CA5371872BDFEC9DF8CB (FloatAffordanceReceiver_t66E763152C12B894353408702914C6241CA05BDE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatumProperty_2_get_Value_m5C2C883AFAA09BCA637B7624F3702C7ED4868331_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected override BaseAffordanceTheme<float> defaultAffordanceTheme => m_AffordanceThemeDatum != null ? m_AffordanceThemeDatum.Value : null;
		FloatAffordanceThemeDatumProperty_tA307B32B7063CC8BF659E27BF7BCD6D24DC43CD9* L_0 = __this->___m_AffordanceThemeDatum_15;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (BaseAffordanceTheme_1_t1E77E3027D1DEBEA5C94340841F9E857938E9637*)NULL;
	}

IL_000a:
	{
		FloatAffordanceThemeDatumProperty_tA307B32B7063CC8BF659E27BF7BCD6D24DC43CD9* L_1 = __this->___m_AffordanceThemeDatum_15;
		NullCheck(L_1);
		FloatAffordanceTheme_t8D690D0E9B25A66531A082E48F439E0103EDB7CC* L_2;
		L_2 = DatumProperty_2_get_Value_m5C2C883AFAA09BCA637B7624F3702C7ED4868331(L_1, DatumProperty_2_get_Value_m5C2C883AFAA09BCA637B7624F3702C7ED4868331_RuntimeMethod_var);
		return L_2;
	}
}
// Unity.XR.CoreUtils.Bindings.Variables.BindableVariable`1<System.Single> UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.FloatAffordanceReceiver::get_affordanceValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BindableVariable_1_tAB8C2D23769D801C8E39D4AA927DD23AF0E6816C* FloatAffordanceReceiver_get_affordanceValue_mBB5C3AB5C59AF5BC28A84EA63B9AE9A8C30FD853 (FloatAffordanceReceiver_t66E763152C12B894353408702914C6241CA05BDE* __this, const RuntimeMethod* method) 
{
	{
		// protected override BindableVariable<float> affordanceValue { get; } = new BindableVariable<float>();
		BindableVariable_1_tAB8C2D23769D801C8E39D4AA927DD23AF0E6816C* L_0 = __this->___U3CaffordanceValueU3Ek__BackingField_17;
		return L_0;
	}
}
// Unity.Jobs.JobHandle UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.FloatAffordanceReceiver::ScheduleTweenJob(UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1<System.Single>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 FloatAffordanceReceiver_ScheduleTweenJob_m276CB52D5AEBD4C93388C29688C9A51A8C84BAA4 (FloatAffordanceReceiver_t66E763152C12B894353408702914C6241CA05BDE* __this, TweenJobData_1_t06FAD94FCA49A795B22C7FA2EA018F83E450B97E* ___0_jobData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IJobExtensions_Schedule_TisFloatTweenJob_tA1F66E54D3DBA65A5E68334BA5532EB1D6543F98_mC96694C279FE42D48D23DABA1C3B5DCEBA551748_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	FloatTweenJob_tA1F66E54D3DBA65A5E68334BA5532EB1D6543F98 V_0;
	memset((&V_0), 0, sizeof(V_0));
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var job = new FloatTweenJob { jobData = jobData };
		il2cpp_codegen_initobj((&V_0), sizeof(FloatTweenJob_tA1F66E54D3DBA65A5E68334BA5532EB1D6543F98));
		TweenJobData_1_t06FAD94FCA49A795B22C7FA2EA018F83E450B97E* L_0 = ___0_jobData;
		TweenJobData_1_t06FAD94FCA49A795B22C7FA2EA018F83E450B97E L_1 = (*(TweenJobData_1_t06FAD94FCA49A795B22C7FA2EA018F83E450B97E*)L_0);
		FloatTweenJob_set_jobData_m62BC555A7F3277F969592FF740F96692C4F340EA_inline((&V_0), L_1, NULL);
		FloatTweenJob_tA1F66E54D3DBA65A5E68334BA5532EB1D6543F98 L_2 = V_0;
		// return job.Schedule();
		il2cpp_codegen_initobj((&V_1), sizeof(JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08));
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_3 = V_1;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_4;
		L_4 = IJobExtensions_Schedule_TisFloatTweenJob_tA1F66E54D3DBA65A5E68334BA5532EB1D6543F98_mC96694C279FE42D48D23DABA1C3B5DCEBA551748(L_2, L_3, IJobExtensions_Schedule_TisFloatTweenJob_tA1F66E54D3DBA65A5E68334BA5532EB1D6543F98_mC96694C279FE42D48D23DABA1C3B5DCEBA551748_RuntimeMethod_var);
		return L_4;
	}
}
// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.BaseAffordanceTheme`1<System.Single> UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.FloatAffordanceReceiver::GenerateNewAffordanceThemeInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseAffordanceTheme_1_t1E77E3027D1DEBEA5C94340841F9E857938E9637* FloatAffordanceReceiver_GenerateNewAffordanceThemeInstance_mD8FC7E6BBDAD264AC5D38520980298730869DFFD (FloatAffordanceReceiver_t66E763152C12B894353408702914C6241CA05BDE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FloatAffordanceTheme_t8D690D0E9B25A66531A082E48F439E0103EDB7CC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new FloatAffordanceTheme();
		FloatAffordanceTheme_t8D690D0E9B25A66531A082E48F439E0103EDB7CC* L_0 = (FloatAffordanceTheme_t8D690D0E9B25A66531A082E48F439E0103EDB7CC*)il2cpp_codegen_object_new(FloatAffordanceTheme_t8D690D0E9B25A66531A082E48F439E0103EDB7CC_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		FloatAffordanceTheme__ctor_m5DEDCB9E9F8C82257C380C760F0F88C909D03BCF(L_0, NULL);
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.FloatAffordanceReceiver::OnAffordanceValueUpdated(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatAffordanceReceiver_OnAffordanceValueUpdated_m8DFCD9A7C80FDE4B4A048FC63B57683AE9C27836 (FloatAffordanceReceiver_t66E763152C12B894353408702914C6241CA05BDE* __this, float ___0_newValue, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	FloatUnityEvent_t46E9673B05FBD9AED74FC5787BAAD6B1523F68CE* G_B2_0 = NULL;
	FloatUnityEvent_t46E9673B05FBD9AED74FC5787BAAD6B1523F68CE* G_B1_0 = NULL;
	{
		// m_ValueUpdated?.Invoke(newValue);
		FloatUnityEvent_t46E9673B05FBD9AED74FC5787BAAD6B1523F68CE* L_0 = __this->___m_ValueUpdated_16;
		FloatUnityEvent_t46E9673B05FBD9AED74FC5787BAAD6B1523F68CE* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		float L_2 = ___0_newValue;
		NullCheck(G_B2_0);
		UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805(G_B2_0, L_2, UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.FloatAffordanceReceiver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatAffordanceReceiver__ctor_mAE18D7F69111355DBDB88C41776DC36831B85838 (FloatAffordanceReceiver_t66E763152C12B894353408702914C6241CA05BDE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseAsyncAffordanceStateReceiver_1__ctor_m94BEE2B700A798FAA1700E2C96F1C615C77FA82E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BindableVariable_1__ctor_mDC40C552DDD7391A70B329BD063A7C4BBD98E408_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BindableVariable_1_tAB8C2D23769D801C8E39D4AA927DD23AF0E6816C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected override BindableVariable<float> affordanceValue { get; } = new BindableVariable<float>();
		BindableVariable_1_tAB8C2D23769D801C8E39D4AA927DD23AF0E6816C* L_0 = (BindableVariable_1_tAB8C2D23769D801C8E39D4AA927DD23AF0E6816C*)il2cpp_codegen_object_new(BindableVariable_1_tAB8C2D23769D801C8E39D4AA927DD23AF0E6816C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		BindableVariable_1__ctor_mDC40C552DDD7391A70B329BD063A7C4BBD98E408(L_0, (0.0f), (bool)1, (Func_3_tA9AA477D8A5A68C7DC26AE4792295B80F920E61E*)NULL, (bool)0, BindableVariable_1__ctor_mDC40C552DDD7391A70B329BD063A7C4BBD98E408_RuntimeMethod_var);
		__this->___U3CaffordanceValueU3Ek__BackingField_17 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CaffordanceValueU3Ek__BackingField_17), (void*)L_0);
		BaseAsyncAffordanceStateReceiver_1__ctor_m94BEE2B700A798FAA1700E2C96F1C615C77FA82E(__this, BaseAsyncAffordanceStateReceiver_1__ctor_m94BEE2B700A798FAA1700E2C96F1C615C77FA82E_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.XR.CoreUtils.QuaternionUnityEvent UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.QuaternionAffordanceReceiver::get_quaternionValueUpdated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR QuaternionUnityEvent_t1BEB6C61F25448B45AA9553A256C27310A726A55* QuaternionAffordanceReceiver_get_quaternionValueUpdated_m88FCE2FD21E2307191072D28BF0A3D7F5FF458C6 (QuaternionAffordanceReceiver_t89BEB49026E8DB40585D46CC46B4FE493E95B218* __this, const RuntimeMethod* method) 
{
	{
		// get => m_QuaternionValueUpdated;
		QuaternionUnityEvent_t1BEB6C61F25448B45AA9553A256C27310A726A55* L_0 = __this->___m_QuaternionValueUpdated_18;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.QuaternionAffordanceReceiver::set_quaternionValueUpdated(Unity.XR.CoreUtils.QuaternionUnityEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuaternionAffordanceReceiver_set_quaternionValueUpdated_m69ACBC31436D97B5E9DE690709ACEA0D49F95550 (QuaternionAffordanceReceiver_t89BEB49026E8DB40585D46CC46B4FE493E95B218* __this, QuaternionUnityEvent_t1BEB6C61F25448B45AA9553A256C27310A726A55* ___0_value, const RuntimeMethod* method) 
{
	{
		// set => m_QuaternionValueUpdated = value;
		QuaternionUnityEvent_t1BEB6C61F25448B45AA9553A256C27310A726A55* L_0 = ___0_value;
		__this->___m_QuaternionValueUpdated_18 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_QuaternionValueUpdated_18), (void*)L_0);
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.QuaternionAffordanceReceiver::OnAffordanceValueUpdated(Unity.Mathematics.float4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuaternionAffordanceReceiver_OnAffordanceValueUpdated_mEEAFECB09ECF9F5F226A501778A3E9F8E8DA0EE1 (QuaternionAffordanceReceiver_t89BEB49026E8DB40585D46CC46B4FE493E95B218* __this, float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___0_newValue, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m4A1955C2E48894AD3EDEE54D656EF248CDCE1D33_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	QuaternionUnityEvent_t1BEB6C61F25448B45AA9553A256C27310A726A55* G_B2_0 = NULL;
	QuaternionUnityEvent_t1BEB6C61F25448B45AA9553A256C27310A726A55* G_B1_0 = NULL;
	{
		// base.OnAffordanceValueUpdated(newValue);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_0 = ___0_newValue;
		Vector4AffordanceReceiver_OnAffordanceValueUpdated_m5213F46721A36369FD250DDA5EA52CBA601B7387(__this, L_0, NULL);
		// m_QuaternionValueUpdated?.Invoke(new Quaternion(newValue.x, newValue.y, newValue.z, newValue.w));
		QuaternionUnityEvent_t1BEB6C61F25448B45AA9553A256C27310A726A55* L_1 = __this->___m_QuaternionValueUpdated_18;
		QuaternionUnityEvent_t1BEB6C61F25448B45AA9553A256C27310A726A55* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_3 = ___0_newValue;
		float L_4 = L_3.___x_0;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_5 = ___0_newValue;
		float L_6 = L_5.___y_1;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_7 = ___0_newValue;
		float L_8 = L_7.___z_2;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_9 = ___0_newValue;
		float L_10 = L_9.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_11), L_4, L_6, L_8, L_10, /*hidden argument*/NULL);
		NullCheck(G_B2_0);
		UnityEvent_1_Invoke_m4A1955C2E48894AD3EDEE54D656EF248CDCE1D33(G_B2_0, L_11, UnityEvent_1_Invoke_m4A1955C2E48894AD3EDEE54D656EF248CDCE1D33_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.QuaternionAffordanceReceiver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuaternionAffordanceReceiver__ctor_mBDA205FF09C42F47D03596D7008184CCC1A91AC7 (QuaternionAffordanceReceiver_t89BEB49026E8DB40585D46CC46B4FE493E95B218* __this, const RuntimeMethod* method) 
{
	{
		Vector4AffordanceReceiver__ctor_mFCA23B39F6D1BC12D0ACBEB54EC5A1FFAE47B582(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.XR.CoreUtils.QuaternionUnityEvent UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.QuaternionEulerAffordanceReceiver::get_quaternionValueUpdated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR QuaternionUnityEvent_t1BEB6C61F25448B45AA9553A256C27310A726A55* QuaternionEulerAffordanceReceiver_get_quaternionValueUpdated_m7F72B440ABC663F191A5A592AB326DB6FF5683C5 (QuaternionEulerAffordanceReceiver_t6D994D08B0F6E9C7BBF07E91A6D4E1359F38D7BD* __this, const RuntimeMethod* method) 
{
	{
		// get => m_QuaternionValueUpdated;
		QuaternionUnityEvent_t1BEB6C61F25448B45AA9553A256C27310A726A55* L_0 = __this->___m_QuaternionValueUpdated_18;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.QuaternionEulerAffordanceReceiver::set_quaternionValueUpdated(Unity.XR.CoreUtils.QuaternionUnityEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuaternionEulerAffordanceReceiver_set_quaternionValueUpdated_m871128E2DFDD804E12DAD60BA853C7D102CABAB6 (QuaternionEulerAffordanceReceiver_t6D994D08B0F6E9C7BBF07E91A6D4E1359F38D7BD* __this, QuaternionUnityEvent_t1BEB6C61F25448B45AA9553A256C27310A726A55* ___0_value, const RuntimeMethod* method) 
{
	{
		// set => m_QuaternionValueUpdated = value;
		QuaternionUnityEvent_t1BEB6C61F25448B45AA9553A256C27310A726A55* L_0 = ___0_value;
		__this->___m_QuaternionValueUpdated_18 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_QuaternionValueUpdated_18), (void*)L_0);
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.QuaternionEulerAffordanceReceiver::OnAffordanceValueUpdated(Unity.Mathematics.float3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuaternionEulerAffordanceReceiver_OnAffordanceValueUpdated_m670502E095F7E8E3EF5598402B5918D3025690EC (QuaternionEulerAffordanceReceiver_t6D994D08B0F6E9C7BBF07E91A6D4E1359F38D7BD* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___0_newValue, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m4A1955C2E48894AD3EDEE54D656EF248CDCE1D33_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	QuaternionUnityEvent_t1BEB6C61F25448B45AA9553A256C27310A726A55* G_B2_0 = NULL;
	QuaternionUnityEvent_t1BEB6C61F25448B45AA9553A256C27310A726A55* G_B1_0 = NULL;
	{
		// base.OnAffordanceValueUpdated(newValue);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_0 = ___0_newValue;
		Vector3AffordanceReceiver_OnAffordanceValueUpdated_mBB5120B9FB6E709161DBD0AD58362174BC06F719(__this, L_0, NULL);
		// m_QuaternionValueUpdated?.Invoke(Quaternion.Euler(newValue));
		QuaternionUnityEvent_t1BEB6C61F25448B45AA9553A256C27310A726A55* L_1 = __this->___m_QuaternionValueUpdated_18;
		QuaternionUnityEvent_t1BEB6C61F25448B45AA9553A256C27310A726A55* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_3 = ___0_newValue;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = float3_op_Implicit_m9CC301DFD67EEFAA15CA05E91913E862B22326F6(L_3, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline(L_4, NULL);
		NullCheck(G_B2_0);
		UnityEvent_1_Invoke_m4A1955C2E48894AD3EDEE54D656EF248CDCE1D33(G_B2_0, L_5, UnityEvent_1_Invoke_m4A1955C2E48894AD3EDEE54D656EF248CDCE1D33_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.QuaternionEulerAffordanceReceiver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuaternionEulerAffordanceReceiver__ctor_mB5788B5147DD36E3EB8BF71E37A62F7E4BC1A81F (QuaternionEulerAffordanceReceiver_t6D994D08B0F6E9C7BBF07E91A6D4E1359F38D7BD* __this, const RuntimeMethod* method) 
{
	{
		Vector3AffordanceReceiver__ctor_m369BD7371AF82E1E303B183EC60F057580C93588(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.Vector2AffordanceThemeDatumProperty UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.Vector2AffordanceReceiver::get_affordanceThemeDatum()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2AffordanceThemeDatumProperty_t698C12459080436F8505FBD63C5CDA5D3A9AD3A4* Vector2AffordanceReceiver_get_affordanceThemeDatum_mF252270A4CEB1D61C24E381A2CB3F08DE399B2CD (Vector2AffordanceReceiver_t47ED28F9A8C82B928592400FC52BD730FF7E8003* __this, const RuntimeMethod* method) 
{
	{
		// get => m_AffordanceThemeDatum;
		Vector2AffordanceThemeDatumProperty_t698C12459080436F8505FBD63C5CDA5D3A9AD3A4* L_0 = __this->___m_AffordanceThemeDatum_15;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.Vector2AffordanceReceiver::set_affordanceThemeDatum(UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.Vector2AffordanceThemeDatumProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2AffordanceReceiver_set_affordanceThemeDatum_m8050113B8E513EF44AF6082C92DE3A8D972BBDF1 (Vector2AffordanceReceiver_t47ED28F9A8C82B928592400FC52BD730FF7E8003* __this, Vector2AffordanceThemeDatumProperty_t698C12459080436F8505FBD63C5CDA5D3A9AD3A4* ___0_value, const RuntimeMethod* method) 
{
	{
		// set => m_AffordanceThemeDatum = value;
		Vector2AffordanceThemeDatumProperty_t698C12459080436F8505FBD63C5CDA5D3A9AD3A4* L_0 = ___0_value;
		__this->___m_AffordanceThemeDatum_15 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_AffordanceThemeDatum_15), (void*)L_0);
		return;
	}
}
// Unity.XR.CoreUtils.Vector2UnityEvent UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.Vector2AffordanceReceiver::get_valueUpdated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2UnityEvent_tE303206C54DC9947E1777052E0926BFAFC2CE1DC* Vector2AffordanceReceiver_get_valueUpdated_m22C915CFE910163118518D9AADBE29EA5EFE2C34 (Vector2AffordanceReceiver_t47ED28F9A8C82B928592400FC52BD730FF7E8003* __this, const RuntimeMethod* method) 
{
	{
		// get => m_ValueUpdated;
		Vector2UnityEvent_tE303206C54DC9947E1777052E0926BFAFC2CE1DC* L_0 = __this->___m_ValueUpdated_16;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.Vector2AffordanceReceiver::set_valueUpdated(Unity.XR.CoreUtils.Vector2UnityEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2AffordanceReceiver_set_valueUpdated_m214C30DCAF6193FC16C71C0058022B6F6B2E98B7 (Vector2AffordanceReceiver_t47ED28F9A8C82B928592400FC52BD730FF7E8003* __this, Vector2UnityEvent_tE303206C54DC9947E1777052E0926BFAFC2CE1DC* ___0_value, const RuntimeMethod* method) 
{
	{
		// set => m_ValueUpdated = value;
		Vector2UnityEvent_tE303206C54DC9947E1777052E0926BFAFC2CE1DC* L_0 = ___0_value;
		__this->___m_ValueUpdated_16 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ValueUpdated_16), (void*)L_0);
		return;
	}
}
// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.BaseAffordanceTheme`1<Unity.Mathematics.float2> UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.Vector2AffordanceReceiver::get_defaultAffordanceTheme()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseAffordanceTheme_1_t8D071F9F08B006341599D081E084B8CBC8D33DB8* Vector2AffordanceReceiver_get_defaultAffordanceTheme_mF976E19156973E0C76346E69D29C57923CF68692 (Vector2AffordanceReceiver_t47ED28F9A8C82B928592400FC52BD730FF7E8003* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatumProperty_2_get_Value_mCB02F12BEE90DAEB35A2455336D82788729DA131_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected override BaseAffordanceTheme<float2> defaultAffordanceTheme => m_AffordanceThemeDatum != null ? m_AffordanceThemeDatum.Value : null;
		Vector2AffordanceThemeDatumProperty_t698C12459080436F8505FBD63C5CDA5D3A9AD3A4* L_0 = __this->___m_AffordanceThemeDatum_15;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (BaseAffordanceTheme_1_t8D071F9F08B006341599D081E084B8CBC8D33DB8*)NULL;
	}

IL_000a:
	{
		Vector2AffordanceThemeDatumProperty_t698C12459080436F8505FBD63C5CDA5D3A9AD3A4* L_1 = __this->___m_AffordanceThemeDatum_15;
		NullCheck(L_1);
		Vector2AffordanceTheme_tCB1DE552963E8DEBF132195D98E2A5E44CF6C0F3* L_2;
		L_2 = DatumProperty_2_get_Value_mCB02F12BEE90DAEB35A2455336D82788729DA131(L_1, DatumProperty_2_get_Value_mCB02F12BEE90DAEB35A2455336D82788729DA131_RuntimeMethod_var);
		return L_2;
	}
}
// Unity.XR.CoreUtils.Bindings.Variables.BindableVariable`1<Unity.Mathematics.float2> UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.Vector2AffordanceReceiver::get_affordanceValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BindableVariable_1_tD9956DB091E51BF2B9A64DA4F6E4E5A140604DA6* Vector2AffordanceReceiver_get_affordanceValue_mB8F71BD0653E5C9C59370694C6E8CF381B6C83C4 (Vector2AffordanceReceiver_t47ED28F9A8C82B928592400FC52BD730FF7E8003* __this, const RuntimeMethod* method) 
{
	{
		// protected override BindableVariable<float2> affordanceValue { get; } = new BindableVariable<float2>();
		BindableVariable_1_tD9956DB091E51BF2B9A64DA4F6E4E5A140604DA6* L_0 = __this->___U3CaffordanceValueU3Ek__BackingField_17;
		return L_0;
	}
}
// Unity.Jobs.JobHandle UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.Vector2AffordanceReceiver::ScheduleTweenJob(UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1<Unity.Mathematics.float2>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 Vector2AffordanceReceiver_ScheduleTweenJob_m7A5B94419E883098D6BC2A27DAD978DD103CBB62 (Vector2AffordanceReceiver_t47ED28F9A8C82B928592400FC52BD730FF7E8003* __this, TweenJobData_1_t6C4118E82C1B93FB8B3D245997EC0C5B35BD9FF3* ___0_jobData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IJobExtensions_Schedule_TisFloat2TweenJob_t8A50F8709E39BDC0B96C85C802431F6DFB8FB864_mEEAC96C6F46875D406666309C8A98EEF77220C22_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Float2TweenJob_t8A50F8709E39BDC0B96C85C802431F6DFB8FB864 V_0;
	memset((&V_0), 0, sizeof(V_0));
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var job = new Float2TweenJob { jobData = jobData };
		il2cpp_codegen_initobj((&V_0), sizeof(Float2TweenJob_t8A50F8709E39BDC0B96C85C802431F6DFB8FB864));
		TweenJobData_1_t6C4118E82C1B93FB8B3D245997EC0C5B35BD9FF3* L_0 = ___0_jobData;
		TweenJobData_1_t6C4118E82C1B93FB8B3D245997EC0C5B35BD9FF3 L_1 = (*(TweenJobData_1_t6C4118E82C1B93FB8B3D245997EC0C5B35BD9FF3*)L_0);
		Float2TweenJob_set_jobData_m90C78DAA243838C9DF85BFB2EB17D9307D3583AA_inline((&V_0), L_1, NULL);
		Float2TweenJob_t8A50F8709E39BDC0B96C85C802431F6DFB8FB864 L_2 = V_0;
		// return job.Schedule();
		il2cpp_codegen_initobj((&V_1), sizeof(JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08));
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_3 = V_1;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_4;
		L_4 = IJobExtensions_Schedule_TisFloat2TweenJob_t8A50F8709E39BDC0B96C85C802431F6DFB8FB864_mEEAC96C6F46875D406666309C8A98EEF77220C22(L_2, L_3, IJobExtensions_Schedule_TisFloat2TweenJob_t8A50F8709E39BDC0B96C85C802431F6DFB8FB864_mEEAC96C6F46875D406666309C8A98EEF77220C22_RuntimeMethod_var);
		return L_4;
	}
}
// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.BaseAffordanceTheme`1<Unity.Mathematics.float2> UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.Vector2AffordanceReceiver::GenerateNewAffordanceThemeInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseAffordanceTheme_1_t8D071F9F08B006341599D081E084B8CBC8D33DB8* Vector2AffordanceReceiver_GenerateNewAffordanceThemeInstance_m2FE40974A19122F8C834080BB9F5874807604EAA (Vector2AffordanceReceiver_t47ED28F9A8C82B928592400FC52BD730FF7E8003* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2AffordanceTheme_tCB1DE552963E8DEBF132195D98E2A5E44CF6C0F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Vector2AffordanceTheme();
		Vector2AffordanceTheme_tCB1DE552963E8DEBF132195D98E2A5E44CF6C0F3* L_0 = (Vector2AffordanceTheme_tCB1DE552963E8DEBF132195D98E2A5E44CF6C0F3*)il2cpp_codegen_object_new(Vector2AffordanceTheme_tCB1DE552963E8DEBF132195D98E2A5E44CF6C0F3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Vector2AffordanceTheme__ctor_mC8B6FF38C7F0ED274D871229BA7867D980A1A58D(L_0, NULL);
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.Vector2AffordanceReceiver::OnAffordanceValueUpdated(Unity.Mathematics.float2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2AffordanceReceiver_OnAffordanceValueUpdated_m6F016190C9F8DFDEAA748FEE71204908C71FBACF (Vector2AffordanceReceiver_t47ED28F9A8C82B928592400FC52BD730FF7E8003* __this, float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___0_newValue, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m756C9B879DDBE079CDE2D06DC231CE42C01C4AD0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2UnityEvent_tE303206C54DC9947E1777052E0926BFAFC2CE1DC* G_B2_0 = NULL;
	Vector2UnityEvent_tE303206C54DC9947E1777052E0926BFAFC2CE1DC* G_B1_0 = NULL;
	{
		// m_ValueUpdated?.Invoke(newValue);
		Vector2UnityEvent_tE303206C54DC9947E1777052E0926BFAFC2CE1DC* L_0 = __this->___m_ValueUpdated_16;
		Vector2UnityEvent_tE303206C54DC9947E1777052E0926BFAFC2CE1DC* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_2 = ___0_newValue;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = float2_op_Implicit_mBB339033BC4FFDA8BC7A41DF06C1FA97F60115D9(L_2, NULL);
		NullCheck(G_B2_0);
		UnityEvent_1_Invoke_m756C9B879DDBE079CDE2D06DC231CE42C01C4AD0(G_B2_0, L_3, UnityEvent_1_Invoke_m756C9B879DDBE079CDE2D06DC231CE42C01C4AD0_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.Vector2AffordanceReceiver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2AffordanceReceiver__ctor_m390977669A6C8B9ABFC1C8BB4EA8144EF418C04A (Vector2AffordanceReceiver_t47ED28F9A8C82B928592400FC52BD730FF7E8003* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseAsyncAffordanceStateReceiver_1__ctor_mBF5F4D5985C97D9986548E067C9540C134EDD94D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BindableVariable_1__ctor_m3B2BE2508856426BB69A25713700113BE2D879B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BindableVariable_1_tD9956DB091E51BF2B9A64DA4F6E4E5A140604DA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// protected override BindableVariable<float2> affordanceValue { get; } = new BindableVariable<float2>();
		il2cpp_codegen_initobj((&V_0), sizeof(float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA));
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_0 = V_0;
		BindableVariable_1_tD9956DB091E51BF2B9A64DA4F6E4E5A140604DA6* L_1 = (BindableVariable_1_tD9956DB091E51BF2B9A64DA4F6E4E5A140604DA6*)il2cpp_codegen_object_new(BindableVariable_1_tD9956DB091E51BF2B9A64DA4F6E4E5A140604DA6_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		BindableVariable_1__ctor_m3B2BE2508856426BB69A25713700113BE2D879B3(L_1, L_0, (bool)1, (Func_3_t8086548CD5FB540AD8F90D0F66CD22B5BDD97206*)NULL, (bool)0, BindableVariable_1__ctor_m3B2BE2508856426BB69A25713700113BE2D879B3_RuntimeMethod_var);
		__this->___U3CaffordanceValueU3Ek__BackingField_17 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CaffordanceValueU3Ek__BackingField_17), (void*)L_1);
		BaseAsyncAffordanceStateReceiver_1__ctor_mBF5F4D5985C97D9986548E067C9540C134EDD94D(__this, BaseAsyncAffordanceStateReceiver_1__ctor_mBF5F4D5985C97D9986548E067C9540C134EDD94D_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.Vector3AffordanceThemeDatumProperty UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.Vector3AffordanceReceiver::get_affordanceThemeDatum()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3AffordanceThemeDatumProperty_t7AE01710B3906411C8AA4452F3110650DB78C38F* Vector3AffordanceReceiver_get_affordanceThemeDatum_mC307F414D9C728C9FEB0C221EFD62C8B37D7B9B3 (Vector3AffordanceReceiver_t2849A6C2EA72BD2796A4E0A5831DFDF230988458* __this, const RuntimeMethod* method) 
{
	{
		// get => m_AffordanceThemeDatum;
		Vector3AffordanceThemeDatumProperty_t7AE01710B3906411C8AA4452F3110650DB78C38F* L_0 = __this->___m_AffordanceThemeDatum_15;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.Vector3AffordanceReceiver::set_affordanceThemeDatum(UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.Vector3AffordanceThemeDatumProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3AffordanceReceiver_set_affordanceThemeDatum_m75B0A62522771089B0CE525E0ACA7FD658B5E643 (Vector3AffordanceReceiver_t2849A6C2EA72BD2796A4E0A5831DFDF230988458* __this, Vector3AffordanceThemeDatumProperty_t7AE01710B3906411C8AA4452F3110650DB78C38F* ___0_value, const RuntimeMethod* method) 
{
	{
		// set => m_AffordanceThemeDatum = value;
		Vector3AffordanceThemeDatumProperty_t7AE01710B3906411C8AA4452F3110650DB78C38F* L_0 = ___0_value;
		__this->___m_AffordanceThemeDatum_15 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_AffordanceThemeDatum_15), (void*)L_0);
		return;
	}
}
// Unity.XR.CoreUtils.Vector3UnityEvent UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.Vector3AffordanceReceiver::get_valueUpdated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3UnityEvent_tBF9BAC8FCCE7BBF3E98E9EDA6157F00E28B9153E* Vector3AffordanceReceiver_get_valueUpdated_m494D1478004712658AFAA36CD20BD5B887D8D240 (Vector3AffordanceReceiver_t2849A6C2EA72BD2796A4E0A5831DFDF230988458* __this, const RuntimeMethod* method) 
{
	{
		// get => m_ValueUpdated;
		Vector3UnityEvent_tBF9BAC8FCCE7BBF3E98E9EDA6157F00E28B9153E* L_0 = __this->___m_ValueUpdated_16;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.Vector3AffordanceReceiver::set_valueUpdated(Unity.XR.CoreUtils.Vector3UnityEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3AffordanceReceiver_set_valueUpdated_m43FA6378266B60AD45792982C406FDA34474ABE4 (Vector3AffordanceReceiver_t2849A6C2EA72BD2796A4E0A5831DFDF230988458* __this, Vector3UnityEvent_tBF9BAC8FCCE7BBF3E98E9EDA6157F00E28B9153E* ___0_value, const RuntimeMethod* method) 
{
	{
		// set => m_ValueUpdated = value;
		Vector3UnityEvent_tBF9BAC8FCCE7BBF3E98E9EDA6157F00E28B9153E* L_0 = ___0_value;
		__this->___m_ValueUpdated_16 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ValueUpdated_16), (void*)L_0);
		return;
	}
}
// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.BaseAffordanceTheme`1<Unity.Mathematics.float3> UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.Vector3AffordanceReceiver::get_defaultAffordanceTheme()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseAffordanceTheme_1_tDE4824F41024DDB47B2C61FE23860FB77EA960BB* Vector3AffordanceReceiver_get_defaultAffordanceTheme_mF4A37BB6A7479BF06045B95413EAE82A15E9B462 (Vector3AffordanceReceiver_t2849A6C2EA72BD2796A4E0A5831DFDF230988458* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatumProperty_2_get_Value_m42124DD3823EEDCB315576F6CFB202F7E1EDEE3C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected override BaseAffordanceTheme<float3> defaultAffordanceTheme => m_AffordanceThemeDatum != null ? m_AffordanceThemeDatum.Value : null;
		Vector3AffordanceThemeDatumProperty_t7AE01710B3906411C8AA4452F3110650DB78C38F* L_0 = __this->___m_AffordanceThemeDatum_15;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (BaseAffordanceTheme_1_tDE4824F41024DDB47B2C61FE23860FB77EA960BB*)NULL;
	}

IL_000a:
	{
		Vector3AffordanceThemeDatumProperty_t7AE01710B3906411C8AA4452F3110650DB78C38F* L_1 = __this->___m_AffordanceThemeDatum_15;
		NullCheck(L_1);
		Vector3AffordanceTheme_t634E7949441EB1C9CC97EDBECF62A74698525D6D* L_2;
		L_2 = DatumProperty_2_get_Value_m42124DD3823EEDCB315576F6CFB202F7E1EDEE3C(L_1, DatumProperty_2_get_Value_m42124DD3823EEDCB315576F6CFB202F7E1EDEE3C_RuntimeMethod_var);
		return L_2;
	}
}
// Unity.XR.CoreUtils.Bindings.Variables.BindableVariable`1<Unity.Mathematics.float3> UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.Vector3AffordanceReceiver::get_affordanceValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BindableVariable_1_tB68DAB26AE7AF6E274A845BB487AEE92F9E1DAA0* Vector3AffordanceReceiver_get_affordanceValue_m76F089A0604561E2DD248ACE9F390C9A4088F73C (Vector3AffordanceReceiver_t2849A6C2EA72BD2796A4E0A5831DFDF230988458* __this, const RuntimeMethod* method) 
{
	{
		// protected override BindableVariable<float3> affordanceValue { get; } = new BindableVariable<float3>();
		BindableVariable_1_tB68DAB26AE7AF6E274A845BB487AEE92F9E1DAA0* L_0 = __this->___U3CaffordanceValueU3Ek__BackingField_17;
		return L_0;
	}
}
// Unity.Jobs.JobHandle UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.Vector3AffordanceReceiver::ScheduleTweenJob(UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1<Unity.Mathematics.float3>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 Vector3AffordanceReceiver_ScheduleTweenJob_mDB46986EBAD49F98BC2B989AEF849BB0B51C614A (Vector3AffordanceReceiver_t2849A6C2EA72BD2796A4E0A5831DFDF230988458* __this, TweenJobData_1_t5779EC937EA396970F0C89EB88D60F9D7CB1977D* ___0_jobData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IJobExtensions_Schedule_TisFloat3TweenJob_t1ABCE2AF2296C75ECE719050B75BC7A92ED28644_m0296E0B47B8B7BE4F3330C2E5F2174C535AF0B2A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Float3TweenJob_t1ABCE2AF2296C75ECE719050B75BC7A92ED28644 V_0;
	memset((&V_0), 0, sizeof(V_0));
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var job = new Float3TweenJob { jobData = jobData };
		il2cpp_codegen_initobj((&V_0), sizeof(Float3TweenJob_t1ABCE2AF2296C75ECE719050B75BC7A92ED28644));
		TweenJobData_1_t5779EC937EA396970F0C89EB88D60F9D7CB1977D* L_0 = ___0_jobData;
		TweenJobData_1_t5779EC937EA396970F0C89EB88D60F9D7CB1977D L_1 = (*(TweenJobData_1_t5779EC937EA396970F0C89EB88D60F9D7CB1977D*)L_0);
		Float3TweenJob_set_jobData_m7CFEAA1CE8FA93237FBAC3066BFC53838F77D109_inline((&V_0), L_1, NULL);
		Float3TweenJob_t1ABCE2AF2296C75ECE719050B75BC7A92ED28644 L_2 = V_0;
		// return job.Schedule();
		il2cpp_codegen_initobj((&V_1), sizeof(JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08));
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_3 = V_1;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_4;
		L_4 = IJobExtensions_Schedule_TisFloat3TweenJob_t1ABCE2AF2296C75ECE719050B75BC7A92ED28644_m0296E0B47B8B7BE4F3330C2E5F2174C535AF0B2A(L_2, L_3, IJobExtensions_Schedule_TisFloat3TweenJob_t1ABCE2AF2296C75ECE719050B75BC7A92ED28644_m0296E0B47B8B7BE4F3330C2E5F2174C535AF0B2A_RuntimeMethod_var);
		return L_4;
	}
}
// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.BaseAffordanceTheme`1<Unity.Mathematics.float3> UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.Vector3AffordanceReceiver::GenerateNewAffordanceThemeInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseAffordanceTheme_1_tDE4824F41024DDB47B2C61FE23860FB77EA960BB* Vector3AffordanceReceiver_GenerateNewAffordanceThemeInstance_m726B19B816298F1075883D68EC93C2444531AA0B (Vector3AffordanceReceiver_t2849A6C2EA72BD2796A4E0A5831DFDF230988458* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3AffordanceTheme_t634E7949441EB1C9CC97EDBECF62A74698525D6D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Vector3AffordanceTheme();
		Vector3AffordanceTheme_t634E7949441EB1C9CC97EDBECF62A74698525D6D* L_0 = (Vector3AffordanceTheme_t634E7949441EB1C9CC97EDBECF62A74698525D6D*)il2cpp_codegen_object_new(Vector3AffordanceTheme_t634E7949441EB1C9CC97EDBECF62A74698525D6D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Vector3AffordanceTheme__ctor_mFF15F63CC81C52948E02E9057AFAF905DEEE1D41(L_0, NULL);
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.Vector3AffordanceReceiver::OnAffordanceValueUpdated(Unity.Mathematics.float3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3AffordanceReceiver_OnAffordanceValueUpdated_mBB5120B9FB6E709161DBD0AD58362174BC06F719 (Vector3AffordanceReceiver_t2849A6C2EA72BD2796A4E0A5831DFDF230988458* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___0_newValue, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mB89ED0EFF1CDB8BF69BA4B4E0E158A9F7A704FAF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3UnityEvent_tBF9BAC8FCCE7BBF3E98E9EDA6157F00E28B9153E* G_B2_0 = NULL;
	Vector3UnityEvent_tBF9BAC8FCCE7BBF3E98E9EDA6157F00E28B9153E* G_B1_0 = NULL;
	{
		// m_ValueUpdated?.Invoke(newValue);
		Vector3UnityEvent_tBF9BAC8FCCE7BBF3E98E9EDA6157F00E28B9153E* L_0 = __this->___m_ValueUpdated_16;
		Vector3UnityEvent_tBF9BAC8FCCE7BBF3E98E9EDA6157F00E28B9153E* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_2 = ___0_newValue;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = float3_op_Implicit_m9CC301DFD67EEFAA15CA05E91913E862B22326F6(L_2, NULL);
		NullCheck(G_B2_0);
		UnityEvent_1_Invoke_mB89ED0EFF1CDB8BF69BA4B4E0E158A9F7A704FAF(G_B2_0, L_3, UnityEvent_1_Invoke_mB89ED0EFF1CDB8BF69BA4B4E0E158A9F7A704FAF_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.Vector3AffordanceReceiver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3AffordanceReceiver__ctor_m369BD7371AF82E1E303B183EC60F057580C93588 (Vector3AffordanceReceiver_t2849A6C2EA72BD2796A4E0A5831DFDF230988458* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseAsyncAffordanceStateReceiver_1__ctor_m31C1E2011327B9940996B978AEA1ED41C851374C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BindableVariable_1__ctor_mE889114EFE12DE8C970F0BF41C8513DBA9330560_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BindableVariable_1_tB68DAB26AE7AF6E274A845BB487AEE92F9E1DAA0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// protected override BindableVariable<float3> affordanceValue { get; } = new BindableVariable<float3>();
		il2cpp_codegen_initobj((&V_0), sizeof(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E));
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_0 = V_0;
		BindableVariable_1_tB68DAB26AE7AF6E274A845BB487AEE92F9E1DAA0* L_1 = (BindableVariable_1_tB68DAB26AE7AF6E274A845BB487AEE92F9E1DAA0*)il2cpp_codegen_object_new(BindableVariable_1_tB68DAB26AE7AF6E274A845BB487AEE92F9E1DAA0_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		BindableVariable_1__ctor_mE889114EFE12DE8C970F0BF41C8513DBA9330560(L_1, L_0, (bool)1, (Func_3_tE454B2F07459EA885F6D39FCB5E70BF80B11F175*)NULL, (bool)0, BindableVariable_1__ctor_mE889114EFE12DE8C970F0BF41C8513DBA9330560_RuntimeMethod_var);
		__this->___U3CaffordanceValueU3Ek__BackingField_17 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CaffordanceValueU3Ek__BackingField_17), (void*)L_1);
		BaseAsyncAffordanceStateReceiver_1__ctor_m31C1E2011327B9940996B978AEA1ED41C851374C(__this, BaseAsyncAffordanceStateReceiver_1__ctor_m31C1E2011327B9940996B978AEA1ED41C851374C_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.Vector4AffordanceThemeDatumProperty UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.Vector4AffordanceReceiver::get_affordanceThemeDatum()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4AffordanceThemeDatumProperty_t1EA63872063AAAFE62442D012086C96D5F685656* Vector4AffordanceReceiver_get_affordanceThemeDatum_m41D6EE008F280B1F94ACE484D43E1B30C6929724 (Vector4AffordanceReceiver_tAD6C5536CC5C4DD1B982E3DE066EED898F2A605D* __this, const RuntimeMethod* method) 
{
	{
		// get => m_AffordanceThemeDatum;
		Vector4AffordanceThemeDatumProperty_t1EA63872063AAAFE62442D012086C96D5F685656* L_0 = __this->___m_AffordanceThemeDatum_15;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.Vector4AffordanceReceiver::set_affordanceThemeDatum(UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.Vector4AffordanceThemeDatumProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector4AffordanceReceiver_set_affordanceThemeDatum_m0E12BD6B1A423098B2582882736C8E058E3501CF (Vector4AffordanceReceiver_tAD6C5536CC5C4DD1B982E3DE066EED898F2A605D* __this, Vector4AffordanceThemeDatumProperty_t1EA63872063AAAFE62442D012086C96D5F685656* ___0_value, const RuntimeMethod* method) 
{
	{
		// set => m_AffordanceThemeDatum = value;
		Vector4AffordanceThemeDatumProperty_t1EA63872063AAAFE62442D012086C96D5F685656* L_0 = ___0_value;
		__this->___m_AffordanceThemeDatum_15 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_AffordanceThemeDatum_15), (void*)L_0);
		return;
	}
}
// Unity.XR.CoreUtils.Vector4UnityEvent UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.Vector4AffordanceReceiver::get_valueUpdated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4UnityEvent_t0DA3E85F1D8C1D7DF9AB40C6D9FB743450D1525F* Vector4AffordanceReceiver_get_valueUpdated_mEFCAC9510EA935EC96B8A40993260BB306B36A42 (Vector4AffordanceReceiver_tAD6C5536CC5C4DD1B982E3DE066EED898F2A605D* __this, const RuntimeMethod* method) 
{
	{
		// get => m_ValueUpdated;
		Vector4UnityEvent_t0DA3E85F1D8C1D7DF9AB40C6D9FB743450D1525F* L_0 = __this->___m_ValueUpdated_16;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.Vector4AffordanceReceiver::set_valueUpdated(Unity.XR.CoreUtils.Vector4UnityEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector4AffordanceReceiver_set_valueUpdated_m824B354D64AB9D0C6B628F8CFEB0AE28252F698B (Vector4AffordanceReceiver_tAD6C5536CC5C4DD1B982E3DE066EED898F2A605D* __this, Vector4UnityEvent_t0DA3E85F1D8C1D7DF9AB40C6D9FB743450D1525F* ___0_value, const RuntimeMethod* method) 
{
	{
		// set => m_ValueUpdated = value;
		Vector4UnityEvent_t0DA3E85F1D8C1D7DF9AB40C6D9FB743450D1525F* L_0 = ___0_value;
		__this->___m_ValueUpdated_16 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ValueUpdated_16), (void*)L_0);
		return;
	}
}
// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.BaseAffordanceTheme`1<Unity.Mathematics.float4> UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.Vector4AffordanceReceiver::get_defaultAffordanceTheme()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseAffordanceTheme_1_t60FBA85492EC3431BE3CBD8C976E4135789C1549* Vector4AffordanceReceiver_get_defaultAffordanceTheme_m5EFC73585CCBA21A6D3540EF32E7117381E7CA5D (Vector4AffordanceReceiver_tAD6C5536CC5C4DD1B982E3DE066EED898F2A605D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatumProperty_2_get_Value_m89DE407D45539BD40DBBD6E555DA13DD87E2E639_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected override BaseAffordanceTheme<float4> defaultAffordanceTheme => m_AffordanceThemeDatum != null ? m_AffordanceThemeDatum.Value : null;
		Vector4AffordanceThemeDatumProperty_t1EA63872063AAAFE62442D012086C96D5F685656* L_0 = __this->___m_AffordanceThemeDatum_15;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (BaseAffordanceTheme_1_t60FBA85492EC3431BE3CBD8C976E4135789C1549*)NULL;
	}

IL_000a:
	{
		Vector4AffordanceThemeDatumProperty_t1EA63872063AAAFE62442D012086C96D5F685656* L_1 = __this->___m_AffordanceThemeDatum_15;
		NullCheck(L_1);
		Vector4AffordanceTheme_tFEBF93156999F1929B8C2D3B30B2AF50864CECAF* L_2;
		L_2 = DatumProperty_2_get_Value_m89DE407D45539BD40DBBD6E555DA13DD87E2E639(L_1, DatumProperty_2_get_Value_m89DE407D45539BD40DBBD6E555DA13DD87E2E639_RuntimeMethod_var);
		return L_2;
	}
}
// Unity.XR.CoreUtils.Bindings.Variables.BindableVariable`1<Unity.Mathematics.float4> UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.Vector4AffordanceReceiver::get_affordanceValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BindableVariable_1_t972973977CDA4D22EBEFEFDE6154C3FDDB161959* Vector4AffordanceReceiver_get_affordanceValue_m434B3B25D064247FD8DE04AE0DD04145B72321F7 (Vector4AffordanceReceiver_tAD6C5536CC5C4DD1B982E3DE066EED898F2A605D* __this, const RuntimeMethod* method) 
{
	{
		// protected override BindableVariable<float4> affordanceValue { get; } = new BindableVariable<float4>();
		BindableVariable_1_t972973977CDA4D22EBEFEFDE6154C3FDDB161959* L_0 = __this->___U3CaffordanceValueU3Ek__BackingField_17;
		return L_0;
	}
}
// Unity.Jobs.JobHandle UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.Vector4AffordanceReceiver::ScheduleTweenJob(UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1<Unity.Mathematics.float4>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 Vector4AffordanceReceiver_ScheduleTweenJob_m3D7164F1738B43DDDECF53D1A46A3ECD03AE9E4A (Vector4AffordanceReceiver_tAD6C5536CC5C4DD1B982E3DE066EED898F2A605D* __this, TweenJobData_1_t750244DB9B41308E85DF94F53236CD62E3A3483B* ___0_jobData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IJobExtensions_Schedule_TisFloat4TweenJob_t9D63A32AC58F3FA5F68BF78254D59453B6FD3CCB_m998E94F928F62F881D50BBBC67527BA933BC88B8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Float4TweenJob_t9D63A32AC58F3FA5F68BF78254D59453B6FD3CCB V_0;
	memset((&V_0), 0, sizeof(V_0));
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var job = new Float4TweenJob { jobData = jobData };
		il2cpp_codegen_initobj((&V_0), sizeof(Float4TweenJob_t9D63A32AC58F3FA5F68BF78254D59453B6FD3CCB));
		TweenJobData_1_t750244DB9B41308E85DF94F53236CD62E3A3483B* L_0 = ___0_jobData;
		TweenJobData_1_t750244DB9B41308E85DF94F53236CD62E3A3483B L_1 = (*(TweenJobData_1_t750244DB9B41308E85DF94F53236CD62E3A3483B*)L_0);
		Float4TweenJob_set_jobData_mB155785E23E063AB1FCB3B41923264C85D53CA21_inline((&V_0), L_1, NULL);
		Float4TweenJob_t9D63A32AC58F3FA5F68BF78254D59453B6FD3CCB L_2 = V_0;
		// return job.Schedule();
		il2cpp_codegen_initobj((&V_1), sizeof(JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08));
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_3 = V_1;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_4;
		L_4 = IJobExtensions_Schedule_TisFloat4TweenJob_t9D63A32AC58F3FA5F68BF78254D59453B6FD3CCB_m998E94F928F62F881D50BBBC67527BA933BC88B8(L_2, L_3, IJobExtensions_Schedule_TisFloat4TweenJob_t9D63A32AC58F3FA5F68BF78254D59453B6FD3CCB_m998E94F928F62F881D50BBBC67527BA933BC88B8_RuntimeMethod_var);
		return L_4;
	}
}
// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.BaseAffordanceTheme`1<Unity.Mathematics.float4> UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.Vector4AffordanceReceiver::GenerateNewAffordanceThemeInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseAffordanceTheme_1_t60FBA85492EC3431BE3CBD8C976E4135789C1549* Vector4AffordanceReceiver_GenerateNewAffordanceThemeInstance_mF855831322C5AEEAE64DE415D6D218899CA107A1 (Vector4AffordanceReceiver_tAD6C5536CC5C4DD1B982E3DE066EED898F2A605D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector4AffordanceTheme_tFEBF93156999F1929B8C2D3B30B2AF50864CECAF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Vector4AffordanceTheme();
		Vector4AffordanceTheme_tFEBF93156999F1929B8C2D3B30B2AF50864CECAF* L_0 = (Vector4AffordanceTheme_tFEBF93156999F1929B8C2D3B30B2AF50864CECAF*)il2cpp_codegen_object_new(Vector4AffordanceTheme_tFEBF93156999F1929B8C2D3B30B2AF50864CECAF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Vector4AffordanceTheme__ctor_mF108CABEB6D30D03E0918D8BE660E32EAAC9EEB1(L_0, NULL);
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.Vector4AffordanceReceiver::OnAffordanceValueUpdated(Unity.Mathematics.float4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector4AffordanceReceiver_OnAffordanceValueUpdated_m5213F46721A36369FD250DDA5EA52CBA601B7387 (Vector4AffordanceReceiver_tAD6C5536CC5C4DD1B982E3DE066EED898F2A605D* __this, float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___0_newValue, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mC0D2092AFD86FA47D9A13F41A19963E8E59CA485_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector4UnityEvent_t0DA3E85F1D8C1D7DF9AB40C6D9FB743450D1525F* G_B2_0 = NULL;
	Vector4UnityEvent_t0DA3E85F1D8C1D7DF9AB40C6D9FB743450D1525F* G_B1_0 = NULL;
	{
		// m_ValueUpdated?.Invoke(newValue);
		Vector4UnityEvent_t0DA3E85F1D8C1D7DF9AB40C6D9FB743450D1525F* L_0 = __this->___m_ValueUpdated_16;
		Vector4UnityEvent_t0DA3E85F1D8C1D7DF9AB40C6D9FB743450D1525F* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_2 = ___0_newValue;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3;
		L_3 = float4_op_Implicit_m5E3AEBAF5F12155549CC051E1EEEE81DF3516E92(L_2, NULL);
		NullCheck(G_B2_0);
		UnityEvent_1_Invoke_mC0D2092AFD86FA47D9A13F41A19963E8E59CA485(G_B2_0, L_3, UnityEvent_1_Invoke_mC0D2092AFD86FA47D9A13F41A19963E8E59CA485_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.Vector4AffordanceReceiver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector4AffordanceReceiver__ctor_mFCA23B39F6D1BC12D0ACBEB54EC5A1FFAE47B582 (Vector4AffordanceReceiver_tAD6C5536CC5C4DD1B982E3DE066EED898F2A605D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseAsyncAffordanceStateReceiver_1__ctor_m2FC21462B08F9EFCFB797CA5F749BDE12710A967_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BindableVariable_1__ctor_mBD926FA831F5CBD6689542AAFF6367A5AC8E5E0C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BindableVariable_1_t972973977CDA4D22EBEFEFDE6154C3FDDB161959_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// protected override BindableVariable<float4> affordanceValue { get; } = new BindableVariable<float4>();
		il2cpp_codegen_initobj((&V_0), sizeof(float4_t89D9A294E7A79BD81BFBDD18654508532958555E));
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_0 = V_0;
		BindableVariable_1_t972973977CDA4D22EBEFEFDE6154C3FDDB161959* L_1 = (BindableVariable_1_t972973977CDA4D22EBEFEFDE6154C3FDDB161959*)il2cpp_codegen_object_new(BindableVariable_1_t972973977CDA4D22EBEFEFDE6154C3FDDB161959_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		BindableVariable_1__ctor_mBD926FA831F5CBD6689542AAFF6367A5AC8E5E0C(L_1, L_0, (bool)1, (Func_3_t0F3960B571C7D586E85A53CA420CA324108BF354*)NULL, (bool)0, BindableVariable_1__ctor_mBD926FA831F5CBD6689542AAFF6367A5AC8E5E0C_RuntimeMethod_var);
		__this->___U3CaffordanceValueU3Ek__BackingField_17 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CaffordanceValueU3Ek__BackingField_17), (void*)L_1);
		BaseAsyncAffordanceStateReceiver_1__ctor_m2FC21462B08F9EFCFB797CA5F749BDE12710A967(__this, BaseAsyncAffordanceStateReceiver_1__ctor_m2FC21462B08F9EFCFB797CA5F749BDE12710A967_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.BaseAffordanceStateProvider UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Audio.AudioAffordanceReceiver::get_affordanceStateProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseAffordanceStateProvider_t5721F9B16D6C029D832F8D6FA0A47326A581D443* AudioAffordanceReceiver_get_affordanceStateProvider_mC6CC1B93A60EC6DD28E34856882430362B366B60 (AudioAffordanceReceiver_t68854DF37FCFBBCC267549644D37D433B6CC1010* __this, const RuntimeMethod* method) 
{
	{
		// get => m_AffordanceStateProvider;
		BaseAffordanceStateProvider_t5721F9B16D6C029D832F8D6FA0A47326A581D443* L_0 = __this->___m_AffordanceStateProvider_4;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Audio.AudioAffordanceReceiver::set_affordanceStateProvider(UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.BaseAffordanceStateProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioAffordanceReceiver_set_affordanceStateProvider_mC475AAF5FFF9B9898C7A5C945CE211F4B9939AC7 (AudioAffordanceReceiver_t68854DF37FCFBBCC267549644D37D433B6CC1010* __this, BaseAffordanceStateProvider_t5721F9B16D6C029D832F8D6FA0A47326A581D443* ___0_value, const RuntimeMethod* method) 
{
	{
		// set => m_AffordanceStateProvider = value;
		BaseAffordanceStateProvider_t5721F9B16D6C029D832F8D6FA0A47326A581D443* L_0 = ___0_value;
		__this->___m_AffordanceStateProvider_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_AffordanceStateProvider_4), (void*)L_0);
		return;
	}
}
// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Audio.AudioAffordanceThemeDatumProperty UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Audio.AudioAffordanceReceiver::get_affordanceThemeDatum()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioAffordanceThemeDatumProperty_t6C3F44447E2B121AC858FAC94C4A83CC5D52C6D8* AudioAffordanceReceiver_get_affordanceThemeDatum_m030CEA83A1608BBF35557B0A4AEF16D7D036E2E6 (AudioAffordanceReceiver_t68854DF37FCFBBCC267549644D37D433B6CC1010* __this, const RuntimeMethod* method) 
{
	{
		// get => m_AffordanceThemeDatum;
		AudioAffordanceThemeDatumProperty_t6C3F44447E2B121AC858FAC94C4A83CC5D52C6D8* L_0 = __this->___m_AffordanceThemeDatum_5;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Audio.AudioAffordanceReceiver::set_affordanceThemeDatum(UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Audio.AudioAffordanceThemeDatumProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioAffordanceReceiver_set_affordanceThemeDatum_mFE0987B0C22D082D96488A94880BD71461DEC42E (AudioAffordanceReceiver_t68854DF37FCFBBCC267549644D37D433B6CC1010* __this, AudioAffordanceThemeDatumProperty_t6C3F44447E2B121AC858FAC94C4A83CC5D52C6D8* ___0_value, const RuntimeMethod* method) 
{
	{
		// set => m_AffordanceThemeDatum = value;
		AudioAffordanceThemeDatumProperty_t6C3F44447E2B121AC858FAC94C4A83CC5D52C6D8* L_0 = ___0_value;
		__this->___m_AffordanceThemeDatum_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_AffordanceThemeDatum_5), (void*)L_0);
		return;
	}
}
// UnityEngine.AudioSource UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Audio.AudioAffordanceReceiver::get_audioSource()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* AudioAffordanceReceiver_get_audioSource_m32323F6DE8CC55604A88481C3B8F8107138A1FB4 (AudioAffordanceReceiver_t68854DF37FCFBBCC267549644D37D433B6CC1010* __this, const RuntimeMethod* method) 
{
	{
		// get => m_AudioSource;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___m_AudioSource_6;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Audio.AudioAffordanceReceiver::set_audioSource(UnityEngine.AudioSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioAffordanceReceiver_set_audioSource_m25468E7620E018880A17A8C9B5D85728733D6C6D (AudioAffordanceReceiver_t68854DF37FCFBBCC267549644D37D433B6CC1010* __this, AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___0_value, const RuntimeMethod* method) 
{
	{
		// set => m_AudioSource = value;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = ___0_value;
		__this->___m_AudioSource_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_AudioSource_6), (void*)L_0);
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Audio.AudioAffordanceReceiver::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioAffordanceReceiver_OnValidate_m5B497A55589BC634E21AC94B6A0E3CE5D451AC94 (AudioAffordanceReceiver_t68854DF37FCFBBCC267549644D37D433B6CC1010* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_AudioSource == null)
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___m_AudioSource_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// m_AudioSource = GetComponent<AudioSource>();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2;
		L_2 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(__this, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		__this->___m_AudioSource_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_AudioSource_6), (void*)L_2);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Audio.AudioAffordanceReceiver::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioAffordanceReceiver_Awake_mAF124DD377B6DD4C4A93D976911D6D53E6E0F4A9 (AudioAffordanceReceiver_t68854DF37FCFBBCC267549644D37D433B6CC1010* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatumProperty_2_get_Value_m9D784B9C34F96D570FF46D3F6E0959CD1CD68718_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_AudioSource == null)
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___m_AudioSource_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// m_AudioSource = GetComponent<AudioSource>();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2;
		L_2 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(__this, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		__this->___m_AudioSource_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_AudioSource_6), (void*)L_2);
	}

IL_001a:
	{
		// if (m_AffordanceThemeDatum != null)
		AudioAffordanceThemeDatumProperty_t6C3F44447E2B121AC858FAC94C4A83CC5D52C6D8* L_3 = __this->___m_AffordanceThemeDatum_5;
		if (!L_3)
		{
			goto IL_0043;
		}
	}
	{
		// m_AffordanceThemeDatum.Value.ValidateTheme();
		AudioAffordanceThemeDatumProperty_t6C3F44447E2B121AC858FAC94C4A83CC5D52C6D8* L_4 = __this->___m_AffordanceThemeDatum_5;
		NullCheck(L_4);
		AudioAffordanceTheme_t8BF9C6D960CBE2CE7F33C4B4960F794790DD3CCE* L_5;
		L_5 = DatumProperty_2_get_Value_m9D784B9C34F96D570FF46D3F6E0959CD1CD68718(L_4, DatumProperty_2_get_Value_m9D784B9C34F96D570FF46D3F6E0959CD1CD68718_RuntimeMethod_var);
		NullCheck(L_5);
		AudioAffordanceTheme_ValidateTheme_mE3EC08D5BC4E08660CDDBB22195FF1C064774A45(L_5, NULL);
		// LogIfMissingAffordanceStates(m_AffordanceThemeDatum.Value);
		AudioAffordanceThemeDatumProperty_t6C3F44447E2B121AC858FAC94C4A83CC5D52C6D8* L_6 = __this->___m_AffordanceThemeDatum_5;
		NullCheck(L_6);
		AudioAffordanceTheme_t8BF9C6D960CBE2CE7F33C4B4960F794790DD3CCE* L_7;
		L_7 = DatumProperty_2_get_Value_m9D784B9C34F96D570FF46D3F6E0959CD1CD68718(L_6, DatumProperty_2_get_Value_m9D784B9C34F96D570FF46D3F6E0959CD1CD68718_RuntimeMethod_var);
		AudioAffordanceReceiver_LogIfMissingAffordanceStates_mCC1CC1CFB9F6FBE81E20F9F4D9FD8F6D59F43407(__this, L_7, NULL);
	}

IL_0043:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Audio.AudioAffordanceReceiver::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioAffordanceReceiver_OnEnable_mC4591747BC11ADEAC5D991D9B080518693657399 (AudioAffordanceReceiver_t68854DF37FCFBBCC267549644D37D433B6CC1010* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t1643FA0114A827809902992385492446993A54FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioAffordanceReceiver_OnAffordanceStateUpdated_m87547740A5FF0FCDC246EC6041B86C1881EBF03B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyBindableVariable_1_t27AEE302500BB845FE299C6267D0F3D8CDFBC62E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoggingUtils_tF0C63DB5488367266FC58DF3AA1D3E98B361A7B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral061E0ABE7ACDAC0E42B94EDF0A84253309EEE0F8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8429215AD9851EFB5AB9CBC64AF5D86F28ADF1F6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_AffordanceStateProvider == null)
		BaseAffordanceStateProvider_t5721F9B16D6C029D832F8D6FA0A47326A581D443* L_0 = __this->___m_AffordanceStateProvider_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		// XRLoggingUtils.LogError($"Missing Affordance State Provider reference. Please set one on {this}.", this);
		String_t* L_2;
		L_2 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral061E0ABE7ACDAC0E42B94EDF0A84253309EEE0F8, __this, NULL);
		il2cpp_codegen_runtime_class_init_inline(XRLoggingUtils_tF0C63DB5488367266FC58DF3AA1D3E98B361A7B5_il2cpp_TypeInfo_var);
		XRLoggingUtils_LogError_mC5522AB4200CD87E6677D2E59C51BA5824070B63(L_2, __this, NULL);
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		// return;
		return;
	}

IL_0027:
	{
		// if (m_AffordanceThemeDatum == null)
		AudioAffordanceThemeDatumProperty_t6C3F44447E2B121AC858FAC94C4A83CC5D52C6D8* L_3 = __this->___m_AffordanceThemeDatum_5;
		if (L_3)
		{
			goto IL_0048;
		}
	}
	{
		// XRLoggingUtils.LogError($"Missing Audio Affordance Theme Datum on {this}.", this);
		String_t* L_4;
		L_4 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral8429215AD9851EFB5AB9CBC64AF5D86F28ADF1F6, __this, NULL);
		il2cpp_codegen_runtime_class_init_inline(XRLoggingUtils_tF0C63DB5488367266FC58DF3AA1D3E98B361A7B5_il2cpp_TypeInfo_var);
		XRLoggingUtils_LogError_mC5522AB4200CD87E6677D2E59C51BA5824070B63(L_4, __this, NULL);
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		// return;
		return;
	}

IL_0048:
	{
		// m_BindingsGroup.AddBinding(m_AffordanceStateProvider.currentAffordanceStateData.Subscribe(OnAffordanceStateUpdated));
		BindingsGroup_tD5EC90BB10F9D310FE467A7E3A4CAE2E32D0397A* L_5 = __this->___m_BindingsGroup_7;
		BaseAffordanceStateProvider_t5721F9B16D6C029D832F8D6FA0A47326A581D443* L_6 = __this->___m_AffordanceStateProvider_4;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = BaseAffordanceStateProvider_get_currentAffordanceStateData_m816A94CE0C10C5FC59858FFACBFF407E9D57B9D3_inline(L_6, NULL);
		Action_1_t1643FA0114A827809902992385492446993A54FA* L_8 = (Action_1_t1643FA0114A827809902992385492446993A54FA*)il2cpp_codegen_object_new(Action_1_t1643FA0114A827809902992385492446993A54FA_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Action_1__ctor_mCFEB3F79DCD6AA372B280F86825FCA928D251B20(L_8, __this, (intptr_t)((void*)AudioAffordanceReceiver_OnAffordanceStateUpdated_m87547740A5FF0FCDC246EC6041B86C1881EBF03B_RuntimeMethod_var), NULL);
		NullCheck(L_7);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker1< RuntimeObject*, Action_1_t1643FA0114A827809902992385492446993A54FA* >::Invoke(0 /* Unity.XR.CoreUtils.Bindings.IEventBinding Unity.XR.CoreUtils.Bindings.Variables.IReadOnlyBindableVariable`1<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.AffordanceStateData>::Subscribe(System.Action`1<T>) */, IReadOnlyBindableVariable_1_t27AEE302500BB845FE299C6267D0F3D8CDFBC62E_il2cpp_TypeInfo_var, L_7, L_8);
		NullCheck(L_5);
		BindingsGroup_AddBinding_m18697E73861A1C67DE0674F162B43CCE9E67C89B(L_5, L_9, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Audio.AudioAffordanceReceiver::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioAffordanceReceiver_OnDisable_mB2133CE096B3B7659101C1D5C582EBEE7A954FD9 (AudioAffordanceReceiver_t68854DF37FCFBBCC267549644D37D433B6CC1010* __this, const RuntimeMethod* method) 
{
	{
		// m_BindingsGroup.Clear();
		BindingsGroup_tD5EC90BB10F9D310FE467A7E3A4CAE2E32D0397A* L_0 = __this->___m_BindingsGroup_7;
		NullCheck(L_0);
		BindingsGroup_Clear_m092668459F10E46245228224D1334DAB089B72E3(L_0, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Audio.AudioAffordanceReceiver::LogIfMissingAffordanceStates(UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Audio.AudioAffordanceTheme)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioAffordanceReceiver_LogIfMissingAffordanceStates_mCC1CC1CFB9F6FBE81E20F9F4D9FD8F6D59F43407 (AudioAffordanceReceiver_t68854DF37FCFBBCC267549644D37D433B6CC1010* __this, AudioAffordanceTheme_t8BF9C6D960CBE2CE7F33C4B4960F794790DD3CCE* ___0_theme, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AffordanceStateShortcuts_t7A59ACF9B6B40EBA55C1B04AB596C869777F496D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A1CF05AAB23FB516F5054A01B9FA64FDE195373);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3DFF752277D61098EC31BD7634EEA79875F7108E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7235986DB2D84548BA6B9FB5507107B2ACBEA2A6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB19214357C9B907F084AEE21249D9A6CA372DF9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAFB8FE824BD73270D82EDCA13F2E0F7BD34E4B0F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC3E296F3933E53A708D8297BE06FBDF3F612458);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	int32_t V_1 = 0;
	uint8_t V_2 = 0x0;
	AudioAffordanceThemeData_t3F29C6FF9ED5593AF503785A5C7FE342A1EE9D0D* V_3 = NULL;
	StringBuilder_t* G_B4_0 = NULL;
	StringBuilder_t* G_B3_0 = NULL;
	String_t* G_B5_0 = NULL;
	StringBuilder_t* G_B5_1 = NULL;
	{
		// if (theme.GetAffordanceThemeDataForIndex((byte)(AffordanceStateShortcuts.stateCount - 1)) == null)
		AudioAffordanceTheme_t8BF9C6D960CBE2CE7F33C4B4960F794790DD3CCE* L_0 = ___0_theme;
		il2cpp_codegen_runtime_class_init_inline(AffordanceStateShortcuts_t7A59ACF9B6B40EBA55C1B04AB596C869777F496D_il2cpp_TypeInfo_var);
		uint8_t L_1;
		L_1 = AffordanceStateShortcuts_get_stateCount_m4F2C6E48C41BF2AE0097FB1344ADC82BB4E7DF79_inline(NULL);
		NullCheck(L_0);
		AudioAffordanceThemeData_t3F29C6FF9ED5593AF503785A5C7FE342A1EE9D0D* L_2;
		L_2 = AudioAffordanceTheme_GetAffordanceThemeDataForIndex_mF454F28C7CB781D17D32C4E04310EC400CF78D7E(L_0, (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_1, 1))), NULL);
		if (L_2)
		{
			goto IL_00b4;
		}
	}
	{
		// var sb = new StringBuilder();
		StringBuilder_t* L_3 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_3, NULL);
		V_0 = L_3;
		// var actualCount = 0;
		V_1 = 0;
		// for (byte index = 0; index < AffordanceStateShortcuts.stateCount; ++index)
		V_2 = (uint8_t)0;
		goto IL_0077;
	}

IL_001f:
	{
		// var themeData = theme.GetAffordanceThemeDataForIndex(index);
		AudioAffordanceTheme_t8BF9C6D960CBE2CE7F33C4B4960F794790DD3CCE* L_4 = ___0_theme;
		uint8_t L_5 = V_2;
		NullCheck(L_4);
		AudioAffordanceThemeData_t3F29C6FF9ED5593AF503785A5C7FE342A1EE9D0D* L_6;
		L_6 = AudioAffordanceTheme_GetAffordanceThemeDataForIndex_mF454F28C7CB781D17D32C4E04310EC400CF78D7E(L_4, L_5, NULL);
		V_3 = L_6;
		// sb.Append($"Expected: {index} \"{AffordanceStateShortcuts.GetNameForIndex(index)}\",\tActual: ");
		StringBuilder_t* L_7 = V_0;
		uint8_t L_8 = V_2;
		uint8_t L_9 = L_8;
		RuntimeObject* L_10 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_9);
		uint8_t L_11 = V_2;
		il2cpp_codegen_runtime_class_init_inline(AffordanceStateShortcuts_t7A59ACF9B6B40EBA55C1B04AB596C869777F496D_il2cpp_TypeInfo_var);
		String_t* L_12;
		L_12 = AffordanceStateShortcuts_GetNameForIndex_m760EFA3C4FE7438EA4093A66558D3E46D08E0417(L_11, NULL);
		String_t* L_13;
		L_13 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralAB19214357C9B907F084AEE21249D9A6CA372DF9, L_10, L_12, NULL);
		NullCheck(L_7);
		StringBuilder_t* L_14;
		L_14 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_7, L_13, NULL);
		// sb.AppendLine(themeData != null ? $"{index} \"{themeData.stateName}\"" : "<b>(None)</b>");
		StringBuilder_t* L_15 = V_0;
		AudioAffordanceThemeData_t3F29C6FF9ED5593AF503785A5C7FE342A1EE9D0D* L_16 = V_3;
		G_B3_0 = L_15;
		if (L_16)
		{
			G_B4_0 = L_15;
			goto IL_004f;
		}
	}
	{
		G_B5_0 = _stringLiteral1A1CF05AAB23FB516F5054A01B9FA64FDE195373;
		G_B5_1 = G_B3_0;
		goto IL_0065;
	}

IL_004f:
	{
		uint8_t L_17 = V_2;
		uint8_t L_18 = L_17;
		RuntimeObject* L_19 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_18);
		AudioAffordanceThemeData_t3F29C6FF9ED5593AF503785A5C7FE342A1EE9D0D* L_20 = V_3;
		NullCheck(L_20);
		String_t* L_21 = L_20->___stateName_0;
		String_t* L_22;
		L_22 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral3DFF752277D61098EC31BD7634EEA79875F7108E, L_19, L_21, NULL);
		G_B5_0 = L_22;
		G_B5_1 = G_B4_0;
	}

IL_0065:
	{
		NullCheck(G_B5_1);
		StringBuilder_t* L_23;
		L_23 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(G_B5_1, G_B5_0, NULL);
		// if (themeData != null)
		AudioAffordanceThemeData_t3F29C6FF9ED5593AF503785A5C7FE342A1EE9D0D* L_24 = V_3;
		if (!L_24)
		{
			goto IL_0072;
		}
	}
	{
		// ++actualCount;
		int32_t L_25 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_0072:
	{
		// for (byte index = 0; index < AffordanceStateShortcuts.stateCount; ++index)
		uint8_t L_26 = V_2;
		V_2 = (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add((int32_t)L_26, 1)));
	}

IL_0077:
	{
		// for (byte index = 0; index < AffordanceStateShortcuts.stateCount; ++index)
		uint8_t L_27 = V_2;
		il2cpp_codegen_runtime_class_init_inline(AffordanceStateShortcuts_t7A59ACF9B6B40EBA55C1B04AB596C869777F496D_il2cpp_TypeInfo_var);
		uint8_t L_28;
		L_28 = AffordanceStateShortcuts_get_stateCount_m4F2C6E48C41BF2AE0097FB1344ADC82BB4E7DF79_inline(NULL);
		if ((((int32_t)L_27) < ((int32_t)L_28)))
		{
			goto IL_001f;
		}
	}
	{
		// Debug.LogWarning("Affordance Theme on affordance receiver is missing a potential affordance state. Expected states:" +
		//     $"\nExpected Count: {AffordanceStateShortcuts.stateCount}, Actual Count: {actualCount}" +
		//     $"\n{sb}", this);
		il2cpp_codegen_runtime_class_init_inline(AffordanceStateShortcuts_t7A59ACF9B6B40EBA55C1B04AB596C869777F496D_il2cpp_TypeInfo_var);
		uint8_t L_29;
		L_29 = AffordanceStateShortcuts_get_stateCount_m4F2C6E48C41BF2AE0097FB1344ADC82BB4E7DF79_inline(NULL);
		uint8_t L_30 = L_29;
		RuntimeObject* L_31 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_30);
		int32_t L_32 = V_1;
		int32_t L_33 = L_32;
		RuntimeObject* L_34 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_33);
		String_t* L_35;
		L_35 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral7235986DB2D84548BA6B9FB5507107B2ACBEA2A6, L_31, L_34, NULL);
		StringBuilder_t* L_36 = V_0;
		String_t* L_37;
		L_37 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralEC3E296F3933E53A708D8297BE06FBDF3F612458, L_36, NULL);
		String_t* L_38;
		L_38 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralAFB8FE824BD73270D82EDCA13F2E0F7BD34E4B0F, L_35, L_37, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m23033D7E2F0F298BE465B7F3A63CDF40A4EB70EB(L_38, __this, NULL);
	}

IL_00b4:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Audio.AudioAffordanceReceiver::OnAffordanceStateUpdated(UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.AffordanceStateData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioAffordanceReceiver_OnAffordanceStateUpdated_m87547740A5FF0FCDC246EC6041B86C1881EBF03B (AudioAffordanceReceiver_t68854DF37FCFBBCC267549644D37D433B6CC1010* __this, AffordanceStateData_t925209B85B56D04F7F178061B1C91280DA6DBC69 ___0_affordanceStateData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AffordanceStateShortcuts_t7A59ACF9B6B40EBA55C1B04AB596C869777F496D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatumProperty_2_get_Value_m9D784B9C34F96D570FF46D3F6E0959CD1CD68718_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoggingUtils_tF0C63DB5488367266FC58DF3AA1D3E98B361A7B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB3613FE280B7E7695302D741A2D0E6116952BE9);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	AudioAffordanceThemeData_t3F29C6FF9ED5593AF503785A5C7FE342A1EE9D0D* V_8 = NULL;
	AudioAffordanceThemeData_t3F29C6FF9ED5593AF503785A5C7FE342A1EE9D0D* V_9 = NULL;
	String_t* V_10 = NULL;
	{
		// var newIndex = affordanceStateData.stateIndex;
		uint8_t L_0;
		L_0 = AffordanceStateData_get_stateIndex_m2B9DFBBB1FE3AE1BC2BAC900B2493B72B4D8F341_inline((&___0_affordanceStateData), NULL);
		V_0 = L_0;
		// if (newIndex != m_LastAffordanceStateIndex)
		uint8_t L_1 = V_0;
		uint8_t L_2 = __this->___m_LastAffordanceStateIndex_8;
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_00ce;
		}
	}
	{
		// bool newStateIsActivate = newIndex == AffordanceStateShortcuts.activated;
		uint8_t L_3 = V_0;
		// bool newStateIsHover = newIndex == AffordanceStateShortcuts.hovered;
		uint8_t L_4 = V_0;
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)2))? 1 : 0);
		// bool newStateIsSelect = newIndex == AffordanceStateShortcuts.selected;
		uint8_t L_5 = V_0;
		V_2 = (bool)((((int32_t)L_5) == ((int32_t)4))? 1 : 0);
		// bool lastStateIsSelect = m_LastAffordanceStateIndex == AffordanceStateShortcuts.selected;
		uint8_t L_6 = __this->___m_LastAffordanceStateIndex_8;
		V_3 = (bool)((((int32_t)L_6) == ((int32_t)4))? 1 : 0);
		// bool lastStateIsActivate = m_LastAffordanceStateIndex == AffordanceStateShortcuts.activated;
		uint8_t L_7 = __this->___m_LastAffordanceStateIndex_8;
		V_4 = (bool)((((int32_t)L_7) == ((int32_t)5))? 1 : 0);
		// bool selectToActivate = newStateIsActivate && lastStateIsSelect;
		bool L_8 = V_3;
		// bool activateToSelect = newStateIsSelect && lastStateIsActivate;
		bool L_9 = V_2;
		bool L_10 = V_4;
		V_5 = (bool)((int32_t)((int32_t)L_9&(int32_t)L_10));
		// bool hoverToSelect = newStateIsHover && lastStateIsSelect;
		bool L_11 = V_1;
		bool L_12 = V_3;
		V_6 = (bool)((int32_t)((int32_t)L_11&(int32_t)L_12));
		// bool selectToHover = newStateIsHover && lastStateIsSelect;
		bool L_13 = V_1;
		bool L_14 = V_3;
		V_7 = (bool)((int32_t)((int32_t)L_13&(int32_t)L_14));
		// if (!selectToActivate && !hoverToSelect)
		if (((int32_t)(((((int32_t)L_3) == ((int32_t)5))? 1 : 0)&(int32_t)L_8)))
		{
			goto IL_0078;
		}
	}
	{
		bool L_15 = V_6;
		if (L_15)
		{
			goto IL_0078;
		}
	}
	{
		// var exitData = m_AffordanceThemeDatum.Value.GetAffordanceThemeDataForIndex(m_LastAffordanceStateIndex);
		AudioAffordanceThemeDatumProperty_t6C3F44447E2B121AC858FAC94C4A83CC5D52C6D8* L_16 = __this->___m_AffordanceThemeDatum_5;
		NullCheck(L_16);
		AudioAffordanceTheme_t8BF9C6D960CBE2CE7F33C4B4960F794790DD3CCE* L_17;
		L_17 = DatumProperty_2_get_Value_m9D784B9C34F96D570FF46D3F6E0959CD1CD68718(L_16, DatumProperty_2_get_Value_m9D784B9C34F96D570FF46D3F6E0959CD1CD68718_RuntimeMethod_var);
		uint8_t L_18 = __this->___m_LastAffordanceStateIndex_8;
		NullCheck(L_17);
		AudioAffordanceThemeData_t3F29C6FF9ED5593AF503785A5C7FE342A1EE9D0D* L_19;
		L_19 = AudioAffordanceTheme_GetAffordanceThemeDataForIndex_mF454F28C7CB781D17D32C4E04310EC400CF78D7E(L_17, L_18, NULL);
		V_8 = L_19;
		// if (exitData != null)
		AudioAffordanceThemeData_t3F29C6FF9ED5593AF503785A5C7FE342A1EE9D0D* L_20 = V_8;
		if (!L_20)
		{
			goto IL_0078;
		}
	}
	{
		// PlayAudioClip(exitData.stateExited);
		AudioAffordanceThemeData_t3F29C6FF9ED5593AF503785A5C7FE342A1EE9D0D* L_21 = V_8;
		NullCheck(L_21);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_22 = L_21->___stateExited_2;
		AudioAffordanceReceiver_PlayAudioClip_m6CE8491BBBAC91F254052CCDBE7B0D4C52C9237F(__this, L_22, NULL);
	}

IL_0078:
	{
		// if (!activateToSelect && !selectToHover)
		bool L_23 = V_5;
		if (L_23)
		{
			goto IL_00c7;
		}
	}
	{
		bool L_24 = V_7;
		if (L_24)
		{
			goto IL_00c7;
		}
	}
	{
		// var enterData = m_AffordanceThemeDatum.Value.GetAffordanceThemeDataForIndex(newIndex);
		AudioAffordanceThemeDatumProperty_t6C3F44447E2B121AC858FAC94C4A83CC5D52C6D8* L_25 = __this->___m_AffordanceThemeDatum_5;
		NullCheck(L_25);
		AudioAffordanceTheme_t8BF9C6D960CBE2CE7F33C4B4960F794790DD3CCE* L_26;
		L_26 = DatumProperty_2_get_Value_m9D784B9C34F96D570FF46D3F6E0959CD1CD68718(L_25, DatumProperty_2_get_Value_m9D784B9C34F96D570FF46D3F6E0959CD1CD68718_RuntimeMethod_var);
		uint8_t L_27 = V_0;
		NullCheck(L_26);
		AudioAffordanceThemeData_t3F29C6FF9ED5593AF503785A5C7FE342A1EE9D0D* L_28;
		L_28 = AudioAffordanceTheme_GetAffordanceThemeDataForIndex_mF454F28C7CB781D17D32C4E04310EC400CF78D7E(L_26, L_27, NULL);
		V_9 = L_28;
		// if (enterData != null)
		AudioAffordanceThemeData_t3F29C6FF9ED5593AF503785A5C7FE342A1EE9D0D* L_29 = V_9;
		if (!L_29)
		{
			goto IL_00a6;
		}
	}
	{
		// PlayAudioClip(enterData.stateEntered);
		AudioAffordanceThemeData_t3F29C6FF9ED5593AF503785A5C7FE342A1EE9D0D* L_30 = V_9;
		NullCheck(L_30);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_31 = L_30->___stateEntered_1;
		AudioAffordanceReceiver_PlayAudioClip_m6CE8491BBBAC91F254052CCDBE7B0D4C52C9237F(__this, L_31, NULL);
		goto IL_00c7;
	}

IL_00a6:
	{
		// var stateName = AffordanceStateShortcuts.GetNameForIndex(newIndex);
		uint8_t L_32 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AffordanceStateShortcuts_t7A59ACF9B6B40EBA55C1B04AB596C869777F496D_il2cpp_TypeInfo_var);
		String_t* L_33;
		L_33 = AffordanceStateShortcuts_GetNameForIndex_m760EFA3C4FE7438EA4093A66558D3E46D08E0417(L_32, NULL);
		V_10 = L_33;
		// XRLoggingUtils.LogError($"Missing theme data for affordance state index {newIndex} \"{stateName}\" with {this}.", this);
		uint8_t L_34 = V_0;
		uint8_t L_35 = L_34;
		RuntimeObject* L_36 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_35);
		String_t* L_37 = V_10;
		String_t* L_38;
		L_38 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteralEB3613FE280B7E7695302D741A2D0E6116952BE9, L_36, L_37, __this, NULL);
		il2cpp_codegen_runtime_class_init_inline(XRLoggingUtils_tF0C63DB5488367266FC58DF3AA1D3E98B361A7B5_il2cpp_TypeInfo_var);
		XRLoggingUtils_LogError_mC5522AB4200CD87E6677D2E59C51BA5824070B63(L_38, __this, NULL);
	}

IL_00c7:
	{
		// m_LastAffordanceStateIndex = newIndex;
		uint8_t L_39 = V_0;
		__this->___m_LastAffordanceStateIndex_8 = L_39;
	}

IL_00ce:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Audio.AudioAffordanceReceiver::PlayAudioClip(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioAffordanceReceiver_PlayAudioClip_m6CE8491BBBAC91F254052CCDBE7B0D4C52C9237F (AudioAffordanceReceiver_t68854DF37FCFBBCC267549644D37D433B6CC1010* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_clipToPlay, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (clipToPlay == null)
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_0 = ___0_clipToPlay;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// m_AudioSource.PlayOneShot(clipToPlay);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = __this->___m_AudioSource_6;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_3 = ___0_clipToPlay;
		NullCheck(L_2);
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Audio.AudioAffordanceReceiver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioAffordanceReceiver__ctor_m1D7AE78C348F13B429D073E5DC2392326B39A6F0 (AudioAffordanceReceiver_t68854DF37FCFBBCC267549644D37D433B6CC1010* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BindingsGroup_tD5EC90BB10F9D310FE467A7E3A4CAE2E32D0397A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly BindingsGroup m_BindingsGroup = new BindingsGroup();
		BindingsGroup_tD5EC90BB10F9D310FE467A7E3A4CAE2E32D0397A* L_0 = (BindingsGroup_tD5EC90BB10F9D310FE467A7E3A4CAE2E32D0397A*)il2cpp_codegen_object_new(BindingsGroup_tD5EC90BB10F9D310FE467A7E3A4CAE2E32D0397A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		BindingsGroup__ctor_m1EFD3F405050571D3A66F9B95E8FBC296866A716(L_0, NULL);
		__this->___m_BindingsGroup_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_BindingsGroup_7), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1<UnityEngine.Color> UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.ColorTweenJob::get_jobData()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR TweenJobData_1_t9932452930B7CDE5DC4DA408B50B8E4C7A3AAFB7 ColorTweenJob_get_jobData_mA280F7642FD5A049CCA584A9C7643D66D8492F16 (ColorTweenJob_t1BEEC88338C32DADE1D0E383FB1E1327444022A4* IL2CPP_PARAMETER_RESTRICT __this, const RuntimeMethod* method) 
{
	{
		// public TweenJobData<Color> jobData { get; set; }
		TweenJobData_1_t9932452930B7CDE5DC4DA408B50B8E4C7A3AAFB7 L_0 = __this->___U3CjobDataU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  TweenJobData_1_t9932452930B7CDE5DC4DA408B50B8E4C7A3AAFB7 ColorTweenJob_get_jobData_mA280F7642FD5A049CCA584A9C7643D66D8492F16_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, const RuntimeMethod* method)
{
	ColorTweenJob_t1BEEC88338C32DADE1D0E383FB1E1327444022A4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ColorTweenJob_t1BEEC88338C32DADE1D0E383FB1E1327444022A4*>(__this + _offset);
	TweenJobData_1_t9932452930B7CDE5DC4DA408B50B8E4C7A3AAFB7 _returnValue;
	_returnValue = ColorTweenJob_get_jobData_mA280F7642FD5A049CCA584A9C7643D66D8492F16_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.ColorTweenJob::set_jobData(UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1<UnityEngine.Color>)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ColorTweenJob_set_jobData_m7753E76538470AEC9A4D639D6C859694230C1E66 (ColorTweenJob_t1BEEC88338C32DADE1D0E383FB1E1327444022A4* IL2CPP_PARAMETER_RESTRICT __this, TweenJobData_1_t9932452930B7CDE5DC4DA408B50B8E4C7A3AAFB7 ___0_value, const RuntimeMethod* method) 
{
	{
		// public TweenJobData<Color> jobData { get; set; }
		TweenJobData_1_t9932452930B7CDE5DC4DA408B50B8E4C7A3AAFB7 L_0 = ___0_value;
		__this->___U3CjobDataU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void ColorTweenJob_set_jobData_m7753E76538470AEC9A4D639D6C859694230C1E66_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, TweenJobData_1_t9932452930B7CDE5DC4DA408B50B8E4C7A3AAFB7 ___0_value, const RuntimeMethod* method)
{
	ColorTweenJob_t1BEEC88338C32DADE1D0E383FB1E1327444022A4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ColorTweenJob_t1BEEC88338C32DADE1D0E383FB1E1327444022A4*>(__this + _offset);
	ColorTweenJob_set_jobData_m7753E76538470AEC9A4D639D6C859694230C1E66_inline(_thisAdjusted, ___0_value, method);
}
// System.Byte UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.ColorTweenJob::get_colorBlendMode()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR uint8_t ColorTweenJob_get_colorBlendMode_m12030B0AB95C1FD2245040701D6E60268E9D4918 (ColorTweenJob_t1BEEC88338C32DADE1D0E383FB1E1327444022A4* IL2CPP_PARAMETER_RESTRICT __this, const RuntimeMethod* method) 
{
	{
		// public byte colorBlendMode { get; set; }
		uint8_t L_0 = __this->___U3CcolorBlendModeU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  uint8_t ColorTweenJob_get_colorBlendMode_m12030B0AB95C1FD2245040701D6E60268E9D4918_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, const RuntimeMethod* method)
{
	ColorTweenJob_t1BEEC88338C32DADE1D0E383FB1E1327444022A4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ColorTweenJob_t1BEEC88338C32DADE1D0E383FB1E1327444022A4*>(__this + _offset);
	uint8_t _returnValue;
	_returnValue = ColorTweenJob_get_colorBlendMode_m12030B0AB95C1FD2245040701D6E60268E9D4918_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.ColorTweenJob::set_colorBlendMode(System.Byte)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ColorTweenJob_set_colorBlendMode_m9794C87EAF0DF0DC3FCCD8FE779415EF9766BA9A (ColorTweenJob_t1BEEC88338C32DADE1D0E383FB1E1327444022A4* IL2CPP_PARAMETER_RESTRICT __this, uint8_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public byte colorBlendMode { get; set; }
		uint8_t L_0 = ___0_value;
		__this->___U3CcolorBlendModeU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void ColorTweenJob_set_colorBlendMode_m9794C87EAF0DF0DC3FCCD8FE779415EF9766BA9A_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, uint8_t ___0_value, const RuntimeMethod* method)
{
	ColorTweenJob_t1BEEC88338C32DADE1D0E383FB1E1327444022A4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ColorTweenJob_t1BEEC88338C32DADE1D0E383FB1E1327444022A4*>(__this + _offset);
	ColorTweenJob_set_colorBlendMode_m9794C87EAF0DF0DC3FCCD8FE779415EF9766BA9A_inline(_thisAdjusted, ___0_value, method);
}
// System.Single UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.ColorTweenJob::get_colorBlendAmount()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR float ColorTweenJob_get_colorBlendAmount_mC6C4A36FB4A513434F012393BBFF399976D8EDFE (ColorTweenJob_t1BEEC88338C32DADE1D0E383FB1E1327444022A4* IL2CPP_PARAMETER_RESTRICT __this, const RuntimeMethod* method) 
{
	{
		// public float colorBlendAmount { get; set; }
		float L_0 = __this->___U3CcolorBlendAmountU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  float ColorTweenJob_get_colorBlendAmount_mC6C4A36FB4A513434F012393BBFF399976D8EDFE_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, const RuntimeMethod* method)
{
	ColorTweenJob_t1BEEC88338C32DADE1D0E383FB1E1327444022A4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ColorTweenJob_t1BEEC88338C32DADE1D0E383FB1E1327444022A4*>(__this + _offset);
	float _returnValue;
	_returnValue = ColorTweenJob_get_colorBlendAmount_mC6C4A36FB4A513434F012393BBFF399976D8EDFE_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.ColorTweenJob::set_colorBlendAmount(System.Single)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ColorTweenJob_set_colorBlendAmount_mB6495D73D071F8706E3238110A0CE1CC1DD09916 (ColorTweenJob_t1BEEC88338C32DADE1D0E383FB1E1327444022A4* IL2CPP_PARAMETER_RESTRICT __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float colorBlendAmount { get; set; }
		float L_0 = ___0_value;
		__this->___U3CcolorBlendAmountU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void ColorTweenJob_set_colorBlendAmount_mB6495D73D071F8706E3238110A0CE1CC1DD09916_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, float ___0_value, const RuntimeMethod* method)
{
	ColorTweenJob_t1BEEC88338C32DADE1D0E383FB1E1327444022A4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ColorTweenJob_t1BEEC88338C32DADE1D0E383FB1E1327444022A4*>(__this + _offset);
	ColorTweenJob_set_colorBlendAmount_mB6495D73D071F8706E3238110A0CE1CC1DD09916_inline(_thisAdjusted, ___0_value, method);
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.ColorTweenJob::Execute()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ColorTweenJob_Execute_m81923C5B32D758B4F509616D6DDBA4DA68855DFC (ColorTweenJob_t1BEEC88338C32DADE1D0E383FB1E1327444022A4* IL2CPP_PARAMETER_RESTRICT __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenJobData_1_get_stateTransitionAmountFloat_mE1CF2FE9E8A0DD1E3595B8077AD3E892C103E0D6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_1;
	memset((&V_1), 0, sizeof(V_1));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_2;
	memset((&V_2), 0, sizeof(V_2));
	NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D V_3;
	memset((&V_3), 0, sizeof(V_3));
	TweenJobData_1_t9932452930B7CDE5DC4DA408B50B8E4C7A3AAFB7 V_4;
	memset((&V_4), 0, sizeof(V_4));
	TweenJobData_1_t9932452930B7CDE5DC4DA408B50B8E4C7A3AAFB7 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// var stateTransitionAmount = jobData.nativeCurve.Evaluate(jobData.stateTransitionAmountFloat);
		TweenJobData_1_t9932452930B7CDE5DC4DA408B50B8E4C7A3AAFB7 L_0;
		L_0 = ColorTweenJob_get_jobData_mA280F7642FD5A049CCA584A9C7643D66D8492F16_inline(__this, NULL);
		V_4 = L_0;
		NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2* L_1 = (NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2*)(&(&V_4)->___nativeCurve_6);
		TweenJobData_1_t9932452930B7CDE5DC4DA408B50B8E4C7A3AAFB7 L_2;
		L_2 = ColorTweenJob_get_jobData_mA280F7642FD5A049CCA584A9C7643D66D8492F16_inline(__this, NULL);
		V_5 = L_2;
		float L_3;
		L_3 = TweenJobData_1_get_stateTransitionAmountFloat_mE1CF2FE9E8A0DD1E3595B8077AD3E892C103E0D6((&V_5), TweenJobData_1_get_stateTransitionAmountFloat_mE1CF2FE9E8A0DD1E3595B8077AD3E892C103E0D6_RuntimeMethod_var);
		float L_4;
		L_4 = NativeCurve_Evaluate_m863A02A3C819738F373F7EC87BFDEFA113D4E87C(L_1, L_3, NULL);
		V_0 = L_4;
		// var newTargetValue = Lerp(jobData.stateOriginValue, jobData.stateTargetValue, stateTransitionAmount);
		TweenJobData_1_t9932452930B7CDE5DC4DA408B50B8E4C7A3AAFB7 L_5;
		L_5 = ColorTweenJob_get_jobData_mA280F7642FD5A049CCA584A9C7643D66D8492F16_inline(__this, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = L_5.___stateOriginValue_3;
		TweenJobData_1_t9932452930B7CDE5DC4DA408B50B8E4C7A3AAFB7 L_7;
		L_7 = ColorTweenJob_get_jobData_mA280F7642FD5A049CCA584A9C7643D66D8492F16_inline(__this, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = L_7.___stateTargetValue_4;
		float L_9 = V_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10;
		L_10 = ColorTweenJob_Lerp_m8DACBF2895C6CB62302828384FDDC82442AB86F1(__this, L_6, L_8, L_9, NULL);
		V_1 = L_10;
		// var processedTargetValue = ProcessTargetAffordanceValue(jobData.initialValue, newTargetValue);
		TweenJobData_1_t9932452930B7CDE5DC4DA408B50B8E4C7A3AAFB7 L_11;
		L_11 = ColorTweenJob_get_jobData_mA280F7642FD5A049CCA584A9C7643D66D8492F16_inline(__this, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12 = L_11.___initialValue_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = V_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14;
		L_14 = ColorTweenJob_ProcessTargetAffordanceValue_m88916683E2BBBCE88902A20BEAF9436D84940AD9(__this, L_12, L_13, NULL);
		V_2 = L_14;
		// var outputData = jobData.outputData;
		TweenJobData_1_t9932452930B7CDE5DC4DA408B50B8E4C7A3AAFB7 L_15;
		L_15 = ColorTweenJob_get_jobData_mA280F7642FD5A049CCA584A9C7643D66D8492F16_inline(__this, NULL);
		NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D L_16 = L_15.___outputData_9;
		V_3 = L_16;
		// outputData[0] = Lerp(jobData.tweenStartValue, processedTargetValue, jobData.tweenAmount);
		TweenJobData_1_t9932452930B7CDE5DC4DA408B50B8E4C7A3AAFB7 L_17;
		L_17 = ColorTweenJob_get_jobData_mA280F7642FD5A049CCA584A9C7643D66D8492F16_inline(__this, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18 = L_17.___tweenStartValue_7;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_19 = V_2;
		TweenJobData_1_t9932452930B7CDE5DC4DA408B50B8E4C7A3AAFB7 L_20;
		L_20 = ColorTweenJob_get_jobData_mA280F7642FD5A049CCA584A9C7643D66D8492F16_inline(__this, NULL);
		float L_21 = L_20.___tweenAmount_8;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22;
		L_22 = ColorTweenJob_Lerp_m8DACBF2895C6CB62302828384FDDC82442AB86F1(__this, L_18, L_19, L_21, NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ((&V_3))->___m_Buffer_0, 0, (L_22));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ColorTweenJob_Execute_m81923C5B32D758B4F509616D6DDBA4DA68855DFC_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, const RuntimeMethod* method)
{
	ColorTweenJob_t1BEEC88338C32DADE1D0E383FB1E1327444022A4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ColorTweenJob_t1BEEC88338C32DADE1D0E383FB1E1327444022A4*>(__this + _offset);
	ColorTweenJob_Execute_m81923C5B32D758B4F509616D6DDBA4DA68855DFC(_thisAdjusted, method);
}
// UnityEngine.Color UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.ColorTweenJob::ProcessTargetAffordanceValue(UnityEngine.Color,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ColorTweenJob_ProcessTargetAffordanceValue_m88916683E2BBBCE88902A20BEAF9436D84940AD9 (ColorTweenJob_t1BEEC88338C32DADE1D0E383FB1E1327444022A4* IL2CPP_PARAMETER_RESTRICT __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_initialValue, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_newValue, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	uint8_t V_2 = 0x0;
	{
		// Color blendedColor = newValue;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___1_newValue;
		V_0 = L_0;
		// switch (colorBlendMode)
		uint8_t L_1;
		L_1 = ColorTweenJob_get_colorBlendMode_m12030B0AB95C1FD2245040701D6E60268E9D4918_inline(__this, NULL);
		V_2 = L_1;
		uint8_t L_2 = V_2;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0078;
			}
			case 1:
			{
				goto IL_001d;
			}
			case 2:
			{
				goto IL_0069;
			}
		}
	}
	{
		goto IL_0078;
	}

IL_001d:
	{
		// float blendAmt = colorBlendAmount;
		float L_3;
		L_3 = ColorTweenJob_get_colorBlendAmount_mC6C4A36FB4A513434F012393BBFF399976D8EDFE_inline(__this, NULL);
		V_1 = L_3;
		// blendedColor = new Color(initialValue.r + newValue.r * blendAmt, initialValue.g + newValue.g * blendAmt, initialValue.b + newValue.b * blendAmt, initialValue.a + newValue.a * blendAmt);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___0_initialValue;
		float L_5 = L_4.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___1_newValue;
		float L_7 = L_6.___r_0;
		float L_8 = V_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = ___0_initialValue;
		float L_10 = L_9.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11 = ___1_newValue;
		float L_12 = L_11.___g_1;
		float L_13 = V_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14 = ___0_initialValue;
		float L_15 = L_14.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16 = ___1_newValue;
		float L_17 = L_16.___b_2;
		float L_18 = V_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_19 = ___0_initialValue;
		float L_20 = L_19.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_21 = ___1_newValue;
		float L_22 = L_21.___a_3;
		float L_23 = V_1;
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&V_0), ((float)il2cpp_codegen_add(L_5, ((float)il2cpp_codegen_multiply(L_7, L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(L_12, L_13)))), ((float)il2cpp_codegen_add(L_15, ((float)il2cpp_codegen_multiply(L_17, L_18)))), ((float)il2cpp_codegen_add(L_20, ((float)il2cpp_codegen_multiply(L_22, L_23)))), NULL);
		// break;
		goto IL_0078;
	}

IL_0069:
	{
		// blendedColor = Lerp(initialValue, newValue, colorBlendAmount);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_24 = ___0_initialValue;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_25 = ___1_newValue;
		float L_26;
		L_26 = ColorTweenJob_get_colorBlendAmount_mC6C4A36FB4A513434F012393BBFF399976D8EDFE_inline(__this, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_27;
		L_27 = ColorTweenJob_Lerp_m8DACBF2895C6CB62302828384FDDC82442AB86F1(__this, L_24, L_25, L_26, NULL);
		V_0 = L_27;
	}

IL_0078:
	{
		// return blendedColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_28 = V_0;
		return L_28;
	}
}
IL2CPP_EXTERN_C  Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ColorTweenJob_ProcessTargetAffordanceValue_m88916683E2BBBCE88902A20BEAF9436D84940AD9_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_initialValue, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_newValue, const RuntimeMethod* method)
{
	ColorTweenJob_t1BEEC88338C32DADE1D0E383FB1E1327444022A4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ColorTweenJob_t1BEEC88338C32DADE1D0E383FB1E1327444022A4*>(__this + _offset);
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F _returnValue;
	_returnValue = ColorTweenJob_ProcessTargetAffordanceValue_m88916683E2BBBCE88902A20BEAF9436D84940AD9(_thisAdjusted, ___0_initialValue, ___1_newValue, method);
	return _returnValue;
}
// UnityEngine.Color UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.ColorTweenJob::Lerp(UnityEngine.Color,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ColorTweenJob_Lerp_m8DACBF2895C6CB62302828384FDDC82442AB86F1 (ColorTweenJob_t1BEEC88338C32DADE1D0E383FB1E1327444022A4* IL2CPP_PARAMETER_RESTRICT __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_from, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_to, float ___2_t, const RuntimeMethod* method) 
{
	{
		// if (IsNearlyEqual(from, to) )
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_from;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___1_to;
		bool L_2;
		L_2 = ColorTweenJob_IsNearlyEqual_m3C886B1F5FF316BE83F799EAB7107578D961BE55(__this, L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_000c;
		}
	}
	{
		// return to;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ___1_to;
		return L_3;
	}

IL_000c:
	{
		// return (Vector4)math.lerp((Vector4)from, (Vector4)to, t);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___0_from;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5;
		L_5 = Color_op_Implicit_m9B3228DAFA8DC57A75DE00CBBF13ED4F1E7B01FF_inline(L_4, NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_6;
		L_6 = float4_op_Implicit_m6D2091EB2CF6E0629A029A7BE9AD230F5F394CB2(L_5, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7 = ___1_to;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		L_8 = Color_op_Implicit_m9B3228DAFA8DC57A75DE00CBBF13ED4F1E7B01FF_inline(L_7, NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_9;
		L_9 = float4_op_Implicit_m6D2091EB2CF6E0629A029A7BE9AD230F5F394CB2(L_8, NULL);
		float L_10 = ___2_t;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_11;
		L_11 = math_lerp_mE2700A823A97D3AB6EDF3BEF66FEDA9B53E3DEA9_inline(L_6, L_9, L_10, NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_12;
		L_12 = float4_op_Implicit_m5E3AEBAF5F12155549CC051E1EEEE81DF3516E92(L_11, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13;
		L_13 = Color_op_Implicit_mA8CF4745D766F4F610E1BE0A1ED2F4E5FE5D734C_inline(L_12, NULL);
		return L_13;
	}
}
IL2CPP_EXTERN_C  Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ColorTweenJob_Lerp_m8DACBF2895C6CB62302828384FDDC82442AB86F1_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_from, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_to, float ___2_t, const RuntimeMethod* method)
{
	ColorTweenJob_t1BEEC88338C32DADE1D0E383FB1E1327444022A4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ColorTweenJob_t1BEEC88338C32DADE1D0E383FB1E1327444022A4*>(__this + _offset);
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F _returnValue;
	_returnValue = ColorTweenJob_Lerp_m8DACBF2895C6CB62302828384FDDC82442AB86F1(_thisAdjusted, ___0_from, ___1_to, ___2_t, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.ColorTweenJob::IsNearlyEqual(UnityEngine.Color,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR bool ColorTweenJob_IsNearlyEqual_m3C886B1F5FF316BE83F799EAB7107578D961BE55 (ColorTweenJob_t1BEEC88338C32DADE1D0E383FB1E1327444022A4* IL2CPP_PARAMETER_RESTRICT __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_from, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_to, const RuntimeMethod* method) 
{
	{
		// return math.distancesq((Vector4)from, (Vector4)to) < TweenJobData<Color>.squareSnapDistanceThreshold;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_from;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1;
		L_1 = Color_op_Implicit_m9B3228DAFA8DC57A75DE00CBBF13ED4F1E7B01FF_inline(L_0, NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_2;
		L_2 = float4_op_Implicit_m6D2091EB2CF6E0629A029A7BE9AD230F5F394CB2(L_1, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ___1_to;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4;
		L_4 = Color_op_Implicit_m9B3228DAFA8DC57A75DE00CBBF13ED4F1E7B01FF_inline(L_3, NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_5;
		L_5 = float4_op_Implicit_m6D2091EB2CF6E0629A029A7BE9AD230F5F394CB2(L_4, NULL);
		float L_6;
		L_6 = math_distancesq_m609DF85E2355430E1F4CD51CDC1971BD5F7D4AF3_inline(L_2, L_5, NULL);
		return (bool)((((float)L_6) < ((float)(2.50000028E-07f)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool ColorTweenJob_IsNearlyEqual_m3C886B1F5FF316BE83F799EAB7107578D961BE55_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_from, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_to, const RuntimeMethod* method)
{
	ColorTweenJob_t1BEEC88338C32DADE1D0E383FB1E1327444022A4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ColorTweenJob_t1BEEC88338C32DADE1D0E383FB1E1327444022A4*>(__this + _offset);
	bool _returnValue;
	_returnValue = ColorTweenJob_IsNearlyEqual_m3C886B1F5FF316BE83F799EAB7107578D961BE55(_thisAdjusted, ___0_from, ___1_to, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1<System.Single> UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.FloatTweenJob::get_jobData()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR TweenJobData_1_t06FAD94FCA49A795B22C7FA2EA018F83E450B97E FloatTweenJob_get_jobData_m4AA6AAAC9D6112B8E88153E6076911F693F13CBA (FloatTweenJob_tA1F66E54D3DBA65A5E68334BA5532EB1D6543F98* IL2CPP_PARAMETER_RESTRICT __this, const RuntimeMethod* method) 
{
	{
		// public TweenJobData<float> jobData { get; set; }
		TweenJobData_1_t06FAD94FCA49A795B22C7FA2EA018F83E450B97E L_0 = __this->___U3CjobDataU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  TweenJobData_1_t06FAD94FCA49A795B22C7FA2EA018F83E450B97E FloatTweenJob_get_jobData_m4AA6AAAC9D6112B8E88153E6076911F693F13CBA_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, const RuntimeMethod* method)
{
	FloatTweenJob_tA1F66E54D3DBA65A5E68334BA5532EB1D6543F98* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FloatTweenJob_tA1F66E54D3DBA65A5E68334BA5532EB1D6543F98*>(__this + _offset);
	TweenJobData_1_t06FAD94FCA49A795B22C7FA2EA018F83E450B97E _returnValue;
	_returnValue = FloatTweenJob_get_jobData_m4AA6AAAC9D6112B8E88153E6076911F693F13CBA_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.FloatTweenJob::set_jobData(UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void FloatTweenJob_set_jobData_m62BC555A7F3277F969592FF740F96692C4F340EA (FloatTweenJob_tA1F66E54D3DBA65A5E68334BA5532EB1D6543F98* IL2CPP_PARAMETER_RESTRICT __this, TweenJobData_1_t06FAD94FCA49A795B22C7FA2EA018F83E450B97E ___0_value, const RuntimeMethod* method) 
{
	{
		// public TweenJobData<float> jobData { get; set; }
		TweenJobData_1_t06FAD94FCA49A795B22C7FA2EA018F83E450B97E L_0 = ___0_value;
		__this->___U3CjobDataU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void FloatTweenJob_set_jobData_m62BC555A7F3277F969592FF740F96692C4F340EA_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, TweenJobData_1_t06FAD94FCA49A795B22C7FA2EA018F83E450B97E ___0_value, const RuntimeMethod* method)
{
	FloatTweenJob_tA1F66E54D3DBA65A5E68334BA5532EB1D6543F98* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FloatTweenJob_tA1F66E54D3DBA65A5E68334BA5532EB1D6543F98*>(__this + _offset);
	FloatTweenJob_set_jobData_m62BC555A7F3277F969592FF740F96692C4F340EA_inline(_thisAdjusted, ___0_value, method);
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.FloatTweenJob::Execute()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void FloatTweenJob_Execute_m1740EF08BC6FC3B1C5A2DF33756526A55E7EB41D (FloatTweenJob_tA1F66E54D3DBA65A5E68334BA5532EB1D6543F98* IL2CPP_PARAMETER_RESTRICT __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenJobData_1_get_stateTransitionAmountFloat_mE222959BD75937C4DCA1A7F1EF540EB9635402FC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF V_2;
	memset((&V_2), 0, sizeof(V_2));
	TweenJobData_1_t06FAD94FCA49A795B22C7FA2EA018F83E450B97E V_3;
	memset((&V_3), 0, sizeof(V_3));
	TweenJobData_1_t06FAD94FCA49A795B22C7FA2EA018F83E450B97E V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// var stateTransitionAmount = jobData.nativeCurve.Evaluate(jobData.stateTransitionAmountFloat);
		TweenJobData_1_t06FAD94FCA49A795B22C7FA2EA018F83E450B97E L_0;
		L_0 = FloatTweenJob_get_jobData_m4AA6AAAC9D6112B8E88153E6076911F693F13CBA_inline(__this, NULL);
		V_3 = L_0;
		NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2* L_1 = (NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2*)(&(&V_3)->___nativeCurve_6);
		TweenJobData_1_t06FAD94FCA49A795B22C7FA2EA018F83E450B97E L_2;
		L_2 = FloatTweenJob_get_jobData_m4AA6AAAC9D6112B8E88153E6076911F693F13CBA_inline(__this, NULL);
		V_4 = L_2;
		float L_3;
		L_3 = TweenJobData_1_get_stateTransitionAmountFloat_mE222959BD75937C4DCA1A7F1EF540EB9635402FC((&V_4), TweenJobData_1_get_stateTransitionAmountFloat_mE222959BD75937C4DCA1A7F1EF540EB9635402FC_RuntimeMethod_var);
		float L_4;
		L_4 = NativeCurve_Evaluate_m863A02A3C819738F373F7EC87BFDEFA113D4E87C(L_1, L_3, NULL);
		V_0 = L_4;
		// var newTargetValue = Lerp(jobData.stateOriginValue, jobData.stateTargetValue, stateTransitionAmount);
		TweenJobData_1_t06FAD94FCA49A795B22C7FA2EA018F83E450B97E L_5;
		L_5 = FloatTweenJob_get_jobData_m4AA6AAAC9D6112B8E88153E6076911F693F13CBA_inline(__this, NULL);
		float L_6 = L_5.___stateOriginValue_3;
		TweenJobData_1_t06FAD94FCA49A795B22C7FA2EA018F83E450B97E L_7;
		L_7 = FloatTweenJob_get_jobData_m4AA6AAAC9D6112B8E88153E6076911F693F13CBA_inline(__this, NULL);
		float L_8 = L_7.___stateTargetValue_4;
		float L_9 = V_0;
		float L_10;
		L_10 = FloatTweenJob_Lerp_mE015346044A09355C78CD91F8695D71C684E538A(__this, L_6, L_8, L_9, NULL);
		V_1 = L_10;
		// var outputData = jobData.outputData;
		TweenJobData_1_t06FAD94FCA49A795B22C7FA2EA018F83E450B97E L_11;
		L_11 = FloatTweenJob_get_jobData_m4AA6AAAC9D6112B8E88153E6076911F693F13CBA_inline(__this, NULL);
		NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF L_12 = L_11.___outputData_9;
		V_2 = L_12;
		// outputData[0] = Lerp(jobData.tweenStartValue, newTargetValue, jobData.tweenAmount);
		TweenJobData_1_t06FAD94FCA49A795B22C7FA2EA018F83E450B97E L_13;
		L_13 = FloatTweenJob_get_jobData_m4AA6AAAC9D6112B8E88153E6076911F693F13CBA_inline(__this, NULL);
		float L_14 = L_13.___tweenStartValue_7;
		float L_15 = V_1;
		TweenJobData_1_t06FAD94FCA49A795B22C7FA2EA018F83E450B97E L_16;
		L_16 = FloatTweenJob_get_jobData_m4AA6AAAC9D6112B8E88153E6076911F693F13CBA_inline(__this, NULL);
		float L_17 = L_16.___tweenAmount_8;
		float L_18;
		L_18 = FloatTweenJob_Lerp_mE015346044A09355C78CD91F8695D71C684E538A(__this, L_14, L_15, L_17, NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(float, ((&V_2))->___m_Buffer_0, 0, (L_18));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void FloatTweenJob_Execute_m1740EF08BC6FC3B1C5A2DF33756526A55E7EB41D_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, const RuntimeMethod* method)
{
	FloatTweenJob_tA1F66E54D3DBA65A5E68334BA5532EB1D6543F98* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FloatTweenJob_tA1F66E54D3DBA65A5E68334BA5532EB1D6543F98*>(__this + _offset);
	FloatTweenJob_Execute_m1740EF08BC6FC3B1C5A2DF33756526A55E7EB41D(_thisAdjusted, method);
}
// System.Single UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.FloatTweenJob::Lerp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR float FloatTweenJob_Lerp_mE015346044A09355C78CD91F8695D71C684E538A (FloatTweenJob_tA1F66E54D3DBA65A5E68334BA5532EB1D6543F98* IL2CPP_PARAMETER_RESTRICT __this, float ___0_from, float ___1_to, float ___2_t, const RuntimeMethod* method) 
{
	{
		// if (IsNearlyEqual(from, to))
		float L_0 = ___0_from;
		float L_1 = ___1_to;
		bool L_2;
		L_2 = FloatTweenJob_IsNearlyEqual_mA34FD5818E7100B8785B58C1CE98877D5670B601(__this, L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_000c;
		}
	}
	{
		// return to;
		float L_3 = ___1_to;
		return L_3;
	}

IL_000c:
	{
		// return math.lerp(from, to, t);
		float L_4 = ___0_from;
		float L_5 = ___1_to;
		float L_6 = ___2_t;
		float L_7;
		L_7 = math_lerp_m58A82DB48BBA11871FFA81583C700875B3A9BC84_inline(L_4, L_5, L_6, NULL);
		return L_7;
	}
}
IL2CPP_EXTERN_C  float FloatTweenJob_Lerp_mE015346044A09355C78CD91F8695D71C684E538A_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, float ___0_from, float ___1_to, float ___2_t, const RuntimeMethod* method)
{
	FloatTweenJob_tA1F66E54D3DBA65A5E68334BA5532EB1D6543F98* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FloatTweenJob_tA1F66E54D3DBA65A5E68334BA5532EB1D6543F98*>(__this + _offset);
	float _returnValue;
	_returnValue = FloatTweenJob_Lerp_mE015346044A09355C78CD91F8695D71C684E538A(_thisAdjusted, ___0_from, ___1_to, ___2_t, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.FloatTweenJob::IsNearlyEqual(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR bool FloatTweenJob_IsNearlyEqual_mA34FD5818E7100B8785B58C1CE98877D5670B601 (FloatTweenJob_tA1F66E54D3DBA65A5E68334BA5532EB1D6543F98* IL2CPP_PARAMETER_RESTRICT __this, float ___0_from, float ___1_to, const RuntimeMethod* method) 
{
	{
		// return math.distancesq(from, to) < TweenJobData<float>.squareSnapDistanceThreshold;
		float L_0 = ___0_from;
		float L_1 = ___1_to;
		float L_2;
		L_2 = math_distancesq_m7C2F819C91158AE7ECC4CAB4BEC1DD0FDF96BCA4_inline(L_0, L_1, NULL);
		return (bool)((((float)L_2) < ((float)(2.50000028E-07f)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool FloatTweenJob_IsNearlyEqual_mA34FD5818E7100B8785B58C1CE98877D5670B601_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, float ___0_from, float ___1_to, const RuntimeMethod* method)
{
	FloatTweenJob_tA1F66E54D3DBA65A5E68334BA5532EB1D6543F98* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FloatTweenJob_tA1F66E54D3DBA65A5E68334BA5532EB1D6543F98*>(__this + _offset);
	bool _returnValue;
	_returnValue = FloatTweenJob_IsNearlyEqual_mA34FD5818E7100B8785B58C1CE98877D5670B601(_thisAdjusted, ___0_from, ___1_to, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1<Unity.Mathematics.float2> UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.Float2TweenJob::get_jobData()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR TweenJobData_1_t6C4118E82C1B93FB8B3D245997EC0C5B35BD9FF3 Float2TweenJob_get_jobData_m8CD8E2F93102486DF3C1D7B483BAB73025369558 (Float2TweenJob_t8A50F8709E39BDC0B96C85C802431F6DFB8FB864* IL2CPP_PARAMETER_RESTRICT __this, const RuntimeMethod* method) 
{
	{
		// public TweenJobData<float2> jobData { get; set; }
		TweenJobData_1_t6C4118E82C1B93FB8B3D245997EC0C5B35BD9FF3 L_0 = __this->___U3CjobDataU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  TweenJobData_1_t6C4118E82C1B93FB8B3D245997EC0C5B35BD9FF3 Float2TweenJob_get_jobData_m8CD8E2F93102486DF3C1D7B483BAB73025369558_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, const RuntimeMethod* method)
{
	Float2TweenJob_t8A50F8709E39BDC0B96C85C802431F6DFB8FB864* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Float2TweenJob_t8A50F8709E39BDC0B96C85C802431F6DFB8FB864*>(__this + _offset);
	TweenJobData_1_t6C4118E82C1B93FB8B3D245997EC0C5B35BD9FF3 _returnValue;
	_returnValue = Float2TweenJob_get_jobData_m8CD8E2F93102486DF3C1D7B483BAB73025369558_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.Float2TweenJob::set_jobData(UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1<Unity.Mathematics.float2>)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Float2TweenJob_set_jobData_m90C78DAA243838C9DF85BFB2EB17D9307D3583AA (Float2TweenJob_t8A50F8709E39BDC0B96C85C802431F6DFB8FB864* IL2CPP_PARAMETER_RESTRICT __this, TweenJobData_1_t6C4118E82C1B93FB8B3D245997EC0C5B35BD9FF3 ___0_value, const RuntimeMethod* method) 
{
	{
		// public TweenJobData<float2> jobData { get; set; }
		TweenJobData_1_t6C4118E82C1B93FB8B3D245997EC0C5B35BD9FF3 L_0 = ___0_value;
		__this->___U3CjobDataU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void Float2TweenJob_set_jobData_m90C78DAA243838C9DF85BFB2EB17D9307D3583AA_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, TweenJobData_1_t6C4118E82C1B93FB8B3D245997EC0C5B35BD9FF3 ___0_value, const RuntimeMethod* method)
{
	Float2TweenJob_t8A50F8709E39BDC0B96C85C802431F6DFB8FB864* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Float2TweenJob_t8A50F8709E39BDC0B96C85C802431F6DFB8FB864*>(__this + _offset);
	Float2TweenJob_set_jobData_m90C78DAA243838C9DF85BFB2EB17D9307D3583AA_inline(_thisAdjusted, ___0_value, method);
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.Float2TweenJob::Execute()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Float2TweenJob_Execute_mA29C263AD8C974A76B61FD0B71A69EF6388639A6 (Float2TweenJob_t8A50F8709E39BDC0B96C85C802431F6DFB8FB864* IL2CPP_PARAMETER_RESTRICT __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenJobData_1_get_stateTransitionAmountFloat_mFAE34E3AEE32746766E8DBBE7D53D7440268A069_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E V_2;
	memset((&V_2), 0, sizeof(V_2));
	TweenJobData_1_t6C4118E82C1B93FB8B3D245997EC0C5B35BD9FF3 V_3;
	memset((&V_3), 0, sizeof(V_3));
	TweenJobData_1_t6C4118E82C1B93FB8B3D245997EC0C5B35BD9FF3 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// var stateTransitionAmount = jobData.nativeCurve.Evaluate(jobData.stateTransitionAmountFloat);
		TweenJobData_1_t6C4118E82C1B93FB8B3D245997EC0C5B35BD9FF3 L_0;
		L_0 = Float2TweenJob_get_jobData_m8CD8E2F93102486DF3C1D7B483BAB73025369558_inline(__this, NULL);
		V_3 = L_0;
		NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2* L_1 = (NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2*)(&(&V_3)->___nativeCurve_6);
		TweenJobData_1_t6C4118E82C1B93FB8B3D245997EC0C5B35BD9FF3 L_2;
		L_2 = Float2TweenJob_get_jobData_m8CD8E2F93102486DF3C1D7B483BAB73025369558_inline(__this, NULL);
		V_4 = L_2;
		float L_3;
		L_3 = TweenJobData_1_get_stateTransitionAmountFloat_mFAE34E3AEE32746766E8DBBE7D53D7440268A069((&V_4), TweenJobData_1_get_stateTransitionAmountFloat_mFAE34E3AEE32746766E8DBBE7D53D7440268A069_RuntimeMethod_var);
		float L_4;
		L_4 = NativeCurve_Evaluate_m863A02A3C819738F373F7EC87BFDEFA113D4E87C(L_1, L_3, NULL);
		V_0 = L_4;
		// var newTargetValue = Lerp(jobData.stateOriginValue, jobData.stateTargetValue, stateTransitionAmount);
		TweenJobData_1_t6C4118E82C1B93FB8B3D245997EC0C5B35BD9FF3 L_5;
		L_5 = Float2TweenJob_get_jobData_m8CD8E2F93102486DF3C1D7B483BAB73025369558_inline(__this, NULL);
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_6 = L_5.___stateOriginValue_3;
		TweenJobData_1_t6C4118E82C1B93FB8B3D245997EC0C5B35BD9FF3 L_7;
		L_7 = Float2TweenJob_get_jobData_m8CD8E2F93102486DF3C1D7B483BAB73025369558_inline(__this, NULL);
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_8 = L_7.___stateTargetValue_4;
		float L_9 = V_0;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_10;
		L_10 = Float2TweenJob_Lerp_mD4925A20F2BFB4CF38B2CD0CCB3323B1F135B984(__this, L_6, L_8, L_9, NULL);
		V_1 = L_10;
		// var outputData = jobData.outputData;
		TweenJobData_1_t6C4118E82C1B93FB8B3D245997EC0C5B35BD9FF3 L_11;
		L_11 = Float2TweenJob_get_jobData_m8CD8E2F93102486DF3C1D7B483BAB73025369558_inline(__this, NULL);
		NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E L_12 = L_11.___outputData_9;
		V_2 = L_12;
		// outputData[0] = Lerp(jobData.tweenStartValue, newTargetValue, jobData.tweenAmount);
		TweenJobData_1_t6C4118E82C1B93FB8B3D245997EC0C5B35BD9FF3 L_13;
		L_13 = Float2TweenJob_get_jobData_m8CD8E2F93102486DF3C1D7B483BAB73025369558_inline(__this, NULL);
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_14 = L_13.___tweenStartValue_7;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_15 = V_1;
		TweenJobData_1_t6C4118E82C1B93FB8B3D245997EC0C5B35BD9FF3 L_16;
		L_16 = Float2TweenJob_get_jobData_m8CD8E2F93102486DF3C1D7B483BAB73025369558_inline(__this, NULL);
		float L_17 = L_16.___tweenAmount_8;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_18;
		L_18 = Float2TweenJob_Lerp_mD4925A20F2BFB4CF38B2CD0CCB3323B1F135B984(__this, L_14, L_15, L_17, NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA, ((&V_2))->___m_Buffer_0, 0, (L_18));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Float2TweenJob_Execute_mA29C263AD8C974A76B61FD0B71A69EF6388639A6_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, const RuntimeMethod* method)
{
	Float2TweenJob_t8A50F8709E39BDC0B96C85C802431F6DFB8FB864* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Float2TweenJob_t8A50F8709E39BDC0B96C85C802431F6DFB8FB864*>(__this + _offset);
	Float2TweenJob_Execute_mA29C263AD8C974A76B61FD0B71A69EF6388639A6(_thisAdjusted, method);
}
// Unity.Mathematics.float2 UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.Float2TweenJob::Lerp(Unity.Mathematics.float2,Unity.Mathematics.float2,System.Single)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA Float2TweenJob_Lerp_mD4925A20F2BFB4CF38B2CD0CCB3323B1F135B984 (Float2TweenJob_t8A50F8709E39BDC0B96C85C802431F6DFB8FB864* IL2CPP_PARAMETER_RESTRICT __this, float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___0_from, float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___1_to, float ___2_t, const RuntimeMethod* method) 
{
	{
		// if (IsNearlyEqual(from, to))
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_0 = ___0_from;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_1 = ___1_to;
		bool L_2;
		L_2 = Float2TweenJob_IsNearlyEqual_mF7248DB22D339624EF997D6C8449557C75E3196C(__this, L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_000c;
		}
	}
	{
		// return to;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_3 = ___1_to;
		return L_3;
	}

IL_000c:
	{
		// return math.lerp(from, to, t);
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_4 = ___0_from;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_5 = ___1_to;
		float L_6 = ___2_t;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_7;
		L_7 = math_lerp_mD91B5AE263EAACF3CE7DF14579522796CD90859E_inline(L_4, L_5, L_6, NULL);
		return L_7;
	}
}
IL2CPP_EXTERN_C  float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA Float2TweenJob_Lerp_mD4925A20F2BFB4CF38B2CD0CCB3323B1F135B984_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___0_from, float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___1_to, float ___2_t, const RuntimeMethod* method)
{
	Float2TweenJob_t8A50F8709E39BDC0B96C85C802431F6DFB8FB864* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Float2TweenJob_t8A50F8709E39BDC0B96C85C802431F6DFB8FB864*>(__this + _offset);
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA _returnValue;
	_returnValue = Float2TweenJob_Lerp_mD4925A20F2BFB4CF38B2CD0CCB3323B1F135B984(_thisAdjusted, ___0_from, ___1_to, ___2_t, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.Float2TweenJob::IsNearlyEqual(Unity.Mathematics.float2,Unity.Mathematics.float2)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR bool Float2TweenJob_IsNearlyEqual_mF7248DB22D339624EF997D6C8449557C75E3196C (Float2TweenJob_t8A50F8709E39BDC0B96C85C802431F6DFB8FB864* IL2CPP_PARAMETER_RESTRICT __this, float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___0_from, float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___1_to, const RuntimeMethod* method) 
{
	{
		// return math.distancesq(from, to) < TweenJobData<float2>.squareSnapDistanceThreshold;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_0 = ___0_from;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_1 = ___1_to;
		float L_2;
		L_2 = math_distancesq_m491F2EBC94F119EA8EE8EA6BB30C44BB0BEB37E3_inline(L_0, L_1, NULL);
		return (bool)((((float)L_2) < ((float)(2.50000028E-07f)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool Float2TweenJob_IsNearlyEqual_mF7248DB22D339624EF997D6C8449557C75E3196C_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___0_from, float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___1_to, const RuntimeMethod* method)
{
	Float2TweenJob_t8A50F8709E39BDC0B96C85C802431F6DFB8FB864* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Float2TweenJob_t8A50F8709E39BDC0B96C85C802431F6DFB8FB864*>(__this + _offset);
	bool _returnValue;
	_returnValue = Float2TweenJob_IsNearlyEqual_mF7248DB22D339624EF997D6C8449557C75E3196C(_thisAdjusted, ___0_from, ___1_to, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1<Unity.Mathematics.float3> UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.Float3TweenJob::get_jobData()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR TweenJobData_1_t5779EC937EA396970F0C89EB88D60F9D7CB1977D Float3TweenJob_get_jobData_m9B0A1531BF4DA01A4034720C39A289BFCB37D9D3 (Float3TweenJob_t1ABCE2AF2296C75ECE719050B75BC7A92ED28644* IL2CPP_PARAMETER_RESTRICT __this, const RuntimeMethod* method) 
{
	{
		// public TweenJobData<float3> jobData { get; set; }
		TweenJobData_1_t5779EC937EA396970F0C89EB88D60F9D7CB1977D L_0 = __this->___U3CjobDataU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  TweenJobData_1_t5779EC937EA396970F0C89EB88D60F9D7CB1977D Float3TweenJob_get_jobData_m9B0A1531BF4DA01A4034720C39A289BFCB37D9D3_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, const RuntimeMethod* method)
{
	Float3TweenJob_t1ABCE2AF2296C75ECE719050B75BC7A92ED28644* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Float3TweenJob_t1ABCE2AF2296C75ECE719050B75BC7A92ED28644*>(__this + _offset);
	TweenJobData_1_t5779EC937EA396970F0C89EB88D60F9D7CB1977D _returnValue;
	_returnValue = Float3TweenJob_get_jobData_m9B0A1531BF4DA01A4034720C39A289BFCB37D9D3_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.Float3TweenJob::set_jobData(UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1<Unity.Mathematics.float3>)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Float3TweenJob_set_jobData_m7CFEAA1CE8FA93237FBAC3066BFC53838F77D109 (Float3TweenJob_t1ABCE2AF2296C75ECE719050B75BC7A92ED28644* IL2CPP_PARAMETER_RESTRICT __this, TweenJobData_1_t5779EC937EA396970F0C89EB88D60F9D7CB1977D ___0_value, const RuntimeMethod* method) 
{
	{
		// public TweenJobData<float3> jobData { get; set; }
		TweenJobData_1_t5779EC937EA396970F0C89EB88D60F9D7CB1977D L_0 = ___0_value;
		__this->___U3CjobDataU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void Float3TweenJob_set_jobData_m7CFEAA1CE8FA93237FBAC3066BFC53838F77D109_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, TweenJobData_1_t5779EC937EA396970F0C89EB88D60F9D7CB1977D ___0_value, const RuntimeMethod* method)
{
	Float3TweenJob_t1ABCE2AF2296C75ECE719050B75BC7A92ED28644* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Float3TweenJob_t1ABCE2AF2296C75ECE719050B75BC7A92ED28644*>(__this + _offset);
	Float3TweenJob_set_jobData_m7CFEAA1CE8FA93237FBAC3066BFC53838F77D109_inline(_thisAdjusted, ___0_value, method);
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.Float3TweenJob::Execute()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Float3TweenJob_Execute_m9F17DFAF477F93D8A661BD28EBE3B3A45BB90960 (Float3TweenJob_t1ABCE2AF2296C75ECE719050B75BC7A92ED28644* IL2CPP_PARAMETER_RESTRICT __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenJobData_1_get_stateTransitionAmountFloat_mAB269BE097AFCC8C1BAE64F36A970366E41E4317_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tEDE9DAD2CAE5954286BC0EF394A57ED0AC69FEE6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	TweenJobData_1_t5779EC937EA396970F0C89EB88D60F9D7CB1977D V_3;
	memset((&V_3), 0, sizeof(V_3));
	TweenJobData_1_t5779EC937EA396970F0C89EB88D60F9D7CB1977D V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// var stateTransitionAmount = jobData.nativeCurve.Evaluate(jobData.stateTransitionAmountFloat);
		TweenJobData_1_t5779EC937EA396970F0C89EB88D60F9D7CB1977D L_0;
		L_0 = Float3TweenJob_get_jobData_m9B0A1531BF4DA01A4034720C39A289BFCB37D9D3_inline(__this, NULL);
		V_3 = L_0;
		NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2* L_1 = (NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2*)(&(&V_3)->___nativeCurve_6);
		TweenJobData_1_t5779EC937EA396970F0C89EB88D60F9D7CB1977D L_2;
		L_2 = Float3TweenJob_get_jobData_m9B0A1531BF4DA01A4034720C39A289BFCB37D9D3_inline(__this, NULL);
		V_4 = L_2;
		float L_3;
		L_3 = TweenJobData_1_get_stateTransitionAmountFloat_mAB269BE097AFCC8C1BAE64F36A970366E41E4317((&V_4), TweenJobData_1_get_stateTransitionAmountFloat_mAB269BE097AFCC8C1BAE64F36A970366E41E4317_RuntimeMethod_var);
		float L_4;
		L_4 = NativeCurve_Evaluate_m863A02A3C819738F373F7EC87BFDEFA113D4E87C(L_1, L_3, NULL);
		V_0 = L_4;
		// var newTargetValue = Lerp(jobData.stateOriginValue, jobData.stateTargetValue, stateTransitionAmount);
		TweenJobData_1_t5779EC937EA396970F0C89EB88D60F9D7CB1977D L_5;
		L_5 = Float3TweenJob_get_jobData_m9B0A1531BF4DA01A4034720C39A289BFCB37D9D3_inline(__this, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_6 = L_5.___stateOriginValue_3;
		TweenJobData_1_t5779EC937EA396970F0C89EB88D60F9D7CB1977D L_7;
		L_7 = Float3TweenJob_get_jobData_m9B0A1531BF4DA01A4034720C39A289BFCB37D9D3_inline(__this, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_8 = L_7.___stateTargetValue_4;
		float L_9 = V_0;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_10;
		L_10 = Float3TweenJob_Lerp_m27D243EEF22A8765FA08B96C52F075A6CE29519C(__this, L_6, L_8, L_9, NULL);
		V_1 = L_10;
		// var outputData = jobData.outputData;
		TweenJobData_1_t5779EC937EA396970F0C89EB88D60F9D7CB1977D L_11;
		L_11 = Float3TweenJob_get_jobData_m9B0A1531BF4DA01A4034720C39A289BFCB37D9D3_inline(__this, NULL);
		NativeArray_1_tEDE9DAD2CAE5954286BC0EF394A57ED0AC69FEE6 L_12 = L_11.___outputData_9;
		V_2 = L_12;
		// outputData[0] = Lerp(jobData.tweenStartValue, newTargetValue, jobData.tweenAmount);
		TweenJobData_1_t5779EC937EA396970F0C89EB88D60F9D7CB1977D L_13;
		L_13 = Float3TweenJob_get_jobData_m9B0A1531BF4DA01A4034720C39A289BFCB37D9D3_inline(__this, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_14 = L_13.___tweenStartValue_7;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_15 = V_1;
		TweenJobData_1_t5779EC937EA396970F0C89EB88D60F9D7CB1977D L_16;
		L_16 = Float3TweenJob_get_jobData_m9B0A1531BF4DA01A4034720C39A289BFCB37D9D3_inline(__this, NULL);
		float L_17 = L_16.___tweenAmount_8;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_18;
		L_18 = Float3TweenJob_Lerp_m27D243EEF22A8765FA08B96C52F075A6CE29519C(__this, L_14, L_15, L_17, NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E, ((&V_2))->___m_Buffer_0, 0, (L_18));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Float3TweenJob_Execute_m9F17DFAF477F93D8A661BD28EBE3B3A45BB90960_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, const RuntimeMethod* method)
{
	Float3TweenJob_t1ABCE2AF2296C75ECE719050B75BC7A92ED28644* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Float3TweenJob_t1ABCE2AF2296C75ECE719050B75BC7A92ED28644*>(__this + _offset);
	Float3TweenJob_Execute_m9F17DFAF477F93D8A661BD28EBE3B3A45BB90960(_thisAdjusted, method);
}
// Unity.Mathematics.float3 UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.Float3TweenJob::Lerp(Unity.Mathematics.float3,Unity.Mathematics.float3,System.Single)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E Float3TweenJob_Lerp_m27D243EEF22A8765FA08B96C52F075A6CE29519C (Float3TweenJob_t1ABCE2AF2296C75ECE719050B75BC7A92ED28644* IL2CPP_PARAMETER_RESTRICT __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___0_from, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___1_to, float ___2_t, const RuntimeMethod* method) 
{
	{
		// if (IsNearlyEqual(from, to))
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_0 = ___0_from;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_1 = ___1_to;
		bool L_2;
		L_2 = Float3TweenJob_IsNearlyEqual_m767DE1D8CD124E4D6BE791E9D71317EE1FC4D80D(__this, L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_000c;
		}
	}
	{
		// return to;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_3 = ___1_to;
		return L_3;
	}

IL_000c:
	{
		// return math.lerp(from, to, t);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_4 = ___0_from;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_5 = ___1_to;
		float L_6 = ___2_t;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_7;
		L_7 = math_lerp_mA20BFB8D988B57C1CFA28047538F3B47208D1371_inline(L_4, L_5, L_6, NULL);
		return L_7;
	}
}
IL2CPP_EXTERN_C  float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E Float3TweenJob_Lerp_m27D243EEF22A8765FA08B96C52F075A6CE29519C_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___0_from, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___1_to, float ___2_t, const RuntimeMethod* method)
{
	Float3TweenJob_t1ABCE2AF2296C75ECE719050B75BC7A92ED28644* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Float3TweenJob_t1ABCE2AF2296C75ECE719050B75BC7A92ED28644*>(__this + _offset);
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E _returnValue;
	_returnValue = Float3TweenJob_Lerp_m27D243EEF22A8765FA08B96C52F075A6CE29519C(_thisAdjusted, ___0_from, ___1_to, ___2_t, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.Float3TweenJob::IsNearlyEqual(Unity.Mathematics.float3,Unity.Mathematics.float3)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR bool Float3TweenJob_IsNearlyEqual_m767DE1D8CD124E4D6BE791E9D71317EE1FC4D80D (Float3TweenJob_t1ABCE2AF2296C75ECE719050B75BC7A92ED28644* IL2CPP_PARAMETER_RESTRICT __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___0_from, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___1_to, const RuntimeMethod* method) 
{
	{
		// return math.distancesq(from, to) < TweenJobData<float3>.squareSnapDistanceThreshold;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_0 = ___0_from;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_1 = ___1_to;
		float L_2;
		L_2 = math_distancesq_mA49E8B34404D0C4DB3C9D4E065CE4CA255C9770B_inline(L_0, L_1, NULL);
		return (bool)((((float)L_2) < ((float)(2.50000028E-07f)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool Float3TweenJob_IsNearlyEqual_m767DE1D8CD124E4D6BE791E9D71317EE1FC4D80D_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___0_from, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___1_to, const RuntimeMethod* method)
{
	Float3TweenJob_t1ABCE2AF2296C75ECE719050B75BC7A92ED28644* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Float3TweenJob_t1ABCE2AF2296C75ECE719050B75BC7A92ED28644*>(__this + _offset);
	bool _returnValue;
	_returnValue = Float3TweenJob_IsNearlyEqual_m767DE1D8CD124E4D6BE791E9D71317EE1FC4D80D(_thisAdjusted, ___0_from, ___1_to, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1<Unity.Mathematics.float4> UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.Float4TweenJob::get_jobData()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR TweenJobData_1_t750244DB9B41308E85DF94F53236CD62E3A3483B Float4TweenJob_get_jobData_m259D45EFB1C92132AA34925160D5CE7D4E039635 (Float4TweenJob_t9D63A32AC58F3FA5F68BF78254D59453B6FD3CCB* IL2CPP_PARAMETER_RESTRICT __this, const RuntimeMethod* method) 
{
	{
		// public TweenJobData<float4> jobData { get; set; }
		TweenJobData_1_t750244DB9B41308E85DF94F53236CD62E3A3483B L_0 = __this->___U3CjobDataU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  TweenJobData_1_t750244DB9B41308E85DF94F53236CD62E3A3483B Float4TweenJob_get_jobData_m259D45EFB1C92132AA34925160D5CE7D4E039635_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, const RuntimeMethod* method)
{
	Float4TweenJob_t9D63A32AC58F3FA5F68BF78254D59453B6FD3CCB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Float4TweenJob_t9D63A32AC58F3FA5F68BF78254D59453B6FD3CCB*>(__this + _offset);
	TweenJobData_1_t750244DB9B41308E85DF94F53236CD62E3A3483B _returnValue;
	_returnValue = Float4TweenJob_get_jobData_m259D45EFB1C92132AA34925160D5CE7D4E039635_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.Float4TweenJob::set_jobData(UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1<Unity.Mathematics.float4>)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Float4TweenJob_set_jobData_mB155785E23E063AB1FCB3B41923264C85D53CA21 (Float4TweenJob_t9D63A32AC58F3FA5F68BF78254D59453B6FD3CCB* IL2CPP_PARAMETER_RESTRICT __this, TweenJobData_1_t750244DB9B41308E85DF94F53236CD62E3A3483B ___0_value, const RuntimeMethod* method) 
{
	{
		// public TweenJobData<float4> jobData { get; set; }
		TweenJobData_1_t750244DB9B41308E85DF94F53236CD62E3A3483B L_0 = ___0_value;
		__this->___U3CjobDataU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void Float4TweenJob_set_jobData_mB155785E23E063AB1FCB3B41923264C85D53CA21_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, TweenJobData_1_t750244DB9B41308E85DF94F53236CD62E3A3483B ___0_value, const RuntimeMethod* method)
{
	Float4TweenJob_t9D63A32AC58F3FA5F68BF78254D59453B6FD3CCB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Float4TweenJob_t9D63A32AC58F3FA5F68BF78254D59453B6FD3CCB*>(__this + _offset);
	Float4TweenJob_set_jobData_mB155785E23E063AB1FCB3B41923264C85D53CA21_inline(_thisAdjusted, ___0_value, method);
}
// System.Void UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.Float4TweenJob::Execute()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Float4TweenJob_Execute_m30EAD691A19A6B14B68AE350F0FC92D77BE370F9 (Float4TweenJob_t9D63A32AC58F3FA5F68BF78254D59453B6FD3CCB* IL2CPP_PARAMETER_RESTRICT __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenJobData_1_get_stateTransitionAmountFloat_mC3B2141B141B4BCD6FB60969E41B44A5ED7257C4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tB5EA234C6ABA1F626A4BEF4053D06783E15A3881 V_2;
	memset((&V_2), 0, sizeof(V_2));
	TweenJobData_1_t750244DB9B41308E85DF94F53236CD62E3A3483B V_3;
	memset((&V_3), 0, sizeof(V_3));
	TweenJobData_1_t750244DB9B41308E85DF94F53236CD62E3A3483B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// var stateTransitionAmount = jobData.nativeCurve.Evaluate(jobData.stateTransitionAmountFloat);
		TweenJobData_1_t750244DB9B41308E85DF94F53236CD62E3A3483B L_0;
		L_0 = Float4TweenJob_get_jobData_m259D45EFB1C92132AA34925160D5CE7D4E039635_inline(__this, NULL);
		V_3 = L_0;
		NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2* L_1 = (NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2*)(&(&V_3)->___nativeCurve_6);
		TweenJobData_1_t750244DB9B41308E85DF94F53236CD62E3A3483B L_2;
		L_2 = Float4TweenJob_get_jobData_m259D45EFB1C92132AA34925160D5CE7D4E039635_inline(__this, NULL);
		V_4 = L_2;
		float L_3;
		L_3 = TweenJobData_1_get_stateTransitionAmountFloat_mC3B2141B141B4BCD6FB60969E41B44A5ED7257C4((&V_4), TweenJobData_1_get_stateTransitionAmountFloat_mC3B2141B141B4BCD6FB60969E41B44A5ED7257C4_RuntimeMethod_var);
		float L_4;
		L_4 = NativeCurve_Evaluate_m863A02A3C819738F373F7EC87BFDEFA113D4E87C(L_1, L_3, NULL);
		V_0 = L_4;
		// var newTargetValue = Lerp(jobData.stateOriginValue, jobData.stateTargetValue, stateTransitionAmount);
		TweenJobData_1_t750244DB9B41308E85DF94F53236CD62E3A3483B L_5;
		L_5 = Float4TweenJob_get_jobData_m259D45EFB1C92132AA34925160D5CE7D4E039635_inline(__this, NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_6 = L_5.___stateOriginValue_3;
		TweenJobData_1_t750244DB9B41308E85DF94F53236CD62E3A3483B L_7;
		L_7 = Float4TweenJob_get_jobData_m259D45EFB1C92132AA34925160D5CE7D4E039635_inline(__this, NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_8 = L_7.___stateTargetValue_4;
		float L_9 = V_0;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_10;
		L_10 = Float4TweenJob_Lerp_mBB8C33897042211F54BACEFA36EAF0266A66A5ED(__this, L_6, L_8, L_9, NULL);
		V_1 = L_10;
		// var outputData = jobData.outputData;
		TweenJobData_1_t750244DB9B41308E85DF94F53236CD62E3A3483B L_11;
		L_11 = Float4TweenJob_get_jobData_m259D45EFB1C92132AA34925160D5CE7D4E039635_inline(__this, NULL);
		NativeArray_1_tB5EA234C6ABA1F626A4BEF4053D06783E15A3881 L_12 = L_11.___outputData_9;
		V_2 = L_12;
		// outputData[0] = Lerp(jobData.tweenStartValue, newTargetValue, jobData.tweenAmount);
		TweenJobData_1_t750244DB9B41308E85DF94F53236CD62E3A3483B L_13;
		L_13 = Float4TweenJob_get_jobData_m259D45EFB1C92132AA34925160D5CE7D4E039635_inline(__this, NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_14 = L_13.___tweenStartValue_7;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_15 = V_1;
		TweenJobData_1_t750244DB9B41308E85DF94F53236CD62E3A3483B L_16;
		L_16 = Float4TweenJob_get_jobData_m259D45EFB1C92132AA34925160D5CE7D4E039635_inline(__this, NULL);
		float L_17 = L_16.___tweenAmount_8;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_18;
		L_18 = Float4TweenJob_Lerp_mBB8C33897042211F54BACEFA36EAF0266A66A5ED(__this, L_14, L_15, L_17, NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(float4_t89D9A294E7A79BD81BFBDD18654508532958555E, ((&V_2))->___m_Buffer_0, 0, (L_18));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Float4TweenJob_Execute_m30EAD691A19A6B14B68AE350F0FC92D77BE370F9_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, const RuntimeMethod* method)
{
	Float4TweenJob_t9D63A32AC58F3FA5F68BF78254D59453B6FD3CCB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Float4TweenJob_t9D63A32AC58F3FA5F68BF78254D59453B6FD3CCB*>(__this + _offset);
	Float4TweenJob_Execute_m30EAD691A19A6B14B68AE350F0FC92D77BE370F9(_thisAdjusted, method);
}
// Unity.Mathematics.float4 UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.Float4TweenJob::Lerp(Unity.Mathematics.float4,Unity.Mathematics.float4,System.Single)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR float4_t89D9A294E7A79BD81BFBDD18654508532958555E Float4TweenJob_Lerp_mBB8C33897042211F54BACEFA36EAF0266A66A5ED (Float4TweenJob_t9D63A32AC58F3FA5F68BF78254D59453B6FD3CCB* IL2CPP_PARAMETER_RESTRICT __this, float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___0_from, float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___1_to, float ___2_t, const RuntimeMethod* method) 
{
	{
		// if (IsNearlyEqual(from, to))
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_0 = ___0_from;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_1 = ___1_to;
		bool L_2;
		L_2 = Float4TweenJob_IsNearlyEqual_m1B0B7A5E9E16C58242607439DE3459F927BF86BC(__this, L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_000c;
		}
	}
	{
		// return to;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_3 = ___1_to;
		return L_3;
	}

IL_000c:
	{
		// return math.lerp(from, to, t);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_4 = ___0_from;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_5 = ___1_to;
		float L_6 = ___2_t;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_7;
		L_7 = math_lerp_mE2700A823A97D3AB6EDF3BEF66FEDA9B53E3DEA9_inline(L_4, L_5, L_6, NULL);
		return L_7;
	}
}
IL2CPP_EXTERN_C  float4_t89D9A294E7A79BD81BFBDD18654508532958555E Float4TweenJob_Lerp_mBB8C33897042211F54BACEFA36EAF0266A66A5ED_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___0_from, float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___1_to, float ___2_t, const RuntimeMethod* method)
{
	Float4TweenJob_t9D63A32AC58F3FA5F68BF78254D59453B6FD3CCB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Float4TweenJob_t9D63A32AC58F3FA5F68BF78254D59453B6FD3CCB*>(__this + _offset);
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E _returnValue;
	_returnValue = Float4TweenJob_Lerp_mBB8C33897042211F54BACEFA36EAF0266A66A5ED(_thisAdjusted, ___0_from, ___1_to, ___2_t, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.Float4TweenJob::IsNearlyEqual(Unity.Mathematics.float4,Unity.Mathematics.float4)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR bool Float4TweenJob_IsNearlyEqual_m1B0B7A5E9E16C58242607439DE3459F927BF86BC (Float4TweenJob_t9D63A32AC58F3FA5F68BF78254D59453B6FD3CCB* IL2CPP_PARAMETER_RESTRICT __this, float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___0_from, float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___1_to, const RuntimeMethod* method) 
{
	{
		// return math.distancesq(from, to) < TweenJobData<float4>.squareSnapDistanceThreshold;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_0 = ___0_from;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_1 = ___1_to;
		float L_2;
		L_2 = math_distancesq_m609DF85E2355430E1F4CD51CDC1971BD5F7D4AF3_inline(L_0, L_1, NULL);
		return (bool)((((float)L_2) < ((float)(2.50000028E-07f)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool Float4TweenJob_IsNearlyEqual_m1B0B7A5E9E16C58242607439DE3459F927BF86BC_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___0_from, float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___1_to, const RuntimeMethod* method)
{
	Float4TweenJob_t9D63A32AC58F3FA5F68BF78254D59453B6FD3CCB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Float4TweenJob_t9D63A32AC58F3FA5F68BF78254D59453B6FD3CCB*>(__this + _offset);
	bool _returnValue;
	_returnValue = Float4TweenJob_IsNearlyEqual_m1B0B7A5E9E16C58242607439DE3459F927BF86BC(_thisAdjusted, ___0_from, ___1_to, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void FloatTweenJob_set_jobData_m62BC555A7F3277F969592FF740F96692C4F340EA_inline (FloatTweenJob_tA1F66E54D3DBA65A5E68334BA5532EB1D6543F98* IL2CPP_PARAMETER_RESTRICT __this, TweenJobData_1_t06FAD94FCA49A795B22C7FA2EA018F83E450B97E ___0_value, const RuntimeMethod* method) 
{
	{
		// public TweenJobData<float> jobData { get; set; }
		TweenJobData_1_t06FAD94FCA49A795B22C7FA2EA018F83E450B97E L_0 = ___0_value;
		__this->___U3CjobDataU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		float L_2 = ___2_z;
		__this->___z_2 = L_2;
		float L_3 = ___3_w;
		__this->___w_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_euler;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_0, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Float2TweenJob_set_jobData_m90C78DAA243838C9DF85BFB2EB17D9307D3583AA_inline (Float2TweenJob_t8A50F8709E39BDC0B96C85C802431F6DFB8FB864* IL2CPP_PARAMETER_RESTRICT __this, TweenJobData_1_t6C4118E82C1B93FB8B3D245997EC0C5B35BD9FF3 ___0_value, const RuntimeMethod* method) 
{
	{
		// public TweenJobData<float2> jobData { get; set; }
		TweenJobData_1_t6C4118E82C1B93FB8B3D245997EC0C5B35BD9FF3 L_0 = ___0_value;
		__this->___U3CjobDataU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Float3TweenJob_set_jobData_m7CFEAA1CE8FA93237FBAC3066BFC53838F77D109_inline (Float3TweenJob_t1ABCE2AF2296C75ECE719050B75BC7A92ED28644* IL2CPP_PARAMETER_RESTRICT __this, TweenJobData_1_t5779EC937EA396970F0C89EB88D60F9D7CB1977D ___0_value, const RuntimeMethod* method) 
{
	{
		// public TweenJobData<float3> jobData { get; set; }
		TweenJobData_1_t5779EC937EA396970F0C89EB88D60F9D7CB1977D L_0 = ___0_value;
		__this->___U3CjobDataU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Float4TweenJob_set_jobData_mB155785E23E063AB1FCB3B41923264C85D53CA21_inline (Float4TweenJob_t9D63A32AC58F3FA5F68BF78254D59453B6FD3CCB* IL2CPP_PARAMETER_RESTRICT __this, TweenJobData_1_t750244DB9B41308E85DF94F53236CD62E3A3483B ___0_value, const RuntimeMethod* method) 
{
	{
		// public TweenJobData<float4> jobData { get; set; }
		TweenJobData_1_t750244DB9B41308E85DF94F53236CD62E3A3483B L_0 = ___0_value;
		__this->___U3CjobDataU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* BaseAffordanceStateProvider_get_currentAffordanceStateData_m816A94CE0C10C5FC59858FFACBFF407E9D57B9D3_inline (BaseAffordanceStateProvider_t5721F9B16D6C029D832F8D6FA0A47326A581D443* __this, const RuntimeMethod* method) 
{
	{
		// public IReadOnlyBindableVariable<AffordanceStateData> currentAffordanceStateData => m_AffordanceStateData;
		BindableVariable_1_t8FDD824B71E4868C9A1011DF94BED5A0049FCF42* L_0 = __this->___m_AffordanceStateData_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t AffordanceStateShortcuts_get_stateCount_m4F2C6E48C41BF2AE0097FB1344ADC82BB4E7DF79_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AffordanceStateShortcuts_t7A59ACF9B6B40EBA55C1B04AB596C869777F496D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static byte stateCount { get; } = (byte)k_StateNames.Count;
		il2cpp_codegen_runtime_class_init_inline(AffordanceStateShortcuts_t7A59ACF9B6B40EBA55C1B04AB596C869777F496D_il2cpp_TypeInfo_var);
		uint8_t L_0 = ((AffordanceStateShortcuts_t7A59ACF9B6B40EBA55C1B04AB596C869777F496D_StaticFields*)il2cpp_codegen_static_fields_for(AffordanceStateShortcuts_t7A59ACF9B6B40EBA55C1B04AB596C869777F496D_il2cpp_TypeInfo_var))->___U3CstateCountU3Ek__BackingField_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t AffordanceStateData_get_stateIndex_m2B9DFBBB1FE3AE1BC2BAC900B2493B72B4D8F341_inline (AffordanceStateData_t925209B85B56D04F7F178061B1C91280DA6DBC69* __this, const RuntimeMethod* method) 
{
	{
		// public byte stateIndex { get; }
		uint8_t L_0 = __this->___U3CstateIndexU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR TweenJobData_1_t9932452930B7CDE5DC4DA408B50B8E4C7A3AAFB7 ColorTweenJob_get_jobData_mA280F7642FD5A049CCA584A9C7643D66D8492F16_inline (ColorTweenJob_t1BEEC88338C32DADE1D0E383FB1E1327444022A4* IL2CPP_PARAMETER_RESTRICT __this, const RuntimeMethod* method) 
{
	{
		// public TweenJobData<Color> jobData { get; set; }
		TweenJobData_1_t9932452930B7CDE5DC4DA408B50B8E4C7A3AAFB7 L_0 = __this->___U3CjobDataU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ColorTweenJob_set_jobData_m7753E76538470AEC9A4D639D6C859694230C1E66_inline (ColorTweenJob_t1BEEC88338C32DADE1D0E383FB1E1327444022A4* IL2CPP_PARAMETER_RESTRICT __this, TweenJobData_1_t9932452930B7CDE5DC4DA408B50B8E4C7A3AAFB7 ___0_value, const RuntimeMethod* method) 
{
	{
		// public TweenJobData<Color> jobData { get; set; }
		TweenJobData_1_t9932452930B7CDE5DC4DA408B50B8E4C7A3AAFB7 L_0 = ___0_value;
		__this->___U3CjobDataU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR uint8_t ColorTweenJob_get_colorBlendMode_m12030B0AB95C1FD2245040701D6E60268E9D4918_inline (ColorTweenJob_t1BEEC88338C32DADE1D0E383FB1E1327444022A4* IL2CPP_PARAMETER_RESTRICT __this, const RuntimeMethod* method) 
{
	{
		// public byte colorBlendMode { get; set; }
		uint8_t L_0 = __this->___U3CcolorBlendModeU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ColorTweenJob_set_colorBlendMode_m9794C87EAF0DF0DC3FCCD8FE779415EF9766BA9A_inline (ColorTweenJob_t1BEEC88338C32DADE1D0E383FB1E1327444022A4* IL2CPP_PARAMETER_RESTRICT __this, uint8_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public byte colorBlendMode { get; set; }
		uint8_t L_0 = ___0_value;
		__this->___U3CcolorBlendModeU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR float ColorTweenJob_get_colorBlendAmount_mC6C4A36FB4A513434F012393BBFF399976D8EDFE_inline (ColorTweenJob_t1BEEC88338C32DADE1D0E383FB1E1327444022A4* IL2CPP_PARAMETER_RESTRICT __this, const RuntimeMethod* method) 
{
	{
		// public float colorBlendAmount { get; set; }
		float L_0 = __this->___U3CcolorBlendAmountU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ColorTweenJob_set_colorBlendAmount_mB6495D73D071F8706E3238110A0CE1CC1DD09916_inline (ColorTweenJob_t1BEEC88338C32DADE1D0E383FB1E1327444022A4* IL2CPP_PARAMETER_RESTRICT __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float colorBlendAmount { get; set; }
		float L_0 = ___0_value;
		__this->___U3CcolorBlendAmountU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r_0 = L_0;
		float L_1 = ___1_g;
		__this->___g_1 = L_1;
		float L_2 = ___2_b;
		__this->___b_2 = L_2;
		float L_3 = ___3_a;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Color_op_Implicit_m9B3228DAFA8DC57A75DE00CBBF13ED4F1E7B01FF_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_c, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_c;
		float L_1 = L_0.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___0_c;
		float L_3 = L_2.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___0_c;
		float L_5 = L_4.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___0_c;
		float L_7 = L_6.___a_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_8), L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0021;
	}

IL_0021:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float4_t89D9A294E7A79BD81BFBDD18654508532958555E math_lerp_mE2700A823A97D3AB6EDF3BEF66FEDA9B53E3DEA9_inline (float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___0_x, float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___1_y, float ___2_s, const RuntimeMethod* method) 
{
	{
		// public static float4 lerp(float4 x, float4 y, float s) { return x + s * (y - x); }
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_0 = ___0_x;
		float L_1 = ___2_s;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_2 = ___1_y;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_3 = ___0_x;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_4;
		L_4 = float4_op_Subtraction_mBC40F52B8A8EF499A1AA3CC987E5935BD188B4E3_inline(L_2, L_3, NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_5;
		L_5 = float4_op_Multiply_m94C65B5751B7969CD82F15DADB8A6F182BFBD581_inline(L_1, L_4, NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_6;
		L_6 = float4_op_Addition_m2CF2E1B2DAD4996DE3C5B6DFB90185E4CC8F0F44_inline(L_0, L_5, NULL);
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_op_Implicit_mA8CF4745D766F4F610E1BE0A1ED2F4E5FE5D734C_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_v, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___0_v;
		float L_1 = L_0.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = ___0_v;
		float L_3 = L_2.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = ___0_v;
		float L_5 = L_4.___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = ___0_v;
		float L_7 = L_6.___w_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		memset((&L_8), 0, sizeof(L_8));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_8), L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0021;
	}

IL_0021:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_distancesq_m609DF85E2355430E1F4CD51CDC1971BD5F7D4AF3_inline (float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___0_x, float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___1_y, const RuntimeMethod* method) 
{
	{
		// public static float distancesq(float4 x, float4 y) { return lengthsq(y - x); }
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_0 = ___1_y;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_1 = ___0_x;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_2;
		L_2 = float4_op_Subtraction_mBC40F52B8A8EF499A1AA3CC987E5935BD188B4E3_inline(L_0, L_1, NULL);
		float L_3;
		L_3 = math_lengthsq_m246AAF09A2EA30D8FE4314442E031D9B5AFF31FF_inline(L_2, NULL);
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR TweenJobData_1_t06FAD94FCA49A795B22C7FA2EA018F83E450B97E FloatTweenJob_get_jobData_m4AA6AAAC9D6112B8E88153E6076911F693F13CBA_inline (FloatTweenJob_tA1F66E54D3DBA65A5E68334BA5532EB1D6543F98* IL2CPP_PARAMETER_RESTRICT __this, const RuntimeMethod* method) 
{
	{
		// public TweenJobData<float> jobData { get; set; }
		TweenJobData_1_t06FAD94FCA49A795B22C7FA2EA018F83E450B97E L_0 = __this->___U3CjobDataU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_lerp_m58A82DB48BBA11871FFA81583C700875B3A9BC84_inline (float ___0_x, float ___1_y, float ___2_s, const RuntimeMethod* method) 
{
	{
		// public static float lerp(float x, float y, float s) { return x + s * (y - x); }
		float L_0 = ___0_x;
		float L_1 = ___2_s;
		float L_2 = ___1_y;
		float L_3 = ___0_x;
		return ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(L_1, ((float)il2cpp_codegen_subtract(L_2, L_3))))));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_distancesq_m7C2F819C91158AE7ECC4CAB4BEC1DD0FDF96BCA4_inline (float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		// public static float distancesq(float x, float y) { return (y - x) * (y - x); }
		float L_0 = ___1_y;
		float L_1 = ___0_x;
		float L_2 = ___1_y;
		float L_3 = ___0_x;
		return ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_0, L_1)), ((float)il2cpp_codegen_subtract(L_2, L_3))));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR TweenJobData_1_t6C4118E82C1B93FB8B3D245997EC0C5B35BD9FF3 Float2TweenJob_get_jobData_m8CD8E2F93102486DF3C1D7B483BAB73025369558_inline (Float2TweenJob_t8A50F8709E39BDC0B96C85C802431F6DFB8FB864* IL2CPP_PARAMETER_RESTRICT __this, const RuntimeMethod* method) 
{
	{
		// public TweenJobData<float2> jobData { get; set; }
		TweenJobData_1_t6C4118E82C1B93FB8B3D245997EC0C5B35BD9FF3 L_0 = __this->___U3CjobDataU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA math_lerp_mD91B5AE263EAACF3CE7DF14579522796CD90859E_inline (float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___0_x, float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___1_y, float ___2_s, const RuntimeMethod* method) 
{
	{
		// public static float2 lerp(float2 x, float2 y, float s) { return x + s * (y - x); }
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_0 = ___0_x;
		float L_1 = ___2_s;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_2 = ___1_y;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_3 = ___0_x;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_4;
		L_4 = float2_op_Subtraction_m28172675A65BCFFBC8C9023BE815019E668B8380_inline(L_2, L_3, NULL);
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_5;
		L_5 = float2_op_Multiply_m9117237F9A26A1B934C1DE0A5FE5BD6EF7D3B26C_inline(L_1, L_4, NULL);
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_6;
		L_6 = float2_op_Addition_m718974663A956F64D7C45D06C088550637F13693_inline(L_0, L_5, NULL);
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_distancesq_m491F2EBC94F119EA8EE8EA6BB30C44BB0BEB37E3_inline (float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___0_x, float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___1_y, const RuntimeMethod* method) 
{
	{
		// public static float distancesq(float2 x, float2 y) { return lengthsq(y - x); }
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_0 = ___1_y;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_1 = ___0_x;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_2;
		L_2 = float2_op_Subtraction_m28172675A65BCFFBC8C9023BE815019E668B8380_inline(L_0, L_1, NULL);
		float L_3;
		L_3 = math_lengthsq_mDC7DB2DF1C069D45CE87BC737AF59CB0094042FA_inline(L_2, NULL);
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR TweenJobData_1_t5779EC937EA396970F0C89EB88D60F9D7CB1977D Float3TweenJob_get_jobData_m9B0A1531BF4DA01A4034720C39A289BFCB37D9D3_inline (Float3TweenJob_t1ABCE2AF2296C75ECE719050B75BC7A92ED28644* IL2CPP_PARAMETER_RESTRICT __this, const RuntimeMethod* method) 
{
	{
		// public TweenJobData<float3> jobData { get; set; }
		TweenJobData_1_t5779EC937EA396970F0C89EB88D60F9D7CB1977D L_0 = __this->___U3CjobDataU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E math_lerp_mA20BFB8D988B57C1CFA28047538F3B47208D1371_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___0_x, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___1_y, float ___2_s, const RuntimeMethod* method) 
{
	{
		// public static float3 lerp(float3 x, float3 y, float s) { return x + s * (y - x); }
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_0 = ___0_x;
		float L_1 = ___2_s;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_2 = ___1_y;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_3 = ___0_x;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_4;
		L_4 = float3_op_Subtraction_mB6036E9849D95650D6E73DA0D179CD7B61E696F2_inline(L_2, L_3, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_5;
		L_5 = float3_op_Multiply_m38F52B61F8E5636955A1A6DF3A75BD0724148350_inline(L_1, L_4, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_6;
		L_6 = float3_op_Addition_mFFCF4F7457594F5EFB0678C0DE90AAD3D3F6947B_inline(L_0, L_5, NULL);
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_distancesq_mA49E8B34404D0C4DB3C9D4E065CE4CA255C9770B_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___0_x, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___1_y, const RuntimeMethod* method) 
{
	{
		// public static float distancesq(float3 x, float3 y) { return lengthsq(y - x); }
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_0 = ___1_y;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_1 = ___0_x;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_2;
		L_2 = float3_op_Subtraction_mB6036E9849D95650D6E73DA0D179CD7B61E696F2_inline(L_0, L_1, NULL);
		float L_3;
		L_3 = math_lengthsq_mC699F3F214F05B26BEBAF1B46E3AA3C00407A532_inline(L_2, NULL);
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR TweenJobData_1_t750244DB9B41308E85DF94F53236CD62E3A3483B Float4TweenJob_get_jobData_m259D45EFB1C92132AA34925160D5CE7D4E039635_inline (Float4TweenJob_t9D63A32AC58F3FA5F68BF78254D59453B6FD3CCB* IL2CPP_PARAMETER_RESTRICT __this, const RuntimeMethod* method) 
{
	{
		// public TweenJobData<float4> jobData { get; set; }
		TweenJobData_1_t750244DB9B41308E85DF94F53236CD62E3A3483B L_0 = __this->___U3CjobDataU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_1 = L_0;
		float L_1 = ___1_y;
		__this->___y_2 = L_1;
		float L_2 = ___2_z;
		__this->___z_3 = L_2;
		float L_3 = ___3_w;
		__this->___w_4 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float4_t89D9A294E7A79BD81BFBDD18654508532958555E float4_op_Subtraction_mBC40F52B8A8EF499A1AA3CC987E5935BD188B4E3_inline (float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___0_lhs, float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___1_rhs, const RuntimeMethod* method) 
{
	{
		// public static float4 operator - (float4 lhs, float4 rhs) { return new float4 (lhs.x - rhs.x, lhs.y - rhs.y, lhs.z - rhs.z, lhs.w - rhs.w); }
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_0 = ___0_lhs;
		float L_1 = L_0.___x_0;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_2 = ___1_rhs;
		float L_3 = L_2.___x_0;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_4 = ___0_lhs;
		float L_5 = L_4.___y_1;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_6 = ___1_rhs;
		float L_7 = L_6.___y_1;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_8 = ___0_lhs;
		float L_9 = L_8.___z_2;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_10 = ___1_rhs;
		float L_11 = L_10.___z_2;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_12 = ___0_lhs;
		float L_13 = L_12.___w_3;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_14 = ___1_rhs;
		float L_15 = L_14.___w_3;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_16;
		memset((&L_16), 0, sizeof(L_16));
		float4__ctor_mB2F7F2D8BCE8159BEF5A0D6400499E211858ED2D_inline((&L_16), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), ((float)il2cpp_codegen_subtract(L_13, L_15)), /*hidden argument*/NULL);
		return L_16;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float4_t89D9A294E7A79BD81BFBDD18654508532958555E float4_op_Multiply_m94C65B5751B7969CD82F15DADB8A6F182BFBD581_inline (float ___0_lhs, float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___1_rhs, const RuntimeMethod* method) 
{
	{
		// public static float4 operator * (float lhs, float4 rhs) { return new float4 (lhs * rhs.x, lhs * rhs.y, lhs * rhs.z, lhs * rhs.w); }
		float L_0 = ___0_lhs;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_1 = ___1_rhs;
		float L_2 = L_1.___x_0;
		float L_3 = ___0_lhs;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_4 = ___1_rhs;
		float L_5 = L_4.___y_1;
		float L_6 = ___0_lhs;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_7 = ___1_rhs;
		float L_8 = L_7.___z_2;
		float L_9 = ___0_lhs;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_10 = ___1_rhs;
		float L_11 = L_10.___w_3;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_12;
		memset((&L_12), 0, sizeof(L_12));
		float4__ctor_mB2F7F2D8BCE8159BEF5A0D6400499E211858ED2D_inline((&L_12), ((float)il2cpp_codegen_multiply(L_0, L_2)), ((float)il2cpp_codegen_multiply(L_3, L_5)), ((float)il2cpp_codegen_multiply(L_6, L_8)), ((float)il2cpp_codegen_multiply(L_9, L_11)), /*hidden argument*/NULL);
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float4_t89D9A294E7A79BD81BFBDD18654508532958555E float4_op_Addition_m2CF2E1B2DAD4996DE3C5B6DFB90185E4CC8F0F44_inline (float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___0_lhs, float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___1_rhs, const RuntimeMethod* method) 
{
	{
		// public static float4 operator + (float4 lhs, float4 rhs) { return new float4 (lhs.x + rhs.x, lhs.y + rhs.y, lhs.z + rhs.z, lhs.w + rhs.w); }
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_0 = ___0_lhs;
		float L_1 = L_0.___x_0;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_2 = ___1_rhs;
		float L_3 = L_2.___x_0;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_4 = ___0_lhs;
		float L_5 = L_4.___y_1;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_6 = ___1_rhs;
		float L_7 = L_6.___y_1;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_8 = ___0_lhs;
		float L_9 = L_8.___z_2;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_10 = ___1_rhs;
		float L_11 = L_10.___z_2;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_12 = ___0_lhs;
		float L_13 = L_12.___w_3;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_14 = ___1_rhs;
		float L_15 = L_14.___w_3;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_16;
		memset((&L_16), 0, sizeof(L_16));
		float4__ctor_mB2F7F2D8BCE8159BEF5A0D6400499E211858ED2D_inline((&L_16), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), ((float)il2cpp_codegen_add(L_13, L_15)), /*hidden argument*/NULL);
		return L_16;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_lengthsq_m246AAF09A2EA30D8FE4314442E031D9B5AFF31FF_inline (float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___0_x, const RuntimeMethod* method) 
{
	{
		// public static float lengthsq(float4 x) { return dot(x, x); }
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_0 = ___0_x;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_1 = ___0_x;
		float L_2;
		L_2 = math_dot_m20F2285F7227DC308D9CF2DCB8EAAD3E774501D4_inline(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA float2_op_Subtraction_m28172675A65BCFFBC8C9023BE815019E668B8380_inline (float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___0_lhs, float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___1_rhs, const RuntimeMethod* method) 
{
	{
		// public static float2 operator - (float2 lhs, float2 rhs) { return new float2 (lhs.x - rhs.x, lhs.y - rhs.y); }
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_0 = ___0_lhs;
		float L_1 = L_0.___x_0;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_2 = ___1_rhs;
		float L_3 = L_2.___x_0;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_4 = ___0_lhs;
		float L_5 = L_4.___y_1;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_6 = ___1_rhs;
		float L_7 = L_6.___y_1;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_8;
		memset((&L_8), 0, sizeof(L_8));
		float2__ctor_m3D598E2C2D173DE852F3AB157502968261383C97_inline((&L_8), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), /*hidden argument*/NULL);
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA float2_op_Multiply_m9117237F9A26A1B934C1DE0A5FE5BD6EF7D3B26C_inline (float ___0_lhs, float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___1_rhs, const RuntimeMethod* method) 
{
	{
		// public static float2 operator * (float lhs, float2 rhs) { return new float2 (lhs * rhs.x, lhs * rhs.y); }
		float L_0 = ___0_lhs;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_1 = ___1_rhs;
		float L_2 = L_1.___x_0;
		float L_3 = ___0_lhs;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_4 = ___1_rhs;
		float L_5 = L_4.___y_1;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_6;
		memset((&L_6), 0, sizeof(L_6));
		float2__ctor_m3D598E2C2D173DE852F3AB157502968261383C97_inline((&L_6), ((float)il2cpp_codegen_multiply(L_0, L_2)), ((float)il2cpp_codegen_multiply(L_3, L_5)), /*hidden argument*/NULL);
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA float2_op_Addition_m718974663A956F64D7C45D06C088550637F13693_inline (float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___0_lhs, float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___1_rhs, const RuntimeMethod* method) 
{
	{
		// public static float2 operator + (float2 lhs, float2 rhs) { return new float2 (lhs.x + rhs.x, lhs.y + rhs.y); }
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_0 = ___0_lhs;
		float L_1 = L_0.___x_0;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_2 = ___1_rhs;
		float L_3 = L_2.___x_0;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_4 = ___0_lhs;
		float L_5 = L_4.___y_1;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_6 = ___1_rhs;
		float L_7 = L_6.___y_1;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_8;
		memset((&L_8), 0, sizeof(L_8));
		float2__ctor_m3D598E2C2D173DE852F3AB157502968261383C97_inline((&L_8), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), /*hidden argument*/NULL);
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_lengthsq_mDC7DB2DF1C069D45CE87BC737AF59CB0094042FA_inline (float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___0_x, const RuntimeMethod* method) 
{
	{
		// public static float lengthsq(float2 x) { return dot(x, x); }
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_0 = ___0_x;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_1 = ___0_x;
		float L_2;
		L_2 = math_dot_mF673D3E5B7D267C0A8569B678D05BDCCB667D04D_inline(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E float3_op_Subtraction_mB6036E9849D95650D6E73DA0D179CD7B61E696F2_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___0_lhs, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___1_rhs, const RuntimeMethod* method) 
{
	{
		// public static float3 operator - (float3 lhs, float3 rhs) { return new float3 (lhs.x - rhs.x, lhs.y - rhs.y, lhs.z - rhs.z); }
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_0 = ___0_lhs;
		float L_1 = L_0.___x_0;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_2 = ___1_rhs;
		float L_3 = L_2.___x_0;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_4 = ___0_lhs;
		float L_5 = L_4.___y_1;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_6 = ___1_rhs;
		float L_7 = L_6.___y_1;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_8 = ___0_lhs;
		float L_9 = L_8.___z_2;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_10 = ___1_rhs;
		float L_11 = L_10.___z_2;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_12;
		memset((&L_12), 0, sizeof(L_12));
		float3__ctor_mC61002CD0EC13D7C37D846D021A78C028FB80DB9_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E float3_op_Multiply_m38F52B61F8E5636955A1A6DF3A75BD0724148350_inline (float ___0_lhs, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___1_rhs, const RuntimeMethod* method) 
{
	{
		// public static float3 operator * (float lhs, float3 rhs) { return new float3 (lhs * rhs.x, lhs * rhs.y, lhs * rhs.z); }
		float L_0 = ___0_lhs;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_1 = ___1_rhs;
		float L_2 = L_1.___x_0;
		float L_3 = ___0_lhs;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_4 = ___1_rhs;
		float L_5 = L_4.___y_1;
		float L_6 = ___0_lhs;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_7 = ___1_rhs;
		float L_8 = L_7.___z_2;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_9;
		memset((&L_9), 0, sizeof(L_9));
		float3__ctor_mC61002CD0EC13D7C37D846D021A78C028FB80DB9_inline((&L_9), ((float)il2cpp_codegen_multiply(L_0, L_2)), ((float)il2cpp_codegen_multiply(L_3, L_5)), ((float)il2cpp_codegen_multiply(L_6, L_8)), /*hidden argument*/NULL);
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E float3_op_Addition_mFFCF4F7457594F5EFB0678C0DE90AAD3D3F6947B_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___0_lhs, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___1_rhs, const RuntimeMethod* method) 
{
	{
		// public static float3 operator + (float3 lhs, float3 rhs) { return new float3 (lhs.x + rhs.x, lhs.y + rhs.y, lhs.z + rhs.z); }
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_0 = ___0_lhs;
		float L_1 = L_0.___x_0;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_2 = ___1_rhs;
		float L_3 = L_2.___x_0;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_4 = ___0_lhs;
		float L_5 = L_4.___y_1;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_6 = ___1_rhs;
		float L_7 = L_6.___y_1;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_8 = ___0_lhs;
		float L_9 = L_8.___z_2;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_10 = ___1_rhs;
		float L_11 = L_10.___z_2;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_12;
		memset((&L_12), 0, sizeof(L_12));
		float3__ctor_mC61002CD0EC13D7C37D846D021A78C028FB80DB9_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_lengthsq_mC699F3F214F05B26BEBAF1B46E3AA3C00407A532_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___0_x, const RuntimeMethod* method) 
{
	{
		// public static float lengthsq(float3 x) { return dot(x, x); }
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_0 = ___0_x;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_1 = ___0_x;
		float L_2;
		L_2 = math_dot_mE193D8880350D74CC8D63A0D53CDC5902F844AAD_inline(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void float4__ctor_mB2F7F2D8BCE8159BEF5A0D6400499E211858ED2D_inline (float4_t89D9A294E7A79BD81BFBDD18654508532958555E* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) 
{
	{
		// this.x = x;
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		// this.y = y;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		// this.z = z;
		float L_2 = ___2_z;
		__this->___z_2 = L_2;
		// this.w = w;
		float L_3 = ___3_w;
		__this->___w_3 = L_3;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_dot_m20F2285F7227DC308D9CF2DCB8EAAD3E774501D4_inline (float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___0_x, float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___1_y, const RuntimeMethod* method) 
{
	{
		// public static float dot(float4 x, float4 y) { return x.x * y.x + x.y * y.y + x.z * y.z + x.w * y.w; }
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_0 = ___0_x;
		float L_1 = L_0.___x_0;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_2 = ___1_y;
		float L_3 = L_2.___x_0;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_4 = ___0_x;
		float L_5 = L_4.___y_1;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_6 = ___1_y;
		float L_7 = L_6.___y_1;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_8 = ___0_x;
		float L_9 = L_8.___z_2;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_10 = ___1_y;
		float L_11 = L_10.___z_2;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_12 = ___0_x;
		float L_13 = L_12.___w_3;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_14 = ___1_y;
		float L_15 = L_14.___w_3;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15))));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void float2__ctor_m3D598E2C2D173DE852F3AB157502968261383C97_inline (float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		// this.x = x;
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		// this.y = y;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_dot_mF673D3E5B7D267C0A8569B678D05BDCCB667D04D_inline (float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___0_x, float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___1_y, const RuntimeMethod* method) 
{
	{
		// public static float dot(float2 x, float2 y) { return x.x * y.x + x.y * y.y; }
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_0 = ___0_x;
		float L_1 = L_0.___x_0;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_2 = ___1_y;
		float L_3 = L_2.___x_0;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_4 = ___0_x;
		float L_5 = L_4.___y_1;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_6 = ___1_y;
		float L_7 = L_6.___y_1;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7))));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void float3__ctor_mC61002CD0EC13D7C37D846D021A78C028FB80DB9_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		// this.x = x;
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		// this.y = y;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		// this.z = z;
		float L_2 = ___2_z;
		__this->___z_2 = L_2;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_dot_mE193D8880350D74CC8D63A0D53CDC5902F844AAD_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___0_x, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___1_y, const RuntimeMethod* method) 
{
	{
		// public static float dot(float3 x, float3 y) { return x.x * y.x + x.y * y.y + x.z * y.z; }
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_0 = ___0_x;
		float L_1 = L_0.___x_0;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_2 = ___1_y;
		float L_3 = L_2.___x_0;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_4 = ___0_x;
		float L_5 = L_4.___y_1;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_6 = ___1_y;
		float L_7 = L_6.___y_1;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_8 = ___0_x;
		float L_9 = L_8.___z_2;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_10 = ___1_y;
		float L_11 = L_10.___z_2;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))));
	}
}
