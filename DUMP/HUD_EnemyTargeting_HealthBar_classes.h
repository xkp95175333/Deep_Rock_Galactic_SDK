// WidgetBlueprintGeneratedClass HUD_EnemyTargeting_HealthBar.HUD_EnemyTargeting_HealthBar_C
// Size: 0x2d8 (Inherited: 0x270)
struct UHUD_EnemyTargeting_HealthBar_C : ULookingAtContentWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UWidgetAnimation* WeakPointHit; // 0x278(0x08)
	struct UWidgetAnimation* NormalHit; // 0x280(0x08)
	struct UProgressBar* GhostHealthBar; // 0x288(0x08)
	struct UProgressBar* HealthBar; // 0x290(0x08)
	struct UCanvasPanel* HealthBarCanvas; // 0x298(0x08)
	struct USizeBox* HealthBarSize; // 0x2a0(0x08)
	struct UImage* Icon_Shield; // 0x2a8(0x08)
	struct UTextBlock* OwnerNameLabel; // 0x2b0(0x08)
	struct UTextBlock* TargetName; // 0x2b8(0x08)
	struct TScriptInterface<None> PreviousHealthBar; // 0x2c0(0x10)
	struct UWidgetAnimation* HitAnimation; // 0x2d0(0x08)

	void RefreshOwnerName(bool InReset); // Function HUD_EnemyTargeting_HealthBar.HUD_EnemyTargeting_HealthBar_C.RefreshOwnerName // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void GetCharacter(struct APlayerCharacter* Character); // Function HUD_EnemyTargeting_HealthBar.HUD_EnemyTargeting_HealthBar_C.GetCharacter // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x158ca90
	void Refresh(bool Reset); // Function HUD_EnemyTargeting_HealthBar.HUD_EnemyTargeting_HealthBar_C.Refresh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void PreConstruct(bool IsDesignTime); // Function HUD_EnemyTargeting_HealthBar.HUD_EnemyTargeting_HealthBar_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void ReceiveNewTarget(struct AActor* InCurrentTarget); // Function HUD_EnemyTargeting_HealthBar.HUD_EnemyTargeting_HealthBar_C.ReceiveNewTarget // (Event|Protected|BlueprintEvent) // @ game+0x158ca90
	void ReceiveUpdateTarget(struct AActor* InCurrentTarget, float DeltaTime); // Function HUD_EnemyTargeting_HealthBar.HUD_EnemyTargeting_HealthBar_C.ReceiveUpdateTarget // (Event|Protected|BlueprintEvent) // @ game+0x158ca90
	void Construct(); // Function HUD_EnemyTargeting_HealthBar.HUD_EnemyTargeting_HealthBar_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_HUD_EnemyTargeting_HealthBar(int32_t EntryPoint); // Function HUD_EnemyTargeting_HealthBar.HUD_EnemyTargeting_HealthBar_C.ExecuteUbergraph_HUD_EnemyTargeting_HealthBar // (Final|UbergraphFunction) // @ game+0x158ca90
};

