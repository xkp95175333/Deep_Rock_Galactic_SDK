// WidgetBlueprintGeneratedClass HUD_Altimeter.HUD_Altimeter_C
// Size: 0x248 (Inherited: 0x230)
struct UHUD_Altimeter_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UImage* Border; // 0x238(0x08)
	struct UTextBlock* DepthLabel; // 0x240(0x08)

	void SetDepth(int32_t NewDepth); // Function HUD_Altimeter.HUD_Altimeter_C.SetDepth // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void Construct(); // Function HUD_Altimeter.HUD_Altimeter_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void DepthChanged(int32_t Depth); // Function HUD_Altimeter.HUD_Altimeter_C.DepthChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void PreConstruct(bool IsDesignTime); // Function HUD_Altimeter.HUD_Altimeter_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_HUD_Altimeter(int32_t EntryPoint); // Function HUD_Altimeter.HUD_Altimeter_C.ExecuteUbergraph_HUD_Altimeter // (Final|UbergraphFunction|HasDefaults) // @ game+0x158ca90
};

