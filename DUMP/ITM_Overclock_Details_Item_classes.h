// WidgetBlueprintGeneratedClass ITM_Overclock_Details_Item.ITM_Overclock_Details_Item_C
// Size: 0x268 (Inherited: 0x230)
struct UITM_Overclock_Details_Item_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UImage* AdvantagousIcon; // 0x238(0x08)
	struct UTextBlock* DetailText; // 0x240(0x08)
	struct FText Text; // 0x248(0x18)
	bool IsAdvantagous; // 0x260(0x01)
	char pad_261[0x3]; // 0x261(0x03)
	int32_t FontSize; // 0x264(0x04)

	void SetFontSize(int32_t NewSize); // Function ITM_Overclock_Details_Item.ITM_Overclock_Details_Item_C.SetFontSize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetData(struct FText InText, bool InIsAdvantagous); // Function ITM_Overclock_Details_Item.ITM_Overclock_Details_Item_C.SetData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void PreConstruct(bool IsDesignTime); // Function ITM_Overclock_Details_Item.ITM_Overclock_Details_Item_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_ITM_Overclock_Details_Item(int32_t EntryPoint); // Function ITM_Overclock_Details_Item.ITM_Overclock_Details_Item_C.ExecuteUbergraph_ITM_Overclock_Details_Item // (Final|UbergraphFunction) // @ game+0x158ca90
};

