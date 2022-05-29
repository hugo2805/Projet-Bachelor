#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<UnityEngine.ProBuilder.ProBuilderMesh>
struct Action_1_t0D8A0BA7730CBC954C3C2FC290CA184A931853F4;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08;
// System.Collections.Generic.HashSet`1<System.Int32>
struct HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B;
// System.Collections.Generic.HashSet`1<UnityEngine.ProBuilder.ProBuilderMesh>
struct HashSet_1_tF6DD03009BA75BA8DDFB365F26AEE379ACA22C91;
// System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Face>
struct IEnumerable_1_t8D42E00EDA42CA38E1279CAC0865B5EDD29328B1;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t60929E1AA80B46746F987B99A4EBD004FD72D370;
// System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.ProBuilderMesh>
struct IEnumerable_1_t8C2213EA4CE8D143BCE5A52E0B8CF09E700B7F67;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector3>
struct IEnumerable_1_tDBC849B8248C833C53F1762E771EFC477EB8AF18;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t72AB4B40AF5290B386215B0BFADC8919D394DCAB;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.ProBuilder.ProBuilderMesh>
struct IEqualityComparer_1_tCBB6008D8F50818A8C49B5D08E713BB7FB73A4DD;
// System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Face>
struct IList_1_t8E7BAAC4AF41A99D9455B4D6CB6EF27DE08A7BC5;
// System.Collections.Generic.IList`1<System.Int32>
struct IList_1_t1C0FF9038440D4E3F8C4A2D43AF1062780CF179D;
// System.Collections.Generic.IList`1<UnityEngine.Vector3>
struct IList_1_t8B00F815D77E0AC6983C059BC09DBC979F8E86E0;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7;
// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>
struct ReadOnlyCollection_1_t3E37961FF3644E8E5BC1468444123741B9E47EFF;
// System.Collections.Generic.HashSet`1/Slot<UnityEngine.ProBuilder.ProBuilderMesh>[]
struct SlotU5BU5D_t8F2A23818794CF190DED44BFE2D6B0E05B496282;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.Color[]
struct ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.ProBuilder.Edge[]
struct EdgeU5BU5D_t6635B1445F730F12A351F5C2838E61A91AA07381;
// UnityEngine.ProBuilder.Face[]
struct FaceU5BU5D_t0D522232374325AD8B00CA039B016D822C4F8107;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.Material[]
struct MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492;
// UnityEngine.ProBuilder.SharedVertex[]
struct SharedVertexU5BU5D_tA15BD8E3618099DAC98FF39AC05B844E763C843A;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871;
// UnityEngine.ProBuilder.Vertex[]
struct VertexU5BU5D_tF0785965ACC62975D78C2C33316012642204CEC9;
// UnityEngine.ProBuilder.ActionResult
struct ActionResult_t75240A11EF21E91AF8CC415EB4666333E8D65198;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// ProBuilder.Examples.CameraControls
struct CameraControls_tCC97542CD8ADE300A893D543BD4DF7B790CABFD2;
// ProBuilder.Examples.CameraMotion
struct CameraMotion_tB4108D421FA6012FCA161EBD7AF7DA50B4A89F89;
// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// ProBuilder.Examples.CreatePolyShape
struct CreatePolyShape_t075FC86D37A719F7BCB672C4EBF53B00876056A7;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C;
// UnityEngine.ProBuilder.Face
struct Face_t670F9C6E42E8D3EEA7AD53AD268426DF37B3AA0B;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// ProBuilder.Examples.Handles
struct Handles_tE2F54FAA2888BCCD78C0B29D9A3D5A83B0DBA092;
// ProBuilder.Examples.HighlightNearestFace
struct HighlightNearestFace_tB488288D0A42BD683ED46ECCE07C7461CFC495C2;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// ProBuilder.Examples.MakePrimitiveEditable
struct MakePrimitiveEditable_tE539C190364AB04850A378BE9EF6B86A54F580F6;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// ProBuilder.Examples.MeshEditor
struct MeshEditor_t439D937C0610CF3351D3C29C662032654E023040;
// UnityEngine.MeshFilter
struct MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A;
// UnityEngine.ProBuilder.MeshOperations.MeshImportSettings
struct MeshImportSettings_t6F08DF59075B8BE68AFA465FC29E9539BF6FD901;
// UnityEngine.ProBuilder.MeshOperations.MeshImporter
struct MeshImporter_tE19E710EB2381D78327D684DE65D04C7C7086ED2;
// UnityEngine.MeshRenderer
struct MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.ProBuilder.ProBuilderMesh
struct ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06;
// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1;
// UnityEngine.Shader
struct Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39;
// ProBuilder.Examples.SimpleGrid
struct SimpleGrid_t569734AD487C867DC8CBB9B276C2572003A7E2BE;
// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.ProBuilder.UnwrapParameters
struct UnwrapParameters_tAE98DF64B01A1D09ABD69C8CB9A6227C38DE2A80;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// ProBuilder.Examples.MeshEditor/DragState
struct DragState_tBA2431E802EB4BC41D740E5B0B6505805E3DC3AC;
// ProBuilder.Examples.MeshEditor/MeshState
struct MeshState_tF8D82249D94398E31F98DDD3FF745D3B916D282A;

IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BuiltinMaterials_tFDEA0BDEBF5A6827D1C318165A6EC719F3B55951_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DragState_tBA2431E802EB4BC41D740E5B0B6505805E3DC3AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FaceU5BU5D_t0D522232374325AD8B00CA039B016D822C4F8107_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Handles_tE2F54FAA2888BCCD78C0B29D9A3D5A83B0DBA092_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_tF6DD03009BA75BA8DDFB365F26AEE379ACA22C91_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_tC20401E166188A9900D873AAB18A1335E698E7D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t8D42E00EDA42CA38E1279CAC0865B5EDD29328B1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t41AD865847BCDCC0B778C72C0F454BE65D25870A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t72AB4B40AF5290B386215B0BFADC8919D394DCAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_t8B00F815D77E0AC6983C059BC09DBC979F8E86E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_t8E7BAAC4AF41A99D9455B4D6CB6EF27DE08A7BC5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MeshImporter_tE19E710EB2381D78327D684DE65D04C7C7086ED2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MeshState_tF8D82249D94398E31F98DDD3FF745D3B916D282A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Selection_t1FCB1C96E6A79B484E2225A10A53ED29B7A3F760_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ShapeGenerator_t0BA155A73DA60EDC5D74592F200B7F085ABCC560_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0;
IL2CPP_EXTERN_C String_t* _stringLiteral1928516CCADFDD3844E97006274F43795D2DE996;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE;
IL2CPP_EXTERN_C String_t* _stringLiteral4E27A425D1733108BCD8B905C1BE9CA9A172D9E8;
IL2CPP_EXTERN_C String_t* _stringLiteral5FD4FEE543D1D1C048D83A75015E98D3D8996D1A;
IL2CPP_EXTERN_C String_t* _stringLiteral61C0A9A4EB397DF458A91FB78ADCE4A7D7FF1F4E;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7;
IL2CPP_EXTERN_C String_t* _stringLiteral9D309F814AB46EA4A55D3DD5E7C9544161649950;
IL2CPP_EXTERN_C String_t* _stringLiteralA426F185600BA938CCABD7D3B9D606EB73C4388C;
IL2CPP_EXTERN_C String_t* _stringLiteralB2A2A23C0F95CC4BF23BDB0980D559F59E054C4B;
IL2CPP_EXTERN_C String_t* _stringLiteralB81725853B8165102E432135CAFFA999C78AFB62;
IL2CPP_EXTERN_C String_t* _stringLiteralEB0A157666700D8227FD4B66A26FDC02035E89BF;
IL2CPP_EXTERN_C String_t* _stringLiteralF6EACFE5868352FC5B923AA4C224AEB37445AC59;
IL2CPP_EXTERN_C String_t* _stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCameraMotion_tB4108D421FA6012FCA161EBD7AF7DA50B4A89F89_m253DD0E1A675EEA2045ED02E121CD19116BE1115_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m4E31C5D3D0490AEE405B54BE9F61802EA425B9DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mE2EA0E48C8C0EAFA09C6FAD2003105EACAC85213_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m61D9F161CA3A7569EB563586636A6C1E3F3E8B76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06_m2CA145FFD8E5BD25F701DCDB1F8B7AAEE1876797_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06_m0C759891C92E06F8E263C0A723D6CC2F08DA3344_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_mB8FFD2BF1965AA845D3DC7D81BC2CE857CBE2D24_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Clear_m5F6D43800DA4275BF2716F3C8131013646838551_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Contains_m0289CE6599F040101BB5E4F28875D79F4F49756D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Remove_m6A28999AB452AA1F53CD3EDCE72105A1ABF48736_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_mD9C5F7D03314D383A69C11DEBD3A3246F9EBAA39_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MeshEditor_DrawSelection_mA89E26709866ABA5AB09FFE7CDAC2C928685DE2B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyCollection_1_GetEnumerator_mA48E3627DA12B20C93EE74CBCB4E03089D732F65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyCollection_1_get_Count_m4D45E9941D00D5920506B0B878DD4A467B0BA7BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyCollection_1_get_Item_m6072A37D1AE093FC1051FA4791F0A1C68A975FA2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Selection_Add_mCDEA58AC0275BE1F19C5365C5D4F6301D53F5F8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Selection_Remove_m9B0296EDC2E55FA30A4AB3A405006533D69C2A6B_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct FaceU5BU5D_t0D522232374325AD8B00CA039B016D822C4F8107;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t4F784802ED22DC144287E1A8F9526FAFC17FBECC 
{
public:

public:
};


// System.Object


// System.Collections.Generic.HashSet`1<UnityEngine.ProBuilder.ProBuilderMesh>
struct HashSet_1_tF6DD03009BA75BA8DDFB365F26AEE379ACA22C91  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t8F2A23818794CF190DED44BFE2D6B0E05B496282* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_tF6DD03009BA75BA8DDFB365F26AEE379ACA22C91, ____buckets_7)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_7), (void*)value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_tF6DD03009BA75BA8DDFB365F26AEE379ACA22C91, ____slots_8)); }
	inline SlotU5BU5D_t8F2A23818794CF190DED44BFE2D6B0E05B496282* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_t8F2A23818794CF190DED44BFE2D6B0E05B496282** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_t8F2A23818794CF190DED44BFE2D6B0E05B496282* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slots_8), (void*)value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_tF6DD03009BA75BA8DDFB365F26AEE379ACA22C91, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_tF6DD03009BA75BA8DDFB365F26AEE379ACA22C91, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_tF6DD03009BA75BA8DDFB365F26AEE379ACA22C91, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_tF6DD03009BA75BA8DDFB365F26AEE379ACA22C91, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_12), (void*)value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_tF6DD03009BA75BA8DDFB365F26AEE379ACA22C91, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_tF6DD03009BA75BA8DDFB365F26AEE379ACA22C91, ____siInfo_14)); }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_14), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____items_1)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__items_1() const { return ____items_1; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_StaticFields, ____emptyArray_5)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>
struct ReadOnlyCollection_1_t3E37961FF3644E8E5BC1468444123741B9E47EFF  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1::list
	RuntimeObject* ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_t3E37961FF3644E8E5BC1468444123741B9E47EFF, ___list_0)); }
	inline RuntimeObject* get_list_0() const { return ___list_0; }
	inline RuntimeObject** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(RuntimeObject* value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// UnityEngine.ProBuilder.MeshOperations.MeshImportSettings
struct MeshImportSettings_t6F08DF59075B8BE68AFA465FC29E9539BF6FD901  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.ProBuilder.MeshOperations.MeshImportSettings::m_Quads
	bool ___m_Quads_0;
	// System.Boolean UnityEngine.ProBuilder.MeshOperations.MeshImportSettings::m_Smoothing
	bool ___m_Smoothing_1;
	// System.Single UnityEngine.ProBuilder.MeshOperations.MeshImportSettings::m_SmoothingThreshold
	float ___m_SmoothingThreshold_2;

public:
	inline static int32_t get_offset_of_m_Quads_0() { return static_cast<int32_t>(offsetof(MeshImportSettings_t6F08DF59075B8BE68AFA465FC29E9539BF6FD901, ___m_Quads_0)); }
	inline bool get_m_Quads_0() const { return ___m_Quads_0; }
	inline bool* get_address_of_m_Quads_0() { return &___m_Quads_0; }
	inline void set_m_Quads_0(bool value)
	{
		___m_Quads_0 = value;
	}

	inline static int32_t get_offset_of_m_Smoothing_1() { return static_cast<int32_t>(offsetof(MeshImportSettings_t6F08DF59075B8BE68AFA465FC29E9539BF6FD901, ___m_Smoothing_1)); }
	inline bool get_m_Smoothing_1() const { return ___m_Smoothing_1; }
	inline bool* get_address_of_m_Smoothing_1() { return &___m_Smoothing_1; }
	inline void set_m_Smoothing_1(bool value)
	{
		___m_Smoothing_1 = value;
	}

	inline static int32_t get_offset_of_m_SmoothingThreshold_2() { return static_cast<int32_t>(offsetof(MeshImportSettings_t6F08DF59075B8BE68AFA465FC29E9539BF6FD901, ___m_SmoothingThreshold_2)); }
	inline float get_m_SmoothingThreshold_2() const { return ___m_SmoothingThreshold_2; }
	inline float* get_address_of_m_SmoothingThreshold_2() { return &___m_SmoothingThreshold_2; }
	inline void set_m_SmoothingThreshold_2(float value)
	{
		___m_SmoothingThreshold_2 = value;
	}
};


// UnityEngine.ProBuilder.MeshOperations.MeshImporter
struct MeshImporter_tE19E710EB2381D78327D684DE65D04C7C7086ED2  : public RuntimeObject
{
public:
	// UnityEngine.Mesh UnityEngine.ProBuilder.MeshOperations.MeshImporter::m_SourceMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_SourceMesh_1;
	// UnityEngine.Material[] UnityEngine.ProBuilder.MeshOperations.MeshImporter::m_SourceMaterials
	MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* ___m_SourceMaterials_2;
	// UnityEngine.ProBuilder.ProBuilderMesh UnityEngine.ProBuilder.MeshOperations.MeshImporter::m_Destination
	ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 * ___m_Destination_3;
	// UnityEngine.ProBuilder.Vertex[] UnityEngine.ProBuilder.MeshOperations.MeshImporter::m_Vertices
	VertexU5BU5D_tF0785965ACC62975D78C2C33316012642204CEC9* ___m_Vertices_4;

public:
	inline static int32_t get_offset_of_m_SourceMesh_1() { return static_cast<int32_t>(offsetof(MeshImporter_tE19E710EB2381D78327D684DE65D04C7C7086ED2, ___m_SourceMesh_1)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_SourceMesh_1() const { return ___m_SourceMesh_1; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_SourceMesh_1() { return &___m_SourceMesh_1; }
	inline void set_m_SourceMesh_1(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_SourceMesh_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SourceMesh_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SourceMaterials_2() { return static_cast<int32_t>(offsetof(MeshImporter_tE19E710EB2381D78327D684DE65D04C7C7086ED2, ___m_SourceMaterials_2)); }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* get_m_SourceMaterials_2() const { return ___m_SourceMaterials_2; }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492** get_address_of_m_SourceMaterials_2() { return &___m_SourceMaterials_2; }
	inline void set_m_SourceMaterials_2(MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* value)
	{
		___m_SourceMaterials_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SourceMaterials_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Destination_3() { return static_cast<int32_t>(offsetof(MeshImporter_tE19E710EB2381D78327D684DE65D04C7C7086ED2, ___m_Destination_3)); }
	inline ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 * get_m_Destination_3() const { return ___m_Destination_3; }
	inline ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 ** get_address_of_m_Destination_3() { return &___m_Destination_3; }
	inline void set_m_Destination_3(ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 * value)
	{
		___m_Destination_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Destination_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Vertices_4() { return static_cast<int32_t>(offsetof(MeshImporter_tE19E710EB2381D78327D684DE65D04C7C7086ED2, ___m_Vertices_4)); }
	inline VertexU5BU5D_tF0785965ACC62975D78C2C33316012642204CEC9* get_m_Vertices_4() const { return ___m_Vertices_4; }
	inline VertexU5BU5D_tF0785965ACC62975D78C2C33316012642204CEC9** get_address_of_m_Vertices_4() { return &___m_Vertices_4; }
	inline void set_m_Vertices_4(VertexU5BU5D_tF0785965ACC62975D78C2C33316012642204CEC9* value)
	{
		___m_Vertices_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Vertices_4), (void*)value);
	}
};

struct MeshImporter_tE19E710EB2381D78327D684DE65D04C7C7086ED2_StaticFields
{
public:
	// UnityEngine.ProBuilder.MeshOperations.MeshImportSettings UnityEngine.ProBuilder.MeshOperations.MeshImporter::k_DefaultImportSettings
	MeshImportSettings_t6F08DF59075B8BE68AFA465FC29E9539BF6FD901 * ___k_DefaultImportSettings_0;

public:
	inline static int32_t get_offset_of_k_DefaultImportSettings_0() { return static_cast<int32_t>(offsetof(MeshImporter_tE19E710EB2381D78327D684DE65D04C7C7086ED2_StaticFields, ___k_DefaultImportSettings_0)); }
	inline MeshImportSettings_t6F08DF59075B8BE68AFA465FC29E9539BF6FD901 * get_k_DefaultImportSettings_0() const { return ___k_DefaultImportSettings_0; }
	inline MeshImportSettings_t6F08DF59075B8BE68AFA465FC29E9539BF6FD901 ** get_address_of_k_DefaultImportSettings_0() { return &___k_DefaultImportSettings_0; }
	inline void set_k_DefaultImportSettings_0(MeshImportSettings_t6F08DF59075B8BE68AFA465FC29E9539BF6FD901 * value)
	{
		___k_DefaultImportSettings_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_DefaultImportSettings_0), (void*)value);
	}
};


// ProBuilder.Examples.Selection
struct Selection_t1FCB1C96E6A79B484E2225A10A53ED29B7A3F760  : public RuntimeObject
{
public:

public:
};

struct Selection_t1FCB1C96E6A79B484E2225A10A53ED29B7A3F760_StaticFields
{
public:
	// System.Collections.Generic.HashSet`1<UnityEngine.ProBuilder.ProBuilderMesh> ProBuilder.Examples.Selection::s_Selection
	HashSet_1_tF6DD03009BA75BA8DDFB365F26AEE379ACA22C91 * ___s_Selection_0;

public:
	inline static int32_t get_offset_of_s_Selection_0() { return static_cast<int32_t>(offsetof(Selection_t1FCB1C96E6A79B484E2225A10A53ED29B7A3F760_StaticFields, ___s_Selection_0)); }
	inline HashSet_1_tF6DD03009BA75BA8DDFB365F26AEE379ACA22C91 * get_s_Selection_0() const { return ___s_Selection_0; }
	inline HashSet_1_tF6DD03009BA75BA8DDFB365F26AEE379ACA22C91 ** get_address_of_s_Selection_0() { return &___s_Selection_0; }
	inline void set_s_Selection_0(HashSet_1_tF6DD03009BA75BA8DDFB365F26AEE379ACA22C91 * value)
	{
		___s_Selection_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selection_0), (void*)value);
	}
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// ProBuilder.Examples.Utility
struct Utility_t8E358E29E9DA77868862419DC678F5F9F6C4294E  : public RuntimeObject
{
public:

public:
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

// ProBuilder.Examples.MeshEditor/MeshState
struct MeshState_tF8D82249D94398E31F98DDD3FF745D3B916D282A  : public RuntimeObject
{
public:
	// UnityEngine.ProBuilder.ProBuilderMesh ProBuilder.Examples.MeshEditor/MeshState::mesh
	ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 * ___mesh_0;
	// UnityEngine.Vector3[] ProBuilder.Examples.MeshEditor/MeshState::vertices
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___vertices_1;
	// UnityEngine.Vector3[] ProBuilder.Examples.MeshEditor/MeshState::origins
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___origins_2;
	// System.Collections.Generic.List`1<System.Int32> ProBuilder.Examples.MeshEditor/MeshState::indices
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___indices_3;

public:
	inline static int32_t get_offset_of_mesh_0() { return static_cast<int32_t>(offsetof(MeshState_tF8D82249D94398E31F98DDD3FF745D3B916D282A, ___mesh_0)); }
	inline ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 * get_mesh_0() const { return ___mesh_0; }
	inline ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 ** get_address_of_mesh_0() { return &___mesh_0; }
	inline void set_mesh_0(ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 * value)
	{
		___mesh_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mesh_0), (void*)value);
	}

	inline static int32_t get_offset_of_vertices_1() { return static_cast<int32_t>(offsetof(MeshState_tF8D82249D94398E31F98DDD3FF745D3B916D282A, ___vertices_1)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_vertices_1() const { return ___vertices_1; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_vertices_1() { return &___vertices_1; }
	inline void set_vertices_1(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___vertices_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vertices_1), (void*)value);
	}

	inline static int32_t get_offset_of_origins_2() { return static_cast<int32_t>(offsetof(MeshState_tF8D82249D94398E31F98DDD3FF745D3B916D282A, ___origins_2)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_origins_2() const { return ___origins_2; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_origins_2() { return &___origins_2; }
	inline void set_origins_2(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___origins_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___origins_2), (void*)value);
	}

	inline static int32_t get_offset_of_indices_3() { return static_cast<int32_t>(offsetof(MeshState_tF8D82249D94398E31F98DDD3FF745D3B916D282A, ___indices_3)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_indices_3() const { return ___indices_3; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_indices_3() { return &___indices_3; }
	inline void set_indices_3(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___indices_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___indices_3), (void*)value);
	}
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


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
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


// UnityEngine.Matrix4x4
struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___identityMatrix_17 = value;
	}
};


// ProBuilder.Examples.MeshAndFace
struct MeshAndFace_t9D166BDF89B6496DF212C761F8EE7CFD5C71C7D5 
{
public:
	// UnityEngine.ProBuilder.ProBuilderMesh ProBuilder.Examples.MeshAndFace::mesh
	ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 * ___mesh_0;
	// UnityEngine.ProBuilder.Face ProBuilder.Examples.MeshAndFace::face
	Face_t670F9C6E42E8D3EEA7AD53AD268426DF37B3AA0B * ___face_1;

public:
	inline static int32_t get_offset_of_mesh_0() { return static_cast<int32_t>(offsetof(MeshAndFace_t9D166BDF89B6496DF212C761F8EE7CFD5C71C7D5, ___mesh_0)); }
	inline ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 * get_mesh_0() const { return ___mesh_0; }
	inline ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 ** get_address_of_mesh_0() { return &___mesh_0; }
	inline void set_mesh_0(ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 * value)
	{
		___mesh_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mesh_0), (void*)value);
	}

	inline static int32_t get_offset_of_face_1() { return static_cast<int32_t>(offsetof(MeshAndFace_t9D166BDF89B6496DF212C761F8EE7CFD5C71C7D5, ___face_1)); }
	inline Face_t670F9C6E42E8D3EEA7AD53AD268426DF37B3AA0B * get_face_1() const { return ___face_1; }
	inline Face_t670F9C6E42E8D3EEA7AD53AD268426DF37B3AA0B ** get_address_of_face_1() { return &___face_1; }
	inline void set_face_1(Face_t670F9C6E42E8D3EEA7AD53AD268426DF37B3AA0B * value)
	{
		___face_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___face_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of ProBuilder.Examples.MeshAndFace
struct MeshAndFace_t9D166BDF89B6496DF212C761F8EE7CFD5C71C7D5_marshaled_pinvoke
{
	ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 * ___mesh_0;
	Face_t670F9C6E42E8D3EEA7AD53AD268426DF37B3AA0B * ___face_1;
};
// Native definition for COM marshalling of ProBuilder.Examples.MeshAndFace
struct MeshAndFace_t9D166BDF89B6496DF212C761F8EE7CFD5C71C7D5_marshaled_com
{
	ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 * ___mesh_0;
	Face_t670F9C6E42E8D3EEA7AD53AD268426DF37B3AA0B * ___face_1;
};

// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Rect
struct Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
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


// UnityEngine.ProBuilder.Axis
struct Axis_t72F21A7A81A67CEC41E794D4BE0A8054A24BE8D0 
{
public:
	// System.Int32 UnityEngine.ProBuilder.Axis::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Axis_t72F21A7A81A67CEC41E794D4BE0A8054A24BE8D0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Bounds
struct Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37, ___m_Center_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37, ___m_Extents_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Extents_1 = value;
	}
};


// UnityEngine.Rendering.CompareFunction
struct CompareFunction_tBF5493E8F362C82B59254A3737D21710E0B70075 
{
public:
	// System.Int32 UnityEngine.Rendering.CompareFunction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CompareFunction_tBF5493E8F362C82B59254A3737D21710E0B70075, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.ProBuilder.ExtrudeMethod
struct ExtrudeMethod_t24A336DCE2603AA1B2A3ED66FD81BA19DCEB2BD4 
{
public:
	// System.Int32 UnityEngine.ProBuilder.ExtrudeMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ExtrudeMethod_t24A336DCE2603AA1B2A3ED66FD81BA19DCEB2BD4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.HideFlags
struct HideFlags_tDC64149E37544FF83B2B4222D3E9DC8188766A12 
{
public:
	// System.Int32 UnityEngine.HideFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HideFlags_tDC64149E37544FF83B2B4222D3E9DC8188766A12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.KeyCode
struct KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.MeshTopology
struct MeshTopology_tF37D1A0C174D5906B715580E7318A21B4263C1A6 
{
public:
	// System.Int32 UnityEngine.MeshTopology::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MeshTopology_tF37D1A0C174D5906B715580E7318A21B4263C1A6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.ProBuilder.PivotLocation
struct PivotLocation_tBFF2B56F11414DE9D00AE2C7A9D397DD74AC8A1E 
{
public:
	// System.Int32 UnityEngine.ProBuilder.PivotLocation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PivotLocation_tBFF2B56F11414DE9D00AE2C7A9D397DD74AC8A1E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Ray
struct Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6, ___m_Origin_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6, ___m_Direction_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Direction_1 = value;
	}
};


// UnityEngine.RaycastHit
struct RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 
{
public:
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Point_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Normal_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_FaceID_2() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_FaceID_2)); }
	inline uint32_t get_m_FaceID_2() const { return ___m_FaceID_2; }
	inline uint32_t* get_address_of_m_FaceID_2() { return &___m_FaceID_2; }
	inline void set_m_FaceID_2(uint32_t value)
	{
		___m_FaceID_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_UV_4() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_UV_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_UV_4() const { return ___m_UV_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_UV_4() { return &___m_UV_4; }
	inline void set_m_UV_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_UV_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
	}
};


// UnityEngine.ProBuilder.RefreshMask
struct RefreshMask_t50F3BB6E36147F8F08D58A9E7A242B0FBBA9A705 
{
public:
	// System.Int32 UnityEngine.ProBuilder.RefreshMask::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RefreshMask_t50F3BB6E36147F8F08D58A9E7A242B0FBBA9A705, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ProBuilder.Examples.ViewTool
struct ViewTool_t123D1BF46243AB8DDBF49A35893783BF821C69C7 
{
public:
	// System.Int32 ProBuilder.Examples.ViewTool::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ViewTool_t123D1BF46243AB8DDBF49A35893783BF821C69C7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.ProBuilder.ActionResult/Status
struct Status_tCCA4E9C152D13D268048550115F578206E695E21 
{
public:
	// System.Int32 UnityEngine.ProBuilder.ActionResult/Status::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Status_tCCA4E9C152D13D268048550115F578206E695E21, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.ProBuilder.AutoUnwrapSettings/Anchor
struct Anchor_tAA0DE70A204573BF46582583B285DA2759D9E6B1 
{
public:
	// System.Int32 UnityEngine.ProBuilder.AutoUnwrapSettings/Anchor::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Anchor_tAA0DE70A204573BF46582583B285DA2759D9E6B1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.ProBuilder.AutoUnwrapSettings/Fill
struct Fill_t633DEE2DB2E38D2AE8617B53CFCD67408172755F 
{
public:
	// System.Int32 UnityEngine.ProBuilder.AutoUnwrapSettings/Fill::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Fill_t633DEE2DB2E38D2AE8617B53CFCD67408172755F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.ProBuilder.ProBuilderMesh/CacheValidState
struct CacheValidState_t3D0A945551B3741E669463D52CE0E4CE0BA55911 
{
public:
	// System.Byte UnityEngine.ProBuilder.ProBuilderMesh/CacheValidState::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CacheValidState_t3D0A945551B3741E669463D52CE0E4CE0BA55911, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.ProBuilder.ActionResult
struct ActionResult_t75240A11EF21E91AF8CC415EB4666333E8D65198  : public RuntimeObject
{
public:
	// UnityEngine.ProBuilder.ActionResult/Status UnityEngine.ProBuilder.ActionResult::<status>k__BackingField
	int32_t ___U3CstatusU3Ek__BackingField_0;
	// System.String UnityEngine.ProBuilder.ActionResult::<notification>k__BackingField
	String_t* ___U3CnotificationU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CstatusU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ActionResult_t75240A11EF21E91AF8CC415EB4666333E8D65198, ___U3CstatusU3Ek__BackingField_0)); }
	inline int32_t get_U3CstatusU3Ek__BackingField_0() const { return ___U3CstatusU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CstatusU3Ek__BackingField_0() { return &___U3CstatusU3Ek__BackingField_0; }
	inline void set_U3CstatusU3Ek__BackingField_0(int32_t value)
	{
		___U3CstatusU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CnotificationU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ActionResult_t75240A11EF21E91AF8CC415EB4666333E8D65198, ___U3CnotificationU3Ek__BackingField_1)); }
	inline String_t* get_U3CnotificationU3Ek__BackingField_1() const { return ___U3CnotificationU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CnotificationU3Ek__BackingField_1() { return &___U3CnotificationU3Ek__BackingField_1; }
	inline void set_U3CnotificationU3Ek__BackingField_1(String_t* value)
	{
		___U3CnotificationU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnotificationU3Ek__BackingField_1), (void*)value);
	}
};


// UnityEngine.ProBuilder.AutoUnwrapSettings
struct AutoUnwrapSettings_tB2126FBA7D5FDDB8947FE6599B5071FE6800ED59 
{
public:
	// System.Boolean UnityEngine.ProBuilder.AutoUnwrapSettings::m_UseWorldSpace
	bool ___m_UseWorldSpace_0;
	// System.Boolean UnityEngine.ProBuilder.AutoUnwrapSettings::m_FlipU
	bool ___m_FlipU_1;
	// System.Boolean UnityEngine.ProBuilder.AutoUnwrapSettings::m_FlipV
	bool ___m_FlipV_2;
	// System.Boolean UnityEngine.ProBuilder.AutoUnwrapSettings::m_SwapUV
	bool ___m_SwapUV_3;
	// UnityEngine.ProBuilder.AutoUnwrapSettings/Fill UnityEngine.ProBuilder.AutoUnwrapSettings::m_Fill
	int32_t ___m_Fill_4;
	// UnityEngine.Vector2 UnityEngine.ProBuilder.AutoUnwrapSettings::m_Scale
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Scale_5;
	// UnityEngine.Vector2 UnityEngine.ProBuilder.AutoUnwrapSettings::m_Offset
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Offset_6;
	// System.Single UnityEngine.ProBuilder.AutoUnwrapSettings::m_Rotation
	float ___m_Rotation_7;
	// UnityEngine.ProBuilder.AutoUnwrapSettings/Anchor UnityEngine.ProBuilder.AutoUnwrapSettings::m_Anchor
	int32_t ___m_Anchor_8;

public:
	inline static int32_t get_offset_of_m_UseWorldSpace_0() { return static_cast<int32_t>(offsetof(AutoUnwrapSettings_tB2126FBA7D5FDDB8947FE6599B5071FE6800ED59, ___m_UseWorldSpace_0)); }
	inline bool get_m_UseWorldSpace_0() const { return ___m_UseWorldSpace_0; }
	inline bool* get_address_of_m_UseWorldSpace_0() { return &___m_UseWorldSpace_0; }
	inline void set_m_UseWorldSpace_0(bool value)
	{
		___m_UseWorldSpace_0 = value;
	}

	inline static int32_t get_offset_of_m_FlipU_1() { return static_cast<int32_t>(offsetof(AutoUnwrapSettings_tB2126FBA7D5FDDB8947FE6599B5071FE6800ED59, ___m_FlipU_1)); }
	inline bool get_m_FlipU_1() const { return ___m_FlipU_1; }
	inline bool* get_address_of_m_FlipU_1() { return &___m_FlipU_1; }
	inline void set_m_FlipU_1(bool value)
	{
		___m_FlipU_1 = value;
	}

	inline static int32_t get_offset_of_m_FlipV_2() { return static_cast<int32_t>(offsetof(AutoUnwrapSettings_tB2126FBA7D5FDDB8947FE6599B5071FE6800ED59, ___m_FlipV_2)); }
	inline bool get_m_FlipV_2() const { return ___m_FlipV_2; }
	inline bool* get_address_of_m_FlipV_2() { return &___m_FlipV_2; }
	inline void set_m_FlipV_2(bool value)
	{
		___m_FlipV_2 = value;
	}

	inline static int32_t get_offset_of_m_SwapUV_3() { return static_cast<int32_t>(offsetof(AutoUnwrapSettings_tB2126FBA7D5FDDB8947FE6599B5071FE6800ED59, ___m_SwapUV_3)); }
	inline bool get_m_SwapUV_3() const { return ___m_SwapUV_3; }
	inline bool* get_address_of_m_SwapUV_3() { return &___m_SwapUV_3; }
	inline void set_m_SwapUV_3(bool value)
	{
		___m_SwapUV_3 = value;
	}

	inline static int32_t get_offset_of_m_Fill_4() { return static_cast<int32_t>(offsetof(AutoUnwrapSettings_tB2126FBA7D5FDDB8947FE6599B5071FE6800ED59, ___m_Fill_4)); }
	inline int32_t get_m_Fill_4() const { return ___m_Fill_4; }
	inline int32_t* get_address_of_m_Fill_4() { return &___m_Fill_4; }
	inline void set_m_Fill_4(int32_t value)
	{
		___m_Fill_4 = value;
	}

	inline static int32_t get_offset_of_m_Scale_5() { return static_cast<int32_t>(offsetof(AutoUnwrapSettings_tB2126FBA7D5FDDB8947FE6599B5071FE6800ED59, ___m_Scale_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Scale_5() const { return ___m_Scale_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Scale_5() { return &___m_Scale_5; }
	inline void set_m_Scale_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Scale_5 = value;
	}

	inline static int32_t get_offset_of_m_Offset_6() { return static_cast<int32_t>(offsetof(AutoUnwrapSettings_tB2126FBA7D5FDDB8947FE6599B5071FE6800ED59, ___m_Offset_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Offset_6() const { return ___m_Offset_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Offset_6() { return &___m_Offset_6; }
	inline void set_m_Offset_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Offset_6 = value;
	}

	inline static int32_t get_offset_of_m_Rotation_7() { return static_cast<int32_t>(offsetof(AutoUnwrapSettings_tB2126FBA7D5FDDB8947FE6599B5071FE6800ED59, ___m_Rotation_7)); }
	inline float get_m_Rotation_7() const { return ___m_Rotation_7; }
	inline float* get_address_of_m_Rotation_7() { return &___m_Rotation_7; }
	inline void set_m_Rotation_7(float value)
	{
		___m_Rotation_7 = value;
	}

	inline static int32_t get_offset_of_m_Anchor_8() { return static_cast<int32_t>(offsetof(AutoUnwrapSettings_tB2126FBA7D5FDDB8947FE6599B5071FE6800ED59, ___m_Anchor_8)); }
	inline int32_t get_m_Anchor_8() const { return ___m_Anchor_8; }
	inline int32_t* get_address_of_m_Anchor_8() { return &___m_Anchor_8; }
	inline void set_m_Anchor_8(int32_t value)
	{
		___m_Anchor_8 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.ProBuilder.AutoUnwrapSettings
struct AutoUnwrapSettings_tB2126FBA7D5FDDB8947FE6599B5071FE6800ED59_marshaled_pinvoke
{
	int32_t ___m_UseWorldSpace_0;
	int32_t ___m_FlipU_1;
	int32_t ___m_FlipV_2;
	int32_t ___m_SwapUV_3;
	int32_t ___m_Fill_4;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Scale_5;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Offset_6;
	float ___m_Rotation_7;
	int32_t ___m_Anchor_8;
};
// Native definition for COM marshalling of UnityEngine.ProBuilder.AutoUnwrapSettings
struct AutoUnwrapSettings_tB2126FBA7D5FDDB8947FE6599B5071FE6800ED59_marshaled_com
{
	int32_t ___m_UseWorldSpace_0;
	int32_t ___m_FlipU_1;
	int32_t ___m_FlipV_2;
	int32_t ___m_SwapUV_3;
	int32_t ___m_Fill_4;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Scale_5;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Offset_6;
	float ___m_Rotation_7;
	int32_t ___m_Anchor_8;
};

// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
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

// UnityEngine.Shader
struct Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// ProBuilder.Examples.MeshEditor/DragState
struct DragState_tBA2431E802EB4BC41D740E5B0B6505805E3DC3AC  : public RuntimeObject
{
public:
	// System.Boolean ProBuilder.Examples.MeshEditor/DragState::active
	bool ___active_0;
	// UnityEngine.Ray ProBuilder.Examples.MeshEditor/DragState::constraint
	Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___constraint_1;
	// System.Single ProBuilder.Examples.MeshEditor/DragState::offset
	float ___offset_2;
	// ProBuilder.Examples.MeshEditor/MeshState ProBuilder.Examples.MeshEditor/DragState::meshState
	MeshState_tF8D82249D94398E31F98DDD3FF745D3B916D282A * ___meshState_3;

public:
	inline static int32_t get_offset_of_active_0() { return static_cast<int32_t>(offsetof(DragState_tBA2431E802EB4BC41D740E5B0B6505805E3DC3AC, ___active_0)); }
	inline bool get_active_0() const { return ___active_0; }
	inline bool* get_address_of_active_0() { return &___active_0; }
	inline void set_active_0(bool value)
	{
		___active_0 = value;
	}

	inline static int32_t get_offset_of_constraint_1() { return static_cast<int32_t>(offsetof(DragState_tBA2431E802EB4BC41D740E5B0B6505805E3DC3AC, ___constraint_1)); }
	inline Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  get_constraint_1() const { return ___constraint_1; }
	inline Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * get_address_of_constraint_1() { return &___constraint_1; }
	inline void set_constraint_1(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  value)
	{
		___constraint_1 = value;
	}

	inline static int32_t get_offset_of_offset_2() { return static_cast<int32_t>(offsetof(DragState_tBA2431E802EB4BC41D740E5B0B6505805E3DC3AC, ___offset_2)); }
	inline float get_offset_2() const { return ___offset_2; }
	inline float* get_address_of_offset_2() { return &___offset_2; }
	inline void set_offset_2(float value)
	{
		___offset_2 = value;
	}

	inline static int32_t get_offset_of_meshState_3() { return static_cast<int32_t>(offsetof(DragState_tBA2431E802EB4BC41D740E5B0B6505805E3DC3AC, ___meshState_3)); }
	inline MeshState_tF8D82249D94398E31F98DDD3FF745D3B916D282A * get_meshState_3() const { return ___meshState_3; }
	inline MeshState_tF8D82249D94398E31F98DDD3FF745D3B916D282A ** get_address_of_meshState_3() { return &___meshState_3; }
	inline void set_meshState_3(MeshState_tF8D82249D94398E31F98DDD3FF745D3B916D282A * value)
	{
		___meshState_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshState_3), (void*)value);
	}
};


// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.ProBuilder.Face
struct Face_t670F9C6E42E8D3EEA7AD53AD268426DF37B3AA0B  : public RuntimeObject
{
public:
	// System.Int32[] UnityEngine.ProBuilder.Face::m_Indexes
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___m_Indexes_0;
	// System.Int32 UnityEngine.ProBuilder.Face::m_SmoothingGroup
	int32_t ___m_SmoothingGroup_1;
	// UnityEngine.ProBuilder.AutoUnwrapSettings UnityEngine.ProBuilder.Face::m_Uv
	AutoUnwrapSettings_tB2126FBA7D5FDDB8947FE6599B5071FE6800ED59  ___m_Uv_2;
	// UnityEngine.Material UnityEngine.ProBuilder.Face::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_3;
	// System.Int32 UnityEngine.ProBuilder.Face::m_SubmeshIndex
	int32_t ___m_SubmeshIndex_4;
	// System.Boolean UnityEngine.ProBuilder.Face::m_ManualUV
	bool ___m_ManualUV_5;
	// System.Int32 UnityEngine.ProBuilder.Face::elementGroup
	int32_t ___elementGroup_6;
	// System.Int32 UnityEngine.ProBuilder.Face::m_TextureGroup
	int32_t ___m_TextureGroup_7;
	// System.Int32[] UnityEngine.ProBuilder.Face::m_DistinctIndexes
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___m_DistinctIndexes_8;
	// UnityEngine.ProBuilder.Edge[] UnityEngine.ProBuilder.Face::m_Edges
	EdgeU5BU5D_t6635B1445F730F12A351F5C2838E61A91AA07381* ___m_Edges_9;

public:
	inline static int32_t get_offset_of_m_Indexes_0() { return static_cast<int32_t>(offsetof(Face_t670F9C6E42E8D3EEA7AD53AD268426DF37B3AA0B, ___m_Indexes_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_m_Indexes_0() const { return ___m_Indexes_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_m_Indexes_0() { return &___m_Indexes_0; }
	inline void set_m_Indexes_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___m_Indexes_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Indexes_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_SmoothingGroup_1() { return static_cast<int32_t>(offsetof(Face_t670F9C6E42E8D3EEA7AD53AD268426DF37B3AA0B, ___m_SmoothingGroup_1)); }
	inline int32_t get_m_SmoothingGroup_1() const { return ___m_SmoothingGroup_1; }
	inline int32_t* get_address_of_m_SmoothingGroup_1() { return &___m_SmoothingGroup_1; }
	inline void set_m_SmoothingGroup_1(int32_t value)
	{
		___m_SmoothingGroup_1 = value;
	}

	inline static int32_t get_offset_of_m_Uv_2() { return static_cast<int32_t>(offsetof(Face_t670F9C6E42E8D3EEA7AD53AD268426DF37B3AA0B, ___m_Uv_2)); }
	inline AutoUnwrapSettings_tB2126FBA7D5FDDB8947FE6599B5071FE6800ED59  get_m_Uv_2() const { return ___m_Uv_2; }
	inline AutoUnwrapSettings_tB2126FBA7D5FDDB8947FE6599B5071FE6800ED59 * get_address_of_m_Uv_2() { return &___m_Uv_2; }
	inline void set_m_Uv_2(AutoUnwrapSettings_tB2126FBA7D5FDDB8947FE6599B5071FE6800ED59  value)
	{
		___m_Uv_2 = value;
	}

	inline static int32_t get_offset_of_m_Material_3() { return static_cast<int32_t>(offsetof(Face_t670F9C6E42E8D3EEA7AD53AD268426DF37B3AA0B, ___m_Material_3)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_3() const { return ___m_Material_3; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_3() { return &___m_Material_3; }
	inline void set_m_Material_3(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SubmeshIndex_4() { return static_cast<int32_t>(offsetof(Face_t670F9C6E42E8D3EEA7AD53AD268426DF37B3AA0B, ___m_SubmeshIndex_4)); }
	inline int32_t get_m_SubmeshIndex_4() const { return ___m_SubmeshIndex_4; }
	inline int32_t* get_address_of_m_SubmeshIndex_4() { return &___m_SubmeshIndex_4; }
	inline void set_m_SubmeshIndex_4(int32_t value)
	{
		___m_SubmeshIndex_4 = value;
	}

	inline static int32_t get_offset_of_m_ManualUV_5() { return static_cast<int32_t>(offsetof(Face_t670F9C6E42E8D3EEA7AD53AD268426DF37B3AA0B, ___m_ManualUV_5)); }
	inline bool get_m_ManualUV_5() const { return ___m_ManualUV_5; }
	inline bool* get_address_of_m_ManualUV_5() { return &___m_ManualUV_5; }
	inline void set_m_ManualUV_5(bool value)
	{
		___m_ManualUV_5 = value;
	}

	inline static int32_t get_offset_of_elementGroup_6() { return static_cast<int32_t>(offsetof(Face_t670F9C6E42E8D3EEA7AD53AD268426DF37B3AA0B, ___elementGroup_6)); }
	inline int32_t get_elementGroup_6() const { return ___elementGroup_6; }
	inline int32_t* get_address_of_elementGroup_6() { return &___elementGroup_6; }
	inline void set_elementGroup_6(int32_t value)
	{
		___elementGroup_6 = value;
	}

	inline static int32_t get_offset_of_m_TextureGroup_7() { return static_cast<int32_t>(offsetof(Face_t670F9C6E42E8D3EEA7AD53AD268426DF37B3AA0B, ___m_TextureGroup_7)); }
	inline int32_t get_m_TextureGroup_7() const { return ___m_TextureGroup_7; }
	inline int32_t* get_address_of_m_TextureGroup_7() { return &___m_TextureGroup_7; }
	inline void set_m_TextureGroup_7(int32_t value)
	{
		___m_TextureGroup_7 = value;
	}

	inline static int32_t get_offset_of_m_DistinctIndexes_8() { return static_cast<int32_t>(offsetof(Face_t670F9C6E42E8D3EEA7AD53AD268426DF37B3AA0B, ___m_DistinctIndexes_8)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_m_DistinctIndexes_8() const { return ___m_DistinctIndexes_8; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_m_DistinctIndexes_8() { return &___m_DistinctIndexes_8; }
	inline void set_m_DistinctIndexes_8(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___m_DistinctIndexes_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DistinctIndexes_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_Edges_9() { return static_cast<int32_t>(offsetof(Face_t670F9C6E42E8D3EEA7AD53AD268426DF37B3AA0B, ___m_Edges_9)); }
	inline EdgeU5BU5D_t6635B1445F730F12A351F5C2838E61A91AA07381* get_m_Edges_9() const { return ___m_Edges_9; }
	inline EdgeU5BU5D_t6635B1445F730F12A351F5C2838E61A91AA07381** get_address_of_m_Edges_9() { return &___m_Edges_9; }
	inline void set_m_Edges_9(EdgeU5BU5D_t6635B1445F730F12A351F5C2838E61A91AA07381* value)
	{
		___m_Edges_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Edges_9), (void*)value);
	}
};


// UnityEngine.MeshFilter
struct MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:

public:
};


// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// ProBuilder.Examples.CameraControls
struct CameraControls_tCC97542CD8ADE300A893D543BD4DF7B790CABFD2  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single ProBuilder.Examples.CameraControls::orbitSpeed
	float ___orbitSpeed_9;
	// System.Single ProBuilder.Examples.CameraControls::zoomSpeed
	float ___zoomSpeed_10;
	// System.Single ProBuilder.Examples.CameraControls::idleRotation
	float ___idleRotation_11;
	// System.Single ProBuilder.Examples.CameraControls::m_Distance
	float ___m_Distance_12;
	// UnityEngine.Vector2 ProBuilder.Examples.CameraControls::m_LookDirection
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_LookDirection_13;

public:
	inline static int32_t get_offset_of_orbitSpeed_9() { return static_cast<int32_t>(offsetof(CameraControls_tCC97542CD8ADE300A893D543BD4DF7B790CABFD2, ___orbitSpeed_9)); }
	inline float get_orbitSpeed_9() const { return ___orbitSpeed_9; }
	inline float* get_address_of_orbitSpeed_9() { return &___orbitSpeed_9; }
	inline void set_orbitSpeed_9(float value)
	{
		___orbitSpeed_9 = value;
	}

	inline static int32_t get_offset_of_zoomSpeed_10() { return static_cast<int32_t>(offsetof(CameraControls_tCC97542CD8ADE300A893D543BD4DF7B790CABFD2, ___zoomSpeed_10)); }
	inline float get_zoomSpeed_10() const { return ___zoomSpeed_10; }
	inline float* get_address_of_zoomSpeed_10() { return &___zoomSpeed_10; }
	inline void set_zoomSpeed_10(float value)
	{
		___zoomSpeed_10 = value;
	}

	inline static int32_t get_offset_of_idleRotation_11() { return static_cast<int32_t>(offsetof(CameraControls_tCC97542CD8ADE300A893D543BD4DF7B790CABFD2, ___idleRotation_11)); }
	inline float get_idleRotation_11() const { return ___idleRotation_11; }
	inline float* get_address_of_idleRotation_11() { return &___idleRotation_11; }
	inline void set_idleRotation_11(float value)
	{
		___idleRotation_11 = value;
	}

	inline static int32_t get_offset_of_m_Distance_12() { return static_cast<int32_t>(offsetof(CameraControls_tCC97542CD8ADE300A893D543BD4DF7B790CABFD2, ___m_Distance_12)); }
	inline float get_m_Distance_12() const { return ___m_Distance_12; }
	inline float* get_address_of_m_Distance_12() { return &___m_Distance_12; }
	inline void set_m_Distance_12(float value)
	{
		___m_Distance_12 = value;
	}

	inline static int32_t get_offset_of_m_LookDirection_13() { return static_cast<int32_t>(offsetof(CameraControls_tCC97542CD8ADE300A893D543BD4DF7B790CABFD2, ___m_LookDirection_13)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_LookDirection_13() const { return ___m_LookDirection_13; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_LookDirection_13() { return &___m_LookDirection_13; }
	inline void set_m_LookDirection_13(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_LookDirection_13 = value;
	}
};


// ProBuilder.Examples.CameraMotion
struct CameraMotion_tB4108D421FA6012FCA161EBD7AF7DA50B4A89F89  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// ProBuilder.Examples.ViewTool ProBuilder.Examples.CameraMotion::<cameraState>k__BackingField
	int32_t ___U3CcameraStateU3Ek__BackingField_4;
	// UnityEngine.Texture2D ProBuilder.Examples.CameraMotion::panCursor
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___panCursor_5;
	// UnityEngine.Texture2D ProBuilder.Examples.CameraMotion::orbitCursor
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___orbitCursor_6;
	// UnityEngine.Texture2D ProBuilder.Examples.CameraMotion::dollyCursor
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___dollyCursor_7;
	// UnityEngine.Texture2D ProBuilder.Examples.CameraMotion::lookCursor
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___lookCursor_8;
	// UnityEngine.Texture2D ProBuilder.Examples.CameraMotion::m_CurrentCursor
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___m_CurrentCursor_9;
	// System.Single ProBuilder.Examples.CameraMotion::moveSpeed
	float ___moveSpeed_19;
	// System.Single ProBuilder.Examples.CameraMotion::lookSpeed
	float ___lookSpeed_20;
	// System.Single ProBuilder.Examples.CameraMotion::orbitSpeed
	float ___orbitSpeed_21;
	// System.Single ProBuilder.Examples.CameraMotion::scrollModifier
	float ___scrollModifier_22;
	// System.Single ProBuilder.Examples.CameraMotion::zoomSpeed
	float ___zoomSpeed_23;
	// System.Boolean ProBuilder.Examples.CameraMotion::m_UseEvent
	bool ___m_UseEvent_24;
	// UnityEngine.Camera ProBuilder.Examples.CameraMotion::m_CameraComponent
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___m_CameraComponent_25;
	// UnityEngine.Transform ProBuilder.Examples.CameraMotion::m_Transform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_Transform_26;
	// UnityEngine.Vector3 ProBuilder.Examples.CameraMotion::m_ScenePivot
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_ScenePivot_27;
	// System.Single ProBuilder.Examples.CameraMotion::m_DistanceToCamera
	float ___m_DistanceToCamera_28;
	// UnityEngine.Vector3 ProBuilder.Examples.CameraMotion::m_PreviousMousePosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_PreviousMousePosition_29;
	// UnityEngine.Rect ProBuilder.Examples.CameraMotion::m_MouseCursorRect
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___m_MouseCursorRect_30;
	// UnityEngine.Rect ProBuilder.Examples.CameraMotion::m_ScreenCenterRect
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___m_ScreenCenterRect_31;
	// System.Boolean ProBuilder.Examples.CameraMotion::m_CurrentActionValid
	bool ___m_CurrentActionValid_32;
	// System.Boolean ProBuilder.Examples.CameraMotion::m_Zooming
	bool ___m_Zooming_33;
	// System.Single ProBuilder.Examples.CameraMotion::m_ZoomProgress
	float ___m_ZoomProgress_34;
	// UnityEngine.Vector3 ProBuilder.Examples.CameraMotion::m_PreviousPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_PreviousPosition_35;
	// UnityEngine.Vector3 ProBuilder.Examples.CameraMotion::m_TargetPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_TargetPosition_36;

public:
	inline static int32_t get_offset_of_U3CcameraStateU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(CameraMotion_tB4108D421FA6012FCA161EBD7AF7DA50B4A89F89, ___U3CcameraStateU3Ek__BackingField_4)); }
	inline int32_t get_U3CcameraStateU3Ek__BackingField_4() const { return ___U3CcameraStateU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CcameraStateU3Ek__BackingField_4() { return &___U3CcameraStateU3Ek__BackingField_4; }
	inline void set_U3CcameraStateU3Ek__BackingField_4(int32_t value)
	{
		___U3CcameraStateU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_panCursor_5() { return static_cast<int32_t>(offsetof(CameraMotion_tB4108D421FA6012FCA161EBD7AF7DA50B4A89F89, ___panCursor_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_panCursor_5() const { return ___panCursor_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_panCursor_5() { return &___panCursor_5; }
	inline void set_panCursor_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___panCursor_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___panCursor_5), (void*)value);
	}

	inline static int32_t get_offset_of_orbitCursor_6() { return static_cast<int32_t>(offsetof(CameraMotion_tB4108D421FA6012FCA161EBD7AF7DA50B4A89F89, ___orbitCursor_6)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_orbitCursor_6() const { return ___orbitCursor_6; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_orbitCursor_6() { return &___orbitCursor_6; }
	inline void set_orbitCursor_6(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___orbitCursor_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___orbitCursor_6), (void*)value);
	}

	inline static int32_t get_offset_of_dollyCursor_7() { return static_cast<int32_t>(offsetof(CameraMotion_tB4108D421FA6012FCA161EBD7AF7DA50B4A89F89, ___dollyCursor_7)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_dollyCursor_7() const { return ___dollyCursor_7; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_dollyCursor_7() { return &___dollyCursor_7; }
	inline void set_dollyCursor_7(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___dollyCursor_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dollyCursor_7), (void*)value);
	}

	inline static int32_t get_offset_of_lookCursor_8() { return static_cast<int32_t>(offsetof(CameraMotion_tB4108D421FA6012FCA161EBD7AF7DA50B4A89F89, ___lookCursor_8)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_lookCursor_8() const { return ___lookCursor_8; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_lookCursor_8() { return &___lookCursor_8; }
	inline void set_lookCursor_8(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___lookCursor_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lookCursor_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentCursor_9() { return static_cast<int32_t>(offsetof(CameraMotion_tB4108D421FA6012FCA161EBD7AF7DA50B4A89F89, ___m_CurrentCursor_9)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_m_CurrentCursor_9() const { return ___m_CurrentCursor_9; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_m_CurrentCursor_9() { return &___m_CurrentCursor_9; }
	inline void set_m_CurrentCursor_9(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___m_CurrentCursor_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentCursor_9), (void*)value);
	}

	inline static int32_t get_offset_of_moveSpeed_19() { return static_cast<int32_t>(offsetof(CameraMotion_tB4108D421FA6012FCA161EBD7AF7DA50B4A89F89, ___moveSpeed_19)); }
	inline float get_moveSpeed_19() const { return ___moveSpeed_19; }
	inline float* get_address_of_moveSpeed_19() { return &___moveSpeed_19; }
	inline void set_moveSpeed_19(float value)
	{
		___moveSpeed_19 = value;
	}

	inline static int32_t get_offset_of_lookSpeed_20() { return static_cast<int32_t>(offsetof(CameraMotion_tB4108D421FA6012FCA161EBD7AF7DA50B4A89F89, ___lookSpeed_20)); }
	inline float get_lookSpeed_20() const { return ___lookSpeed_20; }
	inline float* get_address_of_lookSpeed_20() { return &___lookSpeed_20; }
	inline void set_lookSpeed_20(float value)
	{
		___lookSpeed_20 = value;
	}

	inline static int32_t get_offset_of_orbitSpeed_21() { return static_cast<int32_t>(offsetof(CameraMotion_tB4108D421FA6012FCA161EBD7AF7DA50B4A89F89, ___orbitSpeed_21)); }
	inline float get_orbitSpeed_21() const { return ___orbitSpeed_21; }
	inline float* get_address_of_orbitSpeed_21() { return &___orbitSpeed_21; }
	inline void set_orbitSpeed_21(float value)
	{
		___orbitSpeed_21 = value;
	}

	inline static int32_t get_offset_of_scrollModifier_22() { return static_cast<int32_t>(offsetof(CameraMotion_tB4108D421FA6012FCA161EBD7AF7DA50B4A89F89, ___scrollModifier_22)); }
	inline float get_scrollModifier_22() const { return ___scrollModifier_22; }
	inline float* get_address_of_scrollModifier_22() { return &___scrollModifier_22; }
	inline void set_scrollModifier_22(float value)
	{
		___scrollModifier_22 = value;
	}

	inline static int32_t get_offset_of_zoomSpeed_23() { return static_cast<int32_t>(offsetof(CameraMotion_tB4108D421FA6012FCA161EBD7AF7DA50B4A89F89, ___zoomSpeed_23)); }
	inline float get_zoomSpeed_23() const { return ___zoomSpeed_23; }
	inline float* get_address_of_zoomSpeed_23() { return &___zoomSpeed_23; }
	inline void set_zoomSpeed_23(float value)
	{
		___zoomSpeed_23 = value;
	}

	inline static int32_t get_offset_of_m_UseEvent_24() { return static_cast<int32_t>(offsetof(CameraMotion_tB4108D421FA6012FCA161EBD7AF7DA50B4A89F89, ___m_UseEvent_24)); }
	inline bool get_m_UseEvent_24() const { return ___m_UseEvent_24; }
	inline bool* get_address_of_m_UseEvent_24() { return &___m_UseEvent_24; }
	inline void set_m_UseEvent_24(bool value)
	{
		___m_UseEvent_24 = value;
	}

	inline static int32_t get_offset_of_m_CameraComponent_25() { return static_cast<int32_t>(offsetof(CameraMotion_tB4108D421FA6012FCA161EBD7AF7DA50B4A89F89, ___m_CameraComponent_25)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_m_CameraComponent_25() const { return ___m_CameraComponent_25; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_m_CameraComponent_25() { return &___m_CameraComponent_25; }
	inline void set_m_CameraComponent_25(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___m_CameraComponent_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CameraComponent_25), (void*)value);
	}

	inline static int32_t get_offset_of_m_Transform_26() { return static_cast<int32_t>(offsetof(CameraMotion_tB4108D421FA6012FCA161EBD7AF7DA50B4A89F89, ___m_Transform_26)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_Transform_26() const { return ___m_Transform_26; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_Transform_26() { return &___m_Transform_26; }
	inline void set_m_Transform_26(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_Transform_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Transform_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_ScenePivot_27() { return static_cast<int32_t>(offsetof(CameraMotion_tB4108D421FA6012FCA161EBD7AF7DA50B4A89F89, ___m_ScenePivot_27)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_ScenePivot_27() const { return ___m_ScenePivot_27; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_ScenePivot_27() { return &___m_ScenePivot_27; }
	inline void set_m_ScenePivot_27(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_ScenePivot_27 = value;
	}

	inline static int32_t get_offset_of_m_DistanceToCamera_28() { return static_cast<int32_t>(offsetof(CameraMotion_tB4108D421FA6012FCA161EBD7AF7DA50B4A89F89, ___m_DistanceToCamera_28)); }
	inline float get_m_DistanceToCamera_28() const { return ___m_DistanceToCamera_28; }
	inline float* get_address_of_m_DistanceToCamera_28() { return &___m_DistanceToCamera_28; }
	inline void set_m_DistanceToCamera_28(float value)
	{
		___m_DistanceToCamera_28 = value;
	}

	inline static int32_t get_offset_of_m_PreviousMousePosition_29() { return static_cast<int32_t>(offsetof(CameraMotion_tB4108D421FA6012FCA161EBD7AF7DA50B4A89F89, ___m_PreviousMousePosition_29)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_PreviousMousePosition_29() const { return ___m_PreviousMousePosition_29; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_PreviousMousePosition_29() { return &___m_PreviousMousePosition_29; }
	inline void set_m_PreviousMousePosition_29(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_PreviousMousePosition_29 = value;
	}

	inline static int32_t get_offset_of_m_MouseCursorRect_30() { return static_cast<int32_t>(offsetof(CameraMotion_tB4108D421FA6012FCA161EBD7AF7DA50B4A89F89, ___m_MouseCursorRect_30)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_m_MouseCursorRect_30() const { return ___m_MouseCursorRect_30; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_m_MouseCursorRect_30() { return &___m_MouseCursorRect_30; }
	inline void set_m_MouseCursorRect_30(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___m_MouseCursorRect_30 = value;
	}

	inline static int32_t get_offset_of_m_ScreenCenterRect_31() { return static_cast<int32_t>(offsetof(CameraMotion_tB4108D421FA6012FCA161EBD7AF7DA50B4A89F89, ___m_ScreenCenterRect_31)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_m_ScreenCenterRect_31() const { return ___m_ScreenCenterRect_31; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_m_ScreenCenterRect_31() { return &___m_ScreenCenterRect_31; }
	inline void set_m_ScreenCenterRect_31(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___m_ScreenCenterRect_31 = value;
	}

	inline static int32_t get_offset_of_m_CurrentActionValid_32() { return static_cast<int32_t>(offsetof(CameraMotion_tB4108D421FA6012FCA161EBD7AF7DA50B4A89F89, ___m_CurrentActionValid_32)); }
	inline bool get_m_CurrentActionValid_32() const { return ___m_CurrentActionValid_32; }
	inline bool* get_address_of_m_CurrentActionValid_32() { return &___m_CurrentActionValid_32; }
	inline void set_m_CurrentActionValid_32(bool value)
	{
		___m_CurrentActionValid_32 = value;
	}

	inline static int32_t get_offset_of_m_Zooming_33() { return static_cast<int32_t>(offsetof(CameraMotion_tB4108D421FA6012FCA161EBD7AF7DA50B4A89F89, ___m_Zooming_33)); }
	inline bool get_m_Zooming_33() const { return ___m_Zooming_33; }
	inline bool* get_address_of_m_Zooming_33() { return &___m_Zooming_33; }
	inline void set_m_Zooming_33(bool value)
	{
		___m_Zooming_33 = value;
	}

	inline static int32_t get_offset_of_m_ZoomProgress_34() { return static_cast<int32_t>(offsetof(CameraMotion_tB4108D421FA6012FCA161EBD7AF7DA50B4A89F89, ___m_ZoomProgress_34)); }
	inline float get_m_ZoomProgress_34() const { return ___m_ZoomProgress_34; }
	inline float* get_address_of_m_ZoomProgress_34() { return &___m_ZoomProgress_34; }
	inline void set_m_ZoomProgress_34(float value)
	{
		___m_ZoomProgress_34 = value;
	}

	inline static int32_t get_offset_of_m_PreviousPosition_35() { return static_cast<int32_t>(offsetof(CameraMotion_tB4108D421FA6012FCA161EBD7AF7DA50B4A89F89, ___m_PreviousPosition_35)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_PreviousPosition_35() const { return ___m_PreviousPosition_35; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_PreviousPosition_35() { return &___m_PreviousPosition_35; }
	inline void set_m_PreviousPosition_35(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_PreviousPosition_35 = value;
	}

	inline static int32_t get_offset_of_m_TargetPosition_36() { return static_cast<int32_t>(offsetof(CameraMotion_tB4108D421FA6012FCA161EBD7AF7DA50B4A89F89, ___m_TargetPosition_36)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_TargetPosition_36() const { return ___m_TargetPosition_36; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_TargetPosition_36() { return &___m_TargetPosition_36; }
	inline void set_m_TargetPosition_36(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_TargetPosition_36 = value;
	}
};


// ProBuilder.Examples.CreatePolyShape
struct CreatePolyShape_t075FC86D37A719F7BCB672C4EBF53B00876056A7  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single ProBuilder.Examples.CreatePolyShape::m_RadiusMin
	float ___m_RadiusMin_4;
	// System.Single ProBuilder.Examples.CreatePolyShape::m_RadiusMax
	float ___m_RadiusMax_5;
	// System.Single ProBuilder.Examples.CreatePolyShape::m_Height
	float ___m_Height_6;
	// System.Boolean ProBuilder.Examples.CreatePolyShape::m_FlipNormals
	bool ___m_FlipNormals_7;
	// UnityEngine.ProBuilder.ProBuilderMesh ProBuilder.Examples.CreatePolyShape::m_Mesh
	ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 * ___m_Mesh_8;

public:
	inline static int32_t get_offset_of_m_RadiusMin_4() { return static_cast<int32_t>(offsetof(CreatePolyShape_t075FC86D37A719F7BCB672C4EBF53B00876056A7, ___m_RadiusMin_4)); }
	inline float get_m_RadiusMin_4() const { return ___m_RadiusMin_4; }
	inline float* get_address_of_m_RadiusMin_4() { return &___m_RadiusMin_4; }
	inline void set_m_RadiusMin_4(float value)
	{
		___m_RadiusMin_4 = value;
	}

	inline static int32_t get_offset_of_m_RadiusMax_5() { return static_cast<int32_t>(offsetof(CreatePolyShape_t075FC86D37A719F7BCB672C4EBF53B00876056A7, ___m_RadiusMax_5)); }
	inline float get_m_RadiusMax_5() const { return ___m_RadiusMax_5; }
	inline float* get_address_of_m_RadiusMax_5() { return &___m_RadiusMax_5; }
	inline void set_m_RadiusMax_5(float value)
	{
		___m_RadiusMax_5 = value;
	}

	inline static int32_t get_offset_of_m_Height_6() { return static_cast<int32_t>(offsetof(CreatePolyShape_t075FC86D37A719F7BCB672C4EBF53B00876056A7, ___m_Height_6)); }
	inline float get_m_Height_6() const { return ___m_Height_6; }
	inline float* get_address_of_m_Height_6() { return &___m_Height_6; }
	inline void set_m_Height_6(float value)
	{
		___m_Height_6 = value;
	}

	inline static int32_t get_offset_of_m_FlipNormals_7() { return static_cast<int32_t>(offsetof(CreatePolyShape_t075FC86D37A719F7BCB672C4EBF53B00876056A7, ___m_FlipNormals_7)); }
	inline bool get_m_FlipNormals_7() const { return ___m_FlipNormals_7; }
	inline bool* get_address_of_m_FlipNormals_7() { return &___m_FlipNormals_7; }
	inline void set_m_FlipNormals_7(bool value)
	{
		___m_FlipNormals_7 = value;
	}

	inline static int32_t get_offset_of_m_Mesh_8() { return static_cast<int32_t>(offsetof(CreatePolyShape_t075FC86D37A719F7BCB672C4EBF53B00876056A7, ___m_Mesh_8)); }
	inline ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 * get_m_Mesh_8() const { return ___m_Mesh_8; }
	inline ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 ** get_address_of_m_Mesh_8() { return &___m_Mesh_8; }
	inline void set_m_Mesh_8(ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 * value)
	{
		___m_Mesh_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Mesh_8), (void*)value);
	}
};


// ProBuilder.Examples.Handles
struct Handles_tE2F54FAA2888BCCD78C0B29D9A3D5A83B0DBA092  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Shader ProBuilder.Examples.Handles::m_FaceHighlight
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___m_FaceHighlight_6;
	// UnityEngine.Shader ProBuilder.Examples.Handles::m_LineBillboard
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___m_LineBillboard_7;
	// UnityEngine.Shader ProBuilder.Examples.Handles::m_PointBillboard
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___m_PointBillboard_8;
	// UnityEngine.Shader ProBuilder.Examples.Handles::m_VertexShader
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___m_VertexShader_9;

public:
	inline static int32_t get_offset_of_m_FaceHighlight_6() { return static_cast<int32_t>(offsetof(Handles_tE2F54FAA2888BCCD78C0B29D9A3D5A83B0DBA092, ___m_FaceHighlight_6)); }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * get_m_FaceHighlight_6() const { return ___m_FaceHighlight_6; }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 ** get_address_of_m_FaceHighlight_6() { return &___m_FaceHighlight_6; }
	inline void set_m_FaceHighlight_6(Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * value)
	{
		___m_FaceHighlight_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FaceHighlight_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_LineBillboard_7() { return static_cast<int32_t>(offsetof(Handles_tE2F54FAA2888BCCD78C0B29D9A3D5A83B0DBA092, ___m_LineBillboard_7)); }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * get_m_LineBillboard_7() const { return ___m_LineBillboard_7; }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 ** get_address_of_m_LineBillboard_7() { return &___m_LineBillboard_7; }
	inline void set_m_LineBillboard_7(Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * value)
	{
		___m_LineBillboard_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LineBillboard_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_PointBillboard_8() { return static_cast<int32_t>(offsetof(Handles_tE2F54FAA2888BCCD78C0B29D9A3D5A83B0DBA092, ___m_PointBillboard_8)); }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * get_m_PointBillboard_8() const { return ___m_PointBillboard_8; }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 ** get_address_of_m_PointBillboard_8() { return &___m_PointBillboard_8; }
	inline void set_m_PointBillboard_8(Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * value)
	{
		___m_PointBillboard_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PointBillboard_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertexShader_9() { return static_cast<int32_t>(offsetof(Handles_tE2F54FAA2888BCCD78C0B29D9A3D5A83B0DBA092, ___m_VertexShader_9)); }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * get_m_VertexShader_9() const { return ___m_VertexShader_9; }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 ** get_address_of_m_VertexShader_9() { return &___m_VertexShader_9; }
	inline void set_m_VertexShader_9(Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * value)
	{
		___m_VertexShader_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_VertexShader_9), (void*)value);
	}
};

struct Handles_tE2F54FAA2888BCCD78C0B29D9A3D5A83B0DBA092_StaticFields
{
public:
	// ProBuilder.Examples.Handles ProBuilder.Examples.Handles::s_Instance
	Handles_tE2F54FAA2888BCCD78C0B29D9A3D5A83B0DBA092 * ___s_Instance_4;
	// System.Boolean ProBuilder.Examples.Handles::s_Initialized
	bool ___s_Initialized_5;
	// UnityEngine.Material ProBuilder.Examples.Handles::s_EdgeMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_EdgeMaterial_10;
	// UnityEngine.Material ProBuilder.Examples.Handles::s_VertMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_VertMaterial_11;
	// UnityEngine.Material ProBuilder.Examples.Handles::s_FaceMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_FaceMaterial_12;
	// UnityEngine.ProBuilder.Face[] ProBuilder.Examples.Handles::s_FaceArray
	FaceU5BU5D_t0D522232374325AD8B00CA039B016D822C4F8107* ___s_FaceArray_13;

public:
	inline static int32_t get_offset_of_s_Instance_4() { return static_cast<int32_t>(offsetof(Handles_tE2F54FAA2888BCCD78C0B29D9A3D5A83B0DBA092_StaticFields, ___s_Instance_4)); }
	inline Handles_tE2F54FAA2888BCCD78C0B29D9A3D5A83B0DBA092 * get_s_Instance_4() const { return ___s_Instance_4; }
	inline Handles_tE2F54FAA2888BCCD78C0B29D9A3D5A83B0DBA092 ** get_address_of_s_Instance_4() { return &___s_Instance_4; }
	inline void set_s_Instance_4(Handles_tE2F54FAA2888BCCD78C0B29D9A3D5A83B0DBA092 * value)
	{
		___s_Instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Instance_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_5() { return static_cast<int32_t>(offsetof(Handles_tE2F54FAA2888BCCD78C0B29D9A3D5A83B0DBA092_StaticFields, ___s_Initialized_5)); }
	inline bool get_s_Initialized_5() const { return ___s_Initialized_5; }
	inline bool* get_address_of_s_Initialized_5() { return &___s_Initialized_5; }
	inline void set_s_Initialized_5(bool value)
	{
		___s_Initialized_5 = value;
	}

	inline static int32_t get_offset_of_s_EdgeMaterial_10() { return static_cast<int32_t>(offsetof(Handles_tE2F54FAA2888BCCD78C0B29D9A3D5A83B0DBA092_StaticFields, ___s_EdgeMaterial_10)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_EdgeMaterial_10() const { return ___s_EdgeMaterial_10; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_EdgeMaterial_10() { return &___s_EdgeMaterial_10; }
	inline void set_s_EdgeMaterial_10(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_EdgeMaterial_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EdgeMaterial_10), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertMaterial_11() { return static_cast<int32_t>(offsetof(Handles_tE2F54FAA2888BCCD78C0B29D9A3D5A83B0DBA092_StaticFields, ___s_VertMaterial_11)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_VertMaterial_11() const { return ___s_VertMaterial_11; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_VertMaterial_11() { return &___s_VertMaterial_11; }
	inline void set_s_VertMaterial_11(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_VertMaterial_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertMaterial_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_FaceMaterial_12() { return static_cast<int32_t>(offsetof(Handles_tE2F54FAA2888BCCD78C0B29D9A3D5A83B0DBA092_StaticFields, ___s_FaceMaterial_12)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_FaceMaterial_12() const { return ___s_FaceMaterial_12; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_FaceMaterial_12() { return &___s_FaceMaterial_12; }
	inline void set_s_FaceMaterial_12(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_FaceMaterial_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_FaceMaterial_12), (void*)value);
	}

	inline static int32_t get_offset_of_s_FaceArray_13() { return static_cast<int32_t>(offsetof(Handles_tE2F54FAA2888BCCD78C0B29D9A3D5A83B0DBA092_StaticFields, ___s_FaceArray_13)); }
	inline FaceU5BU5D_t0D522232374325AD8B00CA039B016D822C4F8107* get_s_FaceArray_13() const { return ___s_FaceArray_13; }
	inline FaceU5BU5D_t0D522232374325AD8B00CA039B016D822C4F8107** get_address_of_s_FaceArray_13() { return &___s_FaceArray_13; }
	inline void set_s_FaceArray_13(FaceU5BU5D_t0D522232374325AD8B00CA039B016D822C4F8107* value)
	{
		___s_FaceArray_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_FaceArray_13), (void*)value);
	}
};


// ProBuilder.Examples.HighlightNearestFace
struct HighlightNearestFace_tB488288D0A42BD683ED46ECCE07C7461CFC495C2  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single ProBuilder.Examples.HighlightNearestFace::travel
	float ___travel_4;
	// System.Single ProBuilder.Examples.HighlightNearestFace::speed
	float ___speed_5;
	// UnityEngine.ProBuilder.ProBuilderMesh ProBuilder.Examples.HighlightNearestFace::target
	ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 * ___target_6;
	// UnityEngine.ProBuilder.Face ProBuilder.Examples.HighlightNearestFace::nearest
	Face_t670F9C6E42E8D3EEA7AD53AD268426DF37B3AA0B * ___nearest_7;

public:
	inline static int32_t get_offset_of_travel_4() { return static_cast<int32_t>(offsetof(HighlightNearestFace_tB488288D0A42BD683ED46ECCE07C7461CFC495C2, ___travel_4)); }
	inline float get_travel_4() const { return ___travel_4; }
	inline float* get_address_of_travel_4() { return &___travel_4; }
	inline void set_travel_4(float value)
	{
		___travel_4 = value;
	}

	inline static int32_t get_offset_of_speed_5() { return static_cast<int32_t>(offsetof(HighlightNearestFace_tB488288D0A42BD683ED46ECCE07C7461CFC495C2, ___speed_5)); }
	inline float get_speed_5() const { return ___speed_5; }
	inline float* get_address_of_speed_5() { return &___speed_5; }
	inline void set_speed_5(float value)
	{
		___speed_5 = value;
	}

	inline static int32_t get_offset_of_target_6() { return static_cast<int32_t>(offsetof(HighlightNearestFace_tB488288D0A42BD683ED46ECCE07C7461CFC495C2, ___target_6)); }
	inline ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 * get_target_6() const { return ___target_6; }
	inline ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 ** get_address_of_target_6() { return &___target_6; }
	inline void set_target_6(ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 * value)
	{
		___target_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_6), (void*)value);
	}

	inline static int32_t get_offset_of_nearest_7() { return static_cast<int32_t>(offsetof(HighlightNearestFace_tB488288D0A42BD683ED46ECCE07C7461CFC495C2, ___nearest_7)); }
	inline Face_t670F9C6E42E8D3EEA7AD53AD268426DF37B3AA0B * get_nearest_7() const { return ___nearest_7; }
	inline Face_t670F9C6E42E8D3EEA7AD53AD268426DF37B3AA0B ** get_address_of_nearest_7() { return &___nearest_7; }
	inline void set_nearest_7(Face_t670F9C6E42E8D3EEA7AD53AD268426DF37B3AA0B * value)
	{
		___nearest_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nearest_7), (void*)value);
	}
};


// ProBuilder.Examples.MakePrimitiveEditable
struct MakePrimitiveEditable_tE539C190364AB04850A378BE9EF6B86A54F580F6  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// ProBuilder.Examples.MeshEditor
struct MeshEditor_t439D937C0610CF3351D3C29C662032654E023040  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Camera ProBuilder.Examples.MeshEditor::m_SceneCamera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___m_SceneCamera_4;
	// ProBuilder.Examples.CameraMotion ProBuilder.Examples.MeshEditor::m_CameraMotion
	CameraMotion_tB4108D421FA6012FCA161EBD7AF7DA50B4A89F89 * ___m_CameraMotion_5;
	// ProBuilder.Examples.MeshAndFace ProBuilder.Examples.MeshEditor::m_Selection
	MeshAndFace_t9D166BDF89B6496DF212C761F8EE7CFD5C71C7D5  ___m_Selection_6;
	// ProBuilder.Examples.MeshEditor/DragState ProBuilder.Examples.MeshEditor::m_DragState
	DragState_tBA2431E802EB4BC41D740E5B0B6505805E3DC3AC * ___m_DragState_7;

public:
	inline static int32_t get_offset_of_m_SceneCamera_4() { return static_cast<int32_t>(offsetof(MeshEditor_t439D937C0610CF3351D3C29C662032654E023040, ___m_SceneCamera_4)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_m_SceneCamera_4() const { return ___m_SceneCamera_4; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_m_SceneCamera_4() { return &___m_SceneCamera_4; }
	inline void set_m_SceneCamera_4(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___m_SceneCamera_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SceneCamera_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_CameraMotion_5() { return static_cast<int32_t>(offsetof(MeshEditor_t439D937C0610CF3351D3C29C662032654E023040, ___m_CameraMotion_5)); }
	inline CameraMotion_tB4108D421FA6012FCA161EBD7AF7DA50B4A89F89 * get_m_CameraMotion_5() const { return ___m_CameraMotion_5; }
	inline CameraMotion_tB4108D421FA6012FCA161EBD7AF7DA50B4A89F89 ** get_address_of_m_CameraMotion_5() { return &___m_CameraMotion_5; }
	inline void set_m_CameraMotion_5(CameraMotion_tB4108D421FA6012FCA161EBD7AF7DA50B4A89F89 * value)
	{
		___m_CameraMotion_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CameraMotion_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_Selection_6() { return static_cast<int32_t>(offsetof(MeshEditor_t439D937C0610CF3351D3C29C662032654E023040, ___m_Selection_6)); }
	inline MeshAndFace_t9D166BDF89B6496DF212C761F8EE7CFD5C71C7D5  get_m_Selection_6() const { return ___m_Selection_6; }
	inline MeshAndFace_t9D166BDF89B6496DF212C761F8EE7CFD5C71C7D5 * get_address_of_m_Selection_6() { return &___m_Selection_6; }
	inline void set_m_Selection_6(MeshAndFace_t9D166BDF89B6496DF212C761F8EE7CFD5C71C7D5  value)
	{
		___m_Selection_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Selection_6))->___mesh_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Selection_6))->___face_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_DragState_7() { return static_cast<int32_t>(offsetof(MeshEditor_t439D937C0610CF3351D3C29C662032654E023040, ___m_DragState_7)); }
	inline DragState_tBA2431E802EB4BC41D740E5B0B6505805E3DC3AC * get_m_DragState_7() const { return ___m_DragState_7; }
	inline DragState_tBA2431E802EB4BC41D740E5B0B6505805E3DC3AC ** get_address_of_m_DragState_7() { return &___m_DragState_7; }
	inline void set_m_DragState_7(DragState_tBA2431E802EB4BC41D740E5B0B6505805E3DC3AC * value)
	{
		___m_DragState_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DragState_7), (void*)value);
	}
};


// UnityEngine.ProBuilder.ProBuilderMesh
struct ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 UnityEngine.ProBuilder.ProBuilderMesh::m_MeshFormatVersion
	int32_t ___m_MeshFormatVersion_9;
	// UnityEngine.ProBuilder.Face[] UnityEngine.ProBuilder.ProBuilderMesh::m_Faces
	FaceU5BU5D_t0D522232374325AD8B00CA039B016D822C4F8107* ___m_Faces_10;
	// UnityEngine.ProBuilder.SharedVertex[] UnityEngine.ProBuilder.ProBuilderMesh::m_SharedVertices
	SharedVertexU5BU5D_tA15BD8E3618099DAC98FF39AC05B844E763C843A* ___m_SharedVertices_11;
	// UnityEngine.ProBuilder.ProBuilderMesh/CacheValidState UnityEngine.ProBuilder.ProBuilderMesh::m_CacheValid
	uint8_t ___m_CacheValid_12;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> UnityEngine.ProBuilder.ProBuilderMesh::m_SharedVertexLookup
	Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * ___m_SharedVertexLookup_13;
	// UnityEngine.ProBuilder.SharedVertex[] UnityEngine.ProBuilder.ProBuilderMesh::m_SharedTextures
	SharedVertexU5BU5D_tA15BD8E3618099DAC98FF39AC05B844E763C843A* ___m_SharedTextures_14;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> UnityEngine.ProBuilder.ProBuilderMesh::m_SharedTextureLookup
	Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * ___m_SharedTextureLookup_15;
	// UnityEngine.Vector3[] UnityEngine.ProBuilder.ProBuilderMesh::m_Positions
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Positions_16;
	// UnityEngine.Vector2[] UnityEngine.ProBuilder.ProBuilderMesh::m_Textures0
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_Textures0_17;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.ProBuilder.ProBuilderMesh::m_Textures2
	List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * ___m_Textures2_18;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.ProBuilder.ProBuilderMesh::m_Textures3
	List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * ___m_Textures3_19;
	// UnityEngine.Vector4[] UnityEngine.ProBuilder.ProBuilderMesh::m_Tangents
	Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* ___m_Tangents_20;
	// UnityEngine.Vector3[] UnityEngine.ProBuilder.ProBuilderMesh::m_Normals
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Normals_21;
	// UnityEngine.Color[] UnityEngine.ProBuilder.ProBuilderMesh::m_Colors
	ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* ___m_Colors_22;
	// System.Boolean UnityEngine.ProBuilder.ProBuilderMesh::<userCollisions>k__BackingField
	bool ___U3CuserCollisionsU3Ek__BackingField_23;
	// UnityEngine.ProBuilder.UnwrapParameters UnityEngine.ProBuilder.ProBuilderMesh::m_UnwrapParameters
	UnwrapParameters_tAE98DF64B01A1D09ABD69C8CB9A6227C38DE2A80 * ___m_UnwrapParameters_24;
	// System.Boolean UnityEngine.ProBuilder.ProBuilderMesh::m_PreserveMeshAssetOnDestroy
	bool ___m_PreserveMeshAssetOnDestroy_25;
	// System.String UnityEngine.ProBuilder.ProBuilderMesh::assetGuid
	String_t* ___assetGuid_26;
	// UnityEngine.Mesh UnityEngine.ProBuilder.ProBuilderMesh::m_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_Mesh_27;
	// UnityEngine.MeshRenderer UnityEngine.ProBuilder.ProBuilderMesh::m_MeshRenderer
	MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * ___m_MeshRenderer_28;
	// UnityEngine.MeshFilter UnityEngine.ProBuilder.ProBuilderMesh::m_MeshFilter
	MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * ___m_MeshFilter_29;
	// System.Boolean UnityEngine.ProBuilder.ProBuilderMesh::m_IsSelectable
	bool ___m_IsSelectable_35;
	// System.Int32[] UnityEngine.ProBuilder.ProBuilderMesh::m_SelectedFaces
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___m_SelectedFaces_36;
	// UnityEngine.ProBuilder.Edge[] UnityEngine.ProBuilder.ProBuilderMesh::m_SelectedEdges
	EdgeU5BU5D_t6635B1445F730F12A351F5C2838E61A91AA07381* ___m_SelectedEdges_37;
	// System.Int32[] UnityEngine.ProBuilder.ProBuilderMesh::m_SelectedVertices
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___m_SelectedVertices_38;
	// System.Boolean UnityEngine.ProBuilder.ProBuilderMesh::m_SelectedCacheDirty
	bool ___m_SelectedCacheDirty_39;
	// System.Int32 UnityEngine.ProBuilder.ProBuilderMesh::m_SelectedSharedVerticesCount
	int32_t ___m_SelectedSharedVerticesCount_40;
	// System.Int32 UnityEngine.ProBuilder.ProBuilderMesh::m_SelectedCoincidentVertexCount
	int32_t ___m_SelectedCoincidentVertexCount_41;
	// System.Collections.Generic.HashSet`1<System.Int32> UnityEngine.ProBuilder.ProBuilderMesh::m_SelectedSharedVertices
	HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 * ___m_SelectedSharedVertices_42;
	// System.Collections.Generic.List`1<System.Int32> UnityEngine.ProBuilder.ProBuilderMesh::m_SelectedCoincidentVertices
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___m_SelectedCoincidentVertices_43;

public:
	inline static int32_t get_offset_of_m_MeshFormatVersion_9() { return static_cast<int32_t>(offsetof(ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06, ___m_MeshFormatVersion_9)); }
	inline int32_t get_m_MeshFormatVersion_9() const { return ___m_MeshFormatVersion_9; }
	inline int32_t* get_address_of_m_MeshFormatVersion_9() { return &___m_MeshFormatVersion_9; }
	inline void set_m_MeshFormatVersion_9(int32_t value)
	{
		___m_MeshFormatVersion_9 = value;
	}

	inline static int32_t get_offset_of_m_Faces_10() { return static_cast<int32_t>(offsetof(ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06, ___m_Faces_10)); }
	inline FaceU5BU5D_t0D522232374325AD8B00CA039B016D822C4F8107* get_m_Faces_10() const { return ___m_Faces_10; }
	inline FaceU5BU5D_t0D522232374325AD8B00CA039B016D822C4F8107** get_address_of_m_Faces_10() { return &___m_Faces_10; }
	inline void set_m_Faces_10(FaceU5BU5D_t0D522232374325AD8B00CA039B016D822C4F8107* value)
	{
		___m_Faces_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Faces_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_SharedVertices_11() { return static_cast<int32_t>(offsetof(ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06, ___m_SharedVertices_11)); }
	inline SharedVertexU5BU5D_tA15BD8E3618099DAC98FF39AC05B844E763C843A* get_m_SharedVertices_11() const { return ___m_SharedVertices_11; }
	inline SharedVertexU5BU5D_tA15BD8E3618099DAC98FF39AC05B844E763C843A** get_address_of_m_SharedVertices_11() { return &___m_SharedVertices_11; }
	inline void set_m_SharedVertices_11(SharedVertexU5BU5D_tA15BD8E3618099DAC98FF39AC05B844E763C843A* value)
	{
		___m_SharedVertices_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SharedVertices_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_CacheValid_12() { return static_cast<int32_t>(offsetof(ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06, ___m_CacheValid_12)); }
	inline uint8_t get_m_CacheValid_12() const { return ___m_CacheValid_12; }
	inline uint8_t* get_address_of_m_CacheValid_12() { return &___m_CacheValid_12; }
	inline void set_m_CacheValid_12(uint8_t value)
	{
		___m_CacheValid_12 = value;
	}

	inline static int32_t get_offset_of_m_SharedVertexLookup_13() { return static_cast<int32_t>(offsetof(ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06, ___m_SharedVertexLookup_13)); }
	inline Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * get_m_SharedVertexLookup_13() const { return ___m_SharedVertexLookup_13; }
	inline Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 ** get_address_of_m_SharedVertexLookup_13() { return &___m_SharedVertexLookup_13; }
	inline void set_m_SharedVertexLookup_13(Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * value)
	{
		___m_SharedVertexLookup_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SharedVertexLookup_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_SharedTextures_14() { return static_cast<int32_t>(offsetof(ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06, ___m_SharedTextures_14)); }
	inline SharedVertexU5BU5D_tA15BD8E3618099DAC98FF39AC05B844E763C843A* get_m_SharedTextures_14() const { return ___m_SharedTextures_14; }
	inline SharedVertexU5BU5D_tA15BD8E3618099DAC98FF39AC05B844E763C843A** get_address_of_m_SharedTextures_14() { return &___m_SharedTextures_14; }
	inline void set_m_SharedTextures_14(SharedVertexU5BU5D_tA15BD8E3618099DAC98FF39AC05B844E763C843A* value)
	{
		___m_SharedTextures_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SharedTextures_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_SharedTextureLookup_15() { return static_cast<int32_t>(offsetof(ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06, ___m_SharedTextureLookup_15)); }
	inline Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * get_m_SharedTextureLookup_15() const { return ___m_SharedTextureLookup_15; }
	inline Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 ** get_address_of_m_SharedTextureLookup_15() { return &___m_SharedTextureLookup_15; }
	inline void set_m_SharedTextureLookup_15(Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * value)
	{
		___m_SharedTextureLookup_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SharedTextureLookup_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_Positions_16() { return static_cast<int32_t>(offsetof(ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06, ___m_Positions_16)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Positions_16() const { return ___m_Positions_16; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Positions_16() { return &___m_Positions_16; }
	inline void set_m_Positions_16(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Positions_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Positions_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_Textures0_17() { return static_cast<int32_t>(offsetof(ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06, ___m_Textures0_17)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_Textures0_17() const { return ___m_Textures0_17; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_Textures0_17() { return &___m_Textures0_17; }
	inline void set_m_Textures0_17(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_Textures0_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Textures0_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_Textures2_18() { return static_cast<int32_t>(offsetof(ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06, ___m_Textures2_18)); }
	inline List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * get_m_Textures2_18() const { return ___m_Textures2_18; }
	inline List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A ** get_address_of_m_Textures2_18() { return &___m_Textures2_18; }
	inline void set_m_Textures2_18(List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * value)
	{
		___m_Textures2_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Textures2_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_Textures3_19() { return static_cast<int32_t>(offsetof(ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06, ___m_Textures3_19)); }
	inline List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * get_m_Textures3_19() const { return ___m_Textures3_19; }
	inline List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A ** get_address_of_m_Textures3_19() { return &___m_Textures3_19; }
	inline void set_m_Textures3_19(List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * value)
	{
		___m_Textures3_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Textures3_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_Tangents_20() { return static_cast<int32_t>(offsetof(ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06, ___m_Tangents_20)); }
	inline Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* get_m_Tangents_20() const { return ___m_Tangents_20; }
	inline Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871** get_address_of_m_Tangents_20() { return &___m_Tangents_20; }
	inline void set_m_Tangents_20(Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* value)
	{
		___m_Tangents_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Tangents_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_Normals_21() { return static_cast<int32_t>(offsetof(ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06, ___m_Normals_21)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Normals_21() const { return ___m_Normals_21; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Normals_21() { return &___m_Normals_21; }
	inline void set_m_Normals_21(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Normals_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Normals_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_Colors_22() { return static_cast<int32_t>(offsetof(ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06, ___m_Colors_22)); }
	inline ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* get_m_Colors_22() const { return ___m_Colors_22; }
	inline ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834** get_address_of_m_Colors_22() { return &___m_Colors_22; }
	inline void set_m_Colors_22(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* value)
	{
		___m_Colors_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Colors_22), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuserCollisionsU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06, ___U3CuserCollisionsU3Ek__BackingField_23)); }
	inline bool get_U3CuserCollisionsU3Ek__BackingField_23() const { return ___U3CuserCollisionsU3Ek__BackingField_23; }
	inline bool* get_address_of_U3CuserCollisionsU3Ek__BackingField_23() { return &___U3CuserCollisionsU3Ek__BackingField_23; }
	inline void set_U3CuserCollisionsU3Ek__BackingField_23(bool value)
	{
		___U3CuserCollisionsU3Ek__BackingField_23 = value;
	}

	inline static int32_t get_offset_of_m_UnwrapParameters_24() { return static_cast<int32_t>(offsetof(ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06, ___m_UnwrapParameters_24)); }
	inline UnwrapParameters_tAE98DF64B01A1D09ABD69C8CB9A6227C38DE2A80 * get_m_UnwrapParameters_24() const { return ___m_UnwrapParameters_24; }
	inline UnwrapParameters_tAE98DF64B01A1D09ABD69C8CB9A6227C38DE2A80 ** get_address_of_m_UnwrapParameters_24() { return &___m_UnwrapParameters_24; }
	inline void set_m_UnwrapParameters_24(UnwrapParameters_tAE98DF64B01A1D09ABD69C8CB9A6227C38DE2A80 * value)
	{
		___m_UnwrapParameters_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UnwrapParameters_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_PreserveMeshAssetOnDestroy_25() { return static_cast<int32_t>(offsetof(ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06, ___m_PreserveMeshAssetOnDestroy_25)); }
	inline bool get_m_PreserveMeshAssetOnDestroy_25() const { return ___m_PreserveMeshAssetOnDestroy_25; }
	inline bool* get_address_of_m_PreserveMeshAssetOnDestroy_25() { return &___m_PreserveMeshAssetOnDestroy_25; }
	inline void set_m_PreserveMeshAssetOnDestroy_25(bool value)
	{
		___m_PreserveMeshAssetOnDestroy_25 = value;
	}

	inline static int32_t get_offset_of_assetGuid_26() { return static_cast<int32_t>(offsetof(ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06, ___assetGuid_26)); }
	inline String_t* get_assetGuid_26() const { return ___assetGuid_26; }
	inline String_t** get_address_of_assetGuid_26() { return &___assetGuid_26; }
	inline void set_assetGuid_26(String_t* value)
	{
		___assetGuid_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___assetGuid_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_Mesh_27() { return static_cast<int32_t>(offsetof(ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06, ___m_Mesh_27)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_Mesh_27() const { return ___m_Mesh_27; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_Mesh_27() { return &___m_Mesh_27; }
	inline void set_m_Mesh_27(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_Mesh_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Mesh_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_MeshRenderer_28() { return static_cast<int32_t>(offsetof(ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06, ___m_MeshRenderer_28)); }
	inline MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * get_m_MeshRenderer_28() const { return ___m_MeshRenderer_28; }
	inline MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B ** get_address_of_m_MeshRenderer_28() { return &___m_MeshRenderer_28; }
	inline void set_m_MeshRenderer_28(MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * value)
	{
		___m_MeshRenderer_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MeshRenderer_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_MeshFilter_29() { return static_cast<int32_t>(offsetof(ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06, ___m_MeshFilter_29)); }
	inline MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * get_m_MeshFilter_29() const { return ___m_MeshFilter_29; }
	inline MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A ** get_address_of_m_MeshFilter_29() { return &___m_MeshFilter_29; }
	inline void set_m_MeshFilter_29(MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * value)
	{
		___m_MeshFilter_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MeshFilter_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_IsSelectable_35() { return static_cast<int32_t>(offsetof(ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06, ___m_IsSelectable_35)); }
	inline bool get_m_IsSelectable_35() const { return ___m_IsSelectable_35; }
	inline bool* get_address_of_m_IsSelectable_35() { return &___m_IsSelectable_35; }
	inline void set_m_IsSelectable_35(bool value)
	{
		___m_IsSelectable_35 = value;
	}

	inline static int32_t get_offset_of_m_SelectedFaces_36() { return static_cast<int32_t>(offsetof(ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06, ___m_SelectedFaces_36)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_m_SelectedFaces_36() const { return ___m_SelectedFaces_36; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_m_SelectedFaces_36() { return &___m_SelectedFaces_36; }
	inline void set_m_SelectedFaces_36(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___m_SelectedFaces_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedFaces_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedEdges_37() { return static_cast<int32_t>(offsetof(ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06, ___m_SelectedEdges_37)); }
	inline EdgeU5BU5D_t6635B1445F730F12A351F5C2838E61A91AA07381* get_m_SelectedEdges_37() const { return ___m_SelectedEdges_37; }
	inline EdgeU5BU5D_t6635B1445F730F12A351F5C2838E61A91AA07381** get_address_of_m_SelectedEdges_37() { return &___m_SelectedEdges_37; }
	inline void set_m_SelectedEdges_37(EdgeU5BU5D_t6635B1445F730F12A351F5C2838E61A91AA07381* value)
	{
		___m_SelectedEdges_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedEdges_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedVertices_38() { return static_cast<int32_t>(offsetof(ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06, ___m_SelectedVertices_38)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_m_SelectedVertices_38() const { return ___m_SelectedVertices_38; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_m_SelectedVertices_38() { return &___m_SelectedVertices_38; }
	inline void set_m_SelectedVertices_38(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___m_SelectedVertices_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedVertices_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedCacheDirty_39() { return static_cast<int32_t>(offsetof(ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06, ___m_SelectedCacheDirty_39)); }
	inline bool get_m_SelectedCacheDirty_39() const { return ___m_SelectedCacheDirty_39; }
	inline bool* get_address_of_m_SelectedCacheDirty_39() { return &___m_SelectedCacheDirty_39; }
	inline void set_m_SelectedCacheDirty_39(bool value)
	{
		___m_SelectedCacheDirty_39 = value;
	}

	inline static int32_t get_offset_of_m_SelectedSharedVerticesCount_40() { return static_cast<int32_t>(offsetof(ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06, ___m_SelectedSharedVerticesCount_40)); }
	inline int32_t get_m_SelectedSharedVerticesCount_40() const { return ___m_SelectedSharedVerticesCount_40; }
	inline int32_t* get_address_of_m_SelectedSharedVerticesCount_40() { return &___m_SelectedSharedVerticesCount_40; }
	inline void set_m_SelectedSharedVerticesCount_40(int32_t value)
	{
		___m_SelectedSharedVerticesCount_40 = value;
	}

	inline static int32_t get_offset_of_m_SelectedCoincidentVertexCount_41() { return static_cast<int32_t>(offsetof(ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06, ___m_SelectedCoincidentVertexCount_41)); }
	inline int32_t get_m_SelectedCoincidentVertexCount_41() const { return ___m_SelectedCoincidentVertexCount_41; }
	inline int32_t* get_address_of_m_SelectedCoincidentVertexCount_41() { return &___m_SelectedCoincidentVertexCount_41; }
	inline void set_m_SelectedCoincidentVertexCount_41(int32_t value)
	{
		___m_SelectedCoincidentVertexCount_41 = value;
	}

	inline static int32_t get_offset_of_m_SelectedSharedVertices_42() { return static_cast<int32_t>(offsetof(ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06, ___m_SelectedSharedVertices_42)); }
	inline HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 * get_m_SelectedSharedVertices_42() const { return ___m_SelectedSharedVertices_42; }
	inline HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 ** get_address_of_m_SelectedSharedVertices_42() { return &___m_SelectedSharedVertices_42; }
	inline void set_m_SelectedSharedVertices_42(HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 * value)
	{
		___m_SelectedSharedVertices_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSharedVertices_42), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedCoincidentVertices_43() { return static_cast<int32_t>(offsetof(ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06, ___m_SelectedCoincidentVertices_43)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_m_SelectedCoincidentVertices_43() const { return ___m_SelectedCoincidentVertices_43; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_m_SelectedCoincidentVertices_43() { return &___m_SelectedCoincidentVertices_43; }
	inline void set_m_SelectedCoincidentVertices_43(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___m_SelectedCoincidentVertices_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedCoincidentVertices_43), (void*)value);
	}
};

struct ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06_StaticFields
{
public:
	// System.Action`1<UnityEngine.ProBuilder.ProBuilderMesh> UnityEngine.ProBuilder.ProBuilderMesh::meshWillBeDestroyed
	Action_1_t0D8A0BA7730CBC954C3C2FC290CA184A931853F4 * ___meshWillBeDestroyed_30;
	// System.Action`1<UnityEngine.ProBuilder.ProBuilderMesh> UnityEngine.ProBuilder.ProBuilderMesh::componentWillBeDestroyed
	Action_1_t0D8A0BA7730CBC954C3C2FC290CA184A931853F4 * ___componentWillBeDestroyed_31;
	// System.Action`1<UnityEngine.ProBuilder.ProBuilderMesh> UnityEngine.ProBuilder.ProBuilderMesh::componentHasBeenReset
	Action_1_t0D8A0BA7730CBC954C3C2FC290CA184A931853F4 * ___componentHasBeenReset_32;
	// System.Action`1<UnityEngine.ProBuilder.ProBuilderMesh> UnityEngine.ProBuilder.ProBuilderMesh::elementSelectionChanged
	Action_1_t0D8A0BA7730CBC954C3C2FC290CA184A931853F4 * ___elementSelectionChanged_33;
	// System.Collections.Generic.HashSet`1<System.Int32> UnityEngine.ProBuilder.ProBuilderMesh::s_CachedHashSet
	HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 * ___s_CachedHashSet_34;

public:
	inline static int32_t get_offset_of_meshWillBeDestroyed_30() { return static_cast<int32_t>(offsetof(ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06_StaticFields, ___meshWillBeDestroyed_30)); }
	inline Action_1_t0D8A0BA7730CBC954C3C2FC290CA184A931853F4 * get_meshWillBeDestroyed_30() const { return ___meshWillBeDestroyed_30; }
	inline Action_1_t0D8A0BA7730CBC954C3C2FC290CA184A931853F4 ** get_address_of_meshWillBeDestroyed_30() { return &___meshWillBeDestroyed_30; }
	inline void set_meshWillBeDestroyed_30(Action_1_t0D8A0BA7730CBC954C3C2FC290CA184A931853F4 * value)
	{
		___meshWillBeDestroyed_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshWillBeDestroyed_30), (void*)value);
	}

	inline static int32_t get_offset_of_componentWillBeDestroyed_31() { return static_cast<int32_t>(offsetof(ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06_StaticFields, ___componentWillBeDestroyed_31)); }
	inline Action_1_t0D8A0BA7730CBC954C3C2FC290CA184A931853F4 * get_componentWillBeDestroyed_31() const { return ___componentWillBeDestroyed_31; }
	inline Action_1_t0D8A0BA7730CBC954C3C2FC290CA184A931853F4 ** get_address_of_componentWillBeDestroyed_31() { return &___componentWillBeDestroyed_31; }
	inline void set_componentWillBeDestroyed_31(Action_1_t0D8A0BA7730CBC954C3C2FC290CA184A931853F4 * value)
	{
		___componentWillBeDestroyed_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___componentWillBeDestroyed_31), (void*)value);
	}

	inline static int32_t get_offset_of_componentHasBeenReset_32() { return static_cast<int32_t>(offsetof(ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06_StaticFields, ___componentHasBeenReset_32)); }
	inline Action_1_t0D8A0BA7730CBC954C3C2FC290CA184A931853F4 * get_componentHasBeenReset_32() const { return ___componentHasBeenReset_32; }
	inline Action_1_t0D8A0BA7730CBC954C3C2FC290CA184A931853F4 ** get_address_of_componentHasBeenReset_32() { return &___componentHasBeenReset_32; }
	inline void set_componentHasBeenReset_32(Action_1_t0D8A0BA7730CBC954C3C2FC290CA184A931853F4 * value)
	{
		___componentHasBeenReset_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___componentHasBeenReset_32), (void*)value);
	}

	inline static int32_t get_offset_of_elementSelectionChanged_33() { return static_cast<int32_t>(offsetof(ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06_StaticFields, ___elementSelectionChanged_33)); }
	inline Action_1_t0D8A0BA7730CBC954C3C2FC290CA184A931853F4 * get_elementSelectionChanged_33() const { return ___elementSelectionChanged_33; }
	inline Action_1_t0D8A0BA7730CBC954C3C2FC290CA184A931853F4 ** get_address_of_elementSelectionChanged_33() { return &___elementSelectionChanged_33; }
	inline void set_elementSelectionChanged_33(Action_1_t0D8A0BA7730CBC954C3C2FC290CA184A931853F4 * value)
	{
		___elementSelectionChanged_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___elementSelectionChanged_33), (void*)value);
	}

	inline static int32_t get_offset_of_s_CachedHashSet_34() { return static_cast<int32_t>(offsetof(ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06_StaticFields, ___s_CachedHashSet_34)); }
	inline HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 * get_s_CachedHashSet_34() const { return ___s_CachedHashSet_34; }
	inline HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 ** get_address_of_s_CachedHashSet_34() { return &___s_CachedHashSet_34; }
	inline void set_s_CachedHashSet_34(HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 * value)
	{
		___s_CachedHashSet_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_CachedHashSet_34), (void*)value);
	}
};


// ProBuilder.Examples.SimpleGrid
struct SimpleGrid_t569734AD487C867DC8CBB9B276C2572003A7E2BE  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 ProBuilder.Examples.SimpleGrid::lines
	int32_t ___lines_4;
	// System.Single ProBuilder.Examples.SimpleGrid::scale
	float ___scale_5;

public:
	inline static int32_t get_offset_of_lines_4() { return static_cast<int32_t>(offsetof(SimpleGrid_t569734AD487C867DC8CBB9B276C2572003A7E2BE, ___lines_4)); }
	inline int32_t get_lines_4() const { return ___lines_4; }
	inline int32_t* get_address_of_lines_4() { return &___lines_4; }
	inline void set_lines_4(int32_t value)
	{
		___lines_4 = value;
	}

	inline static int32_t get_offset_of_scale_5() { return static_cast<int32_t>(offsetof(SimpleGrid_t569734AD487C867DC8CBB9B276C2572003A7E2BE, ___scale_5)); }
	inline float get_scale_5() const { return ___scale_5; }
	inline float* get_address_of_scale_5() { return &___scale_5; }
	inline void set_scale_5(float value)
	{
		___scale_5 = value;
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.EventSystems.EventSystem
struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 * ___m_SystemInputModules_4;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 * ___m_CurrentInputModule_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_FirstSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_8;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_9;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_CurrentSelected_10;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_11;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_12;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___m_DummyData_13;

public:
	inline static int32_t get_offset_of_m_SystemInputModules_4() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_SystemInputModules_4)); }
	inline List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 * get_m_SystemInputModules_4() const { return ___m_SystemInputModules_4; }
	inline List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 ** get_address_of_m_SystemInputModules_4() { return &___m_SystemInputModules_4; }
	inline void set_m_SystemInputModules_4(List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 * value)
	{
		___m_SystemInputModules_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SystemInputModules_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentInputModule_5() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_CurrentInputModule_5)); }
	inline BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 * get_m_CurrentInputModule_5() const { return ___m_CurrentInputModule_5; }
	inline BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 ** get_address_of_m_CurrentInputModule_5() { return &___m_CurrentInputModule_5; }
	inline void set_m_CurrentInputModule_5(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 * value)
	{
		___m_CurrentInputModule_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentInputModule_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_FirstSelected_7() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_FirstSelected_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_FirstSelected_7() const { return ___m_FirstSelected_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_FirstSelected_7() { return &___m_FirstSelected_7; }
	inline void set_m_FirstSelected_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_FirstSelected_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FirstSelected_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_sendNavigationEvents_8() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_sendNavigationEvents_8)); }
	inline bool get_m_sendNavigationEvents_8() const { return ___m_sendNavigationEvents_8; }
	inline bool* get_address_of_m_sendNavigationEvents_8() { return &___m_sendNavigationEvents_8; }
	inline void set_m_sendNavigationEvents_8(bool value)
	{
		___m_sendNavigationEvents_8 = value;
	}

	inline static int32_t get_offset_of_m_DragThreshold_9() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_DragThreshold_9)); }
	inline int32_t get_m_DragThreshold_9() const { return ___m_DragThreshold_9; }
	inline int32_t* get_address_of_m_DragThreshold_9() { return &___m_DragThreshold_9; }
	inline void set_m_DragThreshold_9(int32_t value)
	{
		___m_DragThreshold_9 = value;
	}

	inline static int32_t get_offset_of_m_CurrentSelected_10() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_CurrentSelected_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_CurrentSelected_10() const { return ___m_CurrentSelected_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_CurrentSelected_10() { return &___m_CurrentSelected_10; }
	inline void set_m_CurrentSelected_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_CurrentSelected_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentSelected_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_HasFocus_11() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_HasFocus_11)); }
	inline bool get_m_HasFocus_11() const { return ___m_HasFocus_11; }
	inline bool* get_address_of_m_HasFocus_11() { return &___m_HasFocus_11; }
	inline void set_m_HasFocus_11(bool value)
	{
		___m_HasFocus_11 = value;
	}

	inline static int32_t get_offset_of_m_SelectionGuard_12() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_SelectionGuard_12)); }
	inline bool get_m_SelectionGuard_12() const { return ___m_SelectionGuard_12; }
	inline bool* get_address_of_m_SelectionGuard_12() { return &___m_SelectionGuard_12; }
	inline void set_m_SelectionGuard_12(bool value)
	{
		___m_SelectionGuard_12 = value;
	}

	inline static int32_t get_offset_of_m_DummyData_13() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_DummyData_13)); }
	inline BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * get_m_DummyData_13() const { return ___m_DummyData_13; }
	inline BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E ** get_address_of_m_DummyData_13() { return &___m_DummyData_13; }
	inline void set_m_DummyData_13(BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * value)
	{
		___m_DummyData_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DummyData_13), (void*)value);
	}
};

struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 * ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 * ___s_RaycastComparer_14;

public:
	inline static int32_t get_offset_of_m_EventSystems_6() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_StaticFields, ___m_EventSystems_6)); }
	inline List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 * get_m_EventSystems_6() const { return ___m_EventSystems_6; }
	inline List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 ** get_address_of_m_EventSystems_6() { return &___m_EventSystems_6; }
	inline void set_m_EventSystems_6(List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 * value)
	{
		___m_EventSystems_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystems_6), (void*)value);
	}

	inline static int32_t get_offset_of_s_RaycastComparer_14() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_StaticFields, ___s_RaycastComparer_14)); }
	inline Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 * get_s_RaycastComparer_14() const { return ___s_RaycastComparer_14; }
	inline Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 ** get_address_of_s_RaycastComparer_14() { return &___s_RaycastComparer_14; }
	inline void set_s_RaycastComparer_14(Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 * value)
	{
		___s_RaycastComparer_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_RaycastComparer_14), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  m_Items[1];

public:
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.ProBuilder.Face[]
struct FaceU5BU5D_t0D522232374325AD8B00CA039B016D822C4F8107  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Face_t670F9C6E42E8D3EEA7AD53AD268426DF37B3AA0B * m_Items[1];

public:
	inline Face_t670F9C6E42E8D3EEA7AD53AD268426DF37B3AA0B * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Face_t670F9C6E42E8D3EEA7AD53AD268426DF37B3AA0B ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Face_t670F9C6E42E8D3EEA7AD53AD268426DF37B3AA0B * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Face_t670F9C6E42E8D3EEA7AD53AD268426DF37B3AA0B * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Face_t670F9C6E42E8D3EEA7AD53AD268426DF37B3AA0B ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Face_t670F9C6E42E8D3EEA7AD53AD268426DF37B3AA0B * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  m_Items[1];

public:
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
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


// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m4D45E9941D00D5920506B0B878DD4A467B0BA7BD_gshared (ReadOnlyCollection_1_t3E37961FF3644E8E5BC1468444123741B9E47EFF * __this, const RuntimeMethod* method);
// !0 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Item_m6072A37D1AE093FC1051FA4791F0A1C68A975FA2_gshared (ReadOnlyCollection_1_t3E37961FF3644E8E5BC1468444123741B9E47EFF * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<!0> System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_mA48E3627DA12B20C93EE74CBCB4E03089D732F65_gshared (ReadOnlyCollection_1_t3E37961FF3644E8E5BC1468444123741B9E47EFF * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_gshared_inline (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_gshared_inline (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_mF670AD4C3F2685F0797E05C5491BC1841CEA9DBA_gshared (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Contains(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_m91084DCF8BFB10517C15219307054B7B971AC8A5_gshared (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_m05A1DBBB51DD02B44F81FDB9ECDDED8304381F1D_gshared (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_Clear_mF7FBC7E3AE9E541ED2D5E0000DA5A167A123067F_gshared (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m2CDA40DEC2900A9CB00F8348FF386DF44ABD0EC7_gshared (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, const RuntimeMethod* method);
// !!0[] System.Linq.Enumerable::ToArray<UnityEngine.Vector3>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* Enumerable_ToArray_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m61D9F161CA3A7569EB563586636A6C1E3F3E8B76_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);

// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Quaternion_get_eulerAngles_m3DA616CAD670235A407E8A7A75925AA8E22338C3 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButton_m27BF2DDBF38A38787B83A13D3E6F0F88F7C834C1 (int32_t ___button0, const RuntimeMethod* method);
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326 (String_t* ___axisName0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::Normalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2_Normalize_m0F1341493AD5F0B7DA4D504A44F52A1E2FFCCEC3 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844 (const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::PerlinNoise(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_PerlinNoise_mBCF172821FEB8FAD7E7CF7F7982018846E702519 (float ___x0, float ___y1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Euler_m887ABE4F4DD563351E9874D63922C2F53969BBAB (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___euler0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87 (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Camera>()
inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Transform>()
inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mE2EA0E48C8C0EAFA09C6FAD2003105EACAC85213 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E (const RuntimeMethod* method);
// System.Void UnityEngine.Rect::set_x(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_x_m1147A05B5046E1D4427E8EC99B9DFA4A32EEDEE6 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::set_y(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_y_m015507262F8AC5AFF1B4E986B66307F31FB3A10E (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C (const RuntimeMethod* method);
// ProBuilder.Examples.ViewTool ProBuilder.Examples.CameraMotion::get_cameraState()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CameraMotion_get_cameraState_m84500FD7EC33D43A2A9BF2F8133862704208E66A_inline (CameraMotion_tB4108D421FA6012FCA161EBD7AF7DA50B4A89F89 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Cursor::set_visible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cursor_set_visible_m4747F0DC20D06D1932EC740C5CCC738C1664903D (bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_Label_mA260E627AEAED27F262A355B3930F1EE4A1C114B (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___position0, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___image1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429 (int32_t ___key0, const RuntimeMethod* method);
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * EventSystem_get_current_m4B9C11F490297AE55428038DACD240596D6CE5F2 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Boolean UnityEngine.EventSystems.EventSystem::IsPointerOverGameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventSystem_IsPointerOverGameObject_m49888E0F63763086DCD74D5A6C5C5705A96F88EB (EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonUp_m2BA562F8C4FE8364EEC93970093E776371DF4022 (int32_t ___button0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3 (int32_t ___button0, const RuntimeMethod* method);
// System.Boolean ProBuilder.Examples.CameraMotion::CheckMouseOverGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraMotion_CheckMouseOverGUI_mBE6C590692E5F0397BE5DE09EA3DDAC6AE417FFE (CameraMotion_tB4108D421FA6012FCA161EBD7AF7DA50B4A89F89 * __this, const RuntimeMethod* method);
// System.Void ProBuilder.Examples.CameraMotion::set_cameraState(ProBuilder.Examples.ViewTool)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CameraMotion_set_cameraState_m5B17F805648920B4D0F639FE85C329D6BF40D532_inline (CameraMotion_tB4108D421FA6012FCA161EBD7AF7DA50B4A89F89 * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method);
// System.Boolean UnityEngine.Mathf::Approximately(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mathf_Approximately_mC2A3F657E3FD0CCAD4A4936CEE2F67D624A2AA55 (float ___a0, float ___b1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// System.Single ProBuilder.Examples.CameraMotion::CalcSignedMouseDelta(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CameraMotion_CalcSignedMouseDelta_m311F30FC52A1DCD80C8D22FF1E9EF7D5807B884D (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___lhs0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rhs1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method);
// System.Boolean UnityEngine.Rect::Contains(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rect_Contains_m51C65159B1706EB00CC962D7CD1CEC2EBD85BC3A (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_right_mA8EB1882CCE8759766544448308C88D9200F06CE (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// UnityEngine.Vector3 ProBuilder.Examples.CameraMotion::CalculateCameraPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  CameraMotion_CalculateCameraPosition_mEFDD201E4DBE36EC55E31E64789ED680655A54EA (CameraMotion_tB4108D421FA6012FCA161EBD7AF7DA50B4A89F89 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___target0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Single ProBuilder.Examples.CameraMotion::ScreenToWorldDistance(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CameraMotion_ScreenToWorldDistance_m4BC2DAD3091FADADAC783FDC5AC2D0C8F67BB7DC (CameraMotion_tB4108D421FA6012FCA161EBD7AF7DA50B4A89F89 * __this, float ___screenDistance0, float ___distanceFromCamera1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Renderer>()
inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB (const RuntimeMethod* method);
// System.Void UnityEngine.Bounds::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bounds__ctor_m8356472A177F4B22FFCE8911EBC8547A65A07CA3 (Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___center0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___size1, const RuntimeMethod* method);
// UnityEngine.Bounds UnityEngine.Renderer::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  Renderer_get_bounds_m296EE301CAC35DE15E295646CAD7911794825097 (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, const RuntimeMethod* method);
// System.Single ProBuilder.Examples.CameraMotion::CalcMinDistanceToBounds(UnityEngine.Camera,UnityEngine.Bounds)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CameraMotion_CalcMinDistanceToBounds_mF3EC612463F32B4606896456282B0AC5AA0A6411 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___cam0, Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  ___bounds1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Bounds::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Bounds_get_center_m78CD262996DD859F71DAFFF39228EBE0C422F485 (Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * __this, const RuntimeMethod* method);
// System.Void ProBuilder.Examples.CameraMotion::Focus(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraMotion_Focus_m4DF172A6CDCF0FE1E504B93FCBE666003B903E0E (CameraMotion_tB4108D421FA6012FCA161EBD7AF7DA50B4A89F89 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___target0, float ___distance1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Single ProBuilder.Examples.CameraMotion::CopySign(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CameraMotion_CopySign_m4032D724F5385AD3567A5E35FB5C5B5F150BC6CF (CameraMotion_tB4108D421FA6012FCA161EBD7AF7DA50B4A89F89 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::Distance(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2_Distance_m7DFAD110E57AF0E903DDC47BDBD99D1CC62EA03F (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_Min_m8038BC2CE141C9AF3ECA2E31B88A9768423B1519 (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Bounds::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Bounds_get_size_mB1C37E89879C7810BC9F4210033D9277DAFE2C14 (Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775 (float ___a0, float ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Camera::get_fieldOfView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_fieldOfView_mA9BA910800B2E33B572929CDA9A12CE596353920 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mACDBD7A1F25B33D006A60F67EF901B33DD3D52E9 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.ProBuilder.ProBuilderMesh>()
inline ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 * GameObject_AddComponent_TisProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06_m2CA145FFD8E5BD25F701DCDB1F8B7AAEE1876797 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::InvokeRepeating(System.String,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_InvokeRepeating_mB77F4276826FBA696A150831D190875CB5802C70 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, String_t* ___methodName0, float ___time1, float ___repeatRate2, const RuntimeMethod* method);
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method);
// UnityEngine.ProBuilder.ActionResult UnityEngine.ProBuilder.MeshOperations.AppendElements::CreateShapeFromPolygon(UnityEngine.ProBuilder.ProBuilderMesh,System.Collections.Generic.IList`1<UnityEngine.Vector3>,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ActionResult_t75240A11EF21E91AF8CC415EB4666333E8D65198 * AppendElements_CreateShapeFromPolygon_m9B1870F1791D5DAE0FC5189E503BE4BEC0B96BA8 (ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 * ___mesh0, RuntimeObject* ___points1, float ___extrude2, bool ___flipNormals3, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Boolean UnityEngine.ProBuilder.BuiltinMaterials::get_geometryShadersSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BuiltinMaterials_get_geometryShadersSupported_m2AEC322950AC4B652B126C7752BC7AF5543B0FAA (const RuntimeMethod* method);
// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_mD2A3BCD3B4F17F5C6E95F3B34DAF4B497B67127E (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___shader0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___name0, float ___value1, const RuntimeMethod* method);
// System.Void ProBuilder.Examples.Handles::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Handles_Init_m310CCE46AEC09304A7FF5076CDEE89A7A8BD3417 (const RuntimeMethod* method);
// System.Void ProBuilder.Examples.Handles::Draw(UnityEngine.ProBuilder.ProBuilderMesh,System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Face>,UnityEngine.Color,UnityEngine.Rendering.CompareFunction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Handles_Draw_m1062AE1C31DDC878471918DBE08FFFC9DDD7CC88 (ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 * ___mesh0, RuntimeObject* ___faces1, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color2, int32_t ___compareFunction3, const RuntimeMethod* method);
// UnityEngine.Material ProBuilder.Examples.Handles::get_faceMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * Handles_get_faceMaterial_m2F219B64C4D1B4769C7F8B0F4F685EA44D06A768 (const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetColor(System.String,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetColor_m5CAAF4A8D7F839597B4E14588E341462EEB81698 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___name0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetInt_m15D944E498726C9BB3A60A41DAAA45000F570F87 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___name0, int32_t ___value1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Material::SetPass(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Material_SetPass_mC888245491A21488CFF2FD64CA45E8404CB9FF9C (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, int32_t ___pass0, const RuntimeMethod* method);
// System.Void UnityEngine.GL::PushMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_PushMatrix_mF1F26015AB75226AB048A7ABF700871C5A0AE0B3 (const RuntimeMethod* method);
// System.Void UnityEngine.GL::Begin(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_Begin_mD719B21F92DCF2D8F567C008AD21CA73CA762622 (int32_t ___mode0, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_localToWorldMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Transform_get_localToWorldMatrix_m6B810B0F20BA5DE48009461A4D662DD8BFF6A3CC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GL::MultMatrix(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_MultMatrix_mFD29D84189E779D06453E3D9BE4879C4A729E01B (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___m0, const RuntimeMethod* method);
// System.Collections.Generic.IList`1<UnityEngine.Vector3> UnityEngine.ProBuilder.ProBuilderMesh::get_positions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ProBuilderMesh_get_positions_mDDB55F170B673C3CEC221A27E5045C012C43E33D (ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 * __this, const RuntimeMethod* method);
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32> UnityEngine.ProBuilder.Face::get_indexes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t3E37961FF3644E8E5BC1468444123741B9E47EFF * Face_get_indexes_mCCC6D1D84EC5A4E4243D15693A2FE9393F21D74D (Face_t670F9C6E42E8D3EEA7AD53AD268426DF37B3AA0B * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>::get_Count()
inline int32_t ReadOnlyCollection_1_get_Count_m4D45E9941D00D5920506B0B878DD4A467B0BA7BD (ReadOnlyCollection_1_t3E37961FF3644E8E5BC1468444123741B9E47EFF * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyCollection_1_t3E37961FF3644E8E5BC1468444123741B9E47EFF *, const RuntimeMethod*))ReadOnlyCollection_1_get_Count_m4D45E9941D00D5920506B0B878DD4A467B0BA7BD_gshared)(__this, method);
}
// !0 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>::get_Item(System.Int32)
inline int32_t ReadOnlyCollection_1_get_Item_m6072A37D1AE093FC1051FA4791F0A1C68A975FA2 (ReadOnlyCollection_1_t3E37961FF3644E8E5BC1468444123741B9E47EFF * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyCollection_1_t3E37961FF3644E8E5BC1468444123741B9E47EFF *, int32_t, const RuntimeMethod*))ReadOnlyCollection_1_get_Item_m6072A37D1AE093FC1051FA4791F0A1C68A975FA2_gshared)(__this, ___index0, method);
}
// System.Void UnityEngine.GL::Vertex(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_Vertex_mDC7977D6400538B576D96E239BFECF39AE41022E (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// System.Void UnityEngine.GL::End()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_End_m4A164117D2D3CD3620938F2D29EFBA2D5CB900B7 (const RuntimeMethod* method);
// System.Void UnityEngine.GL::PopMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_PopMatrix_m06F4C60CA3B91C7F8B7EFF83D21563C9613B3738 (const RuntimeMethod* method);
// UnityEngine.Material ProBuilder.Examples.Handles::get_edgeMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * Handles_get_edgeMaterial_m0550C04A6472DE1F0B4306370E4E7D9994312B89 (const RuntimeMethod* method);
// UnityEngine.ProBuilder.ProBuilderMesh UnityEngine.ProBuilder.ShapeGenerator::GeneratePlane(UnityEngine.ProBuilder.PivotLocation,System.Single,System.Single,System.Int32,System.Int32,UnityEngine.ProBuilder.Axis)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 * ShapeGenerator_GeneratePlane_m154D52FF7A164CCAF450BDA5F24F11D03B85C966 (int32_t ___pivotType0, float ___width1, float ___height2, int32_t ___widthCuts3, int32_t ___heightCuts4, int32_t ___axis5, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.ProBuilderMesh::ToMesh(UnityEngine.MeshTopology)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProBuilderMesh_ToMesh_mCDC36F2ABB14D6DF7FAF409DF2B03D2C985EA147 (ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 * __this, int32_t ___preferredTopology0, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.ProBuilderMesh::Refresh(UnityEngine.ProBuilder.RefreshMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProBuilderMesh_Refresh_m2431D34DC68B7C0452BC415FB200136862B63930 (ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 * __this, int32_t ___mask0, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_InverseTransformPoint_m476ABC8F3F14824D7D82FE2C54CEE5A151A669B8 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E (const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.ProBuilderMesh::SetFaceColor(UnityEngine.ProBuilder.Face,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProBuilderMesh_SetFaceColor_mA35654ECAA040E1847E8DFAB1CED171E2E198093 (ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 * __this, Face_t670F9C6E42E8D3EEA7AD53AD268426DF37B3AA0B * ___face0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color1, const RuntimeMethod* method);
// System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Face> UnityEngine.ProBuilder.ProBuilderMesh::get_faces()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ProBuilderMesh_get_faces_m184668B34C00C8CE5BA7F0E6299FB002F7B1D70A (ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 ProBuilder.Examples.HighlightNearestFace::FaceCenter(UnityEngine.ProBuilder.ProBuilderMesh,UnityEngine.ProBuilder.Face)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  HighlightNearestFace_FaceCenter_m7E6509214278D1E94A48F75684D5627F096BE7C9 (HighlightNearestFace_tB488288D0A42BD683ED46ECCE07C7461CFC495C2 * __this, ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 * ___pb0, Face_t670F9C6E42E8D3EEA7AD53AD268426DF37B3AA0B * ___face1, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_blue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_blue_m6D62D515CA10A6E760848E1BFB997E27B90BD07B (const RuntimeMethod* method);
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32> UnityEngine.ProBuilder.Face::get_distinctIndexes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t3E37961FF3644E8E5BC1468444123741B9E47EFF * Face_get_distinctIndexes_m0A3B806CECC0887948DBBEED9E28DFA46D123B8F (Face_t670F9C6E42E8D3EEA7AD53AD268426DF37B3AA0B * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<!0> System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>::GetEnumerator()
inline RuntimeObject* ReadOnlyCollection_1_GetEnumerator_mA48E3627DA12B20C93EE74CBCB4E03089D732F65 (ReadOnlyCollection_1_t3E37961FF3644E8E5BC1468444123741B9E47EFF * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ReadOnlyCollection_1_t3E37961FF3644E8E5BC1468444123741B9E47EFF *, const RuntimeMethod*))ReadOnlyCollection_1_GetEnumerator_mA48E3627DA12B20C93EE74CBCB4E03089D732F65_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.MeshOperations.MeshImporter::.ctor(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshImporter__ctor_m9DC51E6586E21492CD9ED6BA7B89584C706BC1B0 (MeshImporter_tE19E710EB2381D78327D684DE65D04C7C7086ED2 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gameObject0, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.MeshOperations.MeshImporter::Import(UnityEngine.ProBuilder.MeshOperations.MeshImportSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshImporter_Import_m651DD1797F75DE88DB8E883FBD4E9A3857454608 (MeshImporter_tE19E710EB2381D78327D684DE65D04C7C7086ED2 * __this, MeshImportSettings_t6F08DF59075B8BE68AFA465FC29E9539BF6FD901 * ___importSettings0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.MeshFilter>()
inline MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * Component_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m4E31C5D3D0490AEE405B54BE9F61802EA425B9DC (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.Mesh::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh__ctor_mA3D8570373462201AD7B8C9586A7F9412E49C2F6 (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MeshFilter::set_sharedMesh(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshFilter_set_sharedMesh_mC96D5F9AE4BC1D186221F568A4C3CE23572EC958 (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * __this, Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.ProBuilder.ProBuilderMesh>()
inline ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 * GameObject_GetComponent_TisProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06_m0C759891C92E06F8E263C0A723D6CC2F08DA3344 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.ProBuilder.Face[] UnityEngine.ProBuilder.MeshOperations.ExtrudeElements::Extrude(UnityEngine.ProBuilder.ProBuilderMesh,System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Face>,UnityEngine.ProBuilder.ExtrudeMethod,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FaceU5BU5D_t0D522232374325AD8B00CA039B016D822C4F8107* ExtrudeElements_Extrude_m4744CA085129BA2B820AAA3A234F0812097FABB1 (ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 * ___mesh0, RuntimeObject* ___faces1, int32_t ___method2, float ___distance3, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<ProBuilder.Examples.CameraMotion>()
inline CameraMotion_tB4108D421FA6012FCA161EBD7AF7DA50B4A89F89 * Component_GetComponent_TisCameraMotion_tB4108D421FA6012FCA161EBD7AF7DA50B4A89F89_m253DD0E1A675EEA2045ED02E121CD19116BE1115 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  CameraMotion_tB4108D421FA6012FCA161EBD7AF7DA50B4A89F89 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.Camera/CameraCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraCallback__ctor_m6E26A220911F56F3E8936DDD217ED76A15B1915E (CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// ProBuilder.Examples.MeshAndFace ProBuilder.Examples.Utility::PickFace(UnityEngine.Camera,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MeshAndFace_t9D166BDF89B6496DF212C761F8EE7CFD5C71C7D5  Utility_PickFace_m9848445B24CF7F8D631E0A5FE8A1BFA42AF5FF3E (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___camera0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___mousePosition1, const RuntimeMethod* method);
// System.Void ProBuilder.Examples.MeshEditor::HandleInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshEditor_HandleInput_mAF4169C54561F61863454B516284101D5F61B974 (MeshEditor_t439D937C0610CF3351D3C29C662032654E023040 * __this, const RuntimeMethod* method);
// System.Boolean ProBuilder.Examples.CameraMotion::get_active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraMotion_get_active_mD4FE558613A8D1C82614BA43484BFCD40B4E15BF (CameraMotion_tB4108D421FA6012FCA161EBD7AF7DA50B4A89F89 * __this, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_cyan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_cyan_m0C608BC083FD98C45C1F4F15AE803D288C647686 (const RuntimeMethod* method);
// System.Void ProBuilder.Examples.Handles::Draw(UnityEngine.ProBuilder.ProBuilderMesh,UnityEngine.ProBuilder.Face,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Handles_Draw_m56E41213EE2CA14AE1376DEC7A8A2DA6DAC89A56 (ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 * ___mesh0, Face_t670F9C6E42E8D3EEA7AD53AD268426DF37B3AA0B * ___face1, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Ray::get_origin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Ray_get_origin_m0C1B2BFF99CDF5231AC29AC031C161F55B53C1D0 (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Ray::get_direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Ray_get_direction_m2B31F86F19B64474A901B28D3808011AE7A13EFC (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * __this, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9 (const RuntimeMethod* method);
// System.Void ProBuilder.Examples.Handles::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color,UnityEngine.Rendering.CompareFunction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Handles_DrawLine_m217134D01EDF8744EF892622D2245FE75A658219 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color2, int32_t ___compareFunction3, const RuntimeMethod* method);
// System.Void ProBuilder.Examples.CameraMotion::DoLateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraMotion_DoLateUpdate_m9D9A01386BC4094E48EB580AE698D8BDDBC394AF (CameraMotion_tB4108D421FA6012FCA161EBD7AF7DA50B4A89F89 * __this, const RuntimeMethod* method);
// System.Void ProBuilder.Examples.MeshEditor::BeginDrag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshEditor_BeginDrag_mA31F3D4D344599BDA4664FA7AEF5454FA71F3449 (MeshEditor_t439D937C0610CF3351D3C29C662032654E023040 * __this, const RuntimeMethod* method);
// System.Void ProBuilder.Examples.MeshEditor::EndDrag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshEditor_EndDrag_m07B07BC36AF7FC895E22C07561123A4CA15CC4E0 (MeshEditor_t439D937C0610CF3351D3C29C662032654E023040 * __this, const RuntimeMethod* method);
// System.Void ProBuilder.Examples.MeshEditor::UpdateDrag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshEditor_UpdateDrag_m85A11336FBF6832E8367B103B5D9DB8CFE68C58C (MeshEditor_t439D937C0610CF3351D3C29C662032654E023040 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyUp(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyUp_mDE9D56FE11715566D4D54FD96F8E1EF9734D225F (int32_t ___key0, const RuntimeMethod* method);
// System.Void ProBuilder.Examples.CameraMotion::Focus(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraMotion_Focus_m74477BF982B39FF1FFB5215E24F8CA41B76025F4 (CameraMotion_tB4108D421FA6012FCA161EBD7AF7DA50B4A89F89 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___target0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.ProBuilder.Math::Average(System.Collections.Generic.IList`1<UnityEngine.Vector3>,System.Collections.Generic.IList`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Math_Average_m0C70CF51BCCF881520CBCA032F578C68BD3EAF9C (RuntimeObject* ___array0, RuntimeObject* ___indexes1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_TransformPoint_m68AF95765A9279192E601208A9C5170027A5F0D2 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.ProBuilder.Math::Normal(UnityEngine.ProBuilder.ProBuilderMesh,UnityEngine.ProBuilder.Face)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Math_Normal_m73A7F540E6CC650371BAD4382A1F8B1C686EF38C (ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 * ___mesh0, Face_t670F9C6E42E8D3EEA7AD53AD268426DF37B3AA0B * ___face1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::TransformDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_TransformDirection_m6B5E3F0A7C6323159DEC6D9BC035FB53ADD96E91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction0, const RuntimeMethod* method);
// System.Void UnityEngine.Ray::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ray__ctor_m75B1F651FF47EE6B887105101B7DA61CBF41F83C (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___origin0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction1, const RuntimeMethod* method);
// System.Void ProBuilder.Examples.MeshEditor/MeshState::.ctor(UnityEngine.ProBuilder.ProBuilderMesh,System.Collections.Generic.IList`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshState__ctor_m9A2F5BD428843FF08F99ECA7657DFBDD8D15CCF1 (MeshState_tF8D82249D94398E31F98DDD3FF745D3B916D282A * __this, ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 * ___mesh0, RuntimeObject* ___selectedIndices1, const RuntimeMethod* method);
// System.Single ProBuilder.Examples.MeshEditor::GetDragDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MeshEditor_GetDragDistance_m25B1389F433B9B4B3F7CDF2C36FDF4C30FDE7A2E (MeshEditor_t439D937C0610CF3351D3C29C662032654E023040 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_InverseTransformDirection_m9EB6F7A2598FD8D6B52F0A6EBA96A3BAAF68D696 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
inline int32_t List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_inline (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, const RuntimeMethod*))List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
inline int32_t List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_inline (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, int32_t, const RuntimeMethod*))List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_gshared_inline)(__this, ___index0, method);
}
// System.Void UnityEngine.ProBuilder.ProBuilderMesh::set_positions(System.Collections.Generic.IList`1<UnityEngine.Vector3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProBuilderMesh_set_positions_mE77DB28E13C62E0A85B6158B8994FC1B0A323BB4 (ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  Camera_ScreenPointToRay_mD385213935A81030EDC604A39FD64761077CFBAB (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.ProBuilder.Math::GetNearestPointRayRay(UnityEngine.Ray,UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Math_GetNearestPointRayRay_m0C5884A857B43A72E876C9B91D150BD3B2C59A86 (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___a0, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mD19905B093915BA12852732EA27AA2DBE030D11F_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method);
// System.Int32 System.Math::Sign(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Sign_m607F7014224C0DD1D1F6D7B44DAB00A2A16CCC8F (float ___value0, const RuntimeMethod* method);
// System.Void ProBuilder.Examples.MeshEditor/DragState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DragState__ctor_mF947E11F13C0E3191F185B15EB7187CAD7DE2C5A (DragState_tBA2431E802EB4BC41D740E5B0B6505805E3DC3AC * __this, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<UnityEngine.ProBuilder.ProBuilderMesh>::Add(!0)
inline bool HashSet_1_Add_mB8FFD2BF1965AA845D3DC7D81BC2CE857CBE2D24 (HashSet_1_tF6DD03009BA75BA8DDFB365F26AEE379ACA22C91 * __this, ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tF6DD03009BA75BA8DDFB365F26AEE379ACA22C91 *, ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 *, const RuntimeMethod*))HashSet_1_Add_mF670AD4C3F2685F0797E05C5491BC1841CEA9DBA_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<UnityEngine.ProBuilder.ProBuilderMesh>::Contains(!0)
inline bool HashSet_1_Contains_m0289CE6599F040101BB5E4F28875D79F4F49756D (HashSet_1_tF6DD03009BA75BA8DDFB365F26AEE379ACA22C91 * __this, ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tF6DD03009BA75BA8DDFB365F26AEE379ACA22C91 *, ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 *, const RuntimeMethod*))HashSet_1_Contains_m91084DCF8BFB10517C15219307054B7B971AC8A5_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<UnityEngine.ProBuilder.ProBuilderMesh>::Remove(!0)
inline bool HashSet_1_Remove_m6A28999AB452AA1F53CD3EDCE72105A1ABF48736 (HashSet_1_tF6DD03009BA75BA8DDFB365F26AEE379ACA22C91 * __this, ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tF6DD03009BA75BA8DDFB365F26AEE379ACA22C91 *, ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 *, const RuntimeMethod*))HashSet_1_Remove_m05A1DBBB51DD02B44F81FDB9ECDDED8304381F1D_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.HashSet`1<UnityEngine.ProBuilder.ProBuilderMesh>::Clear()
inline void HashSet_1_Clear_m5F6D43800DA4275BF2716F3C8131013646838551 (HashSet_1_tF6DD03009BA75BA8DDFB365F26AEE379ACA22C91 * __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tF6DD03009BA75BA8DDFB365F26AEE379ACA22C91 *, const RuntimeMethod*))HashSet_1_Clear_mF7FBC7E3AE9E541ED2D5E0000DA5A167A123067F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1<UnityEngine.ProBuilder.ProBuilderMesh>::.ctor()
inline void HashSet_1__ctor_mD9C5F7D03314D383A69C11DEBD3A3246F9EBAA39 (HashSet_1_tF6DD03009BA75BA8DDFB365F26AEE379ACA22C91 * __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tF6DD03009BA75BA8DDFB365F26AEE379ACA22C91 *, const RuntimeMethod*))HashSet_1__ctor_m2CDA40DEC2900A9CB00F8348FF386DF44ABD0EC7_gshared)(__this, method);
}
// UnityEngine.Mesh ProBuilder.Examples.SimpleGrid::GridMesh(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * SimpleGrid_GridMesh_m64876FDBD78C3754114C8E71C2E342B4A1A046CC (SimpleGrid_t569734AD487C867DC8CBB9B276C2572003A7E2BE * __this, int32_t ___lineCount0, float ___scale1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828 (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_one()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_one_m9B2AFD26404B6DD0F520D19FC7F79371C5C18B42 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50 (const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::set_vertices(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_vertices_m38F0908D0FDFE484BE19E94BE9D6176667469AAD (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::set_normals(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_normals_m3D06E214B63B49788710672B71C99F2365A83130 (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::set_subMeshCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_subMeshCount_mF6F2199AE4FA096C1AE0CAD02E13B6FEA38C6283 (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::SetIndices(System.Int32[],UnityEngine.MeshTopology,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetIndices_mCD0377083E978A3FF806CFCCD28410C042A77ECD (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___indices0, int32_t ___topology1, int32_t ___submesh2, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::set_uv(UnityEngine.Vector2[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_uv_mF6FED6DDACBAE3EAF28BFBF257A0D5356FCF3AAC (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m80EC8EEDA0ABA8B01838BA9054834CD1A381916E (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___ray0, RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * ___hitInfo1, const RuntimeMethod* method);
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * RaycastHit_get_collider_m13A3DE16FBC631E0A1F987E0B22CE70AF8AB539E (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject ProBuilder.Examples.Utility::PickObject(UnityEngine.Camera,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Utility_PickObject_m53669001254660E8CE4EF5AD993D5793ACE80A6B (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___camera0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___mousePosition1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// UnityEngine.ProBuilder.Face UnityEngine.ProBuilder.SelectionPicker::PickFace(UnityEngine.Camera,UnityEngine.Vector3,UnityEngine.ProBuilder.ProBuilderMesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Face_t670F9C6E42E8D3EEA7AD53AD268426DF37B3AA0B * SelectionPicker_PickFace_m7A3B9846D1688FB60A407E0E02E28603815087DD (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___camera0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___mousePosition1, ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 * ___pickable2, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// !!0[] System.Linq.Enumerable::ToArray<UnityEngine.Vector3>(System.Collections.Generic.IEnumerable`1<!!0>)
inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* Enumerable_ToArray_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m61D9F161CA3A7569EB563586636A6C1E3F3E8B76 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m61D9F161CA3A7569EB563586636A6C1E3F3E8B76_gshared)(___source0, method);
}
// System.Collections.Generic.List`1<System.Int32> UnityEngine.ProBuilder.ProBuilderMesh::GetCoincidentVertices(System.Collections.Generic.IEnumerable`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ProBuilderMesh_GetCoincidentVertices_m914E95853150DD297E0F6BC0DC7BF803AA904D62 (ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 * __this, RuntimeObject* ___vertices0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C (float ___value0, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
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
// System.Void ProBuilder.Examples.CameraControls::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraControls_Start_mD8F3C4A3D96965E2BC1043658D1EF9AFB3DAC4F7 (CameraControls_tCC97542CD8ADE300A893D543BD4DF7B790CABFD2 * __this, const RuntimeMethod* method)
{
	{
		// m_Distance = Vector3.Distance(transform.position, Vector3.zero);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		float L_3;
		L_3 = Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677(L_1, L_2, /*hidden argument*/NULL);
		__this->set_m_Distance_12(L_3);
		// }
		return;
	}
}
// System.Void ProBuilder.Examples.CameraControls::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraControls_LateUpdate_mC525CB9B35B191DB83EBAB9500D87E76791216DE (CameraControls_tCC97542CD8ADE300A893D543BD4DF7B790CABFD2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	{
		// Vector3 eulerRotation = transform.localRotation.eulerAngles;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_1;
		L_1 = Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Quaternion_get_eulerAngles_m3DA616CAD670235A407E8A7A75925AA8E22338C3((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_2;
		// eulerRotation.z = 0f;
		(&V_0)->set_z_4((0.0f));
		// if( Input.GetMouseButton(0) )
		bool L_3;
		L_3 = Input_GetMouseButton_m27BF2DDBF38A38787B83A13D3E6F0F88F7C834C1(0, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_008a;
		}
	}
	{
		// float rot_x = Input.GetAxis(k_InputMouseHorizontal);
		float L_4;
		L_4 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7, /*hidden argument*/NULL);
		V_2 = L_4;
		// float rot_y = -Input.GetAxis(k_InputMouseVertical);
		float L_5;
		L_5 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0, /*hidden argument*/NULL);
		V_3 = ((-L_5));
		// eulerRotation.x += rot_y * orbitSpeed;
		float* L_6 = (&V_0)->get_address_of_x_2();
		float* L_7 = L_6;
		float L_8 = *((float*)L_7);
		float L_9 = V_3;
		float L_10 = __this->get_orbitSpeed_9();
		*((float*)L_7) = (float)((float)il2cpp_codegen_add((float)L_8, (float)((float)il2cpp_codegen_multiply((float)L_9, (float)L_10))));
		// eulerRotation.y += rot_x * orbitSpeed;
		float* L_11 = (&V_0)->get_address_of_y_3();
		float* L_12 = L_11;
		float L_13 = *((float*)L_12);
		float L_14 = V_2;
		float L_15 = __this->get_orbitSpeed_9();
		*((float*)L_12) = (float)((float)il2cpp_codegen_add((float)L_13, (float)((float)il2cpp_codegen_multiply((float)L_14, (float)L_15))));
		// m_LookDirection.x = rot_x;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_16 = __this->get_address_of_m_LookDirection_13();
		float L_17 = V_2;
		L_16->set_x_0(L_17);
		// m_LookDirection.y = rot_y;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_18 = __this->get_address_of_m_LookDirection_13();
		float L_19 = V_3;
		L_18->set_y_1(L_19);
		// m_LookDirection.Normalize();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_20 = __this->get_address_of_m_LookDirection_13();
		Vector2_Normalize_m0F1341493AD5F0B7DA4D504A44F52A1E2FFCCEC3((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)L_20, /*hidden argument*/NULL);
		// }
		goto IL_00e0;
	}

IL_008a:
	{
		// eulerRotation.y += Time.deltaTime * idleRotation * m_LookDirection.x;
		float* L_21 = (&V_0)->get_address_of_y_3();
		float* L_22 = L_21;
		float L_23 = *((float*)L_22);
		float L_24;
		L_24 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_25 = __this->get_idleRotation_11();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_26 = __this->get_address_of_m_LookDirection_13();
		float L_27 = L_26->get_x_0();
		*((float*)L_22) = (float)((float)il2cpp_codegen_add((float)L_23, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_24, (float)L_25)), (float)L_27))));
		// eulerRotation.x += Time.deltaTime * Mathf.PerlinNoise(Time.time, 0f) * idleRotation * m_LookDirection.y;
		float* L_28 = (&V_0)->get_address_of_x_2();
		float* L_29 = L_28;
		float L_30 = *((float*)L_29);
		float L_31;
		L_31 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_32;
		L_32 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_33;
		L_33 = Mathf_PerlinNoise_mBCF172821FEB8FAD7E7CF7F7982018846E702519(L_32, (0.0f), /*hidden argument*/NULL);
		float L_34 = __this->get_idleRotation_11();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_35 = __this->get_address_of_m_LookDirection_13();
		float L_36 = L_35->get_y_1();
		*((float*)L_29) = (float)((float)il2cpp_codegen_add((float)L_30, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_31, (float)L_33)), (float)L_34)), (float)L_36))));
	}

IL_00e0:
	{
		// transform.localRotation = Quaternion.Euler( eulerRotation );
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_37;
		L_37 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38 = V_0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_39;
		L_39 = Quaternion_Euler_m887ABE4F4DD563351E9874D63922C2F53969BBAB(L_38, /*hidden argument*/NULL);
		Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C(L_37, L_39, /*hidden argument*/NULL);
		// transform.position = transform.localRotation * (Vector3.forward * -m_Distance);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_40;
		L_40 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_41;
		L_41 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_42;
		L_42 = Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5(L_41, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_43;
		L_43 = Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90(/*hidden argument*/NULL);
		float L_44 = __this->get_m_Distance_12();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_45;
		L_45 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_43, ((-L_44)), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_46;
		L_46 = Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D(L_42, L_45, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_40, L_46, /*hidden argument*/NULL);
		// if( Input.GetAxis(k_InputMouseScroll) != 0f )
		float L_47;
		L_47 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0, /*hidden argument*/NULL);
		if ((((float)L_47) == ((float)(0.0f))))
		{
			goto IL_01b3;
		}
	}
	{
		// float delta = Input.GetAxis(k_InputMouseScroll);
		float L_48;
		L_48 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0, /*hidden argument*/NULL);
		V_4 = L_48;
		// m_Distance -= delta * (m_Distance/k_MaxCameraDistance) * (zoomSpeed * 1000) * Time.deltaTime;
		float L_49 = __this->get_m_Distance_12();
		float L_50 = V_4;
		float L_51 = __this->get_m_Distance_12();
		float L_52 = __this->get_zoomSpeed_10();
		float L_53;
		L_53 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_m_Distance_12(((float)il2cpp_codegen_subtract((float)L_49, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_50, (float)((float)((float)L_51/(float)(40.0f))))), (float)((float)il2cpp_codegen_multiply((float)L_52, (float)(1000.0f))))), (float)L_53)))));
		// m_Distance = Mathf.Clamp(m_Distance, k_MinCameraDistance, k_MaxCameraDistance);
		float L_54 = __this->get_m_Distance_12();
		float L_55;
		L_55 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(L_54, (10.0f), (40.0f), /*hidden argument*/NULL);
		__this->set_m_Distance_12(L_55);
		// transform.position = transform.localRotation * (Vector3.forward * -m_Distance);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_56;
		L_56 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_57;
		L_57 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_58;
		L_58 = Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5(L_57, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_59;
		L_59 = Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90(/*hidden argument*/NULL);
		float L_60 = __this->get_m_Distance_12();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_61;
		L_61 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_59, ((-L_60)), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_62;
		L_62 = Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D(L_58, L_61, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_56, L_62, /*hidden argument*/NULL);
	}

IL_01b3:
	{
		// }
		return;
	}
}
// System.Void ProBuilder.Examples.CameraControls::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraControls__ctor_m80EEC5983E4DCE1B206F7245FA9EDA68FF610FBB (CameraControls_tCC97542CD8ADE300A893D543BD4DF7B790CABFD2 * __this, const RuntimeMethod* method)
{
	{
		// public float orbitSpeed = 6f;
		__this->set_orbitSpeed_9((6.0f));
		// public float zoomSpeed = .8f;
		__this->set_zoomSpeed_10((0.800000012f));
		// public float idleRotation = 1f;
		__this->set_idleRotation_11((1.0f));
		// Vector2 m_LookDirection = new Vector2(.8f, .2f);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_0), (0.800000012f), (0.200000003f), /*hidden argument*/NULL);
		__this->set_m_LookDirection_13(L_0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// ProBuilder.Examples.ViewTool ProBuilder.Examples.CameraMotion::get_cameraState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CameraMotion_get_cameraState_m84500FD7EC33D43A2A9BF2F8133862704208E66A (CameraMotion_tB4108D421FA6012FCA161EBD7AF7DA50B4A89F89 * __this, const RuntimeMethod* method)
{
	{
		// public ViewTool cameraState { get; private set; }
		int32_t L_0 = __this->get_U3CcameraStateU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void ProBuilder.Examples.CameraMotion::set_cameraState(ProBuilder.Examples.ViewTool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraMotion_set_cameraState_m5B17F805648920B4D0F639FE85C329D6BF40D532 (CameraMotion_tB4108D421FA6012FCA161EBD7AF7DA50B4A89F89 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public ViewTool cameraState { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CcameraStateU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Void ProBuilder.Examples.CameraMotion::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraMotion_Awake_mFAC8BBDEE3080173E875D5BC1B5240321F391940 (CameraMotion_tB4108D421FA6012FCA161EBD7AF7DA50B4A89F89 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mE2EA0E48C8C0EAFA09C6FAD2003105EACAC85213_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_CameraComponent = GetComponent<Camera>();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0;
		L_0 = Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320(__this, /*hidden argument*/Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320_RuntimeMethod_var);
		__this->set_m_CameraComponent_25(L_0);
		// m_Transform = GetComponent<Transform>();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mE2EA0E48C8C0EAFA09C6FAD2003105EACAC85213(__this, /*hidden argument*/Component_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mE2EA0E48C8C0EAFA09C6FAD2003105EACAC85213_RuntimeMethod_var);
		__this->set_m_Transform_26(L_1);
		// m_ScenePivot = m_Transform.forward * m_DistanceToCamera;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = __this->get_m_Transform_26();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_2, /*hidden argument*/NULL);
		float L_4 = __this->get_m_DistanceToCamera_28();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_3, L_4, /*hidden argument*/NULL);
		__this->set_m_ScenePivot_27(L_5);
		// }
		return;
	}
}
// System.Void ProBuilder.Examples.CameraMotion::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraMotion_OnGUI_m3BA7D12A14BC5A881FE9466F5A467A745EB790DD (CameraMotion_tB4108D421FA6012FCA161EBD7AF7DA50B4A89F89 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	{
		// float screenHeight = Screen.height;
		int32_t L_0;
		L_0 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		V_0 = ((float)((float)L_0));
		// m_MouseCursorRect.x = Input.mousePosition.x - 16;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_1 = __this->get_address_of_m_MouseCursorRect_30();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		float L_3 = L_2.get_x_2();
		Rect_set_x_m1147A05B5046E1D4427E8EC99B9DFA4A32EEDEE6((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_1, ((float)il2cpp_codegen_subtract((float)L_3, (float)(16.0f))), /*hidden argument*/NULL);
		// m_MouseCursorRect.y = (screenHeight - Input.mousePosition.y) - 16;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_4 = __this->get_address_of_m_MouseCursorRect_30();
		float L_5 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		float L_7 = L_6.get_y_3();
		Rect_set_y_m015507262F8AC5AFF1B4E986B66307F31FB3A10E((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_4, ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), (float)(16.0f))), /*hidden argument*/NULL);
		// m_ScreenCenterRect.x = Screen.width/2-32;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_8 = __this->get_address_of_m_ScreenCenterRect_31();
		int32_t L_9;
		L_9 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		Rect_set_x_m1147A05B5046E1D4427E8EC99B9DFA4A32EEDEE6((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_8, ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)L_9/(int32_t)2)), (int32_t)((int32_t)32))))), /*hidden argument*/NULL);
		// m_ScreenCenterRect.y = screenHeight/2-32;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_10 = __this->get_address_of_m_ScreenCenterRect_31();
		float L_11 = V_0;
		Rect_set_y_m015507262F8AC5AFF1B4E986B66307F31FB3A10E((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_10, ((float)il2cpp_codegen_subtract((float)((float)((float)L_11/(float)(2.0f))), (float)(32.0f))), /*hidden argument*/NULL);
		// Cursor.visible = cameraState == ViewTool.None;
		int32_t L_12;
		L_12 = CameraMotion_get_cameraState_m84500FD7EC33D43A2A9BF2F8133862704208E66A_inline(__this, /*hidden argument*/NULL);
		Cursor_set_visible_m4747F0DC20D06D1932EC740C5CCC738C1664903D((bool)((((int32_t)L_12) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		// if(cameraState != ViewTool.None)
		int32_t L_13;
		L_13 = CameraMotion_get_cameraState_m84500FD7EC33D43A2A9BF2F8133862704208E66A_inline(__this, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_00ea;
		}
	}
	{
		// switch(cameraState)
		int32_t L_14;
		L_14 = CameraMotion_get_cameraState_m84500FD7EC33D43A2A9BF2F8133862704208E66A_inline(__this, /*hidden argument*/NULL);
		V_1 = L_14;
		int32_t L_15 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)1)))
		{
			case 0:
			{
				goto IL_00a3;
			}
			case 1:
			{
				goto IL_00b5;
			}
			case 2:
			{
				goto IL_00c7;
			}
			case 3:
			{
				goto IL_00d9;
			}
		}
	}
	{
		return;
	}

IL_00a3:
	{
		// GUI.Label(m_MouseCursorRect, orbitCursor);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_16 = __this->get_m_MouseCursorRect_30();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_17 = __this->get_orbitCursor_6();
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		GUI_Label_mA260E627AEAED27F262A355B3930F1EE4A1C114B(L_16, L_17, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_00b5:
	{
		// GUI.Label(m_MouseCursorRect, panCursor);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_18 = __this->get_m_MouseCursorRect_30();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_19 = __this->get_panCursor_5();
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		GUI_Label_mA260E627AEAED27F262A355B3930F1EE4A1C114B(L_18, L_19, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_00c7:
	{
		// GUI.Label(m_MouseCursorRect, dollyCursor);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_20 = __this->get_m_MouseCursorRect_30();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_21 = __this->get_dollyCursor_7();
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		GUI_Label_mA260E627AEAED27F262A355B3930F1EE4A1C114B(L_20, L_21, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_00d9:
	{
		// GUI.Label(m_MouseCursorRect, lookCursor);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_22 = __this->get_m_MouseCursorRect_30();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_23 = __this->get_lookCursor_8();
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		GUI_Label_mA260E627AEAED27F262A355B3930F1EE4A1C114B(L_22, L_23, /*hidden argument*/NULL);
	}

IL_00ea:
	{
		// }
		return;
	}
}
// System.Boolean ProBuilder.Examples.CameraMotion::get_active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraMotion_get_active_mD4FE558613A8D1C82614BA43484BFCD40B4E15BF (CameraMotion_tB4108D421FA6012FCA161EBD7AF7DA50B4A89F89 * __this, const RuntimeMethod* method)
{
	{
		// get { return cameraState != ViewTool.None || m_UseEvent || Input.GetKey(KeyCode.LeftAlt); }
		int32_t L_0;
		L_0 = CameraMotion_get_cameraState_m84500FD7EC33D43A2A9BF2F8133862704208E66A_inline(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		bool L_1 = __this->get_m_UseEvent_24();
		if (L_1)
		{
			goto IL_001b;
		}
	}
	{
		bool L_2;
		L_2 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)308), /*hidden argument*/NULL);
		return L_2;
	}

IL_001b:
	{
		return (bool)1;
	}
}
// System.Boolean ProBuilder.Examples.CameraMotion::CheckMouseOverGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraMotion_CheckMouseOverGUI_mBE6C590692E5F0397BE5DE09EA3DDAC6AE417FFE (CameraMotion_tB4108D421FA6012FCA161EBD7AF7DA50B4A89F89 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return EventSystem.current == null || !EventSystem.current.IsPointerOverGameObject();
		IL2CPP_RUNTIME_CLASS_INIT(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_il2cpp_TypeInfo_var);
		EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * L_0;
		L_0 = EventSystem_get_current_m4B9C11F490297AE55428038DACD240596D6CE5F2(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_il2cpp_TypeInfo_var);
		EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * L_2;
		L_2 = EventSystem_get_current_m4B9C11F490297AE55428038DACD240596D6CE5F2(/*hidden argument*/NULL);
		bool L_3;
		L_3 = EventSystem_IsPointerOverGameObject_m49888E0F63763086DCD74D5A6C5C5705A96F88EB(L_2, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
	}

IL_001b:
	{
		return (bool)1;
	}
}
// System.Void ProBuilder.Examples.CameraMotion::DoLateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraMotion_DoLateUpdate_m9D9A01386BC4094E48EB580AE698D8BDDBC394AF (CameraMotion_tB4108D421FA6012FCA161EBD7AF7DA50B4A89F89 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E27A425D1733108BCD8B905C1BE9CA9A172D9E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_6;
	memset((&V_6), 0, sizeof(V_6));
	float V_7 = 0.0f;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_8;
	memset((&V_8), 0, sizeof(V_8));
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_11;
	memset((&V_11), 0, sizeof(V_11));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_12;
	memset((&V_12), 0, sizeof(V_12));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// if(Input.GetMouseButtonUp(0) || Input.GetMouseButtonUp(1) || Input.GetMouseButtonUp(2))
		bool L_0;
		L_0 = Input_GetMouseButtonUp_m2BA562F8C4FE8364EEC93970093E776371DF4022(0, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		bool L_1;
		L_1 = Input_GetMouseButtonUp_m2BA562F8C4FE8364EEC93970093E776371DF4022(1, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		bool L_2;
		L_2 = Input_GetMouseButtonUp_m2BA562F8C4FE8364EEC93970093E776371DF4022(2, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0028;
		}
	}

IL_0018:
	{
		// m_CurrentActionValid = true;
		__this->set_m_CurrentActionValid_32((bool)1);
		// m_UseEvent = false;
		__this->set_m_UseEvent_24((bool)0);
		// }
		goto IL_004c;
	}

IL_0028:
	{
		// else if(Input.GetMouseButtonDown(0) || Input.GetMouseButtonDown(1) || Input.GetMouseButtonDown(2))
		bool L_3;
		L_3 = Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3(0, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0040;
		}
	}
	{
		bool L_4;
		L_4 = Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3(1, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0040;
		}
	}
	{
		bool L_5;
		L_5 = Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3(2, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_004c;
		}
	}

IL_0040:
	{
		// m_CurrentActionValid = CheckMouseOverGUI();
		bool L_6;
		L_6 = CameraMotion_CheckMouseOverGUI_mBE6C590692E5F0397BE5DE09EA3DDAC6AE417FFE(__this, /*hidden argument*/NULL);
		__this->set_m_CurrentActionValid_32(L_6);
	}

IL_004c:
	{
		// cameraState = ViewTool.None;
		CameraMotion_set_cameraState_m5B17F805648920B4D0F639FE85C329D6BF40D532_inline(__this, 0, /*hidden argument*/NULL);
		// if(m_Zooming)
		bool L_7 = __this->get_m_Zooming_33();
		if (!L_7)
		{
			goto IL_00b7;
		}
	}
	{
		// transform.position = Vector3.Lerp(m_PreviousPosition, m_TargetPosition, (m_ZoomProgress += Time.deltaTime)/zoomSpeed);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = __this->get_m_PreviousPosition_35();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = __this->get_m_TargetPosition_36();
		float L_11 = __this->get_m_ZoomProgress_34();
		float L_12;
		L_12 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_13 = ((float)il2cpp_codegen_add((float)L_11, (float)L_12));
		V_1 = L_13;
		__this->set_m_ZoomProgress_34(L_13);
		float L_14 = V_1;
		float L_15 = __this->get_zoomSpeed_23();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline(L_9, L_10, ((float)((float)L_14/(float)L_15)), /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_8, L_16, /*hidden argument*/NULL);
		// if( Vector3.Distance(transform.position, m_TargetPosition) < .1f) m_Zooming = false;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_17, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19 = __this->get_m_TargetPosition_36();
		float L_20;
		L_20 = Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677(L_18, L_19, /*hidden argument*/NULL);
		if ((!(((float)L_20) < ((float)(0.100000001f)))))
		{
			goto IL_00b7;
		}
	}
	{
		// if( Vector3.Distance(transform.position, m_TargetPosition) < .1f) m_Zooming = false;
		__this->set_m_Zooming_33((bool)0);
	}

IL_00b7:
	{
		// if( (Input.GetAxis(k_InputMouseScrollwheel) != 0f || (Input.GetMouseButton(k_RightMouse) && Input.GetKey(KeyCode.LeftAlt))) && CheckMouseOverGUI())
		float L_21;
		L_21 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0, /*hidden argument*/NULL);
		if ((!(((float)L_21) == ((float)(0.0f)))))
		{
			goto IL_00e2;
		}
	}
	{
		bool L_22;
		L_22 = Input_GetMouseButton_m27BF2DDBF38A38787B83A13D3E6F0F88F7C834C1(1, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_019b;
		}
	}
	{
		bool L_23;
		L_23 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)308), /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_019b;
		}
	}

IL_00e2:
	{
		bool L_24;
		L_24 = CameraMotion_CheckMouseOverGUI_mBE6C590692E5F0397BE5DE09EA3DDAC6AE417FFE(__this, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_019b;
		}
	}
	{
		// float delta = Input.GetAxis(k_InputMouseScrollwheel);
		float L_25;
		L_25 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0, /*hidden argument*/NULL);
		V_2 = L_25;
		// if( Mathf.Approximately(delta, 0f) )
		float L_26 = V_2;
		bool L_27;
		L_27 = Mathf_Approximately_mC2A3F657E3FD0CCAD4A4936CEE2F67D624A2AA55(L_26, (0.0f), /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_0127;
		}
	}
	{
		// cameraState = ViewTool.Dolly;
		CameraMotion_set_cameraState_m5B17F805648920B4D0F639FE85C329D6BF40D532_inline(__this, 3, /*hidden argument*/NULL);
		// delta = CalcSignedMouseDelta(Input.mousePosition, m_PreviousMousePosition);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		L_28 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_29;
		L_29 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_28, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30 = __this->get_m_PreviousMousePosition_29();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_31;
		L_31 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_30, /*hidden argument*/NULL);
		float L_32;
		L_32 = CameraMotion_CalcSignedMouseDelta_m311F30FC52A1DCD80C8D22FF1E9EF7D5807B884D(L_29, L_31, /*hidden argument*/NULL);
		V_2 = L_32;
	}

IL_0127:
	{
		// m_DistanceToCamera -= delta * (m_DistanceToCamera/k_MaxCameraDistance) * scrollModifier;
		float L_33 = __this->get_m_DistanceToCamera_28();
		float L_34 = V_2;
		float L_35 = __this->get_m_DistanceToCamera_28();
		float L_36 = __this->get_scrollModifier_22();
		__this->set_m_DistanceToCamera_28(((float)il2cpp_codegen_subtract((float)L_33, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_34, (float)((float)((float)L_35/(float)(100.0f))))), (float)L_36)))));
		// m_DistanceToCamera = Mathf.Clamp(m_DistanceToCamera, k_MinCameraDistance, k_MaxCameraDistance);
		float L_37 = __this->get_m_DistanceToCamera_28();
		float L_38;
		L_38 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(L_37, (1.0f), (100.0f), /*hidden argument*/NULL);
		__this->set_m_DistanceToCamera_28(L_38);
		// m_Transform.position = m_Transform.localRotation * (Vector3.forward * -m_DistanceToCamera) + m_ScenePivot;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_39 = __this->get_m_Transform_26();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_40 = __this->get_m_Transform_26();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_41;
		L_41 = Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5(L_40, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_42;
		L_42 = Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90(/*hidden argument*/NULL);
		float L_43 = __this->get_m_DistanceToCamera_28();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_44;
		L_44 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_42, ((-L_43)), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_45;
		L_45 = Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D(L_41, L_44, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_46 = __this->get_m_ScenePivot_27();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_47;
		L_47 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_45, L_46, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_39, L_47, /*hidden argument*/NULL);
	}

IL_019b:
	{
		// bool viewTool = true;
		V_0 = (bool)1;
		//             if (!m_CurrentActionValid || (viewTool
		// #if !CONTROLLER
		//                                         && !Input.GetMouseButton(k_LeftMouse)
		//                                         && !Input.GetMouseButton(k_RightMouse)
		//                                         && !Input.GetMouseButton(k_MiddleMouse)
		//                                         && !Input.GetKey(KeyCode.LeftAlt)
		// #endif
		//                 ))
		bool L_48 = __this->get_m_CurrentActionValid_32();
		if (!L_48)
		{
			goto IL_01cc;
		}
	}
	{
		bool L_49 = V_0;
		if (!L_49)
		{
			goto IL_0203;
		}
	}
	{
		bool L_50;
		L_50 = Input_GetMouseButton_m27BF2DDBF38A38787B83A13D3E6F0F88F7C834C1(0, /*hidden argument*/NULL);
		if (L_50)
		{
			goto IL_0203;
		}
	}
	{
		bool L_51;
		L_51 = Input_GetMouseButton_m27BF2DDBF38A38787B83A13D3E6F0F88F7C834C1(1, /*hidden argument*/NULL);
		if (L_51)
		{
			goto IL_0203;
		}
	}
	{
		bool L_52;
		L_52 = Input_GetMouseButton_m27BF2DDBF38A38787B83A13D3E6F0F88F7C834C1(2, /*hidden argument*/NULL);
		if (L_52)
		{
			goto IL_0203;
		}
	}
	{
		bool L_53;
		L_53 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)308), /*hidden argument*/NULL);
		if (L_53)
		{
			goto IL_0203;
		}
	}

IL_01cc:
	{
		// Rect screen = new Rect(0, 0, Screen.width, Screen.height);
		int32_t L_54;
		L_54 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_55;
		L_55 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_3), (0.0f), (0.0f), ((float)((float)L_54)), ((float)((float)L_55)), /*hidden argument*/NULL);
		// if (screen.Contains(Input.mousePosition))
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_56;
		L_56 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		bool L_57;
		L_57 = Rect_Contains_m51C65159B1706EB00CC962D7CD1CEC2EBD85BC3A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_3), L_56, /*hidden argument*/NULL);
		if (!L_57)
		{
			goto IL_0202;
		}
	}
	{
		// m_PreviousMousePosition = Input.mousePosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_58;
		L_58 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		__this->set_m_PreviousMousePosition_29(L_58);
	}

IL_0202:
	{
		// return;
		return;
	}

IL_0203:
	{
		// if (Input.GetMouseButton(k_RightMouse) && !Input.GetKey(KeyCode.LeftAlt)
		// ) //|| Input.GetKey(KeyCode.LeftShift) )
		bool L_59;
		L_59 = Input_GetMouseButton_m27BF2DDBF38A38787B83A13D3E6F0F88F7C834C1(1, /*hidden argument*/NULL);
		if (!L_59)
		{
			goto IL_0392;
		}
	}
	{
		bool L_60;
		L_60 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)308), /*hidden argument*/NULL);
		if (L_60)
		{
			goto IL_0392;
		}
	}
	{
		// cameraState = ViewTool.Look;
		CameraMotion_set_cameraState_m5B17F805648920B4D0F639FE85C329D6BF40D532_inline(__this, 4, /*hidden argument*/NULL);
		// m_UseEvent = true;
		__this->set_m_UseEvent_24((bool)1);
		// float rotX = Input.GetAxis(k_InputMouseHorizontal);
		float L_61;
		L_61 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7, /*hidden argument*/NULL);
		V_4 = L_61;
		// float rotY = Input.GetAxis(k_InputMouseVertical);
		float L_62;
		L_62 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0, /*hidden argument*/NULL);
		V_5 = L_62;
		// Vector3 eulerRotation = m_Transform.localRotation.eulerAngles;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_63 = __this->get_m_Transform_26();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_64;
		L_64 = Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5(L_63, /*hidden argument*/NULL);
		V_8 = L_64;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_65;
		L_65 = Quaternion_get_eulerAngles_m3DA616CAD670235A407E8A7A75925AA8E22338C3((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&V_8), /*hidden argument*/NULL);
		V_6 = L_65;
		// eulerRotation.x -= rotY * lookSpeed;
		float* L_66 = (&V_6)->get_address_of_x_2();
		float* L_67 = L_66;
		float L_68 = *((float*)L_67);
		float L_69 = V_5;
		float L_70 = __this->get_lookSpeed_20();
		*((float*)L_67) = (float)((float)il2cpp_codegen_subtract((float)L_68, (float)((float)il2cpp_codegen_multiply((float)L_69, (float)L_70))));
		// eulerRotation.y += rotX * lookSpeed;
		float* L_71 = (&V_6)->get_address_of_y_3();
		float* L_72 = L_71;
		float L_73 = *((float*)L_72);
		float L_74 = V_4;
		float L_75 = __this->get_lookSpeed_20();
		*((float*)L_72) = (float)((float)il2cpp_codegen_add((float)L_73, (float)((float)il2cpp_codegen_multiply((float)L_74, (float)L_75))));
		// eulerRotation.z = 0f;
		(&V_6)->set_z_4((0.0f));
		// m_Transform.localRotation = Quaternion.Euler(eulerRotation);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_76 = __this->get_m_Transform_26();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_77 = V_6;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_78;
		L_78 = Quaternion_Euler_m887ABE4F4DD563351E9874D63922C2F53969BBAB(L_77, /*hidden argument*/NULL);
		Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C(L_76, L_78, /*hidden argument*/NULL);
		// float speed = moveSpeed * Time.deltaTime;
		float L_79 = __this->get_moveSpeed_19();
		float L_80;
		L_80 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		V_7 = ((float)il2cpp_codegen_multiply((float)L_79, (float)L_80));
		// m_Transform.position += m_Transform.forward * speed * Input.GetAxis("Vertical");
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_81 = __this->get_m_Transform_26();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_82 = L_81;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_83;
		L_83 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_82, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_84 = __this->get_m_Transform_26();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_85;
		L_85 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_84, /*hidden argument*/NULL);
		float L_86 = V_7;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_87;
		L_87 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_85, L_86, /*hidden argument*/NULL);
		float L_88;
		L_88 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_89;
		L_89 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_87, L_88, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_90;
		L_90 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_83, L_89, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_82, L_90, /*hidden argument*/NULL);
		// m_Transform.position += m_Transform.right * speed * Input.GetAxis("Horizontal");
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_91 = __this->get_m_Transform_26();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_92 = L_91;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_93;
		L_93 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_92, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_94 = __this->get_m_Transform_26();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_95;
		L_95 = Transform_get_right_mA8EB1882CCE8759766544448308C88D9200F06CE(L_94, /*hidden argument*/NULL);
		float L_96 = V_7;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_97;
		L_97 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_95, L_96, /*hidden argument*/NULL);
		float L_98;
		L_98 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_99;
		L_99 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_97, L_98, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_100;
		L_100 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_93, L_99, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_92, L_100, /*hidden argument*/NULL);
	}

IL_031b:
	try
	{ // begin try (depth: 1)
		// m_Transform.position += m_Transform.up * speed * Input.GetAxis("CameraUp");
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_101 = __this->get_m_Transform_26();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_102 = L_101;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_103;
		L_103 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_102, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_104 = __this->get_m_Transform_26();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_105;
		L_105 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31(L_104, /*hidden argument*/NULL);
		float L_106 = V_7;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_107;
		L_107 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_105, L_106, /*hidden argument*/NULL);
		float L_108;
		L_108 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral4E27A425D1733108BCD8B905C1BE9CA9A172D9E8, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_109;
		L_109 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_107, L_108, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_110;
		L_110 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_103, L_109, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_102, L_110, /*hidden argument*/NULL);
		// }
		goto IL_0361;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0354;
		}
		throw e;
	}

CATCH_0354:
	{ // begin catch(System.Object)
		// catch
		// Debug.LogWarning(
		//     "CameraUp input is not configured.  Open \"Edit/Project Settings/Input\" and add an input named \"CameraUp\", mapping q and e to Negative and Positive buttons.");
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5FD4FEE543D1D1C048D83A75015E98D3D8996D1A)), /*hidden argument*/NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0361;
	} // end catch (depth: 1)

IL_0361:
	{
		// m_ScenePivot = transform.position + transform.forward * m_DistanceToCamera;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_111;
		L_111 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_112;
		L_112 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_111, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_113;
		L_113 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_114;
		L_114 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_113, /*hidden argument*/NULL);
		float L_115 = __this->get_m_DistanceToCamera_28();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_116;
		L_116 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_114, L_115, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_117;
		L_117 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_112, L_116, /*hidden argument*/NULL);
		__this->set_m_ScenePivot_27(L_117);
		// }
		goto IL_0577;
	}

IL_0392:
	{
		// else if(Input.GetKey(KeyCode.LeftAlt) && Input.GetMouseButton(k_LeftMouse))
		bool L_118;
		L_118 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)308), /*hidden argument*/NULL);
		if (!L_118)
		{
			goto IL_048a;
		}
	}
	{
		bool L_119;
		L_119 = Input_GetMouseButton_m27BF2DDBF38A38787B83A13D3E6F0F88F7C834C1(0, /*hidden argument*/NULL);
		if (!L_119)
		{
			goto IL_048a;
		}
	}
	{
		// cameraState = ViewTool.Orbit;
		CameraMotion_set_cameraState_m5B17F805648920B4D0F639FE85C329D6BF40D532_inline(__this, 1, /*hidden argument*/NULL);
		// m_UseEvent = true;
		__this->set_m_UseEvent_24((bool)1);
		// float rotX = Input.GetAxis(k_InputMouseHorizontal);
		float L_120;
		L_120 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7, /*hidden argument*/NULL);
		V_9 = L_120;
		// float rotY = -Input.GetAxis(k_InputMouseVertical);
		float L_121;
		L_121 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0, /*hidden argument*/NULL);
		V_10 = ((-L_121));
		// Vector3 eulerRotation = transform.localRotation.eulerAngles;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_122;
		L_122 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_123;
		L_123 = Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5(L_122, /*hidden argument*/NULL);
		V_8 = L_123;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_124;
		L_124 = Quaternion_get_eulerAngles_m3DA616CAD670235A407E8A7A75925AA8E22338C3((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&V_8), /*hidden argument*/NULL);
		V_11 = L_124;
		// if ((Mathf.Approximately(eulerRotation.x, 90f) && rotY > 0f) ||
		//     (Mathf.Approximately(eulerRotation.x, 270f) && rotY < 0f))
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_125 = V_11;
		float L_126 = L_125.get_x_2();
		bool L_127;
		L_127 = Mathf_Approximately_mC2A3F657E3FD0CCAD4A4936CEE2F67D624A2AA55(L_126, (90.0f), /*hidden argument*/NULL);
		if (!L_127)
		{
			goto IL_0405;
		}
	}
	{
		float L_128 = V_10;
		if ((((float)L_128) > ((float)(0.0f))))
		{
			goto IL_0421;
		}
	}

IL_0405:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_129 = V_11;
		float L_130 = L_129.get_x_2();
		bool L_131;
		L_131 = Mathf_Approximately_mC2A3F657E3FD0CCAD4A4936CEE2F67D624A2AA55(L_130, (270.0f), /*hidden argument*/NULL);
		if (!L_131)
		{
			goto IL_0428;
		}
	}
	{
		float L_132 = V_10;
		if ((!(((float)L_132) < ((float)(0.0f)))))
		{
			goto IL_0428;
		}
	}

IL_0421:
	{
		// rotY = 0f;
		V_10 = (0.0f);
	}

IL_0428:
	{
		// eulerRotation.x += rotY * orbitSpeed;
		float* L_133 = (&V_11)->get_address_of_x_2();
		float* L_134 = L_133;
		float L_135 = *((float*)L_134);
		float L_136 = V_10;
		float L_137 = __this->get_orbitSpeed_21();
		*((float*)L_134) = (float)((float)il2cpp_codegen_add((float)L_135, (float)((float)il2cpp_codegen_multiply((float)L_136, (float)L_137))));
		// eulerRotation.y += rotX * orbitSpeed;
		float* L_138 = (&V_11)->get_address_of_y_3();
		float* L_139 = L_138;
		float L_140 = *((float*)L_139);
		float L_141 = V_9;
		float L_142 = __this->get_orbitSpeed_21();
		*((float*)L_139) = (float)((float)il2cpp_codegen_add((float)L_140, (float)((float)il2cpp_codegen_multiply((float)L_141, (float)L_142))));
		// eulerRotation.z = 0f;
		(&V_11)->set_z_4((0.0f));
		// transform.localRotation = Quaternion.Euler(eulerRotation);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_143;
		L_143 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_144 = V_11;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_145;
		L_145 = Quaternion_Euler_m887ABE4F4DD563351E9874D63922C2F53969BBAB(L_144, /*hidden argument*/NULL);
		Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C(L_143, L_145, /*hidden argument*/NULL);
		// transform.position = CalculateCameraPosition(m_ScenePivot);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_146;
		L_146 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_147 = __this->get_m_ScenePivot_27();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_148;
		L_148 = CameraMotion_CalculateCameraPosition_mEFDD201E4DBE36EC55E31E64789ED680655A54EA(__this, L_147, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_146, L_148, /*hidden argument*/NULL);
		// }
		goto IL_0577;
	}

IL_048a:
	{
		// else if(Input.GetMouseButton(k_MiddleMouse) || (Input.GetMouseButton(k_LeftMouse) && viewTool ) )
		bool L_149;
		L_149 = Input_GetMouseButton_m27BF2DDBF38A38787B83A13D3E6F0F88F7C834C1(2, /*hidden argument*/NULL);
		if (L_149)
		{
			goto IL_049f;
		}
	}
	{
		bool L_150;
		L_150 = Input_GetMouseButton_m27BF2DDBF38A38787B83A13D3E6F0F88F7C834C1(0, /*hidden argument*/NULL);
		bool L_151 = V_0;
		if (!((int32_t)((int32_t)L_150&(int32_t)L_151)))
		{
			goto IL_0577;
		}
	}

IL_049f:
	{
		// cameraState = ViewTool.Pan;
		CameraMotion_set_cameraState_m5B17F805648920B4D0F639FE85C329D6BF40D532_inline(__this, 2, /*hidden argument*/NULL);
		// Vector2 delta = Input.mousePosition - m_PreviousMousePosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_152;
		L_152 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_153 = __this->get_m_PreviousMousePosition_29();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_154;
		L_154 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_152, L_153, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_155;
		L_155 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_154, /*hidden argument*/NULL);
		V_12 = L_155;
		// delta.x = ScreenToWorldDistance(delta.x, m_DistanceToCamera);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_156 = V_12;
		float L_157 = L_156.get_x_0();
		float L_158 = __this->get_m_DistanceToCamera_28();
		float L_159;
		L_159 = CameraMotion_ScreenToWorldDistance_m4BC2DAD3091FADADAC783FDC5AC2D0C8F67BB7DC(__this, L_157, L_158, /*hidden argument*/NULL);
		(&V_12)->set_x_0(L_159);
		// delta.y = ScreenToWorldDistance(delta.y, m_DistanceToCamera);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_160 = V_12;
		float L_161 = L_160.get_y_1();
		float L_162 = __this->get_m_DistanceToCamera_28();
		float L_163;
		L_163 = CameraMotion_ScreenToWorldDistance_m4BC2DAD3091FADADAC783FDC5AC2D0C8F67BB7DC(__this, L_161, L_162, /*hidden argument*/NULL);
		(&V_12)->set_y_1(L_163);
		// m_Transform.position -= m_Transform.right * delta.x;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_164 = __this->get_m_Transform_26();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_165 = L_164;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_166;
		L_166 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_165, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_167 = __this->get_m_Transform_26();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_168;
		L_168 = Transform_get_right_mA8EB1882CCE8759766544448308C88D9200F06CE(L_167, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_169 = V_12;
		float L_170 = L_169.get_x_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_171;
		L_171 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_168, L_170, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_172;
		L_172 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_166, L_171, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_165, L_172, /*hidden argument*/NULL);
		// m_Transform.position -= m_Transform.up * delta.y;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_173 = __this->get_m_Transform_26();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_174 = L_173;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_175;
		L_175 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_174, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_176 = __this->get_m_Transform_26();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_177;
		L_177 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31(L_176, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_178 = V_12;
		float L_179 = L_178.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_180;
		L_180 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_177, L_179, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_181;
		L_181 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_175, L_180, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_174, L_181, /*hidden argument*/NULL);
		// m_ScenePivot = m_Transform.position + m_Transform.forward * m_DistanceToCamera;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_182 = __this->get_m_Transform_26();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_183;
		L_183 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_182, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_184 = __this->get_m_Transform_26();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_185;
		L_185 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_184, /*hidden argument*/NULL);
		float L_186 = __this->get_m_DistanceToCamera_28();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_187;
		L_187 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_185, L_186, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_188;
		L_188 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_183, L_187, /*hidden argument*/NULL);
		__this->set_m_ScenePivot_27(L_188);
	}

IL_0577:
	{
		// m_PreviousMousePosition = Input.mousePosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_189;
		L_189 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		__this->set_m_PreviousMousePosition_29(L_189);
		// }
		return;
	}
}
// UnityEngine.Vector3 ProBuilder.Examples.CameraMotion::CalculateCameraPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  CameraMotion_CalculateCameraPosition_mEFDD201E4DBE36EC55E31E64789ED680655A54EA (CameraMotion_tB4108D421FA6012FCA161EBD7AF7DA50B4A89F89 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___target0, const RuntimeMethod* method)
{
	{
		// return transform.localRotation * (Vector3.forward * -m_DistanceToCamera) + target;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_1;
		L_1 = Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5(L_0, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90(/*hidden argument*/NULL);
		float L_3 = __this->get_m_DistanceToCamera_28();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_2, ((-L_3)), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D(L_1, L_4, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___target0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_5, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Void ProBuilder.Examples.CameraMotion::Focus(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraMotion_Focus_m74477BF982B39FF1FFB5215E24F8CA41B76025F4 (CameraMotion_tB4108D421FA6012FCA161EBD7AF7DA50B4A89F89 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * V_1 = NULL;
	Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		// Vector3 center = target.transform.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___target0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// Renderer renderer = target.GetComponent<Renderer>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = ___target0;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_4;
		L_4 = GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466(L_3, /*hidden argument*/GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		V_1 = L_4;
		// Bounds bounds = renderer != null ? renderer.bounds : new Bounds(center, Vector3.one * 10f);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_5 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_5, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0033;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_8, (10.0f), /*hidden argument*/NULL);
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Bounds__ctor_m8356472A177F4B22FFCE8911EBC8547A65A07CA3((&L_10), L_7, L_9, /*hidden argument*/NULL);
		G_B3_0 = L_10;
		goto IL_0039;
	}

IL_0033:
	{
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_11 = V_1;
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  L_12;
		L_12 = Renderer_get_bounds_m296EE301CAC35DE15E295646CAD7911794825097(L_11, /*hidden argument*/NULL);
		G_B3_0 = L_12;
	}

IL_0039:
	{
		V_2 = G_B3_0;
		// m_DistanceToCamera = CalcMinDistanceToBounds(m_CameraComponent, bounds) + 2f;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_13 = __this->get_m_CameraComponent_25();
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  L_14 = V_2;
		float L_15;
		L_15 = CameraMotion_CalcMinDistanceToBounds_mF3EC612463F32B4606896456282B0AC5AA0A6411(L_13, L_14, /*hidden argument*/NULL);
		__this->set_m_DistanceToCamera_28(((float)il2cpp_codegen_add((float)L_15, (float)(2.0f))));
		// m_DistanceToCamera += m_DistanceToCamera;
		float L_16 = __this->get_m_DistanceToCamera_28();
		float L_17 = __this->get_m_DistanceToCamera_28();
		__this->set_m_DistanceToCamera_28(((float)il2cpp_codegen_add((float)L_16, (float)L_17)));
		// center = bounds.center;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Bounds_get_center_m78CD262996DD859F71DAFFF39228EBE0C422F485((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_2), /*hidden argument*/NULL);
		V_0 = L_18;
		// Focus(center, m_DistanceToCamera);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19 = V_0;
		float L_20 = __this->get_m_DistanceToCamera_28();
		CameraMotion_Focus_m4DF172A6CDCF0FE1E504B93FCBE666003B903E0E(__this, L_19, L_20, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ProBuilder.Examples.CameraMotion::Focus(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraMotion_Focus_m4DF172A6CDCF0FE1E504B93FCBE666003B903E0E (CameraMotion_tB4108D421FA6012FCA161EBD7AF7DA50B4A89F89 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___target0, float ___distance1, const RuntimeMethod* method)
{
	{
		// m_ScenePivot = target;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___target0;
		__this->set_m_ScenePivot_27(L_0);
		// m_DistanceToCamera = distance;
		float L_1 = ___distance1;
		__this->set_m_DistanceToCamera_28(L_1);
		// m_PreviousPosition = transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		__this->set_m_PreviousPosition_35(L_3);
		// m_TargetPosition = CalculateCameraPosition( m_ScenePivot );
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = __this->get_m_ScenePivot_27();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = CameraMotion_CalculateCameraPosition_mEFDD201E4DBE36EC55E31E64789ED680655A54EA(__this, L_4, /*hidden argument*/NULL);
		__this->set_m_TargetPosition_36(L_5);
		// m_ZoomProgress = 0f;
		__this->set_m_ZoomProgress_34((0.0f));
		// m_Zooming = true;
		__this->set_m_Zooming_33((bool)1);
		// }
		return;
	}
}
// System.Single ProBuilder.Examples.CameraMotion::ScreenToWorldDistance(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CameraMotion_ScreenToWorldDistance_m4BC2DAD3091FADADAC783FDC5AC2D0C8F67BB7DC (CameraMotion_tB4108D421FA6012FCA161EBD7AF7DA50B4A89F89 * __this, float ___screenDistance0, float ___distanceFromCamera1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector3 start = m_CameraComponent.ScreenToWorldPoint(Vector3.forward * distanceFromCamera);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0 = __this->get_m_CameraComponent_25();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90(/*hidden argument*/NULL);
		float L_2 = ___distanceFromCamera1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_1, L_2, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6(L_0, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// Vector3 end = m_CameraComponent.ScreenToWorldPoint( new Vector3(screenDistance, 0f, distanceFromCamera));
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_5 = __this->get_m_CameraComponent_25();
		float L_6 = ___screenDistance0;
		float L_7 = ___distanceFromCamera1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_8), L_6, (0.0f), L_7, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6(L_5, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		// return CopySign(Vector3.Distance(start, end), screenDistance);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = V_1;
		float L_12;
		L_12 = Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677(L_10, L_11, /*hidden argument*/NULL);
		float L_13 = ___screenDistance0;
		float L_14;
		L_14 = CameraMotion_CopySign_m4032D724F5385AD3567A5E35FB5C5B5F150BC6CF(__this, L_12, L_13, /*hidden argument*/NULL);
		return L_14;
	}
}
// System.Single ProBuilder.Examples.CameraMotion::CalcSignedMouseDelta(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CameraMotion_CalcSignedMouseDelta_m311F30FC52A1DCD80C8D22FF1E9EF7D5807B884D (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___lhs0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rhs1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float G_B3_0 = 0.0f;
	float G_B2_0 = 0.0f;
	float G_B4_0 = 0.0f;
	float G_B4_1 = 0.0f;
	float G_B7_0 = 0.0f;
	float G_B6_0 = 0.0f;
	float G_B8_0 = 0.0f;
	float G_B8_1 = 0.0f;
	{
		// float delta = Vector2.Distance(lhs, rhs);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___lhs0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = ___rhs1;
		float L_2;
		L_2 = Vector2_Distance_m7DFAD110E57AF0E903DDC47BDBD99D1CC62EA03F(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// float scale = 1f / Mathf.Min(Screen.width, Screen.height);
		int32_t L_3;
		L_3 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_4;
		L_4 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		int32_t L_5;
		L_5 = Mathf_Min_m8038BC2CE141C9AF3ECA2E31B88A9768423B1519(L_3, L_4, /*hidden argument*/NULL);
		V_1 = ((float)((float)(1.0f)/(float)((float)((float)L_5))));
		// if( Mathf.Abs(lhs.x - rhs.x) > Mathf.Abs(lhs.y - rhs.y) )
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___lhs0;
		float L_7 = L_6.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8 = ___rhs1;
		float L_9 = L_8.get_x_0();
		float L_10;
		L_10 = fabsf(((float)il2cpp_codegen_subtract((float)L_7, (float)L_9)));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11 = ___lhs0;
		float L_12 = L_11.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_13 = ___rhs1;
		float L_14 = L_13.get_y_1();
		float L_15;
		L_15 = fabsf(((float)il2cpp_codegen_subtract((float)L_12, (float)L_14)));
		if ((!(((float)L_10) > ((float)L_15))))
		{
			goto IL_006a;
		}
	}
	{
		// return delta * scale * ( (lhs.x-rhs.x) > 0f ? 1f : -1f );
		float L_16 = V_0;
		float L_17 = V_1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_18 = ___lhs0;
		float L_19 = L_18.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_20 = ___rhs1;
		float L_21 = L_20.get_x_0();
		G_B2_0 = ((float)il2cpp_codegen_multiply((float)L_16, (float)L_17));
		if ((((float)((float)il2cpp_codegen_subtract((float)L_19, (float)L_21))) > ((float)(0.0f))))
		{
			G_B3_0 = ((float)il2cpp_codegen_multiply((float)L_16, (float)L_17));
			goto IL_0063;
		}
	}
	{
		G_B4_0 = (-1.0f);
		G_B4_1 = G_B2_0;
		goto IL_0068;
	}

IL_0063:
	{
		G_B4_0 = (1.0f);
		G_B4_1 = G_B3_0;
	}

IL_0068:
	{
		return ((float)il2cpp_codegen_multiply((float)G_B4_1, (float)G_B4_0));
	}

IL_006a:
	{
		// return delta * scale * ( (lhs.y-rhs.y) > 0f ? 1f : -1f );
		float L_22 = V_0;
		float L_23 = V_1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_24 = ___lhs0;
		float L_25 = L_24.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_26 = ___rhs1;
		float L_27 = L_26.get_y_1();
		G_B6_0 = ((float)il2cpp_codegen_multiply((float)L_22, (float)L_23));
		if ((((float)((float)il2cpp_codegen_subtract((float)L_25, (float)L_27))) > ((float)(0.0f))))
		{
			G_B7_0 = ((float)il2cpp_codegen_multiply((float)L_22, (float)L_23));
			goto IL_0088;
		}
	}
	{
		G_B8_0 = (-1.0f);
		G_B8_1 = G_B6_0;
		goto IL_008d;
	}

IL_0088:
	{
		G_B8_0 = (1.0f);
		G_B8_1 = G_B7_0;
	}

IL_008d:
	{
		return ((float)il2cpp_codegen_multiply((float)G_B8_1, (float)G_B8_0));
	}
}
// System.Single ProBuilder.Examples.CameraMotion::CalcMinDistanceToBounds(UnityEngine.Camera,UnityEngine.Bounds)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CameraMotion_CalcMinDistanceToBounds_mF3EC612463F32B4606896456282B0AC5AA0A6411 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___cam0, Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  ___bounds1, const RuntimeMethod* method)
{
	{
		// float frustumHeight = Mathf.Max(Mathf.Max(bounds.size.x, bounds.size.y), bounds.size.z);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Bounds_get_size_mB1C37E89879C7810BC9F4210033D9277DAFE2C14((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&___bounds1), /*hidden argument*/NULL);
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Bounds_get_size_mB1C37E89879C7810BC9F4210033D9277DAFE2C14((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&___bounds1), /*hidden argument*/NULL);
		float L_3 = L_2.get_y_3();
		float L_4;
		L_4 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(L_1, L_3, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Bounds_get_size_mB1C37E89879C7810BC9F4210033D9277DAFE2C14((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&___bounds1), /*hidden argument*/NULL);
		float L_6 = L_5.get_z_4();
		float L_7;
		L_7 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(L_4, L_6, /*hidden argument*/NULL);
		// float distance = frustumHeight * .5f / Mathf.Tan(cam.fieldOfView * .5f * Mathf.Deg2Rad);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_8 = ___cam0;
		float L_9;
		L_9 = Camera_get_fieldOfView_mA9BA910800B2E33B572929CDA9A12CE596353920(L_8, /*hidden argument*/NULL);
		float L_10;
		L_10 = tanf(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_9, (float)(0.5f))), (float)(0.0174532924f))));
		// return distance;
		return ((float)((float)((float)il2cpp_codegen_multiply((float)L_7, (float)(0.5f)))/(float)L_10));
	}
}
// System.Single ProBuilder.Examples.CameraMotion::CopySign(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CameraMotion_CopySign_m4032D724F5385AD3567A5E35FB5C5B5F150BC6CF (CameraMotion_tB4108D421FA6012FCA161EBD7AF7DA50B4A89F89 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		// if(x < 0f && y < 0f || x > 0f && y > 0f || x == 0f || y == 0f)
		float L_0 = ___x0;
		if ((!(((float)L_0) < ((float)(0.0f)))))
		{
			goto IL_0010;
		}
	}
	{
		float L_1 = ___y1;
		if ((((float)L_1) < ((float)(0.0f))))
		{
			goto IL_0030;
		}
	}

IL_0010:
	{
		float L_2 = ___x0;
		if ((!(((float)L_2) > ((float)(0.0f)))))
		{
			goto IL_0020;
		}
	}
	{
		float L_3 = ___y1;
		if ((((float)L_3) > ((float)(0.0f))))
		{
			goto IL_0030;
		}
	}

IL_0020:
	{
		float L_4 = ___x0;
		if ((((float)L_4) == ((float)(0.0f))))
		{
			goto IL_0030;
		}
	}
	{
		float L_5 = ___y1;
		if ((!(((float)L_5) == ((float)(0.0f)))))
		{
			goto IL_0032;
		}
	}

IL_0030:
	{
		// return x;
		float L_6 = ___x0;
		return L_6;
	}

IL_0032:
	{
		// return -x;
		float L_7 = ___x0;
		return ((-L_7));
	}
}
// System.Void ProBuilder.Examples.CameraMotion::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraMotion__ctor_m9F750F4D9BB1EB6F53D89CDE8606CCCA40CC55E0 (CameraMotion_tB4108D421FA6012FCA161EBD7AF7DA50B4A89F89 * __this, const RuntimeMethod* method)
{
	{
		// public float moveSpeed = 15f;
		__this->set_moveSpeed_19((15.0f));
		// public float lookSpeed = 5f;
		__this->set_lookSpeed_20((5.0f));
		// public float orbitSpeed = 7f;
		__this->set_orbitSpeed_21((7.0f));
		// public float scrollModifier = 100f;
		__this->set_scrollModifier_22((100.0f));
		// public float zoomSpeed = .1f;
		__this->set_zoomSpeed_23((0.100000001f));
		// Vector3 m_ScenePivot = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		__this->set_m_ScenePivot_27(L_0);
		// float m_DistanceToCamera = 10f;
		__this->set_m_DistanceToCamera_28((10.0f));
		// Vector3 m_PreviousMousePosition = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		__this->set_m_PreviousMousePosition_29(L_1);
		// Rect m_MouseCursorRect = new Rect(0, 0, k_CursorIconSize, k_CursorIconSize);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_2), (0.0f), (0.0f), (64.0f), (64.0f), /*hidden argument*/NULL);
		__this->set_m_MouseCursorRect_30(L_2);
		// Rect m_ScreenCenterRect = new Rect(0, 0, k_CursorIconSize, k_CursorIconSize);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_3), (0.0f), (0.0f), (64.0f), (64.0f), /*hidden argument*/NULL);
		__this->set_m_ScreenCenterRect_31(L_3);
		// bool m_CurrentActionValid = true;
		__this->set_m_CurrentActionValid_32((bool)1);
		// Vector3 m_PreviousPosition = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		__this->set_m_PreviousPosition_35(L_4);
		// Vector3 m_TargetPosition = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		__this->set_m_TargetPosition_36(L_5);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void ProBuilder.Examples.CreatePolyShape::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreatePolyShape_Start_m592F40F2ABD4C540661928FFBB9744971206624C (CreatePolyShape_t075FC86D37A719F7BCB672C4EBF53B00876056A7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06_m2CA145FFD8E5BD25F701DCDB1F8B7AAEE1876797_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D309F814AB46EA4A55D3DD5E7C9544161649950);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	{
		// var go = new GameObject();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mACDBD7A1F25B33D006A60F67EF901B33DD3D52E9(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// m_Mesh = go.gameObject.AddComponent<ProBuilderMesh>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = V_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_1, /*hidden argument*/NULL);
		ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 * L_3;
		L_3 = GameObject_AddComponent_TisProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06_m2CA145FFD8E5BD25F701DCDB1F8B7AAEE1876797(L_2, /*hidden argument*/GameObject_AddComponent_TisProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06_m2CA145FFD8E5BD25F701DCDB1F8B7AAEE1876797_RuntimeMethod_var);
		__this->set_m_Mesh_8(L_3);
		// InvokeRepeating("Rebuild", 0f, .1f);
		MonoBehaviour_InvokeRepeating_mB77F4276826FBA696A150831D190875CB5802C70(__this, _stringLiteral9D309F814AB46EA4A55D3DD5E7C9544161649950, (0.0f), (0.100000001f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ProBuilder.Examples.CreatePolyShape::Rebuild()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreatePolyShape_Rebuild_mCF705C540187BB76120FE644EFCB209F57323994 (CreatePolyShape_t075FC86D37A719F7BCB672C4EBF53B00876056A7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	{
		// Vector3[] points = new Vector3[32];
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_0 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)SZArrayNew(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		V_0 = L_0;
		// for (int i = 0, c = points.Length; i < c; i++)
		V_1 = 0;
		// for (int i = 0, c = points.Length; i < c; i++)
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_1 = V_0;
		V_2 = ((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)));
		goto IL_0059;
	}

IL_0010:
	{
		// float angle = Mathf.Deg2Rad * ((i / (float)c) * 360f);
		int32_t L_2 = V_1;
		int32_t L_3 = V_2;
		V_3 = ((float)il2cpp_codegen_multiply((float)(0.0174532924f), (float)((float)il2cpp_codegen_multiply((float)((float)((float)((float)((float)L_2))/(float)((float)((float)L_3)))), (float)(360.0f)))));
		// points[i] = new Vector3(Mathf.Cos(angle), 0f, Mathf.Sin(angle)) * Random.Range(m_RadiusMin, m_RadiusMax);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_4 = V_0;
		int32_t L_5 = V_1;
		float L_6 = V_3;
		float L_7;
		L_7 = cosf(L_6);
		float L_8 = V_3;
		float L_9;
		L_9 = sinf(L_8);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_10), L_7, (0.0f), L_9, /*hidden argument*/NULL);
		float L_11 = __this->get_m_RadiusMin_4();
		float L_12 = __this->get_m_RadiusMax_5();
		float L_13;
		L_13 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(L_11, L_12, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_10, L_13, /*hidden argument*/NULL);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_14);
		// for (int i = 0, c = points.Length; i < c; i++)
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0059:
	{
		// for (int i = 0, c = points.Length; i < c; i++)
		int32_t L_16 = V_1;
		int32_t L_17 = V_2;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0010;
		}
	}
	{
		// m_Mesh.CreateShapeFromPolygon(points, m_Height, m_FlipNormals);
		ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 * L_18 = __this->get_m_Mesh_8();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_19 = V_0;
		float L_20 = __this->get_m_Height_6();
		bool L_21 = __this->get_m_FlipNormals_7();
		ActionResult_t75240A11EF21E91AF8CC415EB4666333E8D65198 * L_22;
		L_22 = AppendElements_CreateShapeFromPolygon_m9B1870F1791D5DAE0FC5189E503BE4BEC0B96BA8(L_18, (RuntimeObject*)(RuntimeObject*)L_19, L_20, L_21, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ProBuilder.Examples.CreatePolyShape::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreatePolyShape__ctor_mB4D9FE26EC9680E124A9186295E5638EBA29621F (CreatePolyShape_t075FC86D37A719F7BCB672C4EBF53B00876056A7 * __this, const RuntimeMethod* method)
{
	{
		// public float m_RadiusMin = 1.5f;
		__this->set_m_RadiusMin_4((1.5f));
		// public float m_RadiusMax = 2f;
		__this->set_m_RadiusMax_5((2.0f));
		// public float m_Height = 1f;
		__this->set_m_Height_6((1.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void ProBuilder.Examples.Handles::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Handles_Awake_m3615A89242BB2097C2BFA32114A105CB8D05E6EA (Handles_tE2F54FAA2888BCCD78C0B29D9A3D5A83B0DBA092 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Handles_tE2F54FAA2888BCCD78C0B29D9A3D5A83B0DBA092_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// s_Instance = this;
		IL2CPP_RUNTIME_CLASS_INIT(Handles_tE2F54FAA2888BCCD78C0B29D9A3D5A83B0DBA092_il2cpp_TypeInfo_var);
		((Handles_tE2F54FAA2888BCCD78C0B29D9A3D5A83B0DBA092_StaticFields*)il2cpp_codegen_static_fields_for(Handles_tE2F54FAA2888BCCD78C0B29D9A3D5A83B0DBA092_il2cpp_TypeInfo_var))->set_s_Instance_4(__this);
		// }
		return;
	}
}
// System.Void ProBuilder.Examples.Handles::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Handles_Init_m310CCE46AEC09304A7FF5076CDEE89A7A8BD3417 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BuiltinMaterials_tFDEA0BDEBF5A6827D1C318165A6EC719F3B55951_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Handles_tE2F54FAA2888BCCD78C0B29D9A3D5A83B0DBA092_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1928516CCADFDD3844E97006274F43795D2DE996);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB81725853B8165102E432135CAFFA999C78AFB62);
		s_Il2CppMethodInitialized = true;
	}
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * V_0 = NULL;
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * G_B7_0 = NULL;
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * G_B10_0 = NULL;
	{
		// if (s_Instance == null)
		IL2CPP_RUNTIME_CLASS_INIT(Handles_tE2F54FAA2888BCCD78C0B29D9A3D5A83B0DBA092_il2cpp_TypeInfo_var);
		Handles_tE2F54FAA2888BCCD78C0B29D9A3D5A83B0DBA092 * L_0 = ((Handles_tE2F54FAA2888BCCD78C0B29D9A3D5A83B0DBA092_StaticFields*)il2cpp_codegen_static_fields_for(Handles_tE2F54FAA2888BCCD78C0B29D9A3D5A83B0DBA092_il2cpp_TypeInfo_var))->get_s_Instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// Debug.LogError("No Handles object found in scene");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteralB81725853B8165102E432135CAFFA999C78AFB62, /*hidden argument*/NULL);
	}

IL_0017:
	{
		// if (s_Initialized)
		IL2CPP_RUNTIME_CLASS_INIT(Handles_tE2F54FAA2888BCCD78C0B29D9A3D5A83B0DBA092_il2cpp_TypeInfo_var);
		bool L_2 = ((Handles_tE2F54FAA2888BCCD78C0B29D9A3D5A83B0DBA092_StaticFields*)il2cpp_codegen_static_fields_for(Handles_tE2F54FAA2888BCCD78C0B29D9A3D5A83B0DBA092_il2cpp_TypeInfo_var))->get_s_Initialized_5();
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// return;
		return;
	}

IL_001f:
	{
		// s_Initialized = true;
		IL2CPP_RUNTIME_CLASS_INIT(Handles_tE2F54FAA2888BCCD78C0B29D9A3D5A83B0DBA092_il2cpp_TypeInfo_var);
		((Handles_tE2F54FAA2888BCCD78C0B29D9A3D5A83B0DBA092_StaticFields*)il2cpp_codegen_static_fields_for(Handles_tE2F54FAA2888BCCD78C0B29D9A3D5A83B0DBA092_il2cpp_TypeInfo_var))->set_s_Initialized_5((bool)1);
		// var lineShader = BuiltinMaterials.geometryShadersSupported ? s_Instance.m_LineBillboard : s_Instance.m_FaceHighlight;
		IL2CPP_RUNTIME_CLASS_INIT(BuiltinMaterials_tFDEA0BDEBF5A6827D1C318165A6EC719F3B55951_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = BuiltinMaterials_get_geometryShadersSupported_m2AEC322950AC4B652B126C7752BC7AF5543B0FAA(/*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0038;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Handles_tE2F54FAA2888BCCD78C0B29D9A3D5A83B0DBA092_il2cpp_TypeInfo_var);
		Handles_tE2F54FAA2888BCCD78C0B29D9A3D5A83B0DBA092 * L_4 = ((Handles_tE2F54FAA2888BCCD78C0B29D9A3D5A83B0DBA092_StaticFields*)il2cpp_codegen_static_fields_for(Handles_tE2F54FAA2888BCCD78C0B29D9A3D5A83B0DBA092_il2cpp_TypeInfo_var))->get_s_Instance_4();
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_5 = L_4->get_m_FaceHighlight_6();
		G_B7_0 = L_5;
		goto IL_0042;
	}

IL_0038:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Handles_tE2F54FAA2888BCCD78C0B29D9A3D5A83B0DBA092_il2cpp_TypeInfo_var);
		Handles_tE2F54FAA2888BCCD78C0B29D9A3D5A83B0DBA092 * L_6 = ((Handles_tE2F54FAA2888BCCD78C0B29D9A3D5A83B0DBA092_StaticFields*)il2cpp_codegen_static_fields_for(Handles_tE2F54FAA2888BCCD78C0B29D9A3D5A83B0DBA092_il2cpp_TypeInfo_var))->get_s_Instance_4();
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_7 = L_6->get_m_LineBillboard_7();
		G_B7_0 = L_7;
	}

IL_0042:
	{
		V_0 = G_B7_0;
		// var vertShader = BuiltinMaterials.geometryShadersSupported ? s_Instance.m_PointBillboard : s_Instance.m_VertexShader;
		IL2CPP_RUNTIME_CLASS_INIT(BuiltinMaterials_tFDEA0BDEBF5A6827D1C318165A6EC719F3B55951_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = BuiltinMaterials_get_geometryShadersSupported_m2AEC322950AC4B652B126C7752BC7AF5543B0FAA(/*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0056;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Handles_tE2F54FAA2888BCCD78C0B29D9A3D5A83B0DBA092_il2cpp_TypeInfo_var);
		Handles_tE2F54FAA2888BCCD78C0B29D9A3D5A83B0DBA092 * L_9 = ((Handles_tE2F54FAA2888BCCD78C0B29D9A3D5A83B0DBA092_StaticFields*)il2cpp_codegen_static_fields_for(Handles_tE2F54FAA2888BCCD78C0B29D9A3D5A83B0DBA092_il2cpp_TypeInfo_var))->get_s_Instance_4();
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_10 = L_9->get_m_VertexShader_9();
		G_B10_0 = L_10;
		goto IL_0060;
	}

IL_0056:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Handles_tE2F54FAA2888BCCD78C0B29D9A3D5A83B0DBA092_il2cpp_TypeInfo_var);
		Handles_tE2F54FAA2888BCCD78C0B29D9A3D5A83B0DBA092 * L_11 = ((Handles_tE2F54FAA2888BCCD78C0B29D9A3D5A83B0DBA092_StaticFields*)il2cpp_codegen_static_fields_for(Handles_tE2F54FAA2888BCCD78C0B29D9A3D5A83B0DBA092_il2cpp_TypeInfo_var))->get_s_Instance_4();
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_12 = L_11->get_m_PointBillboard_8();
		G_B10_0 = L_12;
	}

IL_0060:
	{
		// s_EdgeMaterial = new Material(lineShader);
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_13 = V_0;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_14 = (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)il2cpp_codegen_object_new(Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		Material__ctor_mD2A3BCD3B4F17F5C6E95F3B34DAF4B497B67127E(L_14, L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Handles_tE2F54FAA2888BCCD78C0B29D9A3D5A83B0DBA092_il2cpp_TypeInfo_var);
		((Handles_tE2F54FAA2888BCCD78C0B29D9A3D5A83B0DBA092_StaticFields*)il2cpp_codegen_static_fields_for(Handles_tE2F54FAA2888BCCD78C0B29D9A3D5A83B0DBA092_il2cpp_TypeInfo_var))->set_s_EdgeMaterial_10(L_14);
		// s_VertMaterial = new Material(vertShader);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_15 = (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)il2cpp_codegen_object_new(Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		Material__ctor_mD2A3BCD3B4F17F5C6E95F3B34DAF4B497B67127E(L_15, G_B10_0, /*hidden argument*/NULL);
		((Handles_tE2F54FAA2888BCCD78C0B29D9A3D5A83B0DBA092_StaticFields*)il2cpp_codegen_static_fields_for(Handles_tE2F54FAA2888BCCD78C0B29D9A3D5A83B0DBA092_il2cpp_TypeInfo_var))->set_s_VertMaterial_11(L_15);
		// s_FaceMaterial = new Material(s_Instance.m_FaceHighlight);
		Handles_tE2F54FAA2888BCCD78C0B29D9A3D5A83B0DBA092 * L_16 = ((Handles_tE2F54FAA2888BCCD78C0B29D9A3D5A83B0DBA092_StaticFields*)il2cpp_codegen_static_fields_for(Handles_tE2F54FAA2888BCCD78C0B29D9A3D5A83B0DBA092_il2cpp_TypeInfo_var))->get_s_Instance_4();
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_17 = L_16->get_m_FaceHighlight_6();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_18 = (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)il2cpp_codegen_object_new(Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		Material__ctor_mD2A3BCD3B4F17F5C6E95F3B34DAF4B497B67127E(L_18, L_17, /*hidden argument*/NULL);
		((Handles_tE2F54FAA2888BCCD78C0B29D9A3D5A83B0DBA092_StaticFields*)il2cpp_codegen_static_fields_for(Handles_tE2F54FAA2888BCCD78C0B29D9A3D5A83B0DBA092_il2cpp_TypeInfo_var))->set_s_FaceMaterial_12(L_18);
		// s_FaceMaterial.SetFloat("_Dither", 1f);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_19 = ((Handles_tE2F54FAA2888BCCD78C0B29D9A3D5A83B0DBA092_StaticFields*)il2cpp_codegen_static_fields_for(Handles_tE2F54FAA2888BCCD78C0B29D9A3D5A83B0DBA092_il2cpp_TypeInfo_var))->get_s_FaceMaterial_12();
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_19, _stringLiteral1928516CCADFDD3844E97006274F43795D2DE996, (1.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.Material ProBuilder.Examples.Handles::get_edgeMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * Handles_get_edgeMaterial_m0550C04A6472DE1F0B4306370E4E7D9994312B89 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Handles_tE2F54FAA2888BCCD78C0B29D9A3D5A83B0DBA092_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Init();
		IL2CPP_RUNTIME_CLASS_INIT(Handles_tE2F54FAA2888BCCD78C0B29D9A3D5A83B0DBA092_il2cpp_TypeInfo_var);
		Handles_Init_m310CCE46AEC09304A7FF5076CDEE89A7A8BD3417(/*hidden argument*/NULL);
		// return s_EdgeMaterial;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_0 = ((Handles_tE2F54FAA2888BCCD78C0B29D9A3D5A83B0DBA092_StaticFields*)il2cpp_codegen_static_fields_for(Handles_tE2F54FAA2888BCCD78C0B29D9A3D5A83B0DBA092_il2cpp_TypeInfo_var))->get_s_EdgeMaterial_10();
		return L_0;
	}
}
// UnityEngine.Material ProBuilder.Examples.Handles::get_vertMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * Handles_get_vertMaterial_m3A181FCE9D672B2192E5EEAC5CE2C26B9EAE95B9 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Handles_tE2F54FAA2888BCCD78C0B29D9A3D5A83B0DBA092_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Init();
		IL2CPP_RUNTIME_CLASS_INIT(Handles_tE2F54FAA2888BCCD78C0B29D9A3D5A83B0DBA092_il2cpp_TypeInfo_var);
		Handles_Init_m310CCE46AEC09304A7FF5076CDEE89A7A8BD3417(/*hidden argument*/NULL);
		// return s_VertMaterial;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_0 = ((Handles_tE2F54FAA2888BCCD78C0B29D9A3D5A83B0DBA092_StaticFields*)il2cpp_codegen_static_fields_for(Handles_tE2F54FAA2888BCCD78C0B29D9A3D5A83B0DBA092_il2cpp_TypeInfo_var))->get_s_VertMaterial_11();
		return L_0;
	}
}
// UnityEngine.Material ProBuilder.Examples.Handles::get_faceMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * Handles_get_faceMaterial_m2F219B64C4D1B4769C7F8B0F4F685EA44D06A768 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Handles_tE2F54FAA2888BCCD78C0B29D9A3D5A83B0DBA092_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Init();
		IL2CPP_RUNTIME_CLASS_INIT(Handles_tE2F54FAA2888BCCD78C0B29D9A3D5A83B0DBA092_il2cpp_TypeInfo_var);
		Handles_Init_m310CCE46AEC09304A7FF5076CDEE89A7A8BD3417(/*hidden argument*/NULL);
		// return s_FaceMaterial;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_0 = ((Handles_tE2F54FAA2888BCCD78C0B29D9A3D5A83B0DBA092_StaticFields*)il2cpp_codegen_static_fields_for(Handles_tE2F54FAA2888BCCD78C0B29D9A3D5A83B0DBA092_il2cpp_TypeInfo_var))->get_s_FaceMaterial_12();
		return L_0;
	}
}
// System.Void ProBuilder.Examples.Handles::Draw(UnityEngine.ProBuilder.ProBuilderMesh,UnityEngine.ProBuilder.Face,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Handles_Draw_m56E41213EE2CA14AE1376DEC7A8A2DA6DAC89A56 (ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 * ___mesh0, Face_t670F9C6E42E8D3EEA7AD53AD268426DF37B3AA0B * ___face1, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Handles_tE2F54FAA2888BCCD78C0B29D9A3D5A83B0DBA092_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// s_FaceArray[0] = face;
		IL2CPP_RUNTIME_CLASS_INIT(Handles_tE2F54FAA2888BCCD78C0B29D9A3D5A83B0DBA092_il2cpp_TypeInfo_var);
		FaceU5BU5D_t0D522232374325AD8B00CA039B016D822C4F8107* L_0 = ((Handles_tE2F54FAA2888BCCD78C0B29D9A3D5A83B0DBA092_StaticFields*)il2cpp_codegen_static_fields_for(Handles_tE2F54FAA2888BCCD78C0B29D9A3D5A83B0DBA092_il2cpp_TypeInfo_var))->get_s_FaceArray_13();
		Face_t670F9C6E42E8D3EEA7AD53AD268426DF37B3AA0B * L_1 = ___face1;
		ArrayElementTypeCheck (L_0, L_1);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (Face_t670F9C6E42E8D3EEA7AD53AD268426DF37B3AA0B *)L_1);
		// Draw(mesh, s_FaceArray, color);
		ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 * L_2 = ___mesh0;
		FaceU5BU5D_t0D522232374325AD8B00CA039B016D822C4F8107* L_3 = ((Handles_tE2F54FAA2888BCCD78C0B29D9A3D5A83B0DBA092_StaticFields*)il2cpp_codegen_static_fields_for(Handles_tE2F54FAA2888BCCD78C0B29D9A3D5A83B0DBA092_il2cpp_TypeInfo_var))->get_s_FaceArray_13();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_4 = ___color2;
		Handles_Draw_m1062AE1C31DDC878471918DBE08FFFC9DDD7CC88(L_2, (RuntimeObject*)(RuntimeObject*)L_3, L_4, 4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ProBuilder.Examples.Handles::Draw(UnityEngine.ProBuilder.ProBuilderMesh,System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Face>,UnityEngine.Color,UnityEngine.Rendering.CompareFunction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Handles_Draw_m1062AE1C31DDC878471918DBE08FFFC9DDD7CC88 (ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 * ___mesh0, RuntimeObject* ___faces1, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color2, int32_t ___compareFunction3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Handles_tE2F54FAA2888BCCD78C0B29D9A3D5A83B0DBA092_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t8D42E00EDA42CA38E1279CAC0865B5EDD29328B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t41AD865847BCDCC0B778C72C0F454BE65D25870A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t8B00F815D77E0AC6983C059BC09DBC979F8E86E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyCollection_1_get_Count_m4D45E9941D00D5920506B0B878DD4A467B0BA7BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyCollection_1_get_Item_m6072A37D1AE093FC1051FA4791F0A1C68A975FA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61C0A9A4EB397DF458A91FB78ADCE4A7D7FF1F4E);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Face_t670F9C6E42E8D3EEA7AD53AD268426DF37B3AA0B * V_2 = NULL;
	ReadOnlyCollection_1_t3E37961FF3644E8E5BC1468444123741B9E47EFF * V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// if (mesh == null)
		ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 * L_0 = ___mesh0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
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
		// faceMaterial.SetColor("_Color", color);
		IL2CPP_RUNTIME_CLASS_INIT(Handles_tE2F54FAA2888BCCD78C0B29D9A3D5A83B0DBA092_il2cpp_TypeInfo_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_2;
		L_2 = Handles_get_faceMaterial_m2F219B64C4D1B4769C7F8B0F4F685EA44D06A768(/*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_3 = ___color2;
		Material_SetColor_m5CAAF4A8D7F839597B4E14588E341462EEB81698(L_2, _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE, L_3, /*hidden argument*/NULL);
		// faceMaterial.SetInt("_HandleZTest", (int) compareFunction);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_4;
		L_4 = Handles_get_faceMaterial_m2F219B64C4D1B4769C7F8B0F4F685EA44D06A768(/*hidden argument*/NULL);
		int32_t L_5 = ___compareFunction3;
		Material_SetInt_m15D944E498726C9BB3A60A41DAAA45000F570F87(L_4, _stringLiteral61C0A9A4EB397DF458A91FB78ADCE4A7D7FF1F4E, L_5, /*hidden argument*/NULL);
		// if (!faceMaterial.SetPass(0))
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_6;
		L_6 = Handles_get_faceMaterial_m2F219B64C4D1B4769C7F8B0F4F685EA44D06A768(/*hidden argument*/NULL);
		bool L_7;
		L_7 = Material_SetPass_mC888245491A21488CFF2FD64CA45E8404CB9FF9C(L_6, 0, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0038;
		}
	}
	{
		// return;
		return;
	}

IL_0038:
	{
		// GL.PushMatrix();
		GL_PushMatrix_mF1F26015AB75226AB048A7ABF700871C5A0AE0B3(/*hidden argument*/NULL);
		// GL.Begin(GL.TRIANGLES);
		GL_Begin_mD719B21F92DCF2D8F567C008AD21CA73CA762622(4, /*hidden argument*/NULL);
		// GL.MultMatrix(mesh.transform.localToWorldMatrix);
		ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 * L_8 = ___mesh0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_8, /*hidden argument*/NULL);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_10;
		L_10 = Transform_get_localToWorldMatrix_m6B810B0F20BA5DE48009461A4D662DD8BFF6A3CC(L_9, /*hidden argument*/NULL);
		GL_MultMatrix_mFD29D84189E779D06453E3D9BE4879C4A729E01B(L_10, /*hidden argument*/NULL);
		// var positions = mesh.positions;
		ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 * L_11 = ___mesh0;
		RuntimeObject* L_12;
		L_12 = ProBuilderMesh_get_positions_mDDB55F170B673C3CEC221A27E5045C012C43E33D(L_11, /*hidden argument*/NULL);
		V_0 = L_12;
		// foreach (var face in faces)
		RuntimeObject* L_13 = ___faces1;
		RuntimeObject* L_14;
		L_14 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Face>::GetEnumerator() */, IEnumerable_1_t8D42E00EDA42CA38E1279CAC0865B5EDD29328B1_il2cpp_TypeInfo_var, L_13);
		V_1 = L_14;
	}

IL_0061:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00ca;
		}

IL_0063:
		{
			// foreach (var face in faces)
			RuntimeObject* L_15 = V_1;
			Face_t670F9C6E42E8D3EEA7AD53AD268426DF37B3AA0B * L_16;
			L_16 = InterfaceFuncInvoker0< Face_t670F9C6E42E8D3EEA7AD53AD268426DF37B3AA0B * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<UnityEngine.ProBuilder.Face>::get_Current() */, IEnumerator_1_t41AD865847BCDCC0B778C72C0F454BE65D25870A_il2cpp_TypeInfo_var, L_15);
			V_2 = L_16;
			// if (face == null)
			Face_t670F9C6E42E8D3EEA7AD53AD268426DF37B3AA0B * L_17 = V_2;
			if (!L_17)
			{
				goto IL_00ca;
			}
		}

IL_006d:
		{
			// var indices = face.indexes;
			Face_t670F9C6E42E8D3EEA7AD53AD268426DF37B3AA0B * L_18 = V_2;
			ReadOnlyCollection_1_t3E37961FF3644E8E5BC1468444123741B9E47EFF * L_19;
			L_19 = Face_get_indexes_mCCC6D1D84EC5A4E4243D15693A2FE9393F21D74D(L_18, /*hidden argument*/NULL);
			V_3 = L_19;
			// for (int i = 0, c = indices.Count; i < c; i += 3)
			V_4 = 0;
			// for (int i = 0, c = indices.Count; i < c; i += 3)
			ReadOnlyCollection_1_t3E37961FF3644E8E5BC1468444123741B9E47EFF * L_20 = V_3;
			int32_t L_21;
			L_21 = ReadOnlyCollection_1_get_Count_m4D45E9941D00D5920506B0B878DD4A467B0BA7BD(L_20, /*hidden argument*/ReadOnlyCollection_1_get_Count_m4D45E9941D00D5920506B0B878DD4A467B0BA7BD_RuntimeMethod_var);
			V_5 = L_21;
			goto IL_00c4;
		}

IL_0081:
		{
			// GL.Vertex(positions[indices[i+0]]);
			RuntimeObject* L_22 = V_0;
			ReadOnlyCollection_1_t3E37961FF3644E8E5BC1468444123741B9E47EFF * L_23 = V_3;
			int32_t L_24 = V_4;
			int32_t L_25;
			L_25 = ReadOnlyCollection_1_get_Item_m6072A37D1AE093FC1051FA4791F0A1C68A975FA2(L_23, L_24, /*hidden argument*/ReadOnlyCollection_1_get_Item_m6072A37D1AE093FC1051FA4791F0A1C68A975FA2_RuntimeMethod_var);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
			L_26 = InterfaceFuncInvoker1< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<UnityEngine.Vector3>::get_Item(System.Int32) */, IList_1_t8B00F815D77E0AC6983C059BC09DBC979F8E86E0_il2cpp_TypeInfo_var, L_22, L_25);
			GL_Vertex_mDC7977D6400538B576D96E239BFECF39AE41022E(L_26, /*hidden argument*/NULL);
			// GL.Vertex(positions[indices[i+1]]);
			RuntimeObject* L_27 = V_0;
			ReadOnlyCollection_1_t3E37961FF3644E8E5BC1468444123741B9E47EFF * L_28 = V_3;
			int32_t L_29 = V_4;
			int32_t L_30;
			L_30 = ReadOnlyCollection_1_get_Item_m6072A37D1AE093FC1051FA4791F0A1C68A975FA2(L_28, ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1)), /*hidden argument*/ReadOnlyCollection_1_get_Item_m6072A37D1AE093FC1051FA4791F0A1C68A975FA2_RuntimeMethod_var);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31;
			L_31 = InterfaceFuncInvoker1< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<UnityEngine.Vector3>::get_Item(System.Int32) */, IList_1_t8B00F815D77E0AC6983C059BC09DBC979F8E86E0_il2cpp_TypeInfo_var, L_27, L_30);
			GL_Vertex_mDC7977D6400538B576D96E239BFECF39AE41022E(L_31, /*hidden argument*/NULL);
			// GL.Vertex(positions[indices[i+2]]);
			RuntimeObject* L_32 = V_0;
			ReadOnlyCollection_1_t3E37961FF3644E8E5BC1468444123741B9E47EFF * L_33 = V_3;
			int32_t L_34 = V_4;
			int32_t L_35;
			L_35 = ReadOnlyCollection_1_get_Item_m6072A37D1AE093FC1051FA4791F0A1C68A975FA2(L_33, ((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)2)), /*hidden argument*/ReadOnlyCollection_1_get_Item_m6072A37D1AE093FC1051FA4791F0A1C68A975FA2_RuntimeMethod_var);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36;
			L_36 = InterfaceFuncInvoker1< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<UnityEngine.Vector3>::get_Item(System.Int32) */, IList_1_t8B00F815D77E0AC6983C059BC09DBC979F8E86E0_il2cpp_TypeInfo_var, L_32, L_35);
			GL_Vertex_mDC7977D6400538B576D96E239BFECF39AE41022E(L_36, /*hidden argument*/NULL);
			// for (int i = 0, c = indices.Count; i < c; i += 3)
			int32_t L_37 = V_4;
			V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)3));
		}

IL_00c4:
		{
			// for (int i = 0, c = indices.Count; i < c; i += 3)
			int32_t L_38 = V_4;
			int32_t L_39 = V_5;
			if ((((int32_t)L_38) < ((int32_t)L_39)))
			{
				goto IL_0081;
			}
		}

IL_00ca:
		{
			// foreach (var face in faces)
			RuntimeObject* L_40 = V_1;
			bool L_41;
			L_41 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_40);
			if (L_41)
			{
				goto IL_0063;
			}
		}

IL_00d2:
		{
			IL2CPP_LEAVE(0xDE, FINALLY_00d4);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00d4;
	}

FINALLY_00d4:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_42 = V_1;
			if (!L_42)
			{
				goto IL_00dd;
			}
		}

IL_00d7:
		{
			RuntimeObject* L_43 = V_1;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_43);
		}

IL_00dd:
		{
			IL2CPP_END_FINALLY(212)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(212)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xDE, IL_00de)
	}

IL_00de:
	{
		// GL.End();
		GL_End_m4A164117D2D3CD3620938F2D29EFBA2D5CB900B7(/*hidden argument*/NULL);
		// GL.PopMatrix();
		GL_PopMatrix_m06F4C60CA3B91C7F8B7EFF83D21563C9613B3738(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ProBuilder.Examples.Handles::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color,UnityEngine.Rendering.CompareFunction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Handles_DrawLine_m217134D01EDF8744EF892622D2245FE75A658219 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color2, int32_t ___compareFunction3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BuiltinMaterials_tFDEA0BDEBF5A6827D1C318165A6EC719F3B55951_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Handles_tE2F54FAA2888BCCD78C0B29D9A3D5A83B0DBA092_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61C0A9A4EB397DF458A91FB78ADCE4A7D7FF1F4E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB2A2A23C0F95CC4BF23BDB0980D559F59E054C4B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// edgeMaterial.SetColor("_Color", color);
		IL2CPP_RUNTIME_CLASS_INIT(Handles_tE2F54FAA2888BCCD78C0B29D9A3D5A83B0DBA092_il2cpp_TypeInfo_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_0;
		L_0 = Handles_get_edgeMaterial_m0550C04A6472DE1F0B4306370E4E7D9994312B89(/*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1 = ___color2;
		Material_SetColor_m5CAAF4A8D7F839597B4E14588E341462EEB81698(L_0, _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE, L_1, /*hidden argument*/NULL);
		// edgeMaterial.SetInt("_HandleZTest", (int) compareFunction);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_2;
		L_2 = Handles_get_edgeMaterial_m0550C04A6472DE1F0B4306370E4E7D9994312B89(/*hidden argument*/NULL);
		int32_t L_3 = ___compareFunction3;
		Material_SetInt_m15D944E498726C9BB3A60A41DAAA45000F570F87(L_2, _stringLiteral61C0A9A4EB397DF458A91FB78ADCE4A7D7FF1F4E, L_3, /*hidden argument*/NULL);
		// if (BuiltinMaterials.geometryShadersSupported)
		IL2CPP_RUNTIME_CLASS_INIT(BuiltinMaterials_tFDEA0BDEBF5A6827D1C318165A6EC719F3B55951_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = BuiltinMaterials_get_geometryShadersSupported_m2AEC322950AC4B652B126C7752BC7AF5543B0FAA(/*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_003b;
		}
	}
	{
		// edgeMaterial.SetFloat("_Scale", .2f);
		IL2CPP_RUNTIME_CLASS_INIT(Handles_tE2F54FAA2888BCCD78C0B29D9A3D5A83B0DBA092_il2cpp_TypeInfo_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_5;
		L_5 = Handles_get_edgeMaterial_m0550C04A6472DE1F0B4306370E4E7D9994312B89(/*hidden argument*/NULL);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_5, _stringLiteralB2A2A23C0F95CC4BF23BDB0980D559F59E054C4B, (0.200000003f), /*hidden argument*/NULL);
	}

IL_003b:
	{
		// if (!edgeMaterial.SetPass(0))
		IL2CPP_RUNTIME_CLASS_INIT(Handles_tE2F54FAA2888BCCD78C0B29D9A3D5A83B0DBA092_il2cpp_TypeInfo_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_6;
		L_6 = Handles_get_edgeMaterial_m0550C04A6472DE1F0B4306370E4E7D9994312B89(/*hidden argument*/NULL);
		bool L_7;
		L_7 = Material_SetPass_mC888245491A21488CFF2FD64CA45E8404CB9FF9C(L_6, 0, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0049;
		}
	}
	{
		// return;
		return;
	}

IL_0049:
	{
		// GL.PushMatrix();
		GL_PushMatrix_mF1F26015AB75226AB048A7ABF700871C5A0AE0B3(/*hidden argument*/NULL);
		// GL.Begin(GL.LINES);
		GL_Begin_mD719B21F92DCF2D8F567C008AD21CA73CA762622(1, /*hidden argument*/NULL);
		// GL.Vertex(a);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		GL_Vertex_mDC7977D6400538B576D96E239BFECF39AE41022E(L_8, /*hidden argument*/NULL);
		// GL.Vertex(b);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = ___b1;
		GL_Vertex_mDC7977D6400538B576D96E239BFECF39AE41022E(L_9, /*hidden argument*/NULL);
		// GL.End();
		GL_End_m4A164117D2D3CD3620938F2D29EFBA2D5CB900B7(/*hidden argument*/NULL);
		// GL.PopMatrix();
		GL_PopMatrix_m06F4C60CA3B91C7F8B7EFF83D21563C9613B3738(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ProBuilder.Examples.Handles::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Handles__ctor_m9CF2E6E7EBD0A4F025601E4CCC5C9AA19B96C5FD (Handles_tE2F54FAA2888BCCD78C0B29D9A3D5A83B0DBA092 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ProBuilder.Examples.Handles::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Handles__cctor_m3C6FD7D3385D2AB867074507137867BD027A9B83 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceU5BU5D_t0D522232374325AD8B00CA039B016D822C4F8107_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Handles_tE2F54FAA2888BCCD78C0B29D9A3D5A83B0DBA092_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static Face[] s_FaceArray = new Face[1];
		FaceU5BU5D_t0D522232374325AD8B00CA039B016D822C4F8107* L_0 = (FaceU5BU5D_t0D522232374325AD8B00CA039B016D822C4F8107*)(FaceU5BU5D_t0D522232374325AD8B00CA039B016D822C4F8107*)SZArrayNew(FaceU5BU5D_t0D522232374325AD8B00CA039B016D822C4F8107_il2cpp_TypeInfo_var, (uint32_t)1);
		((Handles_tE2F54FAA2888BCCD78C0B29D9A3D5A83B0DBA092_StaticFields*)il2cpp_codegen_static_fields_for(Handles_tE2F54FAA2888BCCD78C0B29D9A3D5A83B0DBA092_il2cpp_TypeInfo_var))->set_s_FaceArray_13(L_0);
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
// System.Void ProBuilder.Examples.HighlightNearestFace::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighlightNearestFace_Start_m418ABBF00BCAB18876B32B7D109560A8137A4D7B (HighlightNearestFace_tB488288D0A42BD683ED46ECCE07C7461CFC495C2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShapeGenerator_t0BA155A73DA60EDC5D74592F200B7F085ABCC560_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target = ShapeGenerator.GeneratePlane(PivotLocation.Center, travel, travel, 25, 25, Axis.Up);
		float L_0 = __this->get_travel_4();
		float L_1 = __this->get_travel_4();
		IL2CPP_RUNTIME_CLASS_INIT(ShapeGenerator_t0BA155A73DA60EDC5D74592F200B7F085ABCC560_il2cpp_TypeInfo_var);
		ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 * L_2;
		L_2 = ShapeGenerator_GeneratePlane_m154D52FF7A164CCAF450BDA5F24F11D03B85C966(0, L_0, L_1, ((int32_t)25), ((int32_t)25), 2, /*hidden argument*/NULL);
		__this->set_target_6(L_2);
		// target.transform.position = new Vector3(travel * .5f, 0f, travel * .5f);
		ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 * L_3 = __this->get_target_6();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_3, /*hidden argument*/NULL);
		float L_5 = __this->get_travel_4();
		float L_6 = __this->get_travel_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_7), ((float)il2cpp_codegen_multiply((float)L_5, (float)(0.5f))), (0.0f), ((float)il2cpp_codegen_multiply((float)L_6, (float)(0.5f))), /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_4, L_7, /*hidden argument*/NULL);
		// target.ToMesh();
		ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 * L_8 = __this->get_target_6();
		ProBuilderMesh_ToMesh_mCDC36F2ABB14D6DF7FAF409DF2B03D2C985EA147(L_8, 0, /*hidden argument*/NULL);
		// target.Refresh();
		ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 * L_9 = __this->get_target_6();
		ProBuilderMesh_Refresh_m2431D34DC68B7C0452BC415FB200136862B63930(L_9, ((int32_t)31), /*hidden argument*/NULL);
		// Camera cam = Camera.main;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_10;
		L_10 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		// cam.transform.position = new Vector3(25f, 40f, 0f);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_11 = L_10;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_11, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_13), (25.0f), (40.0f), (0.0f), /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_12, L_13, /*hidden argument*/NULL);
		// cam.transform.localRotation = Quaternion.Euler(new Vector3(65f, 0f, 0f));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_11, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_15), (65.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_16;
		L_16 = Quaternion_Euler_m887ABE4F4DD563351E9874D63922C2F53969BBAB(L_15, /*hidden argument*/NULL);
		Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C(L_14, L_16, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ProBuilder.Examples.HighlightNearestFace::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighlightNearestFace_Update_m5E4D6682F779C15D28569061BBF61D8146DD0162 (HighlightNearestFace_tB488288D0A42BD683ED46ECCE07C7461CFC495C2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_tC20401E166188A9900D873AAB18A1335E698E7D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t8E7BAAC4AF41A99D9455B4D6CB6EF27DE08A7BC5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA426F185600BA938CCABD7D3B9D606EB73C4388C);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	int32_t V_5 = 0;
	float V_6 = 0.0f;
	{
		// float time = Time.time * speed;
		float L_0;
		L_0 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_1 = __this->get_speed_5();
		V_0 = ((float)il2cpp_codegen_multiply((float)L_0, (float)L_1));
		// Vector3 position = new Vector3(
		//     Mathf.PerlinNoise(time, time) * travel,
		//     2,
		//     Mathf.PerlinNoise(time + 1f, time + 1f) * travel
		// );
		float L_2 = V_0;
		float L_3 = V_0;
		float L_4;
		L_4 = Mathf_PerlinNoise_mBCF172821FEB8FAD7E7CF7F7982018846E702519(L_2, L_3, /*hidden argument*/NULL);
		float L_5 = __this->get_travel_4();
		float L_6 = V_0;
		float L_7 = V_0;
		float L_8;
		L_8 = Mathf_PerlinNoise_mBCF172821FEB8FAD7E7CF7F7982018846E702519(((float)il2cpp_codegen_add((float)L_6, (float)(1.0f))), ((float)il2cpp_codegen_add((float)L_7, (float)(1.0f))), /*hidden argument*/NULL);
		float L_9 = __this->get_travel_4();
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_1), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), (2.0f), ((float)il2cpp_codegen_multiply((float)L_8, (float)L_9)), /*hidden argument*/NULL);
		// transform.position = position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = V_1;
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_10, L_11, /*hidden argument*/NULL);
		// if (target == null)
		ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 * L_12 = __this->get_target_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_12, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0066;
		}
	}
	{
		// Debug.LogWarning("Missing the ProBuilder Mesh target!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteralA426F185600BA938CCABD7D3B9D606EB73C4388C, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0066:
	{
		// Vector3 pbRelativePosition = target.transform.InverseTransformPoint(transform.position);
		ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 * L_14 = __this->get_target_6();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_14, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_16, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Transform_InverseTransformPoint_m476ABC8F3F14824D7D82FE2C54CEE5A151A669B8(L_15, L_17, /*hidden argument*/NULL);
		V_2 = L_18;
		// if (nearest != null)
		Face_t670F9C6E42E8D3EEA7AD53AD268426DF37B3AA0B * L_19 = __this->get_nearest_7();
		if (!L_19)
		{
			goto IL_00a0;
		}
	}
	{
		// target.SetFaceColor(nearest, Color.white);
		ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 * L_20 = __this->get_target_6();
		Face_t670F9C6E42E8D3EEA7AD53AD268426DF37B3AA0B * L_21 = __this->get_nearest_7();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_22;
		L_22 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
		ProBuilderMesh_SetFaceColor_mA35654ECAA040E1847E8DFAB1CED171E2E198093(L_20, L_21, L_22, /*hidden argument*/NULL);
	}

IL_00a0:
	{
		// int faceCount = target.faces.Count;
		ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 * L_23 = __this->get_target_6();
		RuntimeObject* L_24;
		L_24 = ProBuilderMesh_get_faces_m184668B34C00C8CE5BA7F0E6299FB002F7B1D70A(L_23, /*hidden argument*/NULL);
		int32_t L_25;
		L_25 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.ProBuilder.Face>::get_Count() */, ICollection_1_tC20401E166188A9900D873AAB18A1335E698E7D4_il2cpp_TypeInfo_var, L_24);
		V_3 = L_25;
		// float smallestDistance = Mathf.Infinity;
		V_4 = (std::numeric_limits<float>::infinity());
		// nearest = target.faces[0];
		ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 * L_26 = __this->get_target_6();
		RuntimeObject* L_27;
		L_27 = ProBuilderMesh_get_faces_m184668B34C00C8CE5BA7F0E6299FB002F7B1D70A(L_26, /*hidden argument*/NULL);
		Face_t670F9C6E42E8D3EEA7AD53AD268426DF37B3AA0B * L_28;
		L_28 = InterfaceFuncInvoker1< Face_t670F9C6E42E8D3EEA7AD53AD268426DF37B3AA0B *, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Face>::get_Item(System.Int32) */, IList_1_t8E7BAAC4AF41A99D9455B4D6CB6EF27DE08A7BC5_il2cpp_TypeInfo_var, L_27, 0);
		__this->set_nearest_7(L_28);
		// for (int i = 0; i < faceCount; i++)
		V_5 = 0;
		goto IL_0122;
	}

IL_00d4:
	{
		// float distance = Vector3.Distance(pbRelativePosition, FaceCenter(target, target.faces[i]));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29 = V_2;
		ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 * L_30 = __this->get_target_6();
		ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 * L_31 = __this->get_target_6();
		RuntimeObject* L_32;
		L_32 = ProBuilderMesh_get_faces_m184668B34C00C8CE5BA7F0E6299FB002F7B1D70A(L_31, /*hidden argument*/NULL);
		int32_t L_33 = V_5;
		Face_t670F9C6E42E8D3EEA7AD53AD268426DF37B3AA0B * L_34;
		L_34 = InterfaceFuncInvoker1< Face_t670F9C6E42E8D3EEA7AD53AD268426DF37B3AA0B *, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Face>::get_Item(System.Int32) */, IList_1_t8E7BAAC4AF41A99D9455B4D6CB6EF27DE08A7BC5_il2cpp_TypeInfo_var, L_32, L_33);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35;
		L_35 = HighlightNearestFace_FaceCenter_m7E6509214278D1E94A48F75684D5627F096BE7C9(__this, L_30, L_34, /*hidden argument*/NULL);
		float L_36;
		L_36 = Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677(L_29, L_35, /*hidden argument*/NULL);
		V_6 = L_36;
		// if (distance < smallestDistance)
		float L_37 = V_6;
		float L_38 = V_4;
		if ((!(((float)L_37) < ((float)L_38))))
		{
			goto IL_011c;
		}
	}
	{
		// smallestDistance = distance;
		float L_39 = V_6;
		V_4 = L_39;
		// nearest = target.faces[i];
		ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 * L_40 = __this->get_target_6();
		RuntimeObject* L_41;
		L_41 = ProBuilderMesh_get_faces_m184668B34C00C8CE5BA7F0E6299FB002F7B1D70A(L_40, /*hidden argument*/NULL);
		int32_t L_42 = V_5;
		Face_t670F9C6E42E8D3EEA7AD53AD268426DF37B3AA0B * L_43;
		L_43 = InterfaceFuncInvoker1< Face_t670F9C6E42E8D3EEA7AD53AD268426DF37B3AA0B *, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Face>::get_Item(System.Int32) */, IList_1_t8E7BAAC4AF41A99D9455B4D6CB6EF27DE08A7BC5_il2cpp_TypeInfo_var, L_41, L_42);
		__this->set_nearest_7(L_43);
	}

IL_011c:
	{
		// for (int i = 0; i < faceCount; i++)
		int32_t L_44 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)1));
	}

IL_0122:
	{
		// for (int i = 0; i < faceCount; i++)
		int32_t L_45 = V_5;
		int32_t L_46 = V_3;
		if ((((int32_t)L_45) < ((int32_t)L_46)))
		{
			goto IL_00d4;
		}
	}
	{
		// target.SetFaceColor(nearest, Color.blue);
		ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 * L_47 = __this->get_target_6();
		Face_t670F9C6E42E8D3EEA7AD53AD268426DF37B3AA0B * L_48 = __this->get_nearest_7();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_49;
		L_49 = Color_get_blue_m6D62D515CA10A6E760848E1BFB997E27B90BD07B(/*hidden argument*/NULL);
		ProBuilderMesh_SetFaceColor_mA35654ECAA040E1847E8DFAB1CED171E2E198093(L_47, L_48, L_49, /*hidden argument*/NULL);
		// target.Refresh(RefreshMask.Colors);
		ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 * L_50 = __this->get_target_6();
		ProBuilderMesh_Refresh_m2431D34DC68B7C0452BC415FB200136862B63930(L_50, 2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.Vector3 ProBuilder.Examples.HighlightNearestFace::FaceCenter(UnityEngine.ProBuilder.ProBuilderMesh,UnityEngine.ProBuilder.Face)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  HighlightNearestFace_FaceCenter_m7E6509214278D1E94A48F75684D5627F096BE7C9 (HighlightNearestFace_tB488288D0A42BD683ED46ECCE07C7461CFC495C2 * __this, ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 * ___pb0, Face_t670F9C6E42E8D3EEA7AD53AD268426DF37B3AA0B * ___face1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t72AB4B40AF5290B386215B0BFADC8919D394DCAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t8B00F815D77E0AC6983C059BC09DBC979F8E86E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyCollection_1_GetEnumerator_mA48E3627DA12B20C93EE74CBCB4E03089D732F65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyCollection_1_get_Count_m4D45E9941D00D5920506B0B878DD4A467B0BA7BD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	RuntimeObject* V_3 = NULL;
	int32_t V_4 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// var vertices = pb.positions;
		ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 * L_0 = ___pb0;
		RuntimeObject* L_1;
		L_1 = ProBuilderMesh_get_positions_mDDB55F170B673C3CEC221A27E5045C012C43E33D(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// Vector3 average = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		V_1 = L_2;
		// foreach (int index in face.distinctIndexes)
		Face_t670F9C6E42E8D3EEA7AD53AD268426DF37B3AA0B * L_3 = ___face1;
		ReadOnlyCollection_1_t3E37961FF3644E8E5BC1468444123741B9E47EFF * L_4;
		L_4 = Face_get_distinctIndexes_m0A3B806CECC0887948DBBEED9E28DFA46D123B8F(L_3, /*hidden argument*/NULL);
		RuntimeObject* L_5;
		L_5 = ReadOnlyCollection_1_GetEnumerator_mA48E3627DA12B20C93EE74CBCB4E03089D732F65(L_4, /*hidden argument*/ReadOnlyCollection_1_GetEnumerator_mA48E3627DA12B20C93EE74CBCB4E03089D732F65_RuntimeMethod_var);
		V_3 = L_5;
	}

IL_0019:
	try
	{ // begin try (depth: 1)
		{
			goto IL_006b;
		}

IL_001b:
		{
			// foreach (int index in face.distinctIndexes)
			RuntimeObject* L_6 = V_3;
			int32_t L_7;
			L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Int32>::get_Current() */, IEnumerator_1_t72AB4B40AF5290B386215B0BFADC8919D394DCAB_il2cpp_TypeInfo_var, L_6);
			V_4 = L_7;
			// average.x += vertices[index].x;
			float* L_8 = (&V_1)->get_address_of_x_2();
			float* L_9 = L_8;
			float L_10 = *((float*)L_9);
			RuntimeObject* L_11 = V_0;
			int32_t L_12 = V_4;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
			L_13 = InterfaceFuncInvoker1< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<UnityEngine.Vector3>::get_Item(System.Int32) */, IList_1_t8B00F815D77E0AC6983C059BC09DBC979F8E86E0_il2cpp_TypeInfo_var, L_11, L_12);
			float L_14 = L_13.get_x_2();
			*((float*)L_9) = (float)((float)il2cpp_codegen_add((float)L_10, (float)L_14));
			// average.y += vertices[index].y;
			float* L_15 = (&V_1)->get_address_of_y_3();
			float* L_16 = L_15;
			float L_17 = *((float*)L_16);
			RuntimeObject* L_18 = V_0;
			int32_t L_19 = V_4;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
			L_20 = InterfaceFuncInvoker1< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<UnityEngine.Vector3>::get_Item(System.Int32) */, IList_1_t8B00F815D77E0AC6983C059BC09DBC979F8E86E0_il2cpp_TypeInfo_var, L_18, L_19);
			float L_21 = L_20.get_y_3();
			*((float*)L_16) = (float)((float)il2cpp_codegen_add((float)L_17, (float)L_21));
			// average.z += vertices[index].z;
			float* L_22 = (&V_1)->get_address_of_z_4();
			float* L_23 = L_22;
			float L_24 = *((float*)L_23);
			RuntimeObject* L_25 = V_0;
			int32_t L_26 = V_4;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
			L_27 = InterfaceFuncInvoker1< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<UnityEngine.Vector3>::get_Item(System.Int32) */, IList_1_t8B00F815D77E0AC6983C059BC09DBC979F8E86E0_il2cpp_TypeInfo_var, L_25, L_26);
			float L_28 = L_27.get_z_4();
			*((float*)L_23) = (float)((float)il2cpp_codegen_add((float)L_24, (float)L_28));
		}

IL_006b:
		{
			// foreach (int index in face.distinctIndexes)
			RuntimeObject* L_29 = V_3;
			bool L_30;
			L_30 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_29);
			if (L_30)
			{
				goto IL_001b;
			}
		}

IL_0073:
		{
			IL2CPP_LEAVE(0x7F, FINALLY_0075);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0075;
	}

FINALLY_0075:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_31 = V_3;
			if (!L_31)
			{
				goto IL_007e;
			}
		}

IL_0078:
		{
			RuntimeObject* L_32 = V_3;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_32);
		}

IL_007e:
		{
			IL2CPP_END_FINALLY(117)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(117)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x7F, IL_007f)
	}

IL_007f:
	{
		// float len = (float) face.distinctIndexes.Count;
		Face_t670F9C6E42E8D3EEA7AD53AD268426DF37B3AA0B * L_33 = ___face1;
		ReadOnlyCollection_1_t3E37961FF3644E8E5BC1468444123741B9E47EFF * L_34;
		L_34 = Face_get_distinctIndexes_m0A3B806CECC0887948DBBEED9E28DFA46D123B8F(L_33, /*hidden argument*/NULL);
		int32_t L_35;
		L_35 = ReadOnlyCollection_1_get_Count_m4D45E9941D00D5920506B0B878DD4A467B0BA7BD(L_34, /*hidden argument*/ReadOnlyCollection_1_get_Count_m4D45E9941D00D5920506B0B878DD4A467B0BA7BD_RuntimeMethod_var);
		V_2 = ((float)((float)L_35));
		// average.x /= len;
		float* L_36 = (&V_1)->get_address_of_x_2();
		float* L_37 = L_36;
		float L_38 = *((float*)L_37);
		float L_39 = V_2;
		*((float*)L_37) = (float)((float)((float)L_38/(float)L_39));
		// average.y /= len;
		float* L_40 = (&V_1)->get_address_of_y_3();
		float* L_41 = L_40;
		float L_42 = *((float*)L_41);
		float L_43 = V_2;
		*((float*)L_41) = (float)((float)((float)L_42/(float)L_43));
		// average.z /= len;
		float* L_44 = (&V_1)->get_address_of_z_4();
		float* L_45 = L_44;
		float L_46 = *((float*)L_45);
		float L_47 = V_2;
		*((float*)L_45) = (float)((float)((float)L_46/(float)L_47));
		// return average;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_48 = V_1;
		return L_48;
	}
}
// System.Void ProBuilder.Examples.HighlightNearestFace::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighlightNearestFace__ctor_m0C1F5E3F3B11B727382263E7FA8E0B0DA55EFD37 (HighlightNearestFace_tB488288D0A42BD683ED46ECCE07C7461CFC495C2 * __this, const RuntimeMethod* method)
{
	{
		// public float travel = 50f;
		__this->set_travel_4((50.0f));
		// public float speed = .2f;
		__this->set_speed_5((0.200000003f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void ProBuilder.Examples.MakePrimitiveEditable::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MakePrimitiveEditable_Start_m100DE36A583A1718F9889344E3DB776F4E02BE6E (MakePrimitiveEditable_tE539C190364AB04850A378BE9EF6B86A54F580F6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m4E31C5D3D0490AEE405B54BE9F61802EA425B9DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06_m0C759891C92E06F8E263C0A723D6CC2F08DA3344_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshImporter_tE19E710EB2381D78327D684DE65D04C7C7086ED2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var importer = new MeshImporter(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		MeshImporter_tE19E710EB2381D78327D684DE65D04C7C7086ED2 * L_1 = (MeshImporter_tE19E710EB2381D78327D684DE65D04C7C7086ED2 *)il2cpp_codegen_object_new(MeshImporter_tE19E710EB2381D78327D684DE65D04C7C7086ED2_il2cpp_TypeInfo_var);
		MeshImporter__ctor_m9DC51E6586E21492CD9ED6BA7B89584C706BC1B0(L_1, L_0, /*hidden argument*/NULL);
		// importer.Import();
		MeshImporter_Import_m651DD1797F75DE88DB8E883FBD4E9A3857454608(L_1, (MeshImportSettings_t6F08DF59075B8BE68AFA465FC29E9539BF6FD901 *)NULL, /*hidden argument*/NULL);
		// var filter = GetComponent<MeshFilter>();
		MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * L_2;
		L_2 = Component_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m4E31C5D3D0490AEE405B54BE9F61802EA425B9DC(__this, /*hidden argument*/Component_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m4E31C5D3D0490AEE405B54BE9F61802EA425B9DC_RuntimeMethod_var);
		// filter.sharedMesh = new Mesh();
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_3 = (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)il2cpp_codegen_object_new(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_il2cpp_TypeInfo_var);
		Mesh__ctor_mA3D8570373462201AD7B8C9586A7F9412E49C2F6(L_3, /*hidden argument*/NULL);
		MeshFilter_set_sharedMesh_mC96D5F9AE4BC1D186221F568A4C3CE23572EC958(L_2, L_3, /*hidden argument*/NULL);
		// var mesh = gameObject.GetComponent<ProBuilderMesh>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 * L_5;
		L_5 = GameObject_GetComponent_TisProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06_m0C759891C92E06F8E263C0A723D6CC2F08DA3344(L_4, /*hidden argument*/GameObject_GetComponent_TisProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06_m0C759891C92E06F8E263C0A723D6CC2F08DA3344_RuntimeMethod_var);
		// mesh.Extrude(mesh.faces, ExtrudeMethod.IndividualFaces, .25f);
		ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 * L_6 = L_5;
		ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 * L_7 = L_6;
		RuntimeObject* L_8;
		L_8 = ProBuilderMesh_get_faces_m184668B34C00C8CE5BA7F0E6299FB002F7B1D70A(L_7, /*hidden argument*/NULL);
		FaceU5BU5D_t0D522232374325AD8B00CA039B016D822C4F8107* L_9;
		L_9 = ExtrudeElements_Extrude_m4744CA085129BA2B820AAA3A234F0812097FABB1(L_7, L_8, 0, (0.25f), /*hidden argument*/NULL);
		// mesh.ToMesh();
		ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 * L_10 = L_6;
		ProBuilderMesh_ToMesh_mCDC36F2ABB14D6DF7FAF409DF2B03D2C985EA147(L_10, 0, /*hidden argument*/NULL);
		// mesh.Refresh();
		ProBuilderMesh_Refresh_m2431D34DC68B7C0452BC415FB200136862B63930(L_10, ((int32_t)31), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ProBuilder.Examples.MakePrimitiveEditable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MakePrimitiveEditable__ctor_mD9D2496B5508A841E0DD753D27D11CEDE1635C5C (MakePrimitiveEditable_tE539C190364AB04850A378BE9EF6B86A54F580F6 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// Conversion methods for marshalling of: ProBuilder.Examples.MeshAndFace
IL2CPP_EXTERN_C void MeshAndFace_t9D166BDF89B6496DF212C761F8EE7CFD5C71C7D5_marshal_pinvoke(const MeshAndFace_t9D166BDF89B6496DF212C761F8EE7CFD5C71C7D5& unmarshaled, MeshAndFace_t9D166BDF89B6496DF212C761F8EE7CFD5C71C7D5_marshaled_pinvoke& marshaled)
{
	Exception_t* ___mesh_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'mesh' of type 'MeshAndFace': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mesh_0Exception, NULL);
}
IL2CPP_EXTERN_C void MeshAndFace_t9D166BDF89B6496DF212C761F8EE7CFD5C71C7D5_marshal_pinvoke_back(const MeshAndFace_t9D166BDF89B6496DF212C761F8EE7CFD5C71C7D5_marshaled_pinvoke& marshaled, MeshAndFace_t9D166BDF89B6496DF212C761F8EE7CFD5C71C7D5& unmarshaled)
{
	Exception_t* ___mesh_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'mesh' of type 'MeshAndFace': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mesh_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: ProBuilder.Examples.MeshAndFace
IL2CPP_EXTERN_C void MeshAndFace_t9D166BDF89B6496DF212C761F8EE7CFD5C71C7D5_marshal_pinvoke_cleanup(MeshAndFace_t9D166BDF89B6496DF212C761F8EE7CFD5C71C7D5_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: ProBuilder.Examples.MeshAndFace
IL2CPP_EXTERN_C void MeshAndFace_t9D166BDF89B6496DF212C761F8EE7CFD5C71C7D5_marshal_com(const MeshAndFace_t9D166BDF89B6496DF212C761F8EE7CFD5C71C7D5& unmarshaled, MeshAndFace_t9D166BDF89B6496DF212C761F8EE7CFD5C71C7D5_marshaled_com& marshaled)
{
	Exception_t* ___mesh_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'mesh' of type 'MeshAndFace': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mesh_0Exception, NULL);
}
IL2CPP_EXTERN_C void MeshAndFace_t9D166BDF89B6496DF212C761F8EE7CFD5C71C7D5_marshal_com_back(const MeshAndFace_t9D166BDF89B6496DF212C761F8EE7CFD5C71C7D5_marshaled_com& marshaled, MeshAndFace_t9D166BDF89B6496DF212C761F8EE7CFD5C71C7D5& unmarshaled)
{
	Exception_t* ___mesh_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'mesh' of type 'MeshAndFace': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mesh_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: ProBuilder.Examples.MeshAndFace
IL2CPP_EXTERN_C void MeshAndFace_t9D166BDF89B6496DF212C761F8EE7CFD5C71C7D5_marshal_com_cleanup(MeshAndFace_t9D166BDF89B6496DF212C761F8EE7CFD5C71C7D5_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ProBuilder.Examples.MeshEditor::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshEditor_Awake_mD4A8987F024F375ED10420F06AE1EFB7BDFA2C99 (MeshEditor_t439D937C0610CF3351D3C29C662032654E023040 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCameraMotion_tB4108D421FA6012FCA161EBD7AF7DA50B4A89F89_m253DD0E1A675EEA2045ED02E121CD19116BE1115_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshEditor_DrawSelection_mA89E26709866ABA5AB09FFE7CDAC2C928685DE2B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_SceneCamera = Camera.main;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0;
		L_0 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		__this->set_m_SceneCamera_4(L_0);
		// m_CameraMotion = m_SceneCamera.GetComponent<CameraMotion>();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_1 = __this->get_m_SceneCamera_4();
		CameraMotion_tB4108D421FA6012FCA161EBD7AF7DA50B4A89F89 * L_2;
		L_2 = Component_GetComponent_TisCameraMotion_tB4108D421FA6012FCA161EBD7AF7DA50B4A89F89_m253DD0E1A675EEA2045ED02E121CD19116BE1115(L_1, /*hidden argument*/Component_GetComponent_TisCameraMotion_tB4108D421FA6012FCA161EBD7AF7DA50B4A89F89_m253DD0E1A675EEA2045ED02E121CD19116BE1115_RuntimeMethod_var);
		__this->set_m_CameraMotion_5(L_2);
		// Camera.onPostRender += DrawSelection;
		CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * L_3 = ((Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields*)il2cpp_codegen_static_fields_for(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_il2cpp_TypeInfo_var))->get_onPostRender_6();
		CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * L_4 = (CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D *)il2cpp_codegen_object_new(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D_il2cpp_TypeInfo_var);
		CameraCallback__ctor_m6E26A220911F56F3E8936DDD217ED76A15B1915E(L_4, __this, (intptr_t)((intptr_t)MeshEditor_DrawSelection_mA89E26709866ABA5AB09FFE7CDAC2C928685DE2B_RuntimeMethod_var), /*hidden argument*/NULL);
		Delegate_t * L_5;
		L_5 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_3, L_4, /*hidden argument*/NULL);
		((Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields*)il2cpp_codegen_static_fields_for(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_il2cpp_TypeInfo_var))->set_onPostRender_6(((CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D *)CastclassSealed((RuntimeObject*)L_5, CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void ProBuilder.Examples.MeshEditor::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshEditor_Start_mE3BC5FEB4E708365D3762F5B2B78406EE8496B38 (MeshEditor_t439D937C0610CF3351D3C29C662032654E023040 * __this, const RuntimeMethod* method)
{
	{
		// m_CameraMotion.Focus(Vector3.zero, 10f);
		CameraMotion_tB4108D421FA6012FCA161EBD7AF7DA50B4A89F89 * L_0 = __this->get_m_CameraMotion_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		CameraMotion_Focus_m4DF172A6CDCF0FE1E504B93FCBE666003B903E0E(L_0, L_1, (10.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ProBuilder.Examples.MeshEditor::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshEditor_Update_m0F24B0A26EC865081C32A8518C33F11CE18509ED (MeshEditor_t439D937C0610CF3351D3C29C662032654E023040 * __this, const RuntimeMethod* method)
{
	{
		// if(!m_DragState.active)
		DragState_tBA2431E802EB4BC41D740E5B0B6505805E3DC3AC * L_0 = __this->get_m_DragState_7();
		bool L_1 = L_0->get_active_0();
		if (L_1)
		{
			goto IL_0023;
		}
	}
	{
		// m_Selection = Utility.PickFace(m_SceneCamera, Input.mousePosition);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_2 = __this->get_m_SceneCamera_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		MeshAndFace_t9D166BDF89B6496DF212C761F8EE7CFD5C71C7D5  L_4;
		L_4 = Utility_PickFace_m9848445B24CF7F8D631E0A5FE8A1BFA42AF5FF3E(L_2, L_3, /*hidden argument*/NULL);
		__this->set_m_Selection_6(L_4);
	}

IL_0023:
	{
		// HandleInput();
		MeshEditor_HandleInput_mAF4169C54561F61863454B516284101D5F61B974(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ProBuilder.Examples.MeshEditor::DrawSelection(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshEditor_DrawSelection_mA89E26709866ABA5AB09FFE7CDAC2C928685DE2B (MeshEditor_t439D937C0610CF3351D3C29C662032654E023040 * __this, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___cam0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Handles_tE2F54FAA2888BCCD78C0B29D9A3D5A83B0DBA092_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (m_CameraMotion.active)
		CameraMotion_tB4108D421FA6012FCA161EBD7AF7DA50B4A89F89 * L_0 = __this->get_m_CameraMotion_5();
		bool L_1;
		L_1 = CameraMotion_get_active_mD4FE558613A8D1C82614BA43484BFCD40B4E15BF(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// Handles.Draw(m_Selection.mesh, m_Selection.face, Color.cyan);
		MeshAndFace_t9D166BDF89B6496DF212C761F8EE7CFD5C71C7D5 * L_2 = __this->get_address_of_m_Selection_6();
		ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 * L_3 = L_2->get_mesh_0();
		MeshAndFace_t9D166BDF89B6496DF212C761F8EE7CFD5C71C7D5 * L_4 = __this->get_address_of_m_Selection_6();
		Face_t670F9C6E42E8D3EEA7AD53AD268426DF37B3AA0B * L_5 = L_4->get_face_1();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_6;
		L_6 = Color_get_cyan_m0C608BC083FD98C45C1F4F15AE803D288C647686(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Handles_tE2F54FAA2888BCCD78C0B29D9A3D5A83B0DBA092_il2cpp_TypeInfo_var);
		Handles_Draw_m56E41213EE2CA14AE1376DEC7A8A2DA6DAC89A56(L_3, L_5, L_6, /*hidden argument*/NULL);
		// if (m_DragState.active)
		DragState_tBA2431E802EB4BC41D740E5B0B6505805E3DC3AC * L_7 = __this->get_m_DragState_7();
		bool L_8 = L_7->get_active_0();
		if (!L_8)
		{
			goto IL_008a;
		}
	}
	{
		// var o = m_DragState.constraint.origin;
		DragState_tBA2431E802EB4BC41D740E5B0B6505805E3DC3AC * L_9 = __this->get_m_DragState_7();
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * L_10 = L_9->get_address_of_constraint_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Ray_get_origin_m0C1B2BFF99CDF5231AC29AC031C161F55B53C1D0((Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *)L_10, /*hidden argument*/NULL);
		V_0 = L_11;
		// var d = m_DragState.constraint.direction;
		DragState_tBA2431E802EB4BC41D740E5B0B6505805E3DC3AC * L_12 = __this->get_m_DragState_7();
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * L_13 = L_12->get_address_of_constraint_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Ray_get_direction_m2B31F86F19B64474A901B28D3808011AE7A13EFC((Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *)L_13, /*hidden argument*/NULL);
		V_1 = L_14;
		// Handles.DrawLine(o - d * 100f, o + d * 1000f, Color.green);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_16, (100.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_15, L_17, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_20, (1000.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		L_22 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_19, L_21, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_23;
		L_23 = Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Handles_tE2F54FAA2888BCCD78C0B29D9A3D5A83B0DBA092_il2cpp_TypeInfo_var);
		Handles_DrawLine_m217134D01EDF8744EF892622D2245FE75A658219(L_18, L_22, L_23, 4, /*hidden argument*/NULL);
	}

IL_008a:
	{
		// }
		return;
	}
}
// System.Void ProBuilder.Examples.MeshEditor::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshEditor_LateUpdate_m9F4454C612443E3C7EB1C782567BE91207D1DC94 (MeshEditor_t439D937C0610CF3351D3C29C662032654E023040 * __this, const RuntimeMethod* method)
{
	{
		// if (!m_DragState.active)
		DragState_tBA2431E802EB4BC41D740E5B0B6505805E3DC3AC * L_0 = __this->get_m_DragState_7();
		bool L_1 = L_0->get_active_0();
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		// m_CameraMotion.DoLateUpdate();
		CameraMotion_tB4108D421FA6012FCA161EBD7AF7DA50B4A89F89 * L_2 = __this->get_m_CameraMotion_5();
		CameraMotion_DoLateUpdate_m9D9A01386BC4094E48EB580AE698D8BDDBC394AF(L_2, /*hidden argument*/NULL);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void ProBuilder.Examples.MeshEditor::HandleInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshEditor_HandleInput_mAF4169C54561F61863454B516284101D5F61B974 (MeshEditor_t439D937C0610CF3351D3C29C662032654E023040 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_CameraMotion.active)
		CameraMotion_tB4108D421FA6012FCA161EBD7AF7DA50B4A89F89 * L_0 = __this->get_m_CameraMotion_5();
		bool L_1;
		L_1 = CameraMotion_get_active_mD4FE558613A8D1C82614BA43484BFCD40B4E15BF(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// if (Input.GetMouseButtonDown(0) && m_Selection.face != null)
		bool L_2;
		L_2 = Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3(0, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		MeshAndFace_t9D166BDF89B6496DF212C761F8EE7CFD5C71C7D5 * L_3 = __this->get_address_of_m_Selection_6();
		Face_t670F9C6E42E8D3EEA7AD53AD268426DF37B3AA0B * L_4 = L_3->get_face_1();
		if (!L_4)
		{
			goto IL_002a;
		}
	}
	{
		// BeginDrag();
		MeshEditor_BeginDrag_mA31F3D4D344599BDA4664FA7AEF5454FA71F3449(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_002a:
	{
		// else if (Input.GetMouseButtonUp(0))
		bool L_5;
		L_5 = Input_GetMouseButtonUp_m2BA562F8C4FE8364EEC93970093E776371DF4022(0, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		// EndDrag();
		MeshEditor_EndDrag_m07B07BC36AF7FC895E22C07561123A4CA15CC4E0(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0039:
	{
		// else if (m_DragState.active && Input.GetMouseButton(0))
		DragState_tBA2431E802EB4BC41D740E5B0B6505805E3DC3AC * L_6 = __this->get_m_DragState_7();
		bool L_7 = L_6->get_active_0();
		if (!L_7)
		{
			goto IL_0055;
		}
	}
	{
		bool L_8;
		L_8 = Input_GetMouseButton_m27BF2DDBF38A38787B83A13D3E6F0F88F7C834C1(0, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0055;
		}
	}
	{
		// UpdateDrag();
		MeshEditor_UpdateDrag_m85A11336FBF6832E8367B103B5D9DB8CFE68C58C(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0055:
	{
		// else if (Input.GetKeyUp(KeyCode.F))
		bool L_9;
		L_9 = Input_GetKeyUp_mDE9D56FE11715566D4D54FD96F8E1EF9734D225F(((int32_t)102), /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_00a2;
		}
	}
	{
		// if (m_Selection.mesh != null)
		MeshAndFace_t9D166BDF89B6496DF212C761F8EE7CFD5C71C7D5 * L_10 = __this->get_address_of_m_Selection_6();
		ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 * L_11 = L_10->get_mesh_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_11, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_008d;
		}
	}
	{
		// m_CameraMotion.Focus(m_Selection.mesh.gameObject);
		CameraMotion_tB4108D421FA6012FCA161EBD7AF7DA50B4A89F89 * L_13 = __this->get_m_CameraMotion_5();
		MeshAndFace_t9D166BDF89B6496DF212C761F8EE7CFD5C71C7D5 * L_14 = __this->get_address_of_m_Selection_6();
		ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 * L_15 = L_14->get_mesh_0();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16;
		L_16 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_15, /*hidden argument*/NULL);
		CameraMotion_Focus_m74477BF982B39FF1FFB5215E24F8CA41B76025F4(L_13, L_16, /*hidden argument*/NULL);
		return;
	}

IL_008d:
	{
		// m_CameraMotion.Focus(Vector3.zero, 10f);
		CameraMotion_tB4108D421FA6012FCA161EBD7AF7DA50B4A89F89 * L_17 = __this->get_m_CameraMotion_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		CameraMotion_Focus_m4DF172A6CDCF0FE1E504B93FCBE666003B903E0E(L_17, L_18, (10.0f), /*hidden argument*/NULL);
	}

IL_00a2:
	{
		// }
		return;
	}
}
// System.Void ProBuilder.Examples.MeshEditor::BeginDrag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshEditor_BeginDrag_mA31F3D4D344599BDA4664FA7AEF5454FA71F3449 (MeshEditor_t439D937C0610CF3351D3C29C662032654E023040 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshState_tF8D82249D94398E31F98DDD3FF745D3B916D282A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (m_DragState.active || m_Selection.mesh == null || m_Selection.face == null)
		DragState_tBA2431E802EB4BC41D740E5B0B6505805E3DC3AC * L_0 = __this->get_m_DragState_7();
		bool L_1 = L_0->get_active_0();
		if (L_1)
		{
			goto IL_002d;
		}
	}
	{
		MeshAndFace_t9D166BDF89B6496DF212C761F8EE7CFD5C71C7D5 * L_2 = __this->get_address_of_m_Selection_6();
		ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 * L_3 = L_2->get_mesh_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_002d;
		}
	}
	{
		MeshAndFace_t9D166BDF89B6496DF212C761F8EE7CFD5C71C7D5 * L_5 = __this->get_address_of_m_Selection_6();
		Face_t670F9C6E42E8D3EEA7AD53AD268426DF37B3AA0B * L_6 = L_5->get_face_1();
		if (L_6)
		{
			goto IL_002e;
		}
	}

IL_002d:
	{
		// return;
		return;
	}

IL_002e:
	{
		// m_DragState.active = true;
		DragState_tBA2431E802EB4BC41D740E5B0B6505805E3DC3AC * L_7 = __this->get_m_DragState_7();
		L_7->set_active_0((bool)1);
		// var trs = m_Selection.mesh.transform;
		MeshAndFace_t9D166BDF89B6496DF212C761F8EE7CFD5C71C7D5 * L_8 = __this->get_address_of_m_Selection_6();
		ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 * L_9 = L_8->get_mesh_0();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_9, /*hidden argument*/NULL);
		// var origin = trs.TransformPoint(PMath.Average(m_Selection.mesh.positions, m_Selection.face.indexes));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11 = L_10;
		MeshAndFace_t9D166BDF89B6496DF212C761F8EE7CFD5C71C7D5 * L_12 = __this->get_address_of_m_Selection_6();
		ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 * L_13 = L_12->get_mesh_0();
		RuntimeObject* L_14;
		L_14 = ProBuilderMesh_get_positions_mDDB55F170B673C3CEC221A27E5045C012C43E33D(L_13, /*hidden argument*/NULL);
		MeshAndFace_t9D166BDF89B6496DF212C761F8EE7CFD5C71C7D5 * L_15 = __this->get_address_of_m_Selection_6();
		Face_t670F9C6E42E8D3EEA7AD53AD268426DF37B3AA0B * L_16 = L_15->get_face_1();
		ReadOnlyCollection_1_t3E37961FF3644E8E5BC1468444123741B9E47EFF * L_17;
		L_17 = Face_get_indexes_mCCC6D1D84EC5A4E4243D15693A2FE9393F21D74D(L_16, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Math_Average_m0C70CF51BCCF881520CBCA032F578C68BD3EAF9C(L_14, L_17, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Transform_TransformPoint_m68AF95765A9279192E601208A9C5170027A5F0D2(L_11, L_18, /*hidden argument*/NULL);
		V_0 = L_19;
		// var direction = trs.TransformDirection(PMath.Normal(m_Selection.mesh, m_Selection.face));
		MeshAndFace_t9D166BDF89B6496DF212C761F8EE7CFD5C71C7D5 * L_20 = __this->get_address_of_m_Selection_6();
		ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 * L_21 = L_20->get_mesh_0();
		MeshAndFace_t9D166BDF89B6496DF212C761F8EE7CFD5C71C7D5 * L_22 = __this->get_address_of_m_Selection_6();
		Face_t670F9C6E42E8D3EEA7AD53AD268426DF37B3AA0B * L_23 = L_22->get_face_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		L_24 = Math_Normal_m73A7F540E6CC650371BAD4382A1F8B1C686EF38C(L_21, L_23, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		L_25 = Transform_TransformDirection_m6B5E3F0A7C6323159DEC6D9BC035FB53ADD96E91(L_11, L_24, /*hidden argument*/NULL);
		V_1 = L_25;
		// m_DragState.constraint = new Ray(origin, direction);
		DragState_tBA2431E802EB4BC41D740E5B0B6505805E3DC3AC * L_26 = __this->get_m_DragState_7();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28 = V_1;
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_29;
		memset((&L_29), 0, sizeof(L_29));
		Ray__ctor_m75B1F651FF47EE6B887105101B7DA61CBF41F83C((&L_29), L_27, L_28, /*hidden argument*/NULL);
		L_26->set_constraint_1(L_29);
		// m_DragState.meshState = new MeshState(m_Selection.mesh, m_Selection.face.distinctIndexes);
		DragState_tBA2431E802EB4BC41D740E5B0B6505805E3DC3AC * L_30 = __this->get_m_DragState_7();
		MeshAndFace_t9D166BDF89B6496DF212C761F8EE7CFD5C71C7D5 * L_31 = __this->get_address_of_m_Selection_6();
		ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 * L_32 = L_31->get_mesh_0();
		MeshAndFace_t9D166BDF89B6496DF212C761F8EE7CFD5C71C7D5 * L_33 = __this->get_address_of_m_Selection_6();
		Face_t670F9C6E42E8D3EEA7AD53AD268426DF37B3AA0B * L_34 = L_33->get_face_1();
		ReadOnlyCollection_1_t3E37961FF3644E8E5BC1468444123741B9E47EFF * L_35;
		L_35 = Face_get_distinctIndexes_m0A3B806CECC0887948DBBEED9E28DFA46D123B8F(L_34, /*hidden argument*/NULL);
		MeshState_tF8D82249D94398E31F98DDD3FF745D3B916D282A * L_36 = (MeshState_tF8D82249D94398E31F98DDD3FF745D3B916D282A *)il2cpp_codegen_object_new(MeshState_tF8D82249D94398E31F98DDD3FF745D3B916D282A_il2cpp_TypeInfo_var);
		MeshState__ctor_m9A2F5BD428843FF08F99ECA7657DFBDD8D15CCF1(L_36, L_32, L_35, /*hidden argument*/NULL);
		L_30->set_meshState_3(L_36);
		// m_DragState.offset = GetDragDistance();
		DragState_tBA2431E802EB4BC41D740E5B0B6505805E3DC3AC * L_37 = __this->get_m_DragState_7();
		float L_38;
		L_38 = MeshEditor_GetDragDistance_m25B1389F433B9B4B3F7CDF2C36FDF4C30FDE7A2E(__this, /*hidden argument*/NULL);
		L_37->set_offset_2(L_38);
		// }
		return;
	}
}
// System.Void ProBuilder.Examples.MeshEditor::EndDrag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshEditor_EndDrag_m07B07BC36AF7FC895E22C07561123A4CA15CC4E0 (MeshEditor_t439D937C0610CF3351D3C29C662032654E023040 * __this, const RuntimeMethod* method)
{
	{
		// m_DragState.active = false;
		DragState_tBA2431E802EB4BC41D740E5B0B6505805E3DC3AC * L_0 = __this->get_m_DragState_7();
		L_0->set_active_0((bool)0);
		// }
		return;
	}
}
// System.Void ProBuilder.Examples.MeshEditor::UpdateDrag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshEditor_UpdateDrag_m85A11336FBF6832E8367B103B5D9DB8CFE68C58C (MeshEditor_t439D937C0610CF3351D3C29C662032654E023040 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 * V_1 = NULL;
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * V_2 = NULL;
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* V_3 = NULL;
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* V_4 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	{
		// var distance = GetDragDistance() - m_DragState.offset;
		float L_0;
		L_0 = MeshEditor_GetDragDistance_m25B1389F433B9B4B3F7CDF2C36FDF4C30FDE7A2E(__this, /*hidden argument*/NULL);
		DragState_tBA2431E802EB4BC41D740E5B0B6505805E3DC3AC * L_1 = __this->get_m_DragState_7();
		float L_2 = L_1->get_offset_2();
		V_0 = ((float)il2cpp_codegen_subtract((float)L_0, (float)L_2));
		// var mesh = m_Selection.mesh;
		MeshAndFace_t9D166BDF89B6496DF212C761F8EE7CFD5C71C7D5 * L_3 = __this->get_address_of_m_Selection_6();
		ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 * L_4 = L_3->get_mesh_0();
		V_1 = L_4;
		// var indices = m_DragState.meshState.indices;
		DragState_tBA2431E802EB4BC41D740E5B0B6505805E3DC3AC * L_5 = __this->get_m_DragState_7();
		MeshState_tF8D82249D94398E31F98DDD3FF745D3B916D282A * L_6 = L_5->get_meshState_3();
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_7 = L_6->get_indices_3();
		V_2 = L_7;
		// var vertices = m_DragState.meshState.vertices;
		DragState_tBA2431E802EB4BC41D740E5B0B6505805E3DC3AC * L_8 = __this->get_m_DragState_7();
		MeshState_tF8D82249D94398E31F98DDD3FF745D3B916D282A * L_9 = L_8->get_meshState_3();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_10 = L_9->get_vertices_1();
		V_3 = L_10;
		// var origins = m_DragState.meshState.origins;
		DragState_tBA2431E802EB4BC41D740E5B0B6505805E3DC3AC * L_11 = __this->get_m_DragState_7();
		MeshState_tF8D82249D94398E31F98DDD3FF745D3B916D282A * L_12 = L_11->get_meshState_3();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_13 = L_12->get_origins_2();
		V_4 = L_13;
		// var direction = mesh.transform.InverseTransformDirection(m_DragState.constraint.direction);
		ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 * L_14 = V_1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_14, /*hidden argument*/NULL);
		DragState_tBA2431E802EB4BC41D740E5B0B6505805E3DC3AC * L_16 = __this->get_m_DragState_7();
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * L_17 = L_16->get_address_of_constraint_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Ray_get_direction_m2B31F86F19B64474A901B28D3808011AE7A13EFC((Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *)L_17, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Transform_InverseTransformDirection_m9EB6F7A2598FD8D6B52F0A6EBA96A3BAAF68D696(L_15, L_18, /*hidden argument*/NULL);
		V_5 = L_19;
		// for (int i = 0, c = indices.Count; i < c; i++)
		V_6 = 0;
		// for (int i = 0, c = indices.Count; i < c; i++)
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_20 = V_2;
		int32_t L_21;
		L_21 = List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_inline(L_20, /*hidden argument*/List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_RuntimeMethod_var);
		V_7 = L_21;
		goto IL_00a7;
	}

IL_007d:
	{
		// vertices[indices[i]] = origins[i] + direction * distance;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_22 = V_3;
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_23 = V_2;
		int32_t L_24 = V_6;
		int32_t L_25;
		L_25 = List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_inline(L_23, L_24, /*hidden argument*/List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_26 = V_4;
		int32_t L_27 = V_6;
		int32_t L_28 = L_27;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30 = V_5;
		float L_31 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32;
		L_32 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_30, L_31, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33;
		L_33 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_29, L_32, /*hidden argument*/NULL);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_33);
		// for (int i = 0, c = indices.Count; i < c; i++)
		int32_t L_34 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)1));
	}

IL_00a7:
	{
		// for (int i = 0, c = indices.Count; i < c; i++)
		int32_t L_35 = V_6;
		int32_t L_36 = V_7;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_007d;
		}
	}
	{
		// mesh.positions = vertices;
		ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 * L_37 = V_1;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_38 = V_3;
		ProBuilderMesh_set_positions_mE77DB28E13C62E0A85B6158B8994FC1B0A323BB4(L_37, (RuntimeObject*)(RuntimeObject*)L_38, /*hidden argument*/NULL);
		// mesh.ToMesh();
		ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 * L_39 = V_1;
		ProBuilderMesh_ToMesh_mCDC36F2ABB14D6DF7FAF409DF2B03D2C985EA147(L_39, 0, /*hidden argument*/NULL);
		// mesh.Refresh();
		ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 * L_40 = V_1;
		ProBuilderMesh_Refresh_m2431D34DC68B7C0452BC415FB200136862B63930(L_40, ((int32_t)31), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Single ProBuilder.Examples.MeshEditor::GetDragDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MeshEditor_GetDragDistance_m25B1389F433B9B4B3F7CDF2C36FDF4C30FDE7A2E (MeshEditor_t439D937C0610CF3351D3C29C662032654E023040 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	{
		// Ray constraint = m_DragState.constraint;
		DragState_tBA2431E802EB4BC41D740E5B0B6505805E3DC3AC * L_0 = __this->get_m_DragState_7();
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_1 = L_0->get_constraint_1();
		V_0 = L_1;
		// Ray mouse = m_SceneCamera.ScreenPointToRay(Input.mousePosition);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_2 = __this->get_m_SceneCamera_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_4;
		L_4 = Camera_ScreenPointToRay_mD385213935A81030EDC604A39FD64761077CFBAB(L_2, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		// Vector3 nearestPoint = PMath.GetNearestPointRayRay(constraint, mouse);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_5 = V_0;
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_6 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Math_GetNearestPointRayRay_m0C5884A857B43A72E876C9B91D150BD3B2C59A86(L_5, L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		// float sign = System.Math.Sign(Vector3.Dot(nearestPoint - constraint.origin, constraint.direction));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Ray_get_origin_m0C1B2BFF99CDF5231AC29AC031C161F55B53C1D0((Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *)(&V_0), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_8, L_9, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Ray_get_direction_m2B31F86F19B64474A901B28D3808011AE7A13EFC((Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *)(&V_0), /*hidden argument*/NULL);
		float L_12;
		L_12 = Vector3_Dot_mD19905B093915BA12852732EA27AA2DBE030D11F_inline(L_10, L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		int32_t L_13;
		L_13 = Math_Sign_m607F7014224C0DD1D1F6D7B44DAB00A2A16CCC8F(L_12, /*hidden argument*/NULL);
		V_3 = ((float)((float)L_13));
		// return Vector3.Distance(constraint.origin, nearestPoint) * sign;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Ray_get_origin_m0C1B2BFF99CDF5231AC29AC031C161F55B53C1D0((Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *)(&V_0), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15 = V_2;
		float L_16;
		L_16 = Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677(L_14, L_15, /*hidden argument*/NULL);
		float L_17 = V_3;
		return ((float)il2cpp_codegen_multiply((float)L_16, (float)L_17));
	}
}
// System.Void ProBuilder.Examples.MeshEditor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshEditor__ctor_mB0C13AC3D81D2ADE665CD5022363EA3460D13425 (MeshEditor_t439D937C0610CF3351D3C29C662032654E023040 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DragState_tBA2431E802EB4BC41D740E5B0B6505805E3DC3AC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DragState m_DragState = new DragState();
		DragState_tBA2431E802EB4BC41D740E5B0B6505805E3DC3AC * L_0 = (DragState_tBA2431E802EB4BC41D740E5B0B6505805E3DC3AC *)il2cpp_codegen_object_new(DragState_tBA2431E802EB4BC41D740E5B0B6505805E3DC3AC_il2cpp_TypeInfo_var);
		DragState__ctor_mF947E11F13C0E3191F185B15EB7187CAD7DE2C5A(L_0, /*hidden argument*/NULL);
		__this->set_m_DragState_7(L_0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Boolean ProBuilder.Examples.Selection::Add(UnityEngine.ProBuilder.ProBuilderMesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Selection_Add_mCDEA58AC0275BE1F19C5365C5D4F6301D53F5F8F (ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 * ___mesh0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_mB8FFD2BF1965AA845D3DC7D81BC2CE857CBE2D24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Selection_t1FCB1C96E6A79B484E2225A10A53ED29B7A3F760_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(mesh == null)
		ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 * L_0 = ___mesh0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// throw new ArgumentNullException("mesh");
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_2 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEB0A157666700D8227FD4B66A26FDC02035E89BF)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Selection_Add_mCDEA58AC0275BE1F19C5365C5D4F6301D53F5F8F_RuntimeMethod_var)));
	}

IL_0014:
	{
		// return s_Selection.Add(mesh);
		IL2CPP_RUNTIME_CLASS_INIT(Selection_t1FCB1C96E6A79B484E2225A10A53ED29B7A3F760_il2cpp_TypeInfo_var);
		HashSet_1_tF6DD03009BA75BA8DDFB365F26AEE379ACA22C91 * L_3 = ((Selection_t1FCB1C96E6A79B484E2225A10A53ED29B7A3F760_StaticFields*)il2cpp_codegen_static_fields_for(Selection_t1FCB1C96E6A79B484E2225A10A53ED29B7A3F760_il2cpp_TypeInfo_var))->get_s_Selection_0();
		ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 * L_4 = ___mesh0;
		bool L_5;
		L_5 = HashSet_1_Add_mB8FFD2BF1965AA845D3DC7D81BC2CE857CBE2D24(L_3, L_4, /*hidden argument*/HashSet_1_Add_mB8FFD2BF1965AA845D3DC7D81BC2CE857CBE2D24_RuntimeMethod_var);
		return L_5;
	}
}
// System.Void ProBuilder.Examples.Selection::Remove(UnityEngine.ProBuilder.ProBuilderMesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selection_Remove_m9B0296EDC2E55FA30A4AB3A405006533D69C2A6B (ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 * ___mesh0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_m0289CE6599F040101BB5E4F28875D79F4F49756D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Remove_m6A28999AB452AA1F53CD3EDCE72105A1ABF48736_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Selection_t1FCB1C96E6A79B484E2225A10A53ED29B7A3F760_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(mesh == null)
		ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 * L_0 = ___mesh0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// throw new ArgumentNullException("mesh");
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_2 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEB0A157666700D8227FD4B66A26FDC02035E89BF)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Selection_Remove_m9B0296EDC2E55FA30A4AB3A405006533D69C2A6B_RuntimeMethod_var)));
	}

IL_0014:
	{
		// if(s_Selection.Contains(mesh))
		IL2CPP_RUNTIME_CLASS_INIT(Selection_t1FCB1C96E6A79B484E2225A10A53ED29B7A3F760_il2cpp_TypeInfo_var);
		HashSet_1_tF6DD03009BA75BA8DDFB365F26AEE379ACA22C91 * L_3 = ((Selection_t1FCB1C96E6A79B484E2225A10A53ED29B7A3F760_StaticFields*)il2cpp_codegen_static_fields_for(Selection_t1FCB1C96E6A79B484E2225A10A53ED29B7A3F760_il2cpp_TypeInfo_var))->get_s_Selection_0();
		ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 * L_4 = ___mesh0;
		bool L_5;
		L_5 = HashSet_1_Contains_m0289CE6599F040101BB5E4F28875D79F4F49756D(L_3, L_4, /*hidden argument*/HashSet_1_Contains_m0289CE6599F040101BB5E4F28875D79F4F49756D_RuntimeMethod_var);
		if (!L_5)
		{
			goto IL_002d;
		}
	}
	{
		// s_Selection.Remove(mesh);
		IL2CPP_RUNTIME_CLASS_INIT(Selection_t1FCB1C96E6A79B484E2225A10A53ED29B7A3F760_il2cpp_TypeInfo_var);
		HashSet_1_tF6DD03009BA75BA8DDFB365F26AEE379ACA22C91 * L_6 = ((Selection_t1FCB1C96E6A79B484E2225A10A53ED29B7A3F760_StaticFields*)il2cpp_codegen_static_fields_for(Selection_t1FCB1C96E6A79B484E2225A10A53ED29B7A3F760_il2cpp_TypeInfo_var))->get_s_Selection_0();
		ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 * L_7 = ___mesh0;
		bool L_8;
		L_8 = HashSet_1_Remove_m6A28999AB452AA1F53CD3EDCE72105A1ABF48736(L_6, L_7, /*hidden argument*/HashSet_1_Remove_m6A28999AB452AA1F53CD3EDCE72105A1ABF48736_RuntimeMethod_var);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Boolean ProBuilder.Examples.Selection::Contains(UnityEngine.ProBuilder.ProBuilderMesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Selection_Contains_mFAA4DD2B7640324701EDABF999070EDBEBAA132D (ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 * ___mesh0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_m0289CE6599F040101BB5E4F28875D79F4F49756D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Selection_t1FCB1C96E6A79B484E2225A10A53ED29B7A3F760_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return s_Selection.Contains(mesh);
		IL2CPP_RUNTIME_CLASS_INIT(Selection_t1FCB1C96E6A79B484E2225A10A53ED29B7A3F760_il2cpp_TypeInfo_var);
		HashSet_1_tF6DD03009BA75BA8DDFB365F26AEE379ACA22C91 * L_0 = ((Selection_t1FCB1C96E6A79B484E2225A10A53ED29B7A3F760_StaticFields*)il2cpp_codegen_static_fields_for(Selection_t1FCB1C96E6A79B484E2225A10A53ED29B7A3F760_il2cpp_TypeInfo_var))->get_s_Selection_0();
		ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 * L_1 = ___mesh0;
		bool L_2;
		L_2 = HashSet_1_Contains_m0289CE6599F040101BB5E4F28875D79F4F49756D(L_0, L_1, /*hidden argument*/HashSet_1_Contains_m0289CE6599F040101BB5E4F28875D79F4F49756D_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void ProBuilder.Examples.Selection::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selection_Clear_m9136D721FA4C93B856642D8F48B1A65DC64C99AF (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Clear_m5F6D43800DA4275BF2716F3C8131013646838551_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Selection_t1FCB1C96E6A79B484E2225A10A53ED29B7A3F760_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// s_Selection.Clear();
		IL2CPP_RUNTIME_CLASS_INIT(Selection_t1FCB1C96E6A79B484E2225A10A53ED29B7A3F760_il2cpp_TypeInfo_var);
		HashSet_1_tF6DD03009BA75BA8DDFB365F26AEE379ACA22C91 * L_0 = ((Selection_t1FCB1C96E6A79B484E2225A10A53ED29B7A3F760_StaticFields*)il2cpp_codegen_static_fields_for(Selection_t1FCB1C96E6A79B484E2225A10A53ED29B7A3F760_il2cpp_TypeInfo_var))->get_s_Selection_0();
		HashSet_1_Clear_m5F6D43800DA4275BF2716F3C8131013646838551(L_0, /*hidden argument*/HashSet_1_Clear_m5F6D43800DA4275BF2716F3C8131013646838551_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.ProBuilderMesh> ProBuilder.Examples.Selection::get_meshes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Selection_get_meshes_m2B91BD293BF1335191155C4B2CD625CB9C2067CC (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Selection_t1FCB1C96E6A79B484E2225A10A53ED29B7A3F760_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return s_Selection; }
		IL2CPP_RUNTIME_CLASS_INIT(Selection_t1FCB1C96E6A79B484E2225A10A53ED29B7A3F760_il2cpp_TypeInfo_var);
		HashSet_1_tF6DD03009BA75BA8DDFB365F26AEE379ACA22C91 * L_0 = ((Selection_t1FCB1C96E6A79B484E2225A10A53ED29B7A3F760_StaticFields*)il2cpp_codegen_static_fields_for(Selection_t1FCB1C96E6A79B484E2225A10A53ED29B7A3F760_il2cpp_TypeInfo_var))->get_s_Selection_0();
		return L_0;
	}
}
// System.Void ProBuilder.Examples.Selection::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selection__cctor_mAF86E2448C1EC45EDCAAE635C7693ADC8B20D064 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_mD9C5F7D03314D383A69C11DEBD3A3246F9EBAA39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_tF6DD03009BA75BA8DDFB365F26AEE379ACA22C91_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Selection_t1FCB1C96E6A79B484E2225A10A53ED29B7A3F760_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static HashSet<ProBuilderMesh> s_Selection = new HashSet<ProBuilderMesh>();
		HashSet_1_tF6DD03009BA75BA8DDFB365F26AEE379ACA22C91 * L_0 = (HashSet_1_tF6DD03009BA75BA8DDFB365F26AEE379ACA22C91 *)il2cpp_codegen_object_new(HashSet_1_tF6DD03009BA75BA8DDFB365F26AEE379ACA22C91_il2cpp_TypeInfo_var);
		HashSet_1__ctor_mD9C5F7D03314D383A69C11DEBD3A3246F9EBAA39(L_0, /*hidden argument*/HashSet_1__ctor_mD9C5F7D03314D383A69C11DEBD3A3246F9EBAA39_RuntimeMethod_var);
		((Selection_t1FCB1C96E6A79B484E2225A10A53ED29B7A3F760_StaticFields*)il2cpp_codegen_static_fields_for(Selection_t1FCB1C96E6A79B484E2225A10A53ED29B7A3F760_il2cpp_TypeInfo_var))->set_s_Selection_0(L_0);
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
// System.Void ProBuilder.Examples.SimpleGrid::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleGrid_Start_m564F1E9B48F42C683793F5A03EA301E6B09FA6D4 (SimpleGrid_t569734AD487C867DC8CBB9B276C2572003A7E2BE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m4E31C5D3D0490AEE405B54BE9F61802EA425B9DC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetComponent<MeshFilter>().sharedMesh = GridMesh(lines, scale);
		MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * L_0;
		L_0 = Component_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m4E31C5D3D0490AEE405B54BE9F61802EA425B9DC(__this, /*hidden argument*/Component_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m4E31C5D3D0490AEE405B54BE9F61802EA425B9DC_RuntimeMethod_var);
		int32_t L_1 = __this->get_lines_4();
		float L_2 = __this->get_scale_5();
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_3;
		L_3 = SimpleGrid_GridMesh_m64876FDBD78C3754114C8E71C2E342B4A1A046CC(__this, L_1, L_2, /*hidden argument*/NULL);
		MeshFilter_set_sharedMesh_mC96D5F9AE4BC1D186221F568A4C3CE23572EC958(L_0, L_3, /*hidden argument*/NULL);
		// transform.position = Vector3.zero;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_4, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.Mesh ProBuilder.Examples.SimpleGrid::GridMesh(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * SimpleGrid_GridMesh_m64876FDBD78C3754114C8E71C2E342B4A1A046CC (SimpleGrid_t569734AD487C867DC8CBB9B276C2572003A7E2BE * __this, int32_t ___lineCount0, float ___scale1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF6EACFE5868352FC5B923AA4C224AEB37445AC59);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* V_1 = NULL;
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* V_2 = NULL;
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* V_3 = NULL;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t G_B3_0 = 0;
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* G_B3_1 = NULL;
	int32_t G_B2_0 = 0;
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* G_B2_1 = NULL;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	int32_t G_B4_1 = 0;
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* G_B4_2 = NULL;
	int32_t G_B6_0 = 0;
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* G_B6_1 = NULL;
	int32_t G_B5_0 = 0;
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* G_B5_1 = NULL;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  G_B7_0;
	memset((&G_B7_0), 0, sizeof(G_B7_0));
	int32_t G_B7_1 = 0;
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* G_B7_2 = NULL;
	int32_t G_B9_0 = 0;
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* G_B9_1 = NULL;
	int32_t G_B8_0 = 0;
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* G_B8_1 = NULL;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  G_B10_0;
	memset((&G_B10_0), 0, sizeof(G_B10_0));
	int32_t G_B10_1 = 0;
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* G_B10_2 = NULL;
	int32_t G_B12_0 = 0;
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* G_B12_1 = NULL;
	int32_t G_B11_0 = 0;
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* G_B11_1 = NULL;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  G_B13_0;
	memset((&G_B13_0), 0, sizeof(G_B13_0));
	int32_t G_B13_1 = 0;
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* G_B13_2 = NULL;
	{
		// float half = (lineCount / 2f) * scale;
		int32_t L_0 = ___lineCount0;
		float L_1 = ___scale1;
		V_0 = ((float)il2cpp_codegen_multiply((float)((float)((float)((float)((float)L_0))/(float)(2.0f))), (float)L_1));
		// lineCount++;
		int32_t L_2 = ___lineCount0;
		___lineCount0 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
		// Vector3[] lines = new Vector3[lineCount * 4];
		int32_t L_3 = ___lineCount0;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_4 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)SZArrayNew(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_3, (int32_t)4)));
		V_1 = L_4;
		// Vector3[] normals = new Vector3[lineCount * 4];
		int32_t L_5 = ___lineCount0;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_6 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)SZArrayNew(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_5, (int32_t)4)));
		V_2 = L_6;
		// Vector2[] uv = new Vector2[lineCount * 4];
		int32_t L_7 = ___lineCount0;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_8 = (Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)SZArrayNew(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_7, (int32_t)4)));
		V_3 = L_8;
		// int[] indices = new int[lineCount * 4];
		int32_t L_9 = ___lineCount0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_10 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_9, (int32_t)4)));
		V_4 = L_10;
		// int n = 0;
		V_5 = 0;
		// for (int y = 0; y < lineCount; y++)
		V_6 = 0;
		goto IL_014c;
	}

IL_0040:
	{
		// indices[n] = n;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_11 = V_4;
		int32_t L_12 = V_5;
		int32_t L_13 = V_5;
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (int32_t)L_13);
		// uv[n] = y % 10 == 0 ? Vector2.one : Vector2.zero;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_14 = V_3;
		int32_t L_15 = V_5;
		int32_t L_16 = V_6;
		G_B2_0 = L_15;
		G_B2_1 = L_14;
		if (!((int32_t)((int32_t)L_16%(int32_t)((int32_t)10))))
		{
			G_B3_0 = L_15;
			G_B3_1 = L_14;
			goto IL_0058;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_17;
		L_17 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		G_B4_0 = L_17;
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		goto IL_005d;
	}

IL_0058:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_18;
		L_18 = Vector2_get_one_m9B2AFD26404B6DD0F520D19FC7F79371C5C18B42(/*hidden argument*/NULL);
		G_B4_0 = L_18;
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
	}

IL_005d:
	{
		(G_B4_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B4_1), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )G_B4_0);
		// lines[n++] = new Vector3(y * scale - half, 0f, -half);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_19 = V_1;
		int32_t L_20 = V_5;
		int32_t L_21 = L_20;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
		int32_t L_22 = V_6;
		float L_23 = ___scale1;
		float L_24 = V_0;
		float L_25 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		memset((&L_26), 0, sizeof(L_26));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_26), ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)((float)((float)L_22)), (float)L_23)), (float)L_24)), (0.0f), ((-L_25)), /*hidden argument*/NULL);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(L_21), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_26);
		// indices[n] = n;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_27 = V_4;
		int32_t L_28 = V_5;
		int32_t L_29 = V_5;
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (int32_t)L_29);
		// uv[n] = y % 10 == 0 ? Vector2.one : Vector2.zero;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_30 = V_3;
		int32_t L_31 = V_5;
		int32_t L_32 = V_6;
		G_B5_0 = L_31;
		G_B5_1 = L_30;
		if (!((int32_t)((int32_t)L_32%(int32_t)((int32_t)10))))
		{
			G_B6_0 = L_31;
			G_B6_1 = L_30;
			goto IL_009a;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_33;
		L_33 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		G_B7_0 = L_33;
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_009f;
	}

IL_009a:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_34;
		L_34 = Vector2_get_one_m9B2AFD26404B6DD0F520D19FC7F79371C5C18B42(/*hidden argument*/NULL);
		G_B7_0 = L_34;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_009f:
	{
		(G_B7_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B7_1), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )G_B7_0);
		// lines[n++] = new Vector3(y * scale - half, 0f, half);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_35 = V_1;
		int32_t L_36 = V_5;
		int32_t L_37 = L_36;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1));
		int32_t L_38 = V_6;
		float L_39 = ___scale1;
		float L_40 = V_0;
		float L_41 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_42;
		memset((&L_42), 0, sizeof(L_42));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_42), ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)((float)((float)L_38)), (float)L_39)), (float)L_40)), (0.0f), L_41, /*hidden argument*/NULL);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_37), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_42);
		// indices[n] = n;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_43 = V_4;
		int32_t L_44 = V_5;
		int32_t L_45 = V_5;
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(L_44), (int32_t)L_45);
		// uv[n] = y % 10 == 0 ? Vector2.one : Vector2.zero;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_46 = V_3;
		int32_t L_47 = V_5;
		int32_t L_48 = V_6;
		G_B8_0 = L_47;
		G_B8_1 = L_46;
		if (!((int32_t)((int32_t)L_48%(int32_t)((int32_t)10))))
		{
			G_B9_0 = L_47;
			G_B9_1 = L_46;
			goto IL_00db;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_49;
		L_49 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		G_B10_0 = L_49;
		G_B10_1 = G_B8_0;
		G_B10_2 = G_B8_1;
		goto IL_00e0;
	}

IL_00db:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_50;
		L_50 = Vector2_get_one_m9B2AFD26404B6DD0F520D19FC7F79371C5C18B42(/*hidden argument*/NULL);
		G_B10_0 = L_50;
		G_B10_1 = G_B9_0;
		G_B10_2 = G_B9_1;
	}

IL_00e0:
	{
		(G_B10_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B10_1), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )G_B10_0);
		// lines[n++] = new Vector3(-half, 0f, y * scale - half);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_51 = V_1;
		int32_t L_52 = V_5;
		int32_t L_53 = L_52;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_53, (int32_t)1));
		float L_54 = V_0;
		int32_t L_55 = V_6;
		float L_56 = ___scale1;
		float L_57 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_58;
		memset((&L_58), 0, sizeof(L_58));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_58), ((-L_54)), (0.0f), ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)((float)((float)L_55)), (float)L_56)), (float)L_57)), /*hidden argument*/NULL);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(L_53), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_58);
		// indices[n] = n;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_59 = V_4;
		int32_t L_60 = V_5;
		int32_t L_61 = V_5;
		(L_59)->SetAt(static_cast<il2cpp_array_size_t>(L_60), (int32_t)L_61);
		// uv[n] = y % 10 == 0 ? Vector2.one : Vector2.zero;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_62 = V_3;
		int32_t L_63 = V_5;
		int32_t L_64 = V_6;
		G_B11_0 = L_63;
		G_B11_1 = L_62;
		if (!((int32_t)((int32_t)L_64%(int32_t)((int32_t)10))))
		{
			G_B12_0 = L_63;
			G_B12_1 = L_62;
			goto IL_011d;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_65;
		L_65 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		G_B13_0 = L_65;
		G_B13_1 = G_B11_0;
		G_B13_2 = G_B11_1;
		goto IL_0122;
	}

IL_011d:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_66;
		L_66 = Vector2_get_one_m9B2AFD26404B6DD0F520D19FC7F79371C5C18B42(/*hidden argument*/NULL);
		G_B13_0 = L_66;
		G_B13_1 = G_B12_0;
		G_B13_2 = G_B12_1;
	}

IL_0122:
	{
		(G_B13_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B13_1), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )G_B13_0);
		// lines[n++] = new Vector3(half, 0f, y * scale - half);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_67 = V_1;
		int32_t L_68 = V_5;
		int32_t L_69 = L_68;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_69, (int32_t)1));
		float L_70 = V_0;
		int32_t L_71 = V_6;
		float L_72 = ___scale1;
		float L_73 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_74;
		memset((&L_74), 0, sizeof(L_74));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_74), L_70, (0.0f), ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)((float)((float)L_71)), (float)L_72)), (float)L_73)), /*hidden argument*/NULL);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(L_69), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_74);
		// for (int y = 0; y < lineCount; y++)
		int32_t L_75 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_75, (int32_t)1));
	}

IL_014c:
	{
		// for (int y = 0; y < lineCount; y++)
		int32_t L_76 = V_6;
		int32_t L_77 = ___lineCount0;
		if ((((int32_t)L_76) < ((int32_t)L_77)))
		{
			goto IL_0040;
		}
	}
	{
		// for (int i = 0; i < lines.Length; i++)
		V_7 = 0;
		goto IL_016c;
	}

IL_0159:
	{
		// normals[i] = Vector3.up;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_78 = V_2;
		int32_t L_79 = V_7;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_80;
		L_80 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		(L_78)->SetAt(static_cast<il2cpp_array_size_t>(L_79), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_80);
		// for (int i = 0; i < lines.Length; i++)
		int32_t L_81 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_81, (int32_t)1));
	}

IL_016c:
	{
		// for (int i = 0; i < lines.Length; i++)
		int32_t L_82 = V_7;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_83 = V_1;
		if ((((int32_t)L_82) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_83)->max_length))))))
		{
			goto IL_0159;
		}
	}
	{
		// Mesh tm = new Mesh();
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_84 = (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)il2cpp_codegen_object_new(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_il2cpp_TypeInfo_var);
		Mesh__ctor_mA3D8570373462201AD7B8C9586A7F9412E49C2F6(L_84, /*hidden argument*/NULL);
		// tm.name = "GridMesh";
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_85 = L_84;
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_85, _stringLiteralF6EACFE5868352FC5B923AA4C224AEB37445AC59, /*hidden argument*/NULL);
		// tm.vertices = lines;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_86 = L_85;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_87 = V_1;
		Mesh_set_vertices_m38F0908D0FDFE484BE19E94BE9D6176667469AAD(L_86, L_87, /*hidden argument*/NULL);
		// tm.normals = normals;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_88 = L_86;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_89 = V_2;
		Mesh_set_normals_m3D06E214B63B49788710672B71C99F2365A83130(L_88, L_89, /*hidden argument*/NULL);
		// tm.subMeshCount = 1;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_90 = L_88;
		Mesh_set_subMeshCount_mF6F2199AE4FA096C1AE0CAD02E13B6FEA38C6283(L_90, 1, /*hidden argument*/NULL);
		// tm.SetIndices(indices, MeshTopology.Lines, 0);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_91 = L_90;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_92 = V_4;
		Mesh_SetIndices_mCD0377083E978A3FF806CFCCD28410C042A77ECD(L_91, L_92, 3, 0, /*hidden argument*/NULL);
		// tm.uv = uv;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_93 = L_91;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_94 = V_3;
		Mesh_set_uv_mF6FED6DDACBAE3EAF28BFBF257A0D5356FCF3AAC(L_93, L_94, /*hidden argument*/NULL);
		// return tm;
		return L_93;
	}
}
// System.Void ProBuilder.Examples.SimpleGrid::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleGrid__ctor_m50A084D48B3C132FB0BEBD76CD43FD869CA9AC5F (SimpleGrid_t569734AD487C867DC8CBB9B276C2572003A7E2BE * __this, const RuntimeMethod* method)
{
	{
		// public int lines = 10;
		__this->set_lines_4(((int32_t)10));
		// public float scale = 1f;
		__this->set_scale_5((1.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// UnityEngine.GameObject ProBuilder.Examples.Utility::PickObject(UnityEngine.Camera,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Utility_PickObject_m53669001254660E8CE4EF5AD993D5793ACE80A6B (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___camera0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___mousePosition1, const RuntimeMethod* method)
{
	RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var ray = camera.ScreenPointToRay(mousePosition);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0 = ___camera0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = ___mousePosition1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_1, /*hidden argument*/NULL);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_3;
		L_3 = Camera_ScreenPointToRay_mD385213935A81030EDC604A39FD64761077CFBAB(L_0, L_2, /*hidden argument*/NULL);
		// if (Physics.Raycast(ray, out hit))
		bool L_4;
		L_4 = Physics_Raycast_m80EC8EEDA0ABA8B01838BA9054834CD1A381916E(L_3, (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0022;
		}
	}
	{
		// return hit.collider.gameObject;
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_5;
		L_5 = RaycastHit_get_collider_m13A3DE16FBC631E0A1F987E0B22CE70AF8AB539E((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_5, /*hidden argument*/NULL);
		return L_6;
	}

IL_0022:
	{
		// return null;
		return (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL;
	}
}
// ProBuilder.Examples.MeshAndFace ProBuilder.Examples.Utility::PickFace(UnityEngine.Camera,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MeshAndFace_t9D166BDF89B6496DF212C761F8EE7CFD5C71C7D5  Utility_PickFace_m9848445B24CF7F8D631E0A5FE8A1BFA42AF5FF3E (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___camera0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___mousePosition1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06_m0C759891C92E06F8E263C0A723D6CC2F08DA3344_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MeshAndFace_t9D166BDF89B6496DF212C761F8EE7CFD5C71C7D5  V_0;
	memset((&V_0), 0, sizeof(V_0));
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_1 = NULL;
	ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 * V_2 = NULL;
	{
		// var res = new MeshAndFace();
		il2cpp_codegen_initobj((&V_0), sizeof(MeshAndFace_t9D166BDF89B6496DF212C761F8EE7CFD5C71C7D5 ));
		// var go = PickObject(camera, mousePosition);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0 = ___camera0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___mousePosition1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		L_2 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_1, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Utility_PickObject_m53669001254660E8CE4EF5AD993D5793ACE80A6B(L_0, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		// if (go == null || !(res.mesh = go.GetComponent<ProBuilderMesh>()))
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0035;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = V_1;
		ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 * L_7;
		L_7 = GameObject_GetComponent_TisProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06_m0C759891C92E06F8E263C0A723D6CC2F08DA3344(L_6, /*hidden argument*/GameObject_GetComponent_TisProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06_m0C759891C92E06F8E263C0A723D6CC2F08DA3344_RuntimeMethod_var);
		ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 * L_8 = L_7;
		V_2 = L_8;
		(&V_0)->set_mesh_0(L_8);
		ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 * L_9 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_9, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_0037;
		}
	}

IL_0035:
	{
		// return res;
		MeshAndFace_t9D166BDF89B6496DF212C761F8EE7CFD5C71C7D5  L_11 = V_0;
		return L_11;
	}

IL_0037:
	{
		// res.face = SelectionPicker.PickFace(camera, mousePosition, res.mesh);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_12 = ___camera0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = ___mousePosition1;
		MeshAndFace_t9D166BDF89B6496DF212C761F8EE7CFD5C71C7D5  L_14 = V_0;
		ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 * L_15 = L_14.get_mesh_0();
		Face_t670F9C6E42E8D3EEA7AD53AD268426DF37B3AA0B * L_16;
		L_16 = SelectionPicker_PickFace_m7A3B9846D1688FB60A407E0E02E28603815087DD(L_12, L_13, L_15, /*hidden argument*/NULL);
		(&V_0)->set_face_1(L_16);
		// return res;
		MeshAndFace_t9D166BDF89B6496DF212C761F8EE7CFD5C71C7D5  L_17 = V_0;
		return L_17;
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
// System.Void ProBuilder.Examples.MeshEditor/DragState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DragState__ctor_mF947E11F13C0E3191F185B15EB7187CAD7DE2C5A (DragState_tBA2431E802EB4BC41D740E5B0B6505805E3DC3AC * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void ProBuilder.Examples.MeshEditor/MeshState::.ctor(UnityEngine.ProBuilder.ProBuilderMesh,System.Collections.Generic.IList`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshState__ctor_m9A2F5BD428843FF08F99ECA7657DFBDD8D15CCF1 (MeshState_tF8D82249D94398E31F98DDD3FF745D3B916D282A * __this, ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 * ___mesh0, RuntimeObject* ___selectedIndices1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m61D9F161CA3A7569EB563586636A6C1E3F3E8B76_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// public MeshState(ProBuilderMesh mesh, IList<int> selectedIndices)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.mesh = mesh;
		ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 * L_0 = ___mesh0;
		__this->set_mesh_0(L_0);
		// vertices = mesh.positions.ToArray();
		ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 * L_1 = ___mesh0;
		RuntimeObject* L_2;
		L_2 = ProBuilderMesh_get_positions_mDDB55F170B673C3CEC221A27E5045C012C43E33D(L_1, /*hidden argument*/NULL);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_3;
		L_3 = Enumerable_ToArray_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m61D9F161CA3A7569EB563586636A6C1E3F3E8B76(L_2, /*hidden argument*/Enumerable_ToArray_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m61D9F161CA3A7569EB563586636A6C1E3F3E8B76_RuntimeMethod_var);
		__this->set_vertices_1(L_3);
		// indices = mesh.GetCoincidentVertices(selectedIndices);
		ProBuilderMesh_t252480EA473C60D493C8B94B66B1FE61B1768A06 * L_4 = ___mesh0;
		RuntimeObject* L_5 = ___selectedIndices1;
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_6;
		L_6 = ProBuilderMesh_GetCoincidentVertices_m914E95853150DD297E0F6BC0DC7BF803AA904D62(L_4, L_5, /*hidden argument*/NULL);
		__this->set_indices_3(L_6);
		// origins = new Vector3[indices.Count];
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_7 = __this->get_indices_3();
		int32_t L_8;
		L_8 = List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_inline(L_7, /*hidden argument*/List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_RuntimeMethod_var);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_9 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)SZArrayNew(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var, (uint32_t)L_8);
		__this->set_origins_2(L_9);
		// for (int i = 0, c = indices.Count; i < c; i++)
		V_0 = 0;
		// for (int i = 0, c = indices.Count; i < c; i++)
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_10 = __this->get_indices_3();
		int32_t L_11;
		L_11 = List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_inline(L_10, /*hidden argument*/List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_RuntimeMethod_var);
		V_1 = L_11;
		goto IL_0078;
	}

IL_0051:
	{
		// origins[i] = vertices[indices[i]];
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_12 = __this->get_origins_2();
		int32_t L_13 = V_0;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_14 = __this->get_vertices_1();
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_15 = __this->get_indices_3();
		int32_t L_16 = V_0;
		int32_t L_17;
		L_17 = List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_inline(L_15, L_16, /*hidden argument*/List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var);
		int32_t L_18 = L_17;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_19);
		// for (int i = 0, c = indices.Count; i < c; i++)
		int32_t L_20 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_0078:
	{
		// for (int i = 0, c = indices.Count; i < c; i++)
		int32_t L_21 = V_0;
		int32_t L_22 = V_1;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0051;
		}
	}
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CameraMotion_get_cameraState_m84500FD7EC33D43A2A9BF2F8133862704208E66A_inline (CameraMotion_tB4108D421FA6012FCA161EBD7AF7DA50B4A89F89 * __this, const RuntimeMethod* method)
{
	{
		// public ViewTool cameraState { get; private set; }
		int32_t L_0 = __this->get_U3CcameraStateU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CameraMotion_set_cameraState_m5B17F805648920B4D0F639FE85C329D6BF40D532_inline (CameraMotion_tB4108D421FA6012FCA161EBD7AF7DA50B4A89F89 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public ViewTool cameraState { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CcameraStateU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(L_0, /*hidden argument*/NULL);
		___t2 = L_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___a0;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___b1;
		float L_5 = L_4.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_x_2();
		float L_8 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = ___a0;
		float L_10 = L_9.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = ___b1;
		float L_12 = L_11.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = ___a0;
		float L_14 = L_13.get_y_3();
		float L_15 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = ___a0;
		float L_17 = L_16.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = ___b1;
		float L_19 = L_18.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = ___a0;
		float L_21 = L_20.get_z_4();
		float L_22 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_23), ((float)il2cpp_codegen_add((float)L_3, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), (float)L_8)))), ((float)il2cpp_codegen_add((float)L_10, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_12, (float)L_14)), (float)L_15)))), ((float)il2cpp_codegen_add((float)L_17, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_19, (float)L_21)), (float)L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___v0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___v0;
		float L_3 = L_2.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mD19905B093915BA12852732EA27AA2DBE030D11F_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___lhs0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___rhs1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___lhs0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___rhs1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___lhs0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___rhs1;
		float L_11 = L_10.get_z_4();
		V_0 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_1, (float)L_3)), (float)((float)il2cpp_codegen_multiply((float)L_5, (float)L_7)))), (float)((float)il2cpp_codegen_multiply((float)L_9, (float)L_11))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_12 = V_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___v0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___v0;
		float L_3 = L_2.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_gshared_inline (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_gshared_inline (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_2 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get__items_1();
		int32_t L_3 = ___index0;
		int32_t L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_2, (int32_t)L_3);
		return (int32_t)L_4;
	}
}
