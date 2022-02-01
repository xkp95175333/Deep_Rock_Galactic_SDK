// WidgetBlueprintGeneratedClass Basic_Label.Basic_Label_C
// Size: 0x2f0 (Inherited: 0x230)
struct UBasic_Label_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UFSDLabelWidget* Label; // 0x238(0x08)
	struct FText Text; // 0x240(0x18)
	bool ToUpper; // 0x258(0x01)
	char pad_259[0x7]; // 0x259(0x07)
	struct FSlateFontInfo Font; // 0x260(0x50)
	enum class ENUM_MenuColors TextColor; // 0x2b0(0x01)
	enum class ETextJustify Justification; // 0x2b1(0x01)
	char pad_2B2[0x2]; // 0x2b2(0x02)
	float MinDesiredWidth; // 0x2b4(0x04)
	struct FMargin TextMargin; // 0x2b8(0x10)
	bool AutoTextWrap; // 0x2c8(0x01)
	char pad_2C9[0x3]; // 0x2c9(0x03)
	float WrapTextAt; // 0x2cc(0x04)
	enum class ETextWrappingPolicy WrappingPolicy; // 0x2d0(0x01)
	char pad_2D1[0x3]; // 0x2d1(0x03)
	int32_t MaxLength; // 0x2d4(0x04)
	struct FText MaxLengthIndicator; // 0x2d8(0x18)

	void SelectTextColor(enum class ENUM_MenuColors FALSE, enum class ENUM_MenuColors TRUE, bool Condition); // Function Basic_Label.Basic_Label_C.SelectTextColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void GetText(struct FText Text); // Function Basic_Label.Basic_Label_C.GetText // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x158ca90
	void SetWrappingPolicy(enum class ETextWrappingPolicy WrappingPolicy); // Function Basic_Label.Basic_Label_C.SetWrappingPolicy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetWrapTextAt(float WrapTextAt); // Function Basic_Label.Basic_Label_C.SetWrapTextAt // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetAutoWrapText(bool AutoTextWrap); // Function Basic_Label.Basic_Label_C.SetAutoWrapText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetFontSize(int32_t inFontSize); // Function Basic_Label.Basic_Label_C.SetFontSize // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetMinDesiredWidth(float MinDesiredWidth); // Function Basic_Label.Basic_Label_C.SetMinDesiredWidth // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetJustification(enum class ETextJustify Justification); // Function Basic_Label.Basic_Label_C.SetJustification // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetTextColor(enum class ENUM_MenuColors TextColor); // Function Basic_Label.Basic_Label_C.SetTextColor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetText(struct FText Text); // Function Basic_Label.Basic_Label_C.SetText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetMargin(struct FMargin New Margin); // Function Basic_Label.Basic_Label_C.SetMargin // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void PreConstruct(bool IsDesignTime); // Function Basic_Label.Basic_Label_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_Basic_Label(int32_t EntryPoint); // Function Basic_Label.Basic_Label_C.ExecuteUbergraph_Basic_Label // (Final|UbergraphFunction) // @ game+0x158ca90
};

