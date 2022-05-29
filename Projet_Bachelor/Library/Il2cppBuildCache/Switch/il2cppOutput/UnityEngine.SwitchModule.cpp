#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct GenericVirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<System.Int32Enum>
struct Action_1_tF0FD284A49EB7135379250254D6B49FA84383C09;
// System.Action`1<UnityEngine.Switch.Notification/Message>
struct Action_1_t3B7FB1058DBC144045F9C7DAB357B8FDF8B21F8D;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.Switch.NetworkInterfaceWrapper/NetworkConnectedHandler
struct NetworkConnectedHandler_t84887C36CEF07E7EA46BF27F72741D1FD8BD1B40;
// UnityEngine.Switch.SwitchVideoPlayer/MovieEventDelegate
struct MovieEventDelegate_tD07661A9E133103BD049F1311A8E0DB7BE5F4637;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t3B7FB1058DBC144045F9C7DAB357B8FDF8B21F8D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Event_t9D49914A852AEA98A09415EA4E9E601BDC75B9F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MovieEventDelegate_tD07661A9E133103BD049F1311A8E0DB7BE5F4637_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkConnectedHandler_t84887C36CEF07E7EA46BF27F72741D1FD8BD1B40_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkInterfaceWrapper_tFC0BE7E64BF2EDC9B4840FF31B825C474A0B6D35_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Notification_tD22929E4DC4EB1B5090794E27C44593ACE949550_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SwitchVideoPlayer_t71422F31E678EE03128173B3B3A4B33BD375B8E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mD13DAC72448F3344BBAEA0E791575E24B3A2FFDD_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tD74E88DF1A155BAC8008908A42B0FAFF943EA448 
{
public:

public:
};


// System.Object


// UnityEngine.Switch.Applet
struct Applet_tD00598CF8E9122BF4D60E6405A967A83F7DDA831  : public RuntimeObject
{
public:

public:
};

struct Il2CppArrayBounds;

// System.Array


// UnityEngine.Switch.NetworkInterfaceWrapper
struct NetworkInterfaceWrapper_tFC0BE7E64BF2EDC9B4840FF31B825C474A0B6D35  : public RuntimeObject
{
public:

public:
};

struct NetworkInterfaceWrapper_tFC0BE7E64BF2EDC9B4840FF31B825C474A0B6D35_StaticFields
{
public:
	// UnityEngine.Switch.NetworkInterfaceWrapper/NetworkConnectedHandler UnityEngine.Switch.NetworkInterfaceWrapper::_networkConnected
	NetworkConnectedHandler_t84887C36CEF07E7EA46BF27F72741D1FD8BD1B40 * ____networkConnected_0;

public:
	inline static int32_t get_offset_of__networkConnected_0() { return static_cast<int32_t>(offsetof(NetworkInterfaceWrapper_tFC0BE7E64BF2EDC9B4840FF31B825C474A0B6D35_StaticFields, ____networkConnected_0)); }
	inline NetworkConnectedHandler_t84887C36CEF07E7EA46BF27F72741D1FD8BD1B40 * get__networkConnected_0() const { return ____networkConnected_0; }
	inline NetworkConnectedHandler_t84887C36CEF07E7EA46BF27F72741D1FD8BD1B40 ** get_address_of__networkConnected_0() { return &____networkConnected_0; }
	inline void set__networkConnected_0(NetworkConnectedHandler_t84887C36CEF07E7EA46BF27F72741D1FD8BD1B40 * value)
	{
		____networkConnected_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____networkConnected_0), (void*)value);
	}
};


// UnityEngine.Switch.Notification
struct Notification_tD22929E4DC4EB1B5090794E27C44593ACE949550  : public RuntimeObject
{
public:

public:
};

struct Notification_tD22929E4DC4EB1B5090794E27C44593ACE949550_StaticFields
{
public:
	// System.Action`1<UnityEngine.Switch.Notification/Message> UnityEngine.Switch.Notification::notificationMessageReceived
	Action_1_t3B7FB1058DBC144045F9C7DAB357B8FDF8B21F8D * ___notificationMessageReceived_0;

public:
	inline static int32_t get_offset_of_notificationMessageReceived_0() { return static_cast<int32_t>(offsetof(Notification_tD22929E4DC4EB1B5090794E27C44593ACE949550_StaticFields, ___notificationMessageReceived_0)); }
	inline Action_1_t3B7FB1058DBC144045F9C7DAB357B8FDF8B21F8D * get_notificationMessageReceived_0() const { return ___notificationMessageReceived_0; }
	inline Action_1_t3B7FB1058DBC144045F9C7DAB357B8FDF8B21F8D ** get_address_of_notificationMessageReceived_0() { return &___notificationMessageReceived_0; }
	inline void set_notificationMessageReceived_0(Action_1_t3B7FB1058DBC144045F9C7DAB357B8FDF8B21F8D * value)
	{
		___notificationMessageReceived_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___notificationMessageReceived_0), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Int32Enum
struct Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Switch.SwitchVideoPlayer
struct SwitchVideoPlayer_t71422F31E678EE03128173B3B3A4B33BD375B8E6  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Switch.SwitchVideoPlayer::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Switch.SwitchVideoPlayer/MovieEventDelegate UnityEngine.Switch.SwitchVideoPlayer::m_MovieEvent
	MovieEventDelegate_tD07661A9E133103BD049F1311A8E0DB7BE5F4637 * ___m_MovieEvent_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(SwitchVideoPlayer_t71422F31E678EE03128173B3B3A4B33BD375B8E6, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_MovieEvent_1() { return static_cast<int32_t>(offsetof(SwitchVideoPlayer_t71422F31E678EE03128173B3B3A4B33BD375B8E6, ___m_MovieEvent_1)); }
	inline MovieEventDelegate_tD07661A9E133103BD049F1311A8E0DB7BE5F4637 * get_m_MovieEvent_1() const { return ___m_MovieEvent_1; }
	inline MovieEventDelegate_tD07661A9E133103BD049F1311A8E0DB7BE5F4637 ** get_address_of_m_MovieEvent_1() { return &___m_MovieEvent_1; }
	inline void set_m_MovieEvent_1(MovieEventDelegate_tD07661A9E133103BD049F1311A8E0DB7BE5F4637 * value)
	{
		___m_MovieEvent_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MovieEvent_1), (void*)value);
	}
};

struct SwitchVideoPlayer_t71422F31E678EE03128173B3B3A4B33BD375B8E6_StaticFields
{
public:
	// UnityEngine.Switch.SwitchVideoPlayer/MovieEventDelegate UnityEngine.Switch.SwitchVideoPlayer::OnMovieEvent
	MovieEventDelegate_tD07661A9E133103BD049F1311A8E0DB7BE5F4637 * ___OnMovieEvent_2;

public:
	inline static int32_t get_offset_of_OnMovieEvent_2() { return static_cast<int32_t>(offsetof(SwitchVideoPlayer_t71422F31E678EE03128173B3B3A4B33BD375B8E6_StaticFields, ___OnMovieEvent_2)); }
	inline MovieEventDelegate_tD07661A9E133103BD049F1311A8E0DB7BE5F4637 * get_OnMovieEvent_2() const { return ___OnMovieEvent_2; }
	inline MovieEventDelegate_tD07661A9E133103BD049F1311A8E0DB7BE5F4637 ** get_address_of_OnMovieEvent_2() { return &___OnMovieEvent_2; }
	inline void set_OnMovieEvent_2(MovieEventDelegate_tD07661A9E133103BD049F1311A8E0DB7BE5F4637 * value)
	{
		___OnMovieEvent_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnMovieEvent_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Switch.SwitchVideoPlayer
struct SwitchVideoPlayer_t71422F31E678EE03128173B3B3A4B33BD375B8E6_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_MovieEvent_1;
};
// Native definition for COM marshalling of UnityEngine.Switch.SwitchVideoPlayer
struct SwitchVideoPlayer_t71422F31E678EE03128173B3B3A4B33BD375B8E6_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_MovieEvent_1;
};

