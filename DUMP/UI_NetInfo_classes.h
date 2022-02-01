// WidgetBlueprintGeneratedClass UI_NetInfo.UI_NetInfo_C
// Size: 0x2c8 (Inherited: 0x230)
struct UUI_NetInfo_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UHorizontalBox* PktLossBox; // 0x238(0x08)
	struct UTextBlock* TextBlock_FPS; // 0x240(0x08)
	struct UTextBlock* TextBlock_Jitter; // 0x248(0x08)
	struct UTextBlock* TextBlock_Ping; // 0x250(0x08)
	struct UTextBlock* TextBlock_PktLoss_PlayerName; // 0x258(0x08)
	struct UTextBlock* TextBlock_PktLossIn; // 0x260(0x08)
	struct UTextBlock* TextBlock_PktLossOut; // 0x268(0x08)
	struct FSlateFontInfo Font; // 0x270(0x50)
	enum class ETextJustify Justification; // 0x2c0(0x01)
	char pad_2C1[0x3]; // 0x2c1(0x03)
	int32_t NetInfoLevel; // 0x2c4(0x04)

	void GetPktLossString(struct FText Names, struct FText PktLossIn, struct FText PktLossOut, struct FText Ping, struct FText Jitter, bool IsValid); // Function UI_NetInfo.UI_NetInfo_C.GetPktLossString // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x158ca90
	void GetPlayerName(struct AFSDPlayerController* PlayerController, struct FString Name); // Function UI_NetInfo.UI_NetInfo_C.GetPlayerName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x158ca90
	void PreConstruct(bool IsDesignTime); // Function UI_NetInfo.UI_NetInfo_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void Construct(); // Function UI_NetInfo.UI_NetInfo_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void SlowTick(); // Function UI_NetInfo.UI_NetInfo_C.SlowTick // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnNetInfoLevelChanged(int32_t NewValue); // Function UI_NetInfo.UI_NetInfo_C.OnNetInfoLevelChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_UI_NetInfo(int32_t EntryPoint); // Function UI_NetInfo.UI_NetInfo_C.ExecuteUbergraph_UI_NetInfo // (Final|UbergraphFunction|HasDefaults) // @ game+0x158ca90
};

