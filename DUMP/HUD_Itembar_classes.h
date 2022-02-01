// WidgetBlueprintGeneratedClass HUD_Itembar.HUD_Itembar_C
// Size: 0x2b1 (Inherited: 0x288)
struct UHUD_Itembar_C : UItemsBar {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UWidgetAnimation* FadeOut; // 0x290(0x08)
	struct UBorder* FadeBorder; // 0x298(0x08)
	struct UHorizontalBox* IconsParent; // 0x2a0(0x08)
	struct URetainerBox* RetainerBox_1; // 0x2a8(0x08)
	bool Fading; // 0x2b0(0x01)

	void OnItemAdded(struct UItemsBarIcon* ItemIcon); // Function HUD_Itembar.HUD_Itembar_C.OnItemAdded // (Event|Protected|BlueprintEvent) // @ game+0x158ca90
	void OnClear(); // Function HUD_Itembar.HUD_Itembar_C.OnClear // (Event|Protected|BlueprintEvent) // @ game+0x158ca90
	void Construct(); // Function HUD_Itembar.HUD_Itembar_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void OnItemEquipped(struct UItemsBarIcon* ItemIcon); // Function HUD_Itembar.HUD_Itembar_C.OnItemEquipped // (Event|Protected|BlueprintEvent) // @ game+0x158ca90
	void Show(); // Function HUD_Itembar.HUD_Itembar_C.Show // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnInputSourceChanged(enum class EFSDInputSource InputSource); // Function HUD_Itembar.HUD_Itembar_C.OnInputSourceChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnItemClicked(); // Function HUD_Itembar.HUD_Itembar_C.OnItemClicked // (Event|Protected|BlueprintEvent) // @ game+0x158ca90
	void PreConstruct(bool IsDesignTime); // Function HUD_Itembar.HUD_Itembar_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void FadeOutFinished(); // Function HUD_Itembar.HUD_Itembar_C.FadeOutFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_HUD_Itembar(int32_t EntryPoint); // Function HUD_Itembar.HUD_Itembar_C.ExecuteUbergraph_HUD_Itembar // (Final|UbergraphFunction) // @ game+0x158ca90
};

