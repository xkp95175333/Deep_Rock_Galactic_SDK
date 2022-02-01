// WidgetBlueprintGeneratedClass Announcement_Vanity.Announcement_Vanity_C
// Size: 0x2a0 (Inherited: 0x230)
struct UAnnouncement_Vanity_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* AnnounceAnim; // 0x238(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar; // 0x240(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_84; // 0x248(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_86; // 0x250(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_87; // 0x258(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_88; // 0x260(0x08)
	struct UBorder* Border_2; // 0x268(0x08)
	struct UITM_CharacterIcon_C* ITM_CharacterIcon; // 0x270(0x08)
	struct UBasic_Label_C* NameLabel; // 0x278(0x08)
	struct UCanvasPanel* Root; // 0x280(0x08)
	float StartDelay; // 0x288(0x04)
	char pad_28C[0x4]; // 0x28c(0x04)
	struct UVanityItem* VanityItem; // 0x290(0x08)
	struct UPlayerCharacterID* VanityOwner; // 0x298(0x08)

	void PreConstruct(bool IsDesignTime); // Function Announcement_Vanity.Announcement_Vanity_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void Construct(); // Function Announcement_Vanity.Announcement_Vanity_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void OnAnnounceAnimFinished(); // Function Announcement_Vanity.Announcement_Vanity_C.OnAnnounceAnimFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_Announcement_Vanity(int32_t EntryPoint); // Function Announcement_Vanity.Announcement_Vanity_C.ExecuteUbergraph_Announcement_Vanity // (Final|UbergraphFunction|HasDefaults) // @ game+0x158ca90
};

