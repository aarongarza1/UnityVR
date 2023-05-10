#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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

// System.Collections.Generic.HashSet`1<UnityEngine.XR.Management.XRLoader>
struct HashSet_1_t174593AE6599738C19A33586587D63534CED9F0F;
// System.Collections.Generic.IReadOnlyList`1<UnityEngine.XR.Management.XRLoader>
struct IReadOnlyList_1_tA80C12111618D2D89FCD26036BFD26E605419A2A;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader>
struct List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// UnityEngine.Mesh[]
struct MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.XR.Management.XRLoader[]
struct XRLoaderU5BU5D_t106FBE2039A03743430BD384D0D69555CCD0BA99;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// ButtonManager
struct ButtonManager_tB4A98DF10074AA9CF8B331C8AB41A791E21A6AD8;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// DialogueSelector
struct DialogueSelector_tD9648F5653C499D620D150A3C317476A5A18F505;
// FadeControl
struct FadeControl_t0B96F8AAD2727757FE013E7DD3078D7C09C27FFB;
// FadeController
struct FadeController_t53EFBD8B45AE4F610E5DFA9D5400E1F25B0DDFA4;
// FlyCamera
struct FlyCamera_t1F64B05D10DBAFF4EC6F7E62F1710D0669890E0B;
// GDTFadeEffect
struct GDTFadeEffect_t2B494CFB442DA676DD94076E4A2D2B586A0913BC;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// MainMenuButtons
struct MainMenuButtons_tB02072ED221924527F9F7BA36959734AF3B68D3F;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityStandardAssets.ImageEffects.PostEffectsBase
struct PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76;
// UnityStandardAssets.ImageEffects.Quads
struct Quads_tE98082D335C0BFD295060C5EAC07382CCC97F50C;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27;
// SceneSelector
struct SceneSelector_tE51731A7E84DFAC7C7326F61E8527E39B84613B3;
// SelectLevel
struct SelectLevel_tA3E39D978377CCF88228517CED58C69A5380CC27;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692;
// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F;
// SoundManager
struct SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// TextBoxContainer
struct TextBoxContainer_t87E8E4C92A6CD91741EFAFDDB1901F24E606B049;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.XR.Management.XRGeneralSettings
struct XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE;
// UnityEngine.XR.Management.XRLoader
struct XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976;
// UnityEngine.XR.Management.XRManagerSettings
struct XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52;
// Unity.Template.VR.XRPlatformControllerSetup
struct XRPlatformControllerSetup_tF3241056E2DD26648305E205151EB2ACF3333628;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555;

IL2CPP_EXTERN_C RuntimeClass* ButtonManager_tB4A98DF10074AA9CF8B331C8AB41A791E21A6AD8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FadeController_t53EFBD8B45AE4F610E5DFA9D5400E1F25B0DDFA4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t468455E75DD3CE53FB1BEFFBDB5DBB1C5905801C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tE9023775CE757CAAA4A054FB61980FF18EC394AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quads_tE98082D335C0BFD295060C5EAC07382CCC97F50C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextBoxContainer_t87E8E4C92A6CD91741EFAFDDB1901F24E606B049_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral015403F6CF8DE1AADAACF0260F1E61ADDBA3FDDD;
IL2CPP_EXTERN_C String_t* _stringLiteral020CAA13FFD86A6D41FC213799527088F9E6DEDC;
IL2CPP_EXTERN_C String_t* _stringLiteral0304C2468FEB98972F5763D99C72997DEFFF8FF8;
IL2CPP_EXTERN_C String_t* _stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0;
IL2CPP_EXTERN_C String_t* _stringLiteral260F391428D3A5483782F6A79B50257B53F8B40A;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral26A088B3C29953132F63D03BCD044C5F8910558F;
IL2CPP_EXTERN_C String_t* _stringLiteral26E519C4459C9C2AE04CACDA4DCF6450F759B33B;
IL2CPP_EXTERN_C String_t* _stringLiteral2C35D3874365C14043C0CF9A430201FEE2BAC852;
IL2CPP_EXTERN_C String_t* _stringLiteral2CDB05C03FD48AC44069D71677E1C77876AB432D;
IL2CPP_EXTERN_C String_t* _stringLiteral3268E0C9EB599FF0B54B0B0F946B71CFDC5B4B09;
IL2CPP_EXTERN_C String_t* _stringLiteral38860340D6399FED72D34E843CC6D18D6E2BCF24;
IL2CPP_EXTERN_C String_t* _stringLiteral46FDB78170F0875B7786D0DF6CEC4C315A44B763;
IL2CPP_EXTERN_C String_t* _stringLiteral4B79BF2E9E8E0DCA12BB1A54C81DF6AF59DF2B10;
IL2CPP_EXTERN_C String_t* _stringLiteral62546C82B8A3115DF36A620C80FACDBA7384A8CB;
IL2CPP_EXTERN_C String_t* _stringLiteral6690D47161AD994D7444F97612BB1398972AD010;
IL2CPP_EXTERN_C String_t* _stringLiteral743FF3E9303AAA51ED2B08516D6CDD1C0AE91839;
IL2CPP_EXTERN_C String_t* _stringLiteral797BC20C9E73CA9A4F4A37A04BB2102DEB6E6CAC;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral887E9B6AF7604BCDC57F8FC1D0E3043AC03E564D;
IL2CPP_EXTERN_C String_t* _stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7;
IL2CPP_EXTERN_C String_t* _stringLiteral8AD58CDB5A877779756FB284EF557ED8EC4267E4;
IL2CPP_EXTERN_C String_t* _stringLiteral906165F1644FCE4F0F2AC919D67FB77D0D17FFA3;
IL2CPP_EXTERN_C String_t* _stringLiteral963B75D56FACFB9CB8B20F6F310BF75BF77893C0;
IL2CPP_EXTERN_C String_t* _stringLiteralA7B9AA48EBD94C7B3DAE7795923DB681F9B2534B;
IL2CPP_EXTERN_C String_t* _stringLiteralA84A1CB676179E14FE5DCECD5E4F72C8129545CB;
IL2CPP_EXTERN_C String_t* _stringLiteralAD24B96FEF7F6BC453A4D5E2575831BC289660D8;
IL2CPP_EXTERN_C String_t* _stringLiteralB87CC029578F0C6F88E01A8257EBF1ED95223CEC;
IL2CPP_EXTERN_C String_t* _stringLiteralBC80DA7614408087FE75EA6806A9CBE62109EF15;
IL2CPP_EXTERN_C String_t* _stringLiteralC106589373683AEAB4EA765F77169BDAEB4DC540;
IL2CPP_EXTERN_C String_t* _stringLiteralDCCF60D13A2F5176335F2A450A37F1B544DA4C96;
IL2CPP_EXTERN_C String_t* _stringLiteralE691C6599F2EFD48FF5D07CCA40BF885CA11AD70;
IL2CPP_EXTERN_C String_t* _stringLiteralECAC9756AB416770CE66B9411AB7AEB8B8181309;
IL2CPP_EXTERN_C String_t* _stringLiteralF6797CDA4F633ABAB5D36243C0B398324E2DDC88;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var;

struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader>
struct List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	XRLoaderU5BU5D_t106FBE2039A03743430BD384D0D69555CCD0BA99* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// UnityStandardAssets.ImageEffects.Quads
struct Quads_tE98082D335C0BFD295060C5EAC07382CCC97F50C  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
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

// System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>
struct Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
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

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 
{
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1__padding[1];
	};
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

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
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

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
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

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
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

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.XR.Management.XRGeneralSettings
struct XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::m_LoaderManagerInstance
	XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* ___m_LoaderManagerInstance_6;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_InitManagerOnStart
	bool ___m_InitManagerOnStart_7;
	// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::m_XRManager
	XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* ___m_XRManager_8;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_ProviderIntialized
	bool ___m_ProviderIntialized_9;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_ProviderStarted
	bool ___m_ProviderStarted_10;
};

// UnityEngine.XR.Management.XRLoader
struct XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
};

// UnityEngine.XR.Management.XRManagerSettings
struct XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_InitializationComplete
	bool ___m_InitializationComplete_4;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_RequiresSettingsUpdate
	bool ___m_RequiresSettingsUpdate_5;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_AutomaticLoading
	bool ___m_AutomaticLoading_6;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_AutomaticRunning
	bool ___m_AutomaticRunning_7;
	// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::m_Loaders
	List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822* ___m_Loaders_8;
	// System.Collections.Generic.HashSet`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::m_RegisteredLoaders
	HashSet_1_t174593AE6599738C19A33586587D63534CED9F0F* ___m_RegisteredLoaders_9;
	// UnityEngine.XR.Management.XRLoader UnityEngine.XR.Management.XRManagerSettings::<activeLoader>k__BackingField
	XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* ___U3CactiveLoaderU3Ek__BackingField_10;
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// ButtonManager
struct ButtonManager_tB4A98DF10074AA9CF8B331C8AB41A791E21A6AD8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<UnityEngine.GameObject> ButtonManager::ButtonList
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___ButtonList_4;
};

// DialogueSelector
struct DialogueSelector_tD9648F5653C499D620D150A3C317476A5A18F505  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// FadeControl
struct FadeControl_t0B96F8AAD2727757FE013E7DD3078D7C09C27FFB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject FadeControl::fadeEffect
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___fadeEffect_4;
};

// FadeController
struct FadeController_t53EFBD8B45AE4F610E5DFA9D5400E1F25B0DDFA4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject FadeController::fadeObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___fadeObject_5;
};

// FlyCamera
struct FlyCamera_t1F64B05D10DBAFF4EC6F7E62F1710D0669890E0B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single FlyCamera::cameraSensitivity
	float ___cameraSensitivity_4;
	// System.Single FlyCamera::climbSpeed
	float ___climbSpeed_5;
	// System.Single FlyCamera::normalMoveSpeed
	float ___normalMoveSpeed_6;
	// System.Single FlyCamera::slowMoveFactor
	float ___slowMoveFactor_7;
	// System.Single FlyCamera::fastMoveFactor
	float ___fastMoveFactor_8;
	// System.Single FlyCamera::rotationX
	float ___rotationX_9;
	// System.Single FlyCamera::rotationY
	float ___rotationY_10;
};

// GDTFadeEffect
struct GDTFadeEffect_t2B494CFB442DA676DD94076E4A2D2B586A0913BC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean GDTFadeEffect::playOnAwake
	bool ___playOnAwake_4;
	// UnityEngine.Color GDTFadeEffect::firstColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___firstColor_5;
	// UnityEngine.Color GDTFadeEffect::lastColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___lastColor_6;
	// System.Single GDTFadeEffect::timeEffect
	float ___timeEffect_7;
	// System.Single GDTFadeEffect::initialDelay
	float ___initialDelay_8;
	// System.Boolean GDTFadeEffect::firstToLast
	bool ___firstToLast_9;
	// System.Boolean GDTFadeEffect::pingPong
	bool ___pingPong_10;
	// System.Single GDTFadeEffect::pingPongDelay
	float ___pingPongDelay_11;
	// System.Boolean GDTFadeEffect::disableWhenFinish
	bool ___disableWhenFinish_12;
	// System.Single GDTFadeEffect::disableDelay
	float ___disableDelay_13;
	// System.Single GDTFadeEffect::speed
	float ___speed_14;
	// UnityEngine.UI.Image GDTFadeEffect::blackImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___blackImage_15;
	// System.Single GDTFadeEffect::currentValue
	float ___currentValue_16;
	// System.Boolean GDTFadeEffect::performEffect
	bool ___performEffect_17;
	// System.Boolean GDTFadeEffect::finished
	bool ___finished_18;
	// System.Boolean GDTFadeEffect::halfCycle
	bool ___halfCycle_19;
	// System.Boolean GDTFadeEffect::goingToLast
	bool ___goingToLast_20;
};

// MainMenuButtons
struct MainMenuButtons_tB02072ED221924527F9F7BA36959734AF3B68D3F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityStandardAssets.ImageEffects.PostEffectsBase
struct PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::supportHDRTextures
	bool ___supportHDRTextures_4;
	// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::supportDX11
	bool ___supportDX11_5;
	// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::isSupported
	bool ___isSupported_6;
};

// SceneSelector
struct SceneSelector_tE51731A7E84DFAC7C7326F61E8527E39B84613B3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// SelectLevel
struct SelectLevel_tA3E39D978377CCF88228517CED58C69A5380CC27  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// SoundManager
struct SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Slider SoundManager::volumeSlider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___volumeSlider_4;
};

// TextBoxContainer
struct TextBoxContainer_t87E8E4C92A6CD91741EFAFDDB1901F24E606B049  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<UnityEngine.GameObject> TextBoxContainer::TextBoxes
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___TextBoxes_4;
	// UnityEngine.GameObject TextBoxContainer::Fader
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Fader_5;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Unity.Template.VR.XRPlatformControllerSetup
struct XRPlatformControllerSetup_tF3241056E2DD26648305E205151EB2ACF3333628  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Unity.Template.VR.XRPlatformControllerSetup::m_LeftController
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_LeftController_4;
	// UnityEngine.GameObject Unity.Template.VR.XRPlatformControllerSetup::m_RightController
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_RightController_5;
	// UnityEngine.GameObject Unity.Template.VR.XRPlatformControllerSetup::m_LeftControllerOculusPackage
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_LeftControllerOculusPackage_6;
	// UnityEngine.GameObject Unity.Template.VR.XRPlatformControllerSetup::m_RightControllerOculusPackage
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_RightControllerOculusPackage_7;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_38;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_39;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_40;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_41;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_42;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_43;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_44;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_45;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_46;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_47;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_48;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_49;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_50;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_51;
};

// <Module>

// <Module>

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>

// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader>
struct List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	XRLoaderU5BU5D_t106FBE2039A03743430BD384D0D69555CCD0BA99* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader>

// UnityStandardAssets.ImageEffects.Quads
struct Quads_tE98082D335C0BFD295060C5EAC07382CCC97F50C_StaticFields
{
	// UnityEngine.Mesh[] UnityStandardAssets.ImageEffects.Quads::meshes
	MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689* ___meshes_0;
	// System.Int32 UnityStandardAssets.ImageEffects.Quads::currentQuads
	int32_t ___currentQuads_1;
};

// UnityStandardAssets.ImageEffects.Quads

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>

// System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// UnityEngine.Color

// UnityEngine.Color

// System.Double

// System.Double

// System.Int32

// System.Int32

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

// System.Void

// System.Void

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.Material

// UnityEngine.Material

// UnityEngine.Mesh

// UnityEngine.Mesh

// UnityEngine.Shader

// UnityEngine.Shader

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// UnityEngine.Texture

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// UnityEngine.RenderTexture

// UnityEngine.RenderTexture

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.XR.Management.XRGeneralSettings
struct XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_StaticFields
{
	// System.String UnityEngine.XR.Management.XRGeneralSettings::k_SettingsKey
	String_t* ___k_SettingsKey_4;
	// UnityEngine.XR.Management.XRGeneralSettings UnityEngine.XR.Management.XRGeneralSettings::s_RuntimeSettingsInstance
	XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* ___s_RuntimeSettingsInstance_5;
};

// UnityEngine.XR.Management.XRGeneralSettings

// UnityEngine.XR.Management.XRLoader

// UnityEngine.XR.Management.XRLoader

// UnityEngine.XR.Management.XRManagerSettings

// UnityEngine.XR.Management.XRManagerSettings

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Camera

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// ButtonManager
struct ButtonManager_tB4A98DF10074AA9CF8B331C8AB41A791E21A6AD8_StaticFields
{
	// ButtonManager ButtonManager::inst
	ButtonManager_tB4A98DF10074AA9CF8B331C8AB41A791E21A6AD8* ___inst_5;
};

// ButtonManager

// DialogueSelector

// DialogueSelector

// FadeControl

// FadeControl

// FadeController
struct FadeController_t53EFBD8B45AE4F610E5DFA9D5400E1F25B0DDFA4_StaticFields
{
	// FadeController FadeController::inst
	FadeController_t53EFBD8B45AE4F610E5DFA9D5400E1F25B0DDFA4* ___inst_4;
};

// FadeController

// FlyCamera

// FlyCamera

// GDTFadeEffect

// GDTFadeEffect

// MainMenuButtons

// MainMenuButtons

// UnityStandardAssets.ImageEffects.PostEffectsBase

// UnityStandardAssets.ImageEffects.PostEffectsBase

// SceneSelector

// SceneSelector

// SelectLevel

// SelectLevel

// SoundManager

// SoundManager

// TextBoxContainer
struct TextBoxContainer_t87E8E4C92A6CD91741EFAFDDB1901F24E606B049_StaticFields
{
	// TextBoxContainer TextBoxContainer::inst
	TextBoxContainer_t87E8E4C92A6CD91741EFAFDDB1901F24E606B049* ___inst_6;
};

// TextBoxContainer

// Unity.Template.VR.XRPlatformControllerSetup

// Unity.Template.VR.XRPlatformControllerSetup

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_22;
};

// UnityEngine.UI.Graphic

// UnityEngine.UI.Slider

// UnityEngine.UI.Slider

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_37;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_52;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_54;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_55;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_56;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_57;
};

// UnityEngine.UI.Image
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Mesh[]
struct MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689  : public RuntimeArray
{
	ALIGN_FIELD (8) Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* m_Items[1];

