// WidgetBlueprintGeneratedClass Basic_CheckBox.Basic_CheckBox_C
// Size: 0x2cc (Inherited: 0x230)
struct UBasic_CheckBox_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* TickShow; // 0x238(0x08)
	struct UWidgetAnimation* Click; // 0x240(0x08)
	struct UImage* Checkbox_Border; // 0x248(0x08)
	struct UButton* Checkbox_Button; // 0x250(0x08)
	struct UImage* CheckBox_Tick; // 0x258(0x08)
	struct UImage* Checkbox_Undetermined; // 0x260(0x08)
	struct UTextBlock* CheckBoxText; // 0x268(0x08)
	struct UHorizontalBox* Horizontal; // 0x270(0x08)
	struct USizeBox* SizeBox_CheckBox; // 0x278(0x08)
	struct USizeBox* SizeBox_Text; // 0x280(0x08)
	struct UWidgetSwitcher* StateSwitcher; // 0x288(0x08)
	struct FMulticastInlineDelegate OnCheckStateChanged; // 0x290(0x10)
	float Size; // 0x2a0(0x04)
	bool IsChecked; // 0x2a4(0x01)
	char pad_2A5[0x3]; // 0x2a5(0x03)
	struct FText Text; // 0x2a8(0x18)
	bool UpperCase; // 0x2c0(0x01)
	enum class ENUM_MenuColors TextColor; // 0x2c1(0x01)
	enum class ECheckBoxState State; // 0x2c2(0x01)
	enum class ENUM_MenuColors FrameColor; // 0x2c3(0x01)
	enum class ENUM_MenuColors HoveredColor; // 0x2c4(0x01)
	char pad_2C5[0x3]; // 0x2c5(0x03)
	float TextWidth; // 0x2c8(0x04)

	void SetTextWidth(float InWidthOverride); // Function Basic_CheckBox.Basic_CheckBox_C.SetTextWidth // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetHovered(bool InHovered); // Function Basic_CheckBox.Basic_CheckBox_C.SetHovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetSize(float InSize); // Function Basic_CheckBox.Basic_CheckBox_C.SetSize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void GetState(enum class ECheckBoxState State); // Function Basic_CheckBox.Basic_CheckBox_C.GetState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x158ca90
	void SetState(enum class ECheckBoxState InState); // Function Basic_CheckBox.Basic_CheckBox_C.SetState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void GetUpperCased(bool UpperCase); // Function Basic_CheckBox.Basic_CheckBox_C.GetUpperCased // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x158ca90
	void SetText(struct FText InText, bool InUpperCase); // Function Basic_CheckBox.Basic_CheckBox_C.SetText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetIsChecked(bool InIsChecked); // Function Basic_CheckBox.Basic_CheckBox_C.SetIsChecked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	bool GetIsChecked(); // Function Basic_CheckBox.Basic_CheckBox_C.GetIsChecked // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x158ca90
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function Basic_CheckBox.Basic_CheckBox_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x158ca90
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function Basic_CheckBox.Basic_CheckBox_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x158ca90
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function Basic_CheckBox.Basic_CheckBox_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x158ca90
	void PreConstruct(bool IsDesignTime); // Function Basic_CheckBox.Basic_CheckBox_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void ClickButton(); // Function Basic_CheckBox.Basic_CheckBox_C.ClickButton // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnClicked(bool InChecked); // Function Basic_CheckBox.Basic_CheckBox_C.OnClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_Basic_CheckBox(int32_t EntryPoint); // Function Basic_CheckBox.Basic_CheckBox_C.ExecuteUbergraph_Basic_CheckBox // (Final|UbergraphFunction) // @ game+0x158ca90
	void OnCheckStateChanged__DelegateSignature(bool IsChecked); // Function Basic_CheckBox.Basic_CheckBox_C.OnCheckStateChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
};

