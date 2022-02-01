// WidgetBlueprintGeneratedClass HUD_Warning_Manager.HUD_Warning_Manager_C
// Size: 0x240 (Inherited: 0x230)
struct UHUD_Warning_Manager_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UVerticalBox* V_WarningHolder; // 0x238(0x08)

	void PreConstruct(bool IsDesignTime); // Function HUD_Warning_Manager.HUD_Warning_Manager_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void Construct(); // Function HUD_Warning_Manager.HUD_Warning_Manager_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void OnNewHUDWarning_Event(struct UHUDWarningWidget* newWidget); // Function HUD_Warning_Manager.HUD_Warning_Manager_C.OnNewHUDWarning_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_HUD_Warning_Manager(int32_t EntryPoint); // Function HUD_Warning_Manager.HUD_Warning_Manager_C.ExecuteUbergraph_HUD_Warning_Manager // (Final|UbergraphFunction) // @ game+0x158ca90
};

