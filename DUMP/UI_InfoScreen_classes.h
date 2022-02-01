// WidgetBlueprintGeneratedClass UI_InfoScreen.UI_InfoScreen_C
// Size: 0x324 (Inherited: 0x230)
struct UUI_InfoScreen_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* FadeIn; // 0x238(0x08)
	struct UWidgetAnimation* FadeOut; // 0x240(0x08)
	struct UWidgetAnimation* BlinkText; // 0x248(0x08)
	struct UAnimatedDRGlogo_C* AnimatedDRGlogo; // 0x250(0x08)
	struct UAnimatedStaticOverlay_C* AnimatedStaticOverlay; // 0x258(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar; // 0x260(0x08)
	struct UBlurBackground_C* BlurBackground; // 0x268(0x08)
	struct UBasic_ButtonMultiline_C* BTN_Claim; // 0x270(0x08)
	struct UBasic_ButtonMultiline_C* BTN_Claimed; // 0x278(0x08)
	struct UBasic_ButtonMultiline_C* BTN_ClaimLocked; // 0x280(0x08)
	struct UBasic_ButtonScalable2_C* BTN_Continue; // 0x288(0x08)
	struct UBasic_ButtonMultiline_C* BTN_Join_Steam; // 0x290(0x08)
	struct UBasic_ButtonMultiline_C* BTN_Steam_Joined; // 0x298(0x08)
	struct UImage* FadeOverlay; // 0x2a0(0x08)
	struct UImage* Image_1340; // 0x2a8(0x08)
	struct UImage* Image_Background; // 0x2b0(0x08)
	struct UHorizontalBox* JoinSteam_Buttons_HorizontalBox; // 0x2b8(0x08)
	struct UOptions_Language_C* Options_Language; // 0x2c0(0x08)
	struct UOptions_ShowInfoScreen_C* Options_ShowInfoScreen; // 0x2c8(0x08)
	struct UTextBlock* TEXT_Header1; // 0x2d0(0x08)
	struct UTextBlock* TEXT_Header2; // 0x2d8(0x08)
	struct UTextBlock* TEXT_Main; // 0x2e0(0x08)
	struct UTextBlock* TextBlock_3; // 0x2e8(0x08)
	struct UTextBlock* TextBlock_4; // 0x2f0(0x08)
	struct UUI_InfoScreen_DLCwidget_C* UI_InfoScreen_DLCwidget; // 0x2f8(0x08)
	struct UUI_InfoScreen_Overlay_DLC_Season01_C* UI_InfoScreen_Overlay_DLC_Season01_C_1; // 0x300(0x08)
	struct UUI_PatchNotes_C* UI_PatchNotes; // 0x308(0x08)
	struct FMulticastInlineDelegate OnClose; // 0x310(0x10)
	int32_t PathNodeIndex; // 0x320(0x04)

	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function UI_InfoScreen.UI_InfoScreen_C.OnKeyUp // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void UpdateButtons(bool HasClaimed, bool IsFollowing); // Function UI_InfoScreen.UI_InfoScreen_C.UpdateButtons // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void FadeIt(bool FadeIn, float Duration); // Function UI_InfoScreen.UI_InfoScreen_C.FadeIt // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void Construct(); // Function UI_InfoScreen.UI_InfoScreen_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void BndEvt__Button_210_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature(); // Function UI_InfoScreen.UI_InfoScreen_C.BndEvt__Button_210_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x158ca90
	void BndEvt__Button_4_K2Node_ComponentBoundEvent_190_OnButtonClickedEvent__DelegateSignature(); // Function UI_InfoScreen.UI_InfoScreen_C.BndEvt__Button_4_K2Node_ComponentBoundEvent_190_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x158ca90
	void BndEvt__Button_5_K2Node_ComponentBoundEvent_215_OnButtonClickedEvent__DelegateSignature(); // Function UI_InfoScreen.UI_InfoScreen_C.BndEvt__Button_5_K2Node_ComponentBoundEvent_215_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x158ca90
	void PreConstruct(bool IsDesignTime); // Function UI_InfoScreen.UI_InfoScreen_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void BndEvt__BTN_Steam_K2Node_ComponentBoundEvent_130_On Clicked__DelegateSignature(); // Function UI_InfoScreen.UI_InfoScreen_C.BndEvt__BTN_Steam_K2Node_ComponentBoundEvent_130_On Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x158ca90
	void BndEvt__BTN_Steam_Joined_K2Node_ComponentBoundEvent_136_On Clicked__DelegateSignature(); // Function UI_InfoScreen.UI_InfoScreen_C.BndEvt__BTN_Steam_Joined_K2Node_ComponentBoundEvent_136_On Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x158ca90
	void BndEvt__Basic_ButtonScalable2_C_0_K2Node_ComponentBoundEvent_82_OnClicked__DelegateSignature(); // Function UI_InfoScreen.UI_InfoScreen_C.BndEvt__Basic_ButtonScalable2_C_0_K2Node_ComponentBoundEvent_82_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x158ca90
	void SetupAnimHandlers(); // Function UI_InfoScreen.UI_InfoScreen_C.SetupAnimHandlers // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnFadeInStarted(); // Function UI_InfoScreen.UI_InfoScreen_C.OnFadeInStarted // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnFadeInFinished(); // Function UI_InfoScreen.UI_InfoScreen_C.OnFadeInFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void FadeOutStarted(); // Function UI_InfoScreen.UI_InfoScreen_C.FadeOutStarted // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_UI_InfoScreen(int32_t EntryPoint); // Function UI_InfoScreen.UI_InfoScreen_C.ExecuteUbergraph_UI_InfoScreen // (Final|UbergraphFunction|HasDefaults) // @ game+0x158ca90
	void OnClose__DelegateSignature(struct UUI_InfoScreen_C* Screen); // Function UI_InfoScreen.UI_InfoScreen_C.OnClose__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
};

