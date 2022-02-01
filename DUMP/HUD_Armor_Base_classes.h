// WidgetBlueprintGeneratedClass HUD_Armor_Base.HUD_Armor_Base_C
// Size: 0x258 (Inherited: 0x230)
struct UHUD_Armor_Base_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBorder* Border_1; // 0x238(0x08)
	struct UImage* IconImage; // 0x240(0x08)
	struct UProgressBar* ProgressBar; // 0x248(0x08)
	struct UHealthComponent* HealthComponent; // 0x250(0x08)

	void ArmorChanged(float Health); // Function HUD_Armor_Base.HUD_Armor_Base_C.ArmorChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void Bind To Health Component(struct UHealthComponent* HealthComponent); // Function HUD_Armor_Base.HUD_Armor_Base_C.Bind To Health Component // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void PreConstruct(bool IsDesignTime); // Function HUD_Armor_Base.HUD_Armor_Base_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void Unbind Health Component(); // Function HUD_Armor_Base.HUD_Armor_Base_C.Unbind Health Component // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void Set Armor Pct(float InPercent); // Function HUD_Armor_Base.HUD_Armor_Base_C.Set Armor Pct // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void Bind To Player(struct APlayerCharacter* Player); // Function HUD_Armor_Base.HUD_Armor_Base_C.Bind To Player // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_HUD_Armor_Base(int32_t EntryPoint); // Function HUD_Armor_Base.HUD_Armor_Base_C.ExecuteUbergraph_HUD_Armor_Base // (Final|UbergraphFunction) // @ game+0x158ca90
};

