// WidgetBlueprintGeneratedClass HUD_BossFight_BaseEntry.HUD_BossFight_BaseEntry_C
// Size: 0x260 (Inherited: 0x240)
struct UHUD_BossFight_BaseEntry_C : UBossFightWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x240(0x08)
	struct FBossFight BossFightInfo; // 0x248(0x18)

	void GetBossFight(struct FBossFight BossFight); // Function HUD_BossFight_BaseEntry.HUD_BossFight_BaseEntry_C.GetBossFight // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnCanTakeDamageChanged(bool OutCanTakeDamage); // Function HUD_BossFight_BaseEntry.HUD_BossFight_BaseEntry_C.OnCanTakeDamageChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnDeath(); // Function HUD_BossFight_BaseEntry.HUD_BossFight_BaseEntry_C.OnDeath // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnDisengaged(); // Function HUD_BossFight_BaseEntry.HUD_BossFight_BaseEntry_C.OnDisengaged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnHealthChanged(float Health); // Function HUD_BossFight_BaseEntry.HUD_BossFight_BaseEntry_C.OnHealthChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void Construct(); // Function HUD_BossFight_BaseEntry.HUD_BossFight_BaseEntry_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void OnFightRemoved(struct TScriptInterface<None> BossFight); // Function HUD_BossFight_BaseEntry.HUD_BossFight_BaseEntry_C.OnFightRemoved // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void Setup Invulnerability(); // Function HUD_BossFight_BaseEntry.HUD_BossFight_BaseEntry_C.Setup Invulnerability // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_HUD_BossFight_BaseEntry(int32_t EntryPoint); // Function HUD_BossFight_BaseEntry.HUD_BossFight_BaseEntry_C.ExecuteUbergraph_HUD_BossFight_BaseEntry // (Final|UbergraphFunction|HasDefaults) // @ game+0x158ca90
};

