// WidgetBlueprintGeneratedClass UI_RichTextInput.UI_RichTextInput_C
// Size: 0x558 (Inherited: 0x518)
struct UUI_RichTextInput_C : URichTextInputWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x518(0x08)
	struct UImage* InputIcon; // 0x520(0x08)
	struct UTextBlock* InputText; // 0x528(0x08)
	struct UTextBlock* InteractionText; // 0x530(0x08)
	struct UOverlay* OverlayIcon; // 0x538(0x08)
	struct UOverlay* OverlayText; // 0x540(0x08)
	struct USizeBox* Sizer; // 0x548(0x08)
	struct UWidgetSwitcher* switcher; // 0x550(0x08)

	void ShowFromDisplayDetails(struct FInputDisplay details); // Function UI_RichTextInput.UI_RichTextInput_C.ShowFromDisplayDetails // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetInteraction(enum class EInputInteraction InInteraction); // Function UI_RichTextInput.UI_RichTextInput_C.SetInteraction // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ShowAsText(struct FText InText, struct FLinearColor InTint); // Function UI_RichTextInput.UI_RichTextInput_C.ShowAsText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetSize(float InHeightOverride, float InWidthOverride, float InMinDesiredWidth); // Function UI_RichTextInput.UI_RichTextInput_C.SetSize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ShowAsIcon(struct UTexture2D* InTexture, struct FLinearColor InTint); // Function UI_RichTextInput.UI_RichTextInput_C.ShowAsIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ReceiveInputDetails(struct FInputDisplay InDisplay); // Function UI_RichTextInput.UI_RichTextInput_C.ReceiveInputDetails // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x158ca90
	void ReceiveInputUnknown(); // Function UI_RichTextInput.UI_RichTextInput_C.ReceiveInputUnknown // (Event|Protected|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_UI_RichTextInput(int32_t EntryPoint); // Function UI_RichTextInput.UI_RichTextInput_C.ExecuteUbergraph_UI_RichTextInput // (Final|UbergraphFunction|HasDefaults) // @ game+0x158ca90
};

