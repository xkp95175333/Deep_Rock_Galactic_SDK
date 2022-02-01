// WidgetBlueprintGeneratedClass HUD_DefaultLabel.HUD_DefaultLabel_C
// Size: 0x285 (Inherited: 0x230)
struct UHUD_DefaultLabel_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UTextBlock* Label; // 0x238(0x08)
	struct FText Text; // 0x240(0x18)
	int32_t Font Size; // 0x258(0x04)
	enum class ENUM_AcuminCondensedTypeface Typeface; // 0x25c(0x01)
	enum class ETextJustify Justification; // 0x25d(0x01)
	char pad_25E[0x2]; // 0x25e(0x02)
	struct FFontOutlineSettings Outline Settings; // 0x260(0x20)
	float Min Desired Width; // 0x280(0x04)
	enum class ENUM_MenuColors TextColor; // 0x284(0x01)

	void SetTextColor(enum class ENUM_MenuColors ColorSelector); // Function HUD_DefaultLabel.HUD_DefaultLabel_C.SetTextColor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetOutlineSettings(struct FFontOutlineSettings InFontInfo_OutlineSettings); // Function HUD_DefaultLabel.HUD_DefaultLabel_C.SetOutlineSettings // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetJustification(enum class ETextJustify InJustification); // Function HUD_DefaultLabel.HUD_DefaultLabel_C.SetJustification // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetTypeFace(enum class ENUM_AcuminCondensedTypeface Typeface); // Function HUD_DefaultLabel.HUD_DefaultLabel_C.SetTypeFace // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetFontSize(int32_t inFontSize); // Function HUD_DefaultLabel.HUD_DefaultLabel_C.SetFontSize // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetText(struct FText NewText); // Function HUD_DefaultLabel.HUD_DefaultLabel_C.SetText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void PreConstruct(bool IsDesignTime); // Function HUD_DefaultLabel.HUD_DefaultLabel_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_HUD_DefaultLabel(int32_t EntryPoint); // Function HUD_DefaultLabel.HUD_DefaultLabel_C.ExecuteUbergraph_HUD_DefaultLabel // (Final|UbergraphFunction) // @ game+0x158ca90
};

