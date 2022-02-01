// WidgetBlueprintGeneratedClass UI_InfoScreen_DLCwidget_Setup.UI_InfoScreen_DLCwidget_Setup_C
// Size: 0x298 (Inherited: 0x230)
struct UUI_InfoScreen_DLCwidget_Setup_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* Idle; // 0x238(0x08)
	struct UButton* Button_1; // 0x240(0x08)
	struct UImage* Image_BG; // 0x248(0x08)
	struct UImage* Image_Flash; // 0x250(0x08)
	struct UTexture2D* Image; // 0x258(0x08)
	struct UGameDLC* GameDLC; // 0x260(0x08)
	struct FMulticastInlineDelegate OnClicked; // 0x268(0x10)
	struct FMulticastInlineDelegate OnHovered; // 0x278(0x10)
	struct FMulticastInlineDelegate OnUnhovered; // 0x288(0x10)

	void PlayAnim(); // Function UI_InfoScreen_DLCwidget_Setup.UI_InfoScreen_DLCwidget_Setup_C.PlayAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void PreConstruct(bool IsDesignTime); // Function UI_InfoScreen_DLCwidget_Setup.UI_InfoScreen_DLCwidget_Setup_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UI_InfoScreen_DLCwidget_Setup.UI_InfoScreen_DLCwidget_Setup_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x158ca90
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function UI_InfoScreen_DLCwidget_Setup.UI_InfoScreen_DLCwidget_Setup_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x158ca90
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function UI_InfoScreen_DLCwidget_Setup.UI_InfoScreen_DLCwidget_Setup_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_UI_InfoScreen_DLCwidget_Setup(int32_t EntryPoint); // Function UI_InfoScreen_DLCwidget_Setup.UI_InfoScreen_DLCwidget_Setup_C.ExecuteUbergraph_UI_InfoScreen_DLCwidget_Setup // (Final|UbergraphFunction) // @ game+0x158ca90
	void OnUnhovered__DelegateSignature(struct UGameDLC* dlc); // Function UI_InfoScreen_DLCwidget_Setup.UI_InfoScreen_DLCwidget_Setup_C.OnUnhovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnHovered__DelegateSignature(struct UGameDLC* dlc); // Function UI_InfoScreen_DLCwidget_Setup.UI_InfoScreen_DLCwidget_Setup_C.OnHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnClicked__DelegateSignature(struct UGameDLC* dlc); // Function UI_InfoScreen_DLCwidget_Setup.UI_InfoScreen_DLCwidget_Setup_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
};

