// WidgetBlueprintGeneratedClass HUD_TutorialWidget.HUD_TutorialWidget_C
// Size: 0x291 (Inherited: 0x258)
struct UHUD_TutorialWidget_C : UTutorialWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x258(0x08)
	struct UWidgetAnimation* Exit; // 0x260(0x08)
	struct UITM_BasicTutorialWindow_C* ITM_BasicTutorialWindow; // 0x268(0x08)
	float AnimationSpeed; // 0x270(0x04)
	char pad_274[0x4]; // 0x274(0x04)
	struct FText DefaultHeader; // 0x278(0x18)
	bool IsChangingHintText; // 0x290(0x01)

	void OnShow(struct FText Text, struct FText Title, struct FText TaskText, struct UTexture2D* Image); // Function HUD_TutorialWidget.HUD_TutorialWidget_C.OnShow // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x158ca90
	void Construct(); // Function HUD_TutorialWidget.HUD_TutorialWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void OnHide(bool watched); // Function HUD_TutorialWidget.HUD_TutorialWidget_C.OnHide // (Event|Protected|BlueprintEvent) // @ game+0x158ca90
	void BndEvt__ITM_BasicTutorialWindow_K2Node_ComponentBoundEvent_0_RemoveAnimationFinished__DelegateSignature(); // Function HUD_TutorialWidget.HUD_TutorialWidget_C.BndEvt__ITM_BasicTutorialWindow_K2Node_ComponentBoundEvent_0_RemoveAnimationFinished__DelegateSignature // (BlueprintEvent) // @ game+0x158ca90
	void BndEvt__ITM_BasicTutorialWindow_K2Node_ComponentBoundEvent_1_CompleteAnimationFinished__DelegateSignature(); // Function HUD_TutorialWidget.HUD_TutorialWidget_C.BndEvt__ITM_BasicTutorialWindow_K2Node_ComponentBoundEvent_1_CompleteAnimationFinished__DelegateSignature // (BlueprintEvent) // @ game+0x158ca90
	void ContinueChange(); // Function HUD_TutorialWidget.HUD_TutorialWidget_C.ContinueChange // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_HUD_TutorialWidget(int32_t EntryPoint); // Function HUD_TutorialWidget.HUD_TutorialWidget_C.ExecuteUbergraph_HUD_TutorialWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x158ca90
};

