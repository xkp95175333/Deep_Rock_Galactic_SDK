// WidgetBlueprintGeneratedClass HUD_PlayerInfo.HUD_PlayerInfo_C
// Size: 0x2a9 (Inherited: 0x230)
struct UHUD_PlayerInfo_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UITM_SupplyBar_C* AmmoBar; // 0x238(0x08)
	struct UOverlay* ClassLine; // 0x240(0x08)
	struct UImage* GradientBGMiddle; // 0x248(0x08)
	struct UOverlay* HealthLine; // 0x250(0x08)
	struct UHUD_PlayerClass_Icon_C* HUD_PlayerClass_Icon_87; // 0x258(0x08)
	struct UHUD_PlayerPerks_C* HUD_PlayerPerks; // 0x260(0x08)
	struct UOverlay* NameLine; // 0x268(0x08)
	struct UUI_CallingMolly_C* UI_CallingMolly; // 0x270(0x08)
	bool PreviewShowName&Icon; // 0x278(0x01)
	bool PreviewShowHealth&Shield; // 0x279(0x01)
	char pad_27A[0x6]; // 0x27a(0x06)
	struct APlayerCharacter* Character; // 0x280(0x08)
	struct UPlayerHealthComponent* HealthComponent; // 0x288(0x08)
	bool WasDead; // 0x290(0x01)
	bool UsingItem; // 0x291(0x01)
	bool UsingLaserpointer; // 0x292(0x01)
	char pad_293[0x5]; // 0x293(0x05)
	struct UHUDVisibilityGroup* HG_ClassName; // 0x298(0x08)
	struct UHUDVisibilityGroup* HG_HealthShield; // 0x2a0(0x08)
	bool LookingAtSupplyPod; // 0x2a8(0x01)

	void SetElementVisibility(bool Name, Class & Icon, bool Health & Shield); // Function HUD_PlayerInfo.HUD_PlayerInfo_C.SetElementVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ShowDynamically(); // Function HUD_PlayerInfo.HUD_PlayerInfo_C.ShowDynamically // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnCharacterStateChanged_Event(enum class ECharacterState NewState); // Function HUD_PlayerInfo.HUD_PlayerInfo_C.OnCharacterStateChanged_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnHealthChanged_Event(float Health); // Function HUD_PlayerInfo.HUD_PlayerInfo_C.OnHealthChanged_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnLaserPointerPressed_Event(); // Function HUD_PlayerInfo.HUD_PlayerInfo_C.OnLaserPointerPressed_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnLaserPointerReleased_Event(); // Function HUD_PlayerInfo.HUD_PlayerInfo_C.OnLaserPointerReleased_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void VisibilityModeChanged(); // Function HUD_PlayerInfo.HUD_PlayerInfo_C.VisibilityModeChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void BndEvt__HG_ClassName_K2Node_ComponentBoundEvent_2_VisibilityDelegate__DelegateSignature(struct UHUDVisibilityGroup* Group, bool IsVisible); // Function HUD_PlayerInfo.HUD_PlayerInfo_C.BndEvt__HG_ClassName_K2Node_ComponentBoundEvent_2_VisibilityDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x158ca90
	void BndEvt__HG_HealthShield_K2Node_ComponentBoundEvent_3_VisibilityDelegate__DelegateSignature(struct UHUDVisibilityGroup* Group, bool IsVisible); // Function HUD_PlayerInfo.HUD_PlayerInfo_C.BndEvt__HG_HealthShield_K2Node_ComponentBoundEvent_3_VisibilityDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x158ca90
	void OnFirePressed_Event(); // Function HUD_PlayerInfo.HUD_PlayerInfo_C.OnFirePressed_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnFireReleased_Event(); // Function HUD_PlayerInfo.HUD_PlayerInfo_C.OnFireReleased_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnSupplyStatusChangedEvent(float ammoStatus01, float healthStatus01); // Function HUD_PlayerInfo.HUD_PlayerInfo_C.OnSupplyStatusChangedEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ShowAmmoCounter(); // Function HUD_PlayerInfo.HUD_PlayerInfo_C.ShowAmmoCounter // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnBeginHoveringEvent(struct UUsableComponentBase* Component); // Function HUD_PlayerInfo.HUD_PlayerInfo_C.OnBeginHoveringEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnEndHoveringEvent_Event(); // Function HUD_PlayerInfo.HUD_PlayerInfo_C.OnEndHoveringEvent_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void PreConstruct(bool IsDesignTime); // Function HUD_PlayerInfo.HUD_PlayerInfo_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void Construct(); // Function HUD_PlayerInfo.HUD_PlayerInfo_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_HUD_PlayerInfo(int32_t EntryPoint); // Function HUD_PlayerInfo.HUD_PlayerInfo_C.ExecuteUbergraph_HUD_PlayerInfo // (Final|UbergraphFunction) // @ game+0x158ca90
};

