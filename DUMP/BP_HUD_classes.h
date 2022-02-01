// BlueprintGeneratedClass BP_HUD.BP_HUD_C
// Size: 0x3b0 (Inherited: 0x338)
struct ABP_HUD_C : AFSDHUD {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x338(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x340(0x08)
	struct TArray<struct UWidget*> Widgets; // 0x348(0x10)
	struct APlayerController* PlayerController; // 0x358(0x08)
	bool HudInitialized; // 0x360(0x01)
	char pad_361[0x7]; // 0x361(0x07)
	struct UFSDMainHUDWidget* HudWidget; // 0x368(0x08)
	struct TArray<struct URadarPointComponent*> RadarPointsInQueue; // 0x370(0x10)
	struct APlayerCharacter* PlayerCharacter; // 0x380(0x08)
	struct UWindowWidget* EscMenu; // 0x388(0x08)
	struct UWindowWidget* CheatMenu; // 0x390(0x08)
	struct UScreenOverlay_Afflictions_C* AfflictionWidget; // 0x398(0x08)
	struct UBP_Invitation_C* InviteRequest; // 0x3a0(0x08)
	struct UWindowWidget* QuickCheatMenu; // 0x3a8(0x08)

	void IsInitialized(bool Out); // Function BP_HUD.BP_HUD_C.IsInitialized // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void CreateQuickCheatsIfNotCreated(); // Function BP_HUD.BP_HUD_C.CreateQuickCheatsIfNotCreated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void PushEvent(struct UWidget* EventWidget, bool Left); // Function BP_HUD.BP_HUD_C.PushEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void CreateCheatsIfNotCreated(); // Function BP_HUD.BP_HUD_C.CreateCheatsIfNotCreated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void RemoveAllWidgetsFromParents(); // Function BP_HUD.BP_HUD_C.RemoveAllWidgetsFromParents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void AddAllWidgetToViewport(); // Function BP_HUD.BP_HUD_C.AddAllWidgetToViewport // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void AddWidget(struct UUserWidget* Class, struct UWidget* Widget); // Function BP_HUD.BP_HUD_C.AddWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnLoaded_73E4B65F44516401F86CB88F7530B278(struct UObject* Loaded); // Function BP_HUD.BP_HUD_C.OnLoaded_73E4B65F44516401F86CB88F7530B278 // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void PlayerSpawned(struct APlayerCharacter* Player); // Function BP_HUD.BP_HUD_C.PlayerSpawned // (Event|Public|BlueprintEvent) // @ game+0x158ca90
	void RadarPointAdded(struct URadarPointComponent* radarPoint); // Function BP_HUD.BP_HUD_C.RadarPointAdded // (Event|Public|BlueprintEvent) // @ game+0x158ca90
	void HandleSeamlessTravel(); // Function BP_HUD.BP_HUD_C.HandleSeamlessTravel // (Event|Public|BlueprintEvent) // @ game+0x158ca90
	void OnVisibilityChanged(); // Function BP_HUD.BP_HUD_C.OnVisibilityChanged // (Event|Protected|BlueprintEvent) // @ game+0x158ca90
	void ReceiveDestroyed(); // Function BP_HUD.BP_HUD_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0x158ca90
	void CameraDroneSpawned(struct APlayerCameraDrone* Drone); // Function BP_HUD.BP_HUD_C.CameraDroneSpawned // (Event|Public|BlueprintEvent) // @ game+0x158ca90
	void OnEndLevelReceived_Event(); // Function BP_HUD.BP_HUD_C.OnEndLevelReceived_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnShowMainMenu(); // Function BP_HUD.BP_HUD_C.OnShowMainMenu // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void LoadEscapeMenu(); // Function BP_HUD.BP_HUD_C.LoadEscapeMenu // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnHit_Event(float Damage, struct UDamageClass* DamageClass, struct AActor* DamageCauser, bool anyHealthLost); // Function BP_HUD.BP_HUD_C.OnHit_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void QuickCheatMenuRequest(); // Function BP_HUD.BP_HUD_C.QuickCheatMenuRequest // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void CheatMenuRequest(); // Function BP_HUD.BP_HUD_C.CheatMenuRequest // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_BP_HUD(int32_t EntryPoint); // Function BP_HUD.BP_HUD_C.ExecuteUbergraph_BP_HUD // (Final|UbergraphFunction) // @ game+0x158ca90
};

