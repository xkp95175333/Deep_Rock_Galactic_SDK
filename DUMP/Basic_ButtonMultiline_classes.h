// WidgetBlueprintGeneratedClass Basic_ButtonMultiline.Basic_ButtonMultiline_C
// Size: 0x2b8 (Inherited: 0x230)
struct UBasic_ButtonMultiline_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UButton* Button_1; // 0x238(0x08)
	struct UImage* I_Background; // 0x240(0x08)
	struct UImage* I_Outline; // 0x248(0x08)
	struct UImage* IMG_Brackets; // 0x250(0x08)
	struct UImage* IMG_Overlay; // 0x258(0x08)
	struct USizeBox* SizeBox_1; // 0x260(0x08)
	struct UTextBlock* TXT_ButtonText; // 0x268(0x08)
	struct FMulticastInlineDelegate On Clicked; // 0x270(0x10)
	struct FText Text; // 0x280(0x18)
	int32_t Font Size; // 0x298(0x04)
	struct FVector2D Button Size; // 0x29c(0x08)
	bool Overlay; // 0x2a4(0x01)
	char pad_2A5[0x3]; // 0x2a5(0x03)
	struct USoundBase* HoveredSound; // 0x2a8(0x08)
	struct USoundBase* PressedSound; // 0x2b0(0x08)

	void SetButtonText(struct FText NewParam); // Function Basic_ButtonMultiline.Basic_ButtonMultiline_C.SetButtonText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetFontSize(int32_t NewParam); // Function Basic_ButtonMultiline.Basic_ButtonMultiline_C.SetFontSize // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void PreConstruct(bool IsDesignTime); // Function Basic_ButtonMultiline.Basic_ButtonMultiline_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function Basic_ButtonMultiline.Basic_ButtonMultiline_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x158ca90
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function Basic_ButtonMultiline.Basic_ButtonMultiline_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x158ca90
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function Basic_ButtonMultiline.Basic_ButtonMultiline_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_Basic_ButtonMultiline(int32_t EntryPoint); // Function Basic_ButtonMultiline.Basic_ButtonMultiline_C.ExecuteUbergraph_Basic_ButtonMultiline // (Final|UbergraphFunction|HasDefaults) // @ game+0x158ca90
	void On Clicked__DelegateSignature(); // Function Basic_ButtonMultiline.Basic_ButtonMultiline_C.On Clicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
};

