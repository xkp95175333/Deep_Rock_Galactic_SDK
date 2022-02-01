// WidgetBlueprintGeneratedClass HUD_PlayerTemperature.HUD_PlayerTemperature_C
// Size: 0x2f4 (Inherited: 0x250)
struct UHUD_PlayerTemperature_C : UFSDUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct UWidgetAnimation* Appear; // 0x258(0x08)
	struct UWidgetAnimation* Pulse; // 0x260(0x08)
	struct UWidgetAnimation* Fade; // 0x268(0x08)
	struct UWidgetAnimation* Warning; // 0x270(0x08)
	struct UImage* Arrow01; // 0x278(0x08)
	struct UImage* Arrow02; // 0x280(0x08)
	struct UImage* Arrow03; // 0x288(0x08)
	struct UVerticalBox* ArrowBox; // 0x290(0x08)
	struct UImage* BG; // 0x298(0x08)
	struct UImage* Glow; // 0x2a0(0x08)
	struct UImage* Icon_Temp; // 0x2a8(0x08)
	struct USizeBox* RootSize; // 0x2b0(0x08)
	struct UProgressBar* TempBar; // 0x2b8(0x08)
	struct TArray<struct UImage*> Arrows; // 0x2c0(0x10)
	struct FLinearColor Tint_Freeze; // 0x2d0(0x10)
	bool Faded; // 0x2e0(0x01)
	char pad_2E1[0x3]; // 0x2e1(0x03)
	struct FLinearColor Tint_Overheated; // 0x2e4(0x10)

	void SetFaded(bool FadeOut); // Function HUD_PlayerTemperature.HUD_PlayerTemperature_C.SetFaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void UpdateTemperature(float InTemperature, float InChange); // Function HUD_PlayerTemperature.HUD_PlayerTemperature_C.UpdateTemperature // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void UpdateArrows(); // Function HUD_PlayerTemperature.HUD_PlayerTemperature_C.UpdateArrows // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void Construct(); // Function HUD_PlayerTemperature.HUD_PlayerTemperature_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void OnTemperatureChanged(float Temperature, float Change); // Function HUD_PlayerTemperature.HUD_PlayerTemperature_C.OnTemperatureChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void PreConstruct(bool IsDesignTime); // Function HUD_PlayerTemperature.HUD_PlayerTemperature_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void OnTemperatureChangeRate_Event(int32_t ChangeRate); // Function HUD_PlayerTemperature.HUD_PlayerTemperature_C.OnTemperatureChangeRate_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ShowTemperature(); // Function HUD_PlayerTemperature.HUD_PlayerTemperature_C.ShowTemperature // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnBarVisibilityChanged(bool barVisible); // Function HUD_PlayerTemperature.HUD_PlayerTemperature_C.OnBarVisibilityChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnTemperatureStateChanged(enum class EPlayerTemperatureState State); // Function HUD_PlayerTemperature.HUD_PlayerTemperature_C.OnTemperatureStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_HUD_PlayerTemperature(int32_t EntryPoint); // Function HUD_PlayerTemperature.HUD_PlayerTemperature_C.ExecuteUbergraph_HUD_PlayerTemperature // (Final|UbergraphFunction|HasDefaults) // @ game+0x158ca90
};

