// WidgetBlueprintGeneratedClass HUD_PlayerName_Label.HUD_PlayerName_Label_C
// Size: 0x250 (Inherited: 0x230)
struct UHUD_PlayerName_Label_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UTextBlock* DATA_PlayerName; // 0x238(0x08)
	struct UInvalidationBox* InvalidationBox_2; // 0x240(0x08)
	struct UUI_PlayerSpeaking_C* PlayerSpeakingIcon; // 0x248(0x08)

	void UpdateCharacterName(); // Function HUD_PlayerName_Label.HUD_PlayerName_Label_C.UpdateCharacterName // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void Construct(); // Function HUD_PlayerName_Label.HUD_PlayerName_Label_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void OnPlayerNameChanged(struct FString NewName); // Function HUD_PlayerName_Label.HUD_PlayerName_Label_C.OnPlayerNameChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void PreConstruct(bool IsDesignTime); // Function HUD_PlayerName_Label.HUD_PlayerName_Label_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void SetupSpeakIcon(); // Function HUD_PlayerName_Label.HUD_PlayerName_Label_C.SetupSpeakIcon // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void RefreshIconVisibility(); // Function HUD_PlayerName_Label.HUD_PlayerName_Label_C.RefreshIconVisibility // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_HUD_PlayerName_Label(int32_t EntryPoint); // Function HUD_PlayerName_Label.HUD_PlayerName_Label_C.ExecuteUbergraph_HUD_PlayerName_Label // (Final|UbergraphFunction|HasDefaults) // @ game+0x158ca90
};

