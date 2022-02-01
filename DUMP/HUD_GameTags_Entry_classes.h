// WidgetBlueprintGeneratedClass HUD_GameTags_Entry.HUD_GameTags_Entry_C
// Size: 0x268 (Inherited: 0x230)
struct UHUD_GameTags_Entry_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UTextBlock* BranchText; // 0x238(0x08)
	struct UImage* Image_Background; // 0x240(0x08)
	struct UImage* Image_Outline; // 0x248(0x08)
	struct FText TagName; // 0x250(0x18)

	void SetText(struct FText InText); // Function HUD_GameTags_Entry.HUD_GameTags_Entry_C.SetText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void PreConstruct(bool IsDesignTime); // Function HUD_GameTags_Entry.HUD_GameTags_Entry_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void SetVisible(bool InVisible); // Function HUD_GameTags_Entry.HUD_GameTags_Entry_C.SetVisible // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_HUD_GameTags_Entry(int32_t EntryPoint); // Function HUD_GameTags_Entry.HUD_GameTags_Entry_C.ExecuteUbergraph_HUD_GameTags_Entry // (Final|UbergraphFunction) // @ game+0x158ca90
};