// UnityEngine.Switch.NetworkInterfaceWrapper/NetworkConnectedResult
struct NetworkConnectedResult_t4530D521DE286412E3E791CEF5DCC163F8ED84CE 
{
public:
	// System.Int32 UnityEngine.Switch.NetworkInterfaceWrapper/NetworkConnectedResult::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NetworkConnectedResult_t4530D521DE286412E3E791CEF5DCC163F8ED84CE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Switch.Notification/FocusHandlingMode
struct FocusHandlingMode_tCC18AFABBA0919422CCD85C1B31B7171E49E4336 
{
public:
	// System.Int32 UnityEngine.Switch.Notification/FocusHandlingMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FocusHandlingMode_tCC18AFABBA0919422CCD85C1B31B7171E49E4336, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Switch.Notification/FocusState
struct FocusState_t3C93551563448CD2FBA56E52825E75174AA3FE31 
{
public:
	// System.Int32 UnityEngine.Switch.Notification/FocusState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FocusState_t3C93551563448CD2FBA56E52825E75174AA3FE31, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Switch.Notification/Message
struct Message_t10467E20E559575E64839EC5A2B2C3F504E16D55 
{
public:
	// System.Int32 UnityEngine.Switch.Notification/Message::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Message_t10467E20E559575E64839EC5A2B2C3F504E16D55, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Switch.SwitchVideoPlayer/Event
struct Event_t9D49914A852AEA98A09415EA4E9E601BDC75B9F4 
{
public:
	// System.Int32 UnityEngine.Switch.SwitchVideoPlayer/Event::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Event_t9D49914A852AEA98A09415EA4E9E601BDC75B9F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.Action`1<UnityEngine.Switch.Notification/Message>
struct Action_1_t3B7FB1058DBC144045F9C7DAB357B8FDF8B21F8D  : public MulticastDelegate_t
{
public:

public:
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Switch.NetworkInterfaceWrapper/NetworkConnectedHandler
struct NetworkConnectedHandler_t84887C36CEF07E7EA46BF27F72741D1FD8BD1B40  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Switch.SwitchVideoPlayer/MovieEventDelegate
struct MovieEventDelegate_tD07661A9E133103BD049F1311A8E0DB7BE5F4637  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Action`1<System.Int32Enum>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m2652E72792A278523D6D8962CBBEA84177BB4556_gshared (Action_1_tF0FD284A49EB7135379250254D6B49FA84383C09 * __this, int32_t ___obj0, const RuntimeMethod* method);

// System.Boolean UnityEngine.Switch.NetworkInterfaceWrapper::EnterNetworkConnecting(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkInterfaceWrapper_EnterNetworkConnecting_mAAE64A9B629DE605061F1C73334B4649471F4D71 (bool ___isLocalNetworkMode0, bool ___reportIfUnavailable1, const RuntimeMethod* method);
// UnityEngine.Switch.NetworkInterfaceWrapper/NetworkConnectedResult UnityEngine.Switch.NetworkInterfaceWrapper/NetworkConnectedHandler::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkConnectedHandler_Invoke_mCFBDF852BC2B988B66FCD2D115EBCB8DF05DBE2B (NetworkConnectedHandler_t84887C36CEF07E7EA46BF27F72741D1FD8BD1B40 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Switch.NetworkInterfaceWrapper::add__networkConnected(UnityEngine.Switch.NetworkInterfaceWrapper/NetworkConnectedHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkInterfaceWrapper_add__networkConnected_m7420F219DB9347614183EAD80F689A89A4F4A438 (NetworkConnectedHandler_t84887C36CEF07E7EA46BF27F72741D1FD8BD1B40 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Switch.NetworkInterfaceWrapper::SetNetworkConnectedEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkInterfaceWrapper_SetNetworkConnectedEnabled_m5E950D5D3F1536F4270B92A3FD187794D4E673B1 (bool ___isEnabled0, const RuntimeMethod* method);
// System.Void UnityEngine.Switch.NetworkInterfaceWrapper::remove__networkConnected(UnityEngine.Switch.NetworkInterfaceWrapper/NetworkConnectedHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkInterfaceWrapper_remove__networkConnected_m655259B72735A40D9BD65F00CF3D0073C7D8E1F5 (NetworkConnectedHandler_t84887C36CEF07E7EA46BF27F72741D1FD8BD1B40 * ___value0, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Switch.Notification::SetFocusHandlingMode_Internal(UnityEngine.Switch.Notification/FocusHandlingMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Notification_SetFocusHandlingMode_Internal_m13C4D5F0C9C409F7556F845D55C56985118CA8B6 (int32_t ___mode0, const RuntimeMethod* method);
// UnityEngine.Switch.Notification/FocusState UnityEngine.Switch.Notification::GetCurrentFocusState_Internal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Notification_GetCurrentFocusState_Internal_m4AA8C69C1DB55FAB37EF8CF893A881BCE8AFE4F2 (const RuntimeMethod* method);
// System.Void UnityEngine.Switch.Notification::SetResumeNotificationEnabled_Internal(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Notification_SetResumeNotificationEnabled_Internal_m2966CEBC55C22B3F5A246179AFC9F82CDBF658DD (bool ___enabled0, const RuntimeMethod* method);
// System.Void UnityEngine.Switch.Notification::EnterExitRequestHandlingSection_Internal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Notification_EnterExitRequestHandlingSection_Internal_m05F8824D469BB2828EA8D29D4E8D6A141CE94398 (const RuntimeMethod* method);
// System.Void UnityEngine.Switch.Notification::LeaveExitRequestHandlingSection_Internal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Notification_LeaveExitRequestHandlingSection_Internal_m75119D9B7FFB344C7C9F4C7B64D8D4B5A71CD12E (const RuntimeMethod* method);
// System.Void UnityEngine.Switch.Notification::SetOperationModeChangedNotificationEnabled_Internal(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Notification_SetOperationModeChangedNotificationEnabled_Internal_m0CD65B2C8FB2F313CB068138599FF973EB1BB72F (bool ___enabled0, const RuntimeMethod* method);
// System.Void UnityEngine.Switch.Notification::SetPerformanceModeChangedNotificationEnabled_Internal(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Notification_SetPerformanceModeChangedNotificationEnabled_Internal_m2BF8D624D036EC1AFDDFC5F02A83C7EF2AC1B8EC (bool ___enabled0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.Switch.Notification/Message>::Invoke(!0)
inline void Action_1_Invoke_mD13DAC72448F3344BBAEA0E791575E24B3A2FFDD (Action_1_t3B7FB1058DBC144045F9C7DAB357B8FDF8B21F8D * __this, int32_t ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t3B7FB1058DBC144045F9C7DAB357B8FDF8B21F8D *, int32_t, const RuntimeMethod*))Action_1_Invoke_m2652E72792A278523D6D8962CBBEA84177BB4556_gshared)(__this, ___obj0, method);
}
// System.Void UnityEngine.Switch.SwitchVideoPlayer/MovieEventDelegate::Invoke(UnityEngine.Switch.SwitchVideoPlayer/Event)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovieEventDelegate_Invoke_mEC04404CBF00A635F5753E1560D0522EC09B0AAB (MovieEventDelegate_tD07661A9E133103BD049F1311A8E0DB7BE5F4637 * __this, int32_t ___eventtype0, const RuntimeMethod* method);
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
// System.Void UnityEngine.Switch.Applet::Begin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Applet_Begin_mD812F1D78D041ACCD6C45D17C7C3623B31CBB677 (const RuntimeMethod* method)
{
	typedef void (*Applet_Begin_mD812F1D78D041ACCD6C45D17C7C3623B31CBB677_ftn) ();
	static Applet_Begin_mD812F1D78D041ACCD6C45D17C7C3623B31CBB677_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Applet_Begin_mD812F1D78D041ACCD6C45D17C7C3623B31CBB677_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Switch.Applet::Begin()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.Switch.Applet::End()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Applet_End_m17C226ECB7CAE834877655BC5BC9B28A7E63504F (const RuntimeMethod* method)
{
	typedef void (*Applet_End_m17C226ECB7CAE834877655BC5BC9B28A7E63504F_ftn) ();
	static Applet_End_m17C226ECB7CAE834877655BC5BC9B28A7E63504F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Applet_End_m17C226ECB7CAE834877655BC5BC9B28A7E63504F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Switch.Applet::End()");
	_il2cpp_icall_func();
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.Switch.NetworkInterfaceWrapper::EnterNetworkConnecting(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkInterfaceWrapper_EnterNetworkConnecting_mC115F883A6E8A94212D4AE45B1FD316888308702 (bool ___isLocalNetworkMode0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = ___isLocalNetworkMode0;
		bool L_1;
		L_1 = NetworkInterfaceWrapper_EnterNetworkConnecting_mAAE64A9B629DE605061F1C73334B4649471F4D71(L_0, (bool)0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UnityEngine.Switch.NetworkInterfaceWrapper::EnterNetworkConnecting(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkInterfaceWrapper_EnterNetworkConnecting_mAAE64A9B629DE605061F1C73334B4649471F4D71 (bool ___isLocalNetworkMode0, bool ___reportIfUnavailable1, const RuntimeMethod* method)
{
	typedef bool (*NetworkInterfaceWrapper_EnterNetworkConnecting_mAAE64A9B629DE605061F1C73334B4649471F4D71_ftn) (bool, bool);
	static NetworkInterfaceWrapper_EnterNetworkConnecting_mAAE64A9B629DE605061F1C73334B4649471F4D71_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NetworkInterfaceWrapper_EnterNetworkConnecting_mAAE64A9B629DE605061F1C73334B4649471F4D71_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Switch.NetworkInterfaceWrapper::EnterNetworkConnecting(System.Boolean,System.Boolean)");
	bool icallRetVal = _il2cpp_icall_func(___isLocalNetworkMode0, ___reportIfUnavailable1);
	return icallRetVal;
}
// System.Boolean UnityEngine.Switch.NetworkInterfaceWrapper::WeakEnterNetworkConnecting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkInterfaceWrapper_WeakEnterNetworkConnecting_mA292FC0160A4661FA2B6AE03C50C5E4DFFE1371A (const RuntimeMethod* method)
{
	typedef bool (*NetworkInterfaceWrapper_WeakEnterNetworkConnecting_mA292FC0160A4661FA2B6AE03C50C5E4DFFE1371A_ftn) ();
	static NetworkInterfaceWrapper_WeakEnterNetworkConnecting_mA292FC0160A4661FA2B6AE03C50C5E4DFFE1371A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NetworkInterfaceWrapper_WeakEnterNetworkConnecting_mA292FC0160A4661FA2B6AE03C50C5E4DFFE1371A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Switch.NetworkInterfaceWrapper::WeakEnterNetworkConnecting()");
	bool icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
// System.Void UnityEngine.Switch.NetworkInterfaceWrapper::LeaveNetworkConnecting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkInterfaceWrapper_LeaveNetworkConnecting_m6E559FDD63B990C84B77CF2853D934D81078AE4D (const RuntimeMethod* method)
{
	typedef void (*NetworkInterfaceWrapper_LeaveNetworkConnecting_m6E559FDD63B990C84B77CF2853D934D81078AE4D_ftn) ();
	static NetworkInterfaceWrapper_LeaveNetworkConnecting_m6E559FDD63B990C84B77CF2853D934D81078AE4D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NetworkInterfaceWrapper_LeaveNetworkConnecting_m6E559FDD63B990C84B77CF2853D934D81078AE4D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Switch.NetworkInterfaceWrapper::LeaveNetworkConnecting()");
	_il2cpp_icall_func();
}
// System.Boolean UnityEngine.Switch.NetworkInterfaceWrapper::IsNetworkConnecting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkInterfaceWrapper_IsNetworkConnecting_m7BFEEFF55F548E47E41D21481CE484A7F4712F7E (const RuntimeMethod* method)
{
	typedef bool (*NetworkInterfaceWrapper_IsNetworkConnecting_m7BFEEFF55F548E47E41D21481CE484A7F4712F7E_ftn) ();
	static NetworkInterfaceWrapper_IsNetworkConnecting_m7BFEEFF55F548E47E41D21481CE484A7F4712F7E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NetworkInterfaceWrapper_IsNetworkConnecting_m7BFEEFF55F548E47E41D21481CE484A7F4712F7E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Switch.NetworkInterfaceWrapper::IsNetworkConnecting()");
	bool icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
// System.Void UnityEngine.Switch.NetworkInterfaceWrapper::WaitForNetworkConnecting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkInterfaceWrapper_WaitForNetworkConnecting_m8E47B668002745A18B48EDA63F5F95E13B4B939A (const RuntimeMethod* method)
{
	typedef void (*NetworkInterfaceWrapper_WaitForNetworkConnecting_m8E47B668002745A18B48EDA63F5F95E13B4B939A_ftn) ();
	static NetworkInterfaceWrapper_WaitForNetworkConnecting_m8E47B668002745A18B48EDA63F5F95E13B4B939A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NetworkInterfaceWrapper_WaitForNetworkConnecting_m8E47B668002745A18B48EDA63F5F95E13B4B939A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Switch.NetworkInterfaceWrapper::WaitForNetworkConnecting()");
	_il2cpp_icall_func();
}
// System.Boolean UnityEngine.Switch.NetworkInterfaceWrapper::IsNetworkAccepted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkInterfaceWrapper_IsNetworkAccepted_m63443E72328A47D333EA3AD488569D4D714A92A1 (const RuntimeMethod* method)
{
	typedef bool (*NetworkInterfaceWrapper_IsNetworkAccepted_m63443E72328A47D333EA3AD488569D4D714A92A1_ftn) ();
	static NetworkInterfaceWrapper_IsNetworkAccepted_m63443E72328A47D333EA3AD488569D4D714A92A1_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NetworkInterfaceWrapper_IsNetworkAccepted_m63443E72328A47D333EA3AD488569D4D714A92A1_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Switch.NetworkInterfaceWrapper::IsNetworkAccepted()");
	bool icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
// System.Boolean UnityEngine.Switch.NetworkInterfaceWrapper::IsNetworkFinished()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkInterfaceWrapper_IsNetworkFinished_mFEDD116F11193688AFF3E02EDF99A6440DBE692D (const RuntimeMethod* method)
{
	typedef bool (*NetworkInterfaceWrapper_IsNetworkFinished_mFEDD116F11193688AFF3E02EDF99A6440DBE692D_ftn) ();
	static NetworkInterfaceWrapper_IsNetworkFinished_mFEDD116F11193688AFF3E02EDF99A6440DBE692D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NetworkInterfaceWrapper_IsNetworkFinished_mFEDD116F11193688AFF3E02EDF99A6440DBE692D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Switch.NetworkInterfaceWrapper::IsNetworkFinished()");
	bool icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
// System.Int32 UnityEngine.Switch.NetworkInterfaceWrapper::GetNetworkReferenceCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkInterfaceWrapper_GetNetworkReferenceCount_m7864FAD5E8C9309DAF22C29160F305E9ADBEE4E8 (const RuntimeMethod* method)
{
	typedef int32_t (*NetworkInterfaceWrapper_GetNetworkReferenceCount_m7864FAD5E8C9309DAF22C29160F305E9ADBEE4E8_ftn) ();
	static NetworkInterfaceWrapper_GetNetworkReferenceCount_m7864FAD5E8C9309DAF22C29160F305E9ADBEE4E8_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NetworkInterfaceWrapper_GetNetworkReferenceCount_m7864FAD5E8C9309DAF22C29160F305E9ADBEE4E8_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Switch.NetworkInterfaceWrapper::GetNetworkReferenceCount()");
	int32_t icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
// System.Boolean UnityEngine.Switch.NetworkInterfaceWrapper::IsNetworkAvailable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkInterfaceWrapper_IsNetworkAvailable_mB3FD33EECAB559B2E7C2489E4E3F2823E0CC52C3 (const RuntimeMethod* method)
{
	typedef bool (*NetworkInterfaceWrapper_IsNetworkAvailable_mB3FD33EECAB559B2E7C2489E4E3F2823E0CC52C3_ftn) ();
	static NetworkInterfaceWrapper_IsNetworkAvailable_mB3FD33EECAB559B2E7C2489E4E3F2823E0CC52C3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NetworkInterfaceWrapper_IsNetworkAvailable_mB3FD33EECAB559B2E7C2489E4E3F2823E0CC52C3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Switch.NetworkInterfaceWrapper::IsNetworkAvailable()");
	bool icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
// System.Boolean UnityEngine.Switch.NetworkInterfaceWrapper::IsNetworkConnectingOnBackground()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkInterfaceWrapper_IsNetworkConnectingOnBackground_mBE1DB5B43D156E63FA79DB128D0CF5723348AE4B (const RuntimeMethod* method)
{
	typedef bool (*NetworkInterfaceWrapper_IsNetworkConnectingOnBackground_mBE1DB5B43D156E63FA79DB128D0CF5723348AE4B_ftn) ();
	static NetworkInterfaceWrapper_IsNetworkConnectingOnBackground_mBE1DB5B43D156E63FA79DB128D0CF5723348AE4B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NetworkInterfaceWrapper_IsNetworkConnectingOnBackground_mBE1DB5B43D156E63FA79DB128D0CF5723348AE4B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Switch.NetworkInterfaceWrapper::IsNetworkConnectingOnBackground()");
	bool icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
// System.Void UnityEngine.Switch.NetworkInterfaceWrapper::SetNetworkConnectingOnBackground(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkInterfaceWrapper_SetNetworkConnectingOnBackground_m7DF7DE6EAB3FE257E7C56931704E62F780EECBF5 (bool ___isBackground0, const RuntimeMethod* method)
{
	typedef void (*NetworkInterfaceWrapper_SetNetworkConnectingOnBackground_m7DF7DE6EAB3FE257E7C56931704E62F780EECBF5_ftn) (bool);
	static NetworkInterfaceWrapper_SetNetworkConnectingOnBackground_m7DF7DE6EAB3FE257E7C56931704E62F780EECBF5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NetworkInterfaceWrapper_SetNetworkConnectingOnBackground_m7DF7DE6EAB3FE257E7C56931704E62F780EECBF5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Switch.NetworkInterfaceWrapper::SetNetworkConnectingOnBackground(System.Boolean)");
	_il2cpp_icall_func(___isBackground0);
}
// System.Void UnityEngine.Switch.NetworkInterfaceWrapper::SetNetworkConnectedEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkInterfaceWrapper_SetNetworkConnectedEnabled_m5E950D5D3F1536F4270B92A3FD187794D4E673B1 (bool ___isEnabled0, const RuntimeMethod* method)
{
	typedef void (*NetworkInterfaceWrapper_SetNetworkConnectedEnabled_m5E950D5D3F1536F4270B92A3FD187794D4E673B1_ftn) (bool);
	static NetworkInterfaceWrapper_SetNetworkConnectedEnabled_m5E950D5D3F1536F4270B92A3FD187794D4E673B1_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NetworkInterfaceWrapper_SetNetworkConnectedEnabled_m5E950D5D3F1536F4270B92A3FD187794D4E673B1_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Switch.NetworkInterfaceWrapper::SetNetworkConnectedEnabled(System.Boolean)");
	_il2cpp_icall_func(___isEnabled0);
}
// System.Int32 UnityEngine.Switch.NetworkInterfaceWrapper::InvokeNetworkConnected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkInterfaceWrapper_InvokeNetworkConnected_m972CB25BEB0E7A8BDA42192382DC0B87FDD92F06 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkInterfaceWrapper_tFC0BE7E64BF2EDC9B4840FF31B825C474A0B6D35_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		NetworkConnectedHandler_t84887C36CEF07E7EA46BF27F72741D1FD8BD1B40 * L_0 = ((NetworkInterfaceWrapper_tFC0BE7E64BF2EDC9B4840FF31B825C474A0B6D35_StaticFields*)il2cpp_codegen_static_fields_for(NetworkInterfaceWrapper_tFC0BE7E64BF2EDC9B4840FF31B825C474A0B6D35_il2cpp_TypeInfo_var))->get__networkConnected_0();
		V_0 = (bool)((!(((RuntimeObject*)(NetworkConnectedHandler_t84887C36CEF07E7EA46BF27F72741D1FD8BD1B40 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		NetworkConnectedHandler_t84887C36CEF07E7EA46BF27F72741D1FD8BD1B40 * L_2 = ((NetworkInterfaceWrapper_tFC0BE7E64BF2EDC9B4840FF31B825C474A0B6D35_StaticFields*)il2cpp_codegen_static_fields_for(NetworkInterfaceWrapper_tFC0BE7E64BF2EDC9B4840FF31B825C474A0B6D35_il2cpp_TypeInfo_var))->get__networkConnected_0();
		int32_t L_3;
		L_3 = NetworkConnectedHandler_Invoke_mCFBDF852BC2B988B66FCD2D115EBCB8DF05DBE2B(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		goto IL_001f;
	}

IL_001b:
	{
		V_1 = 1;
		goto IL_001f;
	}

IL_001f:
	{
		int32_t L_4 = V_1;
		return L_4;
	}
}
// System.Void UnityEngine.Switch.NetworkInterfaceWrapper::add_networkConnected(UnityEngine.Switch.NetworkInterfaceWrapper/NetworkConnectedHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkInterfaceWrapper_add_networkConnected_mAF99E159FB0300A9042845737CA045F1A0CFFA5E (NetworkConnectedHandler_t84887C36CEF07E7EA46BF27F72741D1FD8BD1B40 * ___value0, const RuntimeMethod* method)
{
	{
		NetworkConnectedHandler_t84887C36CEF07E7EA46BF27F72741D1FD8BD1B40 * L_0 = ___value0;
		NetworkInterfaceWrapper_add__networkConnected_m7420F219DB9347614183EAD80F689A89A4F4A438(L_0, /*hidden argument*/NULL);
		NetworkInterfaceWrapper_SetNetworkConnectedEnabled_m5E950D5D3F1536F4270B92A3FD187794D4E673B1((bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Switch.NetworkInterfaceWrapper::remove_networkConnected(UnityEngine.Switch.NetworkInterfaceWrapper/NetworkConnectedHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkInterfaceWrapper_remove_networkConnected_mF2DD998A0802640858109785B788404E680976C8 (NetworkConnectedHandler_t84887C36CEF07E7EA46BF27F72741D1FD8BD1B40 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkInterfaceWrapper_tFC0BE7E64BF2EDC9B4840FF31B825C474A0B6D35_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		NetworkConnectedHandler_t84887C36CEF07E7EA46BF27F72741D1FD8BD1B40 * L_0 = ___value0;
		NetworkInterfaceWrapper_remove__networkConnected_m655259B72735A40D9BD65F00CF3D0073C7D8E1F5(L_0, /*hidden argument*/NULL);
		NetworkConnectedHandler_t84887C36CEF07E7EA46BF27F72741D1FD8BD1B40 * L_1 = ((NetworkInterfaceWrapper_tFC0BE7E64BF2EDC9B4840FF31B825C474A0B6D35_StaticFields*)il2cpp_codegen_static_fields_for(NetworkInterfaceWrapper_tFC0BE7E64BF2EDC9B4840FF31B825C474A0B6D35_il2cpp_TypeInfo_var))->get__networkConnected_0();
		V_0 = (bool)((((RuntimeObject*)(NetworkConnectedHandler_t84887C36CEF07E7EA46BF27F72741D1FD8BD1B40 *)L_1) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		NetworkInterfaceWrapper_SetNetworkConnectedEnabled_m5E950D5D3F1536F4270B92A3FD187794D4E673B1((bool)0, /*hidden argument*/NULL);
	}

IL_001d:
	{
		return;
	}
}
// System.Void UnityEngine.Switch.NetworkInterfaceWrapper::add__networkConnected(UnityEngine.Switch.NetworkInterfaceWrapper/NetworkConnectedHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkInterfaceWrapper_add__networkConnected_m7420F219DB9347614183EAD80F689A89A4F4A438 (NetworkConnectedHandler_t84887C36CEF07E7EA46BF27F72741D1FD8BD1B40 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkConnectedHandler_t84887C36CEF07E7EA46BF27F72741D1FD8BD1B40_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkInterfaceWrapper_tFC0BE7E64BF2EDC9B4840FF31B825C474A0B6D35_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NetworkConnectedHandler_t84887C36CEF07E7EA46BF27F72741D1FD8BD1B40 * V_0 = NULL;
	NetworkConnectedHandler_t84887C36CEF07E7EA46BF27F72741D1FD8BD1B40 * V_1 = NULL;
	NetworkConnectedHandler_t84887C36CEF07E7EA46BF27F72741D1FD8BD1B40 * V_2 = NULL;
	{
		NetworkConnectedHandler_t84887C36CEF07E7EA46BF27F72741D1FD8BD1B40 * L_0 = ((NetworkInterfaceWrapper_tFC0BE7E64BF2EDC9B4840FF31B825C474A0B6D35_StaticFields*)il2cpp_codegen_static_fields_for(NetworkInterfaceWrapper_tFC0BE7E64BF2EDC9B4840FF31B825C474A0B6D35_il2cpp_TypeInfo_var))->get__networkConnected_0();
		V_0 = L_0;
	}

IL_0006:
	{
		NetworkConnectedHandler_t84887C36CEF07E7EA46BF27F72741D1FD8BD1B40 * L_1 = V_0;
		V_1 = L_1;
		NetworkConnectedHandler_t84887C36CEF07E7EA46BF27F72741D1FD8BD1B40 * L_2 = V_1;
		NetworkConnectedHandler_t84887C36CEF07E7EA46BF27F72741D1FD8BD1B40 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((NetworkConnectedHandler_t84887C36CEF07E7EA46BF27F72741D1FD8BD1B40 *)CastclassSealed((RuntimeObject*)L_4, NetworkConnectedHandler_t84887C36CEF07E7EA46BF27F72741D1FD8BD1B40_il2cpp_TypeInfo_var));
		NetworkConnectedHandler_t84887C36CEF07E7EA46BF27F72741D1FD8BD1B40 * L_5 = V_2;
		NetworkConnectedHandler_t84887C36CEF07E7EA46BF27F72741D1FD8BD1B40 * L_6 = V_1;
		NetworkConnectedHandler_t84887C36CEF07E7EA46BF27F72741D1FD8BD1B40 * L_7;
		L_7 = InterlockedCompareExchangeImpl<NetworkConnectedHandler_t84887C36CEF07E7EA46BF27F72741D1FD8BD1B40 *>((NetworkConnectedHandler_t84887C36CEF07E7EA46BF27F72741D1FD8BD1B40 **)(((NetworkInterfaceWrapper_tFC0BE7E64BF2EDC9B4840FF31B825C474A0B6D35_StaticFields*)il2cpp_codegen_static_fields_for(NetworkInterfaceWrapper_tFC0BE7E64BF2EDC9B4840FF31B825C474A0B6D35_il2cpp_TypeInfo_var))->get_address_of__networkConnected_0()), L_5, L_6);
		V_0 = L_7;
		NetworkConnectedHandler_t84887C36CEF07E7EA46BF27F72741D1FD8BD1B40 * L_8 = V_0;
		NetworkConnectedHandler_t84887C36CEF07E7EA46BF27F72741D1FD8BD1B40 * L_9 = V_1;
		if ((!(((RuntimeObject*)(NetworkConnectedHandler_t84887C36CEF07E7EA46BF27F72741D1FD8BD1B40 *)L_8) == ((RuntimeObject*)(NetworkConnectedHandler_t84887C36CEF07E7EA46BF27F72741D1FD8BD1B40 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Switch.NetworkInterfaceWrapper::remove__networkConnected(UnityEngine.Switch.NetworkInterfaceWrapper/NetworkConnectedHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkInterfaceWrapper_remove__networkConnected_m655259B72735A40D9BD65F00CF3D0073C7D8E1F5 (NetworkConnectedHandler_t84887C36CEF07E7EA46BF27F72741D1FD8BD1B40 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkConnectedHandler_t84887C36CEF07E7EA46BF27F72741D1FD8BD1B40_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkInterfaceWrapper_tFC0BE7E64BF2EDC9B4840FF31B825C474A0B6D35_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NetworkConnectedHandler_t84887C36CEF07E7EA46BF27F72741D1FD8BD1B40 * V_0 = NULL;
	NetworkConnectedHandler_t84887C36CEF07E7EA46BF27F72741D1FD8BD1B40 * V_1 = NULL;
	NetworkConnectedHandler_t84887C36CEF07E7EA46BF27F72741D1FD8BD1B40 * V_2 = NULL;
	{
		NetworkConnectedHandler_t84887C36CEF07E7EA46BF27F72741D1FD8BD1B40 * L_0 = ((NetworkInterfaceWrapper_tFC0BE7E64BF2EDC9B4840FF31B825C474A0B6D35_StaticFields*)il2cpp_codegen_static_fields_for(NetworkInterfaceWrapper_tFC0BE7E64BF2EDC9B4840FF31B825C474A0B6D35_il2cpp_TypeInfo_var))->get__networkConnected_0();
		V_0 = L_0;
	}

IL_0006:
	{
		NetworkConnectedHandler_t84887C36CEF07E7EA46BF27F72741D1FD8BD1B40 * L_1 = V_0;
		V_1 = L_1;
		NetworkConnectedHandler_t84887C36CEF07E7EA46BF27F72741D1FD8BD1B40 * L_2 = V_1;
		NetworkConnectedHandler_t84887C36CEF07E7EA46BF27F72741D1FD8BD1B40 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((NetworkConnectedHandler_t84887C36CEF07E7EA46BF27F72741D1FD8BD1B40 *)CastclassSealed((RuntimeObject*)L_4, NetworkConnectedHandler_t84887C36CEF07E7EA46BF27F72741D1FD8BD1B40_il2cpp_TypeInfo_var));
		NetworkConnectedHandler_t84887C36CEF07E7EA46BF27F72741D1FD8BD1B40 * L_5 = V_2;
		NetworkConnectedHandler_t84887C36CEF07E7EA46BF27F72741D1FD8BD1B40 * L_6 = V_1;
		NetworkConnectedHandler_t84887C36CEF07E7EA46BF27F72741D1FD8BD1B40 * L_7;
		L_7 = InterlockedCompareExchangeImpl<NetworkConnectedHandler_t84887C36CEF07E7EA46BF27F72741D1FD8BD1B40 *>((NetworkConnectedHandler_t84887C36CEF07E7EA46BF27F72741D1FD8BD1B40 **)(((NetworkInterfaceWrapper_tFC0BE7E64BF2EDC9B4840FF31B825C474A0B6D35_StaticFields*)il2cpp_codegen_static_fields_for(NetworkInterfaceWrapper_tFC0BE7E64BF2EDC9B4840FF31B825C474A0B6D35_il2cpp_TypeInfo_var))->get_address_of__networkConnected_0()), L_5, L_6);
		V_0 = L_7;
		NetworkConnectedHandler_t84887C36CEF07E7EA46BF27F72741D1FD8BD1B40 * L_8 = V_0;
		NetworkConnectedHandler_t84887C36CEF07E7EA46BF27F72741D1FD8BD1B40 * L_9 = V_1;
		if ((!(((RuntimeObject*)(NetworkConnectedHandler_t84887C36CEF07E7EA46BF27F72741D1FD8BD1B40 *)L_8) == ((RuntimeObject*)(NetworkConnectedHandler_t84887C36CEF07E7EA46BF27F72741D1FD8BD1B40 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
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
// System.Void UnityEngine.Switch.Notification::SetFocusHandlingMode(UnityEngine.Switch.Notification/FocusHandlingMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Notification_SetFocusHandlingMode_mA19C6C26FC9B12E68C72D2BECD27C60C9DB75A43 (int32_t ___mode0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___mode0;
		Notification_SetFocusHandlingMode_Internal_m13C4D5F0C9C409F7556F845D55C56985118CA8B6(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Switch.Notification::SetFocusHandlingMode_Internal(UnityEngine.Switch.Notification/FocusHandlingMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Notification_SetFocusHandlingMode_Internal_m13C4D5F0C9C409F7556F845D55C56985118CA8B6 (int32_t ___mode0, const RuntimeMethod* method)
{
	typedef void (*Notification_SetFocusHandlingMode_Internal_m13C4D5F0C9C409F7556F845D55C56985118CA8B6_ftn) (int32_t);
	static Notification_SetFocusHandlingMode_Internal_m13C4D5F0C9C409F7556F845D55C56985118CA8B6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Notification_SetFocusHandlingMode_Internal_m13C4D5F0C9C409F7556F845D55C56985118CA8B6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Switch.Notification::SetFocusHandlingMode_Internal(UnityEngine.Switch.Notification/FocusHandlingMode)");
	_il2cpp_icall_func(___mode0);
}
// UnityEngine.Switch.Notification/FocusState UnityEngine.Switch.Notification::GetCurrentFocusState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Notification_GetCurrentFocusState_m424B95B84FF2FDEB0F13BD9A6802B6A8F0BB968C (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = Notification_GetCurrentFocusState_Internal_m4AA8C69C1DB55FAB37EF8CF893A881BCE8AFE4F2(/*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Switch.Notification/FocusState UnityEngine.Switch.Notification::GetCurrentFocusState_Internal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Notification_GetCurrentFocusState_Internal_m4AA8C69C1DB55FAB37EF8CF893A881BCE8AFE4F2 (const RuntimeMethod* method)
{
	typedef int32_t (*Notification_GetCurrentFocusState_Internal_m4AA8C69C1DB55FAB37EF8CF893A881BCE8AFE4F2_ftn) ();
	static Notification_GetCurrentFocusState_Internal_m4AA8C69C1DB55FAB37EF8CF893A881BCE8AFE4F2_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Notification_GetCurrentFocusState_Internal_m4AA8C69C1DB55FAB37EF8CF893A881BCE8AFE4F2_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Switch.Notification::GetCurrentFocusState_Internal()");
	int32_t icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
// System.Void UnityEngine.Switch.Notification::SetResumeNotificationEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Notification_SetResumeNotificationEnabled_mEE7A9B16CEC042F7A7A27C8AA9B749F5F0DE29CF (bool ___enabled0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___enabled0;
		Notification_SetResumeNotificationEnabled_Internal_m2966CEBC55C22B3F5A246179AFC9F82CDBF658DD(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Switch.Notification::SetResumeNotificationEnabled_Internal(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Notification_SetResumeNotificationEnabled_Internal_m2966CEBC55C22B3F5A246179AFC9F82CDBF658DD (bool ___enabled0, const RuntimeMethod* method)
{
	typedef void (*Notification_SetResumeNotificationEnabled_Internal_m2966CEBC55C22B3F5A246179AFC9F82CDBF658DD_ftn) (bool);
	static Notification_SetResumeNotificationEnabled_Internal_m2966CEBC55C22B3F5A246179AFC9F82CDBF658DD_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Notification_SetResumeNotificationEnabled_Internal_m2966CEBC55C22B3F5A246179AFC9F82CDBF658DD_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Switch.Notification::SetResumeNotificationEnabled_Internal(System.Boolean)");
	_il2cpp_icall_func(___enabled0);
}
// System.Void UnityEngine.Switch.Notification::EnterExitRequestHandlingSection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Notification_EnterExitRequestHandlingSection_mB8D39AF3A2B31EBBFAEB932D5D677F508467E52F (const RuntimeMethod* method)
{
	{
		Notification_EnterExitRequestHandlingSection_Internal_m05F8824D469BB2828EA8D29D4E8D6A141CE94398(/*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Switch.Notification::EnterExitRequestHandlingSection_Internal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Notification_EnterExitRequestHandlingSection_Internal_m05F8824D469BB2828EA8D29D4E8D6A141CE94398 (const RuntimeMethod* method)
{
	typedef void (*Notification_EnterExitRequestHandlingSection_Internal_m05F8824D469BB2828EA8D29D4E8D6A141CE94398_ftn) ();
	static Notification_EnterExitRequestHandlingSection_Internal_m05F8824D469BB2828EA8D29D4E8D6A141CE94398_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Notification_EnterExitRequestHandlingSection_Internal_m05F8824D469BB2828EA8D29D4E8D6A141CE94398_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Switch.Notification::EnterExitRequestHandlingSection_Internal()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.Switch.Notification::LeaveExitRequestHandlingSection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Notification_LeaveExitRequestHandlingSection_m75E1C9A338406AE7FEC45151ADC0ACD60DBB1879 (const RuntimeMethod* method)
{
	{
		Notification_LeaveExitRequestHandlingSection_Internal_m75119D9B7FFB344C7C9F4C7B64D8D4B5A71CD12E(/*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Switch.Notification::LeaveExitRequestHandlingSection_Internal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Notification_LeaveExitRequestHandlingSection_Internal_m75119D9B7FFB344C7C9F4C7B64D8D4B5A71CD12E (const RuntimeMethod* method)
{
	typedef void (*Notification_LeaveExitRequestHandlingSection_Internal_m75119D9B7FFB344C7C9F4C7B64D8D4B5A71CD12E_ftn) ();
	static Notification_LeaveExitRequestHandlingSection_Internal_m75119D9B7FFB344C7C9F4C7B64D8D4B5A71CD12E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Notification_LeaveExitRequestHandlingSection_Internal_m75119D9B7FFB344C7C9F4C7B64D8D4B5A71CD12E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Switch.Notification::LeaveExitRequestHandlingSection_Internal()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.Switch.Notification::SetOperationModeChangedNotificationEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Notification_SetOperationModeChangedNotificationEnabled_m22072B29A322FEA6A5A00E47899006C79024DA78 (bool ___enabled0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___enabled0;
		Notification_SetOperationModeChangedNotificationEnabled_Internal_m0CD65B2C8FB2F313CB068138599FF973EB1BB72F(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Switch.Notification::SetOperationModeChangedNotificationEnabled_Internal(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Notification_SetOperationModeChangedNotificationEnabled_Internal_m0CD65B2C8FB2F313CB068138599FF973EB1BB72F (bool ___enabled0, const RuntimeMethod* method)
{
	typedef void (*Notification_SetOperationModeChangedNotificationEnabled_Internal_m0CD65B2C8FB2F313CB068138599FF973EB1BB72F_ftn) (bool);
	static Notification_SetOperationModeChangedNotificationEnabled_Internal_m0CD65B2C8FB2F313CB068138599FF973EB1BB72F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Notification_SetOperationModeChangedNotificationEnabled_Internal_m0CD65B2C8FB2F313CB068138599FF973EB1BB72F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Switch.Notification::SetOperationModeChangedNotificationEnabled_Internal(System.Boolean)");
	_il2cpp_icall_func(___enabled0);
}
// System.Void UnityEngine.Switch.Notification::SetPerformanceModeChangedNotificationEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Notification_SetPerformanceModeChangedNotificationEnabled_mFF7A020C53CDDBC18BCD9D4B41FA52E3478C00F0 (bool ___enabled0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___enabled0;
		Notification_SetPerformanceModeChangedNotificationEnabled_Internal_m2BF8D624D036EC1AFDDFC5F02A83C7EF2AC1B8EC(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Switch.Notification::SetPerformanceModeChangedNotificationEnabled_Internal(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Notification_SetPerformanceModeChangedNotificationEnabled_Internal_m2BF8D624D036EC1AFDDFC5F02A83C7EF2AC1B8EC (bool ___enabled0, const RuntimeMethod* method)
{
	typedef void (*Notification_SetPerformanceModeChangedNotificationEnabled_Internal_m2BF8D624D036EC1AFDDFC5F02A83C7EF2AC1B8EC_ftn) (bool);
	static Notification_SetPerformanceModeChangedNotificationEnabled_Internal_m2BF8D624D036EC1AFDDFC5F02A83C7EF2AC1B8EC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Notification_SetPerformanceModeChangedNotificationEnabled_Internal_m2BF8D624D036EC1AFDDFC5F02A83C7EF2AC1B8EC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Switch.Notification::SetPerformanceModeChangedNotificationEnabled_Internal(System.Boolean)");
	_il2cpp_icall_func(___enabled0);
}
// System.Void UnityEngine.Switch.Notification::InvokeNotificationMessage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Notification_InvokeNotificationMessage_mBD508A53671F8F0FBCE196D85546A35FCB1AE8B4 (int32_t ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mD13DAC72448F3344BBAEA0E791575E24B3A2FFDD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Notification_tD22929E4DC4EB1B5090794E27C44593ACE949550_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Action_1_t3B7FB1058DBC144045F9C7DAB357B8FDF8B21F8D * L_0 = ((Notification_tD22929E4DC4EB1B5090794E27C44593ACE949550_StaticFields*)il2cpp_codegen_static_fields_for(Notification_tD22929E4DC4EB1B5090794E27C44593ACE949550_il2cpp_TypeInfo_var))->get_notificationMessageReceived_0();
		V_0 = (bool)((!(((RuntimeObject*)(Action_1_t3B7FB1058DBC144045F9C7DAB357B8FDF8B21F8D *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		Action_1_t3B7FB1058DBC144045F9C7DAB357B8FDF8B21F8D * L_2 = ((Notification_tD22929E4DC4EB1B5090794E27C44593ACE949550_StaticFields*)il2cpp_codegen_static_fields_for(Notification_tD22929E4DC4EB1B5090794E27C44593ACE949550_il2cpp_TypeInfo_var))->get_notificationMessageReceived_0();
		int32_t L_3 = ___message0;
		Action_1_Invoke_mD13DAC72448F3344BBAEA0E791575E24B3A2FFDD(L_2, L_3, /*hidden argument*/Action_1_Invoke_mD13DAC72448F3344BBAEA0E791575E24B3A2FFDD_RuntimeMethod_var);
	}

IL_0019:
	{
		return;
	}
}
// System.Void UnityEngine.Switch.Notification::add_notificationMessageReceived(System.Action`1<UnityEngine.Switch.Notification/Message>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Notification_add_notificationMessageReceived_m4364529F90FF4C3DDE229027437D81F0CEFD3CC8 (Action_1_t3B7FB1058DBC144045F9C7DAB357B8FDF8B21F8D * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t3B7FB1058DBC144045F9C7DAB357B8FDF8B21F8D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Notification_tD22929E4DC4EB1B5090794E27C44593ACE949550_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t3B7FB1058DBC144045F9C7DAB357B8FDF8B21F8D * V_0 = NULL;
	Action_1_t3B7FB1058DBC144045F9C7DAB357B8FDF8B21F8D * V_1 = NULL;
	Action_1_t3B7FB1058DBC144045F9C7DAB357B8FDF8B21F8D * V_2 = NULL;
	{
		Action_1_t3B7FB1058DBC144045F9C7DAB357B8FDF8B21F8D * L_0 = ((Notification_tD22929E4DC4EB1B5090794E27C44593ACE949550_StaticFields*)il2cpp_codegen_static_fields_for(Notification_tD22929E4DC4EB1B5090794E27C44593ACE949550_il2cpp_TypeInfo_var))->get_notificationMessageReceived_0();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t3B7FB1058DBC144045F9C7DAB357B8FDF8B21F8D * L_1 = V_0;
		V_1 = L_1;
		Action_1_t3B7FB1058DBC144045F9C7DAB357B8FDF8B21F8D * L_2 = V_1;
		Action_1_t3B7FB1058DBC144045F9C7DAB357B8FDF8B21F8D * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_1_t3B7FB1058DBC144045F9C7DAB357B8FDF8B21F8D *)CastclassSealed((RuntimeObject*)L_4, Action_1_t3B7FB1058DBC144045F9C7DAB357B8FDF8B21F8D_il2cpp_TypeInfo_var));
		Action_1_t3B7FB1058DBC144045F9C7DAB357B8FDF8B21F8D * L_5 = V_2;
		Action_1_t3B7FB1058DBC144045F9C7DAB357B8FDF8B21F8D * L_6 = V_1;
		Action_1_t3B7FB1058DBC144045F9C7DAB357B8FDF8B21F8D * L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_t3B7FB1058DBC144045F9C7DAB357B8FDF8B21F8D *>((Action_1_t3B7FB1058DBC144045F9C7DAB357B8FDF8B21F8D **)(((Notification_tD22929E4DC4EB1B5090794E27C44593ACE949550_StaticFields*)il2cpp_codegen_static_fields_for(Notification_tD22929E4DC4EB1B5090794E27C44593ACE949550_il2cpp_TypeInfo_var))->get_address_of_notificationMessageReceived_0()), L_5, L_6);
		V_0 = L_7;
		Action_1_t3B7FB1058DBC144045F9C7DAB357B8FDF8B21F8D * L_8 = V_0;
		Action_1_t3B7FB1058DBC144045F9C7DAB357B8FDF8B21F8D * L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t3B7FB1058DBC144045F9C7DAB357B8FDF8B21F8D *)L_8) == ((RuntimeObject*)(Action_1_t3B7FB1058DBC144045F9C7DAB357B8FDF8B21F8D *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Switch.Notification::remove_notificationMessageReceived(System.Action`1<UnityEngine.Switch.Notification/Message>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Notification_remove_notificationMessageReceived_mAEED34CB47AAE1242BCAE9BAE85445A705389CDE (Action_1_t3B7FB1058DBC144045F9C7DAB357B8FDF8B21F8D * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t3B7FB1058DBC144045F9C7DAB357B8FDF8B21F8D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Notification_tD22929E4DC4EB1B5090794E27C44593ACE949550_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t3B7FB1058DBC144045F9C7DAB357B8FDF8B21F8D * V_0 = NULL;
	Action_1_t3B7FB1058DBC144045F9C7DAB357B8FDF8B21F8D * V_1 = NULL;
	Action_1_t3B7FB1058DBC144045F9C7DAB357B8FDF8B21F8D * V_2 = NULL;
	{
		Action_1_t3B7FB1058DBC144045F9C7DAB357B8FDF8B21F8D * L_0 = ((Notification_tD22929E4DC4EB1B5090794E27C44593ACE949550_StaticFields*)il2cpp_codegen_static_fields_for(Notification_tD22929E4DC4EB1B5090794E27C44593ACE949550_il2cpp_TypeInfo_var))->get_notificationMessageReceived_0();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t3B7FB1058DBC144045F9C7DAB357B8FDF8B21F8D * L_1 = V_0;
		V_1 = L_1;
		Action_1_t3B7FB1058DBC144045F9C7DAB357B8FDF8B21F8D * L_2 = V_1;
		Action_1_t3B7FB1058DBC144045F9C7DAB357B8FDF8B21F8D * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_1_t3B7FB1058DBC144045F9C7DAB357B8FDF8B21F8D *)CastclassSealed((RuntimeObject*)L_4, Action_1_t3B7FB1058DBC144045F9C7DAB357B8FDF8B21F8D_il2cpp_TypeInfo_var));
		Action_1_t3B7FB1058DBC144045F9C7DAB357B8FDF8B21F8D * L_5 = V_2;
		Action_1_t3B7FB1058DBC144045F9C7DAB357B8FDF8B21F8D * L_6 = V_1;
		Action_1_t3B7FB1058DBC144045F9C7DAB357B8FDF8B21F8D * L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_t3B7FB1058DBC144045F9C7DAB357B8FDF8B21F8D *>((Action_1_t3B7FB1058DBC144045F9C7DAB357B8FDF8B21F8D **)(((Notification_tD22929E4DC4EB1B5090794E27C44593ACE949550_StaticFields*)il2cpp_codegen_static_fields_for(Notification_tD22929E4DC4EB1B5090794E27C44593ACE949550_il2cpp_TypeInfo_var))->get_address_of_notificationMessageReceived_0()), L_5, L_6);
		V_0 = L_7;
		Action_1_t3B7FB1058DBC144045F9C7DAB357B8FDF8B21F8D * L_8 = V_0;
		Action_1_t3B7FB1058DBC144045F9C7DAB357B8FDF8B21F8D * L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t3B7FB1058DBC144045F9C7DAB357B8FDF8B21F8D *)L_8) == ((RuntimeObject*)(Action_1_t3B7FB1058DBC144045F9C7DAB357B8FDF8B21F8D *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
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
// Conversion methods for marshalling of: UnityEngine.Switch.SwitchVideoPlayer
IL2CPP_EXTERN_C void SwitchVideoPlayer_t71422F31E678EE03128173B3B3A4B33BD375B8E6_marshal_pinvoke(const SwitchVideoPlayer_t71422F31E678EE03128173B3B3A4B33BD375B8E6& unmarshaled, SwitchVideoPlayer_t71422F31E678EE03128173B3B3A4B33BD375B8E6_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
	marshaled.___m_MovieEvent_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_m_MovieEvent_1()));
}
IL2CPP_EXTERN_C void SwitchVideoPlayer_t71422F31E678EE03128173B3B3A4B33BD375B8E6_marshal_pinvoke_back(const SwitchVideoPlayer_t71422F31E678EE03128173B3B3A4B33BD375B8E6_marshaled_pinvoke& marshaled, SwitchVideoPlayer_t71422F31E678EE03128173B3B3A4B33BD375B8E6& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MovieEventDelegate_tD07661A9E133103BD049F1311A8E0DB7BE5F4637_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset((&unmarshaled_m_Ptr_temp_0), 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
	unmarshaled.set_m_MovieEvent_1(il2cpp_codegen_marshal_function_ptr_to_delegate<MovieEventDelegate_tD07661A9E133103BD049F1311A8E0DB7BE5F4637>(marshaled.___m_MovieEvent_1, MovieEventDelegate_tD07661A9E133103BD049F1311A8E0DB7BE5F4637_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: UnityEngine.Switch.SwitchVideoPlayer
IL2CPP_EXTERN_C void SwitchVideoPlayer_t71422F31E678EE03128173B3B3A4B33BD375B8E6_marshal_pinvoke_cleanup(SwitchVideoPlayer_t71422F31E678EE03128173B3B3A4B33BD375B8E6_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Switch.SwitchVideoPlayer
IL2CPP_EXTERN_C void SwitchVideoPlayer_t71422F31E678EE03128173B3B3A4B33BD375B8E6_marshal_com(const SwitchVideoPlayer_t71422F31E678EE03128173B3B3A4B33BD375B8E6& unmarshaled, SwitchVideoPlayer_t71422F31E678EE03128173B3B3A4B33BD375B8E6_marshaled_com& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
	marshaled.___m_MovieEvent_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_m_MovieEvent_1()));
}
IL2CPP_EXTERN_C void SwitchVideoPlayer_t71422F31E678EE03128173B3B3A4B33BD375B8E6_marshal_com_back(const SwitchVideoPlayer_t71422F31E678EE03128173B3B3A4B33BD375B8E6_marshaled_com& marshaled, SwitchVideoPlayer_t71422F31E678EE03128173B3B3A4B33BD375B8E6& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MovieEventDelegate_tD07661A9E133103BD049F1311A8E0DB7BE5F4637_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset((&unmarshaled_m_Ptr_temp_0), 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
	unmarshaled.set_m_MovieEvent_1(il2cpp_codegen_marshal_function_ptr_to_delegate<MovieEventDelegate_tD07661A9E133103BD049F1311A8E0DB7BE5F4637>(marshaled.___m_MovieEvent_1, MovieEventDelegate_tD07661A9E133103BD049F1311A8E0DB7BE5F4637_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: UnityEngine.Switch.SwitchVideoPlayer
IL2CPP_EXTERN_C void SwitchVideoPlayer_t71422F31E678EE03128173B3B3A4B33BD375B8E6_marshal_com_cleanup(SwitchVideoPlayer_t71422F31E678EE03128173B3B3A4B33BD375B8E6_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.Switch.SwitchVideoPlayer::FireMovieEvent(UnityEngine.Switch.SwitchVideoPlayer/Event)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwitchVideoPlayer_FireMovieEvent_mB6179F979CA2FA01A4279144B20D0117A7005AA0 (int32_t ___eventValue0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SwitchVideoPlayer_t71422F31E678EE03128173B3B3A4B33BD375B8E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		IL2CPP_RUNTIME_CLASS_INIT(SwitchVideoPlayer_t71422F31E678EE03128173B3B3A4B33BD375B8E6_il2cpp_TypeInfo_var);
		MovieEventDelegate_tD07661A9E133103BD049F1311A8E0DB7BE5F4637 * L_0 = ((SwitchVideoPlayer_t71422F31E678EE03128173B3B3A4B33BD375B8E6_StaticFields*)il2cpp_codegen_static_fields_for(SwitchVideoPlayer_t71422F31E678EE03128173B3B3A4B33BD375B8E6_il2cpp_TypeInfo_var))->get_OnMovieEvent_2();
		V_0 = (bool)((!(((RuntimeObject*)(MovieEventDelegate_tD07661A9E133103BD049F1311A8E0DB7BE5F4637 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SwitchVideoPlayer_t71422F31E678EE03128173B3B3A4B33BD375B8E6_il2cpp_TypeInfo_var);
		MovieEventDelegate_tD07661A9E133103BD049F1311A8E0DB7BE5F4637 * L_2 = ((SwitchVideoPlayer_t71422F31E678EE03128173B3B3A4B33BD375B8E6_StaticFields*)il2cpp_codegen_static_fields_for(SwitchVideoPlayer_t71422F31E678EE03128173B3B3A4B33BD375B8E6_il2cpp_TypeInfo_var))->get_OnMovieEvent_2();
		int32_t L_3 = ___eventValue0;
		MovieEventDelegate_Invoke_mEC04404CBF00A635F5753E1560D0522EC09B0AAB(L_2, L_3, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void UnityEngine.Switch.SwitchVideoPlayer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwitchVideoPlayer__cctor_m41A1FC26BFDF1834D0298DDE31E95955ABE7781A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SwitchVideoPlayer_t71422F31E678EE03128173B3B3A4B33BD375B8E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((SwitchVideoPlayer_t71422F31E678EE03128173B3B3A4B33BD375B8E6_StaticFields*)il2cpp_codegen_static_fields_for(SwitchVideoPlayer_t71422F31E678EE03128173B3B3A4B33BD375B8E6_il2cpp_TypeInfo_var))->set_OnMovieEvent_2((MovieEventDelegate_tD07661A9E133103BD049F1311A8E0DB7BE5F4637 *)NULL);
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
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_NetworkConnectedHandler_t84887C36CEF07E7EA46BF27F72741D1FD8BD1B40 (NetworkConnectedHandler_t84887C36CEF07E7EA46BF27F72741D1FD8BD1B40 * __this, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc();

	return returnValue;
}
// System.Void UnityEngine.Switch.NetworkInterfaceWrapper/NetworkConnectedHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkConnectedHandler__ctor_m05FF0DCBE7428CE41F338EF5B3FC04F1C73B42B3 (NetworkConnectedHandler_t84887C36CEF07E7EA46BF27F72741D1FD8BD1B40 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// UnityEngine.Switch.NetworkInterfaceWrapper/NetworkConnectedResult UnityEngine.Switch.NetworkInterfaceWrapper/NetworkConnectedHandler::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkConnectedHandler_Invoke_mCFBDF852BC2B988B66FCD2D115EBCB8DF05DBE2B (NetworkConnectedHandler_t84887C36CEF07E7EA46BF27F72741D1FD8BD1B40 * __this, const RuntimeMethod* method)
{
	int32_t result = 0;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef int32_t (*FunctionPointerType) (const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker0< int32_t >::Invoke(targetMethod, targetThis);
					else
						result = GenericVirtFuncInvoker0< int32_t >::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						result = VirtFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult UnityEngine.Switch.NetworkInterfaceWrapper/NetworkConnectedHandler::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NetworkConnectedHandler_BeginInvoke_m871559E0CD222FCA3A87263D06A80373B48AF9B0 (NetworkConnectedHandler_t84887C36CEF07E7EA46BF27F72741D1FD8BD1B40 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// UnityEngine.Switch.NetworkInterfaceWrapper/NetworkConnectedResult UnityEngine.Switch.NetworkInterfaceWrapper/NetworkConnectedHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkConnectedHandler_EndInvoke_m17FCE5F66013AD35A4EB661734EE7E57FA40249C (NetworkConnectedHandler_t84887C36CEF07E7EA46BF27F72741D1FD8BD1B40 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);;
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_MovieEventDelegate_tD07661A9E133103BD049F1311A8E0DB7BE5F4637 (MovieEventDelegate_tD07661A9E133103BD049F1311A8E0DB7BE5F4637 * __this, int32_t ___eventtype0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___eventtype0);

}
// System.Void UnityEngine.Switch.SwitchVideoPlayer/MovieEventDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovieEventDelegate__ctor_mD922883355C5AA0506BE91414912F5F7960B0D08 (MovieEventDelegate_tD07661A9E133103BD049F1311A8E0DB7BE5F4637 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Switch.SwitchVideoPlayer/MovieEventDelegate::Invoke(UnityEngine.Switch.SwitchVideoPlayer/Event)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovieEventDelegate_Invoke_mEC04404CBF00A635F5753E1560D0522EC09B0AAB (MovieEventDelegate_tD07661A9E133103BD049F1311A8E0DB7BE5F4637 * __this, int32_t ___eventtype0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___eventtype0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___eventtype0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___eventtype0);
					else
						GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___eventtype0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___eventtype0);
					else
						VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___eventtype0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___eventtype0) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___eventtype0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Switch.SwitchVideoPlayer/MovieEventDelegate::BeginInvoke(UnityEngine.Switch.SwitchVideoPlayer/Event,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MovieEventDelegate_BeginInvoke_m7BE43F96FC141A9FA5BB7AE7FDC325F96111702E (MovieEventDelegate_tD07661A9E133103BD049F1311A8E0DB7BE5F4637 * __this, int32_t ___eventtype0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Event_t9D49914A852AEA98A09415EA4E9E601BDC75B9F4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Event_t9D49914A852AEA98A09415EA4E9E601BDC75B9F4_il2cpp_TypeInfo_var, &___eventtype0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void UnityEngine.Switch.SwitchVideoPlayer/MovieEventDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovieEventDelegate_EndInvoke_m34D62E2EF8F4913C5FDC79A7B06B744C4626771A (MovieEventDelegate_tD07661A9E133103BD049F1311A8E0DB7BE5F4637 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
