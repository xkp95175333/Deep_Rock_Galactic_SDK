// WidgetBlueprintGeneratedClass HUD_Resources_Player.HUD_Resources_Player_C
// Size: 0x274 (Inherited: 0x230)
struct UHUD_Resources_Player_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UHUD_OptionalHudElement_C* HUD_OptionalHudElement; // 0x238(0x08)
	struct UHorizontalBox* ResourceParent; // 0x240(0x08)
	struct URetainerBox* Retainer; // 0x248(0x08)
	struct APlayerCharacter* Character; // 0x250(0x08)
	struct UResourcesComponent* ResourceComponent; // 0x258(0x08)
	bool LaserpointerEquipped; // 0x260(0x01)
	char pad_261[0x7]; // 0x261(0x07)
	struct UHUDVisibilityGroup* VisibilityGroup; // 0x268(0x08)
	int32_t PreviewCount; // 0x270(0x04)

	void Construct(); // Function HUD_Resources_Player.HUD_Resources_Player_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void PreConstruct(bool IsDesignTime); // Function HUD_Resources_Player.HUD_Resources_Player_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void Add Resource(struct UCappedResource* Resource); // Function HUD_Resources_Player.HUD_Resources_Player_C.Add Resource // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnResourceAdded(struct UCappedResource* Resource); // Function HUD_Resources_Player.HUD_Resources_Player_C.OnResourceAdded // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnResourceChanged(struct UHUD_Resources_Player_Icon_C* ResourceIcon); // Function HUD_Resources_Player.HUD_Resources_Player_C.OnResourceChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void RefreshVisibility(); // Function HUD_Resources_Player.HUD_Resources_Player_C.RefreshVisibility // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnLaserPointerPressed_Event(); // Function HUD_Resources_Player.HUD_Resources_Player_C.OnLaserPointerPressed_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnLaserPointerReleased_Event(); // Function HUD_Resources_Player.HUD_Resources_Player_C.OnLaserPointerReleased_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_HUD_Resources_Player(int32_t EntryPoint); // Function HUD_Resources_Player.HUD_Resources_Player_C.ExecuteUbergraph_HUD_Resources_Player // (Final|UbergraphFunction) // @ game+0x158ca90
};

