// WidgetBlueprintGeneratedClass Basic_TextInputField.Basic_TextInputField_C
// Size: 0x280 (Inherited: 0x230)
struct UBasic_TextInputField_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UEditableTextBox* InputField; // 0x238(0x08)
	struct UBorder* InputFieldBorder; // 0x240(0x08)
	struct FText HintText; // 0x248(0x18)
	struct FMulticastInlineDelegate OnTextChanged; // 0x260(0x10)
	struct FMulticastInlineDelegate OnTextCommitted; // 0x270(0x10)

	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function Basic_TextInputField.Basic_TextInputField_C.OnKeyUp // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetText(struct FText InText); // Function Basic_TextInputField.Basic_TextInputField_C.SetText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void GetHint(struct FText HintText); // Function Basic_TextInputField.Basic_TextInputField_C.GetHint // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x158ca90
	struct FText GetText(); // Function Basic_TextInputField.Basic_TextInputField_C.GetText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x158ca90
	void PreConstruct(bool IsDesignTime); // Function Basic_TextInputField.Basic_TextInputField_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void BndEvt__InputField_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(struct FText Text); // Function Basic_TextInputField.Basic_TextInputField_C.BndEvt__InputField_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x158ca90
	void BndEvt__InputField_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText Text, enum class ETextCommit CommitMethod); // Function Basic_TextInputField.Basic_TextInputField_C.BndEvt__InputField_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_Basic_TextInputField(int32_t EntryPoint); // Function Basic_TextInputField.Basic_TextInputField_C.ExecuteUbergraph_Basic_TextInputField // (Final|UbergraphFunction|HasDefaults) // @ game+0x158ca90
	void OnTextCommitted__DelegateSignature(struct FText Text, char CommitMethod); // Function Basic_TextInputField.Basic_TextInputField_C.OnTextCommitted__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnTextChanged__DelegateSignature(struct FText Text); // Function Basic_TextInputField.Basic_TextInputField_C.OnTextChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
};

