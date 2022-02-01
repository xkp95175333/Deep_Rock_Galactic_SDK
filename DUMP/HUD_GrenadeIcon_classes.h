// WidgetBlueprintGeneratedClass HUD_GrenadeIcon.HUD_GrenadeIcon_C
// Size: 0x261 (Inherited: 0x250)
struct UHUD_GrenadeIcon_C : UFSDUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct UImage* Image_18; // 0x258(0x08)
	bool IsOn; // 0x260(0x01)

	void SetOn(bool Visible); // Function HUD_GrenadeIcon.HUD_GrenadeIcon_C.SetOn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void PreConstruct(bool IsDesignTime); // Function HUD_GrenadeIcon.HUD_GrenadeIcon_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_HUD_GrenadeIcon(int32_t EntryPoint); // Function HUD_GrenadeIcon.HUD_GrenadeIcon_C.ExecuteUbergraph_HUD_GrenadeIcon // (Final|UbergraphFunction) // @ game+0x158ca90
};