	inline Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 m_Items[1];

	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
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


// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;

// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.GameObject>::GetEnumerator()
inline Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::Dispose()
inline void Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::get_Current()
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::MoveNext()
inline bool Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27 (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Void ButtonManager::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonManager_Clear_m7BDFF65D56150A04B361AC330A9D8B77EEF9BB62 (ButtonManager_tB4A98DF10074AA9CF8B331C8AB41A791E21A6AD8* __this, const RuntimeMethod* method) ;
// System.Void TextBoxContainer::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextBoxContainer_Clear_mB89B9DC28287B84E3628393E7C6B41A7027F0F5D (TextBoxContainer_t87E8E4C92A6CD91741EFAFDDB1901F24E606B049* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Void TextBoxContainer::LoseCon()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextBoxContainer_LoseCon_m5D493C1AF0B0455B95384EE11D0C351B1EDA45B4 (TextBoxContainer_t87E8E4C92A6CD91741EFAFDDB1901F24E606B049* __this, const RuntimeMethod* method) ;
// System.Void TextBoxContainer::WinCon()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextBoxContainer_WinCon_mA5A4C09C3A4B89000640C73B862C7D83674B19BB (TextBoxContainer_t87E8E4C92A6CD91741EFAFDDB1901F24E606B049* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2 (int32_t ___0_key, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___0_methodName, float ___1_time, const RuntimeMethod* method) ;
// System.Boolean GDTFadeEffect::PerformFadeIn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GDTFadeEffect_PerformFadeIn_m5C8F32C12FFE1579659E6CEC6084FB438FC90F7B (GDTFadeEffect_t2B494CFB442DA676DD94076E4A2D2B586A0913BC* __this, const RuntimeMethod* method) ;
// System.Boolean GDTFadeEffect::PerformFadeOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GDTFadeEffect_PerformFadeOut_m7D83621B14F24D38FCB9C78AD00F69EF2E73116E (GDTFadeEffect_t2B494CFB442DA676DD94076E4A2D2B586A0913BC* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::Lerp(UnityEngine.Color,UnityEngine.Color,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_a, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_b, float ___2_t, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E (String_t* ___0_sceneName, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.PlayerPrefs::HasKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerPrefs_HasKey_mCA5C64BBA6BF8B230BC3BC92B4761DD3B11D4668 (String_t* ___0_key, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetFloat_m1E8EA662BB9D8CF339D7DA2C452FCDFED88C5285 (String_t* ___0_key, float ___1_value, const RuntimeMethod* method) ;
// System.Void SoundManager::Load()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_Load_m81C4ED23078B900527F751415116163FB375C443 (SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioListener::set_volume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioListener_set_volume_m72BAF2D558A5449091A59630EBF48095DEB4C721 (float ___0_value, const RuntimeMethod* method) ;
// System.Void SoundManager::Save()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_Save_m0C2FF8C3046ECE947DC82897C490B3B95E94ED25 (SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.PlayerPrefs::GetFloat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerPrefs_GetFloat_m81F89D571E11218ED76DC9234CF8FAC2515FA7CB (String_t* ___0_key, const RuntimeMethod* method) ;
// System.Void UnityEngine.Screen::set_lockCursor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Screen_set_lockCursor_m46DF393DF32359018D193500A1467E457503049F (bool ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62 (String_t* ___0_axisName, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80 (float ___0_angle, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_axis, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_left()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_lhs, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rhs, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434 (int32_t ___0_key, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Screen::get_lockCursor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Screen_get_lockCursor_mE3A20B0974F7AE3CCBBC679B5FD764F5B28F471E (const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m2841705C02C450E42A44B5EEE2A6A2C4261FA3AF (String_t* ___0_sceneName, int32_t ___1_mode, const RuntimeMethod* method) ;
// UnityEngine.XR.Management.XRGeneralSettings UnityEngine.XR.Management.XRGeneralSettings::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* XRGeneralSettings_get_Instance_m9F222F982E62E066E119754858D8E73CFE42048C_inline (const RuntimeMethod* method) ;
// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::get_Manager()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42_inline (XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IReadOnlyList`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::get_activeLoaders()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* XRManagerSettings_get_activeLoaders_m47D0FF16B7012A87F56D93124DC5D8DA0ACA591F_inline (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_exists, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Shader::get_isSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Shader_get_isSupported_m21C3D0F1819054101DFE0C0C062A24464FA5CAE5 (Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* __this, const RuntimeMethod* method) ;
// UnityEngine.Shader UnityEngine.Material::get_shader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* Material_get_shader_m8B0C11AE6F2AD7DE30AF52D3195EB716F7A71983 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::NotSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostEffectsBase_NotSupported_m3328CFF3B6C73682EAC7141F15716F34940D86AD (PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_values, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___0_shader, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckSupport(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PostEffectsBase_CheckSupport_m97A1AE9C8FAFEA8D8FF7FA69916F388ACCA9FB34 (PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76* __this, bool ___0_needDepth, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.SystemInfo::SupportsRenderTextureFormat(UnityEngine.RenderTextureFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SystemInfo_SupportsRenderTextureFormat_mCCC3C69578A2C5B7367F73999E6938C315A98201 (int32_t ___0_format, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SystemInfo::get_graphicsShaderLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_graphicsShaderLevel_m9E6B001FA80EFBFC92EF4E7440AE64828B15070F (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.SystemInfo::get_supportsComputeShaders()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SystemInfo_get_supportsComputeShaders_m4A029D2F8FB9343E65E6F1C6F1C79DA41911F13A (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.SystemInfo::get_supportsImageEffects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SystemInfo_get_supportsImageEffects_mA97A693C45A91780EE8E9F2802D6ED58841D52F0 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.SystemInfo::get_supportsRenderTextures()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SystemInfo_get_supportsRenderTextures_mAA77A17E5351772E7FE0E5A295448BA64131F105 (const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Camera>()
inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.DepthTextureMode UnityEngine.Camera::get_depthTextureMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Camera_get_depthTextureMode_m998CDEBC055FE2A910F3B650585ADE3E2BB141EE (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_depthTextureMode(UnityEngine.DepthTextureMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_depthTextureMode_mE722389E4DF8B3DF7F6100DB142E4DBAF698F6BF (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::set_active(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_active_m5EE8E2327EF9B306C1425014CC34C41A8384E7AB (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.GL::PushMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_PushMatrix_mB505DD9B224528266FCADC716A16343838105A09 (const RuntimeMethod* method) ;
// System.Void UnityEngine.GL::LoadOrtho()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_LoadOrtho_mE86AB2DBBC5C2BA67E7B743A2352E61C372CEADC (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Material::SetPass(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Material_SetPass_mBB03542DFF4FAEADFCED332009F9D61B6DED75FE (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, int32_t ___0_pass, const RuntimeMethod* method) ;
// System.Void UnityEngine.GL::Begin(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_Begin_m17A70A7A3C161D8A127C11BDC5FC393392AB70C7 (int32_t ___0_mode, const RuntimeMethod* method) ;
// System.Void UnityEngine.GL::TexCoord2(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_TexCoord2_mBD9A9E6D397F8669FAE40DA950AB1FD7D674D1FB (float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.GL::Vertex3(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_Vertex3_mEA9925548F447556F7899E69604B787EE57F6978 (float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Void UnityEngine.GL::End()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_End_m6CE9D562B738075125F901B1D5254520EC30AB36 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Material::get_passCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Material_get_passCount_m7BA071AFFA34DC3E49B56A16CB8B098566BDE765 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GL::PopMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_PopMatrix_mCE0D33302104D1168B6382136039E979E8C02855 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// System.Boolean UnityStandardAssets.ImageEffects.Quads::HasMeshes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Quads_HasMeshes_m41D66F9A795040CCB2219E1412C88C1C59729A04 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::CeilToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_CeilToInt_mF2BF9F4261B3431DC20E10A46CFEEED103C48963_inline (float ___0_f, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline (int32_t ___0_value, int32_t ___1_min, int32_t ___2_max, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline (float ___0_f, const RuntimeMethod* method) ;
// UnityEngine.Mesh UnityStandardAssets.ImageEffects.Quads::GetMesh(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* Quads_GetMesh_m3001DD2FCD94103FE9D38091C4BF006CCA25F44E (int32_t ___0_triCount, int32_t ___1_triOffset, int32_t ___2_totalWidth, int32_t ___3_totalHeight, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh__ctor_m5A9AECEDDAFFD84811ED8928012BDE97A9CEBD00 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_vertices(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_vertices_m5BB814D89E9ACA00DBF19F7D8E22CB73AC73FE5C (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_triangles(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_triangles_m124405320579A8D92711BB5A124644963A26F60B (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_uv(UnityEngine.Vector2[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_uv_m6ED9C50E0DA8166DD48AC40FD6C828B9AD2E9617 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_uv2(UnityEngine.Vector2[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_uv2_m37B442C04EBB029C0AD9545C54F95D9BDAD8E9B5 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) ;
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
// System.Void ButtonManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonManager_Awake_m566F14EA8635DB5B90C8A9A985EB0D8F12357450 (ButtonManager_tB4A98DF10074AA9CF8B331C8AB41A791E21A6AD8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ButtonManager_tB4A98DF10074AA9CF8B331C8AB41A791E21A6AD8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(inst == null)
		ButtonManager_tB4A98DF10074AA9CF8B331C8AB41A791E21A6AD8* L_0 = ((ButtonManager_tB4A98DF10074AA9CF8B331C8AB41A791E21A6AD8_StaticFields*)il2cpp_codegen_static_fields_for(ButtonManager_tB4A98DF10074AA9CF8B331C8AB41A791E21A6AD8_il2cpp_TypeInfo_var))->___inst_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// inst = this;
		((ButtonManager_tB4A98DF10074AA9CF8B331C8AB41A791E21A6AD8_StaticFields*)il2cpp_codegen_static_fields_for(ButtonManager_tB4A98DF10074AA9CF8B331C8AB41A791E21A6AD8_il2cpp_TypeInfo_var))->___inst_5 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((ButtonManager_tB4A98DF10074AA9CF8B331C8AB41A791E21A6AD8_StaticFields*)il2cpp_codegen_static_fields_for(ButtonManager_tB4A98DF10074AA9CF8B331C8AB41A791E21A6AD8_il2cpp_TypeInfo_var))->___inst_5), (void*)__this);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void ButtonManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonManager_Start_m1031E938A2FB8D85F993AA7DF29D06DAF0CDF930 (ButtonManager_tB4A98DF10074AA9CF8B331C8AB41A791E21A6AD8* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ButtonManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonManager_Update_m8A6A02F642A23DDDD0D1C1B1EB563E144AE12590 (ButtonManager_tB4A98DF10074AA9CF8B331C8AB41A791E21A6AD8* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ButtonManager::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonManager_Clear_m7BDFF65D56150A04B361AC330A9D8B77EEF9BB62 (ButtonManager_tB4A98DF10074AA9CF8B331C8AB41A791E21A6AD8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// foreach(GameObject button in ButtonList)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->___ButtonList_4;
		NullCheck(L_0);
		Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 L_1;
		L_1 = List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8(L_0, List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0026:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D((&V_0), Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_001b_1;
			}

IL_000e_1:
			{
				// foreach(GameObject button in ButtonList)
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
				L_2 = Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline((&V_0), Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
				// button.SetActive(false);
				NullCheck(L_2);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
			}

IL_001b_1:
			{
				// foreach(GameObject button in ButtonList)
				bool L_3;
				L_3 = Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27((&V_0), Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
				if (L_3)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0034;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0034:
	{
		// }
		return;
	}
}
// System.Void ButtonManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonManager__ctor_m7DBD91D2AF27494F6AC7DC74DE679919AB1DD71F (ButtonManager_tB4A98DF10074AA9CF8B331C8AB41A791E21A6AD8* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void DialogueSelector::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialogueSelector_Start_m64E9EFA94323D30A2BD7EE460DB3CDA80F03AC56 (DialogueSelector_tD9648F5653C499D620D150A3C317476A5A18F505* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void DialogueSelector::SelectDialogue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialogueSelector_SelectDialogue_mDE55116705252659F93931F72CC1591BFA4A3CFF (DialogueSelector_tD9648F5653C499D620D150A3C317476A5A18F505* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ButtonManager_tB4A98DF10074AA9CF8B331C8AB41A791E21A6AD8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FadeController_t53EFBD8B45AE4F610E5DFA9D5400E1F25B0DDFA4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextBoxContainer_t87E8E4C92A6CD91741EFAFDDB1901F24E606B049_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral020CAA13FFD86A6D41FC213799527088F9E6DEDC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral260F391428D3A5483782F6A79B50257B53F8B40A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral26A088B3C29953132F63D03BCD044C5F8910558F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C35D3874365C14043C0CF9A430201FEE2BAC852);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7B9AA48EBD94C7B3DAE7795923DB681F9B2534B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF6797CDA4F633ABAB5D36243C0B398324E2DDC88);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// switch (this.gameObject.name)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_0, NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteralF6797CDA4F633ABAB5D36243C0B398324E2DDC88, NULL);
		if (L_3)
		{
			goto IL_006a;
		}
	}
	{
		String_t* L_4 = V_0;
		bool L_5;
		L_5 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_4, _stringLiteral2C35D3874365C14043C0CF9A430201FEE2BAC852, NULL);
		if (L_5)
		{
			goto IL_00c1;
		}
	}
	{
		String_t* L_6 = V_0;
		bool L_7;
		L_7 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_6, _stringLiteral260F391428D3A5483782F6A79B50257B53F8B40A, NULL);
		if (L_7)
		{
			goto IL_00f6;
		}
	}
	{
		String_t* L_8 = V_0;
		bool L_9;
		L_9 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_8, _stringLiteral26A088B3C29953132F63D03BCD044C5F8910558F, NULL);
		if (L_9)
		{
			goto IL_014d;
		}
	}
	{
		String_t* L_10 = V_0;
		bool L_11;
		L_11 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_10, _stringLiteral020CAA13FFD86A6D41FC213799527088F9E6DEDC, NULL);
		if (L_11)
		{
			goto IL_0182;
		}
	}
	{
		String_t* L_12 = V_0;
		bool L_13;
		L_13 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_12, _stringLiteralA7B9AA48EBD94C7B3DAE7795923DB681F9B2534B, NULL);
		if (L_13)
		{
			goto IL_01b7;
		}
	}
	{
		return;
	}

IL_006a:
	{
		// ButtonManager.inst.Clear();
		ButtonManager_tB4A98DF10074AA9CF8B331C8AB41A791E21A6AD8* L_14 = ((ButtonManager_tB4A98DF10074AA9CF8B331C8AB41A791E21A6AD8_StaticFields*)il2cpp_codegen_static_fields_for(ButtonManager_tB4A98DF10074AA9CF8B331C8AB41A791E21A6AD8_il2cpp_TypeInfo_var))->___inst_5;
		NullCheck(L_14);
		ButtonManager_Clear_m7BDFF65D56150A04B361AC330A9D8B77EEF9BB62(L_14, NULL);
		// TextBoxContainer.inst.Clear();
		TextBoxContainer_t87E8E4C92A6CD91741EFAFDDB1901F24E606B049* L_15 = ((TextBoxContainer_t87E8E4C92A6CD91741EFAFDDB1901F24E606B049_StaticFields*)il2cpp_codegen_static_fields_for(TextBoxContainer_t87E8E4C92A6CD91741EFAFDDB1901F24E606B049_il2cpp_TypeInfo_var))->___inst_6;
		NullCheck(L_15);
		TextBoxContainer_Clear_mB89B9DC28287B84E3628393E7C6B41A7027F0F5D(L_15, NULL);
		// ButtonManager.inst.ButtonList[2].SetActive(true);
		ButtonManager_tB4A98DF10074AA9CF8B331C8AB41A791E21A6AD8* L_16 = ((ButtonManager_tB4A98DF10074AA9CF8B331C8AB41A791E21A6AD8_StaticFields*)il2cpp_codegen_static_fields_for(ButtonManager_tB4A98DF10074AA9CF8B331C8AB41A791E21A6AD8_il2cpp_TypeInfo_var))->___inst_5;
		NullCheck(L_16);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_17 = L_16->___ButtonList_4;
		NullCheck(L_17);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18;
		L_18 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_17, 2, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_18);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_18, (bool)1, NULL);
		// ButtonManager.inst.ButtonList[3].SetActive(true);
		ButtonManager_tB4A98DF10074AA9CF8B331C8AB41A791E21A6AD8* L_19 = ((ButtonManager_tB4A98DF10074AA9CF8B331C8AB41A791E21A6AD8_StaticFields*)il2cpp_codegen_static_fields_for(ButtonManager_tB4A98DF10074AA9CF8B331C8AB41A791E21A6AD8_il2cpp_TypeInfo_var))->___inst_5;
		NullCheck(L_19);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_20 = L_19->___ButtonList_4;
		NullCheck(L_20);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21;
		L_21 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_20, 3, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_21);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_21, (bool)1, NULL);
		// TextBoxContainer.inst.TextBoxes[1].SetActive(true);
		TextBoxContainer_t87E8E4C92A6CD91741EFAFDDB1901F24E606B049* L_22 = ((TextBoxContainer_t87E8E4C92A6CD91741EFAFDDB1901F24E606B049_StaticFields*)il2cpp_codegen_static_fields_for(TextBoxContainer_t87E8E4C92A6CD91741EFAFDDB1901F24E606B049_il2cpp_TypeInfo_var))->___inst_6;
		NullCheck(L_22);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_23 = L_22->___TextBoxes_4;
		NullCheck(L_23);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24;
		L_24 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_23, 1, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_24);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_24, (bool)1, NULL);
		// break;
		return;
	}

IL_00c1:
	{
		// ButtonManager.inst.Clear();
		ButtonManager_tB4A98DF10074AA9CF8B331C8AB41A791E21A6AD8* L_25 = ((ButtonManager_tB4A98DF10074AA9CF8B331C8AB41A791E21A6AD8_StaticFields*)il2cpp_codegen_static_fields_for(ButtonManager_tB4A98DF10074AA9CF8B331C8AB41A791E21A6AD8_il2cpp_TypeInfo_var))->___inst_5;
		NullCheck(L_25);
		ButtonManager_Clear_m7BDFF65D56150A04B361AC330A9D8B77EEF9BB62(L_25, NULL);
		// TextBoxContainer.inst.Clear();
		TextBoxContainer_t87E8E4C92A6CD91741EFAFDDB1901F24E606B049* L_26 = ((TextBoxContainer_t87E8E4C92A6CD91741EFAFDDB1901F24E606B049_StaticFields*)il2cpp_codegen_static_fields_for(TextBoxContainer_t87E8E4C92A6CD91741EFAFDDB1901F24E606B049_il2cpp_TypeInfo_var))->___inst_6;
		NullCheck(L_26);
		TextBoxContainer_Clear_mB89B9DC28287B84E3628393E7C6B41A7027F0F5D(L_26, NULL);
		// TextBoxContainer.inst.TextBoxes[5].SetActive(true);
		TextBoxContainer_t87E8E4C92A6CD91741EFAFDDB1901F24E606B049* L_27 = ((TextBoxContainer_t87E8E4C92A6CD91741EFAFDDB1901F24E606B049_StaticFields*)il2cpp_codegen_static_fields_for(TextBoxContainer_t87E8E4C92A6CD91741EFAFDDB1901F24E606B049_il2cpp_TypeInfo_var))->___inst_6;
		NullCheck(L_27);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_28 = L_27->___TextBoxes_4;
		NullCheck(L_28);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29;
		L_29 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_28, 5, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_29);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_29, (bool)1, NULL);
		// TextBoxContainer.inst.LoseCon();
		TextBoxContainer_t87E8E4C92A6CD91741EFAFDDB1901F24E606B049* L_30 = ((TextBoxContainer_t87E8E4C92A6CD91741EFAFDDB1901F24E606B049_StaticFields*)il2cpp_codegen_static_fields_for(TextBoxContainer_t87E8E4C92A6CD91741EFAFDDB1901F24E606B049_il2cpp_TypeInfo_var))->___inst_6;
		NullCheck(L_30);
		TextBoxContainer_LoseCon_m5D493C1AF0B0455B95384EE11D0C351B1EDA45B4(L_30, NULL);
		// break;
		return;
	}

