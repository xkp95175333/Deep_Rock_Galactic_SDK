// WidgetBlueprintGeneratedClass Basic_ResourceICon.Basic_ResourceIcon_C
// Size: 0x251 (Inherited: 0x230)
struct UBasic_ResourceIcon_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UImage* ResourceIcon; // 0x238(0x08)
	float IconSize; // 0x240(0x04)
	char pad_244[0x4]; // 0x244(0x04)
	struct UBasic_ToolTip_C* ToolTip; // 0x248(0x08)
	bool ShowToolTip; // 0x250(0x01)

	void SetIconSize(float InSize); // Function Basic_ResourceICon.Basic_ResourceIcon_C.SetIconSize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetResource(struct UResourceData* Resource); // Function Basic_ResourceICon.Basic_ResourceIcon_C.SetResource // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void PreConstruct(bool IsDesignTime); // Function Basic_ResourceICon.Basic_ResourceIcon_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_Basic_ResourceIcon(int32_t EntryPoint); // Function Basic_ResourceICon.Basic_ResourceIcon_C.ExecuteUbergraph_Basic_ResourceIcon // (Final|UbergraphFunction) // @ game+0x158ca90
};

