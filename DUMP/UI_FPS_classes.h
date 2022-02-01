// WidgetBlueprintGeneratedClass UI_FPS.UI_FPS_C
// Size: 0x298 (Inherited: 0x230)
struct UUI_FPS_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UTextBlock* TextBlock_FPS; // 0x238(0x08)
	struct FSlateFontInfo Font; // 0x240(0x50)
	enum class ETextJustify Justification; // 0x290(0x01)
	char pad_291[0x3]; // 0x291(0x03)
	float SmoothedDeltaT; // 0x294(0x04)

	void PreConstruct(bool IsDesignTime); // Function UI_FPS.UI_FPS_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UI_FPS.UI_FPS_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void Construct(); // Function UI_FPS.UI_FPS_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void OnShowFPSChanged(bool NewValue); // Function UI_FPS.UI_FPS_C.OnShowFPSChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_UI_FPS(int32_t EntryPoint); // Function UI_FPS.UI_FPS_C.ExecuteUbergraph_UI_FPS // (Final|UbergraphFunction|HasDefaults) // @ game+0x158ca90
};

