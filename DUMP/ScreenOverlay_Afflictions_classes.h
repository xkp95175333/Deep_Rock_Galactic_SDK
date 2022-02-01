// WidgetBlueprintGeneratedClass ScreenOverlay_Afflictions.ScreenOverlay_Afflictions_C
// Size: 0x2a0 (Inherited: 0x230)
struct UScreenOverlay_Afflictions_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UCanvasPanel* RootCanvas; // 0x238(0x08)
	struct APlayerCharacter* Player; // 0x240(0x08)
	struct UHealthComponent* HealthComponent; // 0x248(0x08)
	struct TMap<struct UPlayerAfflictionOverlay*, struct UPlayerAfflictionOverlayWidget*> ActiveOverlays; // 0x250(0x50)

	void FindOverlayWidget(struct UPlayerAfflictionOverlay* OverlayData, bool CreateIfNew, struct UPlayerAfflictionOverlayWidget* OutWidget); // Function ScreenOverlay_Afflictions.ScreenOverlay_Afflictions_C.FindOverlayWidget // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void Construct(); // Function ScreenOverlay_Afflictions.ScreenOverlay_Afflictions_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void OnShowOverlay_Event(struct UPlayerAfflictionOverlay* Overlay); // Function ScreenOverlay_Afflictions.ScreenOverlay_Afflictions_C.OnShowOverlay_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnHideOverlay_Event(struct UPlayerAfflictionOverlay* Overlay); // Function ScreenOverlay_Afflictions.ScreenOverlay_Afflictions_C.OnHideOverlay_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_ScreenOverlay_Afflictions(int32_t EntryPoint); // Function ScreenOverlay_Afflictions.ScreenOverlay_Afflictions_C.ExecuteUbergraph_ScreenOverlay_Afflictions // (Final|UbergraphFunction) // @ game+0x158ca90
};

