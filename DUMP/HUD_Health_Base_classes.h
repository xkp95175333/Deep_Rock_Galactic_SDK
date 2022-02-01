// WidgetBlueprintGeneratedClass HUD_Health_Base.HUD_Health_Base_C
// Size: 0x2a0 (Inherited: 0x230)
struct UHUD_Health_Base_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* PingPong; // 0x238(0x08)
	struct UWidgetAnimation* BeginRegen; // 0x240(0x08)
	struct UBorder* EndBorder; // 0x248(0x08)
	struct UProgressBar* HealthBar; // 0x250(0x08)
	struct UImage* IconImage; // 0x258(0x08)
	struct UProgressBar* RegenBar; // 0x260(0x08)
	struct UPlayerHealthComponent* HealthComponent; // 0x268(0x08)
	struct FSlateColor RegenTint; // 0x270(0x28)
	bool isRegenerating; // 0x298(0x01)
	char pad_299[0x3]; // 0x299(0x03)
	float AlphaHealthbar; // 0x29c(0x04)

	void CheckPingPongAnim(); // Function HUD_Health_Base.HUD_Health_Base_C.CheckPingPongAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetAlphaHealthbar(float alpha); // Function HUD_Health_Base.HUD_Health_Base_C.SetAlphaHealthbar // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	bool HasLowHealth(); // Function HUD_Health_Base.HUD_Health_Base_C.HasLowHealth // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x158ca90
	void HealthChanged(float Health); // Function HUD_Health_Base.HUD_Health_Base_C.HealthChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void Bind Health Component(struct UPlayerHealthComponent* HealthComponent); // Function HUD_Health_Base.HUD_Health_Base_C.Bind Health Component // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void PreConstruct(bool IsDesignTime); // Function HUD_Health_Base.HUD_Health_Base_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void Set Health Pct(float InPercent); // Function HUD_Health_Base.HUD_Health_Base_C.Set Health Pct // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void Unbind Health Component(); // Function HUD_Health_Base.HUD_Health_Base_C.Unbind Health Component // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void Bind To Player(struct APlayerCharacter* Player); // Function HUD_Health_Base.HUD_Health_Base_C.Bind To Player // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnHealthRegeneratingChanged_Event(bool isRegenerating); // Function HUD_Health_Base.HUD_Health_Base_C.OnHealthRegeneratingChanged_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void Unbind HealthChanged(); // Function HUD_Health_Base.HUD_Health_Base_C.Unbind HealthChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void Unbind Regenerating Changed(); // Function HUD_Health_Base.HUD_Health_Base_C.Unbind Regenerating Changed // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_HUD_Health_Base(int32_t EntryPoint); // Function HUD_Health_Base.HUD_Health_Base_C.ExecuteUbergraph_HUD_Health_Base // (Final|UbergraphFunction) // @ game+0x158ca90
};

