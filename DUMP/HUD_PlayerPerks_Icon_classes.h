// WidgetBlueprintGeneratedClass HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C
// Size: 0x2c8 (Inherited: 0x240)
struct UHUD_PlayerPerks_Icon_C : UPerkHUDIconWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x240(0x08)
	struct UWidgetAnimation* AnimCoolingDown; // 0x248(0x08)
	struct UWidgetAnimation* AnimCoolDownFinished; // 0x250(0x08)
	struct UImage* BackgroundImage; // 0x258(0x08)
	struct UBorder* CounterBorder; // 0x260(0x08)
	struct UBasic_Label_C* CounterLabel; // 0x268(0x08)
	struct UImage* FlashOverlay; // 0x270(0x08)
	struct UOverlay* OverlayTexture; // 0x278(0x08)
	struct UOverlay* OverlayWidget; // 0x280(0x08)
	struct UImage* PerkIcon; // 0x288(0x08)
	struct UImage* PerkShadow; // 0x290(0x08)
	struct UProgressBar* ProgressBarCoolDown; // 0x298(0x08)
	struct UImage* Ring_2; // 0x2a0(0x08)
	struct UImage* Ring_3; // 0x2a8(0x08)
	struct UImage* Ring_4; // 0x2b0(0x08)
	struct UUI_RoundedCanvas_C* UI_RoundedCanvas; // 0x2b8(0x08)
	struct FTimerHandle RefreshHandle; // 0x2c0(0x08)

	float GetCooldownDuration(); // Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.GetCooldownDuration // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x158ca90
	float GetCoolDownProgress(); // Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.GetCoolDownProgress // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x158ca90
	int32_t GetMaxUseCharges(); // Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.GetMaxUseCharges // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x158ca90
	int32_t GetRemainingUseCharges(); // Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.GetRemainingUseCharges // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x158ca90
	void RefreshCounterAndProgress(bool CoolDownActive); // Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.RefreshCounterAndProgress // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetCounter(int32_t InCount); // Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.SetCounter // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetProgress(float InProgress, float OutProgress); // Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.SetProgress // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnTick_64B6D09E4CB7705CDF68E9949787003B(float DeltaTime, float NormalizedTime); // Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.OnTick_64B6D09E4CB7705CDF68E9949787003B // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void Completed_64B6D09E4CB7705CDF68E9949787003B(float DeltaTime, float NormalizedTime); // Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.Completed_64B6D09E4CB7705CDF68E9949787003B // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ReceivePerkAssetChanged(); // Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.ReceivePerkAssetChanged // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void Construct(); // Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void OnAnimCoolDownFinished(); // Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.OnAnimCoolDownFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void Begin Cool Down(float Duration); // Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.Begin Cool Down // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void PreConstruct(bool IsDesignTime); // Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void RefreshUseCharges(struct UPerkAsset* Perk, int32_t Value); // Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.RefreshUseCharges // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void CoolDownTick(); // Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.CoolDownTick // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_HUD_PlayerPerks_Icon(int32_t EntryPoint); // Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.ExecuteUbergraph_HUD_PlayerPerks_Icon // (Final|UbergraphFunction|HasDefaults) // @ game+0x158ca90
};

