// WidgetBlueprintGeneratedClass HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C
// Size: 0x320 (Inherited: 0x230)
struct UHUD_TeamDisplay_SmallItem_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* RevivedAnimation; // 0x238(0x08)
	struct UWidgetAnimation* DamageAnimation; // 0x240(0x08)
	struct UWidgetAnimation* IntroAnimation; // 0x248(0x08)
	struct UWidgetAnimation* ParalyzedAnimation; // 0x250(0x08)
	struct UWidgetAnimation* DownAnimation; // 0x258(0x08)
	struct UITM_SupplyBar_C* AmmoBar; // 0x260(0x08)
	struct USizeBox* AmmoSizeBox; // 0x268(0x08)
	struct UImage* DownIcon; // 0x270(0x08)
	struct UImage* DownTarget; // 0x278(0x08)
	struct UProgressBar* HealthBar; // 0x280(0x08)
	struct USizeBox* HealthBarHolder; // 0x288(0x08)
	struct UBorder* HealthBorder; // 0x290(0x08)
	struct UWidgetSwitcher* IconSwitcher; // 0x298(0x08)
	struct UITM_CharacterIcon_C* ITM_CharacterIcon; // 0x2a0(0x08)
	struct UTextBlock* PlayerName; // 0x2a8(0x08)
	struct UCircularThrobber* PlayerOnHisWayIndicator; // 0x2b0(0x08)
	struct UUI_PlayerSpeaking_C* PlayerSpeaking; // 0x2b8(0x08)
	struct UUI_CallingMolly_C* UI_CallingMolly; // 0x2c0(0x08)
	struct AFSDPlayerState* PlayerState; // 0x2c8(0x08)
	struct UPlayerHealthComponent* HealthComponent; // 0x2d0(0x08)
	struct APlayerCharacter* PlayerCharacter; // 0x2d8(0x08)
	bool IsDown; // 0x2e0(0x01)
	bool IsParalyzed; // 0x2e1(0x01)
	bool AnimateIntro; // 0x2e2(0x01)
	bool LaserpointerEquipped; // 0x2e3(0x01)
	char pad_2E4[0x4]; // 0x2e4(0x04)
	struct APlayerCharacter* LocalCharacter; // 0x2e8(0x08)
	struct AFSDPlayerState* LocalPlayerState; // 0x2f0(0x08)
	bool LookingAtSupplyPod; // 0x2f8(0x01)
	char pad_2F9[0x7]; // 0x2f9(0x07)
	struct UHUDVisibilityGroup* VisibilityGroup; // 0x300(0x08)
	bool DownFollowingPlayer; // 0x308(0x01)
	char pad_309[0x7]; // 0x309(0x07)
	struct FString PreviewName; // 0x310(0x10)

	void ShowDynamicHUD(); // Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.ShowDynamicHUD // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnVisibilityModeChanged(struct UHUDVisibilityGroup* Group, enum class EHUDVisibilityMode Mode); // Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnVisibilityModeChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void BndEvt__PlayerSpeaking_K2Node_ComponentBoundEvent_0_OnChanged__DelegateSignature(bool InTalking); // Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.BndEvt__PlayerSpeaking_K2Node_ComponentBoundEvent_0_OnChanged__DelegateSignature // (BlueprintEvent) // @ game+0x158ca90
	void OnPlayerNameChanged(struct FString NewName); // Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnPlayerNameChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnPlayerLeave_Event(struct AFSDPlayerState* PlayerState); // Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnPlayerLeave_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void StopAnim(struct UWidgetAnimation* Anim); // Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.StopAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnPlayerCharacterSpawned(struct APlayerCharacter* PlayerCharacter); // Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnPlayerCharacterSpawned // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnDeath(struct UHealthComponentBase* HealthComponent); // Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnDeath // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnDamageTaken_Event(float Amount); // Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnDamageTaken_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnHealthChanged(float Health); // Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnHealthChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void PlayAnim(struct UWidgetAnimation* Anim); // Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.PlayAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnCharacterStateChanged(enum class ECharacterState NewState); // Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnCharacterStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnOwningCharacterSpawned(struct APlayerCharacter* PlayerCharacter); // Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnOwningCharacterSpawned // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void Construct(); // Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void OnCharacterStateChanged_Event(enum class ECharacterState NewState); // Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnCharacterStateChanged_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnDownCameraTargetChanged(struct APlayerCharacter* Target); // Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnDownCameraTargetChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnLaserPointerReleased_Event(); // Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnLaserPointerReleased_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnLaserPointerPressed_Event(); // Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnLaserPointerPressed_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void Show Ammo Bar(); // Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.Show Ammo Bar // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnEndHoveringEvent_Event(); // Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnEndHoveringEvent_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnBeginHoveringEvent(struct UUsableComponentBase* Component); // Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnBeginHoveringEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void PreConstruct(bool IsDesignTime); // Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void OnSupplyStatusChangedEvent(float ammoStatus01, float healthStatus01); // Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnSupplyStatusChangedEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_HUD_TeamDisplay_SmallItem(int32_t EntryPoint); // Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.ExecuteUbergraph_HUD_TeamDisplay_SmallItem // (Final|UbergraphFunction|HasDefaults) // @ game+0x158ca90
};