IL_00f6:
	{
		// ButtonManager.inst.Clear();
		ButtonManager_tB4A98DF10074AA9CF8B331C8AB41A791E21A6AD8* L_31 = ((ButtonManager_tB4A98DF10074AA9CF8B331C8AB41A791E21A6AD8_StaticFields*)il2cpp_codegen_static_fields_for(ButtonManager_tB4A98DF10074AA9CF8B331C8AB41A791E21A6AD8_il2cpp_TypeInfo_var))->___inst_5;
		NullCheck(L_31);
		ButtonManager_Clear_m7BDFF65D56150A04B361AC330A9D8B77EEF9BB62(L_31, NULL);
		// TextBoxContainer.inst.Clear();
		TextBoxContainer_t87E8E4C92A6CD91741EFAFDDB1901F24E606B049* L_32 = ((TextBoxContainer_t87E8E4C92A6CD91741EFAFDDB1901F24E606B049_StaticFields*)il2cpp_codegen_static_fields_for(TextBoxContainer_t87E8E4C92A6CD91741EFAFDDB1901F24E606B049_il2cpp_TypeInfo_var))->___inst_6;
		NullCheck(L_32);
		TextBoxContainer_Clear_mB89B9DC28287B84E3628393E7C6B41A7027F0F5D(L_32, NULL);
		// ButtonManager.inst.ButtonList[4].SetActive(true);
		ButtonManager_tB4A98DF10074AA9CF8B331C8AB41A791E21A6AD8* L_33 = ((ButtonManager_tB4A98DF10074AA9CF8B331C8AB41A791E21A6AD8_StaticFields*)il2cpp_codegen_static_fields_for(ButtonManager_tB4A98DF10074AA9CF8B331C8AB41A791E21A6AD8_il2cpp_TypeInfo_var))->___inst_5;
		NullCheck(L_33);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_34 = L_33->___ButtonList_4;
		NullCheck(L_34);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35;
		L_35 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_34, 4, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_35);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_35, (bool)1, NULL);
		// ButtonManager.inst.ButtonList[5].SetActive(true);
		ButtonManager_tB4A98DF10074AA9CF8B331C8AB41A791E21A6AD8* L_36 = ((ButtonManager_tB4A98DF10074AA9CF8B331C8AB41A791E21A6AD8_StaticFields*)il2cpp_codegen_static_fields_for(ButtonManager_tB4A98DF10074AA9CF8B331C8AB41A791E21A6AD8_il2cpp_TypeInfo_var))->___inst_5;
		NullCheck(L_36);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_37 = L_36->___ButtonList_4;
		NullCheck(L_37);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_38;
		L_38 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_37, 5, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_38);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_38, (bool)1, NULL);
		// TextBoxContainer.inst.TextBoxes[1].SetActive(true);
		TextBoxContainer_t87E8E4C92A6CD91741EFAFDDB1901F24E606B049* L_39 = ((TextBoxContainer_t87E8E4C92A6CD91741EFAFDDB1901F24E606B049_StaticFields*)il2cpp_codegen_static_fields_for(TextBoxContainer_t87E8E4C92A6CD91741EFAFDDB1901F24E606B049_il2cpp_TypeInfo_var))->___inst_6;
		NullCheck(L_39);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_40 = L_39->___TextBoxes_4;
		NullCheck(L_40);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_41;
		L_41 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_40, 1, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_41);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_41, (bool)1, NULL);
		// break;
		return;
	}

IL_014d:
	{
		// ButtonManager.inst.Clear();
		ButtonManager_tB4A98DF10074AA9CF8B331C8AB41A791E21A6AD8* L_42 = ((ButtonManager_tB4A98DF10074AA9CF8B331C8AB41A791E21A6AD8_StaticFields*)il2cpp_codegen_static_fields_for(ButtonManager_tB4A98DF10074AA9CF8B331C8AB41A791E21A6AD8_il2cpp_TypeInfo_var))->___inst_5;
		NullCheck(L_42);
		ButtonManager_Clear_m7BDFF65D56150A04B361AC330A9D8B77EEF9BB62(L_42, NULL);
		// TextBoxContainer.inst.Clear();
		TextBoxContainer_t87E8E4C92A6CD91741EFAFDDB1901F24E606B049* L_43 = ((TextBoxContainer_t87E8E4C92A6CD91741EFAFDDB1901F24E606B049_StaticFields*)il2cpp_codegen_static_fields_for(TextBoxContainer_t87E8E4C92A6CD91741EFAFDDB1901F24E606B049_il2cpp_TypeInfo_var))->___inst_6;
		NullCheck(L_43);
		TextBoxContainer_Clear_mB89B9DC28287B84E3628393E7C6B41A7027F0F5D(L_43, NULL);
		// TextBoxContainer.inst.TextBoxes[5].SetActive(true);
		TextBoxContainer_t87E8E4C92A6CD91741EFAFDDB1901F24E606B049* L_44 = ((TextBoxContainer_t87E8E4C92A6CD91741EFAFDDB1901F24E606B049_StaticFields*)il2cpp_codegen_static_fields_for(TextBoxContainer_t87E8E4C92A6CD91741EFAFDDB1901F24E606B049_il2cpp_TypeInfo_var))->___inst_6;
		NullCheck(L_44);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_45 = L_44->___TextBoxes_4;
		NullCheck(L_45);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_46;
		L_46 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_45, 5, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_46);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_46, (bool)1, NULL);
		// TextBoxContainer.inst.LoseCon();
		TextBoxContainer_t87E8E4C92A6CD91741EFAFDDB1901F24E606B049* L_47 = ((TextBoxContainer_t87E8E4C92A6CD91741EFAFDDB1901F24E606B049_StaticFields*)il2cpp_codegen_static_fields_for(TextBoxContainer_t87E8E4C92A6CD91741EFAFDDB1901F24E606B049_il2cpp_TypeInfo_var))->___inst_6;
		NullCheck(L_47);
		TextBoxContainer_LoseCon_m5D493C1AF0B0455B95384EE11D0C351B1EDA45B4(L_47, NULL);
		// break;
		return;
	}

IL_0182:
	{
		// ButtonManager.inst.Clear();
		ButtonManager_tB4A98DF10074AA9CF8B331C8AB41A791E21A6AD8* L_48 = ((ButtonManager_tB4A98DF10074AA9CF8B331C8AB41A791E21A6AD8_StaticFields*)il2cpp_codegen_static_fields_for(ButtonManager_tB4A98DF10074AA9CF8B331C8AB41A791E21A6AD8_il2cpp_TypeInfo_var))->___inst_5;
		NullCheck(L_48);
		ButtonManager_Clear_m7BDFF65D56150A04B361AC330A9D8B77EEF9BB62(L_48, NULL);
		// TextBoxContainer.inst.Clear();
		TextBoxContainer_t87E8E4C92A6CD91741EFAFDDB1901F24E606B049* L_49 = ((TextBoxContainer_t87E8E4C92A6CD91741EFAFDDB1901F24E606B049_StaticFields*)il2cpp_codegen_static_fields_for(TextBoxContainer_t87E8E4C92A6CD91741EFAFDDB1901F24E606B049_il2cpp_TypeInfo_var))->___inst_6;
		NullCheck(L_49);
		TextBoxContainer_Clear_mB89B9DC28287B84E3628393E7C6B41A7027F0F5D(L_49, NULL);
		// TextBoxContainer.inst.TextBoxes[5].SetActive(true);
		TextBoxContainer_t87E8E4C92A6CD91741EFAFDDB1901F24E606B049* L_50 = ((TextBoxContainer_t87E8E4C92A6CD91741EFAFDDB1901F24E606B049_StaticFields*)il2cpp_codegen_static_fields_for(TextBoxContainer_t87E8E4C92A6CD91741EFAFDDB1901F24E606B049_il2cpp_TypeInfo_var))->___inst_6;
		NullCheck(L_50);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_51 = L_50->___TextBoxes_4;
		NullCheck(L_51);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_52;
		L_52 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_51, 5, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_52);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_52, (bool)1, NULL);
		// TextBoxContainer.inst.LoseCon();
		TextBoxContainer_t87E8E4C92A6CD91741EFAFDDB1901F24E606B049* L_53 = ((TextBoxContainer_t87E8E4C92A6CD91741EFAFDDB1901F24E606B049_StaticFields*)il2cpp_codegen_static_fields_for(TextBoxContainer_t87E8E4C92A6CD91741EFAFDDB1901F24E606B049_il2cpp_TypeInfo_var))->___inst_6;
		NullCheck(L_53);
		TextBoxContainer_LoseCon_m5D493C1AF0B0455B95384EE11D0C351B1EDA45B4(L_53, NULL);
		// break;
		return;
	}

IL_01b7:
	{
		// ButtonManager.inst.Clear();
		ButtonManager_tB4A98DF10074AA9CF8B331C8AB41A791E21A6AD8* L_54 = ((ButtonManager_tB4A98DF10074AA9CF8B331C8AB41A791E21A6AD8_StaticFields*)il2cpp_codegen_static_fields_for(ButtonManager_tB4A98DF10074AA9CF8B331C8AB41A791E21A6AD8_il2cpp_TypeInfo_var))->___inst_5;
		NullCheck(L_54);
		ButtonManager_Clear_m7BDFF65D56150A04B361AC330A9D8B77EEF9BB62(L_54, NULL);
		// TextBoxContainer.inst.Clear();
		TextBoxContainer_t87E8E4C92A6CD91741EFAFDDB1901F24E606B049* L_55 = ((TextBoxContainer_t87E8E4C92A6CD91741EFAFDDB1901F24E606B049_StaticFields*)il2cpp_codegen_static_fields_for(TextBoxContainer_t87E8E4C92A6CD91741EFAFDDB1901F24E606B049_il2cpp_TypeInfo_var))->___inst_6;
		NullCheck(L_55);
		TextBoxContainer_Clear_mB89B9DC28287B84E3628393E7C6B41A7027F0F5D(L_55, NULL);
		// TextBoxContainer.inst.TextBoxes[3].SetActive(true);
		TextBoxContainer_t87E8E4C92A6CD91741EFAFDDB1901F24E606B049* L_56 = ((TextBoxContainer_t87E8E4C92A6CD91741EFAFDDB1901F24E606B049_StaticFields*)il2cpp_codegen_static_fields_for(TextBoxContainer_t87E8E4C92A6CD91741EFAFDDB1901F24E606B049_il2cpp_TypeInfo_var))->___inst_6;
		NullCheck(L_56);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_57 = L_56->___TextBoxes_4;
		NullCheck(L_57);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_58;
		L_58 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_57, 3, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_58);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_58, (bool)1, NULL);
		// FadeController.inst.fadeObject.SetActive(true);
		FadeController_t53EFBD8B45AE4F610E5DFA9D5400E1F25B0DDFA4* L_59 = ((FadeController_t53EFBD8B45AE4F610E5DFA9D5400E1F25B0DDFA4_StaticFields*)il2cpp_codegen_static_fields_for(FadeController_t53EFBD8B45AE4F610E5DFA9D5400E1F25B0DDFA4_il2cpp_TypeInfo_var))->___inst_4;
		NullCheck(L_59);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_60 = L_59->___fadeObject_5;
		NullCheck(L_60);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_60, (bool)1, NULL);
		// TextBoxContainer.inst.WinCon();
		TextBoxContainer_t87E8E4C92A6CD91741EFAFDDB1901F24E606B049* L_61 = ((TextBoxContainer_t87E8E4C92A6CD91741EFAFDDB1901F24E606B049_StaticFields*)il2cpp_codegen_static_fields_for(TextBoxContainer_t87E8E4C92A6CD91741EFAFDDB1901F24E606B049_il2cpp_TypeInfo_var))->___inst_6;
		NullCheck(L_61);
		TextBoxContainer_WinCon_mA5A4C09C3A4B89000640C73B862C7D83674B19BB(L_61, NULL);
		// }
		return;
	}
}
// System.Void DialogueSelector::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialogueSelector__ctor_m7AE26A10EFDEB6625900F1EEBEEC643E0A11A6B6 (DialogueSelector_tD9648F5653C499D620D150A3C317476A5A18F505* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void FadeController::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FadeController_Awake_mE4216E6DD4855D0544DBB34B6ADBE9D4ABADD90D (FadeController_t53EFBD8B45AE4F610E5DFA9D5400E1F25B0DDFA4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FadeController_t53EFBD8B45AE4F610E5DFA9D5400E1F25B0DDFA4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// inst = this;
		((FadeController_t53EFBD8B45AE4F610E5DFA9D5400E1F25B0DDFA4_StaticFields*)il2cpp_codegen_static_fields_for(FadeController_t53EFBD8B45AE4F610E5DFA9D5400E1F25B0DDFA4_il2cpp_TypeInfo_var))->___inst_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((FadeController_t53EFBD8B45AE4F610E5DFA9D5400E1F25B0DDFA4_StaticFields*)il2cpp_codegen_static_fields_for(FadeController_t53EFBD8B45AE4F610E5DFA9D5400E1F25B0DDFA4_il2cpp_TypeInfo_var))->___inst_4), (void*)__this);
		// }
		return;
	}
}
// System.Void FadeController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FadeController_Start_mCA32CFD038FCB2D3814BA4D616D73C05245C0F46 (FadeController_t53EFBD8B45AE4F610E5DFA9D5400E1F25B0DDFA4* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void FadeController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FadeController_Update_m2116CBCD99AD6C44F3EFCB1B014C95580B90B59C (FadeController_t53EFBD8B45AE4F610E5DFA9D5400E1F25B0DDFA4* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void FadeController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FadeController__ctor_mBE5E27BF934D7B2B443EA8B726A094239D4F3D12 (FadeController_t53EFBD8B45AE4F610E5DFA9D5400E1F25B0DDFA4* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void FadeControl::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FadeControl_Start_m7C1903FC53E169A9DE880F572F76D91A746EC8A7 (FadeControl_t0B96F8AAD2727757FE013E7DD3078D7C09C27FFB* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void FadeControl::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FadeControl_Update_m84DA3585C5B8CED538194CB1BDFE61DA00286BCA (FadeControl_t0B96F8AAD2727757FE013E7DD3078D7C09C27FFB* __this, const RuntimeMethod* method) 
{
	{
		// if (Input.GetKeyDown(KeyCode.Space))
		bool L_0;
		L_0 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)32), NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// fadeEffect.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___fadeEffect_4;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
	}

IL_0015:
	{
		// }
		return;
	}
}
// System.Void FadeControl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FadeControl__ctor_m861457126C85198C41368BF4217D75263ADCB2A1 (FadeControl_t0B96F8AAD2727757FE013E7DD3078D7C09C27FFB* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void GDTFadeEffect::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GDTFadeEffect_OnEnable_m22A4648F67DE85248CBF033285D3AB7830D7B1F4 (GDTFadeEffect_t2B494CFB442DA676DD94076E4A2D2B586A0913BC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral906165F1644FCE4F0F2AC919D67FB77D0D17FFA3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// halfCycle = false;
		__this->___halfCycle_19 = (bool)0;
		// speed = 1 / timeEffect;
		float L_0 = __this->___timeEffect_7;
		__this->___speed_14 = ((float)((1.0f)/L_0));
		// goingToLast = firstToLast;
		bool L_1 = __this->___firstToLast_9;
		__this->___goingToLast_20 = L_1;
		// if (blackImage == null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2 = __this->___blackImage_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_003f;
		}
	}
	{
		// blackImage = GetComponent<Image>();
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4;
		L_4 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(__this, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		__this->___blackImage_15 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___blackImage_15), (void*)L_4);
	}

IL_003f:
	{
		// if (firstToLast)
		bool L_5 = __this->___firstToLast_9;
		if (!L_5)
		{
			goto IL_0065;
		}
	}
	{
		// currentValue = 0f;
		__this->___currentValue_16 = (0.0f);
		// blackImage.color = firstColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_6 = __this->___blackImage_15;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7 = __this->___firstColor_5;
		NullCheck(L_6);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_6, L_7);
		goto IL_0081;
	}

IL_0065:
	{
		// currentValue = 1f;
		__this->___currentValue_16 = (1.0f);
		// blackImage.color = lastColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_8 = __this->___blackImage_15;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = __this->___lastColor_6;
		NullCheck(L_8);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_8, L_9);
	}

IL_0081:
	{
		// if (playOnAwake)
		bool L_10 = __this->___playOnAwake_4;
		if (!L_10)
		{
			goto IL_00a2;
		}
	}
	{
		// if (!performEffect)
		bool L_11 = __this->___performEffect_17;
		if (L_11)
		{
			goto IL_00a2;
		}
	}
	{
		// Invoke("StartEffect", initialDelay);
		float L_12 = __this->___initialDelay_8;
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteral906165F1644FCE4F0F2AC919D67FB77D0D17FFA3, L_12, NULL);
	}

IL_00a2:
	{
		// }
		return;
	}
}
// System.Void GDTFadeEffect::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GDTFadeEffect_FixedUpdate_m1DC6F44E465D628AC38030D6DBDA19C42138EAD2 (GDTFadeEffect_t2B494CFB442DA676DD94076E4A2D2B586A0913BC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA84A1CB676179E14FE5DCECD5E4F72C8129545CB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralECAC9756AB416770CE66B9411AB7AEB8B8181309);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (performEffect)
		bool L_0 = __this->___performEffect_17;
		if (!L_0)
		{
			goto IL_00ff;
		}
	}
	{
		// if (pingPong)
		bool L_1 = __this->___pingPong_10;
		if (!L_1)
		{
			goto IL_008d;
		}
	}
	{
		// if (!halfCycle)
		bool L_2 = __this->___halfCycle_19;
		if (L_2)
		{
			goto IL_005c;
		}
	}
	{
		// if (goingToLast)
		bool L_3 = __this->___goingToLast_20;
		if (!L_3)
		{
			goto IL_0041;
		}
	}
	{
		// if (PerformFadeIn())
		bool L_4;
		L_4 = GDTFadeEffect_PerformFadeIn_m5C8F32C12FFE1579659E6CEC6084FB438FC90F7B(__this, NULL);
		if (!L_4)
		{
			goto IL_00b5;
		}
	}
	{
		// Invoke("HalfCycleDelay", pingPongDelay);
		float L_5 = __this->___pingPongDelay_11;
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteralA84A1CB676179E14FE5DCECD5E4F72C8129545CB, L_5, NULL);
		goto IL_00b5;
	}

