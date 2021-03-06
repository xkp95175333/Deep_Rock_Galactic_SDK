// WidgetBlueprintGeneratedClass HUD_AmmoCount.HUD_AmmoCount_C
// Size: 0x270 (Inherited: 0x250)
struct UHUD_AmmoCount_C : UAmmoCountWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct UHorizontalBox* AmmoBox; // 0x258(0x08)
	struct UTextBlock* DATA_Current; // 0x260(0x08)
	struct UTextBlock* DATA_Total; // 0x268(0x08)

	void OnTotalChanged(int32_t Total); // Function HUD_AmmoCount.HUD_AmmoCount_C.OnTotalChanged // (Event|Protected|BlueprintEvent) // @ game+0x158ca90
	void OnAmountChanged(int32_t count); // Function HUD_AmmoCount.HUD_AmmoCount_C.OnAmountChanged // (Event|Protected|BlueprintEvent) // @ game+0x158ca90
	void OnVisibleChanged(bool Visible, bool showClipCount); // Function HUD_AmmoCount.HUD_AmmoCount_C.OnVisibleChanged // (Event|Protected|BlueprintEvent) // @ game+0x158ca90
	void Construct(); // Function HUD_AmmoCount.HUD_AmmoCount_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void OnTotalVisibleChanged(bool Visible); // Function HUD_AmmoCount.HUD_AmmoCount_C.OnTotalVisibleChanged // (Event|Protected|BlueprintEvent) // @ game+0x158ca90
	void PreConstruct(bool IsDesignTime); // Function HUD_AmmoCount.HUD_AmmoCount_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_HUD_AmmoCount(int32_t EntryPoint); // Function HUD_AmmoCount.HUD_AmmoCount_C.ExecuteUbergraph_HUD_AmmoCount // (Final|UbergraphFunction|HasDefaults) // @ game+0x158ca90
};

