// WidgetBlueprintGeneratedClass HUD_GameTags.HUD_GameTags_C
// Size: 0x248 (Inherited: 0x230)
struct UHUD_GameTags_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UHUD_GameTags_Entry_C* GameTag_Experimental; // 0x238(0x08)
	struct UHUD_GameTags_Entry_C* GameTag_Sandbox; // 0x240(0x08)

	void UpdateSandboxTag(); // Function HUD_GameTags.HUD_GameTags_C.UpdateSandboxTag // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void UpdateExperimentalTag(); // Function HUD_GameTags.HUD_GameTags_C.UpdateExperimentalTag // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void Construct(); // Function HUD_GameTags.HUD_GameTags_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_HUD_GameTags(int32_t EntryPoint); // Function HUD_GameTags.HUD_GameTags_C.ExecuteUbergraph_HUD_GameTags // (Final|UbergraphFunction) // @ game+0x158ca90
};

