// WidgetBlueprintGeneratedClass HUD_PlayerPerks.HUD_PlayerPerks_C
// Size: 0x240 (Inherited: 0x230)
struct UHUD_PlayerPerks_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UHorizontalBox* PerksBox; // 0x238(0x08)

	void SetCharacter(struct APlayerCharacter* InPlayerCharacter); // Function HUD_PlayerPerks.HUD_PlayerPerks_C.SetCharacter // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void Construct(); // Function HUD_PlayerPerks.HUD_PlayerPerks_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_HUD_PlayerPerks(int32_t EntryPoint); // Function HUD_PlayerPerks.HUD_PlayerPerks_C.ExecuteUbergraph_HUD_PlayerPerks // (Final|UbergraphFunction) // @ game+0x158ca90
};

