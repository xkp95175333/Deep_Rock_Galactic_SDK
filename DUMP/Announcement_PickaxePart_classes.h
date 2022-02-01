// WidgetBlueprintGeneratedClass Announcement_PickaxePart.Announcement_PickaxePart_C
// Size: 0x278 (Inherited: 0x230)
struct UAnnouncement_PickaxePart_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* AnnounceAnim; // 0x238(0x08)
	struct UBorder* InnerBorder; // 0x240(0x08)
	struct UITM_GeneratedIcon_Item_C* ITM_GeneratedIcon_Item; // 0x248(0x08)
	struct UBasic_Label_C* NameLabel; // 0x250(0x08)
	struct UCanvasPanel* Root; // 0x258(0x08)
	float StartDelay; // 0x260(0x04)
	char pad_264[0x4]; // 0x264(0x04)
	struct UPickaxePart* PickaxePart; // 0x268(0x08)
	struct UTextureRenderTarget2D* IconRenderTarget; // 0x270(0x08)

	void Construct(); // Function Announcement_PickaxePart.Announcement_PickaxePart_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void PreConstruct(bool IsDesignTime); // Function Announcement_PickaxePart.Announcement_PickaxePart_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void OnAnnounceAnimFinished(); // Function Announcement_PickaxePart.Announcement_PickaxePart_C.OnAnnounceAnimFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_Announcement_PickaxePart(int32_t EntryPoint); // Function Announcement_PickaxePart.Announcement_PickaxePart_C.ExecuteUbergraph_Announcement_PickaxePart // (Final|UbergraphFunction) // @ game+0x158ca90
};

