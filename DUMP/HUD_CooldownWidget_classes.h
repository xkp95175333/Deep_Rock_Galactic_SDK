// WidgetBlueprintGeneratedClass HUD_CooldownWidget.HUD_CooldownWidget_C
// Size: 0x2e4 (Inherited: 0x280)
struct UHUD_CooldownWidget_C : UCoolDownProgressWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UWidgetAnimation* AnimFinished; // 0x288(0x08)
	struct UWidgetAnimation* AnimBegin; // 0x290(0x08)
	struct UImage* CoolDownImage; // 0x298(0x08)
	struct USizeBox* Sizer; // 0x2a0(0x08)
	struct UImage* SplashImage; // 0x2a8(0x08)
	float Size; // 0x2b0(0x04)
	float CurrentProgress; // 0x2b4(0x04)
	struct UMaterialInstanceDynamic* ProgressMaterial; // 0x2b8(0x08)
	float HeightScale; // 0x2c0(0x04)
	struct FLinearColor FillTint; // 0x2c4(0x10)
	struct FLinearColor BackgroundTint; // 0x2d4(0x10)

	void SetBackgroundTint(struct FLinearColor Value); // Function HUD_CooldownWidget.HUD_CooldownWidget_C.SetBackgroundTint // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetFillTint(struct FLinearColor Value); // Function HUD_CooldownWidget.HUD_CooldownWidget_C.SetFillTint // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetPercent(float InPercent); // Function HUD_CooldownWidget.HUD_CooldownWidget_C.SetPercent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ReceiveInitWidget(); // Function HUD_CooldownWidget.HUD_CooldownWidget_C.ReceiveInitWidget // (Event|Protected|BlueprintEvent) // @ game+0x158ca90
	void PreConstruct(bool IsDesignTime); // Function HUD_CooldownWidget.HUD_CooldownWidget_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void Construct(); // Function HUD_CooldownWidget.HUD_CooldownWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void SetHeightScale(float Scale); // Function HUD_CooldownWidget.HUD_CooldownWidget_C.SetHeightScale // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnAnimFadeoutFinished(); // Function HUD_CooldownWidget.HUD_CooldownWidget_C.OnAnimFadeoutFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ReceiveUpdateProgress(float InProgress); // Function HUD_CooldownWidget.HUD_CooldownWidget_C.ReceiveUpdateProgress // (Event|Protected|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_HUD_CooldownWidget(int32_t EntryPoint); // Function HUD_CooldownWidget.HUD_CooldownWidget_C.ExecuteUbergraph_HUD_CooldownWidget // (Final|UbergraphFunction) // @ game+0x158ca90
};

