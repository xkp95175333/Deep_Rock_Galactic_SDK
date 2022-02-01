// WidgetBlueprintGeneratedClass UI_ImageTinted.UI_ImageTinted_C
// Size: 0x2d0 (Inherited: 0x230)
struct UUI_ImageTinted_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UImage* ImageWidget; // 0x238(0x08)
	struct FSlateBrush Brush; // 0x240(0x88)
	enum class ENUM_MenuColors Tint; // 0x2c8(0x01)
	char pad_2C9[0x3]; // 0x2c9(0x03)
	float Tint Opacity; // 0x2cc(0x04)

	void SetBrushSize(struct FVector2D Brush Image Size); // Function UI_ImageTinted.UI_ImageTinted_C.SetBrushSize // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SelectTint(enum class ENUM_MenuColors FALSE, enum class ENUM_MenuColors TRUE, bool Condition); // Function UI_ImageTinted.UI_ImageTinted_C.SelectTint // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void GetBrush(struct FSlateBrush Brush); // Function UI_ImageTinted.UI_ImageTinted_C.GetBrush // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x158ca90
	void SetBrushFromTexture(struct UTexture2D* Texture, bool MatchSize); // Function UI_ImageTinted.UI_ImageTinted_C.SetBrushFromTexture // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetTint(enum class ENUM_MenuColors InTint, float InOpacity); // Function UI_ImageTinted.UI_ImageTinted_C.SetTint // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetBrush(struct FSlateBrush InBrush); // Function UI_ImageTinted.UI_ImageTinted_C.SetBrush // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void PreConstruct(bool IsDesignTime); // Function UI_ImageTinted.UI_ImageTinted_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_UI_ImageTinted(int32_t EntryPoint); // Function UI_ImageTinted.UI_ImageTinted_C.ExecuteUbergraph_UI_ImageTinted // (Final|UbergraphFunction) // @ game+0x158ca90
};

