// WidgetBlueprintGeneratedClass ITM_Overclock_Details.ITM_Overclock_Details_C
// Size: 0x250 (Inherited: 0x230)
struct UITM_Overclock_Details_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UVerticalBox* LineBox; // 0x238(0x08)
	struct UItemUpgrade* Upgrade; // 0x240(0x08)
	int32_t FontSize; // 0x248(0x04)
	int32_t Linespace; // 0x24c(0x04)

	void Clear(); // Function ITM_Overclock_Details.ITM_Overclock_Details_C.Clear // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void AddStat(struct FItemUpgradeStatText InStat); // Function ITM_Overclock_Details.ITM_Overclock_Details_C.AddStat // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetData(struct UItemUpgrade* InUpgrade); // Function ITM_Overclock_Details.ITM_Overclock_Details_C.SetData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void PreConstruct(bool IsDesignTime); // Function ITM_Overclock_Details.ITM_Overclock_Details_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_ITM_Overclock_Details(int32_t EntryPoint); // Function ITM_Overclock_Details.ITM_Overclock_Details_C.ExecuteUbergraph_ITM_Overclock_Details // (Final|UbergraphFunction) // @ game+0x158ca90
};

