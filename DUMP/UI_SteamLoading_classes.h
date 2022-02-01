// WidgetBlueprintGeneratedClass UI_SteamLoading.UI_SteamLoading_C
// Size: 0x2f0 (Inherited: 0x270)
struct UUI_SteamLoading_C : UWindowWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UWidgetAnimation* FadeIn; // 0x278(0x08)
	struct UWidgetAnimation* FadeOut; // 0x280(0x08)
	struct UWidgetAnimation* BlinkText; // 0x288(0x08)
	struct UBasic_ButtonScalable2_C* Basic_ButtonScalable2; // 0x290(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar; // 0x298(0x08)
	struct UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow; // 0x2a0(0x08)
	struct UBlurBackground_C* BlurBackground; // 0x2a8(0x08)
	struct UTextBlock* DisconnectReasonText; // 0x2b0(0x08)
	struct UImage* FadeOverlay; // 0x2b8(0x08)
	struct UTextBlock* TEXT_Header; // 0x2c0(0x08)
	struct UTextBlock* TextBlock_1; // 0x2c8(0x08)
	struct UTextBlock* TextBlock_2; // 0x2d0(0x08)
	struct UCircularThrobber* Twitch_Loading; // 0x2d8(0x08)
	struct UWarningBox_C* WarningBox; // 0x2e0(0x08)
	struct UWarningBox_C* WarningBox_1; // 0x2e8(0x08)

	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function UI_SteamLoading.UI_SteamLoading_C.OnKeyUp // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void FadeIt(bool FadeIn, float Duration); // Function UI_SteamLoading.UI_SteamLoading_C.FadeIt // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void PreConstruct(bool IsDesignTime); // Function UI_SteamLoading.UI_SteamLoading_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature(); // Function UI_SteamLoading.UI_SteamLoading_C.BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x158ca90
	void Close(); // Function UI_SteamLoading.UI_SteamLoading_C.Close // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_UI_SteamLoading(int32_t EntryPoint); // Function UI_SteamLoading.UI_SteamLoading_C.ExecuteUbergraph_UI_SteamLoading // (Final|UbergraphFunction) // @ game+0x158ca90
};

