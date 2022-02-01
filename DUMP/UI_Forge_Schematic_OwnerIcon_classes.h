// WidgetBlueprintGeneratedClass UI_Forge_Schematic_OwnerIcon.UI_Forge_Schematic_OwnerIcon_C
// Size: 0x268 (Inherited: 0x230)
struct UUI_Forge_Schematic_OwnerIcon_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UImage* IconFiller; // 0x238(0x08)
	struct UImage* IconOutline; // 0x240(0x08)
	struct USizeBox* MaxSizer; // 0x248(0x08)
	struct UCanvasPanel* RootCanvas; // 0x250(0x08)
	int32_t MaxWidth; // 0x258(0x04)
	int32_t MaxHeight; // 0x25c(0x04)
	struct USchematic* Schematic; // 0x260(0x08)

	void FromActorClass(struct AActor* Actor); // Function UI_Forge_Schematic_OwnerIcon.UI_Forge_Schematic_OwnerIcon_C.FromActorClass // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void FromItemID(struct UItemID* ItemID); // Function UI_Forge_Schematic_OwnerIcon.UI_Forge_Schematic_OwnerIcon_C.FromItemID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetIconAndVisibility(struct UTexture2D* Texture, struct FLinearColor InColor); // Function UI_Forge_Schematic_OwnerIcon.UI_Forge_Schematic_OwnerIcon_C.SetIconAndVisibility // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void FromSchematic(struct USchematic* InSchematic); // Function UI_Forge_Schematic_OwnerIcon.UI_Forge_Schematic_OwnerIcon_C.FromSchematic // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetMaxSize(int32_t InWidth, int32_t InHeight); // Function UI_Forge_Schematic_OwnerIcon.UI_Forge_Schematic_OwnerIcon_C.SetMaxSize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void PreConstruct(bool IsDesignTime); // Function UI_Forge_Schematic_OwnerIcon.UI_Forge_Schematic_OwnerIcon_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_UI_Forge_Schematic_OwnerIcon(int32_t EntryPoint); // Function UI_Forge_Schematic_OwnerIcon.UI_Forge_Schematic_OwnerIcon_C.ExecuteUbergraph_UI_Forge_Schematic_OwnerIcon // (Final|UbergraphFunction) // @ game+0x158ca90
};

