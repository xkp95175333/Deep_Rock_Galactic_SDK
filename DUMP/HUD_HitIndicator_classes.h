// WidgetBlueprintGeneratedClass HUD_HitIndicator.HUD_HitIndicator_C
// Size: 0x274 (Inherited: 0x250)
struct UHUD_HitIndicator_C : UFSDUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct UWidgetAnimation* HitAnim; // 0x258(0x08)
	struct UImage* IndicatorImage; // 0x260(0x08)
	struct UImage* KillImage; // 0x268(0x08)
	int32_t CurrentPriority; // 0x270(0x04)

	void StartAnimation(int32_t Priority, float Scale, struct FLinearColor Color, bool ShowKillImage); // Function HUD_HitIndicator.HUD_HitIndicator_C.StartAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnDamagedEnemy_Event(struct TScriptInterface<None> EnemyHealth, float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial); // Function HUD_HitIndicator.HUD_HitIndicator_C.OnDamagedEnemy_Event // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void Construct(); // Function HUD_HitIndicator.HUD_HitIndicator_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void OnHitAnimStarted(); // Function HUD_HitIndicator.HUD_HitIndicator_C.OnHitAnimStarted // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnHitAnimFinished(); // Function HUD_HitIndicator.HUD_HitIndicator_C.OnHitAnimFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void PreConstruct(bool IsDesignTime); // Function HUD_HitIndicator.HUD_HitIndicator_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_HUD_HitIndicator(int32_t EntryPoint); // Function HUD_HitIndicator.HUD_HitIndicator_C.ExecuteUbergraph_HUD_HitIndicator // (Final|UbergraphFunction) // @ game+0x158ca90
};

