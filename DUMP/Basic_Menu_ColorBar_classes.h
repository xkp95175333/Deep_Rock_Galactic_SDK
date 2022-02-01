// WidgetBlueprintGeneratedClass Basic_Menu_ColorBar.Basic_Menu_ColorBar_C
// Size: 0x258 (Inherited: 0x230)
struct UBasic_Menu_ColorBar_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBorder* ColorBar; // 0x238(0x08)
	struct USizeBox* ColorBar_Sizer; // 0x240(0x08)
	enum class ENUM_PixelWidths Colorbar_Thickness; // 0x248(0x01)
	enum class ENUM_MenuColors Colorbar_Tint; // 0x249(0x01)
	char pad_24A[0x2]; // 0x24a(0x02)
	float Colorbar_Opacity; // 0x24c(0x04)
	struct UMaterialInterface* Material; // 0x250(0x08)

	void SetOpacity(float Opacity); // Function Basic_Menu_ColorBar.Basic_Menu_ColorBar_C.SetOpacity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetThickness(enum class ENUM_PixelWidths Index); // Function Basic_Menu_ColorBar.Basic_Menu_ColorBar_C.SetThickness // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetColor(enum class ENUM_MenuColors Brush Color); // Function Basic_Menu_ColorBar.Basic_Menu_ColorBar_C.SetColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void PreConstruct(bool IsDesignTime); // Function Basic_Menu_ColorBar.Basic_Menu_ColorBar_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void SetData(enum class ENUM_PixelWidths Colorbar_Thickness, enum class ENUM_MenuColors Colorbar_Tint, float Colorbar_Opacity, struct UMaterialInterface* Material); // Function Basic_Menu_ColorBar.Basic_Menu_ColorBar_C.SetData // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_Basic_Menu_ColorBar(int32_t EntryPoint); // Function Basic_Menu_ColorBar.Basic_Menu_ColorBar_C.ExecuteUbergraph_Basic_Menu_ColorBar // (Final|UbergraphFunction) // @ game+0x158ca90
};

