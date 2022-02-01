// WidgetBlueprintGeneratedClass HUD_EnemyTargeting_AfflictionBox.HUD_EnemyTargeting_AfflictionBox_C
// Size: 0x2c0 (Inherited: 0x230)
struct UHUD_EnemyTargeting_AfflictionBox_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UHorizontalBox* AfflictionBox; // 0x238(0x08)
	float Size; // 0x240(0x04)
	char pad_244[0x4]; // 0x244(0x04)
	struct UPawnAfflictionComponent* AfflictionComponent; // 0x248(0x08)
	struct TMap<struct UPawnAffliction*, struct UHUD_EnemyTargeting_Affliction_C*> AfflictionWidgets; // 0x250(0x50)
	struct TArray<struct TSoftObjectPtr<struct UPawnAffliction>> PreviewAfflictions; // 0x2a0(0x10)
	struct TArray<struct UPawnAffliction*> IgnoreAfflictions; // 0x2b0(0x10)

	void SetAfflictionComponent(struct UPawnAfflictionComponent* InAfflictionComponent); // Function HUD_EnemyTargeting_AfflictionBox.HUD_EnemyTargeting_AfflictionBox_C.SetAfflictionComponent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ToggleIgnoreAfflictions(struct TArray<struct UPawnAffliction*> Affliction, bool ShouldIgnore); // Function HUD_EnemyTargeting_AfflictionBox.HUD_EnemyTargeting_AfflictionBox_C.ToggleIgnoreAfflictions // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ToggleIgnoreAffliction(struct UPawnAffliction* Affliction, bool ShouldIgnore); // Function HUD_EnemyTargeting_AfflictionBox.HUD_EnemyTargeting_AfflictionBox_C.ToggleIgnoreAffliction // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ClearAfflictions(); // Function HUD_EnemyTargeting_AfflictionBox.HUD_EnemyTargeting_AfflictionBox_C.ClearAfflictions // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ToggleAffliction(struct UPawnAffliction* InAffliction, bool InVisible); // Function HUD_EnemyTargeting_AfflictionBox.HUD_EnemyTargeting_AfflictionBox_C.ToggleAffliction // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetTarget(struct AActor* InAfflictionTarget); // Function HUD_EnemyTargeting_AfflictionBox.HUD_EnemyTargeting_AfflictionBox_C.SetTarget // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnAfflictionActivatedEvent_Event(struct UPawnAffliction* Affliction); // Function HUD_EnemyTargeting_AfflictionBox.HUD_EnemyTargeting_AfflictionBox_C.OnAfflictionActivatedEvent_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnAfflictionDeactivatedEvent_Event(struct UPawnAffliction* Affliction); // Function HUD_EnemyTargeting_AfflictionBox.HUD_EnemyTargeting_AfflictionBox_C.OnAfflictionDeactivatedEvent_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void PreConstruct(bool IsDesignTime); // Function HUD_EnemyTargeting_AfflictionBox.HUD_EnemyTargeting_AfflictionBox_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_HUD_EnemyTargeting_AfflictionBox(int32_t EntryPoint); // Function HUD_EnemyTargeting_AfflictionBox.HUD_EnemyTargeting_AfflictionBox_C.ExecuteUbergraph_HUD_EnemyTargeting_AfflictionBox // (Final|UbergraphFunction|HasDefaults) // @ game+0x158ca90
};

