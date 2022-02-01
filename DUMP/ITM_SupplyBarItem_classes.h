// WidgetBlueprintGeneratedClass ITM_SupplyBarItem.ITM_SupplyBarItem_C
// Size: 0x259 (Inherited: 0x230)
struct UITM_SupplyBarItem_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* AnimBlink; // 0x238(0x08)
	struct UImage* IMG_Border; // 0x240(0x08)
	struct UImage* IMG_Inner; // 0x248(0x08)
	bool IsActivated; // 0x250(0x01)
	enum class ENUM_MenuColors BorderColor; // 0x251(0x01)
	enum class ENUM_MenuColors InnerColor; // 0x252(0x01)
	bool IsBlinking; // 0x253(0x01)
	float BlinkUnder; // 0x254(0x04)
	enum class ENUM_MenuColors LowColorColor; // 0x258(0x01)

	void SetProgress(float InProgress); // Function ITM_SupplyBarItem.ITM_SupplyBarItem_C.SetProgress // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetColors(enum class ENUM_MenuColors InBorderColor, enum class ENUM_MenuColors InInnerColor, enum class ENUM_MenuColors InLowColorColor); // Function ITM_SupplyBarItem.ITM_SupplyBarItem_C.SetColors // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetOn(bool IsOn); // Function ITM_SupplyBarItem.ITM_SupplyBarItem_C.SetOn // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void PreConstruct(bool IsDesignTime); // Function ITM_SupplyBarItem.ITM_SupplyBarItem_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void Construct(); // Function ITM_SupplyBarItem.ITM_SupplyBarItem_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void OnBlinkingFinished(); // Function ITM_SupplyBarItem.ITM_SupplyBarItem_C.OnBlinkingFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_ITM_SupplyBarItem(int32_t EntryPoint); // Function ITM_SupplyBarItem.ITM_SupplyBarItem_C.ExecuteUbergraph_ITM_SupplyBarItem // (Final|UbergraphFunction) // @ game+0x158ca90
};

