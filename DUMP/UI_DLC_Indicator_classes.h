// WidgetBlueprintGeneratedClass UI_DLC_Indicator.UI_DLC_Indicator_C
// Size: 0x258 (Inherited: 0x230)
struct UUI_DLC_Indicator_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct USizeBox* DLC_SizeBox; // 0x238(0x08)
	struct UCanvasPanel* Root_Canvas; // 0x240(0x08)
	int32_t Size; // 0x248(0x04)
	enum class ENUM_MenuColors Tint; // 0x24c(0x01)
	char pad_24D[0x3]; // 0x24d(0x03)
	struct UDLCBase* dlc; // 0x250(0x08)

	void SetFromDLC(struct UDLCBase* InFromDLC); // Function UI_DLC_Indicator.UI_DLC_Indicator_C.SetFromDLC // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetFromSkin(struct UItemSkin* InItem); // Function UI_DLC_Indicator.UI_DLC_Indicator_C.SetFromSkin // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void PreConstruct(bool IsDesignTime); // Function UI_DLC_Indicator.UI_DLC_Indicator_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void Construct(); // Function UI_DLC_Indicator.UI_DLC_Indicator_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_UI_DLC_Indicator(int32_t EntryPoint); // Function UI_DLC_Indicator.UI_DLC_Indicator_C.ExecuteUbergraph_UI_DLC_Indicator // (Final|UbergraphFunction) // @ game+0x158ca90
};

