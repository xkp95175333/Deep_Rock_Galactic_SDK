// WidgetBlueprintGeneratedClass Basic_PasswordField.Basic_PasswordField_C
// Size: 0x280 (Inherited: 0x230)
struct UBasic_PasswordField_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UEditableTextBox* ServerPassword; // 0x238(0x08)
	struct UBorder* ServerPasswordBorder; // 0x240(0x08)
	struct FText HintText; // 0x248(0x18)
	struct FMulticastInlineDelegate OnTextChanged; // 0x260(0x10)
	struct FMulticastInlineDelegate OnTextCommitted; // 0x270(0x10)

	void GetPassword(struct FText Password); // Function Basic_PasswordField.Basic_PasswordField_C.GetPassword // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x158ca90
	struct FText GetPasswordHint(); // Function Basic_PasswordField.Basic_PasswordField_C.GetPasswordHint // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x158ca90
	void PreConstruct(bool IsDesignTime); // Function Basic_PasswordField.Basic_PasswordField_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void BndEvt__ServerPassword_K2Node_ComponentBoundEvent_10_OnEditableTextBoxChangedEvent__DelegateSignature(struct FText Text); // Function Basic_PasswordField.Basic_PasswordField_C.BndEvt__ServerPassword_K2Node_ComponentBoundEvent_10_OnEditableTextBoxChangedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x158ca90
	void BndEvt__ServerPassword_K2Node_ComponentBoundEvent_11_OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText Text, enum class ETextCommit CommitMethod); // Function Basic_PasswordField.Basic_PasswordField_C.BndEvt__ServerPassword_K2Node_ComponentBoundEvent_11_OnEditableTextBoxCommittedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_Basic_PasswordField(int32_t EntryPoint); // Function Basic_PasswordField.Basic_PasswordField_C.ExecuteUbergraph_Basic_PasswordField // (Final|UbergraphFunction|HasDefaults) // @ game+0x158ca90
	void OnTextCommitted__DelegateSignature(struct FText Text, char CommitMethod); // Function Basic_PasswordField.Basic_PasswordField_C.OnTextCommitted__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnTextChanged__DelegateSignature(struct FText Text); // Function Basic_PasswordField.Basic_PasswordField_C.OnTextChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
};

