// WidgetBlueprintGeneratedClass UI_AdvancedLabel.UI_AdvancedLabel_C
// Size: 0x330 (Inherited: 0x268)
struct UUI_AdvancedLabel_C : UFSDAdvancedLabel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UVerticalBox* Lines; // 0x270(0x08)
	struct FSlateFontInfo Font; // 0x278(0x50)
	struct UHorizontalBox* CurrentLine; // 0x2c8(0x08)
	int32_t Icon Size; // 0x2d0(0x04)
	struct FLinearColor Text Tint; // 0x2d4(0x10)
	struct FLinearColor Key Name Tint; // 0x2e4(0x10)
	struct FLinearColor PC  Icon Tint; // 0x2f4(0x10)
	struct FLinearColor Controller Icon Tint; // 0x304(0x10)
	int32_t Icon Size_ControllerOverride; // 0x314(0x04)
	struct FLinearColor Shadow Color; // 0x318(0x10)
	struct FVector2D Shadow Offset; // 0x328(0x08)

	void SetFont(struct FSlateFontInfo InFont, bool InKeepFontSize); // Function UI_AdvancedLabel.UI_AdvancedLabel_C.SetFont // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetIconSize(int32_t Icon Size, int32_t Icon Size_ControllerOverride); // Function UI_AdvancedLabel.UI_AdvancedLabel_C.SetIconSize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetFontSize(int32_t Font Size); // Function UI_AdvancedLabel.UI_AdvancedLabel_C.SetFontSize // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetPreviewAs(char PreviewAs); // Function UI_AdvancedLabel.UI_AdvancedLabel_C.SetPreviewAs // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetTints(struct FLinearColor Text Tint, struct FLinearColor Key Name Tint, struct FLinearColor PC  Icon Tint, struct FLinearColor Controller Icon Tint); // Function UI_AdvancedLabel.UI_AdvancedLabel_C.SetTints // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetKeyNameTint(struct FLinearColor Key Name Tint); // Function UI_AdvancedLabel.UI_AdvancedLabel_C.SetKeyNameTint // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetIconTint(struct FLinearColor PC  Icon Tint, struct FLinearColor Controller Icon Tint); // Function UI_AdvancedLabel.UI_AdvancedLabel_C.SetIconTint // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetTextTint(struct FLinearColor Text Tint); // Function UI_AdvancedLabel.UI_AdvancedLabel_C.SetTextTint // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnNewLine(int32_t Index); // Function UI_AdvancedLabel.UI_AdvancedLabel_C.OnNewLine // (Event|Protected|BlueprintEvent) // @ game+0x158ca90
	void OnAddIcon(struct FString Name, struct FActionIconMapping Icon); // Function UI_AdvancedLabel.UI_AdvancedLabel_C.OnAddIcon // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x158ca90
	void OnAddKeyName(struct FString Name); // Function UI_AdvancedLabel.UI_AdvancedLabel_C.OnAddKeyName // (Event|Protected|BlueprintEvent) // @ game+0x158ca90
	void OnAddString(struct FString Value); // Function UI_AdvancedLabel.UI_AdvancedLabel_C.OnAddString // (Event|Protected|BlueprintEvent) // @ game+0x158ca90
	void OnReset(); // Function UI_AdvancedLabel.UI_AdvancedLabel_C.OnReset // (Event|Protected|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_UI_AdvancedLabel(int32_t EntryPoint); // Function UI_AdvancedLabel.UI_AdvancedLabel_C.ExecuteUbergraph_UI_AdvancedLabel // (Final|UbergraphFunction|HasDefaults) // @ game+0x158ca90
};