IL_0041:
	{
		// if (PerformFadeOut())
		bool L_6;
		L_6 = GDTFadeEffect_PerformFadeOut_m7D83621B14F24D38FCB9C78AD00F69EF2E73116E(__this, NULL);
		if (!L_6)
		{
			goto IL_00b5;
		}
	}
	{
		// Invoke("HalfCycleDelay", pingPongDelay);
		float L_7 = __this->___pingPongDelay_11;
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteralA84A1CB676179E14FE5DCECD5E4F72C8129545CB, L_7, NULL);
		goto IL_00b5;
	}

IL_005c:
	{
		// if (goingToLast)
		bool L_8 = __this->___goingToLast_20;
		if (!L_8)
		{
			goto IL_007c;
		}
	}
	{
		// if (PerformFadeIn())
		bool L_9;
		L_9 = GDTFadeEffect_PerformFadeIn_m5C8F32C12FFE1579659E6CEC6084FB438FC90F7B(__this, NULL);
		if (!L_9)
		{
			goto IL_00b5;
		}
	}
	{
		// performEffect = false;
		__this->___performEffect_17 = (bool)0;
		// finished = true;
		__this->___finished_18 = (bool)1;
		goto IL_00b5;
	}

IL_007c:
	{
		// if (PerformFadeOut())
		bool L_10;
		L_10 = GDTFadeEffect_PerformFadeOut_m7D83621B14F24D38FCB9C78AD00F69EF2E73116E(__this, NULL);
		if (!L_10)
		{
			goto IL_00b5;
		}
	}
	{
		// finished = true;
		__this->___finished_18 = (bool)1;
		goto IL_00b5;
	}

IL_008d:
	{
		// if (goingToLast)
		bool L_11 = __this->___goingToLast_20;
		if (!L_11)
		{
			goto IL_00a6;
		}
	}
	{
		// if (PerformFadeIn())
		bool L_12;
		L_12 = GDTFadeEffect_PerformFadeIn_m5C8F32C12FFE1579659E6CEC6084FB438FC90F7B(__this, NULL);
		if (!L_12)
		{
			goto IL_00b5;
		}
	}
	{
		// finished = true;
		__this->___finished_18 = (bool)1;
		goto IL_00b5;
	}

IL_00a6:
	{
		// if (PerformFadeOut())
		bool L_13;
		L_13 = GDTFadeEffect_PerformFadeOut_m7D83621B14F24D38FCB9C78AD00F69EF2E73116E(__this, NULL);
		if (!L_13)
		{
			goto IL_00b5;
		}
	}
	{
		// finished = true;
		__this->___finished_18 = (bool)1;
	}

IL_00b5:
	{
		// blackImage.color = Color.Lerp(firstColor, lastColor, currentValue);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_14 = __this->___blackImage_15;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_15 = __this->___firstColor_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16 = __this->___lastColor_6;
		float L_17 = __this->___currentValue_16;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18;
		L_18 = Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline(L_15, L_16, L_17, NULL);
		NullCheck(L_14);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_14, L_18);
		// if (finished)
		bool L_19 = __this->___finished_18;
		if (!L_19)
		{
			goto IL_00ff;
		}
	}
	{
		// performEffect = false;
		__this->___performEffect_17 = (bool)0;
		// if (disableWhenFinish)
		bool L_20 = __this->___disableWhenFinish_12;
		if (!L_20)
		{
			goto IL_00ff;
		}
	}
	{
		// Invoke("Disable", disableDelay);
		float L_21 = __this->___disableDelay_13;
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteralECAC9756AB416770CE66B9411AB7AEB8B8181309, L_21, NULL);
	}

IL_00ff:
	{
		// }
		return;
	}
}
// System.Boolean GDTFadeEffect::PerformFadeIn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GDTFadeEffect_PerformFadeIn_m5C8F32C12FFE1579659E6CEC6084FB438FC90F7B (GDTFadeEffect_t2B494CFB442DA676DD94076E4A2D2B586A0913BC* __this, const RuntimeMethod* method) 
{
	{
		// if (currentValue != 1f)
		float L_0 = __this->___currentValue_16;
		if ((((float)L_0) == ((float)(1.0f))))
		{
			goto IL_0040;
		}
	}
	{
		// currentValue += speed * Time.deltaTime;
		float L_1 = __this->___currentValue_16;
		float L_2 = __this->___speed_14;
		float L_3;
		L_3 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___currentValue_16 = ((float)il2cpp_codegen_add(L_1, ((float)il2cpp_codegen_multiply(L_2, L_3))));
		// if (currentValue > 1f)
		float L_4 = __this->___currentValue_16;
		if ((!(((float)L_4) > ((float)(1.0f)))))
		{
			goto IL_0040;
		}
	}
	{
		// currentValue = 1f;
		__this->___currentValue_16 = (1.0f);
		// return true;
		return (bool)1;
	}

IL_0040:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean GDTFadeEffect::PerformFadeOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GDTFadeEffect_PerformFadeOut_m7D83621B14F24D38FCB9C78AD00F69EF2E73116E (GDTFadeEffect_t2B494CFB442DA676DD94076E4A2D2B586A0913BC* __this, const RuntimeMethod* method) 
{
	{
		// if (currentValue != 0f)
		float L_0 = __this->___currentValue_16;
		if ((((float)L_0) == ((float)(0.0f))))
		{
			goto IL_0040;
		}
	}
	{
		// currentValue -= speed * Time.deltaTime;
		float L_1 = __this->___currentValue_16;
		float L_2 = __this->___speed_14;
		float L_3;
		L_3 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___currentValue_16 = ((float)il2cpp_codegen_subtract(L_1, ((float)il2cpp_codegen_multiply(L_2, L_3))));
		// if (currentValue < 0f)
		float L_4 = __this->___currentValue_16;
		if ((!(((float)L_4) < ((float)(0.0f)))))
		{
			goto IL_0040;
		}
	}
	{
		// currentValue = 0f;
		__this->___currentValue_16 = (0.0f);
		// return true;
		return (bool)1;
	}

IL_0040:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void GDTFadeEffect::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GDTFadeEffect_Disable_mDE7A2D74213B8B4AB2A2F037B7572B1E480C420D (GDTFadeEffect_t2B494CFB442DA676DD94076E4A2D2B586A0913BC* __this, const RuntimeMethod* method) 
{
	{
		// gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void GDTFadeEffect::HalfCycleDelay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GDTFadeEffect_HalfCycleDelay_m9CFE8F6975AA156EF2F13E7CBA2868505113C042 (GDTFadeEffect_t2B494CFB442DA676DD94076E4A2D2B586A0913BC* __this, const RuntimeMethod* method) 
{
	{
		// halfCycle = true;
		__this->___halfCycle_19 = (bool)1;
		// goingToLast = !goingToLast;
		bool L_0 = __this->___goingToLast_20;
		__this->___goingToLast_20 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		// }
		return;
	}
}
// System.Boolean GDTFadeEffect::HasFinished()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GDTFadeEffect_HasFinished_mEEDC76394A1DEC8D254A3E54025AF80FD3EB5D6B (GDTFadeEffect_t2B494CFB442DA676DD94076E4A2D2B586A0913BC* __this, const RuntimeMethod* method) 
{
	{
		// return performEffect;
		bool L_0 = __this->___performEffect_17;
		return L_0;
	}
}
// System.Boolean GDTFadeEffect::IsPingPongInHalfCycle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GDTFadeEffect_IsPingPongInHalfCycle_m922B513B6B48D2DD779AA719601C0005B8E1C637 (GDTFadeEffect_t2B494CFB442DA676DD94076E4A2D2B586A0913BC* __this, const RuntimeMethod* method) 
{
	{
		// return halfCycle;
		bool L_0 = __this->___halfCycle_19;
		return L_0;
	}
}
// System.Void GDTFadeEffect::StartEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GDTFadeEffect_StartEffect_mF169FC75C1B99131DCD801170D3CD602EB4FEE64 (GDTFadeEffect_t2B494CFB442DA676DD94076E4A2D2B586A0913BC* __this, const RuntimeMethod* method) 
{
	{
		// performEffect = true;
		__this->___performEffect_17 = (bool)1;
		// finished = false;
		__this->___finished_18 = (bool)0;
		// }
		return;
	}
}
// System.Void GDTFadeEffect::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GDTFadeEffect__ctor_mEE3ABD274B24B550CB05797AB717B911BBB764AD (GDTFadeEffect_t2B494CFB442DA676DD94076E4A2D2B586A0913BC* __this, const RuntimeMethod* method) 
{
	{
		// public bool playOnAwake = true;
		__this->___playOnAwake_4 = (bool)1;
		// public bool firstToLast=true;
		__this->___firstToLast_9 = (bool)1;
		// public bool disableWhenFinish=true;
		__this->___disableWhenFinish_12 = (bool)1;
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
// System.Void MainMenuButtons::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuButtons_Start_m37B15DF1318965104B7F854B9BE78BF7C6AFC467 (MainMenuButtons_tB02072ED221924527F9F7BA36959734AF3B68D3F* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void MainMenuButtons::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuButtons_Update_m3DF5D63B209C451BC0AB5F1001D3782D20E7DE64 (MainMenuButtons_tB02072ED221924527F9F7BA36959734AF3B68D3F* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void MainMenuButtons::LoadGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuButtons_LoadGame_m889B4B0125081D0B13302C5547B794F2F4D1C336 (MainMenuButtons_tB02072ED221924527F9F7BA36959734AF3B68D3F* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void MainMenuButtons::StartGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuButtons_StartGame_m564BC5344A568FB64DFA97AC19A1B42EFDBCA1B1 (MainMenuButtons_tB02072ED221924527F9F7BA36959734AF3B68D3F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral797BC20C9E73CA9A4F4A37A04BB2102DEB6E6CAC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("DemoScene");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral797BC20C9E73CA9A4F4A37A04BB2102DEB6E6CAC, NULL);
		// }
		return;
	}
}
// System.Void MainMenuButtons::QuitGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuButtons_QuitGame_m34D279F74D25648F1A9D53D03F5F97C39B3B8D85 (MainMenuButtons_tB02072ED221924527F9F7BA36959734AF3B68D3F* __this, const RuntimeMethod* method) 
{
	{
		// Application.Quit();
		Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281(NULL);
		// }
		return;
	}
}
// System.Void MainMenuButtons::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuButtons__ctor_m7C5D70A6EBC72E65E886BAE71870CED35702CC09 (MainMenuButtons_tB02072ED221924527F9F7BA36959734AF3B68D3F* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void SceneSelector::LoadLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneSelector_LoadLevel_m2CD69E468ECF216B8F26D7824EEC7A4FFE0BBE55 (SceneSelector_tE51731A7E84DFAC7C7326F61E8527E39B84613B3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral015403F6CF8DE1AADAACF0260F1E61ADDBA3FDDD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B79BF2E9E8E0DCA12BB1A54C81DF6AF59DF2B10);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral62546C82B8A3115DF36A620C80FACDBA7384A8CB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6690D47161AD994D7444F97612BB1398972AD010);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral743FF3E9303AAA51ED2B08516D6CDD1C0AE91839);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral887E9B6AF7604BCDC57F8FC1D0E3043AC03E564D);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// switch(this.gameObject.name)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_0, NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteral6690D47161AD994D7444F97612BB1398972AD010, NULL);
		if (L_3)
		{
			goto IL_0034;
		}
	}
	{
		String_t* L_4 = V_0;
		bool L_5;
		L_5 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_4, _stringLiteral887E9B6AF7604BCDC57F8FC1D0E3043AC03E564D, NULL);
		if (L_5)
		{
			goto IL_003f;
		}
	}
	{
		String_t* L_6 = V_0;
		bool L_7;
		L_7 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_6, _stringLiteral743FF3E9303AAA51ED2B08516D6CDD1C0AE91839, NULL);
		if (L_7)
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0034:
	{
		// SceneManager.LoadScene("FriendScene1");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral015403F6CF8DE1AADAACF0260F1E61ADDBA3FDDD, NULL);
		// break;
		return;
	}

IL_003f:
	{
		// SceneManager.LoadScene("FriendScene2");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral62546C82B8A3115DF36A620C80FACDBA7384A8CB, NULL);
		// break;
		return;
	}

IL_004a:
	{
		// SceneManager.LoadScene("FriendScene3");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral4B79BF2E9E8E0DCA12BB1A54C81DF6AF59DF2B10, NULL);
		// }
		return;
	}
}
// System.Void SceneSelector::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneSelector__ctor_mCCC671D1CF51A325750C6AE7E6F80D66023F5EE3 (SceneSelector_tE51731A7E84DFAC7C7326F61E8527E39B84613B3* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void SoundManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_Start_m114BCC9E38EB73FB08543ABE6B95FFA5756D7AF7 (SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral963B75D56FACFB9CB8B20F6F310BF75BF77893C0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(!PlayerPrefs.HasKey("musicVolume"))
		bool L_0;
		L_0 = PlayerPrefs_HasKey_mCA5C64BBA6BF8B230BC3BC92B4761DD3B11D4668(_stringLiteral963B75D56FACFB9CB8B20F6F310BF75BF77893C0, NULL);
		if (L_0)
		{
			goto IL_0022;
		}
	}
	{
		// PlayerPrefs.SetFloat("musicVolume", 1);
		PlayerPrefs_SetFloat_m1E8EA662BB9D8CF339D7DA2C452FCDFED88C5285(_stringLiteral963B75D56FACFB9CB8B20F6F310BF75BF77893C0, (1.0f), NULL);
		// Load();
		SoundManager_Load_m81C4ED23078B900527F751415116163FB375C443(__this, NULL);
		return;
	}

IL_0022:
	{
		// Load();
		SoundManager_Load_m81C4ED23078B900527F751415116163FB375C443(__this, NULL);
		// }
		return;
	}
}
// System.Void SoundManager::ChangeVolume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_ChangeVolume_mE21FD36EB515F0CCC486B62E073CA13306588BC2 (SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* __this, const RuntimeMethod* method) 
{
	{
		// AudioListener.volume = volumeSlider.value;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = __this->___volumeSlider_4;
		NullCheck(L_0);
		float L_1;
		L_1 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_0);
		AudioListener_set_volume_m72BAF2D558A5449091A59630EBF48095DEB4C721(L_1, NULL);
		// Save();
		SoundManager_Save_m0C2FF8C3046ECE947DC82897C490B3B95E94ED25(__this, NULL);
		// }
		return;
	}
}
// System.Void SoundManager::Load()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_Load_m81C4ED23078B900527F751415116163FB375C443 (SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral963B75D56FACFB9CB8B20F6F310BF75BF77893C0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// volumeSlider.value = PlayerPrefs.GetFloat("musicVolume");
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = __this->___volumeSlider_4;
		float L_1;
		L_1 = PlayerPrefs_GetFloat_m81F89D571E11218ED76DC9234CF8FAC2515FA7CB(_stringLiteral963B75D56FACFB9CB8B20F6F310BF75BF77893C0, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void SoundManager::Save()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_Save_m0C2FF8C3046ECE947DC82897C490B3B95E94ED25 (SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral963B75D56FACFB9CB8B20F6F310BF75BF77893C0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetFloat("musicVolume", volumeSlider.value);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = __this->___volumeSlider_4;
		NullCheck(L_0);
		float L_1;
		L_1 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_0);
		PlayerPrefs_SetFloat_m1E8EA662BB9D8CF339D7DA2C452FCDFED88C5285(_stringLiteral963B75D56FACFB9CB8B20F6F310BF75BF77893C0, L_1, NULL);
		// }
		return;
	}
}
// System.Void SoundManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager__ctor_m27816732AF730AF6BEDE4A67ABC9D1A094777213 (SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void FlyCamera::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlyCamera_Start_m378C383BC47DFDFF12ADC13DD55D7EB174065E9F (FlyCamera_t1F64B05D10DBAFF4EC6F7E62F1710D0669890E0B* __this, const RuntimeMethod* method) 
{
	{
		// Screen.lockCursor = true;
		Screen_set_lockCursor_m46DF393DF32359018D193500A1467E457503049F((bool)1, NULL);
		// }
		return;
	}
}
// System.Void FlyCamera::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlyCamera_Update_m062CA0B704D8A6EFD464A084F348A2CABD97A355 (FlyCamera_t1F64B05D10DBAFF4EC6F7E62F1710D0669890E0B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B15_0 = 0;
	{
		// rotationX += Input.GetAxis("Mouse X") * cameraSensitivity * Time.deltaTime;
		float L_0 = __this->___rotationX_9;
		float L_1;
		L_1 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7, NULL);
		float L_2 = __this->___cameraSensitivity_4;
		float L_3;
		L_3 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___rotationX_9 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_1, L_2)), L_3))));
		// rotationY += Input.GetAxis("Mouse Y") * cameraSensitivity * Time.deltaTime;
		float L_4 = __this->___rotationY_10;
		float L_5;
		L_5 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0, NULL);
		float L_6 = __this->___cameraSensitivity_4;
		float L_7;
		L_7 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___rotationY_10 = ((float)il2cpp_codegen_add(L_4, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_5, L_6)), L_7))));
		// rotationY = Mathf.Clamp (rotationY, -90, 90);
		float L_8 = __this->___rotationY_10;
		float L_9;
		L_9 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_8, (-90.0f), (90.0f), NULL);
		__this->___rotationY_10 = L_9;
		// transform.localRotation = Quaternion.AngleAxis(rotationX, Vector3.up);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_11 = __this->___rotationX_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13;
		L_13 = Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80(L_11, L_12, NULL);
		NullCheck(L_10);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_10, L_13, NULL);
		// transform.localRotation *= Quaternion.AngleAxis(rotationY, Vector3.left);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15 = L_14;
		NullCheck(L_15);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
		L_16 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_15, NULL);
		float L_17 = __this->___rotationY_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_19;
		L_19 = Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80(L_17, L_18, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20;
		L_20 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_16, L_19, NULL);
		NullCheck(L_15);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_15, L_20, NULL);
		// if (Input.GetKey (KeyCode.LeftShift) || Input.GetKey (KeyCode.RightShift))
		bool L_21;
		L_21 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)304), NULL);
		if (L_21)
		{
			goto IL_00bf;
		}
	}
	{
		bool L_22;
		L_22 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)303), NULL);
		if (!L_22)
		{
			goto IL_015c;
		}
	}

