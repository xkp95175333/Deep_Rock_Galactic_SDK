// WidgetBlueprintGeneratedClass HUD_FlareIcon.HUD_FlareIcon_C
// Size: 0x278 (Inherited: 0x250)
struct UHUD_FlareIcon_C : UFSDUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct UWidgetAnimation* Ping; // 0x258(0x08)
	struct UProgressBar* FlareProduction; // 0x260(0x08)
	struct UInventoryComponent* Inventory; // 0x268(0x08)
	int32_t Index; // 0x270(0x04)
	float LastProgress; // 0x274(0x04)

	void SetProgress(float Percent); // Function HUD_FlareIcon.HUD_FlareIcon_C.SetProgress // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void Init(int32_t Index, struct UInventoryComponent* Inventory); // Function HUD_FlareIcon.HUD_FlareIcon_C.Init // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnFlareCountChanged(int32_t CurrentCount, struct UInventoryComponent* Inventory); // Function HUD_FlareIcon.HUD_FlareIcon_C.OnFlareCountChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void PreConstruct(bool IsDesignTime); // Function HUD_FlareIcon.HUD_FlareIcon_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void On Flare Production Finished(); // Function HUD_FlareIcon.HUD_FlareIcon_C.On Flare Production Finished // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_HUD_FlareIcon(int32_t EntryPoint); // Function HUD_FlareIcon.HUD_FlareIcon_C.ExecuteUbergraph_HUD_FlareIcon // (Final|UbergraphFunction) // @ game+0x158ca90
};

