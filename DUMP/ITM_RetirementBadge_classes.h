// WidgetBlueprintGeneratedClass ITM_RetirementBadge.ITM_RetirementBadge_C
// Size: 0x258 (Inherited: 0x230)
struct UITM_RetirementBadge_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UImage* ICON_Badge; // 0x238(0x08)
	int32_t Preview Times Retired; // 0x240(0x04)
	char pad_244[0x4]; // 0x244(0x04)
	struct TArray<struct TSoftObjectPtr<struct UTexture2D>> SoftTextures; // 0x248(0x10)

	void GetTexture(int32_t Index, struct UTexture2D* AsTexture 2D); // Function ITM_RetirementBadge.ITM_RetirementBadge_C.GetTexture // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x158ca90
	void SetTimesRetired(int32_t TimesRetired); // Function ITM_RetirementBadge.ITM_RetirementBadge_C.SetTimesRetired // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetCharacterClass(struct AFSDPlayerState* PlayerState, struct UPlayerCharacterID* Character); // Function ITM_RetirementBadge.ITM_RetirementBadge_C.SetCharacterClass // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SelectIcon(int32_t RetirementLevel, struct UTexture2D* Icon); // Function ITM_RetirementBadge.ITM_RetirementBadge_C.SelectIcon // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x158ca90
	void SetData(struct AFSDPlayerState* Player); // Function ITM_RetirementBadge.ITM_RetirementBadge_C.SetData // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void PreConstruct(bool IsDesignTime); // Function ITM_RetirementBadge.ITM_RetirementBadge_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void Construct(); // Function ITM_RetirementBadge.ITM_RetirementBadge_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_ITM_RetirementBadge(int32_t EntryPoint); // Function ITM_RetirementBadge.ITM_RetirementBadge_C.ExecuteUbergraph_ITM_RetirementBadge // (Final|UbergraphFunction) // @ game+0x158ca90
};