IL_00bf:
	{
		// transform.position += transform.forward * (normalMoveSpeed * fastMoveFactor) * Input.GetAxis("Vertical") * Time.deltaTime;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24 = L_23;
		NullCheck(L_24);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_24, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_26);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_26, NULL);
		float L_28 = __this->___normalMoveSpeed_6;
		float L_29 = __this->___fastMoveFactor_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_27, ((float)il2cpp_codegen_multiply(L_28, L_29)), NULL);
		float L_31;
		L_31 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_30, L_31, NULL);
		float L_33;
		L_33 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_32, L_33, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_25, L_34, NULL);
		NullCheck(L_24);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_24, L_35, NULL);
		// transform.position += transform.right * (normalMoveSpeed * fastMoveFactor) * Input.GetAxis("Horizontal") * Time.deltaTime;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36;
		L_36 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37 = L_36;
		NullCheck(L_37);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_37, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_39;
		L_39 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_39);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_39, NULL);
		float L_41 = __this->___normalMoveSpeed_6;
		float L_42 = __this->___fastMoveFactor_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_40, ((float)il2cpp_codegen_multiply(L_41, L_42)), NULL);
		float L_44;
		L_44 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_43, L_44, NULL);
		float L_46;
		L_46 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_45, L_46, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		L_48 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_38, L_47, NULL);
		NullCheck(L_37);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_37, L_48, NULL);
		goto IL_029e;
	}

IL_015c:
	{
		// else if (Input.GetKey (KeyCode.LeftControl) || Input.GetKey (KeyCode.RightControl))
		bool L_49;
		L_49 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)306), NULL);
		if (L_49)
		{
			goto IL_0177;
		}
	}
	{
		bool L_50;
		L_50 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)305), NULL);
		if (!L_50)
		{
			goto IL_0214;
		}
	}

IL_0177:
	{
		// transform.position += transform.forward * (normalMoveSpeed * slowMoveFactor) * Input.GetAxis("Vertical") * Time.deltaTime;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_51;
		L_51 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_52 = L_51;
		NullCheck(L_52);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53;
		L_53 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_52, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_54;
		L_54 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_54);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55;
		L_55 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_54, NULL);
		float L_56 = __this->___normalMoveSpeed_6;
		float L_57 = __this->___slowMoveFactor_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		L_58 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_55, ((float)il2cpp_codegen_multiply(L_56, L_57)), NULL);
		float L_59;
		L_59 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60;
		L_60 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_58, L_59, NULL);
		float L_61;
		L_61 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_62;
		L_62 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_60, L_61, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63;
		L_63 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_53, L_62, NULL);
		NullCheck(L_52);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_52, L_63, NULL);
		// transform.position += transform.right * (normalMoveSpeed * slowMoveFactor) * Input.GetAxis("Horizontal") * Time.deltaTime;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_64;
		L_64 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_65 = L_64;
		NullCheck(L_65);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66;
		L_66 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_65, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_67;
		L_67 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_67);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68;
		L_68 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_67, NULL);
		float L_69 = __this->___normalMoveSpeed_6;
		float L_70 = __this->___slowMoveFactor_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_71;
		L_71 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_68, ((float)il2cpp_codegen_multiply(L_69, L_70)), NULL);
		float L_72;
		L_72 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_73;
		L_73 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_71, L_72, NULL);
		float L_74;
		L_74 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_75;
		L_75 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_73, L_74, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76;
		L_76 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_66, L_75, NULL);
		NullCheck(L_65);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_65, L_76, NULL);
		goto IL_029e;
	}

IL_0214:
	{
		// transform.position += transform.forward * normalMoveSpeed * Input.GetAxis("Vertical") * Time.deltaTime;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_77;
		L_77 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_78 = L_77;
		NullCheck(L_78);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_79;
		L_79 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_78, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_80;
		L_80 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_80);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_81;
		L_81 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_80, NULL);
		float L_82 = __this->___normalMoveSpeed_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_83;
		L_83 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_81, L_82, NULL);
		float L_84;
		L_84 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_85;
		L_85 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_83, L_84, NULL);
		float L_86;
		L_86 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_87;
		L_87 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_85, L_86, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88;
		L_88 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_79, L_87, NULL);
		NullCheck(L_78);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_78, L_88, NULL);
		// transform.position += transform.right * normalMoveSpeed * Input.GetAxis("Horizontal") * Time.deltaTime;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_89;
		L_89 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_90 = L_89;
		NullCheck(L_90);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_91;
		L_91 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_90, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_92;
		L_92 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_92);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_93;
		L_93 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_92, NULL);
		float L_94 = __this->___normalMoveSpeed_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_95;
		L_95 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_93, L_94, NULL);
		float L_96;
		L_96 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_97;
		L_97 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_95, L_96, NULL);
		float L_98;
		L_98 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_99;
		L_99 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_97, L_98, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_100;
		L_100 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_91, L_99, NULL);
		NullCheck(L_90);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_90, L_100, NULL);
	}

IL_029e:
	{
		// if (Input.GetKey (KeyCode.Q)) {transform.position += transform.up * climbSpeed * Time.deltaTime;}
		bool L_101;
		L_101 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)113), NULL);
		if (!L_101)
		{
			goto IL_02dd;
		}
	}
	{
		// if (Input.GetKey (KeyCode.Q)) {transform.position += transform.up * climbSpeed * Time.deltaTime;}
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_102;
		L_102 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_103 = L_102;
		NullCheck(L_103);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_104;
		L_104 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_103, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_105;
		L_105 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_105);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106;
		L_106 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_105, NULL);
		float L_107 = __this->___climbSpeed_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108;
		L_108 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_106, L_107, NULL);
		float L_109;
		L_109 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_110;
		L_110 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_108, L_109, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_111;
		L_111 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_104, L_110, NULL);
		NullCheck(L_103);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_103, L_111, NULL);
	}

IL_02dd:
	{
		// if (Input.GetKey (KeyCode.E)) {transform.position -= transform.up * climbSpeed * Time.deltaTime;}
		bool L_112;
		L_112 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)101), NULL);
		if (!L_112)
		{
			goto IL_031c;
		}
	}
	{
		// if (Input.GetKey (KeyCode.E)) {transform.position -= transform.up * climbSpeed * Time.deltaTime;}
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_113;
		L_113 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_114 = L_113;
		NullCheck(L_114);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_115;
		L_115 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_114, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_116;
		L_116 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_116);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_117;
		L_117 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_116, NULL);
		float L_118 = __this->___climbSpeed_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_119;
		L_119 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_117, L_118, NULL);
		float L_120;
		L_120 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_121;
		L_121 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_119, L_120, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_122;
		L_122 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_115, L_121, NULL);
		NullCheck(L_114);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_114, L_122, NULL);
	}

IL_031c:
	{
		// if (Input.GetKeyDown (KeyCode.End))
		bool L_123;
		L_123 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)279), NULL);
		if (!L_123)
		{
			goto IL_0338;
		}
	}
	{
		// Screen.lockCursor = (Screen.lockCursor == false) ? true : false;
		bool L_124;
		L_124 = Screen_get_lockCursor_mE3A20B0974F7AE3CCBBC679B5FD764F5B28F471E(NULL);
		if (!L_124)
		{
			goto IL_0332;
		}
	}
	{
		G_B15_0 = 0;
		goto IL_0333;
	}

IL_0332:
	{
		G_B15_0 = 1;
	}

IL_0333:
	{
		Screen_set_lockCursor_m46DF393DF32359018D193500A1467E457503049F((bool)G_B15_0, NULL);
	}

IL_0338:
	{
		// }
		return;
	}
}
// System.Void FlyCamera::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlyCamera__ctor_mA8BB2240A203C34F7E1DF2B7C41AB8E047C2715B (FlyCamera_t1F64B05D10DBAFF4EC6F7E62F1710D0669890E0B* __this, const RuntimeMethod* method) 
{
	{
		// public float cameraSensitivity = 90;
		__this->___cameraSensitivity_4 = (90.0f);
		// public float climbSpeed = 4;
		__this->___climbSpeed_5 = (4.0f);
		// public float normalMoveSpeed = 10;
		__this->___normalMoveSpeed_6 = (10.0f);
		// public float slowMoveFactor = 0.25f;
		__this->___slowMoveFactor_7 = (0.25f);
		// public float fastMoveFactor = 3;
		__this->___fastMoveFactor_8 = (3.0f);
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
// System.Void TextBoxContainer::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextBoxContainer_Awake_m7D8C967714269D9AD16CEF5D99A89402C794E06B (TextBoxContainer_t87E8E4C92A6CD91741EFAFDDB1901F24E606B049* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextBoxContainer_t87E8E4C92A6CD91741EFAFDDB1901F24E606B049_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(inst == null)
		TextBoxContainer_t87E8E4C92A6CD91741EFAFDDB1901F24E606B049* L_0 = ((TextBoxContainer_t87E8E4C92A6CD91741EFAFDDB1901F24E606B049_StaticFields*)il2cpp_codegen_static_fields_for(TextBoxContainer_t87E8E4C92A6CD91741EFAFDDB1901F24E606B049_il2cpp_TypeInfo_var))->___inst_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// inst = this;
		((TextBoxContainer_t87E8E4C92A6CD91741EFAFDDB1901F24E606B049_StaticFields*)il2cpp_codegen_static_fields_for(TextBoxContainer_t87E8E4C92A6CD91741EFAFDDB1901F24E606B049_il2cpp_TypeInfo_var))->___inst_6 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((TextBoxContainer_t87E8E4C92A6CD91741EFAFDDB1901F24E606B049_StaticFields*)il2cpp_codegen_static_fields_for(TextBoxContainer_t87E8E4C92A6CD91741EFAFDDB1901F24E606B049_il2cpp_TypeInfo_var))->___inst_6), (void*)__this);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void TextBoxContainer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextBoxContainer_Start_m6855CEC17206CFEA9A03260D4970C9EA1AE25515 (TextBoxContainer_t87E8E4C92A6CD91741EFAFDDB1901F24E606B049* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void TextBoxContainer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextBoxContainer_Update_mF5DF76359BD6A3B4EFA6D5CE1EC92A6065EAD444 (TextBoxContainer_t87E8E4C92A6CD91741EFAFDDB1901F24E606B049* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void TextBoxContainer::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextBoxContainer_Clear_mB89B9DC28287B84E3628393E7C6B41A7027F0F5D (TextBoxContainer_t87E8E4C92A6CD91741EFAFDDB1901F24E606B049* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// foreach(GameObject textbox in TextBoxes)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->___TextBoxes_4;
		NullCheck(L_0);
		Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 L_1;
		L_1 = List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8(L_0, List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0026:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D((&V_0), Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_001b_1;
			}

IL_000e_1:
			{
				// foreach(GameObject textbox in TextBoxes)
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
				L_2 = Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline((&V_0), Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
				// textbox.SetActive(false);
				NullCheck(L_2);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
			}

IL_001b_1:
			{
				// foreach(GameObject textbox in TextBoxes)
				bool L_3;
				L_3 = Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27((&V_0), Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
				if (L_3)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0034;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0034:
	{
		// }
		return;
	}
}
// System.Void TextBoxContainer::LoseCon()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextBoxContainer_LoseCon_m5D493C1AF0B0455B95384EE11D0C351B1EDA45B4 (TextBoxContainer_t87E8E4C92A6CD91741EFAFDDB1901F24E606B049* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0304C2468FEB98972F5763D99C72997DEFFF8FF8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Invoke("ChangeScene", 5.0f);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteral0304C2468FEB98972F5763D99C72997DEFFF8FF8, (5.0f), NULL);
		// }
		return;
	}
}
// System.Void TextBoxContainer::WinCon()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextBoxContainer_WinCon_mA5A4C09C3A4B89000640C73B862C7D83674B19BB (TextBoxContainer_t87E8E4C92A6CD91741EFAFDDB1901F24E606B049* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0304C2468FEB98972F5763D99C72997DEFFF8FF8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3268E0C9EB599FF0B54B0B0F946B71CFDC5B4B09);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Invoke("DisplayFinal", 2.0f);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteral3268E0C9EB599FF0B54B0B0F946B71CFDC5B4B09, (2.0f), NULL);
		// Invoke("ChangeScene", 12.0f);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteral0304C2468FEB98972F5763D99C72997DEFFF8FF8, (12.0f), NULL);
		// }
		return;
	}
}
// System.Void TextBoxContainer::DisplayFinal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextBoxContainer_DisplayFinal_m3E9C65DC7E090C633EC91CFDF0FA05829F018955 (TextBoxContainer_t87E8E4C92A6CD91741EFAFDDB1901F24E606B049* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Clear();
		TextBoxContainer_Clear_mB89B9DC28287B84E3628393E7C6B41A7027F0F5D(__this, NULL);
		// TextBoxes[4].SetActive(true);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->___TextBoxes_4;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_0, 4, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void TextBoxContainer::ChangeScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextBoxContainer_ChangeScene_m23F50DAA556039D2C2005E518A5B01522EC161AA (TextBoxContainer_t87E8E4C92A6CD91741EFAFDDB1901F24E606B049* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral797BC20C9E73CA9A4F4A37A04BB2102DEB6E6CAC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("DemoScene");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral797BC20C9E73CA9A4F4A37A04BB2102DEB6E6CAC, NULL);
		// }
		return;
	}
}
// System.Void TextBoxContainer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextBoxContainer__ctor_mAADAA91F142E23A6C202001D93EC44A71493A1E4 (TextBoxContainer_t87E8E4C92A6CD91741EFAFDDB1901F24E606B049* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void SelectLevel::loadLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectLevel_loadLevel_mD82B80FDE3D4470C62183F4F6329D8AD2E161905 (SelectLevel_tA3E39D978377CCF88228517CED58C69A5380CC27* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2CDB05C03FD48AC44069D71677E1C77876AB432D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6690D47161AD994D7444F97612BB1398972AD010);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral743FF3E9303AAA51ED2B08516D6CDD1C0AE91839);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral887E9B6AF7604BCDC57F8FC1D0E3043AC03E564D);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// switch (this.gameObject.name)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_0, NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteral6690D47161AD994D7444F97612BB1398972AD010, NULL);
		if (L_3)
		{
			goto IL_0034;
		}
	}
	{
		String_t* L_4 = V_0;
		bool L_5;
		L_5 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_4, _stringLiteral887E9B6AF7604BCDC57F8FC1D0E3043AC03E564D, NULL);
		if (L_5)
		{
			goto IL_0040;
		}
	}
	{
		String_t* L_6 = V_0;
		bool L_7;
		L_7 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_6, _stringLiteral743FF3E9303AAA51ED2B08516D6CDD1C0AE91839, NULL);
		if (L_7)
		{
			goto IL_004c;
		}
	}
	{
		return;
	}

IL_0034:
	{
		// SceneManager.LoadScene("WayPointScenes/Pathfinder", LoadSceneMode.Single);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m2841705C02C450E42A44B5EEE2A6A2C4261FA3AF(_stringLiteral2CDB05C03FD48AC44069D71677E1C77876AB432D, 0, NULL);
		// break;
		return;
	}

IL_0040:
	{
		// SceneManager.LoadScene("WayPointScenes/Pathfinder", LoadSceneMode.Single);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m2841705C02C450E42A44B5EEE2A6A2C4261FA3AF(_stringLiteral2CDB05C03FD48AC44069D71677E1C77876AB432D, 0, NULL);
		// break;
		return;
	}

IL_004c:
	{
		// SceneManager.LoadScene("WayPointScenes/Pathfinder", LoadSceneMode.Single);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m2841705C02C450E42A44B5EEE2A6A2C4261FA3AF(_stringLiteral2CDB05C03FD48AC44069D71677E1C77876AB432D, 0, NULL);
		// }
		return;
	}
}
// System.Void SelectLevel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectLevel__ctor_mFD170383DEEAC234280E5FC12E4EE4FD59E79D60 (SelectLevel_tA3E39D978377CCF88228517CED58C69A5380CC27* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void Unity.Template.VR.XRPlatformControllerSetup::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPlatformControllerSetup_Start_m1F22FCA29DFD83DC0E343C3F391D04A7C52085BF (XRPlatformControllerSetup_tF3241056E2DD26648305E205151EB2ACF3333628* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t468455E75DD3CE53FB1BEFFBDB5DBB1C5905801C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tE9023775CE757CAAA4A054FB61980FF18EC394AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB87CC029578F0C6F88E01A8257EBF1ED95223CEC);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// var loaders = XRGeneralSettings.Instance.Manager.activeLoaders;
		il2cpp_codegen_runtime_class_init_inline(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_0;
		L_0 = XRGeneralSettings_get_Instance_m9F222F982E62E066E119754858D8E73CFE42048C_inline(NULL);
		NullCheck(L_0);
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_1;
		L_1 = XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42_inline(L_0, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = XRManagerSettings_get_activeLoaders_m47D0FF16B7012A87F56D93124DC5D8DA0ACA591F_inline(L_1, NULL);
		// foreach (var loader in loaders)
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.XR.Management.XRLoader>::GetEnumerator() */, IEnumerable_1_t468455E75DD3CE53FB1BEFFBDB5DBB1C5905801C_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0068:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_0;
					if (!L_4)
					{
						goto IL_0071;
					}
				}
				{
					RuntimeObject* L_5 = V_0;
					NullCheck(L_5);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
				}

IL_0071:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_005e_1;
			}

IL_0017_1:
			{
				// foreach (var loader in loaders)
				RuntimeObject* L_6 = V_0;
				NullCheck(L_6);
				XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_7;
				L_7 = InterfaceFuncInvoker0< XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<UnityEngine.XR.Management.XRLoader>::get_Current() */, IEnumerator_1_tE9023775CE757CAAA4A054FB61980FF18EC394AE_il2cpp_TypeInfo_var, L_6);
				// if (loader.name.Equals("Oculus Loader"))
				NullCheck(L_7);
				String_t* L_8;
				L_8 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_7, NULL);
				NullCheck(L_8);
				bool L_9;
				L_9 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_8, _stringLiteralB87CC029578F0C6F88E01A8257EBF1ED95223CEC, NULL);
				if (!L_9)
				{
					goto IL_005e_1;
				}
			}
			{
				// m_RightController.SetActive(false);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___m_RightController_5;
				NullCheck(L_10);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)0, NULL);
				// m_LeftController.SetActive(false);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___m_LeftController_4;
				NullCheck(L_11);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_11, (bool)0, NULL);
				// m_RightControllerOculusPackage.SetActive(true);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___m_RightControllerOculusPackage_7;
				NullCheck(L_12);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)1, NULL);
				// m_LeftControllerOculusPackage.SetActive(true);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___m_LeftControllerOculusPackage_6;
				NullCheck(L_13);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_13, (bool)1, NULL);
			}

