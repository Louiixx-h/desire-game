﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker;
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		R ret;
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
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
template <typename R, typename T1>
struct InterfaceFuncInvoker1Invoker;
template <typename R, typename T1>
struct InterfaceFuncInvoker1Invoker<R, T1*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		R ret;
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2Invoker;
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2Invoker<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		R ret;
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3;
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2*, T3>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3)
	{
		R ret;
		void* params[3] = { p1, p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R>
struct ConstrainedFuncInvoker0
{
	static inline R Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj)
	{
		R ret;
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, NULL, &ret);
		return ret;
	}
};

struct ConditionalWeakTable_2_t87BE12792DC61EC9AE17609EC1ACA0671B3F5605;
struct ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858;
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
struct Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A;
struct Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E;
struct Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318;
struct Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574;
struct Dictionary_2_t9B2ADF59B0E83212023684CAE164D0B1C22E800C;
struct Dictionary_2_tB13D0A847475988F23522A8642F7D24BA304F9B7;
struct Dictionary_2_t3E3BA8CACCC3C085000EC19576E2BA73F8CFC78E;
struct DynamicArray_1_t7C64F5A74B7BA6F6B3589A766CADE3F59C6C7BCA;
struct DynamicArray_1_t32FB886A5D922EE301E17A95EB958B1FA6B53A59;
struct DynamicArray_1_tFD6392EE4EAA442D167A921C9964FD9C17FDCDE0;
struct DynamicArray_1_tA7E05F444A8E75C3FD24B4EA81F57EA44E6D0F09;
struct EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC;
struct EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF;
struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2;
struct EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862;
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC;
struct EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1;
struct EqualityComparer_1_tD07CBC58F821582B79CB59B10264DC683DE3EE5C;
struct EqualityComparer_1_t5849F328832B91CA688EA057CFD71225D81B0F72;
struct IEnumerator_1_t2DE25C0502538C48EB27BE7209E1CB26B8762D66;
struct IEnumerator_1_tFABD3B897F1296469E9A2DB9BCF6C89439049208;
struct IEnumerator_1_t8A20B9E97C5C8B430E0D2665BCD73989500E0A2B;
struct IEnumerator_1_tAE26E02000704C5AA4E38571EE21B9E9DA1B5E10;
struct IEnumerator_1_t72FF062AA3F5F850685340E13AABA11D11AB3192;
struct IEnumerator_1_t1FEFD57D86D04EFCD1343F421249258C9DEB1C57;
struct IEnumerator_1_t0761D9B4DB904AC0A566964ACD352009AA221196;
struct IEqualityComparer_1_t0BB8211419723EB61BF19007AC9D62365E50500E;
struct IEqualityComparer_1_t47CC0B235E693652D181B679FF6D61A469ECC122;
struct IEqualityComparer_1_t984D540FC208A2CABAB23A4D766E1C17CA1D0833;
struct IEqualityComparer_1_tF175EE4608832085A0EE2A97DAE545B83F097888;
struct IEqualityComparer_1_t36D9F338515788F36821FCF43F96DFF5FB6781CE;
struct KeyCollection_t8825842DD54072B7B712D2ED9E544D6466A502CB;
struct KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55;
struct KeyCollection_t6725DF5AC7475F617DDB9DA237871AD9FAB80D75;
struct KeyCollection_tACA314578A3D994C07972DC55AA432618B441372;
struct KeyCollection_t246CAF0F582ADDC11FEEFB70F34D8C26564B9B34;
struct KeyCollection_tAE0C48201AB6D92D5AD1D458816B2B13DC9FF903;
struct KeyCollection_tF4502228DC2899311EA0532D7A002E5AB417BCD4;
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
struct ValueCollection_tA38C30965161699273DF0F825A6FCB2896F6ECC7;
struct ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40;
struct ValueCollection_t0F016B1C5BEC58DAA0BA4B0A2699B389590BC305;
struct ValueCollection_t68C95977A6405D46453CCCFD51F7CB3B90A6832D;
struct ValueCollection_t10FF6A98B17BD862F8991138D7FD29AD4847FBF6;
struct ValueCollection_tDAA54478D6690BCDC9E7745F0B5D0265360309EC;
struct ValueCollection_t5B8AB9BA0BFC036C0FEFE33B4C8681FB06730C8E;
struct EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4;
struct EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3;
struct EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F;
struct EntryU5BU5D_tA2540CF07A907BE88ADCEB3AF3785F9B00F1E760;
struct EntryU5BU5D_t52DB08136C23308859B3EBE1F2751AC002E126E2;
struct EntryU5BU5D_t25E6E3385E909292D9EDC1103947B32EB24B5B0B;
struct EntryU5BU5D_t07D6F8693F4D0B3C951D3AC26EBB0DDAD42EACCB;
struct KeyValuePair_2U5BU5D_t507CDA5432F6D20050CE99321FB52CEF9E776871;
struct KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57;
struct KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12;
struct KeyValuePair_2U5BU5D_t95A94889CB658E7B4C12C188D2EA1791F827BF83;
struct KeyValuePair_2U5BU5D_tA37DB0B7611E442F177E3F568EB45718B30EB635;
struct KeyValuePair_2U5BU5D_t18981E8B4DA835E5A8BEC453FB6196F9A462D869;
struct KeyValuePair_2U5BU5D_t483C9A7E1529730398DA7E05E2540845C629FED3;
struct List_1U5BU5D_t37294D7C303231F2FD83B3C398AED0937F4F3206;
struct List_1U5BU5D_tE510DA387DA867AC92F8274325B178A7DE9A209E;
struct EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct RendererListResourceU5BU5D_t86C273A426669C3314D3D7C9D320EE41CAC74D23;
struct ShaderTagIdU5BU5D_tE1BA124E13B8096153E25C5AF9C1D15D71466143;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct CompiledPassInfoU5BU5D_tABD910C36DB41F35B2DDE8BEF16F9C5F7E02B755;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
struct CullingAllocationInfo_tB260F5CD0B290F74E145EB16E54B901CC68D9D5A;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IDictionaryEnumerator_tE129D608FCDB7207E0F0ECE33473CC950A83AD16;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct IFormatterConverter_t726606DAC82C384B08C82471313C340968DDB609;
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82;
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct RenderGraphPass_t7689449D6979D97B31E962897EB038EA3F01D361;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692;
struct String_t;
struct Type_t;
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F;
struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
IL2CPP_EXTERN_C String_t* _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
IL2CPP_EXTERN_C String_t* _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A;
IL2CPP_EXTERN_C String_t* _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0;

struct EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4;
struct EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3;
struct EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F;
struct EntryU5BU5D_tA2540CF07A907BE88ADCEB3AF3785F9B00F1E760;
struct EntryU5BU5D_t52DB08136C23308859B3EBE1F2751AC002E126E2;
struct EntryU5BU5D_t25E6E3385E909292D9EDC1103947B32EB24B5B0B;
struct EntryU5BU5D_t07D6F8693F4D0B3C951D3AC26EBB0DDAD42EACCB;
struct KeyValuePair_2U5BU5D_t507CDA5432F6D20050CE99321FB52CEF9E776871;
struct KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57;
struct KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12;
struct KeyValuePair_2U5BU5D_t95A94889CB658E7B4C12C188D2EA1791F827BF83;
struct KeyValuePair_2U5BU5D_tA37DB0B7611E442F177E3F568EB45718B30EB635;
struct KeyValuePair_2U5BU5D_t18981E8B4DA835E5A8BEC453FB6196F9A462D869;
struct KeyValuePair_2U5BU5D_t483C9A7E1529730398DA7E05E2540845C629FED3;
struct DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct RendererListResourceU5BU5D_t86C273A426669C3314D3D7C9D320EE41CAC74D23;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct CompiledPassInfoU5BU5D_tABD910C36DB41F35B2DDE8BEF16F9C5F7E02B755;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858  : public RuntimeObject
{
	EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* ___data;
	RuntimeObject* ____lock;
	int32_t ___size;
};
struct Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t8825842DD54072B7B712D2ED9E544D6466A502CB* ____keys;
	ValueCollection_tA38C30965161699273DF0F825A6FCB2896F6ECC7* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* ____keys;
	ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t6725DF5AC7475F617DDB9DA237871AD9FAB80D75* ____keys;
	ValueCollection_t0F016B1C5BEC58DAA0BA4B0A2699B389590BC305* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tA2540CF07A907BE88ADCEB3AF3785F9B00F1E760* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tACA314578A3D994C07972DC55AA432618B441372* ____keys;
	ValueCollection_t68C95977A6405D46453CCCFD51F7CB3B90A6832D* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t9B2ADF59B0E83212023684CAE164D0B1C22E800C  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t52DB08136C23308859B3EBE1F2751AC002E126E2* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t246CAF0F582ADDC11FEEFB70F34D8C26564B9B34* ____keys;
	ValueCollection_t10FF6A98B17BD862F8991138D7FD29AD4847FBF6* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_tB13D0A847475988F23522A8642F7D24BA304F9B7  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t25E6E3385E909292D9EDC1103947B32EB24B5B0B* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tAE0C48201AB6D92D5AD1D458816B2B13DC9FF903* ____keys;
	ValueCollection_tDAA54478D6690BCDC9E7745F0B5D0265360309EC* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t3E3BA8CACCC3C085000EC19576E2BA73F8CFC78E  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t07D6F8693F4D0B3C951D3AC26EBB0DDAD42EACCB* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tF4502228DC2899311EA0532D7A002E5AB417BCD4* ____keys;
	ValueCollection_t5B8AB9BA0BFC036C0FEFE33B4C8681FB06730C8E* ____values;
	RuntimeObject* ____syncRoot;
};
struct DynamicArray_1_t7C64F5A74B7BA6F6B3589A766CADE3F59C6C7BCA  : public RuntimeObject
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_Array;
	int32_t ___U3CsizeU3Ek__BackingField;
	int32_t ___U3CversionU3Ek__BackingField;
};
struct DynamicArray_1_t32FB886A5D922EE301E17A95EB958B1FA6B53A59  : public RuntimeObject
{
	RendererListResourceU5BU5D_t86C273A426669C3314D3D7C9D320EE41CAC74D23* ___m_Array;
	int32_t ___U3CsizeU3Ek__BackingField;
	int32_t ___U3CversionU3Ek__BackingField;
};
struct DynamicArray_1_tFD6392EE4EAA442D167A921C9964FD9C17FDCDE0  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___m_Array;
	int32_t ___U3CsizeU3Ek__BackingField;
	int32_t ___U3CversionU3Ek__BackingField;
};
struct DynamicArray_1_tA7E05F444A8E75C3FD24B4EA81F57EA44E6D0F09  : public RuntimeObject
{
	CompiledPassInfoU5BU5D_tABD910C36DB41F35B2DDE8BEF16F9C5F7E02B755* ___m_Array;
	int32_t ___U3CsizeU3Ek__BackingField;
	int32_t ___U3CversionU3Ek__BackingField;
};
struct EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC  : public RuntimeObject
{
};
struct EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF  : public RuntimeObject
{
};
struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2  : public RuntimeObject
{
};
struct EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862  : public RuntimeObject
{
};
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC  : public RuntimeObject
{
};
struct EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1  : public RuntimeObject
{
};
struct EqualityComparer_1_tD07CBC58F821582B79CB59B10264DC683DE3EE5C  : public RuntimeObject
{
};
struct EqualityComparer_1_t5849F328832B91CA688EA057CFD71225D81B0F72  : public RuntimeObject
{
};
struct KeyCollection_t8825842DD54072B7B712D2ED9E544D6466A502CB  : public RuntimeObject
{
	Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* ____dictionary;
};
struct KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55  : public RuntimeObject
{
	Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* ____dictionary;
};
struct KeyCollection_t6725DF5AC7475F617DDB9DA237871AD9FAB80D75  : public RuntimeObject
{
	Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* ____dictionary;
};
struct KeyCollection_tACA314578A3D994C07972DC55AA432618B441372  : public RuntimeObject
{
	Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574* ____dictionary;
};
struct KeyCollection_t246CAF0F582ADDC11FEEFB70F34D8C26564B9B34  : public RuntimeObject
{
	Dictionary_2_t9B2ADF59B0E83212023684CAE164D0B1C22E800C* ____dictionary;
};
struct KeyCollection_tAE0C48201AB6D92D5AD1D458816B2B13DC9FF903  : public RuntimeObject
{
	Dictionary_2_tB13D0A847475988F23522A8642F7D24BA304F9B7* ____dictionary;
};
struct KeyCollection_tF4502228DC2899311EA0532D7A002E5AB417BCD4  : public RuntimeObject
{
	Dictionary_2_t3E3BA8CACCC3C085000EC19576E2BA73F8CFC78E* ____dictionary;
};
struct ValueCollection_tA38C30965161699273DF0F825A6FCB2896F6ECC7  : public RuntimeObject
{
	Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* ____dictionary;
};
struct ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40  : public RuntimeObject
{
	Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* ____dictionary;
};
struct ValueCollection_t0F016B1C5BEC58DAA0BA4B0A2699B389590BC305  : public RuntimeObject
{
	Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* ____dictionary;
};
struct ValueCollection_t68C95977A6405D46453CCCFD51F7CB3B90A6832D  : public RuntimeObject
{
	Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574* ____dictionary;
};
struct ValueCollection_t10FF6A98B17BD862F8991138D7FD29AD4847FBF6  : public RuntimeObject
{
	Dictionary_2_t9B2ADF59B0E83212023684CAE164D0B1C22E800C* ____dictionary;
};
struct ValueCollection_tDAA54478D6690BCDC9E7745F0B5D0265360309EC  : public RuntimeObject
{
	Dictionary_2_tB13D0A847475988F23522A8642F7D24BA304F9B7* ____dictionary;
};
struct ValueCollection_t5B8AB9BA0BFC036C0FEFE33B4C8681FB06730C8E  : public RuntimeObject
{
	Dictionary_2_t3E3BA8CACCC3C085000EC19576E2BA73F8CFC78E* ____dictionary;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37  : public RuntimeObject
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_members;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_data;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___m_types;
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___m_nameToIndex;
	int32_t ___m_currMember;
	RuntimeObject* ___m_converter;
	String_t* ___m_fullTypeName;
	String_t* ___m_assemName;
	Type_t* ___objectType;
	bool ___isFullTypeNameSetExplicit;
	bool ___isAssemblyNameSetExplicit;
	bool ___requireSameTokenInPartialTrust;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct Entry_t1F21171535DEAE77D533CFCFAF0EF8C51862C715 
{
	int32_t ___hashCode;
	int32_t ___next;
	uint32_t ___key;
	RuntimeObject* ___value;
};
typedef Il2CppFullySharedGenericStruct Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3;
struct KeyValuePair_2_tAC06C9E6230AA7E6BDA2F07D910C3CBE2F36399B 
{
	uint32_t ___key;
	RuntimeObject* ___value;
};
typedef Il2CppFullySharedGenericStruct KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669;
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct DepthState_t798415D2C1D9202E555FEE5D4C5FDF6B3A077255 
{
	uint8_t ___m_WriteEnabled;
	int8_t ___m_CompareFunction;
};
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB 
{
	RuntimeObject* ____key;
	RuntimeObject* ____value;
};
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_pinvoke
{
	Il2CppIUnknown* ____key;
	Il2CppIUnknown* ____value;
};
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_com
{
	Il2CppIUnknown* ____key;
	Il2CppIUnknown* ____value;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct RasterState_tA30E8336EA5D1E2152A6C7252F15384985B98A26 
{
	int32_t ___m_CullingMode;
	int32_t ___m_OffsetUnits;
	float ___m_OffsetFactor;
	uint8_t ___m_DepthClip;
	uint8_t ___m_Conservative;
	uint8_t ___m_Padding1;
	uint8_t ___m_Padding2;
};
struct RenderQueueRange_t7518252AA6426B1EA45D3D9B394F304EEF784D71 
{
	int32_t ___m_LowerBound;
	int32_t ___m_UpperBound;
};
struct RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 
{
	uint8_t ___m_WriteMask;
	uint8_t ___m_SourceColorBlendMode;
	uint8_t ___m_DestinationColorBlendMode;
	uint8_t ___m_SourceAlphaBlendMode;
	uint8_t ___m_DestinationAlphaBlendMode;
	uint8_t ___m_ColorBlendOperation;
	uint8_t ___m_AlphaBlendOperation;
	uint8_t ___m_Padding;
};
struct ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 
{
	int32_t ___m_Id;
};
struct StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 
{
	uint8_t ___m_Enabled;
	uint8_t ___m_ReadMask;
	uint8_t ___m_WriteMask;
	uint8_t ___m_Padding;
	uint8_t ___m_CompareFunctionFront;
	uint8_t ___m_PassOperationFront;
	uint8_t ___m_FailOperationFront;
	uint8_t ___m_ZFailOperationFront;
	uint8_t ___m_CompareFunctionBack;
	uint8_t ___m_PassOperationBack;
	uint8_t ___m_FailOperationBack;
	uint8_t ___m_ZFailOperationBack;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 
{
	RuntimeObject* ___m_additionalContext;
	int32_t ___m_state;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext;
	int32_t ___m_state;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext;
	int32_t ___m_state;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct UIntPtr_t 
{
	void* ____pointer;
};
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
struct CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 
{
	int32_t ____options;
	String_t* ____cultureKey;
	String_t* ____pattern;
};
struct CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31_marshaled_pinvoke
{
	int32_t ____options;
	char* ____cultureKey;
	char* ____pattern;
};
struct CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31_marshaled_com
{
	int32_t ____options;
	Il2CppChar* ____cultureKey;
	Il2CppChar* ____pattern;
};
struct ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___element;
	int32_t ___property;
};
struct ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_marshaled_pinvoke
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___element;
	int32_t ___property;
};
struct ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_marshaled_com
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___element;
	int32_t ___property;
};
struct SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574 
{
	int32_t ___sheetInstanceID;
	int32_t ___index;
};
struct Entry_tEC2FCD90BA00C992320FFF0D4A74509526BF8CA1 
{
	int32_t ___hashCode;
	int32_t ___next;
	CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 ___key;
	RuntimeObject* ___value;
};
struct Entry_t50EA0C1E8A8EE9E0CC561055CA772A2BF21F8A5E 
{
	int32_t ___hashCode;
	int32_t ___next;
	ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___key;
	int32_t ___value;
};
struct Entry_tBFCAF6DF9FBB6B7CB44FAA838B615D233C134CAB 
{
	int32_t ___hashCode;
	int32_t ___next;
	ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___key;
	int32_t ___value;
};
struct Entry_tC6BA3FCE24005B80AD289EB230B5E04466EEDC86 
{
	int32_t ___hashCode;
	int32_t ___next;
	ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___key;
	RuntimeObject* ___value;
};
struct Entry_t9DD41777766A237ECDB0E269740F073135AB4A64 
{
	int32_t ___hashCode;
	int32_t ___next;
	SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574 ___key;
	RuntimeObject* ___value;
};
struct Enumerator_t42FC023879D0041F2016540629807C485A03B1A7 
{
	Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_tAC06C9E6230AA7E6BDA2F07D910C3CBE2F36399B ____current;
	int32_t ____getEnumeratorRetType;
};
typedef Il2CppFullySharedGenericStruct Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1;
struct KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95 
{
	CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 ___key;
	RuntimeObject* ___value;
};
struct KeyValuePair_2_t5262B590CA16F81E0E225FA2B90314261B2B4BC6 
{
	ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___key;
	int32_t ___value;
};
struct KeyValuePair_2_t68435994E8A66E579434AAA75502B7B6137A7B2A 
{
	ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___key;
	int32_t ___value;
};
struct KeyValuePair_2_t5EA39A38B18A7FBA9D70D487DBE55714255FAAA6 
{
	ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___key;
	RuntimeObject* ___value;
};
struct KeyValuePair_2_t4D486866736280C7A079662D170F5444C27E50C6 
{
	SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574 ___key;
	RuntimeObject* ___value;
};
struct BlendState_tC9B817349E49EF26CBCDC8FCE02789A661DC2630 
{
	RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 ___m_BlendState0;
	RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 ___m_BlendState1;
	RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 ___m_BlendState2;
	RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 ___m_BlendState3;
	RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 ___m_BlendState4;
	RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 ___m_BlendState5;
	RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 ___m_BlendState6;
	RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 ___m_BlendState7;
	uint8_t ___m_SeparateMRTBlendStates;
	uint8_t ___m_AlphaToMask;
	int16_t ___m_Padding;
};
struct CullingResults_tD6B7EF20B68D47DFF3A99EB2EA73F47F1D460267 
{
	intptr_t ___ptr;
	CullingAllocationInfo_tB260F5CD0B290F74E145EB16E54B901CC68D9D5A* ___m_AllocationInfo;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct GraphicsFence_t199180163AEDE0C1BE868F8E1314A47610B1FABB 
{
	intptr_t ___m_Ptr;
	int32_t ___m_Version;
	int32_t ___m_FenceType;
};
struct RendererList_t608CE60421616EF4211F5B8AC62E3C36D4BDDF85 
{
	uintptr_t ___context;
	uint32_t ___index;
	uint32_t ___frame;
	uint32_t ___type;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct Enumerator_tB7298ABA389EB46AD2BEB2E35D7FF51A6525D750 
{
	Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95 ____current;
	int32_t ____getEnumeratorRetType;
};
struct Enumerator_t0A06F4478B05078E52D4AB30BBAE414631F68E4D 
{
	Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_t5262B590CA16F81E0E225FA2B90314261B2B4BC6 ____current;
	int32_t ____getEnumeratorRetType;
};
struct Enumerator_tEA5C0B380BD53EEE55544419AFADE6EF55B8CACD 
{
	Dictionary_2_t9B2ADF59B0E83212023684CAE164D0B1C22E800C* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_t68435994E8A66E579434AAA75502B7B6137A7B2A ____current;
	int32_t ____getEnumeratorRetType;
};
struct Enumerator_t802BFC19A53773B2AE8F0F44521FB90B06501577 
{
	Dictionary_2_tB13D0A847475988F23522A8642F7D24BA304F9B7* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_t5EA39A38B18A7FBA9D70D487DBE55714255FAAA6 ____current;
	int32_t ____getEnumeratorRetType;
};
struct Enumerator_t45CAC33CD0C08E57C834C0DE235FD5DB1E6F858A 
{
	Dictionary_2_t3E3BA8CACCC3C085000EC19576E2BA73F8CFC78E* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_t4D486866736280C7A079662D170F5444C27E50C6 ____current;
	int32_t ____getEnumeratorRetType;
};
struct RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733 
{
	BlendState_tC9B817349E49EF26CBCDC8FCE02789A661DC2630 ___m_BlendState;
	RasterState_tA30E8336EA5D1E2152A6C7252F15384985B98A26 ___m_RasterState;
	DepthState_t798415D2C1D9202E555FEE5D4C5FDF6B3A077255 ___m_DepthState;
	StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 ___m_StencilState;
	int32_t ___m_StencilReference;
	int32_t ___m_Mask;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct CompiledPassInfo_t7434C596A1EA90A428DAECAA3FFB87314BC84615 
{
	RenderGraphPass_t7689449D6979D97B31E962897EB038EA3F01D361* ___pass;
	List_1U5BU5D_t37294D7C303231F2FD83B3C398AED0937F4F3206* ___resourceCreateList;
	List_1U5BU5D_t37294D7C303231F2FD83B3C398AED0937F4F3206* ___resourceReleaseList;
	int32_t ___refCount;
	bool ___culled;
	bool ___culledByRendererList;
	bool ___hasSideEffect;
	int32_t ___syncToPassIndex;
	int32_t ___syncFromPassIndex;
	bool ___needGraphicsFence;
	GraphicsFence_t199180163AEDE0C1BE868F8E1314A47610B1FABB ___fence;
	bool ___enableAsyncCompute;
	List_1U5BU5D_tE510DA387DA867AC92F8274325B178A7DE9A209E* ___debugResourceReads;
	List_1U5BU5D_tE510DA387DA867AC92F8274325B178A7DE9A209E* ___debugResourceWrites;
};
struct CompiledPassInfo_t7434C596A1EA90A428DAECAA3FFB87314BC84615_marshaled_pinvoke
{
	RenderGraphPass_t7689449D6979D97B31E962897EB038EA3F01D361* ___pass;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73** ___resourceCreateList;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73** ___resourceReleaseList;
	int32_t ___refCount;
	int32_t ___culled;
	int32_t ___culledByRendererList;
	int32_t ___hasSideEffect;
	int32_t ___syncToPassIndex;
	int32_t ___syncFromPassIndex;
	int32_t ___needGraphicsFence;
	GraphicsFence_t199180163AEDE0C1BE868F8E1314A47610B1FABB ___fence;
	int32_t ___enableAsyncCompute;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD** ___debugResourceReads;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD** ___debugResourceWrites;
};
struct CompiledPassInfo_t7434C596A1EA90A428DAECAA3FFB87314BC84615_marshaled_com
{
	RenderGraphPass_t7689449D6979D97B31E962897EB038EA3F01D361* ___pass;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73** ___resourceCreateList;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73** ___resourceReleaseList;
	int32_t ___refCount;
	int32_t ___culled;
	int32_t ___culledByRendererList;
	int32_t ___hasSideEffect;
	int32_t ___syncToPassIndex;
	int32_t ___syncFromPassIndex;
	int32_t ___needGraphicsFence;
	GraphicsFence_t199180163AEDE0C1BE868F8E1314A47610B1FABB ___fence;
	int32_t ___enableAsyncCompute;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD** ___debugResourceReads;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD** ___debugResourceWrites;
};
struct Nullable_1_tA4A30D1008B44E6BEFB1666997B110F382EE3AA5 
{
	bool ___hasValue;
	RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733 ___value;
};
struct ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E 
{
	int32_t ___sortingCriteria;
	int32_t ___rendererConfiguration;
	RenderQueueRange_t7518252AA6426B1EA45D3D9B394F304EEF784D71 ___renderQueueRange;
	Nullable_1_tA4A30D1008B44E6BEFB1666997B110F382EE3AA5 ___stateBlock;
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___overrideShader;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___overrideMaterial;
	bool ___excludeObjectMotionVectors;
	int32_t ___layerMask;
	uint32_t ___renderingLayerMask;
	int32_t ___overrideMaterialPassIndex;
	int32_t ___overrideShaderPassIndex;
	CullingResults_tD6B7EF20B68D47DFF3A99EB2EA73F47F1D460267 ___U3CcullingResultU3Ek__BackingField;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___U3CcameraU3Ek__BackingField;
	ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 ___U3CpassNameU3Ek__BackingField;
	ShaderTagIdU5BU5D_tE1BA124E13B8096153E25C5AF9C1D15D71466143* ___U3CpassNamesU3Ek__BackingField;
};
struct RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E_marshaled_pinvoke
{
	int32_t ___sortingCriteria;
	int32_t ___rendererConfiguration;
	RenderQueueRange_t7518252AA6426B1EA45D3D9B394F304EEF784D71 ___renderQueueRange;
	Nullable_1_tA4A30D1008B44E6BEFB1666997B110F382EE3AA5 ___stateBlock;
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___overrideShader;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___overrideMaterial;
	int32_t ___excludeObjectMotionVectors;
	int32_t ___layerMask;
	uint32_t ___renderingLayerMask;
	int32_t ___overrideMaterialPassIndex;
	int32_t ___overrideShaderPassIndex;
	CullingResults_tD6B7EF20B68D47DFF3A99EB2EA73F47F1D460267 ___U3CcullingResultU3Ek__BackingField;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___U3CcameraU3Ek__BackingField;
	ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 ___U3CpassNameU3Ek__BackingField;
	ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* ___U3CpassNamesU3Ek__BackingField;
};
struct RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E_marshaled_com
{
	int32_t ___sortingCriteria;
	int32_t ___rendererConfiguration;
	RenderQueueRange_t7518252AA6426B1EA45D3D9B394F304EEF784D71 ___renderQueueRange;
	Nullable_1_tA4A30D1008B44E6BEFB1666997B110F382EE3AA5 ___stateBlock;
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___overrideShader;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___overrideMaterial;
	int32_t ___excludeObjectMotionVectors;
	int32_t ___layerMask;
	uint32_t ___renderingLayerMask;
	int32_t ___overrideMaterialPassIndex;
	int32_t ___overrideShaderPassIndex;
	CullingResults_tD6B7EF20B68D47DFF3A99EB2EA73F47F1D460267 ___U3CcullingResultU3Ek__BackingField;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___U3CcameraU3Ek__BackingField;
	ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 ___U3CpassNameU3Ek__BackingField;
	ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* ___U3CpassNamesU3Ek__BackingField;
};
struct RendererListResource_t9B978DD85ADC467D7E4DB42EF603B7C49918BF49 
{
	RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E ___desc;
	RendererList_t608CE60421616EF4211F5B8AC62E3C36D4BDDF85 ___rendererList;
};
struct RendererListResource_t9B978DD85ADC467D7E4DB42EF603B7C49918BF49_marshaled_pinvoke
{
	RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E_marshaled_pinvoke ___desc;
	RendererList_t608CE60421616EF4211F5B8AC62E3C36D4BDDF85 ___rendererList;
};
struct RendererListResource_t9B978DD85ADC467D7E4DB42EF603B7C49918BF49_marshaled_com
{
	RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E_marshaled_com ___desc;
	RendererList_t608CE60421616EF4211F5B8AC62E3C36D4BDDF85 ___rendererList;
};
struct EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC_StaticFields
{
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* ___defaultComparer;
};
struct EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF_StaticFields
{
	EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* ___defaultComparer;
};
struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields
{
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* ___defaultComparer;
};
struct EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862_StaticFields
{
	EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* ___defaultComparer;
};
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC_StaticFields
{
	EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* ___defaultComparer;
};
struct EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1_StaticFields
{
	EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1* ___defaultComparer;
};
struct EqualityComparer_1_tD07CBC58F821582B79CB59B10264DC683DE3EE5C_StaticFields
{
	EqualityComparer_1_tD07CBC58F821582B79CB59B10264DC683DE3EE5C* ___defaultComparer;
};
struct EqualityComparer_1_t5849F328832B91CA688EA057CFD71225D81B0F72_StaticFields
{
	EqualityComparer_1_t5849F328832B91CA688EA057CFD71225D81B0F72* ___defaultComparer;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_StaticFields
{
	RuntimeObject* ___Comparer;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t1F21171535DEAE77D533CFCFAF0EF8C51862C715 m_Items[1];

	inline Entry_t1F21171535DEAE77D533CFCFAF0EF8C51862C715 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t1F21171535DEAE77D533CFCFAF0EF8C51862C715* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t1F21171535DEAE77D533CFCFAF0EF8C51862C715 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
	inline Entry_t1F21171535DEAE77D533CFCFAF0EF8C51862C715 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t1F21171535DEAE77D533CFCFAF0EF8C51862C715* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t1F21171535DEAE77D533CFCFAF0EF8C51862C715 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
};
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
struct KeyValuePair_2U5BU5D_t507CDA5432F6D20050CE99321FB52CEF9E776871  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_tAC06C9E6230AA7E6BDA2F07D910C3CBE2F36399B m_Items[1];

	inline KeyValuePair_2_tAC06C9E6230AA7E6BDA2F07D910C3CBE2F36399B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tAC06C9E6230AA7E6BDA2F07D910C3CBE2F36399B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tAC06C9E6230AA7E6BDA2F07D910C3CBE2F36399B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
	inline KeyValuePair_2_tAC06C9E6230AA7E6BDA2F07D910C3CBE2F36399B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tAC06C9E6230AA7E6BDA2F07D910C3CBE2F36399B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tAC06C9E6230AA7E6BDA2F07D910C3CBE2F36399B value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
};
struct DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533  : public RuntimeArray
{
	ALIGN_FIELD (8) DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB m_Items[1];

	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____value), (void*)NULL);
		#endif
	}
	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____value), (void*)NULL);
		#endif
	}
};
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
struct KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
struct EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_tEC2FCD90BA00C992320FFF0D4A74509526BF8CA1 m_Items[1];

	inline Entry_tEC2FCD90BA00C992320FFF0D4A74509526BF8CA1 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_tEC2FCD90BA00C992320FFF0D4A74509526BF8CA1* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_tEC2FCD90BA00C992320FFF0D4A74509526BF8CA1 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->____cultureKey), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->____pattern), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
	inline Entry_tEC2FCD90BA00C992320FFF0D4A74509526BF8CA1 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_tEC2FCD90BA00C992320FFF0D4A74509526BF8CA1* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_tEC2FCD90BA00C992320FFF0D4A74509526BF8CA1 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->____cultureKey), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->____pattern), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
};
struct KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95 m_Items[1];

	inline KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->____cultureKey), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->____pattern), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
	inline KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->____cultureKey), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->____pattern), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
};
struct EntryU5BU5D_tA2540CF07A907BE88ADCEB3AF3785F9B00F1E760  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t50EA0C1E8A8EE9E0CC561055CA772A2BF21F8A5E m_Items[1];

	inline Entry_t50EA0C1E8A8EE9E0CC561055CA772A2BF21F8A5E GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t50EA0C1E8A8EE9E0CC561055CA772A2BF21F8A5E* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t50EA0C1E8A8EE9E0CC561055CA772A2BF21F8A5E value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___element), (void*)NULL);
	}
	inline Entry_t50EA0C1E8A8EE9E0CC561055CA772A2BF21F8A5E GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t50EA0C1E8A8EE9E0CC561055CA772A2BF21F8A5E* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t50EA0C1E8A8EE9E0CC561055CA772A2BF21F8A5E value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___element), (void*)NULL);
	}
};
struct KeyValuePair_2U5BU5D_t95A94889CB658E7B4C12C188D2EA1791F827BF83  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t5262B590CA16F81E0E225FA2B90314261B2B4BC6 m_Items[1];

	inline KeyValuePair_2_t5262B590CA16F81E0E225FA2B90314261B2B4BC6 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t5262B590CA16F81E0E225FA2B90314261B2B4BC6* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t5262B590CA16F81E0E225FA2B90314261B2B4BC6 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___element), (void*)NULL);
	}
	inline KeyValuePair_2_t5262B590CA16F81E0E225FA2B90314261B2B4BC6 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t5262B590CA16F81E0E225FA2B90314261B2B4BC6* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t5262B590CA16F81E0E225FA2B90314261B2B4BC6 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___element), (void*)NULL);
	}
};
struct EntryU5BU5D_t52DB08136C23308859B3EBE1F2751AC002E126E2  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_tBFCAF6DF9FBB6B7CB44FAA838B615D233C134CAB m_Items[1];

	inline Entry_tBFCAF6DF9FBB6B7CB44FAA838B615D233C134CAB GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_tBFCAF6DF9FBB6B7CB44FAA838B615D233C134CAB* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_tBFCAF6DF9FBB6B7CB44FAA838B615D233C134CAB value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___element), (void*)NULL);
	}
	inline Entry_tBFCAF6DF9FBB6B7CB44FAA838B615D233C134CAB GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_tBFCAF6DF9FBB6B7CB44FAA838B615D233C134CAB* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_tBFCAF6DF9FBB6B7CB44FAA838B615D233C134CAB value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___element), (void*)NULL);
	}
};
struct KeyValuePair_2U5BU5D_tA37DB0B7611E442F177E3F568EB45718B30EB635  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t68435994E8A66E579434AAA75502B7B6137A7B2A m_Items[1];

	inline KeyValuePair_2_t68435994E8A66E579434AAA75502B7B6137A7B2A GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t68435994E8A66E579434AAA75502B7B6137A7B2A* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t68435994E8A66E579434AAA75502B7B6137A7B2A value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___element), (void*)NULL);
	}
	inline KeyValuePair_2_t68435994E8A66E579434AAA75502B7B6137A7B2A GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t68435994E8A66E579434AAA75502B7B6137A7B2A* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t68435994E8A66E579434AAA75502B7B6137A7B2A value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___element), (void*)NULL);
	}
};
struct EntryU5BU5D_t25E6E3385E909292D9EDC1103947B32EB24B5B0B  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_tC6BA3FCE24005B80AD289EB230B5E04466EEDC86 m_Items[1];

	inline Entry_tC6BA3FCE24005B80AD289EB230B5E04466EEDC86 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_tC6BA3FCE24005B80AD289EB230B5E04466EEDC86* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_tC6BA3FCE24005B80AD289EB230B5E04466EEDC86 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___element), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
	inline Entry_tC6BA3FCE24005B80AD289EB230B5E04466EEDC86 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_tC6BA3FCE24005B80AD289EB230B5E04466EEDC86* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_tC6BA3FCE24005B80AD289EB230B5E04466EEDC86 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___element), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
};
struct KeyValuePair_2U5BU5D_t18981E8B4DA835E5A8BEC453FB6196F9A462D869  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t5EA39A38B18A7FBA9D70D487DBE55714255FAAA6 m_Items[1];

	inline KeyValuePair_2_t5EA39A38B18A7FBA9D70D487DBE55714255FAAA6 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t5EA39A38B18A7FBA9D70D487DBE55714255FAAA6* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t5EA39A38B18A7FBA9D70D487DBE55714255FAAA6 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___element), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
	inline KeyValuePair_2_t5EA39A38B18A7FBA9D70D487DBE55714255FAAA6 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t5EA39A38B18A7FBA9D70D487DBE55714255FAAA6* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t5EA39A38B18A7FBA9D70D487DBE55714255FAAA6 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___element), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
};
struct EntryU5BU5D_t07D6F8693F4D0B3C951D3AC26EBB0DDAD42EACCB  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t9DD41777766A237ECDB0E269740F073135AB4A64 m_Items[1];

	inline Entry_t9DD41777766A237ECDB0E269740F073135AB4A64 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t9DD41777766A237ECDB0E269740F073135AB4A64* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t9DD41777766A237ECDB0E269740F073135AB4A64 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
	inline Entry_t9DD41777766A237ECDB0E269740F073135AB4A64 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t9DD41777766A237ECDB0E269740F073135AB4A64* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t9DD41777766A237ECDB0E269740F073135AB4A64 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
};
struct KeyValuePair_2U5BU5D_t483C9A7E1529730398DA7E05E2540845C629FED3  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t4D486866736280C7A079662D170F5444C27E50C6 m_Items[1];

	inline KeyValuePair_2_t4D486866736280C7A079662D170F5444C27E50C6 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t4D486866736280C7A079662D170F5444C27E50C6* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t4D486866736280C7A079662D170F5444C27E50C6 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
	inline KeyValuePair_2_t4D486866736280C7A079662D170F5444C27E50C6 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t4D486866736280C7A079662D170F5444C27E50C6* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t4D486866736280C7A079662D170F5444C27E50C6 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
};
struct RendererListResourceU5BU5D_t86C273A426669C3314D3D7C9D320EE41CAC74D23  : public RuntimeArray
{
	ALIGN_FIELD (8) RendererListResource_t9B978DD85ADC467D7E4DB42EF603B7C49918BF49 m_Items[1];

	inline RendererListResource_t9B978DD85ADC467D7E4DB42EF603B7C49918BF49 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RendererListResource_t9B978DD85ADC467D7E4DB42EF603B7C49918BF49* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RendererListResource_t9B978DD85ADC467D7E4DB42EF603B7C49918BF49 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___desc))->___overrideShader), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___desc))->___overrideMaterial), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___desc))->___U3CcameraU3Ek__BackingField), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___desc))->___U3CpassNamesU3Ek__BackingField), (void*)NULL);
		#endif
	}
	inline RendererListResource_t9B978DD85ADC467D7E4DB42EF603B7C49918BF49 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RendererListResource_t9B978DD85ADC467D7E4DB42EF603B7C49918BF49* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RendererListResource_t9B978DD85ADC467D7E4DB42EF603B7C49918BF49 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___desc))->___overrideShader), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___desc))->___overrideMaterial), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___desc))->___U3CcameraU3Ek__BackingField), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___desc))->___U3CpassNamesU3Ek__BackingField), (void*)NULL);
		#endif
	}
};
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
struct CompiledPassInfoU5BU5D_tABD910C36DB41F35B2DDE8BEF16F9C5F7E02B755  : public RuntimeArray
{
	ALIGN_FIELD (8) CompiledPassInfo_t7434C596A1EA90A428DAECAA3FFB87314BC84615 m_Items[1];

	inline CompiledPassInfo_t7434C596A1EA90A428DAECAA3FFB87314BC84615 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CompiledPassInfo_t7434C596A1EA90A428DAECAA3FFB87314BC84615* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CompiledPassInfo_t7434C596A1EA90A428DAECAA3FFB87314BC84615 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___pass), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___resourceCreateList), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___resourceReleaseList), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___debugResourceReads), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___debugResourceWrites), (void*)NULL);
		#endif
	}
	inline CompiledPassInfo_t7434C596A1EA90A428DAECAA3FFB87314BC84615 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CompiledPassInfo_t7434C596A1EA90A428DAECAA3FFB87314BC84615* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CompiledPassInfo_t7434C596A1EA90A428DAECAA3FFB87314BC84615 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___pass), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___resourceCreateList), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___resourceReleaseList), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___debugResourceReads), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___debugResourceWrites), (void*)NULL);
		#endif
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m96CF8B0261344A0E317244BD54F5791CF714696F_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m991A891C21658C9C47CB8B484E5ECFDE6C3AE0E3_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* EqualityComparer_1_get_Default_mF554877B669658FD6449F84AE369214855D0BC40_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConditionalWeakTable_2_Add_mA45BB747BEE445F5A6D5ABC32B2070CAF5E9BE44_gshared (ConditionalWeakTable_2_t87BE12792DC61EC9AE17609EC1ACA0671B3F5605* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_m1813F8B95530437C7092DDA935E35C7836B38F17_gshared (KeyCollection_t8825842DD54072B7B712D2ED9E544D6466A502CB* __this, Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_mA7308CDBF1FC112C1E3F77662D817A714DD1F1D7_gshared (ValueCollection_tA38C30965161699273DF0F825A6FCB2896F6ECC7* __this, Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m6F594F43715DA5DE5ACC2303BDA19DD724C861BE_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, uint32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m3DE1FF6E5A5378D653C083D9AF241FFB3E90444F_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, uint32_t ___0_key, RuntimeObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t KeyValuePair_2_get_Key_mA52DA5B46E22917A435D0C0C421F21569A431CA6_gshared_inline (KeyValuePair_2_tAC06C9E6230AA7E6BDA2F07D910C3CBE2F36399B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mB90CBD7B74DBF864C2727E0B04302F988F5FABF8_gshared_inline (KeyValuePair_2_tAC06C9E6230AA7E6BDA2F07D910C3CBE2F36399B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m5124CA0DFD4B9968298DB45CEDF7F4B7A1F7DF83_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, uint32_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mAFDA1925650321D7DBD9CB992FD536B8FD2984AA_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, uint32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m6C8FADDE2343343BA522E3E1E6C70580D8A010C8_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mB53C3BFAA104E91A4E9330E29FF5D5A835526360_gshared (KeyValuePair_2_tAC06C9E6230AA7E6BDA2F07D910C3CBE2F36399B* __this, uint32_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m6BB73FBB588BB87421C1222CAE727AD52F96CAD4_gshared (Enumerator_t42FC023879D0041F2016540629807C485A03B1A7* __this, Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m653EB649AAE304236A63F8D4787676E5B277DE6C_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, KeyValuePair_2U5BU5D_t507CDA5432F6D20050CE99321FB52CEF9E776871* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m3155C05051C2D950E8390A1581F340907C222FD9_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConditionalWeakTable_2_TryGetValue_mA6697354DA1D2A76999FFDCC072C62AC5C364124_gshared (ConditionalWeakTable_2_t87BE12792DC61EC9AE17609EC1ACA0671B3F5605* __this, RuntimeObject* ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConditionalWeakTable_2_Remove_m51E45FAFE5B1D6E9FDA123477422367F1F215DE6_gshared (ConditionalWeakTable_2_t87BE12792DC61EC9AE17609EC1ACA0671B3F5605* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mBB5E8E07C506AF04E068339F513E02AF2B33FA8A_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m8EE916CE714A051B83BB108D77000536A67873D8_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m3CB345D53D5DCD58561453AD5780EBC51E8DA379_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, uint32_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m61654FF64053B954D62E586B09309D37EEBB9FB3_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, uint32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E_gshared (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m9ED6D04154B0287F36E8E29C5A49F8113F8D3ED1_gshared (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1* __this, Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5D02FAD2A12EA06505B72CAA8254714063C298F8_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m26848AD8E4E7357E68D80575255064B9DCE9A824_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1* EqualityComparer_1_get_Default_mB9A6897EE9C611611709E29230AB2F1D3D0BA6ED_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_m7DD9CC8A8D66F5E96F17286F215CD22CCCDD1DF7_gshared (KeyCollection_t6725DF5AC7475F617DDB9DA237871AD9FAB80D75* __this, Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_m4CA056E40F3696B0F634BE02C68CE9107C7598C8_gshared (ValueCollection_t0F016B1C5BEC58DAA0BA4B0A2699B389590BC305* __this, Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m84136518562E6B82BBE9137A49334CAA61460DCA_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mBC95B064A09BDE7AB5494475F83B35DC450DC81B_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 ___0_key, RuntimeObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 KeyValuePair_2_get_Key_m301F56606347366561A21E8CCD7F3ACB3FFE4D78_gshared_inline (KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m4F875C153A42456E08401E2C5B26FFC6685F8569_gshared_inline (KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mF175AF090385B15584E0E8CFC61400B38BC707D6_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m3CC589B84EA444155C4BFDB77E52E1F97E5D5D88_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m5334B4276CF45A2AFE4E47D4583C5430CFA23B92_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m96D7A05CA73361B4E4F4FB15107EAD3EBE3913A2_gshared (KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95* __this, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m6C95957B43BCC65A410E34547B3934C5A51E0B0D_gshared (Enumerator_tB7298ABA389EB46AD2BEB2E35D7FF51A6525D750* __this, Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mB170132B09124D49C071D29B61DF9425C9351DA9_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m897DFE92D2953E564DE90594548FCAFE0981A375_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m985506E79EE868501F78DDACCA0D0748751E5327_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m319F8531B63DE959FF23564DE3BB1B93B943B7CA_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m2387B91BA1614F8BD0037CF10888678FC0213FF0_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mD3382707B0A0977575551EF563A509A60695AD4F_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mAF356BB169B079A1D471EC0CA8AE4B2F71688A24_gshared (Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m46EF956EC790E0A966E0F753A35E6477A830A9EB_gshared (Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tD07CBC58F821582B79CB59B10264DC683DE3EE5C* EqualityComparer_1_get_Default_mA1371F43F9121608E1B210C692D2B369D8A50A37_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_m19F12184FDBF20710573CFF9C3770AB94DBE6A9C_gshared (KeyCollection_tACA314578A3D994C07972DC55AA432618B441372* __this, Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_m305A15289E31B26C8A80A58160C243C8821BA664_gshared (ValueCollection_t68C95977A6405D46453CCCFD51F7CB3B90A6832D* __this, Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_mD7E59D41D3CB5F61AFF25B5C53A8A7556423B6FB_gshared (Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574* __this, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mDDBDA53CDFACE36C7FD1E7B4752C9DD2FA6C319A_gshared (Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574* __this, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___0_key, int32_t ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 KeyValuePair_2_get_Key_m3F1B623E23CD7E9A1FFFD495EF0CEE82C430D4EF_gshared_inline (KeyValuePair_2_t5262B590CA16F81E0E225FA2B90314261B2B4BC6* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Value_m8C7FDFEFC87072A2142DBBB6F341652A8857E042_gshared_inline (KeyValuePair_2_t5262B590CA16F81E0E225FA2B90314261B2B4BC6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mAAA29FA753BE6A7A3F252BFCDADF2E7B1E39E5B9_gshared (Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574* __this, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___0_key, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m0EED74795AC6EBCE2805558743EF1A2923081043_gshared (Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574* __this, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m385C254CDB046A5C6153A6CD493BF6FA9B635174_gshared (Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m879862F68D99DBF1B2766591E42A4DFF9F04B269_gshared (KeyValuePair_2_t5262B590CA16F81E0E225FA2B90314261B2B4BC6* __this, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___0_key, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mACC33FACA80344A984A6FF9CDD77FB913FC95770_gshared (Enumerator_t0A06F4478B05078E52D4AB30BBAE414631F68E4D* __this, Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m6C7D7A3994E1AF2B496CF46D3241E2C1B316C0C5_gshared (Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574* __this, KeyValuePair_2U5BU5D_t95A94889CB658E7B4C12C188D2EA1791F827BF83* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mE72CB2721A922F741ACE0C77D97D739055413B23_gshared (Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m9442FD51C395B8D9FA2E215CC7B68D38C77F3602_gshared (Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m9E1F462B344142B23F9552FB7B668AB99F77AF4E_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0F7A078274F301B83DFC51191B3AFC763DE9C4D0_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mBD90BD13E7F35B1B12BA85812435EA249913948E_gshared (Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574* __this, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___0_key, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m6FF7037C5A1CA36EE58783F2EC82F436B2C0B34B_gshared (Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574* __this, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m8D60AC863C96C10D72CF68CD141FCBA732FD46E6_gshared (Dictionary_2_t9B2ADF59B0E83212023684CAE164D0B1C22E800C* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_mA4CE591380BC35E6CC2EBA67E6F850F43861AC7A_gshared (Dictionary_2_t9B2ADF59B0E83212023684CAE164D0B1C22E800C* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_m5E24C0D40B6B4A8B62A34E2CF3450DDEE02FBF1C_gshared (KeyCollection_t246CAF0F582ADDC11FEEFB70F34D8C26564B9B34* __this, Dictionary_2_t9B2ADF59B0E83212023684CAE164D0B1C22E800C* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_mEC3B5A87B099239EB6E319E7FFAEDDA5CCCF7768_gshared (ValueCollection_t10FF6A98B17BD862F8991138D7FD29AD4847FBF6* __this, Dictionary_2_t9B2ADF59B0E83212023684CAE164D0B1C22E800C* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m14F2AACB1148A28E415DC6A2F626529D33CF4081_gshared (Dictionary_2_t9B2ADF59B0E83212023684CAE164D0B1C22E800C* __this, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mF362D48543EA02D0A45372B9F046E2F683925E27_gshared (Dictionary_2_t9B2ADF59B0E83212023684CAE164D0B1C22E800C* __this, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___0_key, int32_t ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 KeyValuePair_2_get_Key_m54125E9738B585176CC0EF0FF6F5FA5CB959B3A2_gshared_inline (KeyValuePair_2_t68435994E8A66E579434AAA75502B7B6137A7B2A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Value_m080BF3202ED3064344C3E33E105A6DF813970AFE_gshared_inline (KeyValuePair_2_t68435994E8A66E579434AAA75502B7B6137A7B2A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m42BB2493CF86A5116013E5C273D1789DF840BB8A_gshared (Dictionary_2_t9B2ADF59B0E83212023684CAE164D0B1C22E800C* __this, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___0_key, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* EqualityComparer_1_get_Default_mC9B367997D70B8B5F9167227471B3D82603739F4_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m6A804AEF2E4FD1170A61FF9FFCA56E416B2616CA_gshared (Dictionary_2_t9B2ADF59B0E83212023684CAE164D0B1C22E800C* __this, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m1CDDC10642903669FAFA95934CA6570DAD09275F_gshared (Dictionary_2_t9B2ADF59B0E83212023684CAE164D0B1C22E800C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m68187F9608C286BCED8AC7DDD8F5B4DB66086C27_gshared (KeyValuePair_2_t68435994E8A66E579434AAA75502B7B6137A7B2A* __this, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___0_key, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mF3130D5466437808038B2FBA366C25885E5B3090_gshared (Enumerator_tEA5C0B380BD53EEE55544419AFADE6EF55B8CACD* __this, Dictionary_2_t9B2ADF59B0E83212023684CAE164D0B1C22E800C* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mEB41FEA60A71FE120DD5D5E13A18738A13218B49_gshared (Dictionary_2_t9B2ADF59B0E83212023684CAE164D0B1C22E800C* __this, KeyValuePair_2U5BU5D_tA37DB0B7611E442F177E3F568EB45718B30EB635* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m78FFECDBE292F246BA76292FFFFD313CEA60ED2E_gshared (Dictionary_2_t9B2ADF59B0E83212023684CAE164D0B1C22E800C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m3F6A64CF02E713FA37231BF5A3596FE09A3F4D0A_gshared (Dictionary_2_t9B2ADF59B0E83212023684CAE164D0B1C22E800C* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mAB33EE65CBA9AB18339463CAFEACB90CBB930305_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mC3916E2A31C5FA9D0BB4E2A929F5225B4205042F_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m02B4D3AA8D37064197DC0B6983574A325BAC93EF_gshared (Dictionary_2_t9B2ADF59B0E83212023684CAE164D0B1C22E800C* __this, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___0_key, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m8A90C6CB1027158417FA82AAB50347C32CA3C952_gshared (Dictionary_2_t9B2ADF59B0E83212023684CAE164D0B1C22E800C* __this, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mA1BB8D3256D977F60FE481752934D9DCA8F6FB11_gshared (Dictionary_2_tB13D0A847475988F23522A8642F7D24BA304F9B7* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m5285134AD51C479B44FCD327D6BC30B4C697168F_gshared (Dictionary_2_tB13D0A847475988F23522A8642F7D24BA304F9B7* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_mE415514D3AC6FBAF2C545195FDF96C3B2D758E6F_gshared (KeyCollection_tAE0C48201AB6D92D5AD1D458816B2B13DC9FF903* __this, Dictionary_2_tB13D0A847475988F23522A8642F7D24BA304F9B7* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_m71F5C062114C4C507B074B3FBF6657C7B2372AAC_gshared (ValueCollection_tDAA54478D6690BCDC9E7745F0B5D0265360309EC* __this, Dictionary_2_tB13D0A847475988F23522A8642F7D24BA304F9B7* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m29258E04D9D383D9736BDB10172A444E7DBAB192_gshared (Dictionary_2_tB13D0A847475988F23522A8642F7D24BA304F9B7* __this, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m5B684CF3D9C1AD1A62240289DFF23940617D968D_gshared (Dictionary_2_tB13D0A847475988F23522A8642F7D24BA304F9B7* __this, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___0_key, RuntimeObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 KeyValuePair_2_get_Key_m204134D5294D0652A7BEC9251C7BDD29B507542A_gshared_inline (KeyValuePair_2_t5EA39A38B18A7FBA9D70D487DBE55714255FAAA6* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC161A41DE956DE045D4BE7D7D3FAA6B97A774C4A_gshared_inline (KeyValuePair_2_t5EA39A38B18A7FBA9D70D487DBE55714255FAAA6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m77C09F1138342291C84F2D1884BC97F0928D029D_gshared (Dictionary_2_tB13D0A847475988F23522A8642F7D24BA304F9B7* __this, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mB168E67A05948E94B0C8CB8AF10FDFF837CF4013_gshared (Dictionary_2_tB13D0A847475988F23522A8642F7D24BA304F9B7* __this, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m62991249DE42FC4B6D2418126CC96D6B756BB68D_gshared (Dictionary_2_tB13D0A847475988F23522A8642F7D24BA304F9B7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mD81341F5971E9F53B692B9978CD1792E20832852_gshared (KeyValuePair_2_t5EA39A38B18A7FBA9D70D487DBE55714255FAAA6* __this, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mDFD86A525353C911DD4C6574B1CF11812E7C73B1_gshared (Enumerator_t802BFC19A53773B2AE8F0F44521FB90B06501577* __this, Dictionary_2_tB13D0A847475988F23522A8642F7D24BA304F9B7* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mCE62830A4D7BD2F63E2FF27E28C3F5312BC0B99A_gshared (Dictionary_2_tB13D0A847475988F23522A8642F7D24BA304F9B7* __this, KeyValuePair_2U5BU5D_t18981E8B4DA835E5A8BEC453FB6196F9A462D869* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m91116B9124A217B4F424E7D288FD4327D8960AEB_gshared (Dictionary_2_tB13D0A847475988F23522A8642F7D24BA304F9B7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m8F06B3457A7CAD0E3D71C171C52BC704E8740A77_gshared (Dictionary_2_tB13D0A847475988F23522A8642F7D24BA304F9B7* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mF41F8A34CA256FD60A7E93695410FEEE6BD40507_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m444B00B363568ADD78EBA9E89C76E1FB278B4FFE_gshared (Dictionary_2_tB13D0A847475988F23522A8642F7D24BA304F9B7* __this, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m90F1C333816C1CD050D6E5E14CA9440EB0B4696D_gshared (Dictionary_2_tB13D0A847475988F23522A8642F7D24BA304F9B7* __this, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m4FDDF922AD23F6334537188F4859DCE5A160B2EE_gshared (Dictionary_2_t3E3BA8CACCC3C085000EC19576E2BA73F8CFC78E* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m986E984D6AA404BAD85BD3C9932842181968D3F7_gshared (Dictionary_2_t3E3BA8CACCC3C085000EC19576E2BA73F8CFC78E* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t5849F328832B91CA688EA057CFD71225D81B0F72* EqualityComparer_1_get_Default_m74879556CBF575D38F11DBF18327D9D848353BD3_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_mD675E05CD9576AB05C09E1699B03FD3C001DD344_gshared (KeyCollection_tF4502228DC2899311EA0532D7A002E5AB417BCD4* __this, Dictionary_2_t3E3BA8CACCC3C085000EC19576E2BA73F8CFC78E* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_mD96C2708EA68241613646B0D373EEDFE0057EF7B_gshared (ValueCollection_t5B8AB9BA0BFC036C0FEFE33B4C8681FB06730C8E* __this, Dictionary_2_t3E3BA8CACCC3C085000EC19576E2BA73F8CFC78E* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m72AFEEA7170985EA6BB4D32F877862DCB57F10C4_gshared (Dictionary_2_t3E3BA8CACCC3C085000EC19576E2BA73F8CFC78E* __this, SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m5E93552E2B36C4BB1A0810A7CAD3AF667C49C0B0_gshared (Dictionary_2_t3E3BA8CACCC3C085000EC19576E2BA73F8CFC78E* __this, SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574 ___0_key, RuntimeObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574 KeyValuePair_2_get_Key_m68ECE6EFA3B43F6CABC5DA63109B69C09B5D3C48_gshared_inline (KeyValuePair_2_t4D486866736280C7A079662D170F5444C27E50C6* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mBC7C1BACDBEBA44E8D7BFD8D579336DCC37D6BB5_gshared_inline (KeyValuePair_2_t4D486866736280C7A079662D170F5444C27E50C6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mBD7BFFF74C1DF70C8D47B62E3E603E9F2EEAC75D_gshared (Dictionary_2_t3E3BA8CACCC3C085000EC19576E2BA73F8CFC78E* __this, SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574 ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mDB0DF91174BECF8AAAF69C5F316F2E0CE8D34437_gshared (Dictionary_2_t3E3BA8CACCC3C085000EC19576E2BA73F8CFC78E* __this, SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m17C786AA41BA723BD4B79D2C514A10CADA7C7087_gshared (Dictionary_2_t3E3BA8CACCC3C085000EC19576E2BA73F8CFC78E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m155BEE8D2B58C2C7B35E66C6DE12740FE1434548_gshared (KeyValuePair_2_t4D486866736280C7A079662D170F5444C27E50C6* __this, SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574 ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m9F056B1689A35FBDA1A91E631D84E419FDF7C2CF_gshared (Enumerator_t45CAC33CD0C08E57C834C0DE235FD5DB1E6F858A* __this, Dictionary_2_t3E3BA8CACCC3C085000EC19576E2BA73F8CFC78E* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m28371CA5037D6161F36580F515048D6BA1EF7D79_gshared (Dictionary_2_t3E3BA8CACCC3C085000EC19576E2BA73F8CFC78E* __this, KeyValuePair_2U5BU5D_t483C9A7E1529730398DA7E05E2540845C629FED3* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mE7AB2713437A1EFA36A91AC3A3D273E3FD2D4B40_gshared (Dictionary_2_t3E3BA8CACCC3C085000EC19576E2BA73F8CFC78E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m8E9C5807A9F45205E0ECC9BAD37DCE1733F12691_gshared (Dictionary_2_t3E3BA8CACCC3C085000EC19576E2BA73F8CFC78E* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mBBD6280B29E6F5958D56722738A71ED6BADB9612_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mA5CDA4864C431CF2EA8528467544E9D8DF449F82_gshared (Dictionary_2_t3E3BA8CACCC3C085000EC19576E2BA73F8CFC78E* __this, SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574 ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m0F325215C221CB0DD78B9BB89D5963BF1D1B6761_gshared (Dictionary_2_t3E3BA8CACCC3C085000EC19576E2BA73F8CFC78E* __this, SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574 ___0_key, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DynamicArray_1_set_size_m3409BF64253E0042A1047263A1B2BE4942C6F932_gshared_inline (DynamicArray_1_t7C64F5A74B7BA6F6B3589A766CADE3F59C6C7BCA* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DynamicArray_1_set_version_m39DBA15EA5D9ECF318BEA5E7A73A0708D4CCCD80_gshared_inline (DynamicArray_1_t7C64F5A74B7BA6F6B3589A766CADE3F59C6C7BCA* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicArray_1_Reserve_m18FB3721016A3E67DED9CC64375BDDBB1EF2D3D8_gshared (DynamicArray_1_t7C64F5A74B7BA6F6B3589A766CADE3F59C6C7BCA* __this, int32_t ___0_newCapacity, bool ___1_keepContent, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicArray_1_BumpVersion_m5D8E2E53FF33FE34A4FA46226EE9CF56B85B002E_gshared (DynamicArray_1_t7C64F5A74B7BA6F6B3589A766CADE3F59C6C7BCA* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DynamicArray_1_get_size_m1B00C20A8CC4D62269585D16A58425D3F258836F_gshared_inline (DynamicArray_1_t7C64F5A74B7BA6F6B3589A766CADE3F59C6C7BCA* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DynamicArray_1_get_version_mAD7540A9CABCD175B64E344ED8CCCA67497E7D62_gshared_inline (DynamicArray_1_t7C64F5A74B7BA6F6B3589A766CADE3F59C6C7BCA* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DynamicArray_1_set_size_mFDBE699A74F4921E332C4199F04F64D5F77B67AD_gshared_inline (DynamicArray_1_t32FB886A5D922EE301E17A95EB958B1FA6B53A59* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DynamicArray_1_set_version_mFC9E3C8D3C2F91995DADCDF989156C60112C0BF4_gshared_inline (DynamicArray_1_t32FB886A5D922EE301E17A95EB958B1FA6B53A59* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicArray_1_Reserve_m485927978DE346D5A12D1F1893011FB796F0AAD6_gshared (DynamicArray_1_t32FB886A5D922EE301E17A95EB958B1FA6B53A59* __this, int32_t ___0_newCapacity, bool ___1_keepContent, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicArray_1_BumpVersion_m9AC29E691E8EDFBC44888CD38AB982B3F1EEF675_gshared (DynamicArray_1_t32FB886A5D922EE301E17A95EB958B1FA6B53A59* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DynamicArray_1_get_size_m2D85CC818F77A4096E9474CA56125F7ED642F048_gshared_inline (DynamicArray_1_t32FB886A5D922EE301E17A95EB958B1FA6B53A59* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DynamicArray_1_get_version_m03799785BC334E5B1D8EB06A5F254190FED07EFF_gshared_inline (DynamicArray_1_t32FB886A5D922EE301E17A95EB958B1FA6B53A59* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DynamicArray_1_set_size_m352FBC4FC46492A70156C4D2EDA5F35FEAFCE206_gshared_inline (DynamicArray_1_tA7E05F444A8E75C3FD24B4EA81F57EA44E6D0F09* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DynamicArray_1_set_version_mBC13FCC0C9B7D12CF0E4B483A9FE71A993E32CAD_gshared_inline (DynamicArray_1_tA7E05F444A8E75C3FD24B4EA81F57EA44E6D0F09* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicArray_1_Reserve_m0A0A832CA3A65B02216DA45E5B6732C2FDC1CB19_gshared (DynamicArray_1_tA7E05F444A8E75C3FD24B4EA81F57EA44E6D0F09* __this, int32_t ___0_newCapacity, bool ___1_keepContent, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicArray_1_BumpVersion_m748232578BFEB3E8432F28D020973684DB67DCF0_gshared (DynamicArray_1_tA7E05F444A8E75C3FD24B4EA81F57EA44E6D0F09* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DynamicArray_1_get_size_mDB3BA7CAAD59744057F0A5340186390AB7BCADD4_gshared_inline (DynamicArray_1_tA7E05F444A8E75C3FD24B4EA81F57EA44E6D0F09* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DynamicArray_1_get_version_mE13995AAB373C4A2F1E9761CF4DB390AD2636FA4_gshared_inline (DynamicArray_1_tA7E05F444A8E75C3FD24B4EA81F57EA44E6D0F09* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* EqualityComparer_1_CreateComparer_m64D3D774E7DAF5FC0206DC26D9BA53BF70F1F93B_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_CreateComparer_mD2FA619307513193746FBEB5AE522FB54E21B634_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1* EqualityComparer_1_CreateComparer_m6D99876F3A0CC92388F04FA521AFA20EDAF66D25_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tD07CBC58F821582B79CB59B10264DC683DE3EE5C* EqualityComparer_1_CreateComparer_m623688232473A6055EEF64837BC23D990D8623F6_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_CreateComparer_m432C82F7354C37E610794C1DA866DFA7DAC9C35E_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* EqualityComparer_1_CreateComparer_m90CFBBC1492097465600B56ECF620CA25F1C6A73_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t5849F328832B91CA688EA057CFD71225D81B0F72* EqualityComparer_1_CreateComparer_m5D2542ADFFD3DA0F7BD1A6E60FD15B6C3D22A4CF_gshared (const RuntimeMethod* method) ;

inline void Dictionary_2__ctor_m96CF8B0261344A0E317244BD54F5791CF714696F (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m96CF8B0261344A0E317244BD54F5791CF714696F_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97 (int32_t ___0_argument, const RuntimeMethod* method) ;
inline int32_t Dictionary_2_Initialize_m991A891C21658C9C47CB8B484E5ECFDE6C3AE0E3 (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_m991A891C21658C9C47CB8B484E5ECFDE6C3AE0E3_gshared)(__this, ___0_capacity, method);
}
inline EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* EqualityComparer_1_get_Default_mF554877B669658FD6449F84AE369214855D0BC40_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mF554877B669658FD6449F84AE369214855D0BC40_gshared_inline)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F (const RuntimeMethod* method) ;
inline void ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7 (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* __this, RuntimeObject* ___0_key, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858*, RuntimeObject*, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*, const RuntimeMethod*))ConditionalWeakTable_2_Add_mA45BB747BEE445F5A6D5ABC32B2070CAF5E9BE44_gshared)(__this, ___0_key, ___1_value, method);
}
inline void KeyCollection__ctor_m1813F8B95530437C7092DDA935E35C7836B38F17 (KeyCollection_t8825842DD54072B7B712D2ED9E544D6466A502CB* __this, Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_t8825842DD54072B7B712D2ED9E544D6466A502CB*, Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A*, const RuntimeMethod*))KeyCollection__ctor_m1813F8B95530437C7092DDA935E35C7836B38F17_gshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_mA7308CDBF1FC112C1E3F77662D817A714DD1F1D7 (ValueCollection_tA38C30965161699273DF0F825A6FCB2896F6ECC7* __this, Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_tA38C30965161699273DF0F825A6FCB2896F6ECC7*, Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A*, const RuntimeMethod*))ValueCollection__ctor_mA7308CDBF1FC112C1E3F77662D817A714DD1F1D7_gshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_FindEntry_m6F594F43715DA5DE5ACC2303BDA19DD724C861BE (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, uint32_t ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A*, uint32_t, const RuntimeMethod*))Dictionary_2_FindEntry_m6F594F43715DA5DE5ACC2303BDA19DD724C861BE_gshared)(__this, ___0_key, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7 (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
inline bool Dictionary_2_TryInsert_m3DE1FF6E5A5378D653C083D9AF241FFB3E90444F (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, uint32_t ___0_key, RuntimeObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A*, uint32_t, RuntimeObject*, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_m3DE1FF6E5A5378D653C083D9AF241FFB3E90444F_gshared)(__this, ___0_key, ___1_value, ___2_behavior, method);
}
inline uint32_t KeyValuePair_2_get_Key_mA52DA5B46E22917A435D0C0C421F21569A431CA6_inline (KeyValuePair_2_tAC06C9E6230AA7E6BDA2F07D910C3CBE2F36399B* __this, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (KeyValuePair_2_tAC06C9E6230AA7E6BDA2F07D910C3CBE2F36399B*, const RuntimeMethod*))KeyValuePair_2_get_Key_mA52DA5B46E22917A435D0C0C421F21569A431CA6_gshared_inline)(__this, method);
}
inline RuntimeObject* KeyValuePair_2_get_Value_mB90CBD7B74DBF864C2727E0B04302F988F5FABF8_inline (KeyValuePair_2_tAC06C9E6230AA7E6BDA2F07D910C3CBE2F36399B* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_tAC06C9E6230AA7E6BDA2F07D910C3CBE2F36399B*, const RuntimeMethod*))KeyValuePair_2_get_Value_mB90CBD7B74DBF864C2727E0B04302F988F5FABF8_gshared_inline)(__this, method);
}
inline void Dictionary_2_Add_m5124CA0DFD4B9968298DB45CEDF7F4B7A1F7DF83 (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, uint32_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A*, uint32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Add_m5124CA0DFD4B9968298DB45CEDF7F4B7A1F7DF83_gshared)(__this, ___0_key, ___1_value, method);
}
inline EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_gshared_inline)(method);
}
inline bool Dictionary_2_Remove_mAFDA1925650321D7DBD9CB992FD536B8FD2984AA (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, uint32_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A*, uint32_t, const RuntimeMethod*))Dictionary_2_Remove_mAFDA1925650321D7DBD9CB992FD536B8FD2984AA_gshared)(__this, ___0_key, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC (int32_t ___0_argument, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F (const RuntimeMethod* method) ;
inline int32_t Dictionary_2_get_Count_m6C8FADDE2343343BA522E3E1E6C70580D8A010C8 (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A*, const RuntimeMethod*))Dictionary_2_get_Count_m6C8FADDE2343343BA522E3E1E6C70580D8A010C8_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA (int32_t ___0_resource, const RuntimeMethod* method) ;
inline void KeyValuePair_2__ctor_mB53C3BFAA104E91A4E9330E29FF5D5A835526360 (KeyValuePair_2_tAC06C9E6230AA7E6BDA2F07D910C3CBE2F36399B* __this, uint32_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_tAC06C9E6230AA7E6BDA2F07D910C3CBE2F36399B*, uint32_t, RuntimeObject*, const RuntimeMethod*))KeyValuePair_2__ctor_mB53C3BFAA104E91A4E9330E29FF5D5A835526360_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_m6BB73FBB588BB87421C1222CAE727AD52F96CAD4 (Enumerator_t42FC023879D0041F2016540629807C485A03B1A7* __this, Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t42FC023879D0041F2016540629807C485A03B1A7*, Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A*, int32_t, const RuntimeMethod*))Enumerator__ctor_m6BB73FBB588BB87421C1222CAE727AD52F96CAD4_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, RuntimeObject* ___1_value, Type_t* ___2_type, const RuntimeMethod* method) ;
inline void Dictionary_2_CopyTo_m653EB649AAE304236A63F8D4787676E5B277DE6C (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, KeyValuePair_2U5BU5D_t507CDA5432F6D20050CE99321FB52CEF9E776871* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A*, KeyValuePair_2U5BU5D_t507CDA5432F6D20050CE99321FB52CEF9E776871*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_m653EB649AAE304236A63F8D4787676E5B277DE6C_gshared)(__this, ___0_array, ___1_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC (uint32_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472 (int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5 (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
inline void Dictionary_2_Resize_m3155C05051C2D950E8390A1581F340907C222FD9 (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A*, const RuntimeMethod*))Dictionary_2_Resize_m3155C05051C2D950E8390A1581F340907C222FD9_gshared)(__this, method);
}
inline bool ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* __this, RuntimeObject* ___0_key, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858*, RuntimeObject*, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37**, const RuntimeMethod*))ConditionalWeakTable_2_TryGetValue_mA6697354DA1D2A76999FFDCC072C62AC5C364124_gshared)(__this, ___0_key, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, Type_t* ___1_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16 (int32_t ___0_resource, const RuntimeMethod* method) ;
inline bool ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* __this, RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858*, RuntimeObject*, const RuntimeMethod*))ConditionalWeakTable_2_Remove_m51E45FAFE5B1D6E9FDA123477422367F1F215DE6_gshared)(__this, ___0_key, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9 (int32_t ___0_oldSize, const RuntimeMethod* method) ;
inline void Dictionary_2_Resize_mBB5E8E07C506AF04E068339F513E02AF2B33FA8A (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_mBB5E8E07C506AF04E068339F513E02AF2B33FA8A_gshared)(__this, ___0_newSize, ___1_forceNewHashCodes, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F (RuntimeArray* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC (RuntimeArray* __this, int32_t ___0_dimension, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57 (RuntimeArray* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58 (const RuntimeMethod* method) ;
inline bool Dictionary_2_IsCompatibleKey_m8EE916CE714A051B83BB108D77000536A67873D8 (RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Dictionary_2_IsCompatibleKey_m8EE916CE714A051B83BB108D77000536A67873D8_gshared)(___0_key, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49_gshared)(___0_value, ___1_argName, method);
}
inline void Dictionary_2_set_Item_m3CB345D53D5DCD58561453AD5780EBC51E8DA379 (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, uint32_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A*, uint32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2_set_Item_m3CB345D53D5DCD58561453AD5780EBC51E8DA379_gshared)(__this, ___0_key, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910 (RuntimeObject* ___0_value, Type_t* ___1_targetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982 (RuntimeObject* ___0_key, Type_t* ___1_targetType, const RuntimeMethod* method) ;
inline bool Dictionary_2_ContainsKey_m61654FF64053B954D62E586B09309D37EEBB9FB3 (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, uint32_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A*, uint32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_m61654FF64053B954D62E586B09309D37EEBB9FB3_gshared)(__this, ___0_key, method);
}
inline void KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, const RuntimeMethod*))KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E_gshared)((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_m9ED6D04154B0287F36E8E29C5A49F8113F8D3ED1 (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1* __this, Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*, Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, int32_t, const RuntimeMethod*))Enumerator__ctor_m9ED6D04154B0287F36E8E29C5A49F8113F8D3ED1_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
inline void Dictionary_2__ctor_m5D02FAD2A12EA06505B72CAA8254714063C298F8 (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m5D02FAD2A12EA06505B72CAA8254714063C298F8_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline int32_t Dictionary_2_Initialize_m26848AD8E4E7357E68D80575255064B9DCE9A824 (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_m26848AD8E4E7357E68D80575255064B9DCE9A824_gshared)(__this, ___0_capacity, method);
}
inline EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1* EqualityComparer_1_get_Default_mB9A6897EE9C611611709E29230AB2F1D3D0BA6ED_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mB9A6897EE9C611611709E29230AB2F1D3D0BA6ED_gshared_inline)(method);
}
inline void KeyCollection__ctor_m7DD9CC8A8D66F5E96F17286F215CD22CCCDD1DF7 (KeyCollection_t6725DF5AC7475F617DDB9DA237871AD9FAB80D75* __this, Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_t6725DF5AC7475F617DDB9DA237871AD9FAB80D75*, Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318*, const RuntimeMethod*))KeyCollection__ctor_m7DD9CC8A8D66F5E96F17286F215CD22CCCDD1DF7_gshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_m4CA056E40F3696B0F634BE02C68CE9107C7598C8 (ValueCollection_t0F016B1C5BEC58DAA0BA4B0A2699B389590BC305* __this, Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_t0F016B1C5BEC58DAA0BA4B0A2699B389590BC305*, Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318*, const RuntimeMethod*))ValueCollection__ctor_m4CA056E40F3696B0F634BE02C68CE9107C7598C8_gshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_FindEntry_m84136518562E6B82BBE9137A49334CAA61460DCA (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318*, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31, const RuntimeMethod*))Dictionary_2_FindEntry_m84136518562E6B82BBE9137A49334CAA61460DCA_gshared)(__this, ___0_key, method);
}
inline bool Dictionary_2_TryInsert_mBC95B064A09BDE7AB5494475F83B35DC450DC81B (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 ___0_key, RuntimeObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318*, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31, RuntimeObject*, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_mBC95B064A09BDE7AB5494475F83B35DC450DC81B_gshared)(__this, ___0_key, ___1_value, ___2_behavior, method);
}
inline CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 KeyValuePair_2_get_Key_m301F56606347366561A21E8CCD7F3ACB3FFE4D78_inline (KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95* __this, const RuntimeMethod* method)
{
	return ((  CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 (*) (KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95*, const RuntimeMethod*))KeyValuePair_2_get_Key_m301F56606347366561A21E8CCD7F3ACB3FFE4D78_gshared_inline)(__this, method);
}
inline RuntimeObject* KeyValuePair_2_get_Value_m4F875C153A42456E08401E2C5B26FFC6685F8569_inline (KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95*, const RuntimeMethod*))KeyValuePair_2_get_Value_m4F875C153A42456E08401E2C5B26FFC6685F8569_gshared_inline)(__this, method);
}
inline void Dictionary_2_Add_mF175AF090385B15584E0E8CFC61400B38BC707D6 (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318*, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Add_mF175AF090385B15584E0E8CFC61400B38BC707D6_gshared)(__this, ___0_key, ___1_value, method);
}
inline bool Dictionary_2_Remove_m3CC589B84EA444155C4BFDB77E52E1F97E5D5D88 (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318*, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31, const RuntimeMethod*))Dictionary_2_Remove_m3CC589B84EA444155C4BFDB77E52E1F97E5D5D88_gshared)(__this, ___0_key, method);
}
inline int32_t Dictionary_2_get_Count_m5334B4276CF45A2AFE4E47D4583C5430CFA23B92 (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318*, const RuntimeMethod*))Dictionary_2_get_Count_m5334B4276CF45A2AFE4E47D4583C5430CFA23B92_gshared)(__this, method);
}
inline void KeyValuePair_2__ctor_m96D7A05CA73361B4E4F4FB15107EAD3EBE3913A2 (KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95* __this, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95*, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31, RuntimeObject*, const RuntimeMethod*))KeyValuePair_2__ctor_m96D7A05CA73361B4E4F4FB15107EAD3EBE3913A2_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_m6C95957B43BCC65A410E34547B3934C5A51E0B0D (Enumerator_tB7298ABA389EB46AD2BEB2E35D7FF51A6525D750* __this, Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tB7298ABA389EB46AD2BEB2E35D7FF51A6525D750*, Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318*, int32_t, const RuntimeMethod*))Enumerator__ctor_m6C95957B43BCC65A410E34547B3934C5A51E0B0D_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
inline void Dictionary_2_CopyTo_mB170132B09124D49C071D29B61DF9425C9351DA9 (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318*, KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_mB170132B09124D49C071D29B61DF9425C9351DA9_gshared)(__this, ___0_array, ___1_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CachedCodeEntryKey_GetHashCode_m253B53C100F840B987A487020F02184019D776DE (CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31* __this, const RuntimeMethod* method) ;
inline void Dictionary_2_Resize_m897DFE92D2953E564DE90594548FCAFE0981A375 (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318*, const RuntimeMethod*))Dictionary_2_Resize_m897DFE92D2953E564DE90594548FCAFE0981A375_gshared)(__this, method);
}
inline void Dictionary_2_Resize_m985506E79EE868501F78DDACCA0D0748751E5327 (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_m985506E79EE868501F78DDACCA0D0748751E5327_gshared)(__this, ___0_newSize, ___1_forceNewHashCodes, method);
}
inline bool Dictionary_2_IsCompatibleKey_m319F8531B63DE959FF23564DE3BB1B93B943B7CA (RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Dictionary_2_IsCompatibleKey_m319F8531B63DE959FF23564DE3BB1B93B943B7CA_gshared)(___0_key, method);
}
inline void Dictionary_2_set_Item_m2387B91BA1614F8BD0037CF10888678FC0213FF0 (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318*, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31, RuntimeObject*, const RuntimeMethod*))Dictionary_2_set_Item_m2387B91BA1614F8BD0037CF10888678FC0213FF0_gshared)(__this, ___0_key, ___1_value, method);
}
inline bool Dictionary_2_ContainsKey_mD3382707B0A0977575551EF563A509A60695AD4F (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318*, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31, const RuntimeMethod*))Dictionary_2_ContainsKey_mD3382707B0A0977575551EF563A509A60695AD4F_gshared)(__this, ___0_key, method);
}
inline void Dictionary_2__ctor_mAF356BB169B079A1D471EC0CA8AE4B2F71688A24 (Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_mAF356BB169B079A1D471EC0CA8AE4B2F71688A24_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline int32_t Dictionary_2_Initialize_m46EF956EC790E0A966E0F753A35E6477A830A9EB (Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_m46EF956EC790E0A966E0F753A35E6477A830A9EB_gshared)(__this, ___0_capacity, method);
}
inline EqualityComparer_1_tD07CBC58F821582B79CB59B10264DC683DE3EE5C* EqualityComparer_1_get_Default_mA1371F43F9121608E1B210C692D2B369D8A50A37_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tD07CBC58F821582B79CB59B10264DC683DE3EE5C* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mA1371F43F9121608E1B210C692D2B369D8A50A37_gshared_inline)(method);
}
inline void KeyCollection__ctor_m19F12184FDBF20710573CFF9C3770AB94DBE6A9C (KeyCollection_tACA314578A3D994C07972DC55AA432618B441372* __this, Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_tACA314578A3D994C07972DC55AA432618B441372*, Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574*, const RuntimeMethod*))KeyCollection__ctor_m19F12184FDBF20710573CFF9C3770AB94DBE6A9C_gshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_m305A15289E31B26C8A80A58160C243C8821BA664 (ValueCollection_t68C95977A6405D46453CCCFD51F7CB3B90A6832D* __this, Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_t68C95977A6405D46453CCCFD51F7CB3B90A6832D*, Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574*, const RuntimeMethod*))ValueCollection__ctor_m305A15289E31B26C8A80A58160C243C8821BA664_gshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_FindEntry_mD7E59D41D3CB5F61AFF25B5C53A8A7556423B6FB (Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574* __this, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574*, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814, const RuntimeMethod*))Dictionary_2_FindEntry_mD7E59D41D3CB5F61AFF25B5C53A8A7556423B6FB_gshared)(__this, ___0_key, method);
}
inline bool Dictionary_2_TryInsert_mDDBDA53CDFACE36C7FD1E7B4752C9DD2FA6C319A (Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574* __this, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___0_key, int32_t ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574*, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814, int32_t, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_mDDBDA53CDFACE36C7FD1E7B4752C9DD2FA6C319A_gshared)(__this, ___0_key, ___1_value, ___2_behavior, method);
}
inline ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 KeyValuePair_2_get_Key_m3F1B623E23CD7E9A1FFFD495EF0CEE82C430D4EF_inline (KeyValuePair_2_t5262B590CA16F81E0E225FA2B90314261B2B4BC6* __this, const RuntimeMethod* method)
{
	return ((  ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 (*) (KeyValuePair_2_t5262B590CA16F81E0E225FA2B90314261B2B4BC6*, const RuntimeMethod*))KeyValuePair_2_get_Key_m3F1B623E23CD7E9A1FFFD495EF0CEE82C430D4EF_gshared_inline)(__this, method);
}
inline int32_t KeyValuePair_2_get_Value_m8C7FDFEFC87072A2142DBBB6F341652A8857E042_inline (KeyValuePair_2_t5262B590CA16F81E0E225FA2B90314261B2B4BC6* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyValuePair_2_t5262B590CA16F81E0E225FA2B90314261B2B4BC6*, const RuntimeMethod*))KeyValuePair_2_get_Value_m8C7FDFEFC87072A2142DBBB6F341652A8857E042_gshared_inline)(__this, method);
}
inline void Dictionary_2_Add_mAAA29FA753BE6A7A3F252BFCDADF2E7B1E39E5B9 (Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574* __this, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___0_key, int32_t ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574*, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814, int32_t, const RuntimeMethod*))Dictionary_2_Add_mAAA29FA753BE6A7A3F252BFCDADF2E7B1E39E5B9_gshared)(__this, ___0_key, ___1_value, method);
}
inline EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_gshared_inline)(method);
}
inline bool Dictionary_2_Remove_m0EED74795AC6EBCE2805558743EF1A2923081043 (Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574* __this, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574*, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814, const RuntimeMethod*))Dictionary_2_Remove_m0EED74795AC6EBCE2805558743EF1A2923081043_gshared)(__this, ___0_key, method);
}
inline int32_t Dictionary_2_get_Count_m385C254CDB046A5C6153A6CD493BF6FA9B635174 (Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574*, const RuntimeMethod*))Dictionary_2_get_Count_m385C254CDB046A5C6153A6CD493BF6FA9B635174_gshared)(__this, method);
}
inline void KeyValuePair_2__ctor_m879862F68D99DBF1B2766591E42A4DFF9F04B269 (KeyValuePair_2_t5262B590CA16F81E0E225FA2B90314261B2B4BC6* __this, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___0_key, int32_t ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t5262B590CA16F81E0E225FA2B90314261B2B4BC6*, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814, int32_t, const RuntimeMethod*))KeyValuePair_2__ctor_m879862F68D99DBF1B2766591E42A4DFF9F04B269_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_mACC33FACA80344A984A6FF9CDD77FB913FC95770 (Enumerator_t0A06F4478B05078E52D4AB30BBAE414631F68E4D* __this, Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t0A06F4478B05078E52D4AB30BBAE414631F68E4D*, Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574*, int32_t, const RuntimeMethod*))Enumerator__ctor_mACC33FACA80344A984A6FF9CDD77FB913FC95770_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
inline void Dictionary_2_CopyTo_m6C7D7A3994E1AF2B496CF46D3241E2C1B316C0C5 (Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574* __this, KeyValuePair_2U5BU5D_t95A94889CB658E7B4C12C188D2EA1791F827BF83* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574*, KeyValuePair_2U5BU5D_t95A94889CB658E7B4C12C188D2EA1791F827BF83*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_m6C7D7A3994E1AF2B496CF46D3241E2C1B316C0C5_gshared)(__this, ___0_array, ___1_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueType_GetHashCode_m3B47C72EA1FA846D9B0DFF3C444AB2BFA22CF3CE (RuntimeObject* __this, const RuntimeMethod* method) ;
inline void Dictionary_2_Resize_mE72CB2721A922F741ACE0C77D97D739055413B23 (Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574*, const RuntimeMethod*))Dictionary_2_Resize_mE72CB2721A922F741ACE0C77D97D739055413B23_gshared)(__this, method);
}
inline void Dictionary_2_Resize_m9442FD51C395B8D9FA2E215CC7B68D38C77F3602 (Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_m9442FD51C395B8D9FA2E215CC7B68D38C77F3602_gshared)(__this, ___0_newSize, ___1_forceNewHashCodes, method);
}
inline bool Dictionary_2_IsCompatibleKey_m9E1F462B344142B23F9552FB7B668AB99F77AF4E (RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Dictionary_2_IsCompatibleKey_m9E1F462B344142B23F9552FB7B668AB99F77AF4E_gshared)(___0_key, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0F7A078274F301B83DFC51191B3AFC763DE9C4D0 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0F7A078274F301B83DFC51191B3AFC763DE9C4D0_gshared)(___0_value, ___1_argName, method);
}
inline void Dictionary_2_set_Item_mBD90BD13E7F35B1B12BA85812435EA249913948E (Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574* __this, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___0_key, int32_t ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574*, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814, int32_t, const RuntimeMethod*))Dictionary_2_set_Item_mBD90BD13E7F35B1B12BA85812435EA249913948E_gshared)(__this, ___0_key, ___1_value, method);
}
inline bool Dictionary_2_ContainsKey_m6FF7037C5A1CA36EE58783F2EC82F436B2C0B34B (Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574* __this, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574*, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814, const RuntimeMethod*))Dictionary_2_ContainsKey_m6FF7037C5A1CA36EE58783F2EC82F436B2C0B34B_gshared)(__this, ___0_key, method);
}
inline void Dictionary_2__ctor_m8D60AC863C96C10D72CF68CD141FCBA732FD46E6 (Dictionary_2_t9B2ADF59B0E83212023684CAE164D0B1C22E800C* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9B2ADF59B0E83212023684CAE164D0B1C22E800C*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m8D60AC863C96C10D72CF68CD141FCBA732FD46E6_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline int32_t Dictionary_2_Initialize_mA4CE591380BC35E6CC2EBA67E6F850F43861AC7A (Dictionary_2_t9B2ADF59B0E83212023684CAE164D0B1C22E800C* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t9B2ADF59B0E83212023684CAE164D0B1C22E800C*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_mA4CE591380BC35E6CC2EBA67E6F850F43861AC7A_gshared)(__this, ___0_capacity, method);
}
inline void KeyCollection__ctor_m5E24C0D40B6B4A8B62A34E2CF3450DDEE02FBF1C (KeyCollection_t246CAF0F582ADDC11FEEFB70F34D8C26564B9B34* __this, Dictionary_2_t9B2ADF59B0E83212023684CAE164D0B1C22E800C* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_t246CAF0F582ADDC11FEEFB70F34D8C26564B9B34*, Dictionary_2_t9B2ADF59B0E83212023684CAE164D0B1C22E800C*, const RuntimeMethod*))KeyCollection__ctor_m5E24C0D40B6B4A8B62A34E2CF3450DDEE02FBF1C_gshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_mEC3B5A87B099239EB6E319E7FFAEDDA5CCCF7768 (ValueCollection_t10FF6A98B17BD862F8991138D7FD29AD4847FBF6* __this, Dictionary_2_t9B2ADF59B0E83212023684CAE164D0B1C22E800C* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_t10FF6A98B17BD862F8991138D7FD29AD4847FBF6*, Dictionary_2_t9B2ADF59B0E83212023684CAE164D0B1C22E800C*, const RuntimeMethod*))ValueCollection__ctor_mEC3B5A87B099239EB6E319E7FFAEDDA5CCCF7768_gshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_FindEntry_m14F2AACB1148A28E415DC6A2F626529D33CF4081 (Dictionary_2_t9B2ADF59B0E83212023684CAE164D0B1C22E800C* __this, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t9B2ADF59B0E83212023684CAE164D0B1C22E800C*, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814, const RuntimeMethod*))Dictionary_2_FindEntry_m14F2AACB1148A28E415DC6A2F626529D33CF4081_gshared)(__this, ___0_key, method);
}
inline bool Dictionary_2_TryInsert_mF362D48543EA02D0A45372B9F046E2F683925E27 (Dictionary_2_t9B2ADF59B0E83212023684CAE164D0B1C22E800C* __this, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___0_key, int32_t ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t9B2ADF59B0E83212023684CAE164D0B1C22E800C*, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814, int32_t, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_mF362D48543EA02D0A45372B9F046E2F683925E27_gshared)(__this, ___0_key, ___1_value, ___2_behavior, method);
}
inline ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 KeyValuePair_2_get_Key_m54125E9738B585176CC0EF0FF6F5FA5CB959B3A2_inline (KeyValuePair_2_t68435994E8A66E579434AAA75502B7B6137A7B2A* __this, const RuntimeMethod* method)
{
	return ((  ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 (*) (KeyValuePair_2_t68435994E8A66E579434AAA75502B7B6137A7B2A*, const RuntimeMethod*))KeyValuePair_2_get_Key_m54125E9738B585176CC0EF0FF6F5FA5CB959B3A2_gshared_inline)(__this, method);
}
inline int32_t KeyValuePair_2_get_Value_m080BF3202ED3064344C3E33E105A6DF813970AFE_inline (KeyValuePair_2_t68435994E8A66E579434AAA75502B7B6137A7B2A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyValuePair_2_t68435994E8A66E579434AAA75502B7B6137A7B2A*, const RuntimeMethod*))KeyValuePair_2_get_Value_m080BF3202ED3064344C3E33E105A6DF813970AFE_gshared_inline)(__this, method);
}
inline void Dictionary_2_Add_m42BB2493CF86A5116013E5C273D1789DF840BB8A (Dictionary_2_t9B2ADF59B0E83212023684CAE164D0B1C22E800C* __this, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___0_key, int32_t ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9B2ADF59B0E83212023684CAE164D0B1C22E800C*, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814, int32_t, const RuntimeMethod*))Dictionary_2_Add_m42BB2493CF86A5116013E5C273D1789DF840BB8A_gshared)(__this, ___0_key, ___1_value, method);
}
inline EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* EqualityComparer_1_get_Default_mC9B367997D70B8B5F9167227471B3D82603739F4_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mC9B367997D70B8B5F9167227471B3D82603739F4_gshared_inline)(method);
}
inline bool Dictionary_2_Remove_m6A804AEF2E4FD1170A61FF9FFCA56E416B2616CA (Dictionary_2_t9B2ADF59B0E83212023684CAE164D0B1C22E800C* __this, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t9B2ADF59B0E83212023684CAE164D0B1C22E800C*, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814, const RuntimeMethod*))Dictionary_2_Remove_m6A804AEF2E4FD1170A61FF9FFCA56E416B2616CA_gshared)(__this, ___0_key, method);
}
inline int32_t Dictionary_2_get_Count_m1CDDC10642903669FAFA95934CA6570DAD09275F (Dictionary_2_t9B2ADF59B0E83212023684CAE164D0B1C22E800C* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t9B2ADF59B0E83212023684CAE164D0B1C22E800C*, const RuntimeMethod*))Dictionary_2_get_Count_m1CDDC10642903669FAFA95934CA6570DAD09275F_gshared)(__this, method);
}
inline void KeyValuePair_2__ctor_m68187F9608C286BCED8AC7DDD8F5B4DB66086C27 (KeyValuePair_2_t68435994E8A66E579434AAA75502B7B6137A7B2A* __this, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___0_key, int32_t ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t68435994E8A66E579434AAA75502B7B6137A7B2A*, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814, int32_t, const RuntimeMethod*))KeyValuePair_2__ctor_m68187F9608C286BCED8AC7DDD8F5B4DB66086C27_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_mF3130D5466437808038B2FBA366C25885E5B3090 (Enumerator_tEA5C0B380BD53EEE55544419AFADE6EF55B8CACD* __this, Dictionary_2_t9B2ADF59B0E83212023684CAE164D0B1C22E800C* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tEA5C0B380BD53EEE55544419AFADE6EF55B8CACD*, Dictionary_2_t9B2ADF59B0E83212023684CAE164D0B1C22E800C*, int32_t, const RuntimeMethod*))Enumerator__ctor_mF3130D5466437808038B2FBA366C25885E5B3090_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
inline void Dictionary_2_CopyTo_mEB41FEA60A71FE120DD5D5E13A18738A13218B49 (Dictionary_2_t9B2ADF59B0E83212023684CAE164D0B1C22E800C* __this, KeyValuePair_2U5BU5D_tA37DB0B7611E442F177E3F568EB45718B30EB635* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9B2ADF59B0E83212023684CAE164D0B1C22E800C*, KeyValuePair_2U5BU5D_tA37DB0B7611E442F177E3F568EB45718B30EB635*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_mEB41FEA60A71FE120DD5D5E13A18738A13218B49_gshared)(__this, ___0_array, ___1_index, method);
}
inline void Dictionary_2_Resize_m78FFECDBE292F246BA76292FFFFD313CEA60ED2E (Dictionary_2_t9B2ADF59B0E83212023684CAE164D0B1C22E800C* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9B2ADF59B0E83212023684CAE164D0B1C22E800C*, const RuntimeMethod*))Dictionary_2_Resize_m78FFECDBE292F246BA76292FFFFD313CEA60ED2E_gshared)(__this, method);
}
inline void Dictionary_2_Resize_m3F6A64CF02E713FA37231BF5A3596FE09A3F4D0A (Dictionary_2_t9B2ADF59B0E83212023684CAE164D0B1C22E800C* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9B2ADF59B0E83212023684CAE164D0B1C22E800C*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_m3F6A64CF02E713FA37231BF5A3596FE09A3F4D0A_gshared)(__this, ___0_newSize, ___1_forceNewHashCodes, method);
}
inline bool Dictionary_2_IsCompatibleKey_mAB33EE65CBA9AB18339463CAFEACB90CBB930305 (RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Dictionary_2_IsCompatibleKey_mAB33EE65CBA9AB18339463CAFEACB90CBB930305_gshared)(___0_key, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mC3916E2A31C5FA9D0BB4E2A929F5225B4205042F (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mC3916E2A31C5FA9D0BB4E2A929F5225B4205042F_gshared)(___0_value, ___1_argName, method);
}
inline void Dictionary_2_set_Item_m02B4D3AA8D37064197DC0B6983574A325BAC93EF (Dictionary_2_t9B2ADF59B0E83212023684CAE164D0B1C22E800C* __this, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___0_key, int32_t ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9B2ADF59B0E83212023684CAE164D0B1C22E800C*, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814, int32_t, const RuntimeMethod*))Dictionary_2_set_Item_m02B4D3AA8D37064197DC0B6983574A325BAC93EF_gshared)(__this, ___0_key, ___1_value, method);
}
inline bool Dictionary_2_ContainsKey_m8A90C6CB1027158417FA82AAB50347C32CA3C952 (Dictionary_2_t9B2ADF59B0E83212023684CAE164D0B1C22E800C* __this, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t9B2ADF59B0E83212023684CAE164D0B1C22E800C*, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814, const RuntimeMethod*))Dictionary_2_ContainsKey_m8A90C6CB1027158417FA82AAB50347C32CA3C952_gshared)(__this, ___0_key, method);
}
inline void Dictionary_2__ctor_mA1BB8D3256D977F60FE481752934D9DCA8F6FB11 (Dictionary_2_tB13D0A847475988F23522A8642F7D24BA304F9B7* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB13D0A847475988F23522A8642F7D24BA304F9B7*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_mA1BB8D3256D977F60FE481752934D9DCA8F6FB11_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline int32_t Dictionary_2_Initialize_m5285134AD51C479B44FCD327D6BC30B4C697168F (Dictionary_2_tB13D0A847475988F23522A8642F7D24BA304F9B7* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tB13D0A847475988F23522A8642F7D24BA304F9B7*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_m5285134AD51C479B44FCD327D6BC30B4C697168F_gshared)(__this, ___0_capacity, method);
}
inline void KeyCollection__ctor_mE415514D3AC6FBAF2C545195FDF96C3B2D758E6F (KeyCollection_tAE0C48201AB6D92D5AD1D458816B2B13DC9FF903* __this, Dictionary_2_tB13D0A847475988F23522A8642F7D24BA304F9B7* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_tAE0C48201AB6D92D5AD1D458816B2B13DC9FF903*, Dictionary_2_tB13D0A847475988F23522A8642F7D24BA304F9B7*, const RuntimeMethod*))KeyCollection__ctor_mE415514D3AC6FBAF2C545195FDF96C3B2D758E6F_gshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_m71F5C062114C4C507B074B3FBF6657C7B2372AAC (ValueCollection_tDAA54478D6690BCDC9E7745F0B5D0265360309EC* __this, Dictionary_2_tB13D0A847475988F23522A8642F7D24BA304F9B7* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_tDAA54478D6690BCDC9E7745F0B5D0265360309EC*, Dictionary_2_tB13D0A847475988F23522A8642F7D24BA304F9B7*, const RuntimeMethod*))ValueCollection__ctor_m71F5C062114C4C507B074B3FBF6657C7B2372AAC_gshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_FindEntry_m29258E04D9D383D9736BDB10172A444E7DBAB192 (Dictionary_2_tB13D0A847475988F23522A8642F7D24BA304F9B7* __this, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tB13D0A847475988F23522A8642F7D24BA304F9B7*, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814, const RuntimeMethod*))Dictionary_2_FindEntry_m29258E04D9D383D9736BDB10172A444E7DBAB192_gshared)(__this, ___0_key, method);
}
inline bool Dictionary_2_TryInsert_m5B684CF3D9C1AD1A62240289DFF23940617D968D (Dictionary_2_tB13D0A847475988F23522A8642F7D24BA304F9B7* __this, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___0_key, RuntimeObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tB13D0A847475988F23522A8642F7D24BA304F9B7*, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814, RuntimeObject*, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_m5B684CF3D9C1AD1A62240289DFF23940617D968D_gshared)(__this, ___0_key, ___1_value, ___2_behavior, method);
}
inline ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 KeyValuePair_2_get_Key_m204134D5294D0652A7BEC9251C7BDD29B507542A_inline (KeyValuePair_2_t5EA39A38B18A7FBA9D70D487DBE55714255FAAA6* __this, const RuntimeMethod* method)
{
	return ((  ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 (*) (KeyValuePair_2_t5EA39A38B18A7FBA9D70D487DBE55714255FAAA6*, const RuntimeMethod*))KeyValuePair_2_get_Key_m204134D5294D0652A7BEC9251C7BDD29B507542A_gshared_inline)(__this, method);
}
inline RuntimeObject* KeyValuePair_2_get_Value_mC161A41DE956DE045D4BE7D7D3FAA6B97A774C4A_inline (KeyValuePair_2_t5EA39A38B18A7FBA9D70D487DBE55714255FAAA6* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_t5EA39A38B18A7FBA9D70D487DBE55714255FAAA6*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC161A41DE956DE045D4BE7D7D3FAA6B97A774C4A_gshared_inline)(__this, method);
}
inline void Dictionary_2_Add_m77C09F1138342291C84F2D1884BC97F0928D029D (Dictionary_2_tB13D0A847475988F23522A8642F7D24BA304F9B7* __this, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB13D0A847475988F23522A8642F7D24BA304F9B7*, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Add_m77C09F1138342291C84F2D1884BC97F0928D029D_gshared)(__this, ___0_key, ___1_value, method);
}
inline bool Dictionary_2_Remove_mB168E67A05948E94B0C8CB8AF10FDFF837CF4013 (Dictionary_2_tB13D0A847475988F23522A8642F7D24BA304F9B7* __this, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tB13D0A847475988F23522A8642F7D24BA304F9B7*, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814, const RuntimeMethod*))Dictionary_2_Remove_mB168E67A05948E94B0C8CB8AF10FDFF837CF4013_gshared)(__this, ___0_key, method);
}
inline int32_t Dictionary_2_get_Count_m62991249DE42FC4B6D2418126CC96D6B756BB68D (Dictionary_2_tB13D0A847475988F23522A8642F7D24BA304F9B7* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tB13D0A847475988F23522A8642F7D24BA304F9B7*, const RuntimeMethod*))Dictionary_2_get_Count_m62991249DE42FC4B6D2418126CC96D6B756BB68D_gshared)(__this, method);
}
inline void KeyValuePair_2__ctor_mD81341F5971E9F53B692B9978CD1792E20832852 (KeyValuePair_2_t5EA39A38B18A7FBA9D70D487DBE55714255FAAA6* __this, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t5EA39A38B18A7FBA9D70D487DBE55714255FAAA6*, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814, RuntimeObject*, const RuntimeMethod*))KeyValuePair_2__ctor_mD81341F5971E9F53B692B9978CD1792E20832852_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_mDFD86A525353C911DD4C6574B1CF11812E7C73B1 (Enumerator_t802BFC19A53773B2AE8F0F44521FB90B06501577* __this, Dictionary_2_tB13D0A847475988F23522A8642F7D24BA304F9B7* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t802BFC19A53773B2AE8F0F44521FB90B06501577*, Dictionary_2_tB13D0A847475988F23522A8642F7D24BA304F9B7*, int32_t, const RuntimeMethod*))Enumerator__ctor_mDFD86A525353C911DD4C6574B1CF11812E7C73B1_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
inline void Dictionary_2_CopyTo_mCE62830A4D7BD2F63E2FF27E28C3F5312BC0B99A (Dictionary_2_tB13D0A847475988F23522A8642F7D24BA304F9B7* __this, KeyValuePair_2U5BU5D_t18981E8B4DA835E5A8BEC453FB6196F9A462D869* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB13D0A847475988F23522A8642F7D24BA304F9B7*, KeyValuePair_2U5BU5D_t18981E8B4DA835E5A8BEC453FB6196F9A462D869*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_mCE62830A4D7BD2F63E2FF27E28C3F5312BC0B99A_gshared)(__this, ___0_array, ___1_index, method);
}
inline void Dictionary_2_Resize_m91116B9124A217B4F424E7D288FD4327D8960AEB (Dictionary_2_tB13D0A847475988F23522A8642F7D24BA304F9B7* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB13D0A847475988F23522A8642F7D24BA304F9B7*, const RuntimeMethod*))Dictionary_2_Resize_m91116B9124A217B4F424E7D288FD4327D8960AEB_gshared)(__this, method);
}
inline void Dictionary_2_Resize_m8F06B3457A7CAD0E3D71C171C52BC704E8740A77 (Dictionary_2_tB13D0A847475988F23522A8642F7D24BA304F9B7* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB13D0A847475988F23522A8642F7D24BA304F9B7*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_m8F06B3457A7CAD0E3D71C171C52BC704E8740A77_gshared)(__this, ___0_newSize, ___1_forceNewHashCodes, method);
}
inline bool Dictionary_2_IsCompatibleKey_mF41F8A34CA256FD60A7E93695410FEEE6BD40507 (RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Dictionary_2_IsCompatibleKey_mF41F8A34CA256FD60A7E93695410FEEE6BD40507_gshared)(___0_key, method);
}
inline void Dictionary_2_set_Item_m444B00B363568ADD78EBA9E89C76E1FB278B4FFE (Dictionary_2_tB13D0A847475988F23522A8642F7D24BA304F9B7* __this, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB13D0A847475988F23522A8642F7D24BA304F9B7*, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814, RuntimeObject*, const RuntimeMethod*))Dictionary_2_set_Item_m444B00B363568ADD78EBA9E89C76E1FB278B4FFE_gshared)(__this, ___0_key, ___1_value, method);
}
inline bool Dictionary_2_ContainsKey_m90F1C333816C1CD050D6E5E14CA9440EB0B4696D (Dictionary_2_tB13D0A847475988F23522A8642F7D24BA304F9B7* __this, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tB13D0A847475988F23522A8642F7D24BA304F9B7*, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814, const RuntimeMethod*))Dictionary_2_ContainsKey_m90F1C333816C1CD050D6E5E14CA9440EB0B4696D_gshared)(__this, ___0_key, method);
}
inline void Dictionary_2__ctor_m4FDDF922AD23F6334537188F4859DCE5A160B2EE (Dictionary_2_t3E3BA8CACCC3C085000EC19576E2BA73F8CFC78E* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3E3BA8CACCC3C085000EC19576E2BA73F8CFC78E*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m4FDDF922AD23F6334537188F4859DCE5A160B2EE_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline int32_t Dictionary_2_Initialize_m986E984D6AA404BAD85BD3C9932842181968D3F7 (Dictionary_2_t3E3BA8CACCC3C085000EC19576E2BA73F8CFC78E* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t3E3BA8CACCC3C085000EC19576E2BA73F8CFC78E*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_m986E984D6AA404BAD85BD3C9932842181968D3F7_gshared)(__this, ___0_capacity, method);
}
inline EqualityComparer_1_t5849F328832B91CA688EA057CFD71225D81B0F72* EqualityComparer_1_get_Default_m74879556CBF575D38F11DBF18327D9D848353BD3_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t5849F328832B91CA688EA057CFD71225D81B0F72* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m74879556CBF575D38F11DBF18327D9D848353BD3_gshared_inline)(method);
}
inline void KeyCollection__ctor_mD675E05CD9576AB05C09E1699B03FD3C001DD344 (KeyCollection_tF4502228DC2899311EA0532D7A002E5AB417BCD4* __this, Dictionary_2_t3E3BA8CACCC3C085000EC19576E2BA73F8CFC78E* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_tF4502228DC2899311EA0532D7A002E5AB417BCD4*, Dictionary_2_t3E3BA8CACCC3C085000EC19576E2BA73F8CFC78E*, const RuntimeMethod*))KeyCollection__ctor_mD675E05CD9576AB05C09E1699B03FD3C001DD344_gshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_mD96C2708EA68241613646B0D373EEDFE0057EF7B (ValueCollection_t5B8AB9BA0BFC036C0FEFE33B4C8681FB06730C8E* __this, Dictionary_2_t3E3BA8CACCC3C085000EC19576E2BA73F8CFC78E* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_t5B8AB9BA0BFC036C0FEFE33B4C8681FB06730C8E*, Dictionary_2_t3E3BA8CACCC3C085000EC19576E2BA73F8CFC78E*, const RuntimeMethod*))ValueCollection__ctor_mD96C2708EA68241613646B0D373EEDFE0057EF7B_gshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_FindEntry_m72AFEEA7170985EA6BB4D32F877862DCB57F10C4 (Dictionary_2_t3E3BA8CACCC3C085000EC19576E2BA73F8CFC78E* __this, SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574 ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t3E3BA8CACCC3C085000EC19576E2BA73F8CFC78E*, SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574, const RuntimeMethod*))Dictionary_2_FindEntry_m72AFEEA7170985EA6BB4D32F877862DCB57F10C4_gshared)(__this, ___0_key, method);
}
inline bool Dictionary_2_TryInsert_m5E93552E2B36C4BB1A0810A7CAD3AF667C49C0B0 (Dictionary_2_t3E3BA8CACCC3C085000EC19576E2BA73F8CFC78E* __this, SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574 ___0_key, RuntimeObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t3E3BA8CACCC3C085000EC19576E2BA73F8CFC78E*, SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574, RuntimeObject*, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_m5E93552E2B36C4BB1A0810A7CAD3AF667C49C0B0_gshared)(__this, ___0_key, ___1_value, ___2_behavior, method);
}
inline SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574 KeyValuePair_2_get_Key_m68ECE6EFA3B43F6CABC5DA63109B69C09B5D3C48_inline (KeyValuePair_2_t4D486866736280C7A079662D170F5444C27E50C6* __this, const RuntimeMethod* method)
{
	return ((  SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574 (*) (KeyValuePair_2_t4D486866736280C7A079662D170F5444C27E50C6*, const RuntimeMethod*))KeyValuePair_2_get_Key_m68ECE6EFA3B43F6CABC5DA63109B69C09B5D3C48_gshared_inline)(__this, method);
}
inline RuntimeObject* KeyValuePair_2_get_Value_mBC7C1BACDBEBA44E8D7BFD8D579336DCC37D6BB5_inline (KeyValuePair_2_t4D486866736280C7A079662D170F5444C27E50C6* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_t4D486866736280C7A079662D170F5444C27E50C6*, const RuntimeMethod*))KeyValuePair_2_get_Value_mBC7C1BACDBEBA44E8D7BFD8D579336DCC37D6BB5_gshared_inline)(__this, method);
}
inline void Dictionary_2_Add_mBD7BFFF74C1DF70C8D47B62E3E603E9F2EEAC75D (Dictionary_2_t3E3BA8CACCC3C085000EC19576E2BA73F8CFC78E* __this, SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574 ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3E3BA8CACCC3C085000EC19576E2BA73F8CFC78E*, SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Add_mBD7BFFF74C1DF70C8D47B62E3E603E9F2EEAC75D_gshared)(__this, ___0_key, ___1_value, method);
}
inline bool Dictionary_2_Remove_mDB0DF91174BECF8AAAF69C5F316F2E0CE8D34437 (Dictionary_2_t3E3BA8CACCC3C085000EC19576E2BA73F8CFC78E* __this, SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574 ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t3E3BA8CACCC3C085000EC19576E2BA73F8CFC78E*, SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574, const RuntimeMethod*))Dictionary_2_Remove_mDB0DF91174BECF8AAAF69C5F316F2E0CE8D34437_gshared)(__this, ___0_key, method);
}
inline int32_t Dictionary_2_get_Count_m17C786AA41BA723BD4B79D2C514A10CADA7C7087 (Dictionary_2_t3E3BA8CACCC3C085000EC19576E2BA73F8CFC78E* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t3E3BA8CACCC3C085000EC19576E2BA73F8CFC78E*, const RuntimeMethod*))Dictionary_2_get_Count_m17C786AA41BA723BD4B79D2C514A10CADA7C7087_gshared)(__this, method);
}
inline void KeyValuePair_2__ctor_m155BEE8D2B58C2C7B35E66C6DE12740FE1434548 (KeyValuePair_2_t4D486866736280C7A079662D170F5444C27E50C6* __this, SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574 ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t4D486866736280C7A079662D170F5444C27E50C6*, SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574, RuntimeObject*, const RuntimeMethod*))KeyValuePair_2__ctor_m155BEE8D2B58C2C7B35E66C6DE12740FE1434548_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_m9F056B1689A35FBDA1A91E631D84E419FDF7C2CF (Enumerator_t45CAC33CD0C08E57C834C0DE235FD5DB1E6F858A* __this, Dictionary_2_t3E3BA8CACCC3C085000EC19576E2BA73F8CFC78E* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t45CAC33CD0C08E57C834C0DE235FD5DB1E6F858A*, Dictionary_2_t3E3BA8CACCC3C085000EC19576E2BA73F8CFC78E*, int32_t, const RuntimeMethod*))Enumerator__ctor_m9F056B1689A35FBDA1A91E631D84E419FDF7C2CF_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
inline void Dictionary_2_CopyTo_m28371CA5037D6161F36580F515048D6BA1EF7D79 (Dictionary_2_t3E3BA8CACCC3C085000EC19576E2BA73F8CFC78E* __this, KeyValuePair_2U5BU5D_t483C9A7E1529730398DA7E05E2540845C629FED3* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3E3BA8CACCC3C085000EC19576E2BA73F8CFC78E*, KeyValuePair_2U5BU5D_t483C9A7E1529730398DA7E05E2540845C629FED3*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_m28371CA5037D6161F36580F515048D6BA1EF7D79_gshared)(__this, ___0_array, ___1_index, method);
}
inline void Dictionary_2_Resize_mE7AB2713437A1EFA36A91AC3A3D273E3FD2D4B40 (Dictionary_2_t3E3BA8CACCC3C085000EC19576E2BA73F8CFC78E* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3E3BA8CACCC3C085000EC19576E2BA73F8CFC78E*, const RuntimeMethod*))Dictionary_2_Resize_mE7AB2713437A1EFA36A91AC3A3D273E3FD2D4B40_gshared)(__this, method);
}
inline void Dictionary_2_Resize_m8E9C5807A9F45205E0ECC9BAD37DCE1733F12691 (Dictionary_2_t3E3BA8CACCC3C085000EC19576E2BA73F8CFC78E* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3E3BA8CACCC3C085000EC19576E2BA73F8CFC78E*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_m8E9C5807A9F45205E0ECC9BAD37DCE1733F12691_gshared)(__this, ___0_newSize, ___1_forceNewHashCodes, method);
}
inline bool Dictionary_2_IsCompatibleKey_mBBD6280B29E6F5958D56722738A71ED6BADB9612 (RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Dictionary_2_IsCompatibleKey_mBBD6280B29E6F5958D56722738A71ED6BADB9612_gshared)(___0_key, method);
}
inline void Dictionary_2_set_Item_mA5CDA4864C431CF2EA8528467544E9D8DF449F82 (Dictionary_2_t3E3BA8CACCC3C085000EC19576E2BA73F8CFC78E* __this, SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574 ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3E3BA8CACCC3C085000EC19576E2BA73F8CFC78E*, SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574, RuntimeObject*, const RuntimeMethod*))Dictionary_2_set_Item_mA5CDA4864C431CF2EA8528467544E9D8DF449F82_gshared)(__this, ___0_key, ___1_value, method);
}
inline bool Dictionary_2_ContainsKey_m0F325215C221CB0DD78B9BB89D5963BF1D1B6761 (Dictionary_2_t3E3BA8CACCC3C085000EC19576E2BA73F8CFC78E* __this, SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574 ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t3E3BA8CACCC3C085000EC19576E2BA73F8CFC78E*, SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574, const RuntimeMethod*))Dictionary_2_ContainsKey_m0F325215C221CB0DD78B9BB89D5963BF1D1B6761_gshared)(__this, ___0_key, method);
}
inline void DynamicArray_1_set_size_m3409BF64253E0042A1047263A1B2BE4942C6F932_inline (DynamicArray_1_t7C64F5A74B7BA6F6B3589A766CADE3F59C6C7BCA* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (DynamicArray_1_t7C64F5A74B7BA6F6B3589A766CADE3F59C6C7BCA*, int32_t, const RuntimeMethod*))DynamicArray_1_set_size_m3409BF64253E0042A1047263A1B2BE4942C6F932_gshared_inline)(__this, ___0_value, method);
}
inline void DynamicArray_1_set_version_m39DBA15EA5D9ECF318BEA5E7A73A0708D4CCCD80_inline (DynamicArray_1_t7C64F5A74B7BA6F6B3589A766CADE3F59C6C7BCA* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (DynamicArray_1_t7C64F5A74B7BA6F6B3589A766CADE3F59C6C7BCA*, int32_t, const RuntimeMethod*))DynamicArray_1_set_version_m39DBA15EA5D9ECF318BEA5E7A73A0708D4CCCD80_gshared_inline)(__this, ___0_value, method);
}
inline void DynamicArray_1_Reserve_m18FB3721016A3E67DED9CC64375BDDBB1EF2D3D8 (DynamicArray_1_t7C64F5A74B7BA6F6B3589A766CADE3F59C6C7BCA* __this, int32_t ___0_newCapacity, bool ___1_keepContent, const RuntimeMethod* method)
{
	((  void (*) (DynamicArray_1_t7C64F5A74B7BA6F6B3589A766CADE3F59C6C7BCA*, int32_t, bool, const RuntimeMethod*))DynamicArray_1_Reserve_m18FB3721016A3E67DED9CC64375BDDBB1EF2D3D8_gshared)(__this, ___0_newCapacity, ___1_keepContent, method);
}
inline void DynamicArray_1_BumpVersion_m5D8E2E53FF33FE34A4FA46226EE9CF56B85B002E (DynamicArray_1_t7C64F5A74B7BA6F6B3589A766CADE3F59C6C7BCA* __this, const RuntimeMethod* method)
{
	((  void (*) (DynamicArray_1_t7C64F5A74B7BA6F6B3589A766CADE3F59C6C7BCA*, const RuntimeMethod*))DynamicArray_1_BumpVersion_m5D8E2E53FF33FE34A4FA46226EE9CF56B85B002E_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m4233828B4E6288B6D815F539AAA38575DE627900 (RuntimeArray* ___0_sourceArray, RuntimeArray* ___1_destinationArray, int32_t ___2_length, const RuntimeMethod* method) ;
inline int32_t DynamicArray_1_get_size_m1B00C20A8CC4D62269585D16A58425D3F258836F_inline (DynamicArray_1_t7C64F5A74B7BA6F6B3589A766CADE3F59C6C7BCA* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (DynamicArray_1_t7C64F5A74B7BA6F6B3589A766CADE3F59C6C7BCA*, const RuntimeMethod*))DynamicArray_1_get_size_m1B00C20A8CC4D62269585D16A58425D3F258836F_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_m270ED9671475CE680EEA8C62A7A43308AE4188EF (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* __this, const RuntimeMethod* method) ;
inline int32_t DynamicArray_1_get_version_mAD7540A9CABCD175B64E344ED8CCCA67497E7D62_inline (DynamicArray_1_t7C64F5A74B7BA6F6B3589A766CADE3F59C6C7BCA* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (DynamicArray_1_t7C64F5A74B7BA6F6B3589A766CADE3F59C6C7BCA*, const RuntimeMethod*))DynamicArray_1_get_version_mAD7540A9CABCD175B64E344ED8CCCA67497E7D62_gshared_inline)(__this, method);
}
inline void DynamicArray_1_set_size_mFDBE699A74F4921E332C4199F04F64D5F77B67AD_inline (DynamicArray_1_t32FB886A5D922EE301E17A95EB958B1FA6B53A59* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (DynamicArray_1_t32FB886A5D922EE301E17A95EB958B1FA6B53A59*, int32_t, const RuntimeMethod*))DynamicArray_1_set_size_mFDBE699A74F4921E332C4199F04F64D5F77B67AD_gshared_inline)(__this, ___0_value, method);
}
inline void DynamicArray_1_set_version_mFC9E3C8D3C2F91995DADCDF989156C60112C0BF4_inline (DynamicArray_1_t32FB886A5D922EE301E17A95EB958B1FA6B53A59* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (DynamicArray_1_t32FB886A5D922EE301E17A95EB958B1FA6B53A59*, int32_t, const RuntimeMethod*))DynamicArray_1_set_version_mFC9E3C8D3C2F91995DADCDF989156C60112C0BF4_gshared_inline)(__this, ___0_value, method);
}
inline void DynamicArray_1_Reserve_m485927978DE346D5A12D1F1893011FB796F0AAD6 (DynamicArray_1_t32FB886A5D922EE301E17A95EB958B1FA6B53A59* __this, int32_t ___0_newCapacity, bool ___1_keepContent, const RuntimeMethod* method)
{
	((  void (*) (DynamicArray_1_t32FB886A5D922EE301E17A95EB958B1FA6B53A59*, int32_t, bool, const RuntimeMethod*))DynamicArray_1_Reserve_m485927978DE346D5A12D1F1893011FB796F0AAD6_gshared)(__this, ___0_newCapacity, ___1_keepContent, method);
}
inline void DynamicArray_1_BumpVersion_m9AC29E691E8EDFBC44888CD38AB982B3F1EEF675 (DynamicArray_1_t32FB886A5D922EE301E17A95EB958B1FA6B53A59* __this, const RuntimeMethod* method)
{
	((  void (*) (DynamicArray_1_t32FB886A5D922EE301E17A95EB958B1FA6B53A59*, const RuntimeMethod*))DynamicArray_1_BumpVersion_m9AC29E691E8EDFBC44888CD38AB982B3F1EEF675_gshared)(__this, method);
}
inline int32_t DynamicArray_1_get_size_m2D85CC818F77A4096E9474CA56125F7ED642F048_inline (DynamicArray_1_t32FB886A5D922EE301E17A95EB958B1FA6B53A59* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (DynamicArray_1_t32FB886A5D922EE301E17A95EB958B1FA6B53A59*, const RuntimeMethod*))DynamicArray_1_get_size_m2D85CC818F77A4096E9474CA56125F7ED642F048_gshared_inline)(__this, method);
}
inline int32_t DynamicArray_1_get_version_m03799785BC334E5B1D8EB06A5F254190FED07EFF_inline (DynamicArray_1_t32FB886A5D922EE301E17A95EB958B1FA6B53A59* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (DynamicArray_1_t32FB886A5D922EE301E17A95EB958B1FA6B53A59*, const RuntimeMethod*))DynamicArray_1_get_version_m03799785BC334E5B1D8EB06A5F254190FED07EFF_gshared_inline)(__this, method);
}
inline void DynamicArray_1_set_size_m352FBC4FC46492A70156C4D2EDA5F35FEAFCE206_inline (DynamicArray_1_tA7E05F444A8E75C3FD24B4EA81F57EA44E6D0F09* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (DynamicArray_1_tA7E05F444A8E75C3FD24B4EA81F57EA44E6D0F09*, int32_t, const RuntimeMethod*))DynamicArray_1_set_size_m352FBC4FC46492A70156C4D2EDA5F35FEAFCE206_gshared_inline)(__this, ___0_value, method);
}
inline void DynamicArray_1_set_version_mBC13FCC0C9B7D12CF0E4B483A9FE71A993E32CAD_inline (DynamicArray_1_tA7E05F444A8E75C3FD24B4EA81F57EA44E6D0F09* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (DynamicArray_1_tA7E05F444A8E75C3FD24B4EA81F57EA44E6D0F09*, int32_t, const RuntimeMethod*))DynamicArray_1_set_version_mBC13FCC0C9B7D12CF0E4B483A9FE71A993E32CAD_gshared_inline)(__this, ___0_value, method);
}
inline void DynamicArray_1_Reserve_m0A0A832CA3A65B02216DA45E5B6732C2FDC1CB19 (DynamicArray_1_tA7E05F444A8E75C3FD24B4EA81F57EA44E6D0F09* __this, int32_t ___0_newCapacity, bool ___1_keepContent, const RuntimeMethod* method)
{
	((  void (*) (DynamicArray_1_tA7E05F444A8E75C3FD24B4EA81F57EA44E6D0F09*, int32_t, bool, const RuntimeMethod*))DynamicArray_1_Reserve_m0A0A832CA3A65B02216DA45E5B6732C2FDC1CB19_gshared)(__this, ___0_newCapacity, ___1_keepContent, method);
}
inline void DynamicArray_1_BumpVersion_m748232578BFEB3E8432F28D020973684DB67DCF0 (DynamicArray_1_tA7E05F444A8E75C3FD24B4EA81F57EA44E6D0F09* __this, const RuntimeMethod* method)
{
	((  void (*) (DynamicArray_1_tA7E05F444A8E75C3FD24B4EA81F57EA44E6D0F09*, const RuntimeMethod*))DynamicArray_1_BumpVersion_m748232578BFEB3E8432F28D020973684DB67DCF0_gshared)(__this, method);
}
inline int32_t DynamicArray_1_get_size_mDB3BA7CAAD59744057F0A5340186390AB7BCADD4_inline (DynamicArray_1_tA7E05F444A8E75C3FD24B4EA81F57EA44E6D0F09* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (DynamicArray_1_tA7E05F444A8E75C3FD24B4EA81F57EA44E6D0F09*, const RuntimeMethod*))DynamicArray_1_get_size_mDB3BA7CAAD59744057F0A5340186390AB7BCADD4_gshared_inline)(__this, method);
}
inline int32_t DynamicArray_1_get_version_mE13995AAB373C4A2F1E9761CF4DB390AD2636FA4_inline (DynamicArray_1_tA7E05F444A8E75C3FD24B4EA81F57EA44E6D0F09* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (DynamicArray_1_tA7E05F444A8E75C3FD24B4EA81F57EA44E6D0F09*, const RuntimeMethod*))DynamicArray_1_get_version_mE13995AAB373C4A2F1E9761CF4DB390AD2636FA4_gshared_inline)(__this, method);
}
inline EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* EqualityComparer_1_CreateComparer_m64D3D774E7DAF5FC0206DC26D9BA53BF70F1F93B (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m64D3D774E7DAF5FC0206DC26D9BA53BF70F1F93B_gshared)(method);
}
inline EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_CreateComparer_mD2FA619307513193746FBEB5AE522FB54E21B634 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mD2FA619307513193746FBEB5AE522FB54E21B634_gshared)(method);
}
inline EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1* EqualityComparer_1_CreateComparer_m6D99876F3A0CC92388F04FA521AFA20EDAF66D25 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m6D99876F3A0CC92388F04FA521AFA20EDAF66D25_gshared)(method);
}
inline EqualityComparer_1_tD07CBC58F821582B79CB59B10264DC683DE3EE5C* EqualityComparer_1_CreateComparer_m623688232473A6055EEF64837BC23D990D8623F6 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tD07CBC58F821582B79CB59B10264DC683DE3EE5C* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m623688232473A6055EEF64837BC23D990D8623F6_gshared)(method);
}
inline EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_CreateComparer_m432C82F7354C37E610794C1DA866DFA7DAC9C35E (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m432C82F7354C37E610794C1DA866DFA7DAC9C35E_gshared)(method);
}
inline EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* EqualityComparer_1_CreateComparer_m90CFBBC1492097465600B56ECF620CA25F1C6A73 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m90CFBBC1492097465600B56ECF620CA25F1C6A73_gshared)(method);
}
inline EqualityComparer_1_t5849F328832B91CA688EA057CFD71225D81B0F72* EqualityComparer_1_CreateComparer_m5D2542ADFFD3DA0F7BD1A6E60FD15B6C3D22A4CF (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t5849F328832B91CA688EA057CFD71225D81B0F72* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m5D2542ADFFD3DA0F7BD1A6E60FD15B6C3D22A4CF_gshared)(method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5F2C53FF0072F4015E5D14621F555D29B1EB79E5_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_m96CF8B0261344A0E317244BD54F5791CF714696F(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m02AD1784407F445D19B2B4EFCE429C2E8F81B9A1_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_m96CF8B0261344A0E317244BD54F5791CF714696F(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE2D8DF4C129EB33F9695465925B905E79288DB16_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_m96CF8B0261344A0E317244BD54F5791CF714696F(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m96CF8B0261344A0E317244BD54F5791CF714696F_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m991A891C21658C9C47CB8B484E5ECFDE6C3AE0E3(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_5;
		L_5 = EqualityComparer_1_get_Default_mF554877B669658FD6449F84AE369214855D0BC40_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m0D9BAECBF69ABEEFF1551820EE5E3899F0D04B3D_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m6C8FADDE2343343BA522E3E1E6C70580D8A010C8_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		int32_t L_1 = __this->____freeCount;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t8825842DD54072B7B712D2ED9E544D6466A502CB* Dictionary_2_get_Keys_mBA659D62B70FCB4BB08F36AE7D22AE17AD15CF7B_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t8825842DD54072B7B712D2ED9E544D6466A502CB* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t8825842DD54072B7B712D2ED9E544D6466A502CB* L_1 = (KeyCollection_t8825842DD54072B7B712D2ED9E544D6466A502CB*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 7));
		KeyCollection__ctor_m1813F8B95530437C7092DDA935E35C7836B38F17(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t8825842DD54072B7B712D2ED9E544D6466A502CB* L_2 = __this->____keys;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_tA38C30965161699273DF0F825A6FCB2896F6ECC7* Dictionary_2_get_Values_mA8EF4E1B3C60A8B026C6CDBB4D0613A16EB0CC28_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tA38C30965161699273DF0F825A6FCB2896F6ECC7* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tA38C30965161699273DF0F825A6FCB2896F6ECC7* L_1 = (ValueCollection_tA38C30965161699273DF0F825A6FCB2896F6ECC7*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		ValueCollection__ctor_mA7308CDBF1FC112C1E3F77662D817A714DD1F1D7(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tA38C30965161699273DF0F825A6FCB2896F6ECC7* L_2 = __this->____values;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m1ABC559AFCB634174C216DFF864168F9D0611B91_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, uint32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		uint32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m6F594F43715DA5DE5ACC2303BDA19DD724C861BE(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		return L_5;
	}

IL_001e:
	{
		uint32_t L_6 = ___0_key;
		uint32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject*));
		RuntimeObject* L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m3CB345D53D5DCD58561453AD5780EBC51E8DA379_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, uint32_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m3DE1FF6E5A5378D653C083D9AF241FFB3E90444F(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m5124CA0DFD4B9968298DB45CEDF7F4B7A1F7DF83_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, uint32_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m3DE1FF6E5A5378D653C083D9AF241FFB3E90444F(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_mF8CF90FC5CF4EC0850589A09886C4EEA3FF0B0AB_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, KeyValuePair_2_tAC06C9E6230AA7E6BDA2F07D910C3CBE2F36399B ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		uint32_t L_0;
		L_0 = KeyValuePair_2_get_Key_mA52DA5B46E22917A435D0C0C421F21569A431CA6_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		RuntimeObject* L_1;
		L_1 = KeyValuePair_2_get_Value_mB90CBD7B74DBF864C2727E0B04302F988F5FABF8_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		Dictionary_2_Add_m5124CA0DFD4B9968298DB45CEDF7F4B7A1F7DF83(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m8FFEB29E1D6E73E67F75B3E2523E3ED89E0A61C9_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, KeyValuePair_2_tAC06C9E6230AA7E6BDA2F07D910C3CBE2F36399B ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		uint32_t L_0;
		L_0 = KeyValuePair_2_get_Key_mA52DA5B46E22917A435D0C0C421F21569A431CA6_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m6F594F43715DA5DE5ACC2303BDA19DD724C861BE(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3;
		L_3 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		RuntimeObject* L_7;
		L_7 = KeyValuePair_2_get_Value_mB90CBD7B74DBF864C2727E0B04302F988F5FABF8_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_mBA806CA0CD33E392F4C20ABE9D271BD80FC10DE7_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, KeyValuePair_2_tAC06C9E6230AA7E6BDA2F07D910C3CBE2F36399B ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		uint32_t L_0;
		L_0 = KeyValuePair_2_get_Key_mA52DA5B46E22917A435D0C0C421F21569A431CA6_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m6F594F43715DA5DE5ACC2303BDA19DD724C861BE(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3;
		L_3 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		RuntimeObject* L_7;
		L_7 = KeyValuePair_2_get_Value_mB90CBD7B74DBF864C2727E0B04302F988F5FABF8_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		uint32_t L_9;
		L_9 = KeyValuePair_2_get_Key_mA52DA5B46E22917A435D0C0C421F21569A431CA6_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		bool L_10;
		L_10 = Dictionary_2_Remove_mAFDA1925650321D7DBD9CB992FD536B8FD2984AA(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m2561EDEA2235BCE5FAED59F4E2E352FDA7C71115_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		NullCheck(L_3);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____freeCount = 0;
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m61654FF64053B954D62E586B09309D37EEBB9FB3_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, uint32_t ___0_key, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m6F594F43715DA5DE5ACC2303BDA19DD724C861BE(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_mEA242D651E1C66041A67248197AB3924BDE83981_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	int32_t V_3 = 0;
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_0 = __this->____entries;
		V_0 = L_0;
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_0049;
		}
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		RuntimeObject* L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		if (L_7)
		{
			goto IL_0037;
		}
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = __this->____count;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject*));
		RuntimeObject* L_11 = V_2;
		if (!L_11)
		{
			goto IL_0096;
		}
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_12 = V_0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_15;
		L_15 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_16 = V_0;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		RuntimeObject* L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value;
		RuntimeObject* L_19 = ___0_value;
		NullCheck(L_15);
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008b:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = __this->____count;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_24;
		L_24 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_28 = V_4;
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_29 = V_0;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		RuntimeObject* L_31 = ((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___value;
		RuntimeObject* L_32 = ___0_value;
		NullCheck(L_28);
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_28, L_31, L_32);
		if (!L_33)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d1:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = __this->____count;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m653EB649AAE304236A63F8D4787676E5B277DE6C_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, KeyValuePair_2U5BU5D_t507CDA5432F6D20050CE99321FB52CEF9E776871* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t507CDA5432F6D20050CE99321FB52CEF9E776871* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_t507CDA5432F6D20050CE99321FB52CEF9E776871* L_2 = ___0_array;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t507CDA5432F6D20050CE99321FB52CEF9E776871* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = Dictionary_2_get_Count_m6C8FADDE2343343BA522E3E1E6C70580D8A010C8(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = __this->____count;
		V_0 = L_6;
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_7 = __this->____entries;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t507CDA5432F6D20050CE99321FB52CEF9E776871* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		uint32_t L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key;
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		RuntimeObject* L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value;
		KeyValuePair_2_tAC06C9E6230AA7E6BDA2F07D910C3CBE2F36399B L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_mB53C3BFAA104E91A4E9330E29FF5D5A835526360((&L_20), L_16, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_tAC06C9E6230AA7E6BDA2F07D910C3CBE2F36399B)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t42FC023879D0041F2016540629807C485A03B1A7 Dictionary_2_GetEnumerator_mBDE9E0C0607CC54561E6AC655F880228C9009692_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t42FC023879D0041F2016540629807C485A03B1A7 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m6BB73FBB588BB87421C1222CAE727AD52F96CAD4((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_mEA48072BFD12860C0FBE936B0251E11ADF0E3DCA_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t42FC023879D0041F2016540629807C485A03B1A7 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m6BB73FBB588BB87421C1222CAE727AD52F96CAD4((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		Enumerator_t42FC023879D0041F2016540629807C485A03B1A7 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 29), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_m7BB3A5F2ED7131F4E8951E10974CB2459D6A04FA_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t507CDA5432F6D20050CE99321FB52CEF9E776871* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_6;
		L_6 = EqualityComparer_1_get_Default_mF554877B669658FD6449F84AE369214855D0BC40_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 32)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		NullCheck(L_11);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = Dictionary_2_get_Count_m6C8FADDE2343343BA522E3E1E6C70580D8A010C8(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		KeyValuePair_2U5BU5D_t507CDA5432F6D20050CE99321FB52CEF9E776871* L_14 = (KeyValuePair_2U5BU5D_t507CDA5432F6D20050CE99321FB52CEF9E776871*)(KeyValuePair_2U5BU5D_t507CDA5432F6D20050CE99321FB52CEF9E776871*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 33), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_t507CDA5432F6D20050CE99321FB52CEF9E776871* L_15 = V_0;
		Dictionary_2_CopyTo_m653EB649AAE304236A63F8D4787676E5B277DE6C(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_t507CDA5432F6D20050CE99321FB52CEF9E776871* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 35)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m6F594F43715DA5DE5ACC2303BDA19DD724C861BE_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, uint32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	uint32_t V_6 = 0;
	EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_1 = L_1;
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_2 = __this->____entries;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(uint32_t));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_15 = V_2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_19;
		L_19 = EqualityComparer_1_get_Default_mF554877B669658FD6449F84AE369214855D0BC40_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_20 = V_2;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		uint32_t L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___key;
		uint32_t L_23 = ___0_key;
		NullCheck(L_19);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(8, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_0110:
	{
		RuntimeObject* L_31 = V_4;
		uint32_t L_32 = ___0_key;
		NullCheck(L_31);
		int32_t L_33;
		L_33 = InterfaceFuncInvoker1< int32_t, uint32_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_31, L_32);
		V_8 = ((int32_t)(L_33&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_1;
		int32_t L_35 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_1;
		NullCheck(L_36);
		NullCheck(L_34);
		int32_t L_37 = ((int32_t)(L_35%((int32_t)(((RuntimeArray*)L_36)->max_length))));
		int32_t L_38 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
	}

IL_012b:
	{
		int32_t L_39 = V_0;
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_40 = V_2;
		NullCheck(L_40);
		if ((!(((uint32_t)L_39) < ((uint32_t)((int32_t)(((RuntimeArray*)L_40)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_41 = V_2;
		int32_t L_42 = V_0;
		NullCheck(L_41);
		int32_t L_43 = ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
		int32_t L_44 = V_8;
		if ((!(((uint32_t)L_43) == ((uint32_t)L_44))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_45 = V_4;
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_46 = V_2;
		int32_t L_47 = V_0;
		NullCheck(L_46);
		uint32_t L_48 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___key;
		uint32_t L_49 = ___0_key;
		NullCheck(L_45);
		bool L_50;
		L_50 = InterfaceFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_45, L_48, L_49);
		if (L_50)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_51 = V_2;
		int32_t L_52 = V_0;
		NullCheck(L_51);
		int32_t L_53 = ((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___next;
		V_0 = L_53;
		int32_t L_54 = V_3;
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_55 = V_2;
		NullCheck(L_55);
		if ((((int32_t)L_54) < ((int32_t)((int32_t)(((RuntimeArray*)L_55)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_56 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_57 = V_0;
		return L_57;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m991A891C21658C9C47CB8B484E5ECFDE6C3AE0E3_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_5 = (EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4*)(EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 40), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m3DE1FF6E5A5378D653C083D9AF241FFB3E90444F_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, uint32_t ___0_key, RuntimeObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t1F21171535DEAE77D533CFCFAF0EF8C51862C715* V_10 = NULL;
	uint32_t V_11 = 0;
	EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m991A891C21658C9C47CB8B484E5ECFDE6C3AE0E3(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_002c:
	{
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_4 = __this->____entries;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		uint32_t L_8 = ___0_key;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, uint32_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		NullCheck(L_13);
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(uint32_t));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_20 = V_0;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_24;
		L_24 = EqualityComparer_1_get_Default_mF554877B669658FD6449F84AE369214855D0BC40_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		uint32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		uint32_t L_28 = ___0_key;
		NullCheck(L_24);
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(8, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___2_behavior;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		RuntimeObject* L_33 = ___1_value;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value), (void*)L_33);
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___2_behavior;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		uint32_t L_35 = ___0_key;
		uint32_t L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_38 = V_0;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		int32_t L_40 = ((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___next;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_42 = V_0;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_0187:
	{
		int32_t L_44 = V_5;
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_45 = V_0;
		NullCheck(L_45);
		if ((!(((uint32_t)L_44) < ((uint32_t)((int32_t)(((RuntimeArray*)L_45)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_46 = V_0;
		int32_t L_47 = V_5;
		NullCheck(L_46);
		int32_t L_48 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___hashCode;
		int32_t L_49 = V_2;
		if ((!(((uint32_t)L_48) == ((uint32_t)L_49))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_50 = V_1;
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_51 = V_0;
		int32_t L_52 = V_5;
		NullCheck(L_51);
		uint32_t L_53 = ((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___key;
		uint32_t L_54 = ___0_key;
		NullCheck(L_50);
		bool L_55;
		L_55 = InterfaceFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_50, L_53, L_54);
		if (!L_55)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_56 = ___2_behavior;
		if ((!(((uint32_t)L_56) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_57 = V_0;
		int32_t L_58 = V_5;
		NullCheck(L_57);
		RuntimeObject* L_59 = ___1_value;
		((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value = L_59;
		Il2CppCodeGenWriteBarrier((void**)(&((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value), (void*)L_59);
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_60 = ___2_behavior;
		if ((!(((uint32_t)L_60) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		uint32_t L_61 = ___0_key;
		uint32_t L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_62);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_63, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_64 = V_0;
		int32_t L_65 = V_5;
		NullCheck(L_64);
		int32_t L_66 = ((L_64)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_65)))->___next;
		V_5 = L_66;
		int32_t L_67 = V_3;
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_68 = V_0;
		NullCheck(L_68);
		if ((((int32_t)L_67) < ((int32_t)((int32_t)(((RuntimeArray*)L_68)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_69 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_69, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_70 = __this->____freeCount;
		if ((((int32_t)L_70) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_71 = __this->____freeList;
		V_8 = L_71;
		V_7 = (bool)1;
		int32_t L_72 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_72, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_73 = __this->____count;
		V_13 = L_73;
		int32_t L_74 = V_13;
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_75 = V_0;
		NullCheck(L_75);
		if ((!(((uint32_t)L_74) == ((uint32_t)((int32_t)(((RuntimeArray*)L_75)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_m3155C05051C2D950E8390A1581F340907C222FD9(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_76 = V_13;
		V_8 = L_76;
		int32_t L_77 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_77, 1));
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_78 = __this->____entries;
		V_0 = L_78;
	}

IL_0250:
	{
		bool L_79 = V_6;
		if (L_79)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_80 = V_4;
		G_B51_0 = L_80;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_81 = __this->____buckets;
		int32_t L_82 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_83 = __this->____buckets;
		NullCheck(L_83);
		NullCheck(L_81);
		G_B51_0 = ((L_81)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_82%((int32_t)(((RuntimeArray*)L_83)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_84 = V_0;
		int32_t L_85 = V_8;
		NullCheck(L_84);
		V_10 = ((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)));
		bool L_86 = V_7;
		if (!L_86)
		{
			goto IL_028a;
		}
	}
	{
		Entry_t1F21171535DEAE77D533CFCFAF0EF8C51862C715* L_87 = V_10;
		int32_t L_88 = L_87->___next;
		__this->____freeList = L_88;
	}

IL_028a:
	{
		Entry_t1F21171535DEAE77D533CFCFAF0EF8C51862C715* L_89 = V_10;
		int32_t L_90 = V_2;
		L_89->___hashCode = L_90;
		Entry_t1F21171535DEAE77D533CFCFAF0EF8C51862C715* L_91 = V_10;
		int32_t* L_92 = V_9;
		int32_t L_93 = *((int32_t*)L_92);
		L_91->___next = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		Entry_t1F21171535DEAE77D533CFCFAF0EF8C51862C715* L_94 = V_10;
		uint32_t L_95 = ___0_key;
		L_94->___key = L_95;
		Entry_t1F21171535DEAE77D533CFCFAF0EF8C51862C715* L_96 = V_10;
		RuntimeObject* L_97 = ___1_value;
		L_96->___value = L_97;
		Il2CppCodeGenWriteBarrier((void**)(&L_96->___value), (void*)L_97);
		int32_t* L_98 = V_9;
		int32_t L_99 = V_8;
		*((int32_t*)L_98) = (int32_t)((int32_t)il2cpp_codegen_add(L_99, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_m484E2156FF4F5AC63805796D85518B32B3853B63_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t507CDA5432F6D20050CE99321FB52CEF9E776871* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 32)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_m991A891C21658C9C47CB8B484E5ECFDE6C3AE0E3(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 35)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t507CDA5432F6D20050CE99321FB52CEF9E776871*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 26)));
		KeyValuePair_2U5BU5D_t507CDA5432F6D20050CE99321FB52CEF9E776871* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_t507CDA5432F6D20050CE99321FB52CEF9E776871* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		uint32_t L_21;
		L_21 = KeyValuePair_2_get_Key_mA52DA5B46E22917A435D0C0C421F21569A431CA6_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		goto IL_009a;
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t507CDA5432F6D20050CE99321FB52CEF9E776871* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		uint32_t L_24;
		L_24 = KeyValuePair_2_get_Key_mA52DA5B46E22917A435D0C0C421F21569A431CA6_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		KeyValuePair_2U5BU5D_t507CDA5432F6D20050CE99321FB52CEF9E776871* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		RuntimeObject* L_27;
		L_27 = KeyValuePair_2_get_Value_mB90CBD7B74DBF864C2727E0B04302F988F5FABF8_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		Dictionary_2_Add_m5124CA0DFD4B9968298DB45CEDF7F4B7A1F7DF83(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_t507CDA5432F6D20050CE99321FB52CEF9E776871* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m3155C05051C2D950E8390A1581F340907C222FD9_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_mBB5E8E07C506AF04E068339F513E02AF2B33FA8A(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mBB5E8E07C506AF04E068339F513E02AF2B33FA8A_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* V_1 = NULL;
	int32_t V_2 = 0;
	uint32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_3 = (EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4*)(EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 40), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_5 = __this->____entries;
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(uint32_t));
		uint32_t L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)((int32_t)false&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_10 = V_1;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_13 = V_1;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		uint32_t* L_17 = (uint32_t*)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key);
		int32_t L_18;
		L_18 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC(L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_22 = V_1;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_25 = V_1;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		int32_t L_28 = ___0_newSize;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_29 = V_1;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___next = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_41);
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_42 = V_1;
		__this->____entries = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_42);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mAFDA1925650321D7DBD9CB992FD536B8FD2984AA_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, uint32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t1F21171535DEAE77D533CFCFAF0EF8C51862C715* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		uint32_t L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, uint32_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_13 = __this->____entries;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_t1F21171535DEAE77D533CFCFAF0EF8C51862C715* L_15 = V_4;
		int32_t L_16 = L_15->___hashCode;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = __this->____comparer;
		RuntimeObject* L_19 = L_18;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
		G_B9_0 = L_19;
	}
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_20;
		L_20 = EqualityComparer_1_get_Default_mF554877B669658FD6449F84AE369214855D0BC40_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_t1F21171535DEAE77D533CFCFAF0EF8C51862C715* L_21 = V_4;
		uint32_t L_22 = L_21->___key;
		uint32_t L_23 = ___0_key;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(8, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t1F21171535DEAE77D533CFCFAF0EF8C51862C715* L_25 = V_4;
		uint32_t L_26 = L_25->___key;
		uint32_t L_27 = ___0_key;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets;
		int32_t L_31 = V_1;
		Entry_t1F21171535DEAE77D533CFCFAF0EF8C51862C715* L_32 = V_4;
		int32_t L_33 = L_32->___next;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_34 = __this->____entries;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_t1F21171535DEAE77D533CFCFAF0EF8C51862C715* L_36 = V_4;
		int32_t L_37 = L_36->___next;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next = L_37;
	}

IL_00d6:
	{
		Entry_t1F21171535DEAE77D533CFCFAF0EF8C51862C715* L_38 = V_4;
		L_38->___hashCode = (-1);
		Entry_t1F21171535DEAE77D533CFCFAF0EF8C51862C715* L_39 = V_4;
		int32_t L_40 = __this->____freeList;
		L_39->___next = L_40;
		goto IL_00ff;
	}

IL_00ff:
	{
	}
	{
		Entry_t1F21171535DEAE77D533CFCFAF0EF8C51862C715* L_41 = V_4;
		RuntimeObject** L_42 = (RuntimeObject**)(&L_41->___value);
		il2cpp_codegen_initobj(L_42, sizeof(RuntimeObject*));
	}

IL_0113:
	{
		int32_t L_43 = V_3;
		__this->____freeList = L_43;
		int32_t L_44 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_44, 1));
		int32_t L_45 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_45, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_46 = V_3;
		V_2 = L_46;
		Entry_t1F21171535DEAE77D533CFCFAF0EF8C51862C715* L_47 = V_4;
		int32_t L_48 = L_47->___next;
		V_3 = L_48;
	}

IL_0142:
	{
		int32_t L_49 = V_3;
		if ((((int32_t)L_49) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mBBE3855923B29F8A7CDB21CF7DD7FCD84AABEB68_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, uint32_t ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		uint32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m6F594F43715DA5DE5ACC2303BDA19DD724C861BE(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		RuntimeObject** L_3 = ___1_value;
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		*(RuntimeObject**)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)L_6);
		return (bool)1;
	}

IL_0025:
	{
		RuntimeObject** L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(RuntimeObject*));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_mFF6626F04EE1E426ED34B058CFD6F57E6917A98E_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, uint32_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m3DE1FF6E5A5378D653C083D9AF241FFB3E90444F(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9585BEF8A82FDEB1D0C3937F758E306833FBBDF3_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m0161D6596D60771F749EEF6ECCD4D06A950DCFB9_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, KeyValuePair_2U5BU5D_t507CDA5432F6D20050CE99321FB52CEF9E776871* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t507CDA5432F6D20050CE99321FB52CEF9E776871* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_m653EB649AAE304236A63F8D4787676E5B277DE6C(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_m3696B83A2BE6E39671564F4A8B3E041713CEFCB8_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t507CDA5432F6D20050CE99321FB52CEF9E776871* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_m6C8FADDE2343343BA522E3E1E6C70580D8A010C8(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_t507CDA5432F6D20050CE99321FB52CEF9E776871*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 26)));
		KeyValuePair_2U5BU5D_t507CDA5432F6D20050CE99321FB52CEF9E776871* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t507CDA5432F6D20050CE99321FB52CEF9E776871* L_14 = V_0;
		int32_t L_15 = ___1_index;
		Dictionary_2_CopyTo_m653EB649AAE304236A63F8D4787676E5B277DE6C(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_18 = __this->____entries;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		uint32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		uint32_t L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_28);
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		RuntimeObject* L_32 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value;
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_33;
		memset((&L_33), 0, sizeof(L_33));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_33), L_29, L_32, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_33);
	}

IL_00b5:
	{
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b9:
	{
		int32_t L_35 = V_3;
		int32_t L_36 = __this->____count;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_37 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_37, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = V_4;
		if (L_38)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_39 = __this->____count;
			V_5 = L_39;
			EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_40 = __this->____entries;
			V_6 = L_40;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_41 = V_6;
			int32_t L_42 = V_7;
			NullCheck(L_41);
			int32_t L_43 = ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
			if ((((int32_t)L_43) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = V_4;
			int32_t L_45 = ___1_index;
			int32_t L_46 = L_45;
			___1_index = ((int32_t)il2cpp_codegen_add(L_46, 1));
			EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_47 = V_6;
			int32_t L_48 = V_7;
			NullCheck(L_47);
			uint32_t L_49 = ((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___key;
			EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_50 = V_6;
			int32_t L_51 = V_7;
			NullCheck(L_50);
			RuntimeObject* L_52 = ((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___value;
			KeyValuePair_2_tAC06C9E6230AA7E6BDA2F07D910C3CBE2F36399B L_53;
			memset((&L_53), 0, sizeof(L_53));
			KeyValuePair_2__ctor_mB53C3BFAA104E91A4E9330E29FF5D5A835526360((&L_53), L_49, L_52, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
			KeyValuePair_2_tAC06C9E6230AA7E6BDA2F07D910C3CBE2F36399B L_54 = L_53;
			RuntimeObject* L_55 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 17), &L_54);
			NullCheck(L_44);
			ArrayElementTypeCheck (L_44, L_55);
			(L_44)->SetAt(static_cast<il2cpp_array_size_t>(L_46), (RuntimeObject*)L_55);
		}

IL_012a_1:
		{
			int32_t L_56 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		}

IL_0130_1:
		{
			int32_t L_57 = V_7;
			int32_t L_58 = V_5;
			if ((((int32_t)L_57) < ((int32_t)L_58)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m46802644F1FB4FFAEDD356B271CD7142AAC86C96_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t42FC023879D0041F2016540629807C485A03B1A7 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m6BB73FBB588BB87421C1222CAE727AD52F96CAD4((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		Enumerator_t42FC023879D0041F2016540629807C485A03B1A7 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 29), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_EnsureCapacity_m553386041BDDE846795D1EAE625D6FB03107FA10_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_000b:
	{
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_1 = __this->____entries;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_2 = __this->____entries;
		NullCheck(L_2);
		G_B5_0 = ((int32_t)(((RuntimeArray*)L_2)->max_length));
		goto IL_001e;
	}

IL_001d:
	{
		G_B5_0 = 0;
	}

IL_001e:
	{
		V_0 = G_B5_0;
		int32_t L_3 = V_0;
		int32_t L_4 = ___0_capacity;
		if ((((int32_t)L_3) < ((int32_t)L_4)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_5 = V_0;
		return L_5;
	}

IL_0025:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->____buckets;
		if (L_6)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_7 = ___0_capacity;
		int32_t L_8;
		L_8 = Dictionary_2_Initialize_m991A891C21658C9C47CB8B484E5ECFDE6C3AE0E3(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return L_8;
	}

IL_0035:
	{
		int32_t L_9 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_10;
		L_10 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_9, NULL);
		V_1 = L_10;
		int32_t L_11 = V_1;
		Dictionary_2_Resize_mBB5E8E07C506AF04E068339F513E02AF2B33FA8A(__this, L_11, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		int32_t L_12 = V_1;
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m6388BB328A163B5C99807765A0E718ABD673138A_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_mCEC68E6C5BE33449AFF1D3D4E45A4FD75F23B3BD_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m8EE916CE714A051B83BB108D77000536A67873D8(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = Dictionary_2_FindEntry_m6F594F43715DA5DE5ACC2303BDA19DD724C861BE(__this, ((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11))))), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_5 = __this->____entries;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		RuntimeObject* L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		return L_7;
	}

IL_0030:
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m52D17EE60DC51BAB2EE79895D6C10B81C9C0E031_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 49));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11)))));
		}
		try
		{
			uint32_t L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_set_Item_m3CB345D53D5DCD58561453AD5780EBC51E8DA379(__this, L_3, ((RuntimeObject*)Castclass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15))), il2cpp_rgctx_method(method->klass->rgctx_data, 50));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			RuntimeObject* L_5 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 51)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_7;
			L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_5, L_7, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		RuntimeObject* L_8 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 52)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_8, L_10, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m8EE916CE714A051B83BB108D77000536A67873D8_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_mAE1FA8B12CC95772D17A1602BE41C542E1EA61FF_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m8EE916CE714A051B83BB108D77000536A67873D8(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m61654FF64053B954D62E586B09309D37EEBB9FB3(__this, ((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11))))), il2cpp_rgctx_method(method->klass->rgctx_data, 53));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9B14368D78A0F4AAADCBDC2A22536726721AEEC6_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t42FC023879D0041F2016540629807C485A03B1A7 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m6BB73FBB588BB87421C1222CAE727AD52F96CAD4((&L_0), __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		Enumerator_t42FC023879D0041F2016540629807C485A03B1A7 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 29), &L_1);
		return (RuntimeObject*)L_2;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7745B6ED71E47C95E1BFCE647C4F026A404C668F_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	{
		((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mA5BF8973642D67EF56303F2867C75190756C3012_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m244D396B16E7F73DE815F4FFA6F35DD89B6ED7CB_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mCC4C1AFB623AE154F67437E7FC549449FF598526_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_5;
		L_5 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mA25D4973BD5467E89BE578B96BE246DE27E51638_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mBB454C6743410D3E06D44D494D4D6FF4CBBBDB1E_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		int32_t L_1 = __this->____freeCount;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* Dictionary_2_get_Keys_mD82D6690B1A801E8EED43F1B1D310893C9D334CF_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* L_1 = (KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 7));
		((  void (*) (KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55*, Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* L_2 = __this->____keys;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* Dictionary_2_get_Values_mE06FB7381D8152E35F0716DC7FE13788362112A7_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* L_1 = (ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		((  void (*) (ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40*, Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* L_2 = __this->____values;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_get_Item_m2E96908E9716367701CD737FA54C884EB2A8C3EA_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_6 = L_0;
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	const Il2CppFullySharedGenericAny L_8 = L_5;
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	memset(V_1, 0, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		int32_t L_1;
		L_1 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_0: *(void**)L_0));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		il2cpp_codegen_memcpy(L_5, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),3)), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		il2cpp_codegen_memcpy(il2cppRetVal, L_5, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		return;
	}

IL_001e:
	{
		il2cpp_codegen_memcpy(L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), L_6);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_7, NULL);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_1, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		il2cpp_codegen_memcpy(L_8, V_1, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		il2cpp_codegen_memcpy(il2cppRetVal, L_8, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m4C6841170DD11AED683D2D71919F362A4CFF4A80_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? ___1_value : &___1_value), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		bool L_2;
		L_2 = InvokerFuncInvoker3< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, uint8_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)), il2cpp_rgctx_method(method->klass->rgctx_data, 16), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_0: *(void**)L_0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_1: *(void**)L_1), (uint8_t)1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m54D479280472DEA042DB3933AF547E666B017333_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? ___1_value : &___1_value), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		bool L_2;
		L_2 = InvokerFuncInvoker3< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, uint8_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)), il2cpp_rgctx_method(method->klass->rgctx_data, 16), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_0: *(void**)L_0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_1: *(void**)L_1), (uint8_t)2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_mE4548F09815541C77E85AB57B86142B7D29C0A2F_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 ___0_keyValuePair, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)), il2cpp_rgctx_method(method->klass->rgctx_data, 18), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___0_keyValuePair, (Il2CppFullySharedGenericAny*)L_0);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)), il2cpp_rgctx_method(method->klass->rgctx_data, 19), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___0_keyValuePair, (Il2CppFullySharedGenericAny*)L_1);
		InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)), il2cpp_rgctx_method(method->klass->rgctx_data, 20), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_0: *(void**)L_0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_1: *(void**)L_1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m8A8F4B72BD2ED0C4171B69CDDB4F9201FAD62FB5_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 ___0_keyValuePair, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	int32_t V_0 = 0;
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)), il2cpp_rgctx_method(method->klass->rgctx_data, 18), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___0_keyValuePair, (Il2CppFullySharedGenericAny*)L_0);
		int32_t L_1;
		L_1 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_0: *(void**)L_0));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_3;
		L_3 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		il2cpp_codegen_memcpy(L_6, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),3)), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)), il2cpp_rgctx_method(method->klass->rgctx_data, 19), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___0_keyValuePair, (Il2CppFullySharedGenericAny*)L_7);
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_6: *(void**)L_6), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_7: *(void**)L_7));
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m47F4CC635C14FD742D41145FEAECD47FF3EC7910_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 ___0_keyValuePair, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_9 = L_0;
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	int32_t V_0 = 0;
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)), il2cpp_rgctx_method(method->klass->rgctx_data, 18), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___0_keyValuePair, (Il2CppFullySharedGenericAny*)L_0);
		int32_t L_1;
		L_1 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_0: *(void**)L_0));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_3;
		L_3 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		il2cpp_codegen_memcpy(L_6, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),3)), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)), il2cpp_rgctx_method(method->klass->rgctx_data, 19), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___0_keyValuePair, (Il2CppFullySharedGenericAny*)L_7);
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_6: *(void**)L_6), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_7: *(void**)L_7));
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)), il2cpp_rgctx_method(method->klass->rgctx_data, 18), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___0_keyValuePair, (Il2CppFullySharedGenericAny*)L_9);
		bool L_10;
		L_10 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 25)), il2cpp_rgctx_method(method->klass->rgctx_data, 25), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_9: *(void**)L_9));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m935B3F117860376DC854C9E0C80CBD99BE77EEA4_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		NullCheck(L_3);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____freeCount = 0;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mA268E9B914DCE838DD0CD9D879BAAEECD0C677AA_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		int32_t L_1;
		L_1 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_0: *(void**)L_0));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m6DD06FB7A6641F460E175909EE58B3E7EF585F46_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	const Il2CppFullySharedGenericAny L_8 = L_1;
	const Il2CppFullySharedGenericAny L_13 = L_1;
	const Il2CppFullySharedGenericAny L_21 = L_1;
	const Il2CppFullySharedGenericAny L_34 = L_1;
	const Il2CppFullySharedGenericAny L_22 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	const Il2CppFullySharedGenericAny L_35 = L_22;
	EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	memset(V_2, 0, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	int32_t V_3 = 0;
	EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_0 = __this->____entries;
		V_0 = L_0;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? ___0_value : &___0_value), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		bool L_2 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), L_1);
		if (L_2)
		{
			goto IL_0049;
		}
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),0));
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_6 = V_0;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		il2cpp_codegen_memcpy(L_8, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),3)), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		bool L_9 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), L_8);
		if (L_9)
		{
			goto IL_0037;
		}
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_003b:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = __this->____count;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		il2cpp_codegen_memcpy(L_13, V_2, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		bool L_14 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), L_13);
		if (!L_14)
		{
			goto IL_0096;
		}
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_15 = V_0;
		int32_t L_16 = V_3;
		NullCheck(L_15);
		int32_t L_17 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),0));
		if ((((int32_t)L_17) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_18;
		L_18 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_19 = V_0;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		il2cpp_codegen_memcpy(L_21, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),3)), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		il2cpp_codegen_memcpy(L_22, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? ___0_value : &___0_value), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		NullCheck(L_18);
		bool L_23;
		L_23 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_18, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_21: *(void**)L_21), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_22: *(void**)L_22));
		if (!L_23)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_24 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_008b:
	{
		int32_t L_25 = V_3;
		int32_t L_26 = __this->____count;
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_27;
		L_27 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		V_4 = L_27;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_28 = V_0;
		int32_t L_29 = V_5;
		NullCheck(L_28);
		int32_t L_30 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),0));
		if ((((int32_t)L_30) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_31 = V_4;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_32 = V_0;
		int32_t L_33 = V_5;
		NullCheck(L_32);
		il2cpp_codegen_memcpy(L_34, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_32)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_33))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),3)), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		il2cpp_codegen_memcpy(L_35, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? ___0_value : &___0_value), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		NullCheck(L_31);
		bool L_36;
		L_36 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_31, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_34: *(void**)L_34), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_35: *(void**)L_35));
		if (!L_36)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_37 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_00d1:
	{
		int32_t L_38 = V_5;
		int32_t L_39 = __this->____count;
		if ((((int32_t)L_38) < ((int32_t)L_39)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mCE58585215D412BBED56819DD8E7EFFCE8661BA1_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const uint32_t SizeOf_KeyValuePair_2_t572E990B4B51809E54C7F3B2647FD92FC9FD21AD = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 17));
	const Il2CppFullySharedGenericAny L_16 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_20 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_19 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_22 = alloca(SizeOf_KeyValuePair_2_t572E990B4B51809E54C7F3B2647FD92FC9FD21AD);
	int32_t V_0 = 0;
	EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_2 = ___0_array;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = ((  int32_t (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 27)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = __this->____count;
		V_0 = L_6;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_7 = __this->____entries;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),0));
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		il2cpp_codegen_memcpy(L_16, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),2)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		il2cpp_codegen_memcpy(L_19, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),3)), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		memset(L_22, 0, SizeOf_KeyValuePair_2_t572E990B4B51809E54C7F3B2647FD92FC9FD21AD);
		KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_22, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? il2cpp_codegen_memcpy(L_20, L_16, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47): *(void**)L_16), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? il2cpp_codegen_memcpy(L_21, L_19, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE): *(void**)L_19), il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		NullCheck(L_11);
		il2cpp_codegen_memcpy((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)), L_22, SizeOf_KeyValuePair_2_t572E990B4B51809E54C7F3B2647FD92FC9FD21AD);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 17), (void**)(L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)), (void*)L_22);
	}

IL_0071:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0075:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetEnumerator_mEC4954B142C43B5CBAA045953EAD4E168FFCD492_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_tB97DA7EC1CF5D2C0E4402389FF02F36A057755C1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 29));
	const Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1 L_0 = alloca(SizeOf_Enumerator_tB97DA7EC1CF5D2C0E4402389FF02F36A057755C1);
	{
		memset(L_0, 0, SizeOf_Enumerator_tB97DA7EC1CF5D2C0E4402389FF02F36A057755C1);
		Enumerator__ctor_m9ED6D04154B0287F36E8E29C5A49F8113F8D3ED1((Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)L_0, __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_Enumerator_tB97DA7EC1CF5D2C0E4402389FF02F36A057755C1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_mEB946BF1ED512ADDA66E4AC30F34573170773B8E_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_tB97DA7EC1CF5D2C0E4402389FF02F36A057755C1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 29));
	const Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1 L_0 = alloca(SizeOf_Enumerator_tB97DA7EC1CF5D2C0E4402389FF02F36A057755C1);
	{
		memset(L_0, 0, SizeOf_Enumerator_tB97DA7EC1CF5D2C0E4402389FF02F36A057755C1);
		Enumerator__ctor_m9ED6D04154B0287F36E8E29C5A49F8113F8D3ED1((Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)L_0, __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 29), L_0);
		return (RuntimeObject*)L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_m3683CF1DF17605C3CBFEB3DEC2D3C7D619DB1C06_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_6;
		L_6 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 32)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		NullCheck(L_11);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = ((  int32_t (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 27)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_14 = (KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57*)(KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 33), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_15 = V_0;
		((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 34)))(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 35)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m0ACF21DFA8D126AC00883594A96B45296ABDE79A_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	void* L_7 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 11)));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_14 = L_0;
	const Il2CppFullySharedGenericAny L_25 = L_0;
	const Il2CppFullySharedGenericAny L_44 = L_0;
	const Il2CppFullySharedGenericAny L_54 = L_0;
	const Il2CppFullySharedGenericAny L_70 = L_0;
	const Il2CppFullySharedGenericAny L_26 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_45 = L_26;
	const Il2CppFullySharedGenericAny L_71 = L_26;
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	Il2CppFullySharedGenericAny V_6 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	memset(V_6, 0, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* V_7 = NULL;
	int32_t V_8 = 0;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), L_0);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		V_1 = L_2;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_3 = __this->____entries;
		V_2 = L_3;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = V_1;
		if (!L_4)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_5 = __this->____comparer;
		V_4 = L_5;
		RuntimeObject* L_6 = V_4;
		if (L_6)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_8;
		L_8 = ConstrainedFuncInvoker0< int32_t >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 11), il2cpp_rgctx_method(method->klass->rgctx_data, 36), L_7, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___0_key : &___0_key));
		V_5 = ((int32_t)(L_8&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		int32_t L_10 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = V_1;
		NullCheck(L_11);
		NullCheck(L_9);
		int32_t L_12 = ((int32_t)(L_10%((int32_t)(((RuntimeArray*)L_11)->max_length))));
		int32_t L_13 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_6, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_14, V_6, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		bool L_15 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), L_14);
		if (!L_15)
		{
			goto IL_00b9;
		}
	}

IL_0066:
	{
		int32_t L_16 = V_0;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_17 = V_2;
		NullCheck(L_17);
		if ((!(((uint32_t)L_16) < ((uint32_t)((int32_t)(((RuntimeArray*)L_17)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_18 = V_2;
		int32_t L_19 = V_0;
		NullCheck(L_18);
		int32_t L_20 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),0));
		int32_t L_21 = V_5;
		if ((!(((uint32_t)L_20) == ((uint32_t)L_21))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_22;
		L_22 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_23 = V_2;
		int32_t L_24 = V_0;
		NullCheck(L_23);
		il2cpp_codegen_memcpy(L_25, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),2)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_26, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		NullCheck(L_22);
		bool L_27;
		L_27 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_22, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_25: *(void**)L_25), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_26: *(void**)L_26));
		if (L_27)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_28 = V_2;
		int32_t L_29 = V_0;
		NullCheck(L_28);
		int32_t L_30 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),1));
		V_0 = L_30;
		int32_t L_31 = V_3;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_32 = V_2;
		NullCheck(L_32);
		if ((((int32_t)L_31) < ((int32_t)((int32_t)(((RuntimeArray*)L_32)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_33 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_33, 1));
		goto IL_0066;
	}

IL_00b9:
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_34;
		L_34 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		V_7 = L_34;
	}

IL_00c0:
	{
		int32_t L_35 = V_0;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_36 = V_2;
		NullCheck(L_36);
		if ((!(((uint32_t)L_35) < ((uint32_t)((int32_t)(((RuntimeArray*)L_36)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_37 = V_2;
		int32_t L_38 = V_0;
		NullCheck(L_37);
		int32_t L_39 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_37)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_38))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),0));
		int32_t L_40 = V_5;
		if ((!(((uint32_t)L_39) == ((uint32_t)L_40))))
		{
			goto IL_00f2;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_41 = V_7;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_42 = V_2;
		int32_t L_43 = V_0;
		NullCheck(L_42);
		il2cpp_codegen_memcpy(L_44, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_42)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_43))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),2)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_45, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		NullCheck(L_41);
		bool L_46;
		L_46 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_41, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_44: *(void**)L_44), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_45: *(void**)L_45));
		if (L_46)
		{
			goto IL_0175;
		}
	}

IL_00f2:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_47 = V_2;
		int32_t L_48 = V_0;
		NullCheck(L_47);
		int32_t L_49 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),1));
		V_0 = L_49;
		int32_t L_50 = V_3;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_51 = V_2;
		NullCheck(L_51);
		if ((((int32_t)L_50) < ((int32_t)((int32_t)(((RuntimeArray*)L_51)->max_length)))))
		{
			goto IL_010a;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_010a:
	{
		int32_t L_52 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_52, 1));
		goto IL_00c0;
	}

IL_0110:
	{
		RuntimeObject* L_53 = V_4;
		il2cpp_codegen_memcpy(L_54, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		NullCheck(L_53);
		int32_t L_55;
		L_55 = InterfaceFuncInvoker1Invoker< int32_t, Il2CppFullySharedGenericAny >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_53, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_54: *(void**)L_54));
		V_8 = ((int32_t)(L_55&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_56 = V_1;
		int32_t L_57 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_58 = V_1;
		NullCheck(L_58);
		NullCheck(L_56);
		int32_t L_59 = ((int32_t)(L_57%((int32_t)(((RuntimeArray*)L_58)->max_length))));
		int32_t L_60 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_60, 1));
	}

IL_012b:
	{
		int32_t L_61 = V_0;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_62 = V_2;
		NullCheck(L_62);
		if ((!(((uint32_t)L_61) < ((uint32_t)((int32_t)(((RuntimeArray*)L_62)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_63 = V_2;
		int32_t L_64 = V_0;
		NullCheck(L_63);
		int32_t L_65 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_63)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_64))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),0));
		int32_t L_66 = V_8;
		if ((!(((uint32_t)L_65) == ((uint32_t)L_66))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_67 = V_4;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_68 = V_2;
		int32_t L_69 = V_0;
		NullCheck(L_68);
		il2cpp_codegen_memcpy(L_70, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_68)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_69))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),2)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_71, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		NullCheck(L_67);
		bool L_72;
		L_72 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_67, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_70: *(void**)L_70), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_71: *(void**)L_71));
		if (L_72)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_73 = V_2;
		int32_t L_74 = V_0;
		NullCheck(L_73);
		int32_t L_75 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_73)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_74))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),1));
		V_0 = L_75;
		int32_t L_76 = V_3;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_77 = V_2;
		NullCheck(L_77);
		if ((((int32_t)L_76) < ((int32_t)((int32_t)(((RuntimeArray*)L_77)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_78 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_78, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_79 = V_0;
		return L_79;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m5B001E697A07FFFE6B8E587225DADC4951F6D522_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_5 = (EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3*)(EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 40), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m475863DF7C3146B720288A85B96DA3790C484F09_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	void* L_11 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 11)));
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_9 = L_0;
	const Il2CppFullySharedGenericAny L_19 = L_0;
	const Il2CppFullySharedGenericAny L_30 = L_0;
	const Il2CppFullySharedGenericAny L_38 = L_0;
	const Il2CppFullySharedGenericAny L_56 = L_0;
	const Il2CppFullySharedGenericAny L_64 = L_0;
	const Il2CppFullySharedGenericAny L_81 = L_0;
	const Il2CppFullySharedGenericAny L_89 = L_0;
	const Il2CppFullySharedGenericAny L_122 = L_0;
	const Il2CppFullySharedGenericAny L_31 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_57 = L_31;
	const Il2CppFullySharedGenericAny L_82 = L_31;
	const Il2CppFullySharedGenericAny L_36 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	const Il2CppFullySharedGenericAny L_62 = L_36;
	const Il2CppFullySharedGenericAny L_87 = L_36;
	const Il2CppFullySharedGenericAny L_124 = L_36;
	EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* V_10 = NULL;
	Il2CppFullySharedGenericAny V_11 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	memset(V_11, 0, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), L_0);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		int32_t L_2 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_2, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		if (L_3)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_4;
		L_4 = ((  int32_t (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_002c:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_5 = __this->____entries;
		V_0 = L_5;
		RuntimeObject* L_6 = __this->____comparer;
		V_1 = L_6;
		RuntimeObject* L_7 = V_1;
		if (!L_7)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_8 = V_1;
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		NullCheck(L_8);
		int32_t L_10;
		L_10 = InterfaceFuncInvoker1Invoker< int32_t, Il2CppFullySharedGenericAny >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_9: *(void**)L_9));
		G_B7_0 = L_10;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_12;
		L_12 = ConstrainedFuncInvoker0< int32_t >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 11), il2cpp_rgctx_method(method->klass->rgctx_data, 36), L_11, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___0_key : &___0_key));
		G_B7_0 = L_12;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		int32_t L_14 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = __this->____buckets;
		NullCheck(L_15);
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_14%((int32_t)(((RuntimeArray*)L_15)->max_length)))))));
		int32_t* L_16 = V_4;
		int32_t L_17 = *((int32_t*)L_16);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_17, 1));
		RuntimeObject* L_18 = V_1;
		if (L_18)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_11, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_19, V_11, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		bool L_20 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), L_19);
		if (!L_20)
		{
			goto IL_010a;
		}
	}

IL_0091:
	{
		int32_t L_21 = V_5;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_22 = V_0;
		NullCheck(L_22);
		if ((!(((uint32_t)L_21) < ((uint32_t)((int32_t)(((RuntimeArray*)L_22)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_23 = V_0;
		int32_t L_24 = V_5;
		NullCheck(L_23);
		int32_t L_25 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),0));
		int32_t L_26 = V_2;
		if ((!(((uint32_t)L_25) == ((uint32_t)L_26))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_27;
		L_27 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_28 = V_0;
		int32_t L_29 = V_5;
		NullCheck(L_28);
		il2cpp_codegen_memcpy(L_30, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),2)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_31, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		NullCheck(L_27);
		bool L_32;
		L_32 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_27, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_30: *(void**)L_30), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_31: *(void**)L_31));
		if (!L_32)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_33 = ___2_behavior;
		if ((!(((uint32_t)L_33) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_34 = V_0;
		int32_t L_35 = V_5;
		NullCheck(L_34);
		il2cpp_codegen_memcpy(L_36, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? ___1_value : &___1_value), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		il2cpp_codegen_write_instance_field_data(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),3), L_36, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_37 = ___2_behavior;
		if ((!(((uint32_t)L_37) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		il2cpp_codegen_memcpy(L_38, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		RuntimeObject* L_39 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), L_38);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_39, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_40 = V_0;
		int32_t L_41 = V_5;
		NullCheck(L_40);
		int32_t L_42 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_40)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_41))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),1));
		V_5 = L_42;
		int32_t L_43 = V_3;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_44 = V_0;
		NullCheck(L_44);
		if ((((int32_t)L_43) < ((int32_t)((int32_t)(((RuntimeArray*)L_44)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_45 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_45, 1));
		goto IL_0091;
	}

IL_010a:
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_46;
		L_46 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		V_12 = L_46;
	}

IL_0111:
	{
		int32_t L_47 = V_5;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_48 = V_0;
		NullCheck(L_48);
		if ((!(((uint32_t)L_47) < ((uint32_t)((int32_t)(((RuntimeArray*)L_48)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_49 = V_0;
		int32_t L_50 = V_5;
		NullCheck(L_49);
		int32_t L_51 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_50))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),0));
		int32_t L_52 = V_2;
		if ((!(((uint32_t)L_51) == ((uint32_t)L_52))))
		{
			goto IL_0167;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_53 = V_12;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_54 = V_0;
		int32_t L_55 = V_5;
		NullCheck(L_54);
		il2cpp_codegen_memcpy(L_56, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_54)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_55))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),2)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_57, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		NullCheck(L_53);
		bool L_58;
		L_58 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_53, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_56: *(void**)L_56), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_57: *(void**)L_57));
		if (!L_58)
		{
			goto IL_0167;
		}
	}
	{
		uint8_t L_59 = ___2_behavior;
		if ((!(((uint32_t)L_59) == ((uint32_t)1))))
		{
			goto IL_0156;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_60 = V_0;
		int32_t L_61 = V_5;
		NullCheck(L_60);
		il2cpp_codegen_memcpy(L_62, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? ___1_value : &___1_value), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		il2cpp_codegen_write_instance_field_data(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_60)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_61))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),3), L_62, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		return (bool)1;
	}

IL_0156:
	{
		uint8_t L_63 = ___2_behavior;
		if ((!(((uint32_t)L_63) == ((uint32_t)2))))
		{
			goto IL_0165;
		}
	}
	{
		il2cpp_codegen_memcpy(L_64, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		RuntimeObject* L_65 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), L_64);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_65, NULL);
	}

IL_0165:
	{
		return (bool)0;
	}

IL_0167:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_66 = V_0;
		int32_t L_67 = V_5;
		NullCheck(L_66);
		int32_t L_68 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_66)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_67))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),1));
		V_5 = L_68;
		int32_t L_69 = V_3;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_70 = V_0;
		NullCheck(L_70);
		if ((((int32_t)L_69) < ((int32_t)((int32_t)(((RuntimeArray*)L_70)->max_length)))))
		{
			goto IL_0181;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0181:
	{
		int32_t L_71 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_71, 1));
		goto IL_0111;
	}

IL_0187:
	{
		int32_t L_72 = V_5;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_73 = V_0;
		NullCheck(L_73);
		if ((!(((uint32_t)L_72) < ((uint32_t)((int32_t)(((RuntimeArray*)L_73)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_74 = V_0;
		int32_t L_75 = V_5;
		NullCheck(L_74);
		int32_t L_76 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_74)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_75))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),0));
		int32_t L_77 = V_2;
		if ((!(((uint32_t)L_76) == ((uint32_t)L_77))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_78 = V_1;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_79 = V_0;
		int32_t L_80 = V_5;
		NullCheck(L_79);
		il2cpp_codegen_memcpy(L_81, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_79)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_80))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),2)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_82, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		NullCheck(L_78);
		bool L_83;
		L_83 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_78, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_81: *(void**)L_81), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_82: *(void**)L_82));
		if (!L_83)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_84 = ___2_behavior;
		if ((!(((uint32_t)L_84) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_85 = V_0;
		int32_t L_86 = V_5;
		NullCheck(L_85);
		il2cpp_codegen_memcpy(L_87, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? ___1_value : &___1_value), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		il2cpp_codegen_write_instance_field_data(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_85)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_86))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),3), L_87, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_88 = ___2_behavior;
		if ((!(((uint32_t)L_88) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		il2cpp_codegen_memcpy(L_89, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		RuntimeObject* L_90 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), L_89);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_90, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_91 = V_0;
		int32_t L_92 = V_5;
		NullCheck(L_91);
		int32_t L_93 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_91)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_92))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),1));
		V_5 = L_93;
		int32_t L_94 = V_3;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_95 = V_0;
		NullCheck(L_95);
		if ((((int32_t)L_94) < ((int32_t)((int32_t)(((RuntimeArray*)L_95)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_96 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_96, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_97 = __this->____freeCount;
		if ((((int32_t)L_97) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_98 = __this->____freeList;
		V_8 = L_98;
		V_7 = (bool)1;
		int32_t L_99 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_99, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_100 = __this->____count;
		V_13 = L_100;
		int32_t L_101 = V_13;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_102 = V_0;
		NullCheck(L_102);
		if ((!(((uint32_t)L_101) == ((uint32_t)((int32_t)(((RuntimeArray*)L_102)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 41)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_103 = V_13;
		V_8 = L_103;
		int32_t L_104 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_104, 1));
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_105 = __this->____entries;
		V_0 = L_105;
	}

IL_0250:
	{
		bool L_106 = V_6;
		if (L_106)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_107 = V_4;
		G_B51_0 = L_107;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_108 = __this->____buckets;
		int32_t L_109 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_110 = __this->____buckets;
		NullCheck(L_110);
		NullCheck(L_108);
		G_B51_0 = ((L_108)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_109%((int32_t)(((RuntimeArray*)L_110)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_111 = V_0;
		int32_t L_112 = V_8;
		NullCheck(L_111);
		V_10 = ((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_111)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_112)));
		bool L_113 = V_7;
		if (!L_113)
		{
			goto IL_028a;
		}
	}
	{
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_114 = V_10;
		int32_t L_115 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_114, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),1));
		__this->____freeList = L_115;
	}

IL_028a:
	{
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_116 = V_10;
		int32_t L_117 = V_2;
		il2cpp_codegen_write_instance_field_data<int32_t>(L_116, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),0), L_117);
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_118 = V_10;
		int32_t* L_119 = V_9;
		int32_t L_120 = *((int32_t*)L_119);
		il2cpp_codegen_write_instance_field_data<int32_t>(L_118, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),1), ((int32_t)il2cpp_codegen_subtract(L_120, 1)));
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_121 = V_10;
		il2cpp_codegen_memcpy(L_122, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_write_instance_field_data(L_121, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),2), L_122, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_123 = V_10;
		il2cpp_codegen_memcpy(L_124, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? ___1_value : &___1_value), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		il2cpp_codegen_write_instance_field_data(L_123, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),3), L_124, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		int32_t* L_125 = V_9;
		int32_t L_126 = V_8;
		*((int32_t*)L_125) = (int32_t)((int32_t)il2cpp_codegen_add(L_126, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_mCE3F24CD19D6E1AAEE9202CFE6CD1E8DA8821552_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_25 = L_21;
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericAny L_28 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 32)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = ((  int32_t (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 35)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 26)));
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)), il2cpp_rgctx_method(method->klass->rgctx_data, 18), ((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)(L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), (Il2CppFullySharedGenericAny*)L_21);
		bool L_22 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), L_21);
		if (L_22)
		{
			goto IL_009a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)17), NULL);
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_23 = V_3;
		int32_t L_24 = V_4;
		NullCheck(L_23);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)), il2cpp_rgctx_method(method->klass->rgctx_data, 18), ((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)(L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24))), (Il2CppFullySharedGenericAny*)L_25);
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_26 = V_3;
		int32_t L_27 = V_4;
		NullCheck(L_26);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)), il2cpp_rgctx_method(method->klass->rgctx_data, 19), ((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)(L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27))), (Il2CppFullySharedGenericAny*)L_28);
		InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)), il2cpp_rgctx_method(method->klass->rgctx_data, 20), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_25: *(void**)L_25), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_28: *(void**)L_28));
		int32_t L_29 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_00c0:
	{
		int32_t L_30 = V_4;
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_31 = V_3;
		NullCheck(L_31);
		if ((((int32_t)L_30) < ((int32_t)((int32_t)(((RuntimeArray*)L_31)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_32 = V_1;
		__this->____version = L_32;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_33;
		L_33 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_33);
		bool L_34;
		L_34 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_33, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m31D02FB7F34F222948CBAED016A60562ECE1A8D5_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, int32_t, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 43)))(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m2F0D524EB63EBDE00430EA093CADA3AF6FABF4CA_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	void* L_19 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 11)));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* V_1 = NULL;
	int32_t V_2 = 0;
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	memset(V_3, 0, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_3 = (EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3*)(EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 40), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_5 = __this->____entries;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_3, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_8, V_3, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		bool L_9 = !il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), L_8);
		bool L_10 = L_9;
		bool L_11 = ___1_forceNewHashCodes;
		if (!((int32_t)((int32_t)L_10&(int32_t)L_11)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_12 = V_1;
		int32_t L_13 = V_4;
		NullCheck(L_12);
		int32_t L_14 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),0));
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_17 = V_1;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		int32_t L_20;
		L_20 = ConstrainedFuncInvoker0< int32_t >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 11), il2cpp_rgctx_method(method->klass->rgctx_data, 36), L_19, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),2)))));
		il2cpp_codegen_write_instance_field_data<int32_t>(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),0), ((int32_t)(L_20&((int32_t)2147483647LL))));
	}

IL_0079:
	{
		int32_t L_21 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_007f:
	{
		int32_t L_22 = V_4;
		int32_t L_23 = V_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_24 = V_1;
		int32_t L_25 = V_5;
		NullCheck(L_24);
		int32_t L_26 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),0));
		if ((((int32_t)L_26) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_27 = V_1;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		int32_t L_29 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),0));
		int32_t L_30 = ___0_newSize;
		V_6 = ((int32_t)(L_29%L_30));
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_31 = V_1;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = V_0;
		int32_t L_34 = V_6;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		int32_t L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		il2cpp_codegen_write_instance_field_data<int32_t>(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),1), ((int32_t)il2cpp_codegen_subtract(L_36, 1)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = V_0;
		int32_t L_38 = V_6;
		int32_t L_39 = V_5;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (int32_t)((int32_t)il2cpp_codegen_add(L_39, 1)));
	}

IL_00c5:
	{
		int32_t L_40 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00cb:
	{
		int32_t L_41 = V_5;
		int32_t L_42 = V_2;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_43 = V_0;
		__this->____buckets = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_43);
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_44 = V_1;
		__this->____entries = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_44);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m583C4F0E2926B584BE6EC6008195360FC631C14C_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	void* L_5 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 11)));
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_7 = L_0;
	const Il2CppFullySharedGenericAny L_24 = L_0;
	const Il2CppFullySharedGenericAny L_28 = L_0;
	const Il2CppFullySharedGenericAny L_25 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_29 = L_25;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), L_0);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (!L_2)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_3 = __this->____comparer;
		RuntimeObject* L_4 = L_3;
		if (L_4)
		{
			G_B5_0 = L_4;
			goto IL_0032;
		}
		G_B4_0 = L_4;
	}
	{
		int32_t L_6;
		L_6 = ConstrainedFuncInvoker0< int32_t >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 11), il2cpp_rgctx_method(method->klass->rgctx_data, 36), L_5, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___0_key : &___0_key));
		G_B6_0 = L_6;
		goto IL_0038;
	}

IL_0032:
	{
		il2cpp_codegen_memcpy(L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		NullCheck(G_B5_0);
		int32_t L_8;
		L_8 = InterfaceFuncInvoker1Invoker< int32_t, Il2CppFullySharedGenericAny >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_7: *(void**)L_7));
		G_B6_0 = L_8;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_9 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		NullCheck(L_10);
		V_1 = ((int32_t)(L_9%((int32_t)(((RuntimeArray*)L_10)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		int32_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_14, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_15 = __this->____entries;
		int32_t L_16 = V_3;
		NullCheck(L_15);
		V_4 = ((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)));
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_17 = V_4;
		int32_t L_18 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_17, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),0));
		int32_t L_19 = V_0;
		if ((!(((uint32_t)L_18) == ((uint32_t)L_19))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_20 = __this->____comparer;
		RuntimeObject* L_21 = L_20;
		if (L_21)
		{
			G_B10_0 = L_21;
			goto IL_0095;
		}
		G_B9_0 = L_21;
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_22;
		L_22 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_23 = V_4;
		il2cpp_codegen_memcpy(L_24, il2cpp_codegen_get_instance_field_data_pointer(L_23, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),2)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_25, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		NullCheck(L_22);
		bool L_26;
		L_26 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_22, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_24: *(void**)L_24), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_25: *(void**)L_25));
		G_B11_0 = L_26;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_27 = V_4;
		il2cpp_codegen_memcpy(L_28, il2cpp_codegen_get_instance_field_data_pointer(L_27, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),2)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_29, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		NullCheck(G_B10_0);
		bool L_30;
		L_30 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_28: *(void**)L_28), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_29: *(void**)L_29));
		G_B11_0 = L_30;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_31 = V_2;
		if ((((int32_t)L_31) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = __this->____buckets;
		int32_t L_33 = V_1;
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_34 = V_4;
		int32_t L_35 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_34, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),1));
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(L_33), (int32_t)((int32_t)il2cpp_codegen_add(L_35, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_36 = __this->____entries;
		int32_t L_37 = V_2;
		NullCheck(L_36);
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_38 = V_4;
		int32_t L_39 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_38, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),1));
		il2cpp_codegen_write_instance_field_data<int32_t>(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_36)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_37))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),1), L_39);
	}

IL_00d6:
	{
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_40 = V_4;
		il2cpp_codegen_write_instance_field_data<int32_t>(L_40, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),0), (-1));
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_41 = V_4;
		int32_t L_42 = __this->____freeList;
		il2cpp_codegen_write_instance_field_data<int32_t>(L_41, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),1), L_42);
		bool L_43;
		L_43 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		if (!L_43)
		{
			goto IL_00ff;
		}
	}
	{
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_44 = V_4;
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(L_44, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),2)))), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	}

IL_00ff:
	{
		bool L_45;
		L_45 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		if (!L_45)
		{
			goto IL_0113;
		}
	}
	{
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_46 = V_4;
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(L_46, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),3)))), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	}

IL_0113:
	{
		int32_t L_47 = V_3;
		__this->____freeList = L_47;
		int32_t L_48 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_48, 1));
		int32_t L_49 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_49, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_50 = V_3;
		V_2 = L_50;
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_51 = V_4;
		int32_t L_52 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_51, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),1));
		V_3 = L_52;
	}

IL_0142:
	{
		int32_t L_53 = V_3;
		if ((((int32_t)L_53) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m7519D765EAF1E8A7D3137C2F1B7B3A01D15A1692_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny* ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	int32_t V_0 = 0;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		int32_t L_1;
		L_1 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_0: *(void**)L_0));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_3 = ___1_value;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		il2cpp_codegen_memcpy(L_6, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),3)), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_3, L_6, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 15), (void**)(Il2CppFullySharedGenericAny*)L_3, (void*)L_6);
		return (bool)1;
	}

IL_0025:
	{
		Il2CppFullySharedGenericAny* L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m71BC76FB3076464E2CF2D51E2607CCF7E51083FF_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? ___1_value : &___1_value), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		bool L_2;
		L_2 = InvokerFuncInvoker3< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, uint8_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)), il2cpp_rgctx_method(method->klass->rgctx_data, 16), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_0: *(void**)L_0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_1: *(void**)L_1), (uint8_t)0);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m49382184C24B9222DF183D303DDE539D20217D5A_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_mD6AE43E992177C3F738687180B1BC97BDBAADE51_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 34)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_mBDBCC7A542FE485FFCDDD79C6453338ACEB4E9D9_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const uint32_t SizeOf_KeyValuePair_2_t572E990B4B51809E54C7F3B2647FD92FC9FD21AD = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 17));
	const Il2CppFullySharedGenericAny L_27 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_49 = L_27;
	const Il2CppFullySharedGenericAny L_53 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_31 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	const Il2CppFullySharedGenericAny L_52 = L_31;
	const Il2CppFullySharedGenericAny L_54 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_55 = alloca(SizeOf_KeyValuePair_2_t572E990B4B51809E54C7F3B2647FD92FC9FD21AD);
	KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = ((  int32_t (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 27)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 26)));
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_14 = V_0;
		int32_t L_15 = ___1_index;
		((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 34)))(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_18 = __this->____entries;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),0));
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		il2cpp_codegen_memcpy(L_27, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),2)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), L_27);
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_29 = V_2;
		int32_t L_30 = V_3;
		NullCheck(L_29);
		il2cpp_codegen_memcpy(L_31, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),3)), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		RuntimeObject* L_32 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), L_31);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_33;
		memset((&L_33), 0, sizeof(L_33));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_33), L_28, L_32, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_33);
	}

IL_00b5:
	{
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b9:
	{
		int32_t L_35 = V_3;
		int32_t L_36 = __this->____count;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_37 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_37, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = V_4;
		if (L_38)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_39 = __this->____count;
			V_5 = L_39;
			EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_40 = __this->____entries;
			V_6 = L_40;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_41 = V_6;
			int32_t L_42 = V_7;
			NullCheck(L_41);
			int32_t L_43 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),0));
			if ((((int32_t)L_43) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = V_4;
			int32_t L_45 = ___1_index;
			int32_t L_46 = L_45;
			___1_index = ((int32_t)il2cpp_codegen_add(L_46, 1));
			EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_47 = V_6;
			int32_t L_48 = V_7;
			NullCheck(L_47);
			il2cpp_codegen_memcpy(L_49, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),2)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
			EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_50 = V_6;
			int32_t L_51 = V_7;
			NullCheck(L_50);
			il2cpp_codegen_memcpy(L_52, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),3)), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
			memset(L_55, 0, SizeOf_KeyValuePair_2_t572E990B4B51809E54C7F3B2647FD92FC9FD21AD);
			KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_55, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? il2cpp_codegen_memcpy(L_53, L_49, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47): *(void**)L_49), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? il2cpp_codegen_memcpy(L_54, L_52, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE): *(void**)L_52), il2cpp_rgctx_method(method->klass->rgctx_data, 28));
			RuntimeObject* L_56 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 17), L_55);
			NullCheck(L_44);
			ArrayElementTypeCheck (L_44, L_56);
			(L_44)->SetAt(static_cast<il2cpp_array_size_t>(L_46), (RuntimeObject*)L_56);
		}

IL_012a_1:
		{
			int32_t L_57 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_57, 1));
		}

IL_0130_1:
		{
			int32_t L_58 = V_7;
			int32_t L_59 = V_5;
			if ((((int32_t)L_58) < ((int32_t)L_59)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m44022592FB7F74617DDAE1914E3376A2C38A0CBB_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_tB97DA7EC1CF5D2C0E4402389FF02F36A057755C1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 29));
	const Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1 L_0 = alloca(SizeOf_Enumerator_tB97DA7EC1CF5D2C0E4402389FF02F36A057755C1);
	{
		memset(L_0, 0, SizeOf_Enumerator_tB97DA7EC1CF5D2C0E4402389FF02F36A057755C1);
		Enumerator__ctor_m9ED6D04154B0287F36E8E29C5A49F8113F8D3ED1((Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)L_0, __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 29), L_0);
		return (RuntimeObject*)L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_EnsureCapacity_m195D9C8DE45E7DAC677E02DC0DB5E179F5BBE3BB_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_000b:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_1 = __this->____entries;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_2 = __this->____entries;
		NullCheck(L_2);
		G_B5_0 = ((int32_t)(((RuntimeArray*)L_2)->max_length));
		goto IL_001e;
	}

IL_001d:
	{
		G_B5_0 = 0;
	}

IL_001e:
	{
		V_0 = G_B5_0;
		int32_t L_3 = V_0;
		int32_t L_4 = ___0_capacity;
		if ((((int32_t)L_3) < ((int32_t)L_4)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_5 = V_0;
		return L_5;
	}

IL_0025:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->____buckets;
		if (L_6)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_7 = ___0_capacity;
		int32_t L_8;
		L_8 = ((  int32_t (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return L_8;
	}

IL_0035:
	{
		int32_t L_9 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_10;
		L_10 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_9, NULL);
		V_1 = L_10;
		int32_t L_11 = V_1;
		((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, int32_t, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 43)))(__this, L_11, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		int32_t L_12 = V_1;
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9E5D75EF1543AC00AA3F3BC3D6149B59826438B1_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_mC48AC2C347286C71BD0E25A923FDA569D3B0960B_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 47)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11), L_3);
		int32_t L_5;
		L_5 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4))): *(void**)(((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4)))));
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_7 = __this->____entries;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		il2cpp_codegen_memcpy(L_9, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),3)), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), L_9);
		return L_10;
	}

IL_0030:
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m0444A06383E554B1CE9AD1D51B74A570C71A2F20_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_5 = L_3;
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	memset(V_0, 0, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 49)))(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 49));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11), L_3);
			il2cpp_codegen_memcpy(V_0, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4))), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		}
		try
		{
			il2cpp_codegen_memcpy(L_5, V_0, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
			RuntimeObject* L_6 = ___1_value;
			void* L_8 = UnBox_Any(L_6, il2cpp_rgctx_data(method->klass->rgctx_data, 15), L_7);
			InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 50)), il2cpp_rgctx_method(method->klass->rgctx_data, 50), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_5: *(void**)L_5), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_8))): *(void**)(((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_8)))));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			RuntimeObject* L_9 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 51)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_11;
			L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_9, L_11, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		RuntimeObject* L_12 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 52)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_12, L_14, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mA1591D0B0BE4E9F654AE63DE747722F557C1092B_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_m72E82A4B5B5ABC5F5D625BC047C22894796F3F76_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 47)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11), L_3);
		bool L_5;
		L_5 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 53)), il2cpp_rgctx_method(method->klass->rgctx_data, 53), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4))): *(void**)(((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4)))));
		return L_5;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_m72D69D25532F2EA8DEE802868E8CC3282018A5D9_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_tB97DA7EC1CF5D2C0E4402389FF02F36A057755C1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 29));
	const Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1 L_0 = alloca(SizeOf_Enumerator_tB97DA7EC1CF5D2C0E4402389FF02F36A057755C1);
	{
		memset(L_0, 0, SizeOf_Enumerator_tB97DA7EC1CF5D2C0E4402389FF02F36A057755C1);
		Enumerator__ctor_m9ED6D04154B0287F36E8E29C5A49F8113F8D3ED1((Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)L_0, __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 29), L_0);
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m3A972FD6D3B419C491615DEAF5727957266B2103_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_m5D02FAD2A12EA06505B72CAA8254714063C298F8(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m80A438E817EFD7A63806E2AA6A36765099E76981_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_m5D02FAD2A12EA06505B72CAA8254714063C298F8(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8B0FF306D82A6E5AA52869ECC3CF8267D3F490_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_m5D02FAD2A12EA06505B72CAA8254714063C298F8(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5D02FAD2A12EA06505B72CAA8254714063C298F8_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m26848AD8E4E7357E68D80575255064B9DCE9A824(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1* L_5;
		L_5 = EqualityComparer_1_get_Default_mB9A6897EE9C611611709E29230AB2F1D3D0BA6ED_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m13A38C223F0BABEECE1B8FCD3D03199345768B91_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m5334B4276CF45A2AFE4E47D4583C5430CFA23B92_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		int32_t L_1 = __this->____freeCount;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t6725DF5AC7475F617DDB9DA237871AD9FAB80D75* Dictionary_2_get_Keys_m5D309558625C4B9B2702291A262D19E9409FC1B8_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t6725DF5AC7475F617DDB9DA237871AD9FAB80D75* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t6725DF5AC7475F617DDB9DA237871AD9FAB80D75* L_1 = (KeyCollection_t6725DF5AC7475F617DDB9DA237871AD9FAB80D75*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 7));
		KeyCollection__ctor_m7DD9CC8A8D66F5E96F17286F215CD22CCCDD1DF7(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t6725DF5AC7475F617DDB9DA237871AD9FAB80D75* L_2 = __this->____keys;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t0F016B1C5BEC58DAA0BA4B0A2699B389590BC305* Dictionary_2_get_Values_mBD99ABB93B744242980847DE776989C8ACB1C777_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t0F016B1C5BEC58DAA0BA4B0A2699B389590BC305* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t0F016B1C5BEC58DAA0BA4B0A2699B389590BC305* L_1 = (ValueCollection_t0F016B1C5BEC58DAA0BA4B0A2699B389590BC305*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		ValueCollection__ctor_m4CA056E40F3696B0F634BE02C68CE9107C7598C8(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t0F016B1C5BEC58DAA0BA4B0A2699B389590BC305* L_2 = __this->____values;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m07A39878AD2C13A3EC348DD0E2F64641E43E0D1A_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m84136518562E6B82BBE9137A49334CAA61460DCA(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		return L_5;
	}

IL_001e:
	{
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_6 = ___0_key;
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject*));
		RuntimeObject* L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m2387B91BA1614F8BD0037CF10888678FC0213FF0_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mBC95B064A09BDE7AB5494475F83B35DC450DC81B(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mF175AF090385B15584E0E8CFC61400B38BC707D6_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mBC95B064A09BDE7AB5494475F83B35DC450DC81B(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_mB65EE0BBB002345A08BAE76881973CA1F6A55FB3_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95 ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_0;
		L_0 = KeyValuePair_2_get_Key_m301F56606347366561A21E8CCD7F3ACB3FFE4D78_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		RuntimeObject* L_1;
		L_1 = KeyValuePair_2_get_Value_m4F875C153A42456E08401E2C5B26FFC6685F8569_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		Dictionary_2_Add_mF175AF090385B15584E0E8CFC61400B38BC707D6(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m23E94334E94EFA7622F0EC303B8D0CE2235DA010_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_0;
		L_0 = KeyValuePair_2_get_Key_m301F56606347366561A21E8CCD7F3ACB3FFE4D78_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m84136518562E6B82BBE9137A49334CAA61460DCA(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3;
		L_3 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		RuntimeObject* L_7;
		L_7 = KeyValuePair_2_get_Value_m4F875C153A42456E08401E2C5B26FFC6685F8569_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_mB3F3BE11C2E5D75AED5396B2CB10742E6F0800BF_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_0;
		L_0 = KeyValuePair_2_get_Key_m301F56606347366561A21E8CCD7F3ACB3FFE4D78_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m84136518562E6B82BBE9137A49334CAA61460DCA(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3;
		L_3 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		RuntimeObject* L_7;
		L_7 = KeyValuePair_2_get_Value_m4F875C153A42456E08401E2C5B26FFC6685F8569_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_9;
		L_9 = KeyValuePair_2_get_Key_m301F56606347366561A21E8CCD7F3ACB3FFE4D78_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		bool L_10;
		L_10 = Dictionary_2_Remove_m3CC589B84EA444155C4BFDB77E52E1F97E5D5D88(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m63C07905E27C05BB33617E4BAFD09CD2048B1D9D_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		NullCheck(L_3);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____freeCount = 0;
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mD3382707B0A0977575551EF563A509A60695AD4F_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 ___0_key, const RuntimeMethod* method) 
{
	{
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m84136518562E6B82BBE9137A49334CAA61460DCA(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_mB41AF7C04A1CCE400BA62B99CCC303504102AAE8_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	int32_t V_3 = 0;
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_0 = __this->____entries;
		V_0 = L_0;
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_0049;
		}
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		RuntimeObject* L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		if (L_7)
		{
			goto IL_0037;
		}
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = __this->____count;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject*));
		RuntimeObject* L_11 = V_2;
		if (!L_11)
		{
			goto IL_0096;
		}
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_12 = V_0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_15;
		L_15 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_16 = V_0;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		RuntimeObject* L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value;
		RuntimeObject* L_19 = ___0_value;
		NullCheck(L_15);
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008b:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = __this->____count;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_24;
		L_24 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_28 = V_4;
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_29 = V_0;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		RuntimeObject* L_31 = ((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___value;
		RuntimeObject* L_32 = ___0_value;
		NullCheck(L_28);
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_28, L_31, L_32);
		if (!L_33)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d1:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = __this->____count;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mB170132B09124D49C071D29B61DF9425C9351DA9_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12* L_2 = ___0_array;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = Dictionary_2_get_Count_m5334B4276CF45A2AFE4E47D4583C5430CFA23B92(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = __this->____count;
		V_0 = L_6;
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_7 = __this->____entries;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key;
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		RuntimeObject* L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value;
		KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95 L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_m96D7A05CA73361B4E4F4FB15107EAD3EBE3913A2((&L_20), L_16, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB7298ABA389EB46AD2BEB2E35D7FF51A6525D750 Dictionary_2_GetEnumerator_m86A96D4E7AF5EB4FC9401A17B71821C524C98403_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tB7298ABA389EB46AD2BEB2E35D7FF51A6525D750 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m6C95957B43BCC65A410E34547B3934C5A51E0B0D((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_mE4242487DEA1CA4F9083B7E751F70DECD5A6C5AA_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tB7298ABA389EB46AD2BEB2E35D7FF51A6525D750 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m6C95957B43BCC65A410E34547B3934C5A51E0B0D((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		Enumerator_tB7298ABA389EB46AD2BEB2E35D7FF51A6525D750 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 29), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_mEFD0BDDBCFE15749CD2E0D7AD58E6A7550D6BF74_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1* L_6;
		L_6 = EqualityComparer_1_get_Default_mB9A6897EE9C611611709E29230AB2F1D3D0BA6ED_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 32)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		NullCheck(L_11);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = Dictionary_2_get_Count_m5334B4276CF45A2AFE4E47D4583C5430CFA23B92(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12* L_14 = (KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12*)(KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 33), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12* L_15 = V_0;
		Dictionary_2_CopyTo_mB170132B09124D49C071D29B61DF9425C9351DA9(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 35)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m84136518562E6B82BBE9137A49334CAA61460DCA_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 V_6;
	memset((&V_6), 0, sizeof(V_6));
	EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_1 = L_1;
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_2 = __this->____entries;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = CachedCodeEntryKey_GetHashCode_m253B53C100F840B987A487020F02184019D776DE((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_15 = V_2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1* L_19;
		L_19 = EqualityComparer_1_get_Default_mB9A6897EE9C611611709E29230AB2F1D3D0BA6ED_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_20 = V_2;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___key;
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_23 = ___0_key;
		NullCheck(L_19);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 >::Invoke(8, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_0110:
	{
		RuntimeObject* L_31 = V_4;
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_32 = ___0_key;
		NullCheck(L_31);
		int32_t L_33;
		L_33 = InterfaceFuncInvoker1< int32_t, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_31, L_32);
		V_8 = ((int32_t)(L_33&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_1;
		int32_t L_35 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_1;
		NullCheck(L_36);
		NullCheck(L_34);
		int32_t L_37 = ((int32_t)(L_35%((int32_t)(((RuntimeArray*)L_36)->max_length))));
		int32_t L_38 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
	}

IL_012b:
	{
		int32_t L_39 = V_0;
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_40 = V_2;
		NullCheck(L_40);
		if ((!(((uint32_t)L_39) < ((uint32_t)((int32_t)(((RuntimeArray*)L_40)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_41 = V_2;
		int32_t L_42 = V_0;
		NullCheck(L_41);
		int32_t L_43 = ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
		int32_t L_44 = V_8;
		if ((!(((uint32_t)L_43) == ((uint32_t)L_44))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_45 = V_4;
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_46 = V_2;
		int32_t L_47 = V_0;
		NullCheck(L_46);
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_48 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___key;
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_49 = ___0_key;
		NullCheck(L_45);
		bool L_50;
		L_50 = InterfaceFuncInvoker2< bool, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_45, L_48, L_49);
		if (L_50)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_51 = V_2;
		int32_t L_52 = V_0;
		NullCheck(L_51);
		int32_t L_53 = ((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___next;
		V_0 = L_53;
		int32_t L_54 = V_3;
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_55 = V_2;
		NullCheck(L_55);
		if ((((int32_t)L_54) < ((int32_t)((int32_t)(((RuntimeArray*)L_55)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_56 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_57 = V_0;
		return L_57;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m26848AD8E4E7357E68D80575255064B9DCE9A824_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_5 = (EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F*)(EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 40), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mBC95B064A09BDE7AB5494475F83B35DC450DC81B_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 ___0_key, RuntimeObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_tEC2FCD90BA00C992320FFF0D4A74509526BF8CA1* V_10 = NULL;
	CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 V_11;
	memset((&V_11), 0, sizeof(V_11));
	EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m26848AD8E4E7357E68D80575255064B9DCE9A824(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_002c:
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_4 = __this->____entries;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_8 = ___0_key;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = CachedCodeEntryKey_GetHashCode_m253B53C100F840B987A487020F02184019D776DE((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		NullCheck(L_13);
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_20 = V_0;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1* L_24;
		L_24 = EqualityComparer_1_get_Default_mB9A6897EE9C611611709E29230AB2F1D3D0BA6ED_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_28 = ___0_key;
		NullCheck(L_24);
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 >::Invoke(8, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___2_behavior;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		RuntimeObject* L_33 = ___1_value;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value), (void*)L_33);
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___2_behavior;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_35 = ___0_key;
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_38 = V_0;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		int32_t L_40 = ((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___next;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_42 = V_0;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_0187:
	{
		int32_t L_44 = V_5;
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_45 = V_0;
		NullCheck(L_45);
		if ((!(((uint32_t)L_44) < ((uint32_t)((int32_t)(((RuntimeArray*)L_45)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_46 = V_0;
		int32_t L_47 = V_5;
		NullCheck(L_46);
		int32_t L_48 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___hashCode;
		int32_t L_49 = V_2;
		if ((!(((uint32_t)L_48) == ((uint32_t)L_49))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_50 = V_1;
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_51 = V_0;
		int32_t L_52 = V_5;
		NullCheck(L_51);
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_53 = ((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___key;
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_54 = ___0_key;
		NullCheck(L_50);
		bool L_55;
		L_55 = InterfaceFuncInvoker2< bool, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_50, L_53, L_54);
		if (!L_55)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_56 = ___2_behavior;
		if ((!(((uint32_t)L_56) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_57 = V_0;
		int32_t L_58 = V_5;
		NullCheck(L_57);
		RuntimeObject* L_59 = ___1_value;
		((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value = L_59;
		Il2CppCodeGenWriteBarrier((void**)(&((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value), (void*)L_59);
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_60 = ___2_behavior;
		if ((!(((uint32_t)L_60) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_61 = ___0_key;
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_62);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_63, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_64 = V_0;
		int32_t L_65 = V_5;
		NullCheck(L_64);
		int32_t L_66 = ((L_64)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_65)))->___next;
		V_5 = L_66;
		int32_t L_67 = V_3;
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_68 = V_0;
		NullCheck(L_68);
		if ((((int32_t)L_67) < ((int32_t)((int32_t)(((RuntimeArray*)L_68)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_69 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_69, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_70 = __this->____freeCount;
		if ((((int32_t)L_70) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_71 = __this->____freeList;
		V_8 = L_71;
		V_7 = (bool)1;
		int32_t L_72 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_72, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_73 = __this->____count;
		V_13 = L_73;
		int32_t L_74 = V_13;
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_75 = V_0;
		NullCheck(L_75);
		if ((!(((uint32_t)L_74) == ((uint32_t)((int32_t)(((RuntimeArray*)L_75)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_m897DFE92D2953E564DE90594548FCAFE0981A375(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_76 = V_13;
		V_8 = L_76;
		int32_t L_77 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_77, 1));
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_78 = __this->____entries;
		V_0 = L_78;
	}

IL_0250:
	{
		bool L_79 = V_6;
		if (L_79)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_80 = V_4;
		G_B51_0 = L_80;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_81 = __this->____buckets;
		int32_t L_82 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_83 = __this->____buckets;
		NullCheck(L_83);
		NullCheck(L_81);
		G_B51_0 = ((L_81)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_82%((int32_t)(((RuntimeArray*)L_83)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_84 = V_0;
		int32_t L_85 = V_8;
		NullCheck(L_84);
		V_10 = ((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)));
		bool L_86 = V_7;
		if (!L_86)
		{
			goto IL_028a;
		}
	}
	{
		Entry_tEC2FCD90BA00C992320FFF0D4A74509526BF8CA1* L_87 = V_10;
		int32_t L_88 = L_87->___next;
		__this->____freeList = L_88;
	}

IL_028a:
	{
		Entry_tEC2FCD90BA00C992320FFF0D4A74509526BF8CA1* L_89 = V_10;
		int32_t L_90 = V_2;
		L_89->___hashCode = L_90;
		Entry_tEC2FCD90BA00C992320FFF0D4A74509526BF8CA1* L_91 = V_10;
		int32_t* L_92 = V_9;
		int32_t L_93 = *((int32_t*)L_92);
		L_91->___next = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		Entry_tEC2FCD90BA00C992320FFF0D4A74509526BF8CA1* L_94 = V_10;
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_95 = ___0_key;
		L_94->___key = L_95;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_94->___key))->____cultureKey), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_94->___key))->____pattern), (void*)NULL);
		#endif
		Entry_tEC2FCD90BA00C992320FFF0D4A74509526BF8CA1* L_96 = V_10;
		RuntimeObject* L_97 = ___1_value;
		L_96->___value = L_97;
		Il2CppCodeGenWriteBarrier((void**)(&L_96->___value), (void*)L_97);
		int32_t* L_98 = V_9;
		int32_t L_99 = V_8;
		*((int32_t*)L_98) = (int32_t)((int32_t)il2cpp_codegen_add(L_99, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_m30C69800F481DF95A3C2B26672083C4942C7AF6A_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 32)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_m26848AD8E4E7357E68D80575255064B9DCE9A824(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 35)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 26)));
		KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_21;
		L_21 = KeyValuePair_2_get_Key_m301F56606347366561A21E8CCD7F3ACB3FFE4D78_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		goto IL_009a;
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_24;
		L_24 = KeyValuePair_2_get_Key_m301F56606347366561A21E8CCD7F3ACB3FFE4D78_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		RuntimeObject* L_27;
		L_27 = KeyValuePair_2_get_Value_m4F875C153A42456E08401E2C5B26FFC6685F8569_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		Dictionary_2_Add_mF175AF090385B15584E0E8CFC61400B38BC707D6(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m897DFE92D2953E564DE90594548FCAFE0981A375_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_m985506E79EE868501F78DDACCA0D0748751E5327(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m985506E79EE868501F78DDACCA0D0748751E5327_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* V_1 = NULL;
	int32_t V_2 = 0;
	CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_3 = (EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F*)(EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 40), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_5 = __this->____entries;
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31));
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)((int32_t)false&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_10 = V_1;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_13 = V_1;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31* L_17 = (CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31*)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key);
		int32_t L_18;
		L_18 = CachedCodeEntryKey_GetHashCode_m253B53C100F840B987A487020F02184019D776DE(L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_22 = V_1;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_25 = V_1;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		int32_t L_28 = ___0_newSize;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_29 = V_1;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___next = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_41);
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_42 = V_1;
		__this->____entries = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_42);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m3CC589B84EA444155C4BFDB77E52E1F97E5D5D88_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tEC2FCD90BA00C992320FFF0D4A74509526BF8CA1* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = CachedCodeEntryKey_GetHashCode_m253B53C100F840B987A487020F02184019D776DE((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_13 = __this->____entries;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_tEC2FCD90BA00C992320FFF0D4A74509526BF8CA1* L_15 = V_4;
		int32_t L_16 = L_15->___hashCode;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = __this->____comparer;
		RuntimeObject* L_19 = L_18;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
		G_B9_0 = L_19;
	}
	{
		EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1* L_20;
		L_20 = EqualityComparer_1_get_Default_mB9A6897EE9C611611709E29230AB2F1D3D0BA6ED_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_tEC2FCD90BA00C992320FFF0D4A74509526BF8CA1* L_21 = V_4;
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_22 = L_21->___key;
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_23 = ___0_key;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 >::Invoke(8, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_tEC2FCD90BA00C992320FFF0D4A74509526BF8CA1* L_25 = V_4;
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_26 = L_25->___key;
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_27 = ___0_key;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets;
		int32_t L_31 = V_1;
		Entry_tEC2FCD90BA00C992320FFF0D4A74509526BF8CA1* L_32 = V_4;
		int32_t L_33 = L_32->___next;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_34 = __this->____entries;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_tEC2FCD90BA00C992320FFF0D4A74509526BF8CA1* L_36 = V_4;
		int32_t L_37 = L_36->___next;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next = L_37;
	}

IL_00d6:
	{
		Entry_tEC2FCD90BA00C992320FFF0D4A74509526BF8CA1* L_38 = V_4;
		L_38->___hashCode = (-1);
		Entry_tEC2FCD90BA00C992320FFF0D4A74509526BF8CA1* L_39 = V_4;
		int32_t L_40 = __this->____freeList;
		L_39->___next = L_40;
	}
	{
		Entry_tEC2FCD90BA00C992320FFF0D4A74509526BF8CA1* L_41 = V_4;
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31* L_42 = (CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31*)(&L_41->___key);
		il2cpp_codegen_initobj(L_42, sizeof(CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31));
	}

IL_00ff:
	{
	}
	{
		Entry_tEC2FCD90BA00C992320FFF0D4A74509526BF8CA1* L_43 = V_4;
		RuntimeObject** L_44 = (RuntimeObject**)(&L_43->___value);
		il2cpp_codegen_initobj(L_44, sizeof(RuntimeObject*));
	}

IL_0113:
	{
		int32_t L_45 = V_3;
		__this->____freeList = L_45;
		int32_t L_46 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_46, 1));
		int32_t L_47 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_47, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_48 = V_3;
		V_2 = L_48;
		Entry_tEC2FCD90BA00C992320FFF0D4A74509526BF8CA1* L_49 = V_4;
		int32_t L_50 = L_49->___next;
		V_3 = L_50;
	}

IL_0142:
	{
		int32_t L_51 = V_3;
		if ((((int32_t)L_51) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m423F15A532C6A9B72D948F03DCF1E8FE95266FDE_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m84136518562E6B82BBE9137A49334CAA61460DCA(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		RuntimeObject** L_3 = ___1_value;
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		*(RuntimeObject**)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)L_6);
		return (bool)1;
	}

IL_0025:
	{
		RuntimeObject** L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(RuntimeObject*));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_mF49067A549741BBB9B9BA690E05B00A9854C7E9F_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mBC95B064A09BDE7AB5494475F83B35DC450DC81B(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m0BF6AA68A9292D57E071C216236F4569412741AB_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m58B657EDC37CB7C4C1FA6E5ECAA49192968290E8_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_mB170132B09124D49C071D29B61DF9425C9351DA9(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_m822016BA854B3523CF33A27E9548ECDE43C85690_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_m5334B4276CF45A2AFE4E47D4583C5430CFA23B92(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 26)));
		KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12* L_14 = V_0;
		int32_t L_15 = ___1_index;
		Dictionary_2_CopyTo_mB170132B09124D49C071D29B61DF9425C9351DA9(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_18 = __this->____entries;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_28);
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		RuntimeObject* L_32 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value;
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_33;
		memset((&L_33), 0, sizeof(L_33));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_33), L_29, L_32, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_33);
	}

IL_00b5:
	{
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b9:
	{
		int32_t L_35 = V_3;
		int32_t L_36 = __this->____count;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_37 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_37, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = V_4;
		if (L_38)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_39 = __this->____count;
			V_5 = L_39;
			EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_40 = __this->____entries;
			V_6 = L_40;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_41 = V_6;
			int32_t L_42 = V_7;
			NullCheck(L_41);
			int32_t L_43 = ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
			if ((((int32_t)L_43) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = V_4;
			int32_t L_45 = ___1_index;
			int32_t L_46 = L_45;
			___1_index = ((int32_t)il2cpp_codegen_add(L_46, 1));
			EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_47 = V_6;
			int32_t L_48 = V_7;
			NullCheck(L_47);
			CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_49 = ((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___key;
			EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_50 = V_6;
			int32_t L_51 = V_7;
			NullCheck(L_50);
			RuntimeObject* L_52 = ((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___value;
			KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95 L_53;
			memset((&L_53), 0, sizeof(L_53));
			KeyValuePair_2__ctor_m96D7A05CA73361B4E4F4FB15107EAD3EBE3913A2((&L_53), L_49, L_52, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
			KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95 L_54 = L_53;
			RuntimeObject* L_55 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 17), &L_54);
			NullCheck(L_44);
			ArrayElementTypeCheck (L_44, L_55);
			(L_44)->SetAt(static_cast<il2cpp_array_size_t>(L_46), (RuntimeObject*)L_55);
		}

IL_012a_1:
		{
			int32_t L_56 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		}

IL_0130_1:
		{
			int32_t L_57 = V_7;
			int32_t L_58 = V_5;
			if ((((int32_t)L_57) < ((int32_t)L_58)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_mB824CC9AE49B882D511ADFCD217426BFC12FAB38_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tB7298ABA389EB46AD2BEB2E35D7FF51A6525D750 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m6C95957B43BCC65A410E34547B3934C5A51E0B0D((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		Enumerator_tB7298ABA389EB46AD2BEB2E35D7FF51A6525D750 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 29), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_EnsureCapacity_m85A3820E1374421CBDB81E74C7CDA2EEFCC90DB2_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_000b:
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_1 = __this->____entries;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_2 = __this->____entries;
		NullCheck(L_2);
		G_B5_0 = ((int32_t)(((RuntimeArray*)L_2)->max_length));
		goto IL_001e;
	}

IL_001d:
	{
		G_B5_0 = 0;
	}

IL_001e:
	{
		V_0 = G_B5_0;
		int32_t L_3 = V_0;
		int32_t L_4 = ___0_capacity;
		if ((((int32_t)L_3) < ((int32_t)L_4)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_5 = V_0;
		return L_5;
	}

IL_0025:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->____buckets;
		if (L_6)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_7 = ___0_capacity;
		int32_t L_8;
		L_8 = Dictionary_2_Initialize_m26848AD8E4E7357E68D80575255064B9DCE9A824(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return L_8;
	}

IL_0035:
	{
		int32_t L_9 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_10;
		L_10 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_9, NULL);
		V_1 = L_10;
		int32_t L_11 = V_1;
		Dictionary_2_Resize_m985506E79EE868501F78DDACCA0D0748751E5327(__this, L_11, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		int32_t L_12 = V_1;
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m230B767B18EF35F11415F7A727CA1CEC19DA39EC_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m4540BEB04CE0E31DC46A4CF9EA6DDE820B175AC1_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m319F8531B63DE959FF23564DE3BB1B93B943B7CA(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = Dictionary_2_FindEntry_m84136518562E6B82BBE9137A49334CAA61460DCA(__this, ((*(CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31*)((CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31*)(CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11))))), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_5 = __this->____entries;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		RuntimeObject* L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		return L_7;
	}

IL_0030:
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m26BD17B7EEA27EDA57B60C2113C7AE365109523B_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 49));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31*)((CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31*)(CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11)))));
		}
		try
		{
			CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_set_Item_m2387B91BA1614F8BD0037CF10888678FC0213FF0(__this, L_3, ((RuntimeObject*)Castclass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15))), il2cpp_rgctx_method(method->klass->rgctx_data, 50));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			RuntimeObject* L_5 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 51)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_7;
			L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_5, L_7, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		RuntimeObject* L_8 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 52)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_8, L_10, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m319F8531B63DE959FF23564DE3BB1B93B943B7CA_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_m9BF33360802A4565E45703E76292DEAEB476C8D3_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m319F8531B63DE959FF23564DE3BB1B93B943B7CA(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_mD3382707B0A0977575551EF563A509A60695AD4F(__this, ((*(CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31*)((CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31*)(CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11))))), il2cpp_rgctx_method(method->klass->rgctx_data, 53));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_m61E0DFD545EE45B0C2E19B76F54D726B3A55D382_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tB7298ABA389EB46AD2BEB2E35D7FF51A6525D750 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m6C95957B43BCC65A410E34547B3934C5A51E0B0D((&L_0), __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		Enumerator_tB7298ABA389EB46AD2BEB2E35D7FF51A6525D750 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 29), &L_1);
		return (RuntimeObject*)L_2;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m327893E91084224A5FB389EF5AE75D89C63E1F46_gshared (Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_mAF356BB169B079A1D471EC0CA8AE4B2F71688A24(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m6CB00552E00A09921EE3D7A99EA3F86263B4B6A9_gshared (Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_mAF356BB169B079A1D471EC0CA8AE4B2F71688A24(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE116CD7072B700E2B48D98E58EC32A2B812729F2_gshared (Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_mAF356BB169B079A1D471EC0CA8AE4B2F71688A24(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mAF356BB169B079A1D471EC0CA8AE4B2F71688A24_gshared (Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m46EF956EC790E0A966E0F753A35E6477A830A9EB(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_tD07CBC58F821582B79CB59B10264DC683DE3EE5C* L_5;
		L_5 = EqualityComparer_1_get_Default_mA1371F43F9121608E1B210C692D2B369D8A50A37_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_tD07CBC58F821582B79CB59B10264DC683DE3EE5C*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mC1C1006170BF67C70F624666E12F8FB34360B796_gshared (Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m385C254CDB046A5C6153A6CD493BF6FA9B635174_gshared (Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		int32_t L_1 = __this->____freeCount;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tACA314578A3D994C07972DC55AA432618B441372* Dictionary_2_get_Keys_m56FD574B685CF126057B3B47F8EC84B053F1AF63_gshared (Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tACA314578A3D994C07972DC55AA432618B441372* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tACA314578A3D994C07972DC55AA432618B441372* L_1 = (KeyCollection_tACA314578A3D994C07972DC55AA432618B441372*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 7));
		KeyCollection__ctor_m19F12184FDBF20710573CFF9C3770AB94DBE6A9C(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tACA314578A3D994C07972DC55AA432618B441372* L_2 = __this->____keys;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t68C95977A6405D46453CCCFD51F7CB3B90A6832D* Dictionary_2_get_Values_m4D23754BC42E5824BD5646DFF16BF6F1650E8B7A_gshared (Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t68C95977A6405D46453CCCFD51F7CB3B90A6832D* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t68C95977A6405D46453CCCFD51F7CB3B90A6832D* L_1 = (ValueCollection_t68C95977A6405D46453CCCFD51F7CB3B90A6832D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		ValueCollection__ctor_m305A15289E31B26C8A80A58160C243C8821BA664(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t68C95977A6405D46453CCCFD51F7CB3B90A6832D* L_2 = __this->____values;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Item_m34ADCE97B9DB93FCA59BFC225C1109FB5E055D28_gshared (Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574* __this, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mD7E59D41D3CB5F61AFF25B5C53A8A7556423B6FB(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_tA2540CF07A907BE88ADCEB3AF3785F9B00F1E760* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		return L_5;
	}

IL_001e:
	{
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_6 = ___0_key;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(int32_t));
		int32_t L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mBD90BD13E7F35B1B12BA85812435EA249913948E_gshared (Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574* __this, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___0_key, int32_t ___1_value, const RuntimeMethod* method) 
{
	{
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_0 = ___0_key;
		int32_t L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mDDBDA53CDFACE36C7FD1E7B4752C9DD2FA6C319A(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mAAA29FA753BE6A7A3F252BFCDADF2E7B1E39E5B9_gshared (Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574* __this, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___0_key, int32_t ___1_value, const RuntimeMethod* method) 
{
	{
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_0 = ___0_key;
		int32_t L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mDDBDA53CDFACE36C7FD1E7B4752C9DD2FA6C319A(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_mBB115C71EE76E304294770DB0B9083E09DA463E8_gshared (Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574* __this, KeyValuePair_2_t5262B590CA16F81E0E225FA2B90314261B2B4BC6 ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_0;
		L_0 = KeyValuePair_2_get_Key_m3F1B623E23CD7E9A1FFFD495EF0CEE82C430D4EF_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		int32_t L_1;
		L_1 = KeyValuePair_2_get_Value_m8C7FDFEFC87072A2142DBBB6F341652A8857E042_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		Dictionary_2_Add_mAAA29FA753BE6A7A3F252BFCDADF2E7B1E39E5B9(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m80EA7B4579EB20AC51B5E2AA57BE0055CD9DEEDA_gshared (Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574* __this, KeyValuePair_2_t5262B590CA16F81E0E225FA2B90314261B2B4BC6 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_0;
		L_0 = KeyValuePair_2_get_Key_m3F1B623E23CD7E9A1FFFD495EF0CEE82C430D4EF_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mD7E59D41D3CB5F61AFF25B5C53A8A7556423B6FB(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_3;
		L_3 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		EntryU5BU5D_tA2540CF07A907BE88ADCEB3AF3785F9B00F1E760* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		int32_t L_7;
		L_7 = KeyValuePair_2_get_Value_m8C7FDFEFC87072A2142DBBB6F341652A8857E042_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_mD863BC9EA6ED4E6FDAF0E550031C50548C4D1743_gshared (Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574* __this, KeyValuePair_2_t5262B590CA16F81E0E225FA2B90314261B2B4BC6 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_0;
		L_0 = KeyValuePair_2_get_Key_m3F1B623E23CD7E9A1FFFD495EF0CEE82C430D4EF_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mD7E59D41D3CB5F61AFF25B5C53A8A7556423B6FB(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_3;
		L_3 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		EntryU5BU5D_tA2540CF07A907BE88ADCEB3AF3785F9B00F1E760* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		int32_t L_7;
		L_7 = KeyValuePair_2_get_Value_m8C7FDFEFC87072A2142DBBB6F341652A8857E042_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_9;
		L_9 = KeyValuePair_2_get_Key_m3F1B623E23CD7E9A1FFFD495EF0CEE82C430D4EF_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		bool L_10;
		L_10 = Dictionary_2_Remove_m0EED74795AC6EBCE2805558743EF1A2923081043(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m2AEAC064BE759E0BA880F22A285494C33D0826F2_gshared (Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		NullCheck(L_3);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____freeCount = 0;
		EntryU5BU5D_tA2540CF07A907BE88ADCEB3AF3785F9B00F1E760* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m6FF7037C5A1CA36EE58783F2EC82F436B2C0B34B_gshared (Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574* __this, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___0_key, const RuntimeMethod* method) 
{
	{
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mD7E59D41D3CB5F61AFF25B5C53A8A7556423B6FB(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_mFB6B5245E5F33FEF5CB204A05302714DC330608E_gshared (Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_tA2540CF07A907BE88ADCEB3AF3785F9B00F1E760* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_tA2540CF07A907BE88ADCEB3AF3785F9B00F1E760* L_0 = __this->____entries;
		V_0 = L_0;
		goto IL_0049;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(int32_t));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_tA2540CF07A907BE88ADCEB3AF3785F9B00F1E760* L_3 = V_0;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		int32_t L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___hashCode;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_6;
		L_6 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		EntryU5BU5D_tA2540CF07A907BE88ADCEB3AF3785F9B00F1E760* L_7 = V_0;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		int32_t L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->___value;
		int32_t L_10 = ___0_value;
		NullCheck(L_6);
		bool L_11;
		L_11 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_6, L_9, L_10);
		if (!L_11)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_008b:
	{
		int32_t L_13 = V_3;
		int32_t L_14 = __this->____count;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m6C7D7A3994E1AF2B496CF46D3241E2C1B316C0C5_gshared (Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574* __this, KeyValuePair_2U5BU5D_t95A94889CB658E7B4C12C188D2EA1791F827BF83* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_tA2540CF07A907BE88ADCEB3AF3785F9B00F1E760* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t95A94889CB658E7B4C12C188D2EA1791F827BF83* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_t95A94889CB658E7B4C12C188D2EA1791F827BF83* L_2 = ___0_array;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t95A94889CB658E7B4C12C188D2EA1791F827BF83* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = Dictionary_2_get_Count_m385C254CDB046A5C6153A6CD493BF6FA9B635174(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = __this->____count;
		V_0 = L_6;
		EntryU5BU5D_tA2540CF07A907BE88ADCEB3AF3785F9B00F1E760* L_7 = __this->____entries;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_tA2540CF07A907BE88ADCEB3AF3785F9B00F1E760* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t95A94889CB658E7B4C12C188D2EA1791F827BF83* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_tA2540CF07A907BE88ADCEB3AF3785F9B00F1E760* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key;
		EntryU5BU5D_tA2540CF07A907BE88ADCEB3AF3785F9B00F1E760* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		int32_t L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value;
		KeyValuePair_2_t5262B590CA16F81E0E225FA2B90314261B2B4BC6 L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_m879862F68D99DBF1B2766591E42A4DFF9F04B269((&L_20), L_16, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_t5262B590CA16F81E0E225FA2B90314261B2B4BC6)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t0A06F4478B05078E52D4AB30BBAE414631F68E4D Dictionary_2_GetEnumerator_m03AB8CE9F81A8BDEC0BAB553373D95342FE96B76_gshared (Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t0A06F4478B05078E52D4AB30BBAE414631F68E4D L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mACC33FACA80344A984A6FF9CDD77FB913FC95770((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_mB51D21949EE45C00B36F31913E24386A082F8265_gshared (Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t0A06F4478B05078E52D4AB30BBAE414631F68E4D L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mACC33FACA80344A984A6FF9CDD77FB913FC95770((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		Enumerator_t0A06F4478B05078E52D4AB30BBAE414631F68E4D L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 29), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_m663857AA83A673F29E77D3626FEAE961F76DDF5E_gshared (Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t95A94889CB658E7B4C12C188D2EA1791F827BF83* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_tD07CBC58F821582B79CB59B10264DC683DE3EE5C* L_6;
		L_6 = EqualityComparer_1_get_Default_mA1371F43F9121608E1B210C692D2B369D8A50A37_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 32)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		NullCheck(L_11);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = Dictionary_2_get_Count_m385C254CDB046A5C6153A6CD493BF6FA9B635174(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		KeyValuePair_2U5BU5D_t95A94889CB658E7B4C12C188D2EA1791F827BF83* L_14 = (KeyValuePair_2U5BU5D_t95A94889CB658E7B4C12C188D2EA1791F827BF83*)(KeyValuePair_2U5BU5D_t95A94889CB658E7B4C12C188D2EA1791F827BF83*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 33), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_t95A94889CB658E7B4C12C188D2EA1791F827BF83* L_15 = V_0;
		Dictionary_2_CopyTo_m6C7D7A3994E1AF2B496CF46D3241E2C1B316C0C5(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_t95A94889CB658E7B4C12C188D2EA1791F827BF83* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 35)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_mD7E59D41D3CB5F61AFF25B5C53A8A7556423B6FB_gshared (Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574* __this, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_tA2540CF07A907BE88ADCEB3AF3785F9B00F1E760* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 V_6;
	memset((&V_6), 0, sizeof(V_6));
	EqualityComparer_1_tD07CBC58F821582B79CB59B10264DC683DE3EE5C* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_1 = L_1;
		EntryU5BU5D_tA2540CF07A907BE88ADCEB3AF3785F9B00F1E760* L_2 = __this->____entries;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		Il2CppFakeBox<ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814> L_6(il2cpp_rgctx_data(method->klass->rgctx_data, 11), (&___0_key));
		int32_t L_7;
		L_7 = ValueType_GetHashCode_m3B47C72EA1FA846D9B0DFF3C444AB2BFA22CF3CE((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_6), NULL);
		V_5 = ((int32_t)(L_7&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = V_1;
		int32_t L_9 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = V_1;
		NullCheck(L_10);
		NullCheck(L_8);
		int32_t L_11 = ((int32_t)(L_9%((int32_t)(((RuntimeArray*)L_10)->max_length))));
		int32_t L_12 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814));
	}

IL_0066:
	{
		int32_t L_14 = V_0;
		EntryU5BU5D_tA2540CF07A907BE88ADCEB3AF3785F9B00F1E760* L_15 = V_2;
		NullCheck(L_15);
		if ((!(((uint32_t)L_14) < ((uint32_t)((int32_t)(((RuntimeArray*)L_15)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tA2540CF07A907BE88ADCEB3AF3785F9B00F1E760* L_16 = V_2;
		int32_t L_17 = V_0;
		NullCheck(L_16);
		int32_t L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___hashCode;
		int32_t L_19 = V_5;
		if ((!(((uint32_t)L_18) == ((uint32_t)L_19))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_tD07CBC58F821582B79CB59B10264DC683DE3EE5C* L_20;
		L_20 = EqualityComparer_1_get_Default_mA1371F43F9121608E1B210C692D2B369D8A50A37_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_tA2540CF07A907BE88ADCEB3AF3785F9B00F1E760* L_21 = V_2;
		int32_t L_22 = V_0;
		NullCheck(L_21);
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_23 = ((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_22)))->___key;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_24 = ___0_key;
		NullCheck(L_20);
		bool L_25;
		L_25 = VirtualFuncInvoker2< bool, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 >::Invoke(8, L_20, L_23, L_24);
		if (L_25)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_tA2540CF07A907BE88ADCEB3AF3785F9B00F1E760* L_26 = V_2;
		int32_t L_27 = V_0;
		NullCheck(L_26);
		int32_t L_28 = ((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27)))->___next;
		V_0 = L_28;
		int32_t L_29 = V_3;
		EntryU5BU5D_tA2540CF07A907BE88ADCEB3AF3785F9B00F1E760* L_30 = V_2;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_31 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_31, 1));
		goto IL_0066;
	}

IL_0110:
	{
		RuntimeObject* L_32 = V_4;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_33 = ___0_key;
		NullCheck(L_32);
		int32_t L_34;
		L_34 = InterfaceFuncInvoker1< int32_t, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_32, L_33);
		V_8 = ((int32_t)(L_34&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_1;
		int32_t L_36 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = V_1;
		NullCheck(L_37);
		NullCheck(L_35);
		int32_t L_38 = ((int32_t)(L_36%((int32_t)(((RuntimeArray*)L_37)->max_length))));
		int32_t L_39 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_39, 1));
	}

IL_012b:
	{
		int32_t L_40 = V_0;
		EntryU5BU5D_tA2540CF07A907BE88ADCEB3AF3785F9B00F1E760* L_41 = V_2;
		NullCheck(L_41);
		if ((!(((uint32_t)L_40) < ((uint32_t)((int32_t)(((RuntimeArray*)L_41)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tA2540CF07A907BE88ADCEB3AF3785F9B00F1E760* L_42 = V_2;
		int32_t L_43 = V_0;
		NullCheck(L_42);
		int32_t L_44 = ((L_42)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_43)))->___hashCode;
		int32_t L_45 = V_8;
		if ((!(((uint32_t)L_44) == ((uint32_t)L_45))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_46 = V_4;
		EntryU5BU5D_tA2540CF07A907BE88ADCEB3AF3785F9B00F1E760* L_47 = V_2;
		int32_t L_48 = V_0;
		NullCheck(L_47);
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_49 = ((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___key;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_50 = ___0_key;
		NullCheck(L_46);
		bool L_51;
		L_51 = InterfaceFuncInvoker2< bool, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_46, L_49, L_50);
		if (L_51)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_tA2540CF07A907BE88ADCEB3AF3785F9B00F1E760* L_52 = V_2;
		int32_t L_53 = V_0;
		NullCheck(L_52);
		int32_t L_54 = ((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___next;
		V_0 = L_54;
		int32_t L_55 = V_3;
		EntryU5BU5D_tA2540CF07A907BE88ADCEB3AF3785F9B00F1E760* L_56 = V_2;
		NullCheck(L_56);
		if ((((int32_t)L_55) < ((int32_t)((int32_t)(((RuntimeArray*)L_56)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_57 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_57, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_58 = V_0;
		return L_58;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m46EF956EC790E0A966E0F753A35E6477A830A9EB_gshared (Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_tA2540CF07A907BE88ADCEB3AF3785F9B00F1E760* L_5 = (EntryU5BU5D_tA2540CF07A907BE88ADCEB3AF3785F9B00F1E760*)(EntryU5BU5D_tA2540CF07A907BE88ADCEB3AF3785F9B00F1E760*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 40), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mDDBDA53CDFACE36C7FD1E7B4752C9DD2FA6C319A_gshared (Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574* __this, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___0_key, int32_t ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_tA2540CF07A907BE88ADCEB3AF3785F9B00F1E760* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t50EA0C1E8A8EE9E0CC561055CA772A2BF21F8A5E* V_10 = NULL;
	ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 V_11;
	memset((&V_11), 0, sizeof(V_11));
	EqualityComparer_1_tD07CBC58F821582B79CB59B10264DC683DE3EE5C* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m46EF956EC790E0A966E0F753A35E6477A830A9EB(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_002c:
	{
		EntryU5BU5D_tA2540CF07A907BE88ADCEB3AF3785F9B00F1E760* L_4 = __this->____entries;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_8 = ___0_key;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		Il2CppFakeBox<ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814> L_10(il2cpp_rgctx_data(method->klass->rgctx_data, 11), (&___0_key));
		int32_t L_11;
		L_11 = ValueType_GetHashCode_m3B47C72EA1FA846D9B0DFF3C444AB2BFA22CF3CE((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_10), NULL);
		G_B7_0 = L_11;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets;
		int32_t L_13 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = __this->____buckets;
		NullCheck(L_14);
		NullCheck(L_12);
		V_4 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_13%((int32_t)(((RuntimeArray*)L_14)->max_length)))))));
		int32_t* L_15 = V_4;
		int32_t L_16 = *((int32_t*)L_15);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
		RuntimeObject* L_17 = V_1;
		if (L_17)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814));
	}

IL_0091:
	{
		int32_t L_19 = V_5;
		EntryU5BU5D_tA2540CF07A907BE88ADCEB3AF3785F9B00F1E760* L_20 = V_0;
		NullCheck(L_20);
		if ((!(((uint32_t)L_19) < ((uint32_t)((int32_t)(((RuntimeArray*)L_20)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tA2540CF07A907BE88ADCEB3AF3785F9B00F1E760* L_21 = V_0;
		int32_t L_22 = V_5;
		NullCheck(L_21);
		int32_t L_23 = ((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_22)))->___hashCode;
		int32_t L_24 = V_2;
		if ((!(((uint32_t)L_23) == ((uint32_t)L_24))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_tD07CBC58F821582B79CB59B10264DC683DE3EE5C* L_25;
		L_25 = EqualityComparer_1_get_Default_mA1371F43F9121608E1B210C692D2B369D8A50A37_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_tA2540CF07A907BE88ADCEB3AF3785F9B00F1E760* L_26 = V_0;
		int32_t L_27 = V_5;
		NullCheck(L_26);
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_28 = ((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27)))->___key;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_29 = ___0_key;
		NullCheck(L_25);
		bool L_30;
		L_30 = VirtualFuncInvoker2< bool, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 >::Invoke(8, L_25, L_28, L_29);
		if (!L_30)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_31 = ___2_behavior;
		if ((!(((uint32_t)L_31) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_tA2540CF07A907BE88ADCEB3AF3785F9B00F1E760* L_32 = V_0;
		int32_t L_33 = V_5;
		NullCheck(L_32);
		int32_t L_34 = ___1_value;
		((L_32)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_33)))->___value = L_34;
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_35 = ___2_behavior;
		if ((!(((uint32_t)L_35) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_36 = ___0_key;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_37 = L_36;
		RuntimeObject* L_38 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_37);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_38, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_tA2540CF07A907BE88ADCEB3AF3785F9B00F1E760* L_39 = V_0;
		int32_t L_40 = V_5;
		NullCheck(L_39);
		int32_t L_41 = ((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40)))->___next;
		V_5 = L_41;
		int32_t L_42 = V_3;
		EntryU5BU5D_tA2540CF07A907BE88ADCEB3AF3785F9B00F1E760* L_43 = V_0;
		NullCheck(L_43);
		if ((((int32_t)L_42) < ((int32_t)((int32_t)(((RuntimeArray*)L_43)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_44 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_44, 1));
		goto IL_0091;
	}

IL_0187:
	{
		int32_t L_45 = V_5;
		EntryU5BU5D_tA2540CF07A907BE88ADCEB3AF3785F9B00F1E760* L_46 = V_0;
		NullCheck(L_46);
		if ((!(((uint32_t)L_45) < ((uint32_t)((int32_t)(((RuntimeArray*)L_46)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tA2540CF07A907BE88ADCEB3AF3785F9B00F1E760* L_47 = V_0;
		int32_t L_48 = V_5;
		NullCheck(L_47);
		int32_t L_49 = ((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___hashCode;
		int32_t L_50 = V_2;
		if ((!(((uint32_t)L_49) == ((uint32_t)L_50))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_51 = V_1;
		EntryU5BU5D_tA2540CF07A907BE88ADCEB3AF3785F9B00F1E760* L_52 = V_0;
		int32_t L_53 = V_5;
		NullCheck(L_52);
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_54 = ((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___key;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_55 = ___0_key;
		NullCheck(L_51);
		bool L_56;
		L_56 = InterfaceFuncInvoker2< bool, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_51, L_54, L_55);
		if (!L_56)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_57 = ___2_behavior;
		if ((!(((uint32_t)L_57) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_tA2540CF07A907BE88ADCEB3AF3785F9B00F1E760* L_58 = V_0;
		int32_t L_59 = V_5;
		NullCheck(L_58);
		int32_t L_60 = ___1_value;
		((L_58)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_59)))->___value = L_60;
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_61 = ___2_behavior;
		if ((!(((uint32_t)L_61) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_62 = ___0_key;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_63 = L_62;
		RuntimeObject* L_64 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_63);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_64, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_tA2540CF07A907BE88ADCEB3AF3785F9B00F1E760* L_65 = V_0;
		int32_t L_66 = V_5;
		NullCheck(L_65);
		int32_t L_67 = ((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___next;
		V_5 = L_67;
		int32_t L_68 = V_3;
		EntryU5BU5D_tA2540CF07A907BE88ADCEB3AF3785F9B00F1E760* L_69 = V_0;
		NullCheck(L_69);
		if ((((int32_t)L_68) < ((int32_t)((int32_t)(((RuntimeArray*)L_69)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_70 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_70, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_71 = __this->____freeCount;
		if ((((int32_t)L_71) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_72 = __this->____freeList;
		V_8 = L_72;
		V_7 = (bool)1;
		int32_t L_73 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_73, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_74 = __this->____count;
		V_13 = L_74;
		int32_t L_75 = V_13;
		EntryU5BU5D_tA2540CF07A907BE88ADCEB3AF3785F9B00F1E760* L_76 = V_0;
		NullCheck(L_76);
		if ((!(((uint32_t)L_75) == ((uint32_t)((int32_t)(((RuntimeArray*)L_76)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_mE72CB2721A922F741ACE0C77D97D739055413B23(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_77 = V_13;
		V_8 = L_77;
		int32_t L_78 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_78, 1));
		EntryU5BU5D_tA2540CF07A907BE88ADCEB3AF3785F9B00F1E760* L_79 = __this->____entries;
		V_0 = L_79;
	}

IL_0250:
	{
		bool L_80 = V_6;
		if (L_80)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_81 = V_4;
		G_B51_0 = L_81;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_82 = __this->____buckets;
		int32_t L_83 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_84 = __this->____buckets;
		NullCheck(L_84);
		NullCheck(L_82);
		G_B51_0 = ((L_82)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_83%((int32_t)(((RuntimeArray*)L_84)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_tA2540CF07A907BE88ADCEB3AF3785F9B00F1E760* L_85 = V_0;
		int32_t L_86 = V_8;
		NullCheck(L_85);
		V_10 = ((L_85)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_86)));
		bool L_87 = V_7;
		if (!L_87)
		{
			goto IL_028a;
		}
	}
	{
		Entry_t50EA0C1E8A8EE9E0CC561055CA772A2BF21F8A5E* L_88 = V_10;
		int32_t L_89 = L_88->___next;
		__this->____freeList = L_89;
	}

IL_028a:
	{
		Entry_t50EA0C1E8A8EE9E0CC561055CA772A2BF21F8A5E* L_90 = V_10;
		int32_t L_91 = V_2;
		L_90->___hashCode = L_91;
		Entry_t50EA0C1E8A8EE9E0CC561055CA772A2BF21F8A5E* L_92 = V_10;
		int32_t* L_93 = V_9;
		int32_t L_94 = *((int32_t*)L_93);
		L_92->___next = ((int32_t)il2cpp_codegen_subtract(L_94, 1));
		Entry_t50EA0C1E8A8EE9E0CC561055CA772A2BF21F8A5E* L_95 = V_10;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_96 = ___0_key;
		L_95->___key = L_96;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_95->___key))->___element), (void*)NULL);
		Entry_t50EA0C1E8A8EE9E0CC561055CA772A2BF21F8A5E* L_97 = V_10;
		int32_t L_98 = ___1_value;
		L_97->___value = L_98;
		int32_t* L_99 = V_9;
		int32_t L_100 = V_8;
		*((int32_t*)L_99) = (int32_t)((int32_t)il2cpp_codegen_add(L_100, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_m22CDE1E59D58822CB1E7766A0452FCCB9459F6FD_gshared (Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t95A94889CB658E7B4C12C188D2EA1791F827BF83* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 32)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_m46EF956EC790E0A966E0F753A35E6477A830A9EB(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 35)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t95A94889CB658E7B4C12C188D2EA1791F827BF83*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 26)));
		KeyValuePair_2U5BU5D_t95A94889CB658E7B4C12C188D2EA1791F827BF83* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_t95A94889CB658E7B4C12C188D2EA1791F827BF83* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_21;
		L_21 = KeyValuePair_2_get_Key_m3F1B623E23CD7E9A1FFFD495EF0CEE82C430D4EF_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		goto IL_009a;
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t95A94889CB658E7B4C12C188D2EA1791F827BF83* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_24;
		L_24 = KeyValuePair_2_get_Key_m3F1B623E23CD7E9A1FFFD495EF0CEE82C430D4EF_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		KeyValuePair_2U5BU5D_t95A94889CB658E7B4C12C188D2EA1791F827BF83* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		int32_t L_27;
		L_27 = KeyValuePair_2_get_Value_m8C7FDFEFC87072A2142DBBB6F341652A8857E042_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		Dictionary_2_Add_mAAA29FA753BE6A7A3F252BFCDADF2E7B1E39E5B9(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_t95A94889CB658E7B4C12C188D2EA1791F827BF83* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mE72CB2721A922F741ACE0C77D97D739055413B23_gshared (Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_m9442FD51C395B8D9FA2E215CC7B68D38C77F3602(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m9442FD51C395B8D9FA2E215CC7B68D38C77F3602_gshared (Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_tA2540CF07A907BE88ADCEB3AF3785F9B00F1E760* V_1 = NULL;
	int32_t V_2 = 0;
	ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_tA2540CF07A907BE88ADCEB3AF3785F9B00F1E760* L_3 = (EntryU5BU5D_tA2540CF07A907BE88ADCEB3AF3785F9B00F1E760*)(EntryU5BU5D_tA2540CF07A907BE88ADCEB3AF3785F9B00F1E760*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 40), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_tA2540CF07A907BE88ADCEB3AF3785F9B00F1E760* L_5 = __this->____entries;
		EntryU5BU5D_tA2540CF07A907BE88ADCEB3AF3785F9B00F1E760* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814));
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)((int32_t)false&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_tA2540CF07A907BE88ADCEB3AF3785F9B00F1E760* L_10 = V_1;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_tA2540CF07A907BE88ADCEB3AF3785F9B00F1E760* L_13 = V_1;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		EntryU5BU5D_tA2540CF07A907BE88ADCEB3AF3785F9B00F1E760* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814* L_17 = (ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814*)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key);
		Il2CppFakeBox<ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814> L_18(il2cpp_rgctx_data(method->klass->rgctx_data, 11), L_17);
		int32_t L_19;
		L_19 = ValueType_GetHashCode_m3B47C72EA1FA846D9B0DFF3C444AB2BFA22CF3CE((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_18), NULL);
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode = ((int32_t)(L_19&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_20 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_007f:
	{
		int32_t L_21 = V_4;
		int32_t L_22 = V_2;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_tA2540CF07A907BE88ADCEB3AF3785F9B00F1E760* L_23 = V_1;
		int32_t L_24 = V_5;
		NullCheck(L_23);
		int32_t L_25 = ((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24)))->___hashCode;
		if ((((int32_t)L_25) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_tA2540CF07A907BE88ADCEB3AF3785F9B00F1E760* L_26 = V_1;
		int32_t L_27 = V_5;
		NullCheck(L_26);
		int32_t L_28 = ((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27)))->___hashCode;
		int32_t L_29 = ___0_newSize;
		V_6 = ((int32_t)(L_28%L_29));
		EntryU5BU5D_tA2540CF07A907BE88ADCEB3AF3785F9B00F1E760* L_30 = V_1;
		int32_t L_31 = V_5;
		NullCheck(L_30);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = V_0;
		int32_t L_33 = V_6;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		int32_t L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___next = ((int32_t)il2cpp_codegen_subtract(L_35, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_0;
		int32_t L_37 = V_6;
		int32_t L_38 = V_5;
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(L_37), (int32_t)((int32_t)il2cpp_codegen_add(L_38, 1)));
	}

IL_00c5:
	{
		int32_t L_39 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_00cb:
	{
		int32_t L_40 = V_5;
		int32_t L_41 = V_2;
		if ((((int32_t)L_40) < ((int32_t)L_41)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_42 = V_0;
		__this->____buckets = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_42);
		EntryU5BU5D_tA2540CF07A907BE88ADCEB3AF3785F9B00F1E760* L_43 = V_1;
		__this->____entries = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_43);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m0EED74795AC6EBCE2805558743EF1A2923081043_gshared (Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574* __this, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t50EA0C1E8A8EE9E0CC561055CA772A2BF21F8A5E* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		Il2CppFakeBox<ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814> L_4(il2cpp_rgctx_data(method->klass->rgctx_data, 11), (&___0_key));
		int32_t L_5;
		L_5 = ValueType_GetHashCode_m3B47C72EA1FA846D9B0DFF3C444AB2BFA22CF3CE((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_4), NULL);
		G_B6_0 = L_5;
		goto IL_0038;
	}

IL_0032:
	{
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_6 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker1< int32_t, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_6);
		G_B6_0 = L_7;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_8 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		NullCheck(L_9);
		V_1 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		int32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_tA2540CF07A907BE88ADCEB3AF3785F9B00F1E760* L_14 = __this->____entries;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		V_4 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)));
		Entry_t50EA0C1E8A8EE9E0CC561055CA772A2BF21F8A5E* L_16 = V_4;
		int32_t L_17 = L_16->___hashCode;
		int32_t L_18 = V_0;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_19 = __this->____comparer;
		RuntimeObject* L_20 = L_19;
		if (L_20)
		{
			G_B10_0 = L_20;
			goto IL_0095;
		}
		G_B9_0 = L_20;
	}
	{
		EqualityComparer_1_tD07CBC58F821582B79CB59B10264DC683DE3EE5C* L_21;
		L_21 = EqualityComparer_1_get_Default_mA1371F43F9121608E1B210C692D2B369D8A50A37_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_t50EA0C1E8A8EE9E0CC561055CA772A2BF21F8A5E* L_22 = V_4;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_23 = L_22->___key;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_24 = ___0_key;
		NullCheck(L_21);
		bool L_25;
		L_25 = VirtualFuncInvoker2< bool, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 >::Invoke(8, L_21, L_23, L_24);
		G_B11_0 = L_25;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t50EA0C1E8A8EE9E0CC561055CA772A2BF21F8A5E* L_26 = V_4;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_27 = L_26->___key;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_28 = ___0_key;
		NullCheck(G_B10_0);
		bool L_29;
		L_29 = InterfaceFuncInvoker2< bool, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_27, L_28);
		G_B11_0 = L_29;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_30 = V_2;
		if ((((int32_t)L_30) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = __this->____buckets;
		int32_t L_32 = V_1;
		Entry_t50EA0C1E8A8EE9E0CC561055CA772A2BF21F8A5E* L_33 = V_4;
		int32_t L_34 = L_33->___next;
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (int32_t)((int32_t)il2cpp_codegen_add(L_34, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_tA2540CF07A907BE88ADCEB3AF3785F9B00F1E760* L_35 = __this->____entries;
		int32_t L_36 = V_2;
		NullCheck(L_35);
		Entry_t50EA0C1E8A8EE9E0CC561055CA772A2BF21F8A5E* L_37 = V_4;
		int32_t L_38 = L_37->___next;
		((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_36)))->___next = L_38;
	}

IL_00d6:
	{
		Entry_t50EA0C1E8A8EE9E0CC561055CA772A2BF21F8A5E* L_39 = V_4;
		L_39->___hashCode = (-1);
		Entry_t50EA0C1E8A8EE9E0CC561055CA772A2BF21F8A5E* L_40 = V_4;
		int32_t L_41 = __this->____freeList;
		L_40->___next = L_41;
	}
	{
		Entry_t50EA0C1E8A8EE9E0CC561055CA772A2BF21F8A5E* L_42 = V_4;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814* L_43 = (ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814*)(&L_42->___key);
		il2cpp_codegen_initobj(L_43, sizeof(ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814));
	}

IL_00ff:
	{
		goto IL_0113;
	}

IL_0113:
	{
		int32_t L_44 = V_3;
		__this->____freeList = L_44;
		int32_t L_45 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_45, 1));
		int32_t L_46 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_46, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_47 = V_3;
		V_2 = L_47;
		Entry_t50EA0C1E8A8EE9E0CC561055CA772A2BF21F8A5E* L_48 = V_4;
		int32_t L_49 = L_48->___next;
		V_3 = L_49;
	}

IL_0142:
	{
		int32_t L_50 = V_3;
		if ((((int32_t)L_50) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m6E83484C163A8A5585D359DE67D60D9507F3A84E_gshared (Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574* __this, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___0_key, int32_t* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mD7E59D41D3CB5F61AFF25B5C53A8A7556423B6FB(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t* L_3 = ___1_value;
		EntryU5BU5D_tA2540CF07A907BE88ADCEB3AF3785F9B00F1E760* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		*(int32_t*)L_3 = L_6;
		return (bool)1;
	}

IL_0025:
	{
		int32_t* L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(int32_t));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_mD084A2102AB703BF14DAF5EDC548ED7DA5F48577_gshared (Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574* __this, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___0_key, int32_t ___1_value, const RuntimeMethod* method) 
{
	{
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_0 = ___0_key;
		int32_t L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mDDBDA53CDFACE36C7FD1E7B4752C9DD2FA6C319A(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_mE03E99368D63FD5D35D0AB0B775F1036349FF56F_gshared (Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m806D2CCC03F491CFCD3BA71C9744294C19EB2FAF_gshared (Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574* __this, KeyValuePair_2U5BU5D_t95A94889CB658E7B4C12C188D2EA1791F827BF83* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t95A94889CB658E7B4C12C188D2EA1791F827BF83* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_m6C7D7A3994E1AF2B496CF46D3241E2C1B316C0C5(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_m5FEC907267A688BB2928AFBFB0884A0CFCC05D38_gshared (Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t95A94889CB658E7B4C12C188D2EA1791F827BF83* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_tA2540CF07A907BE88ADCEB3AF3785F9B00F1E760* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_tA2540CF07A907BE88ADCEB3AF3785F9B00F1E760* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_m385C254CDB046A5C6153A6CD493BF6FA9B635174(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_t95A94889CB658E7B4C12C188D2EA1791F827BF83*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 26)));
		KeyValuePair_2U5BU5D_t95A94889CB658E7B4C12C188D2EA1791F827BF83* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t95A94889CB658E7B4C12C188D2EA1791F827BF83* L_14 = V_0;
		int32_t L_15 = ___1_index;
		Dictionary_2_CopyTo_m6C7D7A3994E1AF2B496CF46D3241E2C1B316C0C5(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_tA2540CF07A907BE88ADCEB3AF3785F9B00F1E760* L_18 = __this->____entries;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_tA2540CF07A907BE88ADCEB3AF3785F9B00F1E760* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_tA2540CF07A907BE88ADCEB3AF3785F9B00F1E760* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_28);
		EntryU5BU5D_tA2540CF07A907BE88ADCEB3AF3785F9B00F1E760* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		int32_t L_32 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value;
		int32_t L_33 = L_32;
		RuntimeObject* L_34 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), &L_33);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_35;
		memset((&L_35), 0, sizeof(L_35));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_35), L_29, L_34, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_35);
	}

IL_00b5:
	{
		int32_t L_36 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00b9:
	{
		int32_t L_37 = V_3;
		int32_t L_38 = __this->____count;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_39 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_39, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = V_4;
		if (L_40)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_41 = __this->____count;
			V_5 = L_41;
			EntryU5BU5D_tA2540CF07A907BE88ADCEB3AF3785F9B00F1E760* L_42 = __this->____entries;
			V_6 = L_42;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_tA2540CF07A907BE88ADCEB3AF3785F9B00F1E760* L_43 = V_6;
			int32_t L_44 = V_7;
			NullCheck(L_43);
			int32_t L_45 = ((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44)))->___hashCode;
			if ((((int32_t)L_45) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_46 = V_4;
			int32_t L_47 = ___1_index;
			int32_t L_48 = L_47;
			___1_index = ((int32_t)il2cpp_codegen_add(L_48, 1));
			EntryU5BU5D_tA2540CF07A907BE88ADCEB3AF3785F9B00F1E760* L_49 = V_6;
			int32_t L_50 = V_7;
			NullCheck(L_49);
			ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_51 = ((L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_50)))->___key;
			EntryU5BU5D_tA2540CF07A907BE88ADCEB3AF3785F9B00F1E760* L_52 = V_6;
			int32_t L_53 = V_7;
			NullCheck(L_52);
			int32_t L_54 = ((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___value;
			KeyValuePair_2_t5262B590CA16F81E0E225FA2B90314261B2B4BC6 L_55;
			memset((&L_55), 0, sizeof(L_55));
			KeyValuePair_2__ctor_m879862F68D99DBF1B2766591E42A4DFF9F04B269((&L_55), L_51, L_54, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
			KeyValuePair_2_t5262B590CA16F81E0E225FA2B90314261B2B4BC6 L_56 = L_55;
			RuntimeObject* L_57 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 17), &L_56);
			NullCheck(L_46);
			ArrayElementTypeCheck (L_46, L_57);
			(L_46)->SetAt(static_cast<il2cpp_array_size_t>(L_48), (RuntimeObject*)L_57);
		}

IL_012a_1:
		{
			int32_t L_58 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_58, 1));
		}

IL_0130_1:
		{
			int32_t L_59 = V_7;
			int32_t L_60 = V_5;
			if ((((int32_t)L_59) < ((int32_t)L_60)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9160241BEF0D3BD9D306BBB6824D40B8070AC51C_gshared (Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t0A06F4478B05078E52D4AB30BBAE414631F68E4D L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mACC33FACA80344A984A6FF9CDD77FB913FC95770((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		Enumerator_t0A06F4478B05078E52D4AB30BBAE414631F68E4D L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 29), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_EnsureCapacity_mB0704C8250E3401477917DDE2BD99367EFA439E1_gshared (Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_000b:
	{
		EntryU5BU5D_tA2540CF07A907BE88ADCEB3AF3785F9B00F1E760* L_1 = __this->____entries;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		EntryU5BU5D_tA2540CF07A907BE88ADCEB3AF3785F9B00F1E760* L_2 = __this->____entries;
		NullCheck(L_2);
		G_B5_0 = ((int32_t)(((RuntimeArray*)L_2)->max_length));
		goto IL_001e;
	}

IL_001d:
	{
		G_B5_0 = 0;
	}

IL_001e:
	{
		V_0 = G_B5_0;
		int32_t L_3 = V_0;
		int32_t L_4 = ___0_capacity;
		if ((((int32_t)L_3) < ((int32_t)L_4)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_5 = V_0;
		return L_5;
	}

IL_0025:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->____buckets;
		if (L_6)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_7 = ___0_capacity;
		int32_t L_8;
		L_8 = Dictionary_2_Initialize_m46EF956EC790E0A966E0F753A35E6477A830A9EB(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return L_8;
	}

IL_0035:
	{
		int32_t L_9 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_10;
		L_10 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_9, NULL);
		V_1 = L_10;
		int32_t L_11 = V_1;
		Dictionary_2_Resize_m9442FD51C395B8D9FA2E215CC7B68D38C77F3602(__this, L_11, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		int32_t L_12 = V_1;
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_mF341AC77ED492B90C56B7630141245F1B7ED5281_gshared (Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_mAA108BE72FCD2A315290BAE5EED0990108A464AA_gshared (Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m9E1F462B344142B23F9552FB7B668AB99F77AF4E(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = Dictionary_2_FindEntry_mD7E59D41D3CB5F61AFF25B5C53A8A7556423B6FB(__this, ((*(ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814*)((ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814*)(ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11))))), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_tA2540CF07A907BE88ADCEB3AF3785F9B00F1E760* L_5 = __this->____entries;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m25446FE5DB8D05A3206776D1F39D14357AE381EE_gshared (Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0F7A078274F301B83DFC51191B3AFC763DE9C4D0(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 49));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814*)((ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814*)(ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11)))));
		}
		try
		{
			ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_set_Item_mBD90BD13E7F35B1B12BA85812435EA249913948E(__this, L_3, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15))))), il2cpp_rgctx_method(method->klass->rgctx_data, 50));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			RuntimeObject* L_5 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 51)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_7;
			L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_5, L_7, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		RuntimeObject* L_8 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 52)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_8, L_10, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m9E1F462B344142B23F9552FB7B668AB99F77AF4E_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_m13EE81715B776E283C25E7E56226AB421C04503A_gshared (Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m9E1F462B344142B23F9552FB7B668AB99F77AF4E(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m6FF7037C5A1CA36EE58783F2EC82F436B2C0B34B(__this, ((*(ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814*)((ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814*)(ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11))))), il2cpp_rgctx_method(method->klass->rgctx_data, 53));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_m2EA148EBD121BDF285A3CA098804FB75BD8F22A2_gshared (Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t0A06F4478B05078E52D4AB30BBAE414631F68E4D L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mACC33FACA80344A984A6FF9CDD77FB913FC95770((&L_0), __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		Enumerator_t0A06F4478B05078E52D4AB30BBAE414631F68E4D L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 29), &L_1);
		return (RuntimeObject*)L_2;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m93F2F0243A17E98649832B23D7F1CE2BD89301DD_gshared (Dictionary_2_t9B2ADF59B0E83212023684CAE164D0B1C22E800C* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_m8D60AC863C96C10D72CF68CD141FCBA732FD46E6(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m814D096E4EB278047CD3DA61BBACF2DA4E237A98_gshared (Dictionary_2_t9B2ADF59B0E83212023684CAE164D0B1C22E800C* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_m8D60AC863C96C10D72CF68CD141FCBA732FD46E6(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m4FC6BBDA92A4A5A444A3B8A173B70CD1A824C47C_gshared (Dictionary_2_t9B2ADF59B0E83212023684CAE164D0B1C22E800C* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_m8D60AC863C96C10D72CF68CD141FCBA732FD46E6(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m8D60AC863C96C10D72CF68CD141FCBA732FD46E6_gshared (Dictionary_2_t9B2ADF59B0E83212023684CAE164D0B1C22E800C* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_mA4CE591380BC35E6CC2EBA67E6F850F43861AC7A(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_tD07CBC58F821582B79CB59B10264DC683DE3EE5C* L_5;
		L_5 = EqualityComparer_1_get_Default_mA1371F43F9121608E1B210C692D2B369D8A50A37_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_tD07CBC58F821582B79CB59B10264DC683DE3EE5C*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m1E588EC276EE08C871D12691324FCA1D172B00BD_gshared (Dictionary_2_t9B2ADF59B0E83212023684CAE164D0B1C22E800C* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m1CDDC10642903669FAFA95934CA6570DAD09275F_gshared (Dictionary_2_t9B2ADF59B0E83212023684CAE164D0B1C22E800C* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		int32_t L_1 = __this->____freeCount;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t246CAF0F582ADDC11FEEFB70F34D8C26564B9B34* Dictionary_2_get_Keys_m421F8C3EA5B2256B6DCF51945F16763B2D6EADFC_gshared (Dictionary_2_t9B2ADF59B0E83212023684CAE164D0B1C22E800C* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t246CAF0F582ADDC11FEEFB70F34D8C26564B9B34* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t246CAF0F582ADDC11FEEFB70F34D8C26564B9B34* L_1 = (KeyCollection_t246CAF0F582ADDC11FEEFB70F34D8C26564B9B34*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 7));
		KeyCollection__ctor_m5E24C0D40B6B4A8B62A34E2CF3450DDEE02FBF1C(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t246CAF0F582ADDC11FEEFB70F34D8C26564B9B34* L_2 = __this->____keys;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t10FF6A98B17BD862F8991138D7FD29AD4847FBF6* Dictionary_2_get_Values_mC73E214750E4AFCF3278C7BF23F4A5AC0C51ABB1_gshared (Dictionary_2_t9B2ADF59B0E83212023684CAE164D0B1C22E800C* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t10FF6A98B17BD862F8991138D7FD29AD4847FBF6* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t10FF6A98B17BD862F8991138D7FD29AD4847FBF6* L_1 = (ValueCollection_t10FF6A98B17BD862F8991138D7FD29AD4847FBF6*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		ValueCollection__ctor_mEC3B5A87B099239EB6E319E7FFAEDDA5CCCF7768(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t10FF6A98B17BD862F8991138D7FD29AD4847FBF6* L_2 = __this->____values;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Item_mC569A66C5636003AF09E1AAF0EF6A4A28274B000_gshared (Dictionary_2_t9B2ADF59B0E83212023684CAE164D0B1C22E800C* __this, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m14F2AACB1148A28E415DC6A2F626529D33CF4081(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t52DB08136C23308859B3EBE1F2751AC002E126E2* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		return L_5;
	}

IL_001e:
	{
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_6 = ___0_key;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(int32_t));
		int32_t L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m02B4D3AA8D37064197DC0B6983574A325BAC93EF_gshared (Dictionary_2_t9B2ADF59B0E83212023684CAE164D0B1C22E800C* __this, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___0_key, int32_t ___1_value, const RuntimeMethod* method) 
{
	{
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_0 = ___0_key;
		int32_t L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mF362D48543EA02D0A45372B9F046E2F683925E27(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m42BB2493CF86A5116013E5C273D1789DF840BB8A_gshared (Dictionary_2_t9B2ADF59B0E83212023684CAE164D0B1C22E800C* __this, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___0_key, int32_t ___1_value, const RuntimeMethod* method) 
{
	{
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_0 = ___0_key;
		int32_t L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mF362D48543EA02D0A45372B9F046E2F683925E27(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m0FD41F5B0167A766DF525D816DD3EB1978C017CF_gshared (Dictionary_2_t9B2ADF59B0E83212023684CAE164D0B1C22E800C* __this, KeyValuePair_2_t68435994E8A66E579434AAA75502B7B6137A7B2A ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_0;
		L_0 = KeyValuePair_2_get_Key_m54125E9738B585176CC0EF0FF6F5FA5CB959B3A2_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		int32_t L_1;
		L_1 = KeyValuePair_2_get_Value_m080BF3202ED3064344C3E33E105A6DF813970AFE_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		Dictionary_2_Add_m42BB2493CF86A5116013E5C273D1789DF840BB8A(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9DFC833DD0806393D3989CA8B90428B1F6292DB1_gshared (Dictionary_2_t9B2ADF59B0E83212023684CAE164D0B1C22E800C* __this, KeyValuePair_2_t68435994E8A66E579434AAA75502B7B6137A7B2A ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_0;
		L_0 = KeyValuePair_2_get_Key_m54125E9738B585176CC0EF0FF6F5FA5CB959B3A2_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m14F2AACB1148A28E415DC6A2F626529D33CF4081(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_3;
		L_3 = EqualityComparer_1_get_Default_mC9B367997D70B8B5F9167227471B3D82603739F4_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		EntryU5BU5D_t52DB08136C23308859B3EBE1F2751AC002E126E2* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		int32_t L_7;
		L_7 = KeyValuePair_2_get_Value_m080BF3202ED3064344C3E33E105A6DF813970AFE_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m881AF3722B70B996E578E50456060AFAE309F1D9_gshared (Dictionary_2_t9B2ADF59B0E83212023684CAE164D0B1C22E800C* __this, KeyValuePair_2_t68435994E8A66E579434AAA75502B7B6137A7B2A ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_0;
		L_0 = KeyValuePair_2_get_Key_m54125E9738B585176CC0EF0FF6F5FA5CB959B3A2_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m14F2AACB1148A28E415DC6A2F626529D33CF4081(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_3;
		L_3 = EqualityComparer_1_get_Default_mC9B367997D70B8B5F9167227471B3D82603739F4_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		EntryU5BU5D_t52DB08136C23308859B3EBE1F2751AC002E126E2* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		int32_t L_7;
		L_7 = KeyValuePair_2_get_Value_m080BF3202ED3064344C3E33E105A6DF813970AFE_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_9;
		L_9 = KeyValuePair_2_get_Key_m54125E9738B585176CC0EF0FF6F5FA5CB959B3A2_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		bool L_10;
		L_10 = Dictionary_2_Remove_m6A804AEF2E4FD1170A61FF9FFCA56E416B2616CA(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m3C5BFB7B68218CDD51D05B68A45BD6704E87758B_gshared (Dictionary_2_t9B2ADF59B0E83212023684CAE164D0B1C22E800C* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		NullCheck(L_3);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____freeCount = 0;
		EntryU5BU5D_t52DB08136C23308859B3EBE1F2751AC002E126E2* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m8A90C6CB1027158417FA82AAB50347C32CA3C952_gshared (Dictionary_2_t9B2ADF59B0E83212023684CAE164D0B1C22E800C* __this, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___0_key, const RuntimeMethod* method) 
{
	{
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m14F2AACB1148A28E415DC6A2F626529D33CF4081(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m8E3FB621E32F31659AF56246F324F299F986565D_gshared (Dictionary_2_t9B2ADF59B0E83212023684CAE164D0B1C22E800C* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_t52DB08136C23308859B3EBE1F2751AC002E126E2* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t52DB08136C23308859B3EBE1F2751AC002E126E2* L_0 = __this->____entries;
		V_0 = L_0;
		goto IL_0049;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(int32_t));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t52DB08136C23308859B3EBE1F2751AC002E126E2* L_3 = V_0;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		int32_t L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___hashCode;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_6;
		L_6 = EqualityComparer_1_get_Default_mC9B367997D70B8B5F9167227471B3D82603739F4_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		EntryU5BU5D_t52DB08136C23308859B3EBE1F2751AC002E126E2* L_7 = V_0;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		int32_t L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->___value;
		int32_t L_10 = ___0_value;
		NullCheck(L_6);
		bool L_11;
		L_11 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_6, L_9, L_10);
		if (!L_11)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_008b:
	{
		int32_t L_13 = V_3;
		int32_t L_14 = __this->____count;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mEB41FEA60A71FE120DD5D5E13A18738A13218B49_gshared (Dictionary_2_t9B2ADF59B0E83212023684CAE164D0B1C22E800C* __this, KeyValuePair_2U5BU5D_tA37DB0B7611E442F177E3F568EB45718B30EB635* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t52DB08136C23308859B3EBE1F2751AC002E126E2* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_tA37DB0B7611E442F177E3F568EB45718B30EB635* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_tA37DB0B7611E442F177E3F568EB45718B30EB635* L_2 = ___0_array;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_tA37DB0B7611E442F177E3F568EB45718B30EB635* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = Dictionary_2_get_Count_m1CDDC10642903669FAFA95934CA6570DAD09275F(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = __this->____count;
		V_0 = L_6;
		EntryU5BU5D_t52DB08136C23308859B3EBE1F2751AC002E126E2* L_7 = __this->____entries;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t52DB08136C23308859B3EBE1F2751AC002E126E2* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_tA37DB0B7611E442F177E3F568EB45718B30EB635* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_t52DB08136C23308859B3EBE1F2751AC002E126E2* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key;
		EntryU5BU5D_t52DB08136C23308859B3EBE1F2751AC002E126E2* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		int32_t L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value;
		KeyValuePair_2_t68435994E8A66E579434AAA75502B7B6137A7B2A L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_m68187F9608C286BCED8AC7DDD8F5B4DB66086C27((&L_20), L_16, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_t68435994E8A66E579434AAA75502B7B6137A7B2A)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tEA5C0B380BD53EEE55544419AFADE6EF55B8CACD Dictionary_2_GetEnumerator_m2AE18BE81CCA4A5034C7E1BBA2C4AFF4CBAFD9EA_gshared (Dictionary_2_t9B2ADF59B0E83212023684CAE164D0B1C22E800C* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tEA5C0B380BD53EEE55544419AFADE6EF55B8CACD L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mF3130D5466437808038B2FBA366C25885E5B3090((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m34E764EB1EC5794BC080BF19E8C0D145059A9058_gshared (Dictionary_2_t9B2ADF59B0E83212023684CAE164D0B1C22E800C* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tEA5C0B380BD53EEE55544419AFADE6EF55B8CACD L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mF3130D5466437808038B2FBA366C25885E5B3090((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		Enumerator_tEA5C0B380BD53EEE55544419AFADE6EF55B8CACD L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 29), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_m498846C1CD7DCDC44F4551AD5576D50D2D95E27F_gshared (Dictionary_2_t9B2ADF59B0E83212023684CAE164D0B1C22E800C* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tA37DB0B7611E442F177E3F568EB45718B30EB635* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_tD07CBC58F821582B79CB59B10264DC683DE3EE5C* L_6;
		L_6 = EqualityComparer_1_get_Default_mA1371F43F9121608E1B210C692D2B369D8A50A37_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 32)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		NullCheck(L_11);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = Dictionary_2_get_Count_m1CDDC10642903669FAFA95934CA6570DAD09275F(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		KeyValuePair_2U5BU5D_tA37DB0B7611E442F177E3F568EB45718B30EB635* L_14 = (KeyValuePair_2U5BU5D_tA37DB0B7611E442F177E3F568EB45718B30EB635*)(KeyValuePair_2U5BU5D_tA37DB0B7611E442F177E3F568EB45718B30EB635*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 33), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_tA37DB0B7611E442F177E3F568EB45718B30EB635* L_15 = V_0;
		Dictionary_2_CopyTo_mEB41FEA60A71FE120DD5D5E13A18738A13218B49(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_tA37DB0B7611E442F177E3F568EB45718B30EB635* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 35)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m14F2AACB1148A28E415DC6A2F626529D33CF4081_gshared (Dictionary_2_t9B2ADF59B0E83212023684CAE164D0B1C22E800C* __this, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t52DB08136C23308859B3EBE1F2751AC002E126E2* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 V_6;
	memset((&V_6), 0, sizeof(V_6));
	EqualityComparer_1_tD07CBC58F821582B79CB59B10264DC683DE3EE5C* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_1 = L_1;
		EntryU5BU5D_t52DB08136C23308859B3EBE1F2751AC002E126E2* L_2 = __this->____entries;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		Il2CppFakeBox<ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814> L_6(il2cpp_rgctx_data(method->klass->rgctx_data, 11), (&___0_key));
		int32_t L_7;
		L_7 = ValueType_GetHashCode_m3B47C72EA1FA846D9B0DFF3C444AB2BFA22CF3CE((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_6), NULL);
		V_5 = ((int32_t)(L_7&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = V_1;
		int32_t L_9 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = V_1;
		NullCheck(L_10);
		NullCheck(L_8);
		int32_t L_11 = ((int32_t)(L_9%((int32_t)(((RuntimeArray*)L_10)->max_length))));
		int32_t L_12 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814));
	}

IL_0066:
	{
		int32_t L_14 = V_0;
		EntryU5BU5D_t52DB08136C23308859B3EBE1F2751AC002E126E2* L_15 = V_2;
		NullCheck(L_15);
		if ((!(((uint32_t)L_14) < ((uint32_t)((int32_t)(((RuntimeArray*)L_15)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t52DB08136C23308859B3EBE1F2751AC002E126E2* L_16 = V_2;
		int32_t L_17 = V_0;
		NullCheck(L_16);
		int32_t L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___hashCode;
		int32_t L_19 = V_5;
		if ((!(((uint32_t)L_18) == ((uint32_t)L_19))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_tD07CBC58F821582B79CB59B10264DC683DE3EE5C* L_20;
		L_20 = EqualityComparer_1_get_Default_mA1371F43F9121608E1B210C692D2B369D8A50A37_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t52DB08136C23308859B3EBE1F2751AC002E126E2* L_21 = V_2;
		int32_t L_22 = V_0;
		NullCheck(L_21);
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_23 = ((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_22)))->___key;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_24 = ___0_key;
		NullCheck(L_20);
		bool L_25;
		L_25 = VirtualFuncInvoker2< bool, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 >::Invoke(8, L_20, L_23, L_24);
		if (L_25)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t52DB08136C23308859B3EBE1F2751AC002E126E2* L_26 = V_2;
		int32_t L_27 = V_0;
		NullCheck(L_26);
		int32_t L_28 = ((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27)))->___next;
		V_0 = L_28;
		int32_t L_29 = V_3;
		EntryU5BU5D_t52DB08136C23308859B3EBE1F2751AC002E126E2* L_30 = V_2;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_31 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_31, 1));
		goto IL_0066;
	}

IL_0110:
	{
		RuntimeObject* L_32 = V_4;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_33 = ___0_key;
		NullCheck(L_32);
		int32_t L_34;
		L_34 = InterfaceFuncInvoker1< int32_t, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_32, L_33);
		V_8 = ((int32_t)(L_34&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_1;
		int32_t L_36 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = V_1;
		NullCheck(L_37);
		NullCheck(L_35);
		int32_t L_38 = ((int32_t)(L_36%((int32_t)(((RuntimeArray*)L_37)->max_length))));
		int32_t L_39 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_39, 1));
	}

IL_012b:
	{
		int32_t L_40 = V_0;
		EntryU5BU5D_t52DB08136C23308859B3EBE1F2751AC002E126E2* L_41 = V_2;
		NullCheck(L_41);
		if ((!(((uint32_t)L_40) < ((uint32_t)((int32_t)(((RuntimeArray*)L_41)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t52DB08136C23308859B3EBE1F2751AC002E126E2* L_42 = V_2;
		int32_t L_43 = V_0;
		NullCheck(L_42);
		int32_t L_44 = ((L_42)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_43)))->___hashCode;
		int32_t L_45 = V_8;
		if ((!(((uint32_t)L_44) == ((uint32_t)L_45))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_46 = V_4;
		EntryU5BU5D_t52DB08136C23308859B3EBE1F2751AC002E126E2* L_47 = V_2;
		int32_t L_48 = V_0;
		NullCheck(L_47);
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_49 = ((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___key;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_50 = ___0_key;
		NullCheck(L_46);
		bool L_51;
		L_51 = InterfaceFuncInvoker2< bool, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_46, L_49, L_50);
		if (L_51)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t52DB08136C23308859B3EBE1F2751AC002E126E2* L_52 = V_2;
		int32_t L_53 = V_0;
		NullCheck(L_52);
		int32_t L_54 = ((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___next;
		V_0 = L_54;
		int32_t L_55 = V_3;
		EntryU5BU5D_t52DB08136C23308859B3EBE1F2751AC002E126E2* L_56 = V_2;
		NullCheck(L_56);
		if ((((int32_t)L_55) < ((int32_t)((int32_t)(((RuntimeArray*)L_56)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_57 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_57, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_58 = V_0;
		return L_58;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_mA4CE591380BC35E6CC2EBA67E6F850F43861AC7A_gshared (Dictionary_2_t9B2ADF59B0E83212023684CAE164D0B1C22E800C* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t52DB08136C23308859B3EBE1F2751AC002E126E2* L_5 = (EntryU5BU5D_t52DB08136C23308859B3EBE1F2751AC002E126E2*)(EntryU5BU5D_t52DB08136C23308859B3EBE1F2751AC002E126E2*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 40), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mF362D48543EA02D0A45372B9F046E2F683925E27_gshared (Dictionary_2_t9B2ADF59B0E83212023684CAE164D0B1C22E800C* __this, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___0_key, int32_t ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_t52DB08136C23308859B3EBE1F2751AC002E126E2* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_tBFCAF6DF9FBB6B7CB44FAA838B615D233C134CAB* V_10 = NULL;
	ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 V_11;
	memset((&V_11), 0, sizeof(V_11));
	EqualityComparer_1_tD07CBC58F821582B79CB59B10264DC683DE3EE5C* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_mA4CE591380BC35E6CC2EBA67E6F850F43861AC7A(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_002c:
	{
		EntryU5BU5D_t52DB08136C23308859B3EBE1F2751AC002E126E2* L_4 = __this->____entries;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_8 = ___0_key;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		Il2CppFakeBox<ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814> L_10(il2cpp_rgctx_data(method->klass->rgctx_data, 11), (&___0_key));
		int32_t L_11;
		L_11 = ValueType_GetHashCode_m3B47C72EA1FA846D9B0DFF3C444AB2BFA22CF3CE((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_10), NULL);
		G_B7_0 = L_11;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets;
		int32_t L_13 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = __this->____buckets;
		NullCheck(L_14);
		NullCheck(L_12);
		V_4 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_13%((int32_t)(((RuntimeArray*)L_14)->max_length)))))));
		int32_t* L_15 = V_4;
		int32_t L_16 = *((int32_t*)L_15);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
		RuntimeObject* L_17 = V_1;
		if (L_17)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814));
	}

IL_0091:
	{
		int32_t L_19 = V_5;
		EntryU5BU5D_t52DB08136C23308859B3EBE1F2751AC002E126E2* L_20 = V_0;
		NullCheck(L_20);
		if ((!(((uint32_t)L_19) < ((uint32_t)((int32_t)(((RuntimeArray*)L_20)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t52DB08136C23308859B3EBE1F2751AC002E126E2* L_21 = V_0;
		int32_t L_22 = V_5;
		NullCheck(L_21);
		int32_t L_23 = ((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_22)))->___hashCode;
		int32_t L_24 = V_2;
		if ((!(((uint32_t)L_23) == ((uint32_t)L_24))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_tD07CBC58F821582B79CB59B10264DC683DE3EE5C* L_25;
		L_25 = EqualityComparer_1_get_Default_mA1371F43F9121608E1B210C692D2B369D8A50A37_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t52DB08136C23308859B3EBE1F2751AC002E126E2* L_26 = V_0;
		int32_t L_27 = V_5;
		NullCheck(L_26);
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_28 = ((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27)))->___key;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_29 = ___0_key;
		NullCheck(L_25);
		bool L_30;
		L_30 = VirtualFuncInvoker2< bool, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 >::Invoke(8, L_25, L_28, L_29);
		if (!L_30)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_31 = ___2_behavior;
		if ((!(((uint32_t)L_31) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t52DB08136C23308859B3EBE1F2751AC002E126E2* L_32 = V_0;
		int32_t L_33 = V_5;
		NullCheck(L_32);
		int32_t L_34 = ___1_value;
		((L_32)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_33)))->___value = L_34;
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_35 = ___2_behavior;
		if ((!(((uint32_t)L_35) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_36 = ___0_key;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_37 = L_36;
		RuntimeObject* L_38 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_37);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_38, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t52DB08136C23308859B3EBE1F2751AC002E126E2* L_39 = V_0;
		int32_t L_40 = V_5;
		NullCheck(L_39);
		int32_t L_41 = ((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40)))->___next;
		V_5 = L_41;
		int32_t L_42 = V_3;
		EntryU5BU5D_t52DB08136C23308859B3EBE1F2751AC002E126E2* L_43 = V_0;
		NullCheck(L_43);
		if ((((int32_t)L_42) < ((int32_t)((int32_t)(((RuntimeArray*)L_43)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_44 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_44, 1));
		goto IL_0091;
	}

IL_0187:
	{
		int32_t L_45 = V_5;
		EntryU5BU5D_t52DB08136C23308859B3EBE1F2751AC002E126E2* L_46 = V_0;
		NullCheck(L_46);
		if ((!(((uint32_t)L_45) < ((uint32_t)((int32_t)(((RuntimeArray*)L_46)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t52DB08136C23308859B3EBE1F2751AC002E126E2* L_47 = V_0;
		int32_t L_48 = V_5;
		NullCheck(L_47);
		int32_t L_49 = ((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___hashCode;
		int32_t L_50 = V_2;
		if ((!(((uint32_t)L_49) == ((uint32_t)L_50))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_51 = V_1;
		EntryU5BU5D_t52DB08136C23308859B3EBE1F2751AC002E126E2* L_52 = V_0;
		int32_t L_53 = V_5;
		NullCheck(L_52);
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_54 = ((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___key;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_55 = ___0_key;
		NullCheck(L_51);
		bool L_56;
		L_56 = InterfaceFuncInvoker2< bool, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_51, L_54, L_55);
		if (!L_56)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_57 = ___2_behavior;
		if ((!(((uint32_t)L_57) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t52DB08136C23308859B3EBE1F2751AC002E126E2* L_58 = V_0;
		int32_t L_59 = V_5;
		NullCheck(L_58);
		int32_t L_60 = ___1_value;
		((L_58)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_59)))->___value = L_60;
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_61 = ___2_behavior;
		if ((!(((uint32_t)L_61) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_62 = ___0_key;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_63 = L_62;
		RuntimeObject* L_64 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_63);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_64, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t52DB08136C23308859B3EBE1F2751AC002E126E2* L_65 = V_0;
		int32_t L_66 = V_5;
		NullCheck(L_65);
		int32_t L_67 = ((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___next;
		V_5 = L_67;
		int32_t L_68 = V_3;
		EntryU5BU5D_t52DB08136C23308859B3EBE1F2751AC002E126E2* L_69 = V_0;
		NullCheck(L_69);
		if ((((int32_t)L_68) < ((int32_t)((int32_t)(((RuntimeArray*)L_69)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_70 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_70, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_71 = __this->____freeCount;
		if ((((int32_t)L_71) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_72 = __this->____freeList;
		V_8 = L_72;
		V_7 = (bool)1;
		int32_t L_73 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_73, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_74 = __this->____count;
		V_13 = L_74;
		int32_t L_75 = V_13;
		EntryU5BU5D_t52DB08136C23308859B3EBE1F2751AC002E126E2* L_76 = V_0;
		NullCheck(L_76);
		if ((!(((uint32_t)L_75) == ((uint32_t)((int32_t)(((RuntimeArray*)L_76)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_m78FFECDBE292F246BA76292FFFFD313CEA60ED2E(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_77 = V_13;
		V_8 = L_77;
		int32_t L_78 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_78, 1));
		EntryU5BU5D_t52DB08136C23308859B3EBE1F2751AC002E126E2* L_79 = __this->____entries;
		V_0 = L_79;
	}

IL_0250:
	{
		bool L_80 = V_6;
		if (L_80)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_81 = V_4;
		G_B51_0 = L_81;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_82 = __this->____buckets;
		int32_t L_83 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_84 = __this->____buckets;
		NullCheck(L_84);
		NullCheck(L_82);
		G_B51_0 = ((L_82)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_83%((int32_t)(((RuntimeArray*)L_84)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t52DB08136C23308859B3EBE1F2751AC002E126E2* L_85 = V_0;
		int32_t L_86 = V_8;
		NullCheck(L_85);
		V_10 = ((L_85)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_86)));
		bool L_87 = V_7;
		if (!L_87)
		{
			goto IL_028a;
		}
	}
	{
		Entry_tBFCAF6DF9FBB6B7CB44FAA838B615D233C134CAB* L_88 = V_10;
		int32_t L_89 = L_88->___next;
		__this->____freeList = L_89;
	}

IL_028a:
	{
		Entry_tBFCAF6DF9FBB6B7CB44FAA838B615D233C134CAB* L_90 = V_10;
		int32_t L_91 = V_2;
		L_90->___hashCode = L_91;
		Entry_tBFCAF6DF9FBB6B7CB44FAA838B615D233C134CAB* L_92 = V_10;
		int32_t* L_93 = V_9;
		int32_t L_94 = *((int32_t*)L_93);
		L_92->___next = ((int32_t)il2cpp_codegen_subtract(L_94, 1));
		Entry_tBFCAF6DF9FBB6B7CB44FAA838B615D233C134CAB* L_95 = V_10;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_96 = ___0_key;
		L_95->___key = L_96;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_95->___key))->___element), (void*)NULL);
		Entry_tBFCAF6DF9FBB6B7CB44FAA838B615D233C134CAB* L_97 = V_10;
		int32_t L_98 = ___1_value;
		L_97->___value = L_98;
		int32_t* L_99 = V_9;
		int32_t L_100 = V_8;
		*((int32_t*)L_99) = (int32_t)((int32_t)il2cpp_codegen_add(L_100, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_m5D9F3F51E9388702A79479B53E12ED2CABDF8F16_gshared (Dictionary_2_t9B2ADF59B0E83212023684CAE164D0B1C22E800C* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_tA37DB0B7611E442F177E3F568EB45718B30EB635* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 32)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_mA4CE591380BC35E6CC2EBA67E6F850F43861AC7A(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 35)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_tA37DB0B7611E442F177E3F568EB45718B30EB635*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 26)));
		KeyValuePair_2U5BU5D_tA37DB0B7611E442F177E3F568EB45718B30EB635* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_tA37DB0B7611E442F177E3F568EB45718B30EB635* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_21;
		L_21 = KeyValuePair_2_get_Key_m54125E9738B585176CC0EF0FF6F5FA5CB959B3A2_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		goto IL_009a;
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_tA37DB0B7611E442F177E3F568EB45718B30EB635* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_24;
		L_24 = KeyValuePair_2_get_Key_m54125E9738B585176CC0EF0FF6F5FA5CB959B3A2_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		KeyValuePair_2U5BU5D_tA37DB0B7611E442F177E3F568EB45718B30EB635* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		int32_t L_27;
		L_27 = KeyValuePair_2_get_Value_m080BF3202ED3064344C3E33E105A6DF813970AFE_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		Dictionary_2_Add_m42BB2493CF86A5116013E5C273D1789DF840BB8A(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_tA37DB0B7611E442F177E3F568EB45718B30EB635* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m78FFECDBE292F246BA76292FFFFD313CEA60ED2E_gshared (Dictionary_2_t9B2ADF59B0E83212023684CAE164D0B1C22E800C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_m3F6A64CF02E713FA37231BF5A3596FE09A3F4D0A(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m3F6A64CF02E713FA37231BF5A3596FE09A3F4D0A_gshared (Dictionary_2_t9B2ADF59B0E83212023684CAE164D0B1C22E800C* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t52DB08136C23308859B3EBE1F2751AC002E126E2* V_1 = NULL;
	int32_t V_2 = 0;
	ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_t52DB08136C23308859B3EBE1F2751AC002E126E2* L_3 = (EntryU5BU5D_t52DB08136C23308859B3EBE1F2751AC002E126E2*)(EntryU5BU5D_t52DB08136C23308859B3EBE1F2751AC002E126E2*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 40), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_t52DB08136C23308859B3EBE1F2751AC002E126E2* L_5 = __this->____entries;
		EntryU5BU5D_t52DB08136C23308859B3EBE1F2751AC002E126E2* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814));
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)((int32_t)false&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t52DB08136C23308859B3EBE1F2751AC002E126E2* L_10 = V_1;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t52DB08136C23308859B3EBE1F2751AC002E126E2* L_13 = V_1;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		EntryU5BU5D_t52DB08136C23308859B3EBE1F2751AC002E126E2* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814* L_17 = (ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814*)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key);
		Il2CppFakeBox<ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814> L_18(il2cpp_rgctx_data(method->klass->rgctx_data, 11), L_17);
		int32_t L_19;
		L_19 = ValueType_GetHashCode_m3B47C72EA1FA846D9B0DFF3C444AB2BFA22CF3CE((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_18), NULL);
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode = ((int32_t)(L_19&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_20 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_007f:
	{
		int32_t L_21 = V_4;
		int32_t L_22 = V_2;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t52DB08136C23308859B3EBE1F2751AC002E126E2* L_23 = V_1;
		int32_t L_24 = V_5;
		NullCheck(L_23);
		int32_t L_25 = ((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24)))->___hashCode;
		if ((((int32_t)L_25) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t52DB08136C23308859B3EBE1F2751AC002E126E2* L_26 = V_1;
		int32_t L_27 = V_5;
		NullCheck(L_26);
		int32_t L_28 = ((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27)))->___hashCode;
		int32_t L_29 = ___0_newSize;
		V_6 = ((int32_t)(L_28%L_29));
		EntryU5BU5D_t52DB08136C23308859B3EBE1F2751AC002E126E2* L_30 = V_1;
		int32_t L_31 = V_5;
		NullCheck(L_30);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = V_0;
		int32_t L_33 = V_6;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		int32_t L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___next = ((int32_t)il2cpp_codegen_subtract(L_35, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_0;
		int32_t L_37 = V_6;
		int32_t L_38 = V_5;
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(L_37), (int32_t)((int32_t)il2cpp_codegen_add(L_38, 1)));
	}

IL_00c5:
	{
		int32_t L_39 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_00cb:
	{
		int32_t L_40 = V_5;
		int32_t L_41 = V_2;
		if ((((int32_t)L_40) < ((int32_t)L_41)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_42 = V_0;
		__this->____buckets = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_42);
		EntryU5BU5D_t52DB08136C23308859B3EBE1F2751AC002E126E2* L_43 = V_1;
		__this->____entries = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_43);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m6A804AEF2E4FD1170A61FF9FFCA56E416B2616CA_gshared (Dictionary_2_t9B2ADF59B0E83212023684CAE164D0B1C22E800C* __this, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tBFCAF6DF9FBB6B7CB44FAA838B615D233C134CAB* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		Il2CppFakeBox<ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814> L_4(il2cpp_rgctx_data(method->klass->rgctx_data, 11), (&___0_key));
		int32_t L_5;
		L_5 = ValueType_GetHashCode_m3B47C72EA1FA846D9B0DFF3C444AB2BFA22CF3CE((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_4), NULL);
		G_B6_0 = L_5;
		goto IL_0038;
	}

IL_0032:
	{
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_6 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker1< int32_t, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_6);
		G_B6_0 = L_7;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_8 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		NullCheck(L_9);
		V_1 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		int32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t52DB08136C23308859B3EBE1F2751AC002E126E2* L_14 = __this->____entries;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		V_4 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)));
		Entry_tBFCAF6DF9FBB6B7CB44FAA838B615D233C134CAB* L_16 = V_4;
		int32_t L_17 = L_16->___hashCode;
		int32_t L_18 = V_0;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_19 = __this->____comparer;
		RuntimeObject* L_20 = L_19;
		if (L_20)
		{
			G_B10_0 = L_20;
			goto IL_0095;
		}
		G_B9_0 = L_20;
	}
	{
		EqualityComparer_1_tD07CBC58F821582B79CB59B10264DC683DE3EE5C* L_21;
		L_21 = EqualityComparer_1_get_Default_mA1371F43F9121608E1B210C692D2B369D8A50A37_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_tBFCAF6DF9FBB6B7CB44FAA838B615D233C134CAB* L_22 = V_4;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_23 = L_22->___key;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_24 = ___0_key;
		NullCheck(L_21);
		bool L_25;
		L_25 = VirtualFuncInvoker2< bool, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 >::Invoke(8, L_21, L_23, L_24);
		G_B11_0 = L_25;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_tBFCAF6DF9FBB6B7CB44FAA838B615D233C134CAB* L_26 = V_4;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_27 = L_26->___key;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_28 = ___0_key;
		NullCheck(G_B10_0);
		bool L_29;
		L_29 = InterfaceFuncInvoker2< bool, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_27, L_28);
		G_B11_0 = L_29;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_30 = V_2;
		if ((((int32_t)L_30) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = __this->____buckets;
		int32_t L_32 = V_1;
		Entry_tBFCAF6DF9FBB6B7CB44FAA838B615D233C134CAB* L_33 = V_4;
		int32_t L_34 = L_33->___next;
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (int32_t)((int32_t)il2cpp_codegen_add(L_34, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t52DB08136C23308859B3EBE1F2751AC002E126E2* L_35 = __this->____entries;
		int32_t L_36 = V_2;
		NullCheck(L_35);
		Entry_tBFCAF6DF9FBB6B7CB44FAA838B615D233C134CAB* L_37 = V_4;
		int32_t L_38 = L_37->___next;
		((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_36)))->___next = L_38;
	}

IL_00d6:
	{
		Entry_tBFCAF6DF9FBB6B7CB44FAA838B615D233C134CAB* L_39 = V_4;
		L_39->___hashCode = (-1);
		Entry_tBFCAF6DF9FBB6B7CB44FAA838B615D233C134CAB* L_40 = V_4;
		int32_t L_41 = __this->____freeList;
		L_40->___next = L_41;
	}
	{
		Entry_tBFCAF6DF9FBB6B7CB44FAA838B615D233C134CAB* L_42 = V_4;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814* L_43 = (ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814*)(&L_42->___key);
		il2cpp_codegen_initobj(L_43, sizeof(ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814));
	}

IL_00ff:
	{
		goto IL_0113;
	}

IL_0113:
	{
		int32_t L_44 = V_3;
		__this->____freeList = L_44;
		int32_t L_45 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_45, 1));
		int32_t L_46 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_46, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_47 = V_3;
		V_2 = L_47;
		Entry_tBFCAF6DF9FBB6B7CB44FAA838B615D233C134CAB* L_48 = V_4;
		int32_t L_49 = L_48->___next;
		V_3 = L_49;
	}

IL_0142:
	{
		int32_t L_50 = V_3;
		if ((((int32_t)L_50) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m10F551D33CF4A76981157C847D447718B2C0F892_gshared (Dictionary_2_t9B2ADF59B0E83212023684CAE164D0B1C22E800C* __this, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___0_key, int32_t* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m14F2AACB1148A28E415DC6A2F626529D33CF4081(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t* L_3 = ___1_value;
		EntryU5BU5D_t52DB08136C23308859B3EBE1F2751AC002E126E2* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		*(int32_t*)L_3 = L_6;
		return (bool)1;
	}

IL_0025:
	{
		int32_t* L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(int32_t));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m003170098A761CE1E43BE5723552CAA9C8C4F432_gshared (Dictionary_2_t9B2ADF59B0E83212023684CAE164D0B1C22E800C* __this, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___0_key, int32_t ___1_value, const RuntimeMethod* method) 
{
	{
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_0 = ___0_key;
		int32_t L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mF362D48543EA02D0A45372B9F046E2F683925E27(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12C6083A2B2A675D5797A202C529F6CE1EC82982_gshared (Dictionary_2_t9B2ADF59B0E83212023684CAE164D0B1C22E800C* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m0C5D526E9CE19F37E4F4FB396676D7D8CE455D22_gshared (Dictionary_2_t9B2ADF59B0E83212023684CAE164D0B1C22E800C* __this, KeyValuePair_2U5BU5D_tA37DB0B7611E442F177E3F568EB45718B30EB635* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_tA37DB0B7611E442F177E3F568EB45718B30EB635* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_mEB41FEA60A71FE120DD5D5E13A18738A13218B49(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_m93E2F102041A2D2F8B66DA227F3D8F6588F0689D_gshared (Dictionary_2_t9B2ADF59B0E83212023684CAE164D0B1C22E800C* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tA37DB0B7611E442F177E3F568EB45718B30EB635* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_t52DB08136C23308859B3EBE1F2751AC002E126E2* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_t52DB08136C23308859B3EBE1F2751AC002E126E2* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_m1CDDC10642903669FAFA95934CA6570DAD09275F(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_tA37DB0B7611E442F177E3F568EB45718B30EB635*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 26)));
		KeyValuePair_2U5BU5D_tA37DB0B7611E442F177E3F568EB45718B30EB635* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_tA37DB0B7611E442F177E3F568EB45718B30EB635* L_14 = V_0;
		int32_t L_15 = ___1_index;
		Dictionary_2_CopyTo_mEB41FEA60A71FE120DD5D5E13A18738A13218B49(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_t52DB08136C23308859B3EBE1F2751AC002E126E2* L_18 = __this->____entries;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_t52DB08136C23308859B3EBE1F2751AC002E126E2* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_t52DB08136C23308859B3EBE1F2751AC002E126E2* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_28);
		EntryU5BU5D_t52DB08136C23308859B3EBE1F2751AC002E126E2* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		int32_t L_32 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value;
		int32_t L_33 = L_32;
		RuntimeObject* L_34 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), &L_33);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_35;
		memset((&L_35), 0, sizeof(L_35));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_35), L_29, L_34, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_35);
	}

IL_00b5:
	{
		int32_t L_36 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00b9:
	{
		int32_t L_37 = V_3;
		int32_t L_38 = __this->____count;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_39 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_39, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = V_4;
		if (L_40)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_41 = __this->____count;
			V_5 = L_41;
			EntryU5BU5D_t52DB08136C23308859B3EBE1F2751AC002E126E2* L_42 = __this->____entries;
			V_6 = L_42;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_t52DB08136C23308859B3EBE1F2751AC002E126E2* L_43 = V_6;
			int32_t L_44 = V_7;
			NullCheck(L_43);
			int32_t L_45 = ((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44)))->___hashCode;
			if ((((int32_t)L_45) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_46 = V_4;
			int32_t L_47 = ___1_index;
			int32_t L_48 = L_47;
			___1_index = ((int32_t)il2cpp_codegen_add(L_48, 1));
			EntryU5BU5D_t52DB08136C23308859B3EBE1F2751AC002E126E2* L_49 = V_6;
			int32_t L_50 = V_7;
			NullCheck(L_49);
			ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_51 = ((L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_50)))->___key;
			EntryU5BU5D_t52DB08136C23308859B3EBE1F2751AC002E126E2* L_52 = V_6;
			int32_t L_53 = V_7;
			NullCheck(L_52);
			int32_t L_54 = ((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___value;
			KeyValuePair_2_t68435994E8A66E579434AAA75502B7B6137A7B2A L_55;
			memset((&L_55), 0, sizeof(L_55));
			KeyValuePair_2__ctor_m68187F9608C286BCED8AC7DDD8F5B4DB66086C27((&L_55), L_51, L_54, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
			KeyValuePair_2_t68435994E8A66E579434AAA75502B7B6137A7B2A L_56 = L_55;
			RuntimeObject* L_57 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 17), &L_56);
			NullCheck(L_46);
			ArrayElementTypeCheck (L_46, L_57);
			(L_46)->SetAt(static_cast<il2cpp_array_size_t>(L_48), (RuntimeObject*)L_57);
		}

IL_012a_1:
		{
			int32_t L_58 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_58, 1));
		}

IL_0130_1:
		{
			int32_t L_59 = V_7;
			int32_t L_60 = V_5;
			if ((((int32_t)L_59) < ((int32_t)L_60)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_mFE7E1E2FFE01F1DA872D48A3AE3053A2522B7D43_gshared (Dictionary_2_t9B2ADF59B0E83212023684CAE164D0B1C22E800C* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tEA5C0B380BD53EEE55544419AFADE6EF55B8CACD L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mF3130D5466437808038B2FBA366C25885E5B3090((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		Enumerator_tEA5C0B380BD53EEE55544419AFADE6EF55B8CACD L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 29), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_EnsureCapacity_mC3597F2092594B130EB4AA5181A9830AFFEBF94D_gshared (Dictionary_2_t9B2ADF59B0E83212023684CAE164D0B1C22E800C* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_000b:
	{
		EntryU5BU5D_t52DB08136C23308859B3EBE1F2751AC002E126E2* L_1 = __this->____entries;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		EntryU5BU5D_t52DB08136C23308859B3EBE1F2751AC002E126E2* L_2 = __this->____entries;
		NullCheck(L_2);
		G_B5_0 = ((int32_t)(((RuntimeArray*)L_2)->max_length));
		goto IL_001e;
	}

IL_001d:
	{
		G_B5_0 = 0;
	}

IL_001e:
	{
		V_0 = G_B5_0;
		int32_t L_3 = V_0;
		int32_t L_4 = ___0_capacity;
		if ((((int32_t)L_3) < ((int32_t)L_4)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_5 = V_0;
		return L_5;
	}

IL_0025:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->____buckets;
		if (L_6)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_7 = ___0_capacity;
		int32_t L_8;
		L_8 = Dictionary_2_Initialize_mA4CE591380BC35E6CC2EBA67E6F850F43861AC7A(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return L_8;
	}

IL_0035:
	{
		int32_t L_9 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_10;
		L_10 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_9, NULL);
		V_1 = L_10;
		int32_t L_11 = V_1;
		Dictionary_2_Resize_m3F6A64CF02E713FA37231BF5A3596FE09A3F4D0A(__this, L_11, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		int32_t L_12 = V_1;
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_mC86010CCAE7DF9BF8137915AACFEDFB40A14A997_gshared (Dictionary_2_t9B2ADF59B0E83212023684CAE164D0B1C22E800C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m5782CBE24AB9D639F557BDA5AB10A838CA35549F_gshared (Dictionary_2_t9B2ADF59B0E83212023684CAE164D0B1C22E800C* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_mAB33EE65CBA9AB18339463CAFEACB90CBB930305(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = Dictionary_2_FindEntry_m14F2AACB1148A28E415DC6A2F626529D33CF4081(__this, ((*(ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814*)((ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814*)(ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11))))), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_t52DB08136C23308859B3EBE1F2751AC002E126E2* L_5 = __this->____entries;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_mCE2AB5DD3DCCDFC4F7785ADB688DADB130A71907_gshared (Dictionary_2_t9B2ADF59B0E83212023684CAE164D0B1C22E800C* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mC3916E2A31C5FA9D0BB4E2A929F5225B4205042F(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 49));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814*)((ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814*)(ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11)))));
		}
		try
		{
			ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_set_Item_m02B4D3AA8D37064197DC0B6983574A325BAC93EF(__this, L_3, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15))))), il2cpp_rgctx_method(method->klass->rgctx_data, 50));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			RuntimeObject* L_5 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 51)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_7;
			L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_5, L_7, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		RuntimeObject* L_8 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 52)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_8, L_10, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mAB33EE65CBA9AB18339463CAFEACB90CBB930305_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_m4D3950A626A9555C7B96BF494A8EE574578C40CE_gshared (Dictionary_2_t9B2ADF59B0E83212023684CAE164D0B1C22E800C* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_mAB33EE65CBA9AB18339463CAFEACB90CBB930305(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m8A90C6CB1027158417FA82AAB50347C32CA3C952(__this, ((*(ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814*)((ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814*)(ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11))))), il2cpp_rgctx_method(method->klass->rgctx_data, 53));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_m947D1C7DFA830317EC73C986B51CCAEB807716B6_gshared (Dictionary_2_t9B2ADF59B0E83212023684CAE164D0B1C22E800C* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tEA5C0B380BD53EEE55544419AFADE6EF55B8CACD L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mF3130D5466437808038B2FBA366C25885E5B3090((&L_0), __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		Enumerator_tEA5C0B380BD53EEE55544419AFADE6EF55B8CACD L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 29), &L_1);
		return (RuntimeObject*)L_2;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m60B71675C327008C37BBA860E3C8BA29E73AAB35_gshared (Dictionary_2_tB13D0A847475988F23522A8642F7D24BA304F9B7* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_mA1BB8D3256D977F60FE481752934D9DCA8F6FB11(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mD90A8B2CAB5E2141B566A397969B1B9C1B3A28FA_gshared (Dictionary_2_tB13D0A847475988F23522A8642F7D24BA304F9B7* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_mA1BB8D3256D977F60FE481752934D9DCA8F6FB11(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m61AFFA02C3E3627BFBC04E0024044C736A1A9096_gshared (Dictionary_2_tB13D0A847475988F23522A8642F7D24BA304F9B7* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_mA1BB8D3256D977F60FE481752934D9DCA8F6FB11(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mA1BB8D3256D977F60FE481752934D9DCA8F6FB11_gshared (Dictionary_2_tB13D0A847475988F23522A8642F7D24BA304F9B7* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m5285134AD51C479B44FCD327D6BC30B4C697168F(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_tD07CBC58F821582B79CB59B10264DC683DE3EE5C* L_5;
		L_5 = EqualityComparer_1_get_Default_mA1371F43F9121608E1B210C692D2B369D8A50A37_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_tD07CBC58F821582B79CB59B10264DC683DE3EE5C*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m6F57B9338151BCCB0FA80C32BE92BB4AF9C6A221_gshared (Dictionary_2_tB13D0A847475988F23522A8642F7D24BA304F9B7* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m62991249DE42FC4B6D2418126CC96D6B756BB68D_gshared (Dictionary_2_tB13D0A847475988F23522A8642F7D24BA304F9B7* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		int32_t L_1 = __this->____freeCount;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tAE0C48201AB6D92D5AD1D458816B2B13DC9FF903* Dictionary_2_get_Keys_mA6BC18E73B92B07A2351251338956DA80E877930_gshared (Dictionary_2_tB13D0A847475988F23522A8642F7D24BA304F9B7* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tAE0C48201AB6D92D5AD1D458816B2B13DC9FF903* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tAE0C48201AB6D92D5AD1D458816B2B13DC9FF903* L_1 = (KeyCollection_tAE0C48201AB6D92D5AD1D458816B2B13DC9FF903*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 7));
		KeyCollection__ctor_mE415514D3AC6FBAF2C545195FDF96C3B2D758E6F(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tAE0C48201AB6D92D5AD1D458816B2B13DC9FF903* L_2 = __this->____keys;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_tDAA54478D6690BCDC9E7745F0B5D0265360309EC* Dictionary_2_get_Values_mB651DD6B54948F38075D0228B73CCE2A28AF7BFD_gshared (Dictionary_2_tB13D0A847475988F23522A8642F7D24BA304F9B7* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tDAA54478D6690BCDC9E7745F0B5D0265360309EC* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tDAA54478D6690BCDC9E7745F0B5D0265360309EC* L_1 = (ValueCollection_tDAA54478D6690BCDC9E7745F0B5D0265360309EC*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		ValueCollection__ctor_m71F5C062114C4C507B074B3FBF6657C7B2372AAC(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tDAA54478D6690BCDC9E7745F0B5D0265360309EC* L_2 = __this->____values;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m182ED2060F16415C201117C134889E7C1887B285_gshared (Dictionary_2_tB13D0A847475988F23522A8642F7D24BA304F9B7* __this, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m29258E04D9D383D9736BDB10172A444E7DBAB192(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t25E6E3385E909292D9EDC1103947B32EB24B5B0B* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		return L_5;
	}

IL_001e:
	{
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_6 = ___0_key;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject*));
		RuntimeObject* L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m444B00B363568ADD78EBA9E89C76E1FB278B4FFE_gshared (Dictionary_2_tB13D0A847475988F23522A8642F7D24BA304F9B7* __this, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m5B684CF3D9C1AD1A62240289DFF23940617D968D(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m77C09F1138342291C84F2D1884BC97F0928D029D_gshared (Dictionary_2_tB13D0A847475988F23522A8642F7D24BA304F9B7* __this, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m5B684CF3D9C1AD1A62240289DFF23940617D968D(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m534A4972347B2F8B990CD89F7465041FBFBFA935_gshared (Dictionary_2_tB13D0A847475988F23522A8642F7D24BA304F9B7* __this, KeyValuePair_2_t5EA39A38B18A7FBA9D70D487DBE55714255FAAA6 ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_0;
		L_0 = KeyValuePair_2_get_Key_m204134D5294D0652A7BEC9251C7BDD29B507542A_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		RuntimeObject* L_1;
		L_1 = KeyValuePair_2_get_Value_mC161A41DE956DE045D4BE7D7D3FAA6B97A774C4A_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		Dictionary_2_Add_m77C09F1138342291C84F2D1884BC97F0928D029D(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_mE0F45E6B992559970D2D6436B5A2C3D9A0C81A1C_gshared (Dictionary_2_tB13D0A847475988F23522A8642F7D24BA304F9B7* __this, KeyValuePair_2_t5EA39A38B18A7FBA9D70D487DBE55714255FAAA6 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_0;
		L_0 = KeyValuePair_2_get_Key_m204134D5294D0652A7BEC9251C7BDD29B507542A_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m29258E04D9D383D9736BDB10172A444E7DBAB192(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3;
		L_3 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		EntryU5BU5D_t25E6E3385E909292D9EDC1103947B32EB24B5B0B* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		RuntimeObject* L_7;
		L_7 = KeyValuePair_2_get_Value_mC161A41DE956DE045D4BE7D7D3FAA6B97A774C4A_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_mC663008F7B876FCA59DA5034EF37451FEF881AE7_gshared (Dictionary_2_tB13D0A847475988F23522A8642F7D24BA304F9B7* __this, KeyValuePair_2_t5EA39A38B18A7FBA9D70D487DBE55714255FAAA6 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_0;
		L_0 = KeyValuePair_2_get_Key_m204134D5294D0652A7BEC9251C7BDD29B507542A_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m29258E04D9D383D9736BDB10172A444E7DBAB192(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3;
		L_3 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		EntryU5BU5D_t25E6E3385E909292D9EDC1103947B32EB24B5B0B* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		RuntimeObject* L_7;
		L_7 = KeyValuePair_2_get_Value_mC161A41DE956DE045D4BE7D7D3FAA6B97A774C4A_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_9;
		L_9 = KeyValuePair_2_get_Key_m204134D5294D0652A7BEC9251C7BDD29B507542A_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		bool L_10;
		L_10 = Dictionary_2_Remove_mB168E67A05948E94B0C8CB8AF10FDFF837CF4013(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m21B5F6ECB7D9AD83430DE537D7044B4188023F6E_gshared (Dictionary_2_tB13D0A847475988F23522A8642F7D24BA304F9B7* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		NullCheck(L_3);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____freeCount = 0;
		EntryU5BU5D_t25E6E3385E909292D9EDC1103947B32EB24B5B0B* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m90F1C333816C1CD050D6E5E14CA9440EB0B4696D_gshared (Dictionary_2_tB13D0A847475988F23522A8642F7D24BA304F9B7* __this, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___0_key, const RuntimeMethod* method) 
{
	{
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m29258E04D9D383D9736BDB10172A444E7DBAB192(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m1B88DD7046B74566D5A8E500FC161868D89B53F3_gshared (Dictionary_2_tB13D0A847475988F23522A8642F7D24BA304F9B7* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_t25E6E3385E909292D9EDC1103947B32EB24B5B0B* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	int32_t V_3 = 0;
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t25E6E3385E909292D9EDC1103947B32EB24B5B0B* L_0 = __this->____entries;
		V_0 = L_0;
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_0049;
		}
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_t25E6E3385E909292D9EDC1103947B32EB24B5B0B* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_t25E6E3385E909292D9EDC1103947B32EB24B5B0B* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		RuntimeObject* L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		if (L_7)
		{
			goto IL_0037;
		}
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = __this->____count;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject*));
		RuntimeObject* L_11 = V_2;
		if (!L_11)
		{
			goto IL_0096;
		}
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t25E6E3385E909292D9EDC1103947B32EB24B5B0B* L_12 = V_0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_15;
		L_15 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		EntryU5BU5D_t25E6E3385E909292D9EDC1103947B32EB24B5B0B* L_16 = V_0;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		RuntimeObject* L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value;
		RuntimeObject* L_19 = ___0_value;
		NullCheck(L_15);
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008b:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = __this->____count;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_24;
		L_24 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_t25E6E3385E909292D9EDC1103947B32EB24B5B0B* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_28 = V_4;
		EntryU5BU5D_t25E6E3385E909292D9EDC1103947B32EB24B5B0B* L_29 = V_0;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		RuntimeObject* L_31 = ((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___value;
		RuntimeObject* L_32 = ___0_value;
		NullCheck(L_28);
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_28, L_31, L_32);
		if (!L_33)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d1:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = __this->____count;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mCE62830A4D7BD2F63E2FF27E28C3F5312BC0B99A_gshared (Dictionary_2_tB13D0A847475988F23522A8642F7D24BA304F9B7* __this, KeyValuePair_2U5BU5D_t18981E8B4DA835E5A8BEC453FB6196F9A462D869* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t25E6E3385E909292D9EDC1103947B32EB24B5B0B* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t18981E8B4DA835E5A8BEC453FB6196F9A462D869* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_t18981E8B4DA835E5A8BEC453FB6196F9A462D869* L_2 = ___0_array;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t18981E8B4DA835E5A8BEC453FB6196F9A462D869* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = Dictionary_2_get_Count_m62991249DE42FC4B6D2418126CC96D6B756BB68D(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = __this->____count;
		V_0 = L_6;
		EntryU5BU5D_t25E6E3385E909292D9EDC1103947B32EB24B5B0B* L_7 = __this->____entries;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t25E6E3385E909292D9EDC1103947B32EB24B5B0B* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t18981E8B4DA835E5A8BEC453FB6196F9A462D869* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_t25E6E3385E909292D9EDC1103947B32EB24B5B0B* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key;
		EntryU5BU5D_t25E6E3385E909292D9EDC1103947B32EB24B5B0B* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		RuntimeObject* L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value;
		KeyValuePair_2_t5EA39A38B18A7FBA9D70D487DBE55714255FAAA6 L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_mD81341F5971E9F53B692B9978CD1792E20832852((&L_20), L_16, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_t5EA39A38B18A7FBA9D70D487DBE55714255FAAA6)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t802BFC19A53773B2AE8F0F44521FB90B06501577 Dictionary_2_GetEnumerator_m79299439417464257634AE925527E9E9787DF078_gshared (Dictionary_2_tB13D0A847475988F23522A8642F7D24BA304F9B7* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t802BFC19A53773B2AE8F0F44521FB90B06501577 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mDFD86A525353C911DD4C6574B1CF11812E7C73B1((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m01E379FCA8F7847B5FD5FBD25921B6F50A5B4948_gshared (Dictionary_2_tB13D0A847475988F23522A8642F7D24BA304F9B7* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t802BFC19A53773B2AE8F0F44521FB90B06501577 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mDFD86A525353C911DD4C6574B1CF11812E7C73B1((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		Enumerator_t802BFC19A53773B2AE8F0F44521FB90B06501577 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 29), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_m72B735A79BD0690B02DEDCFDF4D60FC31632441B_gshared (Dictionary_2_tB13D0A847475988F23522A8642F7D24BA304F9B7* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t18981E8B4DA835E5A8BEC453FB6196F9A462D869* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_tD07CBC58F821582B79CB59B10264DC683DE3EE5C* L_6;
		L_6 = EqualityComparer_1_get_Default_mA1371F43F9121608E1B210C692D2B369D8A50A37_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 32)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		NullCheck(L_11);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = Dictionary_2_get_Count_m62991249DE42FC4B6D2418126CC96D6B756BB68D(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		KeyValuePair_2U5BU5D_t18981E8B4DA835E5A8BEC453FB6196F9A462D869* L_14 = (KeyValuePair_2U5BU5D_t18981E8B4DA835E5A8BEC453FB6196F9A462D869*)(KeyValuePair_2U5BU5D_t18981E8B4DA835E5A8BEC453FB6196F9A462D869*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 33), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_t18981E8B4DA835E5A8BEC453FB6196F9A462D869* L_15 = V_0;
		Dictionary_2_CopyTo_mCE62830A4D7BD2F63E2FF27E28C3F5312BC0B99A(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_t18981E8B4DA835E5A8BEC453FB6196F9A462D869* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 35)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m29258E04D9D383D9736BDB10172A444E7DBAB192_gshared (Dictionary_2_tB13D0A847475988F23522A8642F7D24BA304F9B7* __this, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t25E6E3385E909292D9EDC1103947B32EB24B5B0B* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 V_6;
	memset((&V_6), 0, sizeof(V_6));
	EqualityComparer_1_tD07CBC58F821582B79CB59B10264DC683DE3EE5C* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_1 = L_1;
		EntryU5BU5D_t25E6E3385E909292D9EDC1103947B32EB24B5B0B* L_2 = __this->____entries;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		Il2CppFakeBox<ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814> L_6(il2cpp_rgctx_data(method->klass->rgctx_data, 11), (&___0_key));
		int32_t L_7;
		L_7 = ValueType_GetHashCode_m3B47C72EA1FA846D9B0DFF3C444AB2BFA22CF3CE((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_6), NULL);
		V_5 = ((int32_t)(L_7&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = V_1;
		int32_t L_9 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = V_1;
		NullCheck(L_10);
		NullCheck(L_8);
		int32_t L_11 = ((int32_t)(L_9%((int32_t)(((RuntimeArray*)L_10)->max_length))));
		int32_t L_12 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814));
	}

IL_0066:
	{
		int32_t L_14 = V_0;
		EntryU5BU5D_t25E6E3385E909292D9EDC1103947B32EB24B5B0B* L_15 = V_2;
		NullCheck(L_15);
		if ((!(((uint32_t)L_14) < ((uint32_t)((int32_t)(((RuntimeArray*)L_15)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t25E6E3385E909292D9EDC1103947B32EB24B5B0B* L_16 = V_2;
		int32_t L_17 = V_0;
		NullCheck(L_16);
		int32_t L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___hashCode;
		int32_t L_19 = V_5;
		if ((!(((uint32_t)L_18) == ((uint32_t)L_19))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_tD07CBC58F821582B79CB59B10264DC683DE3EE5C* L_20;
		L_20 = EqualityComparer_1_get_Default_mA1371F43F9121608E1B210C692D2B369D8A50A37_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t25E6E3385E909292D9EDC1103947B32EB24B5B0B* L_21 = V_2;
		int32_t L_22 = V_0;
		NullCheck(L_21);
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_23 = ((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_22)))->___key;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_24 = ___0_key;
		NullCheck(L_20);
		bool L_25;
		L_25 = VirtualFuncInvoker2< bool, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 >::Invoke(8, L_20, L_23, L_24);
		if (L_25)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t25E6E3385E909292D9EDC1103947B32EB24B5B0B* L_26 = V_2;
		int32_t L_27 = V_0;
		NullCheck(L_26);
		int32_t L_28 = ((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27)))->___next;
		V_0 = L_28;
		int32_t L_29 = V_3;
		EntryU5BU5D_t25E6E3385E909292D9EDC1103947B32EB24B5B0B* L_30 = V_2;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_31 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_31, 1));
		goto IL_0066;
	}

IL_0110:
	{
		RuntimeObject* L_32 = V_4;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_33 = ___0_key;
		NullCheck(L_32);
		int32_t L_34;
		L_34 = InterfaceFuncInvoker1< int32_t, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_32, L_33);
		V_8 = ((int32_t)(L_34&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_1;
		int32_t L_36 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = V_1;
		NullCheck(L_37);
		NullCheck(L_35);
		int32_t L_38 = ((int32_t)(L_36%((int32_t)(((RuntimeArray*)L_37)->max_length))));
		int32_t L_39 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_39, 1));
	}

IL_012b:
	{
		int32_t L_40 = V_0;
		EntryU5BU5D_t25E6E3385E909292D9EDC1103947B32EB24B5B0B* L_41 = V_2;
		NullCheck(L_41);
		if ((!(((uint32_t)L_40) < ((uint32_t)((int32_t)(((RuntimeArray*)L_41)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t25E6E3385E909292D9EDC1103947B32EB24B5B0B* L_42 = V_2;
		int32_t L_43 = V_0;
		NullCheck(L_42);
		int32_t L_44 = ((L_42)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_43)))->___hashCode;
		int32_t L_45 = V_8;
		if ((!(((uint32_t)L_44) == ((uint32_t)L_45))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_46 = V_4;
		EntryU5BU5D_t25E6E3385E909292D9EDC1103947B32EB24B5B0B* L_47 = V_2;
		int32_t L_48 = V_0;
		NullCheck(L_47);
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_49 = ((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___key;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_50 = ___0_key;
		NullCheck(L_46);
		bool L_51;
		L_51 = InterfaceFuncInvoker2< bool, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_46, L_49, L_50);
		if (L_51)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t25E6E3385E909292D9EDC1103947B32EB24B5B0B* L_52 = V_2;
		int32_t L_53 = V_0;
		NullCheck(L_52);
		int32_t L_54 = ((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___next;
		V_0 = L_54;
		int32_t L_55 = V_3;
		EntryU5BU5D_t25E6E3385E909292D9EDC1103947B32EB24B5B0B* L_56 = V_2;
		NullCheck(L_56);
		if ((((int32_t)L_55) < ((int32_t)((int32_t)(((RuntimeArray*)L_56)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_57 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_57, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_58 = V_0;
		return L_58;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m5285134AD51C479B44FCD327D6BC30B4C697168F_gshared (Dictionary_2_tB13D0A847475988F23522A8642F7D24BA304F9B7* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t25E6E3385E909292D9EDC1103947B32EB24B5B0B* L_5 = (EntryU5BU5D_t25E6E3385E909292D9EDC1103947B32EB24B5B0B*)(EntryU5BU5D_t25E6E3385E909292D9EDC1103947B32EB24B5B0B*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 40), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m5B684CF3D9C1AD1A62240289DFF23940617D968D_gshared (Dictionary_2_tB13D0A847475988F23522A8642F7D24BA304F9B7* __this, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___0_key, RuntimeObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_t25E6E3385E909292D9EDC1103947B32EB24B5B0B* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_tC6BA3FCE24005B80AD289EB230B5E04466EEDC86* V_10 = NULL;
	ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 V_11;
	memset((&V_11), 0, sizeof(V_11));
	EqualityComparer_1_tD07CBC58F821582B79CB59B10264DC683DE3EE5C* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m5285134AD51C479B44FCD327D6BC30B4C697168F(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_002c:
	{
		EntryU5BU5D_t25E6E3385E909292D9EDC1103947B32EB24B5B0B* L_4 = __this->____entries;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_8 = ___0_key;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		Il2CppFakeBox<ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814> L_10(il2cpp_rgctx_data(method->klass->rgctx_data, 11), (&___0_key));
		int32_t L_11;
		L_11 = ValueType_GetHashCode_m3B47C72EA1FA846D9B0DFF3C444AB2BFA22CF3CE((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_10), NULL);
		G_B7_0 = L_11;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets;
		int32_t L_13 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = __this->____buckets;
		NullCheck(L_14);
		NullCheck(L_12);
		V_4 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_13%((int32_t)(((RuntimeArray*)L_14)->max_length)))))));
		int32_t* L_15 = V_4;
		int32_t L_16 = *((int32_t*)L_15);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
		RuntimeObject* L_17 = V_1;
		if (L_17)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814));
	}

IL_0091:
	{
		int32_t L_19 = V_5;
		EntryU5BU5D_t25E6E3385E909292D9EDC1103947B32EB24B5B0B* L_20 = V_0;
		NullCheck(L_20);
		if ((!(((uint32_t)L_19) < ((uint32_t)((int32_t)(((RuntimeArray*)L_20)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t25E6E3385E909292D9EDC1103947B32EB24B5B0B* L_21 = V_0;
		int32_t L_22 = V_5;
		NullCheck(L_21);
		int32_t L_23 = ((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_22)))->___hashCode;
		int32_t L_24 = V_2;
		if ((!(((uint32_t)L_23) == ((uint32_t)L_24))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_tD07CBC58F821582B79CB59B10264DC683DE3EE5C* L_25;
		L_25 = EqualityComparer_1_get_Default_mA1371F43F9121608E1B210C692D2B369D8A50A37_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t25E6E3385E909292D9EDC1103947B32EB24B5B0B* L_26 = V_0;
		int32_t L_27 = V_5;
		NullCheck(L_26);
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_28 = ((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27)))->___key;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_29 = ___0_key;
		NullCheck(L_25);
		bool L_30;
		L_30 = VirtualFuncInvoker2< bool, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 >::Invoke(8, L_25, L_28, L_29);
		if (!L_30)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_31 = ___2_behavior;
		if ((!(((uint32_t)L_31) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t25E6E3385E909292D9EDC1103947B32EB24B5B0B* L_32 = V_0;
		int32_t L_33 = V_5;
		NullCheck(L_32);
		RuntimeObject* L_34 = ___1_value;
		((L_32)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_33)))->___value = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&((L_32)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_33)))->___value), (void*)L_34);
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_35 = ___2_behavior;
		if ((!(((uint32_t)L_35) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_36 = ___0_key;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_37 = L_36;
		RuntimeObject* L_38 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_37);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_38, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t25E6E3385E909292D9EDC1103947B32EB24B5B0B* L_39 = V_0;
		int32_t L_40 = V_5;
		NullCheck(L_39);
		int32_t L_41 = ((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40)))->___next;
		V_5 = L_41;
		int32_t L_42 = V_3;
		EntryU5BU5D_t25E6E3385E909292D9EDC1103947B32EB24B5B0B* L_43 = V_0;
		NullCheck(L_43);
		if ((((int32_t)L_42) < ((int32_t)((int32_t)(((RuntimeArray*)L_43)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_44 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_44, 1));
		goto IL_0091;
	}

IL_0187:
	{
		int32_t L_45 = V_5;
		EntryU5BU5D_t25E6E3385E909292D9EDC1103947B32EB24B5B0B* L_46 = V_0;
		NullCheck(L_46);
		if ((!(((uint32_t)L_45) < ((uint32_t)((int32_t)(((RuntimeArray*)L_46)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t25E6E3385E909292D9EDC1103947B32EB24B5B0B* L_47 = V_0;
		int32_t L_48 = V_5;
		NullCheck(L_47);
		int32_t L_49 = ((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___hashCode;
		int32_t L_50 = V_2;
		if ((!(((uint32_t)L_49) == ((uint32_t)L_50))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_51 = V_1;
		EntryU5BU5D_t25E6E3385E909292D9EDC1103947B32EB24B5B0B* L_52 = V_0;
		int32_t L_53 = V_5;
		NullCheck(L_52);
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_54 = ((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___key;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_55 = ___0_key;
		NullCheck(L_51);
		bool L_56;
		L_56 = InterfaceFuncInvoker2< bool, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_51, L_54, L_55);
		if (!L_56)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_57 = ___2_behavior;
		if ((!(((uint32_t)L_57) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t25E6E3385E909292D9EDC1103947B32EB24B5B0B* L_58 = V_0;
		int32_t L_59 = V_5;
		NullCheck(L_58);
		RuntimeObject* L_60 = ___1_value;
		((L_58)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_59)))->___value = L_60;
		Il2CppCodeGenWriteBarrier((void**)(&((L_58)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_59)))->___value), (void*)L_60);
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_61 = ___2_behavior;
		if ((!(((uint32_t)L_61) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_62 = ___0_key;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_63 = L_62;
		RuntimeObject* L_64 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_63);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_64, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t25E6E3385E909292D9EDC1103947B32EB24B5B0B* L_65 = V_0;
		int32_t L_66 = V_5;
		NullCheck(L_65);
		int32_t L_67 = ((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___next;
		V_5 = L_67;
		int32_t L_68 = V_3;
		EntryU5BU5D_t25E6E3385E909292D9EDC1103947B32EB24B5B0B* L_69 = V_0;
		NullCheck(L_69);
		if ((((int32_t)L_68) < ((int32_t)((int32_t)(((RuntimeArray*)L_69)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_70 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_70, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_71 = __this->____freeCount;
		if ((((int32_t)L_71) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_72 = __this->____freeList;
		V_8 = L_72;
		V_7 = (bool)1;
		int32_t L_73 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_73, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_74 = __this->____count;
		V_13 = L_74;
		int32_t L_75 = V_13;
		EntryU5BU5D_t25E6E3385E909292D9EDC1103947B32EB24B5B0B* L_76 = V_0;
		NullCheck(L_76);
		if ((!(((uint32_t)L_75) == ((uint32_t)((int32_t)(((RuntimeArray*)L_76)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_m91116B9124A217B4F424E7D288FD4327D8960AEB(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_77 = V_13;
		V_8 = L_77;
		int32_t L_78 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_78, 1));
		EntryU5BU5D_t25E6E3385E909292D9EDC1103947B32EB24B5B0B* L_79 = __this->____entries;
		V_0 = L_79;
	}

IL_0250:
	{
		bool L_80 = V_6;
		if (L_80)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_81 = V_4;
		G_B51_0 = L_81;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_82 = __this->____buckets;
		int32_t L_83 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_84 = __this->____buckets;
		NullCheck(L_84);
		NullCheck(L_82);
		G_B51_0 = ((L_82)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_83%((int32_t)(((RuntimeArray*)L_84)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t25E6E3385E909292D9EDC1103947B32EB24B5B0B* L_85 = V_0;
		int32_t L_86 = V_8;
		NullCheck(L_85);
		V_10 = ((L_85)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_86)));
		bool L_87 = V_7;
		if (!L_87)
		{
			goto IL_028a;
		}
	}
	{
		Entry_tC6BA3FCE24005B80AD289EB230B5E04466EEDC86* L_88 = V_10;
		int32_t L_89 = L_88->___next;
		__this->____freeList = L_89;
	}

IL_028a:
	{
		Entry_tC6BA3FCE24005B80AD289EB230B5E04466EEDC86* L_90 = V_10;
		int32_t L_91 = V_2;
		L_90->___hashCode = L_91;
		Entry_tC6BA3FCE24005B80AD289EB230B5E04466EEDC86* L_92 = V_10;
		int32_t* L_93 = V_9;
		int32_t L_94 = *((int32_t*)L_93);
		L_92->___next = ((int32_t)il2cpp_codegen_subtract(L_94, 1));
		Entry_tC6BA3FCE24005B80AD289EB230B5E04466EEDC86* L_95 = V_10;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_96 = ___0_key;
		L_95->___key = L_96;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_95->___key))->___element), (void*)NULL);
		Entry_tC6BA3FCE24005B80AD289EB230B5E04466EEDC86* L_97 = V_10;
		RuntimeObject* L_98 = ___1_value;
		L_97->___value = L_98;
		Il2CppCodeGenWriteBarrier((void**)(&L_97->___value), (void*)L_98);
		int32_t* L_99 = V_9;
		int32_t L_100 = V_8;
		*((int32_t*)L_99) = (int32_t)((int32_t)il2cpp_codegen_add(L_100, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_mE619FED51721DCD76B7F3477101EE1C26558F03D_gshared (Dictionary_2_tB13D0A847475988F23522A8642F7D24BA304F9B7* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t18981E8B4DA835E5A8BEC453FB6196F9A462D869* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 32)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_m5285134AD51C479B44FCD327D6BC30B4C697168F(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 35)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t18981E8B4DA835E5A8BEC453FB6196F9A462D869*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 26)));
		KeyValuePair_2U5BU5D_t18981E8B4DA835E5A8BEC453FB6196F9A462D869* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_t18981E8B4DA835E5A8BEC453FB6196F9A462D869* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_21;
		L_21 = KeyValuePair_2_get_Key_m204134D5294D0652A7BEC9251C7BDD29B507542A_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		goto IL_009a;
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t18981E8B4DA835E5A8BEC453FB6196F9A462D869* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_24;
		L_24 = KeyValuePair_2_get_Key_m204134D5294D0652A7BEC9251C7BDD29B507542A_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		KeyValuePair_2U5BU5D_t18981E8B4DA835E5A8BEC453FB6196F9A462D869* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		RuntimeObject* L_27;
		L_27 = KeyValuePair_2_get_Value_mC161A41DE956DE045D4BE7D7D3FAA6B97A774C4A_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		Dictionary_2_Add_m77C09F1138342291C84F2D1884BC97F0928D029D(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_t18981E8B4DA835E5A8BEC453FB6196F9A462D869* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m91116B9124A217B4F424E7D288FD4327D8960AEB_gshared (Dictionary_2_tB13D0A847475988F23522A8642F7D24BA304F9B7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_m8F06B3457A7CAD0E3D71C171C52BC704E8740A77(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m8F06B3457A7CAD0E3D71C171C52BC704E8740A77_gshared (Dictionary_2_tB13D0A847475988F23522A8642F7D24BA304F9B7* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t25E6E3385E909292D9EDC1103947B32EB24B5B0B* V_1 = NULL;
	int32_t V_2 = 0;
	ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_t25E6E3385E909292D9EDC1103947B32EB24B5B0B* L_3 = (EntryU5BU5D_t25E6E3385E909292D9EDC1103947B32EB24B5B0B*)(EntryU5BU5D_t25E6E3385E909292D9EDC1103947B32EB24B5B0B*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 40), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_t25E6E3385E909292D9EDC1103947B32EB24B5B0B* L_5 = __this->____entries;
		EntryU5BU5D_t25E6E3385E909292D9EDC1103947B32EB24B5B0B* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814));
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)((int32_t)false&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t25E6E3385E909292D9EDC1103947B32EB24B5B0B* L_10 = V_1;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t25E6E3385E909292D9EDC1103947B32EB24B5B0B* L_13 = V_1;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		EntryU5BU5D_t25E6E3385E909292D9EDC1103947B32EB24B5B0B* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814* L_17 = (ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814*)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key);
		Il2CppFakeBox<ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814> L_18(il2cpp_rgctx_data(method->klass->rgctx_data, 11), L_17);
		int32_t L_19;
		L_19 = ValueType_GetHashCode_m3B47C72EA1FA846D9B0DFF3C444AB2BFA22CF3CE((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_18), NULL);
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode = ((int32_t)(L_19&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_20 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_007f:
	{
		int32_t L_21 = V_4;
		int32_t L_22 = V_2;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t25E6E3385E909292D9EDC1103947B32EB24B5B0B* L_23 = V_1;
		int32_t L_24 = V_5;
		NullCheck(L_23);
		int32_t L_25 = ((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24)))->___hashCode;
		if ((((int32_t)L_25) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t25E6E3385E909292D9EDC1103947B32EB24B5B0B* L_26 = V_1;
		int32_t L_27 = V_5;
		NullCheck(L_26);
		int32_t L_28 = ((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27)))->___hashCode;
		int32_t L_29 = ___0_newSize;
		V_6 = ((int32_t)(L_28%L_29));
		EntryU5BU5D_t25E6E3385E909292D9EDC1103947B32EB24B5B0B* L_30 = V_1;
		int32_t L_31 = V_5;
		NullCheck(L_30);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = V_0;
		int32_t L_33 = V_6;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		int32_t L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___next = ((int32_t)il2cpp_codegen_subtract(L_35, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_0;
		int32_t L_37 = V_6;
		int32_t L_38 = V_5;
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(L_37), (int32_t)((int32_t)il2cpp_codegen_add(L_38, 1)));
	}

IL_00c5:
	{
		int32_t L_39 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_00cb:
	{
		int32_t L_40 = V_5;
		int32_t L_41 = V_2;
		if ((((int32_t)L_40) < ((int32_t)L_41)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_42 = V_0;
		__this->____buckets = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_42);
		EntryU5BU5D_t25E6E3385E909292D9EDC1103947B32EB24B5B0B* L_43 = V_1;
		__this->____entries = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_43);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mB168E67A05948E94B0C8CB8AF10FDFF837CF4013_gshared (Dictionary_2_tB13D0A847475988F23522A8642F7D24BA304F9B7* __this, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tC6BA3FCE24005B80AD289EB230B5E04466EEDC86* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		Il2CppFakeBox<ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814> L_4(il2cpp_rgctx_data(method->klass->rgctx_data, 11), (&___0_key));
		int32_t L_5;
		L_5 = ValueType_GetHashCode_m3B47C72EA1FA846D9B0DFF3C444AB2BFA22CF3CE((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_4), NULL);
		G_B6_0 = L_5;
		goto IL_0038;
	}

IL_0032:
	{
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_6 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker1< int32_t, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_6);
		G_B6_0 = L_7;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_8 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		NullCheck(L_9);
		V_1 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		int32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t25E6E3385E909292D9EDC1103947B32EB24B5B0B* L_14 = __this->____entries;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		V_4 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)));
		Entry_tC6BA3FCE24005B80AD289EB230B5E04466EEDC86* L_16 = V_4;
		int32_t L_17 = L_16->___hashCode;
		int32_t L_18 = V_0;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_19 = __this->____comparer;
		RuntimeObject* L_20 = L_19;
		if (L_20)
		{
			G_B10_0 = L_20;
			goto IL_0095;
		}
		G_B9_0 = L_20;
	}
	{
		EqualityComparer_1_tD07CBC58F821582B79CB59B10264DC683DE3EE5C* L_21;
		L_21 = EqualityComparer_1_get_Default_mA1371F43F9121608E1B210C692D2B369D8A50A37_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_tC6BA3FCE24005B80AD289EB230B5E04466EEDC86* L_22 = V_4;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_23 = L_22->___key;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_24 = ___0_key;
		NullCheck(L_21);
		bool L_25;
		L_25 = VirtualFuncInvoker2< bool, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 >::Invoke(8, L_21, L_23, L_24);
		G_B11_0 = L_25;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_tC6BA3FCE24005B80AD289EB230B5E04466EEDC86* L_26 = V_4;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_27 = L_26->___key;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_28 = ___0_key;
		NullCheck(G_B10_0);
		bool L_29;
		L_29 = InterfaceFuncInvoker2< bool, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_27, L_28);
		G_B11_0 = L_29;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_30 = V_2;
		if ((((int32_t)L_30) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = __this->____buckets;
		int32_t L_32 = V_1;
		Entry_tC6BA3FCE24005B80AD289EB230B5E04466EEDC86* L_33 = V_4;
		int32_t L_34 = L_33->___next;
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (int32_t)((int32_t)il2cpp_codegen_add(L_34, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t25E6E3385E909292D9EDC1103947B32EB24B5B0B* L_35 = __this->____entries;
		int32_t L_36 = V_2;
		NullCheck(L_35);
		Entry_tC6BA3FCE24005B80AD289EB230B5E04466EEDC86* L_37 = V_4;
		int32_t L_38 = L_37->___next;
		((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_36)))->___next = L_38;
	}

IL_00d6:
	{
		Entry_tC6BA3FCE24005B80AD289EB230B5E04466EEDC86* L_39 = V_4;
		L_39->___hashCode = (-1);
		Entry_tC6BA3FCE24005B80AD289EB230B5E04466EEDC86* L_40 = V_4;
		int32_t L_41 = __this->____freeList;
		L_40->___next = L_41;
	}
	{
		Entry_tC6BA3FCE24005B80AD289EB230B5E04466EEDC86* L_42 = V_4;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814* L_43 = (ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814*)(&L_42->___key);
		il2cpp_codegen_initobj(L_43, sizeof(ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814));
	}

IL_00ff:
	{
	}
	{
		Entry_tC6BA3FCE24005B80AD289EB230B5E04466EEDC86* L_44 = V_4;
		RuntimeObject** L_45 = (RuntimeObject**)(&L_44->___value);
		il2cpp_codegen_initobj(L_45, sizeof(RuntimeObject*));
	}

IL_0113:
	{
		int32_t L_46 = V_3;
		__this->____freeList = L_46;
		int32_t L_47 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_47, 1));
		int32_t L_48 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_48, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_49 = V_3;
		V_2 = L_49;
		Entry_tC6BA3FCE24005B80AD289EB230B5E04466EEDC86* L_50 = V_4;
		int32_t L_51 = L_50->___next;
		V_3 = L_51;
	}

IL_0142:
	{
		int32_t L_52 = V_3;
		if ((((int32_t)L_52) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m30753D34B7638E8B6D93663D7F9AD717CAF26CF9_gshared (Dictionary_2_tB13D0A847475988F23522A8642F7D24BA304F9B7* __this, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m29258E04D9D383D9736BDB10172A444E7DBAB192(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		RuntimeObject** L_3 = ___1_value;
		EntryU5BU5D_t25E6E3385E909292D9EDC1103947B32EB24B5B0B* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		*(RuntimeObject**)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)L_6);
		return (bool)1;
	}

IL_0025:
	{
		RuntimeObject** L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(RuntimeObject*));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_mA7695748E6B92BE43A283A57F7E7A86C160ACEC5_gshared (Dictionary_2_tB13D0A847475988F23522A8642F7D24BA304F9B7* __this, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m5B684CF3D9C1AD1A62240289DFF23940617D968D(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m63455694AAFC381FD6433DD80CCBA1AE3521AA82_gshared (Dictionary_2_tB13D0A847475988F23522A8642F7D24BA304F9B7* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_mB5A8394BD2F4DD3FF4C2F768EE2CED9AC41D7791_gshared (Dictionary_2_tB13D0A847475988F23522A8642F7D24BA304F9B7* __this, KeyValuePair_2U5BU5D_t18981E8B4DA835E5A8BEC453FB6196F9A462D869* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t18981E8B4DA835E5A8BEC453FB6196F9A462D869* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_mCE62830A4D7BD2F63E2FF27E28C3F5312BC0B99A(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_m339EE8D3072A039FBEFA391B4F32C8137F164E93_gshared (Dictionary_2_tB13D0A847475988F23522A8642F7D24BA304F9B7* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t18981E8B4DA835E5A8BEC453FB6196F9A462D869* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_t25E6E3385E909292D9EDC1103947B32EB24B5B0B* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_t25E6E3385E909292D9EDC1103947B32EB24B5B0B* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_m62991249DE42FC4B6D2418126CC96D6B756BB68D(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_t18981E8B4DA835E5A8BEC453FB6196F9A462D869*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 26)));
		KeyValuePair_2U5BU5D_t18981E8B4DA835E5A8BEC453FB6196F9A462D869* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t18981E8B4DA835E5A8BEC453FB6196F9A462D869* L_14 = V_0;
		int32_t L_15 = ___1_index;
		Dictionary_2_CopyTo_mCE62830A4D7BD2F63E2FF27E28C3F5312BC0B99A(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_t25E6E3385E909292D9EDC1103947B32EB24B5B0B* L_18 = __this->____entries;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_t25E6E3385E909292D9EDC1103947B32EB24B5B0B* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_t25E6E3385E909292D9EDC1103947B32EB24B5B0B* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_28);
		EntryU5BU5D_t25E6E3385E909292D9EDC1103947B32EB24B5B0B* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		RuntimeObject* L_32 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value;
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_33;
		memset((&L_33), 0, sizeof(L_33));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_33), L_29, L_32, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_33);
	}

IL_00b5:
	{
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b9:
	{
		int32_t L_35 = V_3;
		int32_t L_36 = __this->____count;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_37 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_37, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = V_4;
		if (L_38)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_39 = __this->____count;
			V_5 = L_39;
			EntryU5BU5D_t25E6E3385E909292D9EDC1103947B32EB24B5B0B* L_40 = __this->____entries;
			V_6 = L_40;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_t25E6E3385E909292D9EDC1103947B32EB24B5B0B* L_41 = V_6;
			int32_t L_42 = V_7;
			NullCheck(L_41);
			int32_t L_43 = ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
			if ((((int32_t)L_43) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = V_4;
			int32_t L_45 = ___1_index;
			int32_t L_46 = L_45;
			___1_index = ((int32_t)il2cpp_codegen_add(L_46, 1));
			EntryU5BU5D_t25E6E3385E909292D9EDC1103947B32EB24B5B0B* L_47 = V_6;
			int32_t L_48 = V_7;
			NullCheck(L_47);
			ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_49 = ((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___key;
			EntryU5BU5D_t25E6E3385E909292D9EDC1103947B32EB24B5B0B* L_50 = V_6;
			int32_t L_51 = V_7;
			NullCheck(L_50);
			RuntimeObject* L_52 = ((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___value;
			KeyValuePair_2_t5EA39A38B18A7FBA9D70D487DBE55714255FAAA6 L_53;
			memset((&L_53), 0, sizeof(L_53));
			KeyValuePair_2__ctor_mD81341F5971E9F53B692B9978CD1792E20832852((&L_53), L_49, L_52, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
			KeyValuePair_2_t5EA39A38B18A7FBA9D70D487DBE55714255FAAA6 L_54 = L_53;
			RuntimeObject* L_55 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 17), &L_54);
			NullCheck(L_44);
			ArrayElementTypeCheck (L_44, L_55);
			(L_44)->SetAt(static_cast<il2cpp_array_size_t>(L_46), (RuntimeObject*)L_55);
		}

IL_012a_1:
		{
			int32_t L_56 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		}

IL_0130_1:
		{
			int32_t L_57 = V_7;
			int32_t L_58 = V_5;
			if ((((int32_t)L_57) < ((int32_t)L_58)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m60E6E0B50564F049F7F828D150A28984246F7DE9_gshared (Dictionary_2_tB13D0A847475988F23522A8642F7D24BA304F9B7* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t802BFC19A53773B2AE8F0F44521FB90B06501577 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mDFD86A525353C911DD4C6574B1CF11812E7C73B1((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		Enumerator_t802BFC19A53773B2AE8F0F44521FB90B06501577 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 29), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_EnsureCapacity_m8CF71A80FB02DE45AC963F68E883DC5FF88A4905_gshared (Dictionary_2_tB13D0A847475988F23522A8642F7D24BA304F9B7* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_000b:
	{
		EntryU5BU5D_t25E6E3385E909292D9EDC1103947B32EB24B5B0B* L_1 = __this->____entries;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		EntryU5BU5D_t25E6E3385E909292D9EDC1103947B32EB24B5B0B* L_2 = __this->____entries;
		NullCheck(L_2);
		G_B5_0 = ((int32_t)(((RuntimeArray*)L_2)->max_length));
		goto IL_001e;
	}

IL_001d:
	{
		G_B5_0 = 0;
	}

IL_001e:
	{
		V_0 = G_B5_0;
		int32_t L_3 = V_0;
		int32_t L_4 = ___0_capacity;
		if ((((int32_t)L_3) < ((int32_t)L_4)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_5 = V_0;
		return L_5;
	}

IL_0025:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->____buckets;
		if (L_6)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_7 = ___0_capacity;
		int32_t L_8;
		L_8 = Dictionary_2_Initialize_m5285134AD51C479B44FCD327D6BC30B4C697168F(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return L_8;
	}

IL_0035:
	{
		int32_t L_9 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_10;
		L_10 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_9, NULL);
		V_1 = L_10;
		int32_t L_11 = V_1;
		Dictionary_2_Resize_m8F06B3457A7CAD0E3D71C171C52BC704E8740A77(__this, L_11, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		int32_t L_12 = V_1;
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m5193A014A96539CA66768FAD3A342825292E456D_gshared (Dictionary_2_tB13D0A847475988F23522A8642F7D24BA304F9B7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m5B683A7CFFE101D7B9AA3C3E19B95F5094F690BF_gshared (Dictionary_2_tB13D0A847475988F23522A8642F7D24BA304F9B7* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_mF41F8A34CA256FD60A7E93695410FEEE6BD40507(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = Dictionary_2_FindEntry_m29258E04D9D383D9736BDB10172A444E7DBAB192(__this, ((*(ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814*)((ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814*)(ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11))))), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_t25E6E3385E909292D9EDC1103947B32EB24B5B0B* L_5 = __this->____entries;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		RuntimeObject* L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		return L_7;
	}

IL_0030:
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m1FF4AFE1FA7412EA85DC6DD59358836DED99AC79_gshared (Dictionary_2_tB13D0A847475988F23522A8642F7D24BA304F9B7* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 49));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814*)((ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814*)(ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11)))));
		}
		try
		{
			ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_set_Item_m444B00B363568ADD78EBA9E89C76E1FB278B4FFE(__this, L_3, ((RuntimeObject*)Castclass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15))), il2cpp_rgctx_method(method->klass->rgctx_data, 50));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			RuntimeObject* L_5 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 51)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_7;
			L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_5, L_7, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		RuntimeObject* L_8 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 52)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_8, L_10, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mF41F8A34CA256FD60A7E93695410FEEE6BD40507_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_m55979C555A00D6573CB1B3594513C90370815B24_gshared (Dictionary_2_tB13D0A847475988F23522A8642F7D24BA304F9B7* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_mF41F8A34CA256FD60A7E93695410FEEE6BD40507(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m90F1C333816C1CD050D6E5E14CA9440EB0B4696D(__this, ((*(ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814*)((ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814*)(ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11))))), il2cpp_rgctx_method(method->klass->rgctx_data, 53));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_m983D601A66C53E6840A2CDF65C4D4E3F17FEAE1E_gshared (Dictionary_2_tB13D0A847475988F23522A8642F7D24BA304F9B7* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t802BFC19A53773B2AE8F0F44521FB90B06501577 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mDFD86A525353C911DD4C6574B1CF11812E7C73B1((&L_0), __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		Enumerator_t802BFC19A53773B2AE8F0F44521FB90B06501577 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 29), &L_1);
		return (RuntimeObject*)L_2;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mF897071ABD16AA6A1DD95F30EE62CFF708F67948_gshared (Dictionary_2_t3E3BA8CACCC3C085000EC19576E2BA73F8CFC78E* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_m4FDDF922AD23F6334537188F4859DCE5A160B2EE(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mD115B99952B0A4D34F65AA4E5FC0A13DEAA773D8_gshared (Dictionary_2_t3E3BA8CACCC3C085000EC19576E2BA73F8CFC78E* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_m4FDDF922AD23F6334537188F4859DCE5A160B2EE(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7F2BF25727959FCD00076D57F754E88DF0FF58A2_gshared (Dictionary_2_t3E3BA8CACCC3C085000EC19576E2BA73F8CFC78E* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_m4FDDF922AD23F6334537188F4859DCE5A160B2EE(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m4FDDF922AD23F6334537188F4859DCE5A160B2EE_gshared (Dictionary_2_t3E3BA8CACCC3C085000EC19576E2BA73F8CFC78E* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m986E984D6AA404BAD85BD3C9932842181968D3F7(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_t5849F328832B91CA688EA057CFD71225D81B0F72* L_5;
		L_5 = EqualityComparer_1_get_Default_m74879556CBF575D38F11DBF18327D9D848353BD3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t5849F328832B91CA688EA057CFD71225D81B0F72*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m56C8F417671D6A8911BD88A6B6475620B891425A_gshared (Dictionary_2_t3E3BA8CACCC3C085000EC19576E2BA73F8CFC78E* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m17C786AA41BA723BD4B79D2C514A10CADA7C7087_gshared (Dictionary_2_t3E3BA8CACCC3C085000EC19576E2BA73F8CFC78E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		int32_t L_1 = __this->____freeCount;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tF4502228DC2899311EA0532D7A002E5AB417BCD4* Dictionary_2_get_Keys_mE602AA72420AC08102EB835F1AB1130B06ADEEA1_gshared (Dictionary_2_t3E3BA8CACCC3C085000EC19576E2BA73F8CFC78E* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tF4502228DC2899311EA0532D7A002E5AB417BCD4* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tF4502228DC2899311EA0532D7A002E5AB417BCD4* L_1 = (KeyCollection_tF4502228DC2899311EA0532D7A002E5AB417BCD4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 7));
		KeyCollection__ctor_mD675E05CD9576AB05C09E1699B03FD3C001DD344(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tF4502228DC2899311EA0532D7A002E5AB417BCD4* L_2 = __this->____keys;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t5B8AB9BA0BFC036C0FEFE33B4C8681FB06730C8E* Dictionary_2_get_Values_m606D22890D786E195DAE835FE260468DF1049E51_gshared (Dictionary_2_t3E3BA8CACCC3C085000EC19576E2BA73F8CFC78E* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t5B8AB9BA0BFC036C0FEFE33B4C8681FB06730C8E* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t5B8AB9BA0BFC036C0FEFE33B4C8681FB06730C8E* L_1 = (ValueCollection_t5B8AB9BA0BFC036C0FEFE33B4C8681FB06730C8E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		ValueCollection__ctor_mD96C2708EA68241613646B0D373EEDFE0057EF7B(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t5B8AB9BA0BFC036C0FEFE33B4C8681FB06730C8E* L_2 = __this->____values;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_mCBA1D6280577AA8695B70A5921BE883C9EBD5392_gshared (Dictionary_2_t3E3BA8CACCC3C085000EC19576E2BA73F8CFC78E* __this, SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574 ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574 L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m72AFEEA7170985EA6BB4D32F877862DCB57F10C4(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t07D6F8693F4D0B3C951D3AC26EBB0DDAD42EACCB* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		return L_5;
	}

IL_001e:
	{
		SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574 L_6 = ___0_key;
		SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574 L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject*));
		RuntimeObject* L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mA5CDA4864C431CF2EA8528467544E9D8DF449F82_gshared (Dictionary_2_t3E3BA8CACCC3C085000EC19576E2BA73F8CFC78E* __this, SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574 ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574 L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m5E93552E2B36C4BB1A0810A7CAD3AF667C49C0B0(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mBD7BFFF74C1DF70C8D47B62E3E603E9F2EEAC75D_gshared (Dictionary_2_t3E3BA8CACCC3C085000EC19576E2BA73F8CFC78E* __this, SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574 ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574 L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m5E93552E2B36C4BB1A0810A7CAD3AF667C49C0B0(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m775393AE42C3727DA8018B5B7E174AA500F7A58D_gshared (Dictionary_2_t3E3BA8CACCC3C085000EC19576E2BA73F8CFC78E* __this, KeyValuePair_2_t4D486866736280C7A079662D170F5444C27E50C6 ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574 L_0;
		L_0 = KeyValuePair_2_get_Key_m68ECE6EFA3B43F6CABC5DA63109B69C09B5D3C48_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		RuntimeObject* L_1;
		L_1 = KeyValuePair_2_get_Value_mBC7C1BACDBEBA44E8D7BFD8D579336DCC37D6BB5_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		Dictionary_2_Add_mBD7BFFF74C1DF70C8D47B62E3E603E9F2EEAC75D(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m5D322A6A695F1E2C2606F1858FD534E89FC092C6_gshared (Dictionary_2_t3E3BA8CACCC3C085000EC19576E2BA73F8CFC78E* __this, KeyValuePair_2_t4D486866736280C7A079662D170F5444C27E50C6 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574 L_0;
		L_0 = KeyValuePair_2_get_Key_m68ECE6EFA3B43F6CABC5DA63109B69C09B5D3C48_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m72AFEEA7170985EA6BB4D32F877862DCB57F10C4(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3;
		L_3 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		EntryU5BU5D_t07D6F8693F4D0B3C951D3AC26EBB0DDAD42EACCB* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		RuntimeObject* L_7;
		L_7 = KeyValuePair_2_get_Value_mBC7C1BACDBEBA44E8D7BFD8D579336DCC37D6BB5_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m72F552183893931E2FB926D465D6586575A6FA5B_gshared (Dictionary_2_t3E3BA8CACCC3C085000EC19576E2BA73F8CFC78E* __this, KeyValuePair_2_t4D486866736280C7A079662D170F5444C27E50C6 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574 L_0;
		L_0 = KeyValuePair_2_get_Key_m68ECE6EFA3B43F6CABC5DA63109B69C09B5D3C48_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m72AFEEA7170985EA6BB4D32F877862DCB57F10C4(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3;
		L_3 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		EntryU5BU5D_t07D6F8693F4D0B3C951D3AC26EBB0DDAD42EACCB* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		RuntimeObject* L_7;
		L_7 = KeyValuePair_2_get_Value_mBC7C1BACDBEBA44E8D7BFD8D579336DCC37D6BB5_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574 L_9;
		L_9 = KeyValuePair_2_get_Key_m68ECE6EFA3B43F6CABC5DA63109B69C09B5D3C48_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		bool L_10;
		L_10 = Dictionary_2_Remove_mDB0DF91174BECF8AAAF69C5F316F2E0CE8D34437(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m1BC9C0667A69465598A57BF875789BA1791FF170_gshared (Dictionary_2_t3E3BA8CACCC3C085000EC19576E2BA73F8CFC78E* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		NullCheck(L_3);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____freeCount = 0;
		EntryU5BU5D_t07D6F8693F4D0B3C951D3AC26EBB0DDAD42EACCB* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m0F325215C221CB0DD78B9BB89D5963BF1D1B6761_gshared (Dictionary_2_t3E3BA8CACCC3C085000EC19576E2BA73F8CFC78E* __this, SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574 ___0_key, const RuntimeMethod* method) 
{
	{
		SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574 L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m72AFEEA7170985EA6BB4D32F877862DCB57F10C4(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m2081D9E67C668367101EB646A67B6F08A4583EDA_gshared (Dictionary_2_t3E3BA8CACCC3C085000EC19576E2BA73F8CFC78E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_t07D6F8693F4D0B3C951D3AC26EBB0DDAD42EACCB* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	int32_t V_3 = 0;
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t07D6F8693F4D0B3C951D3AC26EBB0DDAD42EACCB* L_0 = __this->____entries;
		V_0 = L_0;
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_0049;
		}
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_t07D6F8693F4D0B3C951D3AC26EBB0DDAD42EACCB* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_t07D6F8693F4D0B3C951D3AC26EBB0DDAD42EACCB* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		RuntimeObject* L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		if (L_7)
		{
			goto IL_0037;
		}
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = __this->____count;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject*));
		RuntimeObject* L_11 = V_2;
		if (!L_11)
		{
			goto IL_0096;
		}
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t07D6F8693F4D0B3C951D3AC26EBB0DDAD42EACCB* L_12 = V_0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_15;
		L_15 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		EntryU5BU5D_t07D6F8693F4D0B3C951D3AC26EBB0DDAD42EACCB* L_16 = V_0;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		RuntimeObject* L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value;
		RuntimeObject* L_19 = ___0_value;
		NullCheck(L_15);
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008b:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = __this->____count;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_24;
		L_24 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_t07D6F8693F4D0B3C951D3AC26EBB0DDAD42EACCB* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_28 = V_4;
		EntryU5BU5D_t07D6F8693F4D0B3C951D3AC26EBB0DDAD42EACCB* L_29 = V_0;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		RuntimeObject* L_31 = ((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___value;
		RuntimeObject* L_32 = ___0_value;
		NullCheck(L_28);
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_28, L_31, L_32);
		if (!L_33)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d1:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = __this->____count;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m28371CA5037D6161F36580F515048D6BA1EF7D79_gshared (Dictionary_2_t3E3BA8CACCC3C085000EC19576E2BA73F8CFC78E* __this, KeyValuePair_2U5BU5D_t483C9A7E1529730398DA7E05E2540845C629FED3* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t07D6F8693F4D0B3C951D3AC26EBB0DDAD42EACCB* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t483C9A7E1529730398DA7E05E2540845C629FED3* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_t483C9A7E1529730398DA7E05E2540845C629FED3* L_2 = ___0_array;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t483C9A7E1529730398DA7E05E2540845C629FED3* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = Dictionary_2_get_Count_m17C786AA41BA723BD4B79D2C514A10CADA7C7087(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = __this->____count;
		V_0 = L_6;
		EntryU5BU5D_t07D6F8693F4D0B3C951D3AC26EBB0DDAD42EACCB* L_7 = __this->____entries;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t07D6F8693F4D0B3C951D3AC26EBB0DDAD42EACCB* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t483C9A7E1529730398DA7E05E2540845C629FED3* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_t07D6F8693F4D0B3C951D3AC26EBB0DDAD42EACCB* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574 L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key;
		EntryU5BU5D_t07D6F8693F4D0B3C951D3AC26EBB0DDAD42EACCB* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		RuntimeObject* L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value;
		KeyValuePair_2_t4D486866736280C7A079662D170F5444C27E50C6 L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_m155BEE8D2B58C2C7B35E66C6DE12740FE1434548((&L_20), L_16, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_t4D486866736280C7A079662D170F5444C27E50C6)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t45CAC33CD0C08E57C834C0DE235FD5DB1E6F858A Dictionary_2_GetEnumerator_m7C788C3141FCF538A9D71E65E6B4F032D93BE055_gshared (Dictionary_2_t3E3BA8CACCC3C085000EC19576E2BA73F8CFC78E* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t45CAC33CD0C08E57C834C0DE235FD5DB1E6F858A L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m9F056B1689A35FBDA1A91E631D84E419FDF7C2CF((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m8554CF03CF047391C5EA6A32DD936AB13D8C4E45_gshared (Dictionary_2_t3E3BA8CACCC3C085000EC19576E2BA73F8CFC78E* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t45CAC33CD0C08E57C834C0DE235FD5DB1E6F858A L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m9F056B1689A35FBDA1A91E631D84E419FDF7C2CF((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		Enumerator_t45CAC33CD0C08E57C834C0DE235FD5DB1E6F858A L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 29), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_mB082B00D8877F17E07D883D06EA22FAA33D2D190_gshared (Dictionary_2_t3E3BA8CACCC3C085000EC19576E2BA73F8CFC78E* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t483C9A7E1529730398DA7E05E2540845C629FED3* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_t5849F328832B91CA688EA057CFD71225D81B0F72* L_6;
		L_6 = EqualityComparer_1_get_Default_m74879556CBF575D38F11DBF18327D9D848353BD3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 32)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		NullCheck(L_11);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = Dictionary_2_get_Count_m17C786AA41BA723BD4B79D2C514A10CADA7C7087(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		KeyValuePair_2U5BU5D_t483C9A7E1529730398DA7E05E2540845C629FED3* L_14 = (KeyValuePair_2U5BU5D_t483C9A7E1529730398DA7E05E2540845C629FED3*)(KeyValuePair_2U5BU5D_t483C9A7E1529730398DA7E05E2540845C629FED3*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 33), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_t483C9A7E1529730398DA7E05E2540845C629FED3* L_15 = V_0;
		Dictionary_2_CopyTo_m28371CA5037D6161F36580F515048D6BA1EF7D79(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_t483C9A7E1529730398DA7E05E2540845C629FED3* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 35)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m72AFEEA7170985EA6BB4D32F877862DCB57F10C4_gshared (Dictionary_2_t3E3BA8CACCC3C085000EC19576E2BA73F8CFC78E* __this, SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574 ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t07D6F8693F4D0B3C951D3AC26EBB0DDAD42EACCB* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574 V_6;
	memset((&V_6), 0, sizeof(V_6));
	EqualityComparer_1_t5849F328832B91CA688EA057CFD71225D81B0F72* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_1 = L_1;
		EntryU5BU5D_t07D6F8693F4D0B3C951D3AC26EBB0DDAD42EACCB* L_2 = __this->____entries;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		Il2CppFakeBox<SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574> L_6(il2cpp_rgctx_data(method->klass->rgctx_data, 11), (&___0_key));
		int32_t L_7;
		L_7 = ValueType_GetHashCode_m3B47C72EA1FA846D9B0DFF3C444AB2BFA22CF3CE((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_6), NULL);
		V_5 = ((int32_t)(L_7&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = V_1;
		int32_t L_9 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = V_1;
		NullCheck(L_10);
		NullCheck(L_8);
		int32_t L_11 = ((int32_t)(L_9%((int32_t)(((RuntimeArray*)L_10)->max_length))));
		int32_t L_12 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574));
	}

IL_0066:
	{
		int32_t L_14 = V_0;
		EntryU5BU5D_t07D6F8693F4D0B3C951D3AC26EBB0DDAD42EACCB* L_15 = V_2;
		NullCheck(L_15);
		if ((!(((uint32_t)L_14) < ((uint32_t)((int32_t)(((RuntimeArray*)L_15)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t07D6F8693F4D0B3C951D3AC26EBB0DDAD42EACCB* L_16 = V_2;
		int32_t L_17 = V_0;
		NullCheck(L_16);
		int32_t L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___hashCode;
		int32_t L_19 = V_5;
		if ((!(((uint32_t)L_18) == ((uint32_t)L_19))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t5849F328832B91CA688EA057CFD71225D81B0F72* L_20;
		L_20 = EqualityComparer_1_get_Default_m74879556CBF575D38F11DBF18327D9D848353BD3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t07D6F8693F4D0B3C951D3AC26EBB0DDAD42EACCB* L_21 = V_2;
		int32_t L_22 = V_0;
		NullCheck(L_21);
		SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574 L_23 = ((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_22)))->___key;
		SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574 L_24 = ___0_key;
		NullCheck(L_20);
		bool L_25;
		L_25 = VirtualFuncInvoker2< bool, SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574, SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574 >::Invoke(8, L_20, L_23, L_24);
		if (L_25)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t07D6F8693F4D0B3C951D3AC26EBB0DDAD42EACCB* L_26 = V_2;
		int32_t L_27 = V_0;
		NullCheck(L_26);
		int32_t L_28 = ((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27)))->___next;
		V_0 = L_28;
		int32_t L_29 = V_3;
		EntryU5BU5D_t07D6F8693F4D0B3C951D3AC26EBB0DDAD42EACCB* L_30 = V_2;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_31 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_31, 1));
		goto IL_0066;
	}

IL_0110:
	{
		RuntimeObject* L_32 = V_4;
		SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574 L_33 = ___0_key;
		NullCheck(L_32);
		int32_t L_34;
		L_34 = InterfaceFuncInvoker1< int32_t, SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_32, L_33);
		V_8 = ((int32_t)(L_34&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_1;
		int32_t L_36 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = V_1;
		NullCheck(L_37);
		NullCheck(L_35);
		int32_t L_38 = ((int32_t)(L_36%((int32_t)(((RuntimeArray*)L_37)->max_length))));
		int32_t L_39 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_39, 1));
	}

IL_012b:
	{
		int32_t L_40 = V_0;
		EntryU5BU5D_t07D6F8693F4D0B3C951D3AC26EBB0DDAD42EACCB* L_41 = V_2;
		NullCheck(L_41);
		if ((!(((uint32_t)L_40) < ((uint32_t)((int32_t)(((RuntimeArray*)L_41)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t07D6F8693F4D0B3C951D3AC26EBB0DDAD42EACCB* L_42 = V_2;
		int32_t L_43 = V_0;
		NullCheck(L_42);
		int32_t L_44 = ((L_42)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_43)))->___hashCode;
		int32_t L_45 = V_8;
		if ((!(((uint32_t)L_44) == ((uint32_t)L_45))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_46 = V_4;
		EntryU5BU5D_t07D6F8693F4D0B3C951D3AC26EBB0DDAD42EACCB* L_47 = V_2;
		int32_t L_48 = V_0;
		NullCheck(L_47);
		SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574 L_49 = ((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___key;
		SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574 L_50 = ___0_key;
		NullCheck(L_46);
		bool L_51;
		L_51 = InterfaceFuncInvoker2< bool, SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574, SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_46, L_49, L_50);
		if (L_51)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t07D6F8693F4D0B3C951D3AC26EBB0DDAD42EACCB* L_52 = V_2;
		int32_t L_53 = V_0;
		NullCheck(L_52);
		int32_t L_54 = ((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___next;
		V_0 = L_54;
		int32_t L_55 = V_3;
		EntryU5BU5D_t07D6F8693F4D0B3C951D3AC26EBB0DDAD42EACCB* L_56 = V_2;
		NullCheck(L_56);
		if ((((int32_t)L_55) < ((int32_t)((int32_t)(((RuntimeArray*)L_56)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_57 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_57, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_58 = V_0;
		return L_58;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m986E984D6AA404BAD85BD3C9932842181968D3F7_gshared (Dictionary_2_t3E3BA8CACCC3C085000EC19576E2BA73F8CFC78E* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t07D6F8693F4D0B3C951D3AC26EBB0DDAD42EACCB* L_5 = (EntryU5BU5D_t07D6F8693F4D0B3C951D3AC26EBB0DDAD42EACCB*)(EntryU5BU5D_t07D6F8693F4D0B3C951D3AC26EBB0DDAD42EACCB*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 40), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m5E93552E2B36C4BB1A0810A7CAD3AF667C49C0B0_gshared (Dictionary_2_t3E3BA8CACCC3C085000EC19576E2BA73F8CFC78E* __this, SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574 ___0_key, RuntimeObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_t07D6F8693F4D0B3C951D3AC26EBB0DDAD42EACCB* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t9DD41777766A237ECDB0E269740F073135AB4A64* V_10 = NULL;
	SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574 V_11;
	memset((&V_11), 0, sizeof(V_11));
	EqualityComparer_1_t5849F328832B91CA688EA057CFD71225D81B0F72* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m986E984D6AA404BAD85BD3C9932842181968D3F7(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_002c:
	{
		EntryU5BU5D_t07D6F8693F4D0B3C951D3AC26EBB0DDAD42EACCB* L_4 = __this->____entries;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574 L_8 = ___0_key;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		Il2CppFakeBox<SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574> L_10(il2cpp_rgctx_data(method->klass->rgctx_data, 11), (&___0_key));
		int32_t L_11;
		L_11 = ValueType_GetHashCode_m3B47C72EA1FA846D9B0DFF3C444AB2BFA22CF3CE((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_10), NULL);
		G_B7_0 = L_11;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets;
		int32_t L_13 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = __this->____buckets;
		NullCheck(L_14);
		NullCheck(L_12);
		V_4 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_13%((int32_t)(((RuntimeArray*)L_14)->max_length)))))));
		int32_t* L_15 = V_4;
		int32_t L_16 = *((int32_t*)L_15);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
		RuntimeObject* L_17 = V_1;
		if (L_17)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574));
	}

IL_0091:
	{
		int32_t L_19 = V_5;
		EntryU5BU5D_t07D6F8693F4D0B3C951D3AC26EBB0DDAD42EACCB* L_20 = V_0;
		NullCheck(L_20);
		if ((!(((uint32_t)L_19) < ((uint32_t)((int32_t)(((RuntimeArray*)L_20)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t07D6F8693F4D0B3C951D3AC26EBB0DDAD42EACCB* L_21 = V_0;
		int32_t L_22 = V_5;
		NullCheck(L_21);
		int32_t L_23 = ((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_22)))->___hashCode;
		int32_t L_24 = V_2;
		if ((!(((uint32_t)L_23) == ((uint32_t)L_24))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t5849F328832B91CA688EA057CFD71225D81B0F72* L_25;
		L_25 = EqualityComparer_1_get_Default_m74879556CBF575D38F11DBF18327D9D848353BD3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t07D6F8693F4D0B3C951D3AC26EBB0DDAD42EACCB* L_26 = V_0;
		int32_t L_27 = V_5;
		NullCheck(L_26);
		SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574 L_28 = ((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27)))->___key;
		SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574 L_29 = ___0_key;
		NullCheck(L_25);
		bool L_30;
		L_30 = VirtualFuncInvoker2< bool, SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574, SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574 >::Invoke(8, L_25, L_28, L_29);
		if (!L_30)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_31 = ___2_behavior;
		if ((!(((uint32_t)L_31) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t07D6F8693F4D0B3C951D3AC26EBB0DDAD42EACCB* L_32 = V_0;
		int32_t L_33 = V_5;
		NullCheck(L_32);
		RuntimeObject* L_34 = ___1_value;
		((L_32)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_33)))->___value = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&((L_32)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_33)))->___value), (void*)L_34);
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_35 = ___2_behavior;
		if ((!(((uint32_t)L_35) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574 L_36 = ___0_key;
		SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574 L_37 = L_36;
		RuntimeObject* L_38 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_37);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_38, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t07D6F8693F4D0B3C951D3AC26EBB0DDAD42EACCB* L_39 = V_0;
		int32_t L_40 = V_5;
		NullCheck(L_39);
		int32_t L_41 = ((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40)))->___next;
		V_5 = L_41;
		int32_t L_42 = V_3;
		EntryU5BU5D_t07D6F8693F4D0B3C951D3AC26EBB0DDAD42EACCB* L_43 = V_0;
		NullCheck(L_43);
		if ((((int32_t)L_42) < ((int32_t)((int32_t)(((RuntimeArray*)L_43)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_44 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_44, 1));
		goto IL_0091;
	}

IL_0187:
	{
		int32_t L_45 = V_5;
		EntryU5BU5D_t07D6F8693F4D0B3C951D3AC26EBB0DDAD42EACCB* L_46 = V_0;
		NullCheck(L_46);
		if ((!(((uint32_t)L_45) < ((uint32_t)((int32_t)(((RuntimeArray*)L_46)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t07D6F8693F4D0B3C951D3AC26EBB0DDAD42EACCB* L_47 = V_0;
		int32_t L_48 = V_5;
		NullCheck(L_47);
		int32_t L_49 = ((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___hashCode;
		int32_t L_50 = V_2;
		if ((!(((uint32_t)L_49) == ((uint32_t)L_50))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_51 = V_1;
		EntryU5BU5D_t07D6F8693F4D0B3C951D3AC26EBB0DDAD42EACCB* L_52 = V_0;
		int32_t L_53 = V_5;
		NullCheck(L_52);
		SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574 L_54 = ((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___key;
		SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574 L_55 = ___0_key;
		NullCheck(L_51);
		bool L_56;
		L_56 = InterfaceFuncInvoker2< bool, SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574, SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_51, L_54, L_55);
		if (!L_56)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_57 = ___2_behavior;
		if ((!(((uint32_t)L_57) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t07D6F8693F4D0B3C951D3AC26EBB0DDAD42EACCB* L_58 = V_0;
		int32_t L_59 = V_5;
		NullCheck(L_58);
		RuntimeObject* L_60 = ___1_value;
		((L_58)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_59)))->___value = L_60;
		Il2CppCodeGenWriteBarrier((void**)(&((L_58)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_59)))->___value), (void*)L_60);
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_61 = ___2_behavior;
		if ((!(((uint32_t)L_61) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574 L_62 = ___0_key;
		SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574 L_63 = L_62;
		RuntimeObject* L_64 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_63);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_64, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t07D6F8693F4D0B3C951D3AC26EBB0DDAD42EACCB* L_65 = V_0;
		int32_t L_66 = V_5;
		NullCheck(L_65);
		int32_t L_67 = ((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___next;
		V_5 = L_67;
		int32_t L_68 = V_3;
		EntryU5BU5D_t07D6F8693F4D0B3C951D3AC26EBB0DDAD42EACCB* L_69 = V_0;
		NullCheck(L_69);
		if ((((int32_t)L_68) < ((int32_t)((int32_t)(((RuntimeArray*)L_69)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_70 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_70, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_71 = __this->____freeCount;
		if ((((int32_t)L_71) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_72 = __this->____freeList;
		V_8 = L_72;
		V_7 = (bool)1;
		int32_t L_73 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_73, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_74 = __this->____count;
		V_13 = L_74;
		int32_t L_75 = V_13;
		EntryU5BU5D_t07D6F8693F4D0B3C951D3AC26EBB0DDAD42EACCB* L_76 = V_0;
		NullCheck(L_76);
		if ((!(((uint32_t)L_75) == ((uint32_t)((int32_t)(((RuntimeArray*)L_76)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_mE7AB2713437A1EFA36A91AC3A3D273E3FD2D4B40(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_77 = V_13;
		V_8 = L_77;
		int32_t L_78 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_78, 1));
		EntryU5BU5D_t07D6F8693F4D0B3C951D3AC26EBB0DDAD42EACCB* L_79 = __this->____entries;
		V_0 = L_79;
	}

IL_0250:
	{
		bool L_80 = V_6;
		if (L_80)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_81 = V_4;
		G_B51_0 = L_81;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_82 = __this->____buckets;
		int32_t L_83 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_84 = __this->____buckets;
		NullCheck(L_84);
		NullCheck(L_82);
		G_B51_0 = ((L_82)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_83%((int32_t)(((RuntimeArray*)L_84)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t07D6F8693F4D0B3C951D3AC26EBB0DDAD42EACCB* L_85 = V_0;
		int32_t L_86 = V_8;
		NullCheck(L_85);
		V_10 = ((L_85)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_86)));
		bool L_87 = V_7;
		if (!L_87)
		{
			goto IL_028a;
		}
	}
	{
		Entry_t9DD41777766A237ECDB0E269740F073135AB4A64* L_88 = V_10;
		int32_t L_89 = L_88->___next;
		__this->____freeList = L_89;
	}

IL_028a:
	{
		Entry_t9DD41777766A237ECDB0E269740F073135AB4A64* L_90 = V_10;
		int32_t L_91 = V_2;
		L_90->___hashCode = L_91;
		Entry_t9DD41777766A237ECDB0E269740F073135AB4A64* L_92 = V_10;
		int32_t* L_93 = V_9;
		int32_t L_94 = *((int32_t*)L_93);
		L_92->___next = ((int32_t)il2cpp_codegen_subtract(L_94, 1));
		Entry_t9DD41777766A237ECDB0E269740F073135AB4A64* L_95 = V_10;
		SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574 L_96 = ___0_key;
		L_95->___key = L_96;
		Entry_t9DD41777766A237ECDB0E269740F073135AB4A64* L_97 = V_10;
		RuntimeObject* L_98 = ___1_value;
		L_97->___value = L_98;
		Il2CppCodeGenWriteBarrier((void**)(&L_97->___value), (void*)L_98);
		int32_t* L_99 = V_9;
		int32_t L_100 = V_8;
		*((int32_t*)L_99) = (int32_t)((int32_t)il2cpp_codegen_add(L_100, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_mDD9E05B4B7285871F634FD5CB20B266E514888EE_gshared (Dictionary_2_t3E3BA8CACCC3C085000EC19576E2BA73F8CFC78E* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t483C9A7E1529730398DA7E05E2540845C629FED3* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 32)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_m986E984D6AA404BAD85BD3C9932842181968D3F7(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 35)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t483C9A7E1529730398DA7E05E2540845C629FED3*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 26)));
		KeyValuePair_2U5BU5D_t483C9A7E1529730398DA7E05E2540845C629FED3* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_t483C9A7E1529730398DA7E05E2540845C629FED3* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574 L_21;
		L_21 = KeyValuePair_2_get_Key_m68ECE6EFA3B43F6CABC5DA63109B69C09B5D3C48_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		goto IL_009a;
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t483C9A7E1529730398DA7E05E2540845C629FED3* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574 L_24;
		L_24 = KeyValuePair_2_get_Key_m68ECE6EFA3B43F6CABC5DA63109B69C09B5D3C48_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		KeyValuePair_2U5BU5D_t483C9A7E1529730398DA7E05E2540845C629FED3* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		RuntimeObject* L_27;
		L_27 = KeyValuePair_2_get_Value_mBC7C1BACDBEBA44E8D7BFD8D579336DCC37D6BB5_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		Dictionary_2_Add_mBD7BFFF74C1DF70C8D47B62E3E603E9F2EEAC75D(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_t483C9A7E1529730398DA7E05E2540845C629FED3* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mE7AB2713437A1EFA36A91AC3A3D273E3FD2D4B40_gshared (Dictionary_2_t3E3BA8CACCC3C085000EC19576E2BA73F8CFC78E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_m8E9C5807A9F45205E0ECC9BAD37DCE1733F12691(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m8E9C5807A9F45205E0ECC9BAD37DCE1733F12691_gshared (Dictionary_2_t3E3BA8CACCC3C085000EC19576E2BA73F8CFC78E* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t07D6F8693F4D0B3C951D3AC26EBB0DDAD42EACCB* V_1 = NULL;
	int32_t V_2 = 0;
	SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_t07D6F8693F4D0B3C951D3AC26EBB0DDAD42EACCB* L_3 = (EntryU5BU5D_t07D6F8693F4D0B3C951D3AC26EBB0DDAD42EACCB*)(EntryU5BU5D_t07D6F8693F4D0B3C951D3AC26EBB0DDAD42EACCB*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 40), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_t07D6F8693F4D0B3C951D3AC26EBB0DDAD42EACCB* L_5 = __this->____entries;
		EntryU5BU5D_t07D6F8693F4D0B3C951D3AC26EBB0DDAD42EACCB* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574));
		SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574 L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)((int32_t)false&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t07D6F8693F4D0B3C951D3AC26EBB0DDAD42EACCB* L_10 = V_1;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t07D6F8693F4D0B3C951D3AC26EBB0DDAD42EACCB* L_13 = V_1;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		EntryU5BU5D_t07D6F8693F4D0B3C951D3AC26EBB0DDAD42EACCB* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574* L_17 = (SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574*)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key);
		Il2CppFakeBox<SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574> L_18(il2cpp_rgctx_data(method->klass->rgctx_data, 11), L_17);
		int32_t L_19;
		L_19 = ValueType_GetHashCode_m3B47C72EA1FA846D9B0DFF3C444AB2BFA22CF3CE((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_18), NULL);
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode = ((int32_t)(L_19&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_20 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_007f:
	{
		int32_t L_21 = V_4;
		int32_t L_22 = V_2;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t07D6F8693F4D0B3C951D3AC26EBB0DDAD42EACCB* L_23 = V_1;
		int32_t L_24 = V_5;
		NullCheck(L_23);
		int32_t L_25 = ((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24)))->___hashCode;
		if ((((int32_t)L_25) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t07D6F8693F4D0B3C951D3AC26EBB0DDAD42EACCB* L_26 = V_1;
		int32_t L_27 = V_5;
		NullCheck(L_26);
		int32_t L_28 = ((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27)))->___hashCode;
		int32_t L_29 = ___0_newSize;
		V_6 = ((int32_t)(L_28%L_29));
		EntryU5BU5D_t07D6F8693F4D0B3C951D3AC26EBB0DDAD42EACCB* L_30 = V_1;
		int32_t L_31 = V_5;
		NullCheck(L_30);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = V_0;
		int32_t L_33 = V_6;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		int32_t L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___next = ((int32_t)il2cpp_codegen_subtract(L_35, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_0;
		int32_t L_37 = V_6;
		int32_t L_38 = V_5;
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(L_37), (int32_t)((int32_t)il2cpp_codegen_add(L_38, 1)));
	}

IL_00c5:
	{
		int32_t L_39 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_00cb:
	{
		int32_t L_40 = V_5;
		int32_t L_41 = V_2;
		if ((((int32_t)L_40) < ((int32_t)L_41)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_42 = V_0;
		__this->____buckets = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_42);
		EntryU5BU5D_t07D6F8693F4D0B3C951D3AC26EBB0DDAD42EACCB* L_43 = V_1;
		__this->____entries = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_43);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mDB0DF91174BECF8AAAF69C5F316F2E0CE8D34437_gshared (Dictionary_2_t3E3BA8CACCC3C085000EC19576E2BA73F8CFC78E* __this, SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574 ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t9DD41777766A237ECDB0E269740F073135AB4A64* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		Il2CppFakeBox<SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574> L_4(il2cpp_rgctx_data(method->klass->rgctx_data, 11), (&___0_key));
		int32_t L_5;
		L_5 = ValueType_GetHashCode_m3B47C72EA1FA846D9B0DFF3C444AB2BFA22CF3CE((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_4), NULL);
		G_B6_0 = L_5;
		goto IL_0038;
	}

IL_0032:
	{
		SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574 L_6 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker1< int32_t, SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_6);
		G_B6_0 = L_7;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_8 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		NullCheck(L_9);
		V_1 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		int32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t07D6F8693F4D0B3C951D3AC26EBB0DDAD42EACCB* L_14 = __this->____entries;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		V_4 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)));
		Entry_t9DD41777766A237ECDB0E269740F073135AB4A64* L_16 = V_4;
		int32_t L_17 = L_16->___hashCode;
		int32_t L_18 = V_0;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_19 = __this->____comparer;
		RuntimeObject* L_20 = L_19;
		if (L_20)
		{
			G_B10_0 = L_20;
			goto IL_0095;
		}
		G_B9_0 = L_20;
	}
	{
		EqualityComparer_1_t5849F328832B91CA688EA057CFD71225D81B0F72* L_21;
		L_21 = EqualityComparer_1_get_Default_m74879556CBF575D38F11DBF18327D9D848353BD3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_t9DD41777766A237ECDB0E269740F073135AB4A64* L_22 = V_4;
		SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574 L_23 = L_22->___key;
		SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574 L_24 = ___0_key;
		NullCheck(L_21);
		bool L_25;
		L_25 = VirtualFuncInvoker2< bool, SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574, SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574 >::Invoke(8, L_21, L_23, L_24);
		G_B11_0 = L_25;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t9DD41777766A237ECDB0E269740F073135AB4A64* L_26 = V_4;
		SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574 L_27 = L_26->___key;
		SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574 L_28 = ___0_key;
		NullCheck(G_B10_0);
		bool L_29;
		L_29 = InterfaceFuncInvoker2< bool, SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574, SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_27, L_28);
		G_B11_0 = L_29;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_30 = V_2;
		if ((((int32_t)L_30) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = __this->____buckets;
		int32_t L_32 = V_1;
		Entry_t9DD41777766A237ECDB0E269740F073135AB4A64* L_33 = V_4;
		int32_t L_34 = L_33->___next;
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (int32_t)((int32_t)il2cpp_codegen_add(L_34, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t07D6F8693F4D0B3C951D3AC26EBB0DDAD42EACCB* L_35 = __this->____entries;
		int32_t L_36 = V_2;
		NullCheck(L_35);
		Entry_t9DD41777766A237ECDB0E269740F073135AB4A64* L_37 = V_4;
		int32_t L_38 = L_37->___next;
		((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_36)))->___next = L_38;
	}

IL_00d6:
	{
		Entry_t9DD41777766A237ECDB0E269740F073135AB4A64* L_39 = V_4;
		L_39->___hashCode = (-1);
		Entry_t9DD41777766A237ECDB0E269740F073135AB4A64* L_40 = V_4;
		int32_t L_41 = __this->____freeList;
		L_40->___next = L_41;
		goto IL_00ff;
	}

IL_00ff:
	{
	}
	{
		Entry_t9DD41777766A237ECDB0E269740F073135AB4A64* L_42 = V_4;
		RuntimeObject** L_43 = (RuntimeObject**)(&L_42->___value);
		il2cpp_codegen_initobj(L_43, sizeof(RuntimeObject*));
	}

IL_0113:
	{
		int32_t L_44 = V_3;
		__this->____freeList = L_44;
		int32_t L_45 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_45, 1));
		int32_t L_46 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_46, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_47 = V_3;
		V_2 = L_47;
		Entry_t9DD41777766A237ECDB0E269740F073135AB4A64* L_48 = V_4;
		int32_t L_49 = L_48->___next;
		V_3 = L_49;
	}

IL_0142:
	{
		int32_t L_50 = V_3;
		if ((((int32_t)L_50) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m1D8AEC7A521181108399808F0C338232D99D80EB_gshared (Dictionary_2_t3E3BA8CACCC3C085000EC19576E2BA73F8CFC78E* __this, SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574 ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574 L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m72AFEEA7170985EA6BB4D32F877862DCB57F10C4(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		RuntimeObject** L_3 = ___1_value;
		EntryU5BU5D_t07D6F8693F4D0B3C951D3AC26EBB0DDAD42EACCB* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		*(RuntimeObject**)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)L_6);
		return (bool)1;
	}

IL_0025:
	{
		RuntimeObject** L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(RuntimeObject*));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_mA9EF046CF09312B7E7CBDA6442ADD1AC99418B4C_gshared (Dictionary_2_t3E3BA8CACCC3C085000EC19576E2BA73F8CFC78E* __this, SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574 ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574 L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m5E93552E2B36C4BB1A0810A7CAD3AF667C49C0B0(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m76ECAFB93D66CE931CDE8676948297F1DEC9690B_gshared (Dictionary_2_t3E3BA8CACCC3C085000EC19576E2BA73F8CFC78E* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_mEE46944404F0E0395B47B6516F34715886C8B1BB_gshared (Dictionary_2_t3E3BA8CACCC3C085000EC19576E2BA73F8CFC78E* __this, KeyValuePair_2U5BU5D_t483C9A7E1529730398DA7E05E2540845C629FED3* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t483C9A7E1529730398DA7E05E2540845C629FED3* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_m28371CA5037D6161F36580F515048D6BA1EF7D79(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_m2C32AE82DD8939BF97BE0ECDF6746FDA93D59DFC_gshared (Dictionary_2_t3E3BA8CACCC3C085000EC19576E2BA73F8CFC78E* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t483C9A7E1529730398DA7E05E2540845C629FED3* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_t07D6F8693F4D0B3C951D3AC26EBB0DDAD42EACCB* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_t07D6F8693F4D0B3C951D3AC26EBB0DDAD42EACCB* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_m17C786AA41BA723BD4B79D2C514A10CADA7C7087(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_t483C9A7E1529730398DA7E05E2540845C629FED3*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 26)));
		KeyValuePair_2U5BU5D_t483C9A7E1529730398DA7E05E2540845C629FED3* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t483C9A7E1529730398DA7E05E2540845C629FED3* L_14 = V_0;
		int32_t L_15 = ___1_index;
		Dictionary_2_CopyTo_m28371CA5037D6161F36580F515048D6BA1EF7D79(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_t07D6F8693F4D0B3C951D3AC26EBB0DDAD42EACCB* L_18 = __this->____entries;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_t07D6F8693F4D0B3C951D3AC26EBB0DDAD42EACCB* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_t07D6F8693F4D0B3C951D3AC26EBB0DDAD42EACCB* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574 L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574 L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_28);
		EntryU5BU5D_t07D6F8693F4D0B3C951D3AC26EBB0DDAD42EACCB* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		RuntimeObject* L_32 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value;
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_33;
		memset((&L_33), 0, sizeof(L_33));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_33), L_29, L_32, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_33);
	}

IL_00b5:
	{
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b9:
	{
		int32_t L_35 = V_3;
		int32_t L_36 = __this->____count;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_37 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_37, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = V_4;
		if (L_38)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_39 = __this->____count;
			V_5 = L_39;
			EntryU5BU5D_t07D6F8693F4D0B3C951D3AC26EBB0DDAD42EACCB* L_40 = __this->____entries;
			V_6 = L_40;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_t07D6F8693F4D0B3C951D3AC26EBB0DDAD42EACCB* L_41 = V_6;
			int32_t L_42 = V_7;
			NullCheck(L_41);
			int32_t L_43 = ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
			if ((((int32_t)L_43) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = V_4;
			int32_t L_45 = ___1_index;
			int32_t L_46 = L_45;
			___1_index = ((int32_t)il2cpp_codegen_add(L_46, 1));
			EntryU5BU5D_t07D6F8693F4D0B3C951D3AC26EBB0DDAD42EACCB* L_47 = V_6;
			int32_t L_48 = V_7;
			NullCheck(L_47);
			SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574 L_49 = ((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___key;
			EntryU5BU5D_t07D6F8693F4D0B3C951D3AC26EBB0DDAD42EACCB* L_50 = V_6;
			int32_t L_51 = V_7;
			NullCheck(L_50);
			RuntimeObject* L_52 = ((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___value;
			KeyValuePair_2_t4D486866736280C7A079662D170F5444C27E50C6 L_53;
			memset((&L_53), 0, sizeof(L_53));
			KeyValuePair_2__ctor_m155BEE8D2B58C2C7B35E66C6DE12740FE1434548((&L_53), L_49, L_52, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
			KeyValuePair_2_t4D486866736280C7A079662D170F5444C27E50C6 L_54 = L_53;
			RuntimeObject* L_55 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 17), &L_54);
			NullCheck(L_44);
			ArrayElementTypeCheck (L_44, L_55);
			(L_44)->SetAt(static_cast<il2cpp_array_size_t>(L_46), (RuntimeObject*)L_55);
		}

IL_012a_1:
		{
			int32_t L_56 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		}

IL_0130_1:
		{
			int32_t L_57 = V_7;
			int32_t L_58 = V_5;
			if ((((int32_t)L_57) < ((int32_t)L_58)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m57EABB902431EC97AC893216C253DB236B3BB844_gshared (Dictionary_2_t3E3BA8CACCC3C085000EC19576E2BA73F8CFC78E* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t45CAC33CD0C08E57C834C0DE235FD5DB1E6F858A L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m9F056B1689A35FBDA1A91E631D84E419FDF7C2CF((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		Enumerator_t45CAC33CD0C08E57C834C0DE235FD5DB1E6F858A L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 29), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_EnsureCapacity_m52B628E8A3B65BF91608B39572A5F401746713E0_gshared (Dictionary_2_t3E3BA8CACCC3C085000EC19576E2BA73F8CFC78E* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_000b:
	{
		EntryU5BU5D_t07D6F8693F4D0B3C951D3AC26EBB0DDAD42EACCB* L_1 = __this->____entries;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		EntryU5BU5D_t07D6F8693F4D0B3C951D3AC26EBB0DDAD42EACCB* L_2 = __this->____entries;
		NullCheck(L_2);
		G_B5_0 = ((int32_t)(((RuntimeArray*)L_2)->max_length));
		goto IL_001e;
	}

IL_001d:
	{
		G_B5_0 = 0;
	}

IL_001e:
	{
		V_0 = G_B5_0;
		int32_t L_3 = V_0;
		int32_t L_4 = ___0_capacity;
		if ((((int32_t)L_3) < ((int32_t)L_4)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_5 = V_0;
		return L_5;
	}

IL_0025:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->____buckets;
		if (L_6)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_7 = ___0_capacity;
		int32_t L_8;
		L_8 = Dictionary_2_Initialize_m986E984D6AA404BAD85BD3C9932842181968D3F7(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return L_8;
	}

IL_0035:
	{
		int32_t L_9 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_10;
		L_10 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_9, NULL);
		V_1 = L_10;
		int32_t L_11 = V_1;
		Dictionary_2_Resize_m8E9C5807A9F45205E0ECC9BAD37DCE1733F12691(__this, L_11, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		int32_t L_12 = V_1;
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_mF8E6F034DBCE540F912BD49F969DC25718106826_gshared (Dictionary_2_t3E3BA8CACCC3C085000EC19576E2BA73F8CFC78E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m247C68C246A38A70A3731B5B45A020B28282E12F_gshared (Dictionary_2_t3E3BA8CACCC3C085000EC19576E2BA73F8CFC78E* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_mBBD6280B29E6F5958D56722738A71ED6BADB9612(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = Dictionary_2_FindEntry_m72AFEEA7170985EA6BB4D32F877862DCB57F10C4(__this, ((*(SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574*)((SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574*)(SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11))))), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_t07D6F8693F4D0B3C951D3AC26EBB0DDAD42EACCB* L_5 = __this->____entries;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		RuntimeObject* L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		return L_7;
	}

IL_0030:
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_mD07D59C9C9616314829A52C09462E0C257D9602E_gshared (Dictionary_2_t3E3BA8CACCC3C085000EC19576E2BA73F8CFC78E* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574 V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 49));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574*)((SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574*)(SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11)))));
		}
		try
		{
			SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574 L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_set_Item_mA5CDA4864C431CF2EA8528467544E9D8DF449F82(__this, L_3, ((RuntimeObject*)Castclass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15))), il2cpp_rgctx_method(method->klass->rgctx_data, 50));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			RuntimeObject* L_5 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 51)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_7;
			L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_5, L_7, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		RuntimeObject* L_8 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 52)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_8, L_10, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mBBD6280B29E6F5958D56722738A71ED6BADB9612_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_m2131373586DAC51695AD520F8C929FD8FA746A81_gshared (Dictionary_2_t3E3BA8CACCC3C085000EC19576E2BA73F8CFC78E* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_mBBD6280B29E6F5958D56722738A71ED6BADB9612(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m0F325215C221CB0DD78B9BB89D5963BF1D1B6761(__this, ((*(SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574*)((SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574*)(SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11))))), il2cpp_rgctx_method(method->klass->rgctx_data, 53));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_m2E8E518BD25EC1E1197FFEB949DA3D3E8D7746D4_gshared (Dictionary_2_t3E3BA8CACCC3C085000EC19576E2BA73F8CFC78E* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t45CAC33CD0C08E57C834C0DE235FD5DB1E6F858A L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m9F056B1689A35FBDA1A91E631D84E419FDF7C2CF((&L_0), __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		Enumerator_t45CAC33CD0C08E57C834C0DE235FD5DB1E6F858A L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 29), &L_1);
		return (RuntimeObject*)L_2;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DynamicArray_1_get_size_m1B00C20A8CC4D62269585D16A58425D3F258836F_gshared (DynamicArray_1_t7C64F5A74B7BA6F6B3589A766CADE3F59C6C7BCA* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CsizeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicArray_1_set_size_m3409BF64253E0042A1047263A1B2BE4942C6F932_gshared (DynamicArray_1_t7C64F5A74B7BA6F6B3589A766CADE3F59C6C7BCA* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CsizeU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DynamicArray_1_get_capacity_m4D54D6D614F41BE7024D7262543ABF6B86997F9B_gshared (DynamicArray_1_t7C64F5A74B7BA6F6B3589A766CADE3F59C6C7BCA* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = __this->___m_Array;
		NullCheck(L_0);
		V_0 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DynamicArray_1_get_version_mAD7540A9CABCD175B64E344ED8CCCA67497E7D62_gshared (DynamicArray_1_t7C64F5A74B7BA6F6B3589A766CADE3F59C6C7BCA* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CversionU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicArray_1_set_version_m39DBA15EA5D9ECF318BEA5E7A73A0708D4CCCD80_gshared (DynamicArray_1_t7C64F5A74B7BA6F6B3589A766CADE3F59C6C7BCA* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CversionU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicArray_1__ctor_m1D48C3A8E1801317510426302D1838A768CFB0E6_gshared (DynamicArray_1_t7C64F5A74B7BA6F6B3589A766CADE3F59C6C7BCA* __this, const RuntimeMethod* method) 
{
	{
		__this->___m_Array = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Array), (void*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (uint32_t)((int32_t)32));
		__this->___m_Array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Array), (void*)L_0);
		DynamicArray_1_set_size_m3409BF64253E0042A1047263A1B2BE4942C6F932_inline(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		DynamicArray_1_set_version_m39DBA15EA5D9ECF318BEA5E7A73A0708D4CCCD80_inline(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicArray_1_Clear_m7D741EEC9F21454D1053B2300C27B49527B2EB6E_gshared (DynamicArray_1_t7C64F5A74B7BA6F6B3589A766CADE3F59C6C7BCA* __this, const RuntimeMethod* method) 
{
	{
		DynamicArray_1_set_size_m3409BF64253E0042A1047263A1B2BE4942C6F932_inline(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicArray_1_Resize_m3E24EB8A4A036B423BA304E8C3C94EBD0222822E_gshared (DynamicArray_1_t7C64F5A74B7BA6F6B3589A766CADE3F59C6C7BCA* __this, int32_t ___0_newSize, bool ___1_keepContent, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_newSize;
		bool L_1 = ___1_keepContent;
		DynamicArray_1_Reserve_m18FB3721016A3E67DED9CC64375BDDBB1EF2D3D8(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		int32_t L_2 = ___0_newSize;
		DynamicArray_1_set_size_m3409BF64253E0042A1047263A1B2BE4942C6F932_inline(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		DynamicArray_1_BumpVersion_m5D8E2E53FF33FE34A4FA46226EE9CF56B85B002E(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicArray_1_Reserve_m18FB3721016A3E67DED9CC64375BDDBB1EF2D3D8_gshared (DynamicArray_1_t7C64F5A74B7BA6F6B3589A766CADE3F59C6C7BCA* __this, int32_t ___0_newCapacity, bool ___1_keepContent, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_2 = NULL;
	{
		int32_t L_0 = ___0_newCapacity;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->___m_Array;
		NullCheck(L_1);
		V_0 = (bool)((((int32_t)L_0) > ((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_004c;
		}
	}
	{
		bool L_3 = ___1_keepContent;
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_5 = ___0_newCapacity;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (uint32_t)L_5);
		V_2 = L_6;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = __this->___m_Array;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = __this->___m_Array;
		NullCheck(L_9);
		Array_Copy_m4233828B4E6288B6D815F539AAA38575DE627900((RuntimeArray*)L_7, (RuntimeArray*)L_8, ((int32_t)(((RuntimeArray*)L_9)->max_length)), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = V_2;
		__this->___m_Array = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Array), (void*)L_10);
		goto IL_004b;
	}

IL_003d:
	{
		int32_t L_11 = ___0_newCapacity;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (uint32_t)L_11);
		__this->___m_Array = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Array), (void*)L_12);
	}

IL_004b:
	{
	}

IL_004c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject** DynamicArray_1_get_Item_m7DDF1E462D1484149A4D812CAD717F816205FD44_gshared (DynamicArray_1_t7C64F5A74B7BA6F6B3589A766CADE3F59C6C7BCA* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	bool V_0 = false;
	RuntimeObject** V_1 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = DynamicArray_1_get_size_m1B00C20A8CC4D62269585D16A58425D3F258836F_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		V_0 = (bool)((((int32_t)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_3 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		IndexOutOfRangeException__ctor_m270ED9671475CE680EEA8C62A7A43308AE4188EF(L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_0017:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = __this->___m_Array;
		int32_t L_5 = ___0_index;
		NullCheck(L_4);
		V_1 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)));
		goto IL_0026;
	}

IL_0026:
	{
		RuntimeObject** L_6 = V_1;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicArray_1_BumpVersion_m5D8E2E53FF33FE34A4FA46226EE9CF56B85B002E_gshared (DynamicArray_1_t7C64F5A74B7BA6F6B3589A766CADE3F59C6C7BCA* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = DynamicArray_1_get_version_mAD7540A9CABCD175B64E344ED8CCCA67497E7D62_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_0 = L_0;
		int32_t L_1 = V_0;
		DynamicArray_1_set_version_m39DBA15EA5D9ECF318BEA5E7A73A0708D4CCCD80_inline(__this, ((int32_t)il2cpp_codegen_add(L_1, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 4));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DynamicArray_1_get_size_m2D85CC818F77A4096E9474CA56125F7ED642F048_gshared (DynamicArray_1_t32FB886A5D922EE301E17A95EB958B1FA6B53A59* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CsizeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicArray_1_set_size_mFDBE699A74F4921E332C4199F04F64D5F77B67AD_gshared (DynamicArray_1_t32FB886A5D922EE301E17A95EB958B1FA6B53A59* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CsizeU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DynamicArray_1_get_capacity_mA53387B4FEBFE890BBF56823F4A328BF9B9EE0C2_gshared (DynamicArray_1_t32FB886A5D922EE301E17A95EB958B1FA6B53A59* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RendererListResourceU5BU5D_t86C273A426669C3314D3D7C9D320EE41CAC74D23* L_0 = __this->___m_Array;
		NullCheck(L_0);
		V_0 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DynamicArray_1_get_version_m03799785BC334E5B1D8EB06A5F254190FED07EFF_gshared (DynamicArray_1_t32FB886A5D922EE301E17A95EB958B1FA6B53A59* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CversionU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicArray_1_set_version_mFC9E3C8D3C2F91995DADCDF989156C60112C0BF4_gshared (DynamicArray_1_t32FB886A5D922EE301E17A95EB958B1FA6B53A59* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CversionU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicArray_1__ctor_mB6E486BF5FB688D7B16F29D5F2D7DBBD88F9DBF9_gshared (DynamicArray_1_t32FB886A5D922EE301E17A95EB958B1FA6B53A59* __this, const RuntimeMethod* method) 
{
	{
		__this->___m_Array = (RendererListResourceU5BU5D_t86C273A426669C3314D3D7C9D320EE41CAC74D23*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Array), (void*)(RendererListResourceU5BU5D_t86C273A426669C3314D3D7C9D320EE41CAC74D23*)NULL);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RendererListResourceU5BU5D_t86C273A426669C3314D3D7C9D320EE41CAC74D23* L_0 = (RendererListResourceU5BU5D_t86C273A426669C3314D3D7C9D320EE41CAC74D23*)(RendererListResourceU5BU5D_t86C273A426669C3314D3D7C9D320EE41CAC74D23*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (uint32_t)((int32_t)32));
		__this->___m_Array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Array), (void*)L_0);
		DynamicArray_1_set_size_mFDBE699A74F4921E332C4199F04F64D5F77B67AD_inline(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		DynamicArray_1_set_version_mFC9E3C8D3C2F91995DADCDF989156C60112C0BF4_inline(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicArray_1_Clear_m2D2FEBF4C81356C4B64C5B416436969FECF74217_gshared (DynamicArray_1_t32FB886A5D922EE301E17A95EB958B1FA6B53A59* __this, const RuntimeMethod* method) 
{
	{
		DynamicArray_1_set_size_mFDBE699A74F4921E332C4199F04F64D5F77B67AD_inline(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicArray_1_Resize_m1BD6A71E3C69ECA62C602BF52E90D256989161D4_gshared (DynamicArray_1_t32FB886A5D922EE301E17A95EB958B1FA6B53A59* __this, int32_t ___0_newSize, bool ___1_keepContent, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_newSize;
		bool L_1 = ___1_keepContent;
		DynamicArray_1_Reserve_m485927978DE346D5A12D1F1893011FB796F0AAD6(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		int32_t L_2 = ___0_newSize;
		DynamicArray_1_set_size_mFDBE699A74F4921E332C4199F04F64D5F77B67AD_inline(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		DynamicArray_1_BumpVersion_m9AC29E691E8EDFBC44888CD38AB982B3F1EEF675(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicArray_1_Reserve_m485927978DE346D5A12D1F1893011FB796F0AAD6_gshared (DynamicArray_1_t32FB886A5D922EE301E17A95EB958B1FA6B53A59* __this, int32_t ___0_newCapacity, bool ___1_keepContent, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	RendererListResourceU5BU5D_t86C273A426669C3314D3D7C9D320EE41CAC74D23* V_2 = NULL;
	{
		int32_t L_0 = ___0_newCapacity;
		RendererListResourceU5BU5D_t86C273A426669C3314D3D7C9D320EE41CAC74D23* L_1 = __this->___m_Array;
		NullCheck(L_1);
		V_0 = (bool)((((int32_t)L_0) > ((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_004c;
		}
	}
	{
		bool L_3 = ___1_keepContent;
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_5 = ___0_newCapacity;
		RendererListResourceU5BU5D_t86C273A426669C3314D3D7C9D320EE41CAC74D23* L_6 = (RendererListResourceU5BU5D_t86C273A426669C3314D3D7C9D320EE41CAC74D23*)(RendererListResourceU5BU5D_t86C273A426669C3314D3D7C9D320EE41CAC74D23*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (uint32_t)L_5);
		V_2 = L_6;
		RendererListResourceU5BU5D_t86C273A426669C3314D3D7C9D320EE41CAC74D23* L_7 = __this->___m_Array;
		RendererListResourceU5BU5D_t86C273A426669C3314D3D7C9D320EE41CAC74D23* L_8 = V_2;
		RendererListResourceU5BU5D_t86C273A426669C3314D3D7C9D320EE41CAC74D23* L_9 = __this->___m_Array;
		NullCheck(L_9);
		Array_Copy_m4233828B4E6288B6D815F539AAA38575DE627900((RuntimeArray*)L_7, (RuntimeArray*)L_8, ((int32_t)(((RuntimeArray*)L_9)->max_length)), NULL);
		RendererListResourceU5BU5D_t86C273A426669C3314D3D7C9D320EE41CAC74D23* L_10 = V_2;
		__this->___m_Array = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Array), (void*)L_10);
		goto IL_004b;
	}

IL_003d:
	{
		int32_t L_11 = ___0_newCapacity;
		RendererListResourceU5BU5D_t86C273A426669C3314D3D7C9D320EE41CAC74D23* L_12 = (RendererListResourceU5BU5D_t86C273A426669C3314D3D7C9D320EE41CAC74D23*)(RendererListResourceU5BU5D_t86C273A426669C3314D3D7C9D320EE41CAC74D23*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (uint32_t)L_11);
		__this->___m_Array = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Array), (void*)L_12);
	}

IL_004b:
	{
	}

IL_004c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RendererListResource_t9B978DD85ADC467D7E4DB42EF603B7C49918BF49* DynamicArray_1_get_Item_mF3E6225CDFD0CD64C4DC1289DB12E97049574C31_gshared (DynamicArray_1_t32FB886A5D922EE301E17A95EB958B1FA6B53A59* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	bool V_0 = false;
	RendererListResource_t9B978DD85ADC467D7E4DB42EF603B7C49918BF49* V_1 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = DynamicArray_1_get_size_m2D85CC818F77A4096E9474CA56125F7ED642F048_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		V_0 = (bool)((((int32_t)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_3 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		IndexOutOfRangeException__ctor_m270ED9671475CE680EEA8C62A7A43308AE4188EF(L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_0017:
	{
		RendererListResourceU5BU5D_t86C273A426669C3314D3D7C9D320EE41CAC74D23* L_4 = __this->___m_Array;
		int32_t L_5 = ___0_index;
		NullCheck(L_4);
		V_1 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)));
		goto IL_0026;
	}

IL_0026:
	{
		RendererListResource_t9B978DD85ADC467D7E4DB42EF603B7C49918BF49* L_6 = V_1;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicArray_1_BumpVersion_m9AC29E691E8EDFBC44888CD38AB982B3F1EEF675_gshared (DynamicArray_1_t32FB886A5D922EE301E17A95EB958B1FA6B53A59* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = DynamicArray_1_get_version_m03799785BC334E5B1D8EB06A5F254190FED07EFF_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_0 = L_0;
		int32_t L_1 = V_0;
		DynamicArray_1_set_version_mFC9E3C8D3C2F91995DADCDF989156C60112C0BF4_inline(__this, ((int32_t)il2cpp_codegen_add(L_1, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 4));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DynamicArray_1_get_size_m128222BE63C9931B08CD38DF32B858CD1CD4926D_gshared (DynamicArray_1_tFD6392EE4EAA442D167A921C9964FD9C17FDCDE0* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CsizeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicArray_1_set_size_m03AACEC62FF21AEAECC90AD9DE309428B7844369_gshared (DynamicArray_1_tFD6392EE4EAA442D167A921C9964FD9C17FDCDE0* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CsizeU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DynamicArray_1_get_capacity_mA68FDAA8E5E6DB153BE18DAFAC050D4E04864A84_gshared (DynamicArray_1_tFD6392EE4EAA442D167A921C9964FD9C17FDCDE0* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->___m_Array;
		NullCheck(L_0);
		V_0 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DynamicArray_1_get_version_m7021C92C2DEE3311E36B993215D41CD85E737732_gshared (DynamicArray_1_tFD6392EE4EAA442D167A921C9964FD9C17FDCDE0* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CversionU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicArray_1_set_version_m5BA4058F09F850E9B4CF7B22A21AE1D45B5DF330_gshared (DynamicArray_1_tFD6392EE4EAA442D167A921C9964FD9C17FDCDE0* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CversionU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicArray_1__ctor_m8D2147F5E8B59F7EF434A0458B9C3F5DD3F268F8_gshared (DynamicArray_1_tFD6392EE4EAA442D167A921C9964FD9C17FDCDE0* __this, const RuntimeMethod* method) 
{
	{
		__this->___m_Array = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Array), (void*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)NULL);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (uint32_t)((int32_t)32));
		__this->___m_Array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Array), (void*)L_0);
		((  void (*) (DynamicArray_1_tFD6392EE4EAA442D167A921C9964FD9C17FDCDE0*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		((  void (*) (DynamicArray_1_tFD6392EE4EAA442D167A921C9964FD9C17FDCDE0*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicArray_1_Clear_m64C7E53E4459E2A5F405FA94DC80AA251C9536D4_gshared (DynamicArray_1_tFD6392EE4EAA442D167A921C9964FD9C17FDCDE0* __this, const RuntimeMethod* method) 
{
	{
		((  void (*) (DynamicArray_1_tFD6392EE4EAA442D167A921C9964FD9C17FDCDE0*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicArray_1_Resize_m83B9E2903381BE0CD673D1B67026BE32C5F2347F_gshared (DynamicArray_1_tFD6392EE4EAA442D167A921C9964FD9C17FDCDE0* __this, int32_t ___0_newSize, bool ___1_keepContent, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_newSize;
		bool L_1 = ___1_keepContent;
		((  void (*) (DynamicArray_1_tFD6392EE4EAA442D167A921C9964FD9C17FDCDE0*, int32_t, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		int32_t L_2 = ___0_newSize;
		((  void (*) (DynamicArray_1_tFD6392EE4EAA442D167A921C9964FD9C17FDCDE0*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		((  void (*) (DynamicArray_1_tFD6392EE4EAA442D167A921C9964FD9C17FDCDE0*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicArray_1_Reserve_mF77009E9834F00ADE9EA5B2B10C438534E908F55_gshared (DynamicArray_1_tFD6392EE4EAA442D167A921C9964FD9C17FDCDE0* __this, int32_t ___0_newCapacity, bool ___1_keepContent, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_2 = NULL;
	{
		int32_t L_0 = ___0_newCapacity;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = __this->___m_Array;
		NullCheck(L_1);
		V_0 = (bool)((((int32_t)L_0) > ((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_004c;
		}
	}
	{
		bool L_3 = ___1_keepContent;
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_5 = ___0_newCapacity;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (uint32_t)L_5);
		V_2 = L_6;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = __this->___m_Array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = V_2;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_9 = __this->___m_Array;
		NullCheck(L_9);
		Array_Copy_m4233828B4E6288B6D815F539AAA38575DE627900((RuntimeArray*)L_7, (RuntimeArray*)L_8, ((int32_t)(((RuntimeArray*)L_9)->max_length)), NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_10 = V_2;
		__this->___m_Array = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Array), (void*)L_10);
		goto IL_004b;
	}

IL_003d:
	{
		int32_t L_11 = ___0_newCapacity;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (uint32_t)L_11);
		__this->___m_Array = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Array), (void*)L_12);
	}

IL_004b:
	{
	}

IL_004c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* DynamicArray_1_get_Item_mF0AEE4C8CFEB5DC5134BABA7A507D441E0ACE206_gshared (DynamicArray_1_tFD6392EE4EAA442D167A921C9964FD9C17FDCDE0* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	bool V_0 = false;
	Il2CppFullySharedGenericAny* V_1 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = ((  int32_t (*) (DynamicArray_1_tFD6392EE4EAA442D167A921C9964FD9C17FDCDE0*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		V_0 = (bool)((((int32_t)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_3 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		IndexOutOfRangeException__ctor_m270ED9671475CE680EEA8C62A7A43308AE4188EF(L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_0017:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = __this->___m_Array;
		int32_t L_5 = ___0_index;
		NullCheck(L_4);
		V_1 = ((Il2CppFullySharedGenericAny*)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)));
		goto IL_0026;
	}

IL_0026:
	{
		Il2CppFullySharedGenericAny* L_6 = V_1;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicArray_1_BumpVersion_m805F9A1491DEF04139B29760942E112E238387A3_gshared (DynamicArray_1_tFD6392EE4EAA442D167A921C9964FD9C17FDCDE0* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (DynamicArray_1_tFD6392EE4EAA442D167A921C9964FD9C17FDCDE0*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_0 = L_0;
		int32_t L_1 = V_0;
		((  void (*) (DynamicArray_1_tFD6392EE4EAA442D167A921C9964FD9C17FDCDE0*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(__this, ((int32_t)il2cpp_codegen_add(L_1, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 4));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DynamicArray_1_get_size_mDB3BA7CAAD59744057F0A5340186390AB7BCADD4_gshared (DynamicArray_1_tA7E05F444A8E75C3FD24B4EA81F57EA44E6D0F09* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CsizeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicArray_1_set_size_m352FBC4FC46492A70156C4D2EDA5F35FEAFCE206_gshared (DynamicArray_1_tA7E05F444A8E75C3FD24B4EA81F57EA44E6D0F09* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CsizeU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DynamicArray_1_get_capacity_mF10F55CAA90CC33A2DFAF577F335E59B067BB62F_gshared (DynamicArray_1_tA7E05F444A8E75C3FD24B4EA81F57EA44E6D0F09* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		CompiledPassInfoU5BU5D_tABD910C36DB41F35B2DDE8BEF16F9C5F7E02B755* L_0 = __this->___m_Array;
		NullCheck(L_0);
		V_0 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DynamicArray_1_get_version_mE13995AAB373C4A2F1E9761CF4DB390AD2636FA4_gshared (DynamicArray_1_tA7E05F444A8E75C3FD24B4EA81F57EA44E6D0F09* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CversionU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicArray_1_set_version_mBC13FCC0C9B7D12CF0E4B483A9FE71A993E32CAD_gshared (DynamicArray_1_tA7E05F444A8E75C3FD24B4EA81F57EA44E6D0F09* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CversionU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicArray_1__ctor_m525D3DB66358429AB19EDBF7C4DC3D669DCE8F04_gshared (DynamicArray_1_tA7E05F444A8E75C3FD24B4EA81F57EA44E6D0F09* __this, const RuntimeMethod* method) 
{
	{
		__this->___m_Array = (CompiledPassInfoU5BU5D_tABD910C36DB41F35B2DDE8BEF16F9C5F7E02B755*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Array), (void*)(CompiledPassInfoU5BU5D_tABD910C36DB41F35B2DDE8BEF16F9C5F7E02B755*)NULL);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		CompiledPassInfoU5BU5D_tABD910C36DB41F35B2DDE8BEF16F9C5F7E02B755* L_0 = (CompiledPassInfoU5BU5D_tABD910C36DB41F35B2DDE8BEF16F9C5F7E02B755*)(CompiledPassInfoU5BU5D_tABD910C36DB41F35B2DDE8BEF16F9C5F7E02B755*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (uint32_t)((int32_t)32));
		__this->___m_Array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Array), (void*)L_0);
		DynamicArray_1_set_size_m352FBC4FC46492A70156C4D2EDA5F35FEAFCE206_inline(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		DynamicArray_1_set_version_mBC13FCC0C9B7D12CF0E4B483A9FE71A993E32CAD_inline(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicArray_1_Clear_mE960D9C5CACB3C7EAF60A74689A7FA61EEF050C3_gshared (DynamicArray_1_tA7E05F444A8E75C3FD24B4EA81F57EA44E6D0F09* __this, const RuntimeMethod* method) 
{
	{
		DynamicArray_1_set_size_m352FBC4FC46492A70156C4D2EDA5F35FEAFCE206_inline(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicArray_1_Resize_mFA82C1713011AE3E2831D35E807923DACB5D5B36_gshared (DynamicArray_1_tA7E05F444A8E75C3FD24B4EA81F57EA44E6D0F09* __this, int32_t ___0_newSize, bool ___1_keepContent, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_newSize;
		bool L_1 = ___1_keepContent;
		DynamicArray_1_Reserve_m0A0A832CA3A65B02216DA45E5B6732C2FDC1CB19(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		int32_t L_2 = ___0_newSize;
		DynamicArray_1_set_size_m352FBC4FC46492A70156C4D2EDA5F35FEAFCE206_inline(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		DynamicArray_1_BumpVersion_m748232578BFEB3E8432F28D020973684DB67DCF0(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicArray_1_Reserve_m0A0A832CA3A65B02216DA45E5B6732C2FDC1CB19_gshared (DynamicArray_1_tA7E05F444A8E75C3FD24B4EA81F57EA44E6D0F09* __this, int32_t ___0_newCapacity, bool ___1_keepContent, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	CompiledPassInfoU5BU5D_tABD910C36DB41F35B2DDE8BEF16F9C5F7E02B755* V_2 = NULL;
	{
		int32_t L_0 = ___0_newCapacity;
		CompiledPassInfoU5BU5D_tABD910C36DB41F35B2DDE8BEF16F9C5F7E02B755* L_1 = __this->___m_Array;
		NullCheck(L_1);
		V_0 = (bool)((((int32_t)L_0) > ((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_004c;
		}
	}
	{
		bool L_3 = ___1_keepContent;
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_5 = ___0_newCapacity;
		CompiledPassInfoU5BU5D_tABD910C36DB41F35B2DDE8BEF16F9C5F7E02B755* L_6 = (CompiledPassInfoU5BU5D_tABD910C36DB41F35B2DDE8BEF16F9C5F7E02B755*)(CompiledPassInfoU5BU5D_tABD910C36DB41F35B2DDE8BEF16F9C5F7E02B755*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (uint32_t)L_5);
		V_2 = L_6;
		CompiledPassInfoU5BU5D_tABD910C36DB41F35B2DDE8BEF16F9C5F7E02B755* L_7 = __this->___m_Array;
		CompiledPassInfoU5BU5D_tABD910C36DB41F35B2DDE8BEF16F9C5F7E02B755* L_8 = V_2;
		CompiledPassInfoU5BU5D_tABD910C36DB41F35B2DDE8BEF16F9C5F7E02B755* L_9 = __this->___m_Array;
		NullCheck(L_9);
		Array_Copy_m4233828B4E6288B6D815F539AAA38575DE627900((RuntimeArray*)L_7, (RuntimeArray*)L_8, ((int32_t)(((RuntimeArray*)L_9)->max_length)), NULL);
		CompiledPassInfoU5BU5D_tABD910C36DB41F35B2DDE8BEF16F9C5F7E02B755* L_10 = V_2;
		__this->___m_Array = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Array), (void*)L_10);
		goto IL_004b;
	}

IL_003d:
	{
		int32_t L_11 = ___0_newCapacity;
		CompiledPassInfoU5BU5D_tABD910C36DB41F35B2DDE8BEF16F9C5F7E02B755* L_12 = (CompiledPassInfoU5BU5D_tABD910C36DB41F35B2DDE8BEF16F9C5F7E02B755*)(CompiledPassInfoU5BU5D_tABD910C36DB41F35B2DDE8BEF16F9C5F7E02B755*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (uint32_t)L_11);
		__this->___m_Array = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Array), (void*)L_12);
	}

IL_004b:
	{
	}

IL_004c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CompiledPassInfo_t7434C596A1EA90A428DAECAA3FFB87314BC84615* DynamicArray_1_get_Item_m5B1DBAB0205422DC339E985CCEBD396137011912_gshared (DynamicArray_1_tA7E05F444A8E75C3FD24B4EA81F57EA44E6D0F09* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	bool V_0 = false;
	CompiledPassInfo_t7434C596A1EA90A428DAECAA3FFB87314BC84615* V_1 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = DynamicArray_1_get_size_mDB3BA7CAAD59744057F0A5340186390AB7BCADD4_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		V_0 = (bool)((((int32_t)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_3 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		IndexOutOfRangeException__ctor_m270ED9671475CE680EEA8C62A7A43308AE4188EF(L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_0017:
	{
		CompiledPassInfoU5BU5D_tABD910C36DB41F35B2DDE8BEF16F9C5F7E02B755* L_4 = __this->___m_Array;
		int32_t L_5 = ___0_index;
		NullCheck(L_4);
		V_1 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)));
		goto IL_0026;
	}

IL_0026:
	{
		CompiledPassInfo_t7434C596A1EA90A428DAECAA3FFB87314BC84615* L_6 = V_1;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicArray_1_BumpVersion_m748232578BFEB3E8432F28D020973684DB67DCF0_gshared (DynamicArray_1_tA7E05F444A8E75C3FD24B4EA81F57EA44E6D0F09* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = DynamicArray_1_get_version_mE13995AAB373C4A2F1E9761CF4DB390AD2636FA4_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_0 = L_0;
		int32_t L_1 = V_0;
		DynamicArray_1_set_version_mBC13FCC0C9B7D12CF0E4B483A9FE71A993E32CAD_inline(__this, ((int32_t)il2cpp_codegen_add(L_1, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* EqualityComparer_1_get_Default_mF554877B669658FD6449F84AE369214855D0BC40_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* V_0 = NULL;
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_0 = ((EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m64D3D774E7DAF5FC0206DC26D9BA53BF70F1F93B(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t KeyValuePair_2_get_Key_mA52DA5B46E22917A435D0C0C421F21569A431CA6_gshared_inline (KeyValuePair_2_tAC06C9E6230AA7E6BDA2F07D910C3CBE2F36399B* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___key;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mB90CBD7B74DBF864C2727E0B04302F988F5FABF8_gshared_inline (KeyValuePair_2_tAC06C9E6230AA7E6BDA2F07D910C3CBE2F36399B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_0 = NULL;
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_0 = ((EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mD2FA619307513193746FBEB5AE522FB54E21B634(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1* EqualityComparer_1_get_Default_mB9A6897EE9C611611709E29230AB2F1D3D0BA6ED_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1* V_0 = NULL;
	{
		EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1* L_0 = ((EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m6D99876F3A0CC92388F04FA521AFA20EDAF66D25(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 KeyValuePair_2_get_Key_m301F56606347366561A21E8CCD7F3ACB3FFE4D78_gshared_inline (KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95* __this, const RuntimeMethod* method) 
{
	{
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_0 = __this->___key;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m4F875C153A42456E08401E2C5B26FFC6685F8569_gshared_inline (KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tD07CBC58F821582B79CB59B10264DC683DE3EE5C* EqualityComparer_1_get_Default_mA1371F43F9121608E1B210C692D2B369D8A50A37_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_tD07CBC58F821582B79CB59B10264DC683DE3EE5C* V_0 = NULL;
	{
		EqualityComparer_1_tD07CBC58F821582B79CB59B10264DC683DE3EE5C* L_0 = ((EqualityComparer_1_tD07CBC58F821582B79CB59B10264DC683DE3EE5C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_tD07CBC58F821582B79CB59B10264DC683DE3EE5C* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_tD07CBC58F821582B79CB59B10264DC683DE3EE5C* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m623688232473A6055EEF64837BC23D990D8623F6(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_tD07CBC58F821582B79CB59B10264DC683DE3EE5C* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_tD07CBC58F821582B79CB59B10264DC683DE3EE5C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_tD07CBC58F821582B79CB59B10264DC683DE3EE5C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_tD07CBC58F821582B79CB59B10264DC683DE3EE5C* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 KeyValuePair_2_get_Key_m3F1B623E23CD7E9A1FFFD495EF0CEE82C430D4EF_gshared_inline (KeyValuePair_2_t5262B590CA16F81E0E225FA2B90314261B2B4BC6* __this, const RuntimeMethod* method) 
{
	{
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_0 = __this->___key;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Value_m8C7FDFEFC87072A2142DBBB6F341652A8857E042_gshared_inline (KeyValuePair_2_t5262B590CA16F81E0E225FA2B90314261B2B4BC6* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* V_0 = NULL;
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_0 = ((EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m432C82F7354C37E610794C1DA866DFA7DAC9C35E(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 KeyValuePair_2_get_Key_m54125E9738B585176CC0EF0FF6F5FA5CB959B3A2_gshared_inline (KeyValuePair_2_t68435994E8A66E579434AAA75502B7B6137A7B2A* __this, const RuntimeMethod* method) 
{
	{
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_0 = __this->___key;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Value_m080BF3202ED3064344C3E33E105A6DF813970AFE_gshared_inline (KeyValuePair_2_t68435994E8A66E579434AAA75502B7B6137A7B2A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* EqualityComparer_1_get_Default_mC9B367997D70B8B5F9167227471B3D82603739F4_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* V_0 = NULL;
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_0 = ((EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m90CFBBC1492097465600B56ECF620CA25F1C6A73(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 KeyValuePair_2_get_Key_m204134D5294D0652A7BEC9251C7BDD29B507542A_gshared_inline (KeyValuePair_2_t5EA39A38B18A7FBA9D70D487DBE55714255FAAA6* __this, const RuntimeMethod* method) 
{
	{
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_0 = __this->___key;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC161A41DE956DE045D4BE7D7D3FAA6B97A774C4A_gshared_inline (KeyValuePair_2_t5EA39A38B18A7FBA9D70D487DBE55714255FAAA6* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t5849F328832B91CA688EA057CFD71225D81B0F72* EqualityComparer_1_get_Default_m74879556CBF575D38F11DBF18327D9D848353BD3_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t5849F328832B91CA688EA057CFD71225D81B0F72* V_0 = NULL;
	{
		EqualityComparer_1_t5849F328832B91CA688EA057CFD71225D81B0F72* L_0 = ((EqualityComparer_1_t5849F328832B91CA688EA057CFD71225D81B0F72_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t5849F328832B91CA688EA057CFD71225D81B0F72* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t5849F328832B91CA688EA057CFD71225D81B0F72* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m5D2542ADFFD3DA0F7BD1A6E60FD15B6C3D22A4CF(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t5849F328832B91CA688EA057CFD71225D81B0F72* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t5849F328832B91CA688EA057CFD71225D81B0F72_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t5849F328832B91CA688EA057CFD71225D81B0F72_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t5849F328832B91CA688EA057CFD71225D81B0F72* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574 KeyValuePair_2_get_Key_m68ECE6EFA3B43F6CABC5DA63109B69C09B5D3C48_gshared_inline (KeyValuePair_2_t4D486866736280C7A079662D170F5444C27E50C6* __this, const RuntimeMethod* method) 
{
	{
		SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574 L_0 = __this->___key;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mBC7C1BACDBEBA44E8D7BFD8D579336DCC37D6BB5_gshared_inline (KeyValuePair_2_t4D486866736280C7A079662D170F5444C27E50C6* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DynamicArray_1_set_size_m3409BF64253E0042A1047263A1B2BE4942C6F932_gshared_inline (DynamicArray_1_t7C64F5A74B7BA6F6B3589A766CADE3F59C6C7BCA* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CsizeU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DynamicArray_1_set_version_m39DBA15EA5D9ECF318BEA5E7A73A0708D4CCCD80_gshared_inline (DynamicArray_1_t7C64F5A74B7BA6F6B3589A766CADE3F59C6C7BCA* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CversionU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DynamicArray_1_get_size_m1B00C20A8CC4D62269585D16A58425D3F258836F_gshared_inline (DynamicArray_1_t7C64F5A74B7BA6F6B3589A766CADE3F59C6C7BCA* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CsizeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DynamicArray_1_get_version_mAD7540A9CABCD175B64E344ED8CCCA67497E7D62_gshared_inline (DynamicArray_1_t7C64F5A74B7BA6F6B3589A766CADE3F59C6C7BCA* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CversionU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DynamicArray_1_set_size_mFDBE699A74F4921E332C4199F04F64D5F77B67AD_gshared_inline (DynamicArray_1_t32FB886A5D922EE301E17A95EB958B1FA6B53A59* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CsizeU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DynamicArray_1_set_version_mFC9E3C8D3C2F91995DADCDF989156C60112C0BF4_gshared_inline (DynamicArray_1_t32FB886A5D922EE301E17A95EB958B1FA6B53A59* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CversionU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DynamicArray_1_get_size_m2D85CC818F77A4096E9474CA56125F7ED642F048_gshared_inline (DynamicArray_1_t32FB886A5D922EE301E17A95EB958B1FA6B53A59* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CsizeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DynamicArray_1_get_version_m03799785BC334E5B1D8EB06A5F254190FED07EFF_gshared_inline (DynamicArray_1_t32FB886A5D922EE301E17A95EB958B1FA6B53A59* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CversionU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DynamicArray_1_set_size_m352FBC4FC46492A70156C4D2EDA5F35FEAFCE206_gshared_inline (DynamicArray_1_tA7E05F444A8E75C3FD24B4EA81F57EA44E6D0F09* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CsizeU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DynamicArray_1_set_version_mBC13FCC0C9B7D12CF0E4B483A9FE71A993E32CAD_gshared_inline (DynamicArray_1_tA7E05F444A8E75C3FD24B4EA81F57EA44E6D0F09* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CversionU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DynamicArray_1_get_size_mDB3BA7CAAD59744057F0A5340186390AB7BCADD4_gshared_inline (DynamicArray_1_tA7E05F444A8E75C3FD24B4EA81F57EA44E6D0F09* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CsizeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DynamicArray_1_get_version_mE13995AAB373C4A2F1E9761CF4DB390AD2636FA4_gshared_inline (DynamicArray_1_tA7E05F444A8E75C3FD24B4EA81F57EA44E6D0F09* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CversionU3Ek__BackingField;
		return L_0;
	}
}
