// WidgetBlueprintGeneratedClass UI_InfoScreen_DLCwidget.UI_InfoScreen_DLCwidget_C
// Size: 0x298 (Inherited: 0x230)
struct UUI_InfoScreen_DLCwidget_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* Hover; // 0x238(0x08)
	struct UWidgetAnimation* Click; // 0x240(0x08)
	struct UButton* BannerButton; // 0x248(0x08)
	struct USizeBox* BannerSizer; // 0x250(0x08)
	struct UWidgetSwitcher* SwitcherDLC; // 0x258(0x08)
	float Width; // 0x260(0x04)
	float SegmentTime (seconds); // 0x264(0x04)
	struct TArray<struct UGameDLC*> SteamDLCs; // 0x268(0x10)
	struct TArray<struct UGameDLC*> XboxDLCs; // 0x278(0x10)
	struct TArray<struct UGameDLC*> PS4DLCs; // 0x288(0x10)

	void GetAvailableDLCs(struct TArray<struct UGameDLC*> DLCs); // Function UI_InfoScreen_DLCwidget.UI_InfoScreen_DLCwidget_C.GetAvailableDLCs // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x158ca90
	void PreConstruct(bool IsDesignTime); // Function UI_InfoScreen_DLCwidget.UI_InfoScreen_DLCwidget_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void Construct(); // Function UI_InfoScreen_DLCwidget.UI_InfoScreen_DLCwidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void ShowNextWidget(); // Function UI_InfoScreen_DLCwidget.UI_InfoScreen_DLCwidget_C.ShowNextWidget // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void On Banner Clicked(struct UGameDLC* dlc); // Function UI_InfoScreen_DLCwidget.UI_InfoScreen_DLCwidget_C.On Banner Clicked // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void BndEvt__BannerButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function UI_InfoScreen_DLCwidget.UI_InfoScreen_DLCwidget_C.BndEvt__BannerButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x158ca90
	void BndEvt__BannerButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function UI_InfoScreen_DLCwidget.UI_InfoScreen_DLCwidget_C.BndEvt__BannerButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x158ca90
	void AnimClick(); // Function UI_InfoScreen_DLCwidget.UI_InfoScreen_DLCwidget_C.AnimClick // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_UI_InfoScreen_DLCwidget(int32_t EntryPoint); // Function UI_InfoScreen_DLCwidget.UI_InfoScreen_DLCwidget_C.ExecuteUbergraph_UI_InfoScreen_DLCwidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x158ca90
};