IL_005e_1:
			{
				// foreach (var loader in loaders)
				RuntimeObject* L_14 = V_0;
				NullCheck(L_14);
				bool L_15;
				L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_14);
				if (L_15)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_0072;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0072:
	{
		// }
		return;
	}
}
// System.Void Unity.Template.VR.XRPlatformControllerSetup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPlatformControllerSetup__ctor_mF9A3998AF90962CF8F35BAF2221558BDF5F6596E (XRPlatformControllerSetup_tF3241056E2DD26648305E205151EB2ACF3333628* __this, const RuntimeMethod* method) 
{
	{
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
// UnityEngine.Material UnityStandardAssets.ImageEffects.PostEffectsBase::CheckShaderAndCreateMaterial(UnityEngine.Shader,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* PostEffectsBase_CheckShaderAndCreateMaterial_m05677F5055873EAB286B69870015998FBB9D6927 (PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76* __this, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___0_s, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___1_m2Create, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46FDB78170F0875B7786D0DF6CEC4C315A44B763);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8AD58CDB5A877779756FB284EF557ED8EC4267E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD24B96FEF7F6BC453A4D5E2575831BC289660D8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC106589373683AEAB4EA765F77169BDAEB4DC540);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!s)
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_0 = ___0_s;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (L_1)
		{
			goto IL_0026;
		}
	}
	{
		// Debug.Log("Missing shader in " + ToString ());
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, __this);
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral8AD58CDB5A877779756FB284EF557ED8EC4267E4, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_3, NULL);
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		// return null;
		return (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL;
	}

IL_0026:
	{
		// if (s.isSupported && m2Create && m2Create.shader == s)
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_4 = ___0_s;
		NullCheck(L_4);
		bool L_5;
		L_5 = Shader_get_isSupported_m21C3D0F1819054101DFE0C0C062A24464FA5CAE5(L_4, NULL);
		if (!L_5)
		{
			goto IL_0046;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6 = ___1_m2Create;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_6, NULL);
		if (!L_7)
		{
			goto IL_0046;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8 = ___1_m2Create;
		NullCheck(L_8);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_9;
		L_9 = Material_get_shader_m8B0C11AE6F2AD7DE30AF52D3195EB716F7A71983(L_8, NULL);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_10 = ___0_s;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_9, L_10, NULL);
		if (!L_11)
		{
			goto IL_0046;
		}
	}
	{
		// return m2Create;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12 = ___1_m2Create;
		return L_12;
	}

IL_0046:
	{
		// if (!s.isSupported)
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_13 = ___0_s;
		NullCheck(L_13);
		bool L_14;
		L_14 = Shader_get_isSupported_m21C3D0F1819054101DFE0C0C062A24464FA5CAE5(L_13, NULL);
		if (L_14)
		{
			goto IL_0090;
		}
	}
	{
		// NotSupported ();
		PostEffectsBase_NotSupported_m3328CFF3B6C73682EAC7141F15716F34940D86AD(__this, NULL);
		// Debug.Log("The shader " + s.ToString() + " on effect "+ToString()+" is not supported on this platform!");
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_15;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, _stringLiteralC106589373683AEAB4EA765F77169BDAEB4DC540);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralC106589373683AEAB4EA765F77169BDAEB4DC540);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = L_16;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_18 = ___0_s;
		NullCheck(L_18);
		String_t* L_19;
		L_19 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_18);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_19);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_19);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = L_17;
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, _stringLiteral46FDB78170F0875B7786D0DF6CEC4C315A44B763);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral46FDB78170F0875B7786D0DF6CEC4C315A44B763);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = L_20;
		String_t* L_22;
		L_22 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, __this);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_22);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_22);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = L_21;
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, _stringLiteralAD24B96FEF7F6BC453A4D5E2575831BC289660D8);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralAD24B96FEF7F6BC453A4D5E2575831BC289660D8);
		String_t* L_24;
		L_24 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_23, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_24, NULL);
		// return null;
		return (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL;
	}

IL_0090:
	{
		// m2Create = new Material (s);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_25 = ___0_s;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_26 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_26, L_25, NULL);
		___1_m2Create = L_26;
		// m2Create.hideFlags = HideFlags.DontSave;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_27 = ___1_m2Create;
		NullCheck(L_27);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_27, ((int32_t)52), NULL);
		// if (m2Create)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_28 = ___1_m2Create;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_29;
		L_29 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_28, NULL);
		if (!L_29)
		{
			goto IL_00aa;
		}
	}
	{
		// return m2Create;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_30 = ___1_m2Create;
		return L_30;
	}

IL_00aa:
	{
		// else return null;
		return (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL;
	}
}
// UnityEngine.Material UnityStandardAssets.ImageEffects.PostEffectsBase::CreateMaterial(UnityEngine.Shader,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* PostEffectsBase_CreateMaterial_mC9860A23866B8230D964BC09EDF7FD2878BA0D6C (PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76* __this, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___0_s, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___1_m2Create, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8AD58CDB5A877779756FB284EF557ED8EC4267E4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!s)
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_0 = ___0_s;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		// Debug.Log ("Missing shader in " + ToString ());
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, __this);
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral8AD58CDB5A877779756FB284EF557ED8EC4267E4, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_3, NULL);
		// return null;
		return (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL;
	}

IL_001f:
	{
		// if (m2Create && (m2Create.shader == s) && (s.isSupported))
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = ___1_m2Create;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_4, NULL);
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6 = ___1_m2Create;
		NullCheck(L_6);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_7;
		L_7 = Material_get_shader_m8B0C11AE6F2AD7DE30AF52D3195EB716F7A71983(L_6, NULL);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_8 = ___0_s;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_7, L_8, NULL);
		if (!L_9)
		{
			goto IL_003f;
		}
	}
	{
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_10 = ___0_s;
		NullCheck(L_10);
		bool L_11;
		L_11 = Shader_get_isSupported_m21C3D0F1819054101DFE0C0C062A24464FA5CAE5(L_10, NULL);
		if (!L_11)
		{
			goto IL_003f;
		}
	}
	{
		// return m2Create;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12 = ___1_m2Create;
		return L_12;
	}

IL_003f:
	{
		// if (!s.isSupported)
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_13 = ___0_s;
		NullCheck(L_13);
		bool L_14;
		L_14 = Shader_get_isSupported_m21C3D0F1819054101DFE0C0C062A24464FA5CAE5(L_13, NULL);
		if (L_14)
		{
			goto IL_0049;
		}
	}
	{
		// return null;
		return (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL;
	}

IL_0049:
	{
		// m2Create = new Material (s);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_15 = ___0_s;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_16 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_16, L_15, NULL);
		___1_m2Create = L_16;
		// m2Create.hideFlags = HideFlags.DontSave;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17 = ___1_m2Create;
		NullCheck(L_17);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_17, ((int32_t)52), NULL);
		// if (m2Create)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_18 = ___1_m2Create;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_18, NULL);
		if (!L_19)
		{
			goto IL_0063;
		}
	}
	{
		// return m2Create;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_20 = ___1_m2Create;
		return L_20;
	}

IL_0063:
	{
		// else return null;
		return (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL;
	}
}
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostEffectsBase_OnEnable_m8BC44BA7499D510F0A9887FECDC2C475C3EC159A (PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76* __this, const RuntimeMethod* method) 
{
	{
		// isSupported = true;
		__this->___isSupported_6 = (bool)1;
		// }
		return;
	}
}
// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckSupport()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PostEffectsBase_CheckSupport_m059D1547A9DFFFF9D18D2B702D9C1A98871B3689 (PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76* __this, const RuntimeMethod* method) 
{
	{
		// return CheckSupport (false);
		bool L_0;
		L_0 = PostEffectsBase_CheckSupport_m97A1AE9C8FAFEA8D8FF7FA69916F388ACCA9FB34(__this, (bool)0, NULL);
		return L_0;
	}
}
// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckResources()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PostEffectsBase_CheckResources_m01EFEABDDEECF8931BDE27F6D76536FD52C2E273 (PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38860340D6399FED72D34E843CC6D18D6E2BCF24);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE691C6599F2EFD48FF5D07CCA40BF885CA11AD70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning ("CheckResources () for " + ToString() + " should be overwritten.");
		String_t* L_0;
		L_0 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, __this);
		String_t* L_1;
		L_1 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralE691C6599F2EFD48FF5D07CCA40BF885CA11AD70, L_0, _stringLiteral38860340D6399FED72D34E843CC6D18D6E2BCF24, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_1, NULL);
		// return isSupported;
		bool L_2 = __this->___isSupported_6;
		return L_2;
	}
}
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostEffectsBase_Start_m256D1B7C8E17442D85DCCD08D6D157080A89B79C (PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76* __this, const RuntimeMethod* method) 
{
	{
		// CheckResources ();
		bool L_0;
		L_0 = VirtualFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckResources() */, __this);
		// }
		return;
	}
}
// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckSupport(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PostEffectsBase_CheckSupport_m97A1AE9C8FAFEA8D8FF7FA69916F388ACCA9FB34 (PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76* __this, bool ___0_needDepth, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76* G_B2_0 = NULL;
	PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76* G_B3_1 = NULL;
	{
		// isSupported = true;
		__this->___isSupported_6 = (bool)1;
		// supportHDRTextures = SystemInfo.SupportsRenderTextureFormat(RenderTextureFormat.ARGBHalf);
		bool L_0;
		L_0 = SystemInfo_SupportsRenderTextureFormat_mCCC3C69578A2C5B7367F73999E6938C315A98201(2, NULL);
		__this->___supportHDRTextures_4 = L_0;
		// supportDX11 = SystemInfo.graphicsShaderLevel >= 50 && SystemInfo.supportsComputeShaders;
		int32_t L_1;
		L_1 = SystemInfo_get_graphicsShaderLevel_m9E6B001FA80EFBFC92EF4E7440AE64828B15070F(NULL);
		G_B1_0 = __this;
		if ((((int32_t)L_1) < ((int32_t)((int32_t)50))))
		{
			G_B2_0 = __this;
			goto IL_0024;
		}
	}
	{
		bool L_2;
		L_2 = SystemInfo_get_supportsComputeShaders_m4A029D2F8FB9343E65E6F1C6F1C79DA41911F13A(NULL);
		G_B3_0 = ((int32_t)(L_2));
		G_B3_1 = G_B1_0;
		goto IL_0025;
	}

IL_0024:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_0025:
	{
		NullCheck(G_B3_1);
		G_B3_1->___supportDX11_5 = (bool)G_B3_0;
		// if (!SystemInfo.supportsImageEffects || !SystemInfo.supportsRenderTextures)
		bool L_3;
		L_3 = SystemInfo_get_supportsImageEffects_mA97A693C45A91780EE8E9F2802D6ED58841D52F0(NULL);
		if (!L_3)
		{
			goto IL_0038;
		}
	}
	{
		bool L_4;
		L_4 = SystemInfo_get_supportsRenderTextures_mAA77A17E5351772E7FE0E5A295448BA64131F105(NULL);
		if (L_4)
		{
			goto IL_0040;
		}
	}

IL_0038:
	{
		// NotSupported ();
		PostEffectsBase_NotSupported_m3328CFF3B6C73682EAC7141F15716F34940D86AD(__this, NULL);
		// return false;
		return (bool)0;
	}

IL_0040:
	{
		// if (needDepth && !SystemInfo.SupportsRenderTextureFormat (RenderTextureFormat.Depth))
		bool L_5 = ___0_needDepth;
		if (!L_5)
		{
			goto IL_0053;
		}
	}
	{
		bool L_6;
		L_6 = SystemInfo_SupportsRenderTextureFormat_mCCC3C69578A2C5B7367F73999E6938C315A98201(1, NULL);
		if (L_6)
		{
			goto IL_0053;
		}
	}
	{
		// NotSupported ();
		PostEffectsBase_NotSupported_m3328CFF3B6C73682EAC7141F15716F34940D86AD(__this, NULL);
		// return false;
		return (bool)0;
	}

IL_0053:
	{
		// if (needDepth)
		bool L_7 = ___0_needDepth;
		if (!L_7)
		{
			goto IL_0069;
		}
	}
	{
		// GetComponent<Camera>().depthTextureMode |= DepthTextureMode.Depth;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_8;
		L_8 = Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4(__this, Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_9 = L_8;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = Camera_get_depthTextureMode_m998CDEBC055FE2A910F3B650585ADE3E2BB141EE(L_9, NULL);
		NullCheck(L_9);
		Camera_set_depthTextureMode_mE722389E4DF8B3DF7F6100DB142E4DBAF698F6BF(L_9, ((int32_t)((int32_t)L_10|1)), NULL);
	}

IL_0069:
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckSupport(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PostEffectsBase_CheckSupport_mA7398DAA19FD5AC947119F26E3509974EAFC1664 (PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76* __this, bool ___0_needDepth, bool ___1_needHdr, const RuntimeMethod* method) 
{
	{
		// if (!CheckSupport(needDepth))
		bool L_0 = ___0_needDepth;
		bool L_1;
		L_1 = PostEffectsBase_CheckSupport_m97A1AE9C8FAFEA8D8FF7FA69916F388ACCA9FB34(__this, L_0, NULL);
		if (L_1)
		{
			goto IL_000b;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000b:
	{
		// if (needHdr && !supportHDRTextures)
		bool L_2 = ___1_needHdr;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		bool L_3 = __this->___supportHDRTextures_4;
		if (L_3)
		{
			goto IL_001e;
		}
	}
	{
		// NotSupported ();
		PostEffectsBase_NotSupported_m3328CFF3B6C73682EAC7141F15716F34940D86AD(__this, NULL);
		// return false;
		return (bool)0;
	}

IL_001e:
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::Dx11Support()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PostEffectsBase_Dx11Support_mCAEFE6A80827A8B34E73B44DA8304C0CAD8330E5 (PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76* __this, const RuntimeMethod* method) 
{
	{
		// return supportDX11;
		bool L_0 = __this->___supportDX11_5;
		return L_0;
	}
}
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::ReportAutoDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostEffectsBase_ReportAutoDisable_m4A617083CFD2A09EEECF6329CD2C9AD101095E34 (PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral26E519C4459C9C2AE04CACDA4DCF6450F759B33B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBC80DA7614408087FE75EA6806A9CBE62109EF15);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning ("The image effect " + ToString() + " has been disabled as it's not supported on the current platform.");
		String_t* L_0;
		L_0 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, __this);
		String_t* L_1;
		L_1 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralBC80DA7614408087FE75EA6806A9CBE62109EF15, L_0, _stringLiteral26E519C4459C9C2AE04CACDA4DCF6450F759B33B, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_1, NULL);
		// }
		return;
	}
}
// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckShader(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PostEffectsBase_CheckShader_m2915D7EE44889306449307C06FE3F9770FAAF012 (PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76* __this, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___0_s, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46FDB78170F0875B7786D0DF6CEC4C315A44B763);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC106589373683AEAB4EA765F77169BDAEB4DC540);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDCCF60D13A2F5176335F2A450A37F1B544DA4C96);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("The shader " + s.ToString () + " on effect "+ ToString () + " is not part of the Unity 3.2+ effects suite anymore. For best performance and quality, please ensure you are using the latest Standard Assets Image Effects (Pro only) package.");
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralC106589373683AEAB4EA765F77169BDAEB4DC540);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralC106589373683AEAB4EA765F77169BDAEB4DC540);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_3 = ___0_s;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_3);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_2;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral46FDB78170F0875B7786D0DF6CEC4C315A44B763);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral46FDB78170F0875B7786D0DF6CEC4C315A44B763);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		String_t* L_7;
		L_7 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, __this);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_6;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteralDCCF60D13A2F5176335F2A450A37F1B544DA4C96);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralDCCF60D13A2F5176335F2A450A37F1B544DA4C96);
		String_t* L_9;
		L_9 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_9, NULL);
		// if (!s.isSupported)
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_10 = ___0_s;
		NullCheck(L_10);
		bool L_11;
		L_11 = Shader_get_isSupported_m21C3D0F1819054101DFE0C0C062A24464FA5CAE5(L_10, NULL);
		if (L_11)
		{
			goto IL_004a;
		}
	}
	{
		// NotSupported ();
		PostEffectsBase_NotSupported_m3328CFF3B6C73682EAC7141F15716F34940D86AD(__this, NULL);
		// return false;
		return (bool)0;
	}

