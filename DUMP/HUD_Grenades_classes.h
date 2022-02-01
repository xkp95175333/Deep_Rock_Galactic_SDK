// WidgetBlueprintGeneratedClass HUD_Grenades.HUD_Grenades_C
// Size: 0x282 (Inherited: 0x250)
struct UHUD_Grenades_C : UFSDUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct UTextBlock* DATA_GrenadeCount; // 0x258(0x08)
	struct UHUD_GrenadeIcon_C* HUD_GrenadeIcon; // 0x260(0x08)
	struct UUI_AdvancedLabel_C* UI_AdvancedLabel; // 0x268(0x08)
	struct UInventoryComponent* Inventory; // 0x270(0x08)
	struct AThrownGrenadeItem* GrenadeItem; // 0x278(0x08)
	bool LaserpointerPressed; // 0x280(0x01)
	bool ItemEquipped; // 0x281(0x01)

	void PreConstruct(bool IsDesignTime); // Function HUD_Grenades.HUD_Grenades_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void OnGrenadeCountChanged(int32_t CurrentCount); // Function HUD_Grenades.HUD_Grenades_C.OnGrenadeCountChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void Construct(); // Function HUD_Grenades.HUD_Grenades_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void Setup Dynamic HUD(); // Function HUD_Grenades.HUD_Grenades_C.Setup Dynamic HUD // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnItemEquipped_Event(struct AItem* Item); // Function HUD_Grenades.HUD_Grenades_C.OnItemEquipped_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnItemUnequipped_Event(struct AItem* Item); // Function HUD_Grenades.HUD_Grenades_C.OnItemUnequipped_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void Update Visibility(); // Function HUD_Grenades.HUD_Grenades_C.Update Visibility // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnLaserPointerPressed(); // Function HUD_Grenades.HUD_Grenades_C.OnLaserPointerPressed // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnLaserPointerReleased(); // Function HUD_Grenades.HUD_Grenades_C.OnLaserPointerReleased // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_HUD_Grenades(int32_t EntryPoint); // Function HUD_Grenades.HUD_Grenades_C.ExecuteUbergraph_HUD_Grenades // (Final|UbergraphFunction|HasDefaults) // @ game+0x158ca90
};

