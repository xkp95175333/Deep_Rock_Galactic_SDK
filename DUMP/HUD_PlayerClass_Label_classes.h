// WidgetBlueprintGeneratedClass HUD_PlayerClass_Label.HUD_PlayerClass_Label_C
// Size: 0x248 (Inherited: 0x230)
struct UHUD_PlayerClass_Label_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UTextBlock* DATA_ClassName; // 0x238(0x08)
	struct UInvalidationBox* InvalidationBox_1; // 0x240(0x08)

	void UpdateCharacterName(); // Function HUD_PlayerClass_Label.HUD_PlayerClass_Label_C.UpdateCharacterName // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void Construct(); // Function HUD_PlayerClass_Label.HUD_PlayerClass_Label_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void PreConstruct(bool IsDesignTime); // Function HUD_PlayerClass_Label.HUD_PlayerClass_Label_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_HUD_PlayerClass_Label(int32_t EntryPoint); // Function HUD_PlayerClass_Label.HUD_PlayerClass_Label_C.ExecuteUbergraph_HUD_PlayerClass_Label // (Final|UbergraphFunction|HasDefaults) // @ game+0x158ca90
};