IL_004a:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::NotSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostEffectsBase_NotSupported_m3328CFF3B6C73682EAC7141F15716F34940D86AD (PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76* __this, const RuntimeMethod* method) 
{
	{
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		// isSupported = false;
		__this->___isSupported_6 = (bool)0;
		// return;
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::DrawBorder(UnityEngine.RenderTexture,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostEffectsBase_DrawBorder_m501B2ABEF35941F9B67F4DE18B28051D2CEBBA53 (PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___0_dest, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___1_material, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	bool V_3 = false;
	int32_t V_4 = 0;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	{
		// RenderTexture.active = dest;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_0 = ___0_dest;
		RenderTexture_set_active_m5EE8E2327EF9B306C1425014CC34C41A8384E7AB(L_0, NULL);
		// bool  invertY = true; // source.texelSize.y < 0.0ff;
		V_3 = (bool)1;
		// GL.PushMatrix();
		GL_PushMatrix_mB505DD9B224528266FCADC716A16343838105A09(NULL);
		// GL.LoadOrtho();
		GL_LoadOrtho_mE86AB2DBBC5C2BA67E7B743A2352E61C372CEADC(NULL);
		// for (int i = 0; i < material.passCount; i++)
		V_4 = 0;
		goto IL_027d;
	}

IL_001a:
	{
		// material.SetPass(i);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1 = ___1_material;
		int32_t L_2 = V_4;
		NullCheck(L_1);
		bool L_3;
		L_3 = Material_SetPass_mBB03542DFF4FAEADFCED332009F9D61B6DED75FE(L_1, L_2, NULL);
		// if (invertY)
		bool L_4 = V_3;
		if (!L_4)
		{
			goto IL_0036;
		}
	}
	{
		// y1_ = 1.0f; y2_ = 0.0f;
		V_5 = (1.0f);
		// y1_ = 1.0f; y2_ = 0.0f;
		V_6 = (0.0f);
		goto IL_0044;
	}

IL_0036:
	{
		// y1_ = 0.0f; y2_ = 1.0f;
		V_5 = (0.0f);
		// y1_ = 0.0f; y2_ = 1.0f;
		V_6 = (1.0f);
	}

IL_0044:
	{
		// x1 = 0.0f;
		// x2 = 0.0f + 1.0f/(dest.width*1.0f);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_5 = ___0_dest;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_5);
		V_0 = ((float)il2cpp_codegen_add((0.0f), ((float)((1.0f)/((float)il2cpp_codegen_multiply(((float)L_6), (1.0f)))))));
		// y1 = 0.0f;
		V_1 = (0.0f);
		// y2 = 1.0f;
		V_2 = (1.0f);
		// GL.Begin(GL.QUADS);
		GL_Begin_m17A70A7A3C161D8A127C11BDC5FC393392AB70C7(7, NULL);
		// GL.TexCoord2(0.0f, y1_); GL.Vertex3(x1, y1, 0.1f);
		float L_7 = V_5;
		GL_TexCoord2_mBD9A9E6D397F8669FAE40DA950AB1FD7D674D1FB((0.0f), L_7, NULL);
		// GL.TexCoord2(0.0f, y1_); GL.Vertex3(x1, y1, 0.1f);
		float L_8 = (0.0f);
		float L_9 = V_1;
		GL_Vertex3_mEA9925548F447556F7899E69604B787EE57F6978(L_8, L_9, (0.100000001f), NULL);
		// GL.TexCoord2(1.0f, y1_); GL.Vertex3(x2, y1, 0.1f);
		float L_10 = V_5;
		GL_TexCoord2_mBD9A9E6D397F8669FAE40DA950AB1FD7D674D1FB((1.0f), L_10, NULL);
		// GL.TexCoord2(1.0f, y1_); GL.Vertex3(x2, y1, 0.1f);
		float L_11 = V_0;
		float L_12 = V_1;
		GL_Vertex3_mEA9925548F447556F7899E69604B787EE57F6978(L_11, L_12, (0.100000001f), NULL);
		// GL.TexCoord2(1.0f, y2_); GL.Vertex3(x2, y2, 0.1f);
		float L_13 = V_6;
		GL_TexCoord2_mBD9A9E6D397F8669FAE40DA950AB1FD7D674D1FB((1.0f), L_13, NULL);
		// GL.TexCoord2(1.0f, y2_); GL.Vertex3(x2, y2, 0.1f);
		float L_14 = V_0;
		float L_15 = V_2;
		GL_Vertex3_mEA9925548F447556F7899E69604B787EE57F6978(L_14, L_15, (0.100000001f), NULL);
		// GL.TexCoord2(0.0f, y2_); GL.Vertex3(x1, y2, 0.1f);
		float L_16 = V_6;
		GL_TexCoord2_mBD9A9E6D397F8669FAE40DA950AB1FD7D674D1FB((0.0f), L_16, NULL);
		// GL.TexCoord2(0.0f, y2_); GL.Vertex3(x1, y2, 0.1f);
		float L_17 = V_2;
		GL_Vertex3_mEA9925548F447556F7899E69604B787EE57F6978(L_8, L_17, (0.100000001f), NULL);
		// x1 = 1.0f - 1.0f/(dest.width*1.0f);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_18 = ___0_dest;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_18);
		// x2 = 1.0f;
		V_0 = (1.0f);
		// y1 = 0.0f;
		V_1 = (0.0f);
		// y2 = 1.0f;
		V_2 = (1.0f);
		// GL.TexCoord2(0.0f, y1_); GL.Vertex3(x1, y1, 0.1f);
		float L_20 = V_5;
		GL_TexCoord2_mBD9A9E6D397F8669FAE40DA950AB1FD7D674D1FB((0.0f), L_20, NULL);
		// GL.TexCoord2(0.0f, y1_); GL.Vertex3(x1, y1, 0.1f);
		float L_21 = ((float)il2cpp_codegen_subtract((1.0f), ((float)((1.0f)/((float)il2cpp_codegen_multiply(((float)L_19), (1.0f)))))));
		float L_22 = V_1;
		GL_Vertex3_mEA9925548F447556F7899E69604B787EE57F6978(L_21, L_22, (0.100000001f), NULL);
		// GL.TexCoord2(1.0f, y1_); GL.Vertex3(x2, y1, 0.1f);
		float L_23 = V_5;
		GL_TexCoord2_mBD9A9E6D397F8669FAE40DA950AB1FD7D674D1FB((1.0f), L_23, NULL);
		// GL.TexCoord2(1.0f, y1_); GL.Vertex3(x2, y1, 0.1f);
		float L_24 = V_0;
		float L_25 = V_1;
		GL_Vertex3_mEA9925548F447556F7899E69604B787EE57F6978(L_24, L_25, (0.100000001f), NULL);
		// GL.TexCoord2(1.0f, y2_); GL.Vertex3(x2, y2, 0.1f);
		float L_26 = V_6;
		GL_TexCoord2_mBD9A9E6D397F8669FAE40DA950AB1FD7D674D1FB((1.0f), L_26, NULL);
		// GL.TexCoord2(1.0f, y2_); GL.Vertex3(x2, y2, 0.1f);
		float L_27 = V_0;
		float L_28 = V_2;
		GL_Vertex3_mEA9925548F447556F7899E69604B787EE57F6978(L_27, L_28, (0.100000001f), NULL);
		// GL.TexCoord2(0.0f, y2_); GL.Vertex3(x1, y2, 0.1f);
		float L_29 = V_6;
		GL_TexCoord2_mBD9A9E6D397F8669FAE40DA950AB1FD7D674D1FB((0.0f), L_29, NULL);
		// GL.TexCoord2(0.0f, y2_); GL.Vertex3(x1, y2, 0.1f);
		float L_30 = V_2;
		GL_Vertex3_mEA9925548F447556F7899E69604B787EE57F6978(L_21, L_30, (0.100000001f), NULL);
		// x1 = 0.0f;
		// x2 = 1.0f;
		V_0 = (1.0f);
		// y1 = 0.0f;
		V_1 = (0.0f);
		// y2 = 0.0f + 1.0f/(dest.height*1.0f);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_31 = ___0_dest;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_31);
		V_2 = ((float)il2cpp_codegen_add((0.0f), ((float)((1.0f)/((float)il2cpp_codegen_multiply(((float)L_32), (1.0f)))))));
		// GL.TexCoord2(0.0f, y1_); GL.Vertex3(x1, y1, 0.1f);
		float L_33 = V_5;
		GL_TexCoord2_mBD9A9E6D397F8669FAE40DA950AB1FD7D674D1FB((0.0f), L_33, NULL);
		// GL.TexCoord2(0.0f, y1_); GL.Vertex3(x1, y1, 0.1f);
		float L_34 = (0.0f);
		float L_35 = V_1;
		GL_Vertex3_mEA9925548F447556F7899E69604B787EE57F6978(L_34, L_35, (0.100000001f), NULL);
		// GL.TexCoord2(1.0f, y1_); GL.Vertex3(x2, y1, 0.1f);
		float L_36 = V_5;
		GL_TexCoord2_mBD9A9E6D397F8669FAE40DA950AB1FD7D674D1FB((1.0f), L_36, NULL);
		// GL.TexCoord2(1.0f, y1_); GL.Vertex3(x2, y1, 0.1f);
		float L_37 = V_0;
		float L_38 = V_1;
		GL_Vertex3_mEA9925548F447556F7899E69604B787EE57F6978(L_37, L_38, (0.100000001f), NULL);
		// GL.TexCoord2(1.0f, y2_); GL.Vertex3(x2, y2, 0.1f);
		float L_39 = V_6;
		GL_TexCoord2_mBD9A9E6D397F8669FAE40DA950AB1FD7D674D1FB((1.0f), L_39, NULL);
		// GL.TexCoord2(1.0f, y2_); GL.Vertex3(x2, y2, 0.1f);
		float L_40 = V_0;
		float L_41 = V_2;
		GL_Vertex3_mEA9925548F447556F7899E69604B787EE57F6978(L_40, L_41, (0.100000001f), NULL);
		// GL.TexCoord2(0.0f, y2_); GL.Vertex3(x1, y2, 0.1f);
		float L_42 = V_6;
		GL_TexCoord2_mBD9A9E6D397F8669FAE40DA950AB1FD7D674D1FB((0.0f), L_42, NULL);
		// GL.TexCoord2(0.0f, y2_); GL.Vertex3(x1, y2, 0.1f);
		float L_43 = V_2;
		GL_Vertex3_mEA9925548F447556F7899E69604B787EE57F6978(L_34, L_43, (0.100000001f), NULL);
		// x1 = 0.0f;
		// x2 = 1.0f;
		V_0 = (1.0f);
		// y1 = 1.0f - 1.0f/(dest.height*1.0f);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_44 = ___0_dest;
		NullCheck(L_44);
		int32_t L_45;
		L_45 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_44);
		V_1 = ((float)il2cpp_codegen_subtract((1.0f), ((float)((1.0f)/((float)il2cpp_codegen_multiply(((float)L_45), (1.0f)))))));
		// y2 = 1.0f;
		V_2 = (1.0f);
		// GL.TexCoord2(0.0f, y1_); GL.Vertex3(x1, y1, 0.1f);
		float L_46 = V_5;
		GL_TexCoord2_mBD9A9E6D397F8669FAE40DA950AB1FD7D674D1FB((0.0f), L_46, NULL);
		// GL.TexCoord2(0.0f, y1_); GL.Vertex3(x1, y1, 0.1f);
		float L_47 = (0.0f);
		float L_48 = V_1;
		GL_Vertex3_mEA9925548F447556F7899E69604B787EE57F6978(L_47, L_48, (0.100000001f), NULL);
		// GL.TexCoord2(1.0f, y1_); GL.Vertex3(x2, y1, 0.1f);
		float L_49 = V_5;
		GL_TexCoord2_mBD9A9E6D397F8669FAE40DA950AB1FD7D674D1FB((1.0f), L_49, NULL);
		// GL.TexCoord2(1.0f, y1_); GL.Vertex3(x2, y1, 0.1f);
		float L_50 = V_0;
		float L_51 = V_1;
		GL_Vertex3_mEA9925548F447556F7899E69604B787EE57F6978(L_50, L_51, (0.100000001f), NULL);
		// GL.TexCoord2(1.0f, y2_); GL.Vertex3(x2, y2, 0.1f);
		float L_52 = V_6;
		GL_TexCoord2_mBD9A9E6D397F8669FAE40DA950AB1FD7D674D1FB((1.0f), L_52, NULL);
		// GL.TexCoord2(1.0f, y2_); GL.Vertex3(x2, y2, 0.1f);
		float L_53 = V_0;
		float L_54 = V_2;
		GL_Vertex3_mEA9925548F447556F7899E69604B787EE57F6978(L_53, L_54, (0.100000001f), NULL);
		// GL.TexCoord2(0.0f, y2_); GL.Vertex3(x1, y2, 0.1f);
		float L_55 = V_6;
		GL_TexCoord2_mBD9A9E6D397F8669FAE40DA950AB1FD7D674D1FB((0.0f), L_55, NULL);
		// GL.TexCoord2(0.0f, y2_); GL.Vertex3(x1, y2, 0.1f);
		float L_56 = V_2;
		GL_Vertex3_mEA9925548F447556F7899E69604B787EE57F6978(L_47, L_56, (0.100000001f), NULL);
		// GL.End();
		GL_End_m6CE9D562B738075125F901B1D5254520EC30AB36(NULL);
		// for (int i = 0; i < material.passCount; i++)
		int32_t L_57 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_57, 1));
	}

IL_027d:
	{
		// for (int i = 0; i < material.passCount; i++)
		int32_t L_58 = V_4;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_59 = ___1_material;
		NullCheck(L_59);
		int32_t L_60;
		L_60 = Material_get_passCount_m7BA071AFFA34DC3E49B56A16CB8B098566BDE765(L_59, NULL);
		if ((((int32_t)L_58) < ((int32_t)L_60)))
		{
			goto IL_001a;
		}
	}
	{
		// GL.PopMatrix();
		GL_PopMatrix_mCE0D33302104D1168B6382136039E979E8C02855(NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostEffectsBase__ctor_mA6375ECEEA9338D745C8ADDDF2CE2CFE19AD3919 (PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76* __this, const RuntimeMethod* method) 
{
	{
		// protected bool  supportHDRTextures = true;
		__this->___supportHDRTextures_4 = (bool)1;
		// protected bool  isSupported = true;
		__this->___isSupported_6 = (bool)1;
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
// System.Boolean UnityStandardAssets.ImageEffects.Quads::HasMeshes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Quads_HasMeshes_m41D66F9A795040CCB2219E1412C88C1C59729A04 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quads_tE98082D335C0BFD295060C5EAC07382CCC97F50C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689* V_0 = NULL;
	int32_t V_1 = 0;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* V_2 = NULL;
	{
		// if (meshes == null)
		MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689* L_0 = ((Quads_tE98082D335C0BFD295060C5EAC07382CCC97F50C_StaticFields*)il2cpp_codegen_static_fields_for(Quads_tE98082D335C0BFD295060C5EAC07382CCC97F50C_il2cpp_TypeInfo_var))->___meshes_0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0009:
	{
		// foreach (Mesh m in meshes)
		MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689* L_1 = ((Quads_tE98082D335C0BFD295060C5EAC07382CCC97F50C_StaticFields*)il2cpp_codegen_static_fields_for(Quads_tE98082D335C0BFD295060C5EAC07382CCC97F50C_il2cpp_TypeInfo_var))->___meshes_0;
		V_0 = L_1;
		V_1 = 0;
		goto IL_0026;
	}

IL_0013:
	{
		// foreach (Mesh m in meshes)
		MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		// if (null == m)
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_6 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, L_6, NULL);
		if (!L_7)
		{
			goto IL_0022;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0022:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0026:
	{
		// foreach (Mesh m in meshes)
		int32_t L_9 = V_1;
		MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689* L_10 = V_0;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_0013;
		}
	}
	{
		// return true;
		return (bool)1;
	}
}
// System.Void UnityStandardAssets.ImageEffects.Quads::Cleanup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quads_Cleanup_m18CF6B317A33E5BFF0C5D139F3075321CE31A461 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quads_tE98082D335C0BFD295060C5EAC07382CCC97F50C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (meshes == null)
		MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689* L_0 = ((Quads_tE98082D335C0BFD295060C5EAC07382CCC97F50C_StaticFields*)il2cpp_codegen_static_fields_for(Quads_tE98082D335C0BFD295060C5EAC07382CCC97F50C_il2cpp_TypeInfo_var))->___meshes_0;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// return;
		return;
	}

IL_0008:
	{
		// for (int i = 0; i < meshes.Length; i++)
		V_0 = 0;
		goto IL_0033;
	}

IL_000c:
	{
		// if (null != meshes[i])
		MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689* L_1 = ((Quads_tE98082D335C0BFD295060C5EAC07382CCC97F50C_StaticFields*)il2cpp_codegen_static_fields_for(Quads_tE98082D335C0BFD295060C5EAC07382CCC97F50C_il2cpp_TypeInfo_var))->___meshes_0;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, L_4, NULL);
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		// Object.DestroyImmediate (meshes[i]);
		MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689* L_6 = ((Quads_tE98082D335C0BFD295060C5EAC07382CCC97F50C_StaticFields*)il2cpp_codegen_static_fields_for(Quads_tE98082D335C0BFD295060C5EAC07382CCC97F50C_il2cpp_TypeInfo_var))->___meshes_0;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_9, NULL);
		// meshes[i] = null;
		MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689* L_10 = ((Quads_tE98082D335C0BFD295060C5EAC07382CCC97F50C_StaticFields*)il2cpp_codegen_static_fields_for(Quads_tE98082D335C0BFD295060C5EAC07382CCC97F50C_il2cpp_TypeInfo_var))->___meshes_0;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, NULL);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*)NULL);
	}

IL_002f:
	{
		// for (int i = 0; i < meshes.Length; i++)
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0033:
	{
		// for (int i = 0; i < meshes.Length; i++)
		int32_t L_13 = V_0;
		MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689* L_14 = ((Quads_tE98082D335C0BFD295060C5EAC07382CCC97F50C_StaticFields*)il2cpp_codegen_static_fields_for(Quads_tE98082D335C0BFD295060C5EAC07382CCC97F50C_il2cpp_TypeInfo_var))->___meshes_0;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_000c;
		}
	}
	{
		// meshes = null;
		((Quads_tE98082D335C0BFD295060C5EAC07382CCC97F50C_StaticFields*)il2cpp_codegen_static_fields_for(Quads_tE98082D335C0BFD295060C5EAC07382CCC97F50C_il2cpp_TypeInfo_var))->___meshes_0 = (MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((Quads_tE98082D335C0BFD295060C5EAC07382CCC97F50C_StaticFields*)il2cpp_codegen_static_fields_for(Quads_tE98082D335C0BFD295060C5EAC07382CCC97F50C_il2cpp_TypeInfo_var))->___meshes_0), (void*)(MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689*)NULL);
		// }
		return;
	}
}
// UnityEngine.Mesh[] UnityStandardAssets.ImageEffects.Quads::GetMeshes(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689* Quads_GetMeshes_mB329F322CBF3A8CEFE17BD982B669E48E2559625 (int32_t ___0_totalWidth, int32_t ___1_totalHeight, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quads_tE98082D335C0BFD295060C5EAC07382CCC97F50C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		// if (HasMeshes () && (currentQuads == (totalWidth * totalHeight))) {
		bool L_0;
		L_0 = Quads_HasMeshes_m41D66F9A795040CCB2219E1412C88C1C59729A04(NULL);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_1 = ((Quads_tE98082D335C0BFD295060C5EAC07382CCC97F50C_StaticFields*)il2cpp_codegen_static_fields_for(Quads_tE98082D335C0BFD295060C5EAC07382CCC97F50C_il2cpp_TypeInfo_var))->___currentQuads_1;
		int32_t L_2 = ___0_totalWidth;
		int32_t L_3 = ___1_totalHeight;
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)il2cpp_codegen_multiply(L_2, L_3))))))
		{
			goto IL_0017;
		}
	}
	{
		// return meshes;
		MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689* L_4 = ((Quads_tE98082D335C0BFD295060C5EAC07382CCC97F50C_StaticFields*)il2cpp_codegen_static_fields_for(Quads_tE98082D335C0BFD295060C5EAC07382CCC97F50C_il2cpp_TypeInfo_var))->___meshes_0;
		return L_4;
	}

