// WidgetBlueprintGeneratedClass HUD_Flares.HUD_Flares_C
// Size: 0x2d5 (Inherited: 0x250)
struct UHUD_Flares_C : UFSDUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct UHorizontalBox* FlareBox; // 0x258(0x08)
	struct UUI_AdvancedLabel_C* InputLabel; // 0x260(0x08)
	struct TArray<struct UHUD_FlareIcon_C*> Icons; // 0x268(0x10)
	struct TSet<struct FName> reasons; // 0x278(0x50)
	bool LaserpointerPressed; // 0x2c8(0x01)
	char pad_2C9[0x3]; // 0x2c9(0x03)
	int32_t NextIndex; // 0x2cc(0x04)
	float Progress; // 0x2d0(0x04)
	bool RechargingFirst; // 0x2d4(0x01)

	void SetFlareProduction(int32_t InNextIndex, float InProgress); // Function HUD_Flares.HUD_Flares_C.SetFlareProduction // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void CreateIcons(int32_t IconCount); // Function HUD_Flares.HUD_Flares_C.CreateIcons // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnItemsLoaded(); // Function HUD_Flares.HUD_Flares_C.OnItemsLoaded // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnFlareProduction(int32_t NextIndex, float Progress); // Function HUD_Flares.HUD_Flares_C.OnFlareProduction // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void Setup Dynamic HUD(); // Function HUD_Flares.HUD_Flares_C.Setup Dynamic HUD // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnFlareCountChanged(int32_t CurrentCount, struct UInventoryComponent* Inventory); // Function HUD_Flares.HUD_Flares_C.OnFlareCountChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void Construct(); // Function HUD_Flares.HUD_Flares_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void UpdateVisibility(); // Function HUD_Flares.HUD_Flares_C.UpdateVisibility // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnLaserPointerPressed(); // Function HUD_Flares.HUD_Flares_C.OnLaserPointerPressed // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnLaserPointerReleased_Event(); // Function HUD_Flares.HUD_Flares_C.OnLaserPointerReleased_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void PreConstruct(bool IsDesignTime); // Function HUD_Flares.HUD_Flares_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void OnMaxFlareCountChanged_Event(int32_t CurrentCount, struct UInventoryComponent* Inventory); // Function HUD_Flares.HUD_Flares_C.OnMaxFlareCountChanged_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_HUD_Flares(int32_t EntryPoint); // Function HUD_Flares.HUD_Flares_C.ExecuteUbergraph_HUD_Flares // (Final|UbergraphFunction) // @ game+0x158ca90
};