IL_0017:
	{
		// int maxQuads = 65000 / 6;
		V_0 = ((int32_t)10833);
		// int totalQuads = totalWidth * totalHeight;
		int32_t L_5 = ___0_totalWidth;
		int32_t L_6 = ___1_totalHeight;
		V_1 = ((int32_t)il2cpp_codegen_multiply(L_5, L_6));
		// currentQuads = totalQuads;
		int32_t L_7 = V_1;
		((Quads_tE98082D335C0BFD295060C5EAC07382CCC97F50C_StaticFields*)il2cpp_codegen_static_fields_for(Quads_tE98082D335C0BFD295060C5EAC07382CCC97F50C_il2cpp_TypeInfo_var))->___currentQuads_1 = L_7;
		// int meshCount = Mathf.CeilToInt ((1.0f * totalQuads) / (1.0f * maxQuads));
		int32_t L_8 = V_1;
		int32_t L_9 = V_0;
		int32_t L_10;
		L_10 = Mathf_CeilToInt_mF2BF9F4261B3431DC20E10A46CFEEED103C48963_inline(((float)(((float)il2cpp_codegen_multiply((1.0f), ((float)L_8)))/((float)il2cpp_codegen_multiply((1.0f), ((float)L_9))))), NULL);
		// meshes = new Mesh [meshCount];
		MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689* L_11 = (MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689*)(MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689*)SZArrayNew(MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689_il2cpp_TypeInfo_var, (uint32_t)L_10);
		((Quads_tE98082D335C0BFD295060C5EAC07382CCC97F50C_StaticFields*)il2cpp_codegen_static_fields_for(Quads_tE98082D335C0BFD295060C5EAC07382CCC97F50C_il2cpp_TypeInfo_var))->___meshes_0 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((Quads_tE98082D335C0BFD295060C5EAC07382CCC97F50C_StaticFields*)il2cpp_codegen_static_fields_for(Quads_tE98082D335C0BFD295060C5EAC07382CCC97F50C_il2cpp_TypeInfo_var))->___meshes_0), (void*)L_11);
		// int i = 0;
		V_2 = 0;
		// int index = 0;
		V_3 = 0;
		// for (i = 0; i < totalQuads; i += maxQuads)
		V_2 = 0;
		goto IL_007a;
	}

IL_004f:
	{
		// int quads = Mathf.FloorToInt (Mathf.Clamp ((totalQuads-i), 0, maxQuads));
		int32_t L_12 = V_1;
		int32_t L_13 = V_2;
		int32_t L_14 = V_0;
		int32_t L_15;
		L_15 = Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline(((int32_t)il2cpp_codegen_subtract(L_12, L_13)), 0, L_14, NULL);
		int32_t L_16;
		L_16 = Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline(((float)L_15), NULL);
		V_4 = L_16;
		// meshes[index] = GetMesh (quads, i, totalWidth, totalHeight);
		MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689* L_17 = ((Quads_tE98082D335C0BFD295060C5EAC07382CCC97F50C_StaticFields*)il2cpp_codegen_static_fields_for(Quads_tE98082D335C0BFD295060C5EAC07382CCC97F50C_il2cpp_TypeInfo_var))->___meshes_0;
		int32_t L_18 = V_3;
		int32_t L_19 = V_4;
		int32_t L_20 = V_2;
		int32_t L_21 = ___0_totalWidth;
		int32_t L_22 = ___1_totalHeight;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_23;
		L_23 = Quads_GetMesh_m3001DD2FCD94103FE9D38091C4BF006CCA25F44E(L_19, L_20, L_21, L_22, NULL);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_23);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(L_18), (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*)L_23);
		// index++;
		int32_t L_24 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		// for (i = 0; i < totalQuads; i += maxQuads)
		int32_t L_25 = V_2;
		int32_t L_26 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_add(L_25, L_26));
	}

IL_007a:
	{
		// for (i = 0; i < totalQuads; i += maxQuads)
		int32_t L_27 = V_2;
		int32_t L_28 = V_1;
		if ((((int32_t)L_27) < ((int32_t)L_28)))
		{
			goto IL_004f;
		}
	}
	{
		// return meshes;
		MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689* L_29 = ((Quads_tE98082D335C0BFD295060C5EAC07382CCC97F50C_StaticFields*)il2cpp_codegen_static_fields_for(Quads_tE98082D335C0BFD295060C5EAC07382CCC97F50C_il2cpp_TypeInfo_var))->___meshes_0;
		return L_29;
	}
}
// UnityEngine.Mesh UnityStandardAssets.ImageEffects.Quads::GetMesh(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* Quads_GetMesh_m3001DD2FCD94103FE9D38091C4BF006CCA25F44E (int32_t ___0_triCount, int32_t ___1_triOffset, int32_t ___2_totalWidth, int32_t ___3_totalHeight, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* V_0 = NULL;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_1 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* V_2 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* V_3 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_10;
	memset((&V_10), 0, sizeof(V_10));
	{
		// var mesh = new Mesh ();
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_0 = (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*)il2cpp_codegen_object_new(Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Mesh__ctor_m5A9AECEDDAFFD84811ED8928012BDE97A9CEBD00(L_0, NULL);
		V_0 = L_0;
		// mesh.hideFlags = HideFlags.DontSave;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_1 = V_0;
		NullCheck(L_1);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_1, ((int32_t)52), NULL);
		// var verts = new Vector3[triCount * 4];
		int32_t L_2 = ___0_triCount;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_3 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_2, 4)));
		V_1 = L_3;
		// var uvs = new Vector2[triCount * 4];
		int32_t L_4 = ___0_triCount;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_5 = (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)SZArrayNew(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_4, 4)));
		V_2 = L_5;
		// var uvs2 = new Vector2[triCount * 4];
		int32_t L_6 = ___0_triCount;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_7 = (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)SZArrayNew(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_6, 4)));
		V_3 = L_7;
		// var tris = new int[triCount * 6];
		int32_t L_8 = ___0_triCount;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_8, 6)));
		V_4 = L_9;
		// for (int i = 0; i < triCount; i++)
		V_5 = 0;
		goto IL_01ac;
	}

IL_003b:
	{
		// int i4 = i * 4;
		int32_t L_10 = V_5;
		V_6 = ((int32_t)il2cpp_codegen_multiply(L_10, 4));
		// int i6 = i * 6;
		int32_t L_11 = V_5;
		V_7 = ((int32_t)il2cpp_codegen_multiply(L_11, 6));
		// int vertexWithOffset = triOffset + i;
		int32_t L_12 = ___1_triOffset;
		int32_t L_13 = V_5;
		// float x = Mathf.Floor (vertexWithOffset % totalWidth) / totalWidth;
		int32_t L_14 = ((int32_t)il2cpp_codegen_add(L_12, L_13));
		int32_t L_15 = ___2_totalWidth;
		float L_16;
		L_16 = floorf(((float)((int32_t)(L_14%L_15))));
		int32_t L_17 = ___2_totalWidth;
		V_8 = ((float)(L_16/((float)L_17)));
		// float y = Mathf.Floor (vertexWithOffset / totalWidth) / totalHeight;
		int32_t L_18 = ___2_totalWidth;
		float L_19;
		L_19 = floorf(((float)((int32_t)(L_14/L_18))));
		int32_t L_20 = ___3_totalHeight;
		V_9 = ((float)(L_19/((float)L_20)));
		// Vector3 position = new Vector3 (x * 2 - 1, y * 2 - 1, 1.0f);
		float L_21 = V_8;
		float L_22 = V_9;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_10), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_21, (2.0f))), (1.0f))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_22, (2.0f))), (1.0f))), (1.0f), NULL);
		// verts[i4 + 0] = position;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_23 = V_1;
		int32_t L_24 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_10;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_25);
		// verts[i4 + 1] = position;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_26 = V_1;
		int32_t L_27 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = V_10;
		NullCheck(L_26);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_27, 1))), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_28);
		// verts[i4 + 2] = position;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_29 = V_1;
		int32_t L_30 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = V_10;
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_30, 2))), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_31);
		// verts[i4 + 3] = position;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_32 = V_1;
		int32_t L_33 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = V_10;
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_33, 3))), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_34);
		// uvs[i4 + 0] = new Vector2 (0.0f, 0.0f);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_35 = V_2;
		int32_t L_36 = V_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_37;
		memset((&L_37), 0, sizeof(L_37));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_37), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_37);
		// uvs[i4 + 1] = new Vector2 (1.0f, 0.0f);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_38 = V_2;
		int32_t L_39 = V_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_40;
		memset((&L_40), 0, sizeof(L_40));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_40), (1.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_38);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_39, 1))), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_40);
		// uvs[i4 + 2] = new Vector2 (0.0f, 1.0f);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_41 = V_2;
		int32_t L_42 = V_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_43;
		memset((&L_43), 0, sizeof(L_43));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_43), (0.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_41);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_42, 2))), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_43);
		// uvs[i4 + 3] = new Vector2 (1.0f, 1.0f);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_44 = V_2;
		int32_t L_45 = V_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_46;
		memset((&L_46), 0, sizeof(L_46));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_46), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_44);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_45, 3))), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_46);
		// uvs2[i4 + 0] = new Vector2 (x, y);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_47 = V_3;
		int32_t L_48 = V_6;
		float L_49 = V_8;
		float L_50 = V_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_51;
		memset((&L_51), 0, sizeof(L_51));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_51), L_49, L_50, /*hidden argument*/NULL);
		NullCheck(L_47);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(L_48), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_51);
		// uvs2[i4 + 1] = new Vector2 (x, y);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_52 = V_3;
		int32_t L_53 = V_6;
		float L_54 = V_8;
		float L_55 = V_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_56;
		memset((&L_56), 0, sizeof(L_56));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_56), L_54, L_55, /*hidden argument*/NULL);
		NullCheck(L_52);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_53, 1))), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_56);
		// uvs2[i4 + 2] = new Vector2 (x, y);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_57 = V_3;
		int32_t L_58 = V_6;
		float L_59 = V_8;
		float L_60 = V_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_61;
		memset((&L_61), 0, sizeof(L_61));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_61), L_59, L_60, /*hidden argument*/NULL);
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_58, 2))), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_61);
		// uvs2[i4 + 3] = new Vector2 (x, y);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_62 = V_3;
		int32_t L_63 = V_6;
		float L_64 = V_8;
		float L_65 = V_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_66;
		memset((&L_66), 0, sizeof(L_66));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_66), L_64, L_65, /*hidden argument*/NULL);
		NullCheck(L_62);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_63, 3))), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_66);
		// tris[i6 + 0] = i4 + 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_67 = V_4;
		int32_t L_68 = V_7;
		int32_t L_69 = V_6;
		NullCheck(L_67);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(L_68), (int32_t)L_69);
		// tris[i6 + 1] = i4 + 1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_70 = V_4;
		int32_t L_71 = V_7;
		int32_t L_72 = V_6;
		NullCheck(L_70);
		(L_70)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_71, 1))), (int32_t)((int32_t)il2cpp_codegen_add(L_72, 1)));
		// tris[i6 + 2] = i4 + 2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_73 = V_4;
		int32_t L_74 = V_7;
		int32_t L_75 = V_6;
		NullCheck(L_73);
		(L_73)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_74, 2))), (int32_t)((int32_t)il2cpp_codegen_add(L_75, 2)));
		// tris[i6 + 3] = i4 + 1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_76 = V_4;
		int32_t L_77 = V_7;
		int32_t L_78 = V_6;
		NullCheck(L_76);
		(L_76)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_77, 3))), (int32_t)((int32_t)il2cpp_codegen_add(L_78, 1)));
		// tris[i6 + 4] = i4 + 2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_79 = V_4;
		int32_t L_80 = V_7;
		int32_t L_81 = V_6;
		NullCheck(L_79);
		(L_79)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_80, 4))), (int32_t)((int32_t)il2cpp_codegen_add(L_81, 2)));
		// tris[i6 + 5] = i4 + 3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_82 = V_4;
		int32_t L_83 = V_7;
		int32_t L_84 = V_6;
		NullCheck(L_82);
		(L_82)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_83, 5))), (int32_t)((int32_t)il2cpp_codegen_add(L_84, 3)));
		// for (int i = 0; i < triCount; i++)
		int32_t L_85 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_85, 1));
	}

IL_01ac:
	{
		// for (int i = 0; i < triCount; i++)
		int32_t L_86 = V_5;
		int32_t L_87 = ___0_triCount;
		if ((((int32_t)L_86) < ((int32_t)L_87)))
		{
			goto IL_003b;
		}
	}
	{
		// mesh.vertices = verts;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_88 = V_0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_89 = V_1;
		NullCheck(L_88);
		Mesh_set_vertices_m5BB814D89E9ACA00DBF19F7D8E22CB73AC73FE5C(L_88, L_89, NULL);
		// mesh.triangles = tris;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_90 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_91 = V_4;
		NullCheck(L_90);
		Mesh_set_triangles_m124405320579A8D92711BB5A124644963A26F60B(L_90, L_91, NULL);
		// mesh.uv = uvs;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_92 = V_0;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_93 = V_2;
		NullCheck(L_92);
		Mesh_set_uv_m6ED9C50E0DA8166DD48AC40FD6C828B9AD2E9617(L_92, L_93, NULL);
		// mesh.uv2 = uvs2;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_94 = V_0;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_95 = V_3;
		NullCheck(L_94);
		Mesh_set_uv2_m37B442C04EBB029C0AD9545C54F95D9BDAD8E9B5(L_94, L_95, NULL);
		// return mesh;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_96 = V_0;
		return L_96;
	}
}
// System.Void UnityStandardAssets.ImageEffects.Quads::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quads__ctor_m16AD4881C27EBAFF0BEB90D19BFDD7BEA88F0B1D (Quads_tE98082D335C0BFD295060C5EAC07382CCC97F50C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_a, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___2_t;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___2_t = L_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___0_a;
		float L_3 = L_2.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___1_b;
		float L_5 = L_4.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___0_a;
		float L_7 = L_6.___r_0;
		float L_8 = ___2_t;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = ___0_a;
		float L_10 = L_9.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11 = ___1_b;
		float L_12 = L_11.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = ___0_a;
		float L_14 = L_13.___g_1;
		float L_15 = ___2_t;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16 = ___0_a;
		float L_17 = L_16.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18 = ___1_b;
		float L_19 = L_18.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20 = ___0_a;
		float L_21 = L_20.___b_2;
		float L_22 = ___2_t;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_23 = ___0_a;
		float L_24 = L_23.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_25 = ___1_b;
		float L_26 = L_25.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_27 = ___0_a;
		float L_28 = L_27.___a_3;
		float L_29 = ___2_t;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_30;
		memset((&L_30), 0, sizeof(L_30));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_30), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), ((float)il2cpp_codegen_add(L_24, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_26, L_28)), L_29)))), /*hidden argument*/NULL);
		V_0 = L_30;
		goto IL_0069;
	}

IL_0069:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_31 = V_0;
		return L_31;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___0_value;
		float L_1 = ___1_min;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___1_min;
		___0_value = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___0_value;
		float L_5 = ___2_max;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___2_max;
		___0_value = L_7;
	}

IL_0019:
	{
		float L_8 = ___0_value;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___leftVector_9;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_lhs, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rhs, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___0_lhs;
		float L_1 = L_0.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___1_rhs;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___0_lhs;
		float L_5 = L_4.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___1_rhs;
		float L_7 = L_6.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___0_lhs;
		float L_9 = L_8.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___1_rhs;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___0_lhs;
		float L_13 = L_12.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___1_rhs;
		float L_15 = L_14.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = ___0_lhs;
		float L_17 = L_16.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = ___1_rhs;
		float L_19 = L_18.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = ___0_lhs;
		float L_21 = L_20.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = ___1_rhs;
		float L_23 = L_22.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = ___0_lhs;
		float L_25 = L_24.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = ___1_rhs;
		float L_27 = L_26.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28 = ___0_lhs;
		float L_29 = L_28.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = ___1_rhs;
		float L_31 = L_30.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32 = ___0_lhs;
		float L_33 = L_32.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34 = ___1_rhs;
		float L_35 = L_34.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36 = ___0_lhs;
		float L_37 = L_36.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = ___1_rhs;
		float L_39 = L_38.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40 = ___0_lhs;
		float L_41 = L_40.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42 = ___1_rhs;
		float L_43 = L_42.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44 = ___0_lhs;
		float L_45 = L_44.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46 = ___1_rhs;
		float L_47 = L_46.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48 = ___0_lhs;
		float L_49 = L_48.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50 = ___1_rhs;
		float L_51 = L_50.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52 = ___0_lhs;
		float L_53 = L_52.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54 = ___1_rhs;
		float L_55 = L_54.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56 = ___0_lhs;
		float L_57 = L_56.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58 = ___1_rhs;
		float L_59 = L_58.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60 = ___0_lhs;
		float L_61 = L_60.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62 = ___1_rhs;
		float L_63 = L_62.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_64;
		memset((&L_64), 0, sizeof(L_64));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_64), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), ((float)il2cpp_codegen_multiply(L_25, L_27)))), ((float)il2cpp_codegen_multiply(L_29, L_31)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_33, L_35)), ((float)il2cpp_codegen_multiply(L_37, L_39)))), ((float)il2cpp_codegen_multiply(L_41, L_43)))), ((float)il2cpp_codegen_multiply(L_45, L_47)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_49, L_51)), ((float)il2cpp_codegen_multiply(L_53, L_55)))), ((float)il2cpp_codegen_multiply(L_57, L_59)))), ((float)il2cpp_codegen_multiply(L_61, L_63)))), /*hidden argument*/NULL);
		V_0 = L_64;
		goto IL_00e5;
	}

IL_00e5:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_65 = V_0;
		return L_65;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* XRGeneralSettings_get_Instance_m9F222F982E62E066E119754858D8E73CFE42048C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return s_RuntimeSettingsInstance;
		il2cpp_codegen_runtime_class_init_inline(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_0 = ((XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_StaticFields*)il2cpp_codegen_static_fields_for(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var))->___s_RuntimeSettingsInstance_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42_inline (XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_LoaderManagerInstance; }
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_0 = __this->___m_LoaderManagerInstance_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* XRManagerSettings_get_activeLoaders_m47D0FF16B7012A87F56D93124DC5D8DA0ACA591F_inline (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) 
{
	{
		// public IReadOnlyList<XRLoader> activeLoaders => m_Loaders;
		List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822* L_0 = __this->___m_Loaders_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_CeilToInt_mF2BF9F4261B3431DC20E10A46CFEEED103C48963_inline (float ___0_f, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___0_f;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = ceil(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline (int32_t ___0_value, int32_t ___1_min, int32_t ___2_max, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = ___1_min;
		V_0 = (bool)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_3 = ___1_min;
		___0_value = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		int32_t L_4 = ___0_value;
		int32_t L_5 = ___2_max;
		V_1 = (bool)((((int32_t)L_4) > ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_7 = ___2_max;
		___0_value = L_7;
	}

IL_0019:
	{
		int32_t L_8 = ___0_value;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		int32_t L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline (float ___0_f, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___0_f;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = floor(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___0_value;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___0_value;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___0_value;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
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
