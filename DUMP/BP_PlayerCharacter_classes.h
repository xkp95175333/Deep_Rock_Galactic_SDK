// BlueprintGeneratedClass BP_PlayerCharacter.BP_PlayerCharacter_C
// Size: 0x1150 (Inherited: 0xee0)
struct ABP_PlayerCharacter_C : APlayerCharacter {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xee0(0x08)
	struct UBP_EnemyControlState_C* BP_EnemyControlState; // 0xee8(0x08)
	struct UPointLightComponent* FilmFaceLight; // 0xef0(0x08)
	struct UBP_PushingState_C* BP_PushingState; // 0xef8(0x08)
	struct UBP_TrackMovementState_C* BP_TrackMovementState; // 0xf00(0x08)
	struct UBP_SelfiePoint_C* SelfieSpringArmPoint; // 0xf08(0x08)
	struct USpringArmComponent* SelfieSpringArm; // 0xf10(0x08)
	struct USceneComponent* Fixed_Selfie_Points; // 0xf18(0x08)
	struct USceneComponent* SelfieCameraSetup; // 0xf20(0x08)
	struct UShieldBoostUsable* ShieldBoostUsable; // 0xf28(0x08)
	struct UBP_AudioControl_LowHealth_C* BP_AudioControl; // 0xf30(0x08)
	struct UBP_AttachedState_C* BP_AttachedState; // 0xf38(0x08)
	struct UBP_PilotingState_C* BP_PilotingState; // 0xf40(0x08)
	struct UBP_DeadState_C* BP_DeadState; // 0xf48(0x08)
	struct UBP_PhotographyState_C* BP_PhotographyState; // 0xf50(0x08)
	struct UBP_PassedOut_C* BP_PassedOut; // 0xf58(0x08)
	struct UBP_IntoxicationComponent_C* BP_IntoxicationComponent; // 0xf60(0x08)
	struct UBP_FrozenState_C* BP_FrozenState; // 0xf68(0x08)
	struct UStaticMeshComponent* ScannerArrow; // 0xf70(0x08)
	struct UBP_GrabbedState_C* BP_GrabbedState; // 0xf78(0x08)
	struct UPointLightComponent* PointLight; // 0xf80(0x08)
	struct USpotLightComponent* SpotLight; // 0xf88(0x08)
	struct UPointLightComponent* FP_PointLight_CloseShine_Ground; // 0xf90(0x08)
	struct USceneComponent* ShoulderCamLocation; // 0xf98(0x08)
	struct USpringArmComponent* ShoulderCamArm; // 0xfa0(0x08)
	struct UPointLightComponent* DebugPointLight; // 0xfa8(0x08)
	struct UBP_SelfiePoint_C* BP_SelfiePoint6; // 0xfb0(0x08)
	struct UBP_SelfiePoint_C* BP_SelfiePoint5; // 0xfb8(0x08)
	struct UBP_SelfiePoint_C* BP_SelfiePoint4; // 0xfc0(0x08)
	struct UBP_SelfiePoint_C* BP_SelfiePoint3; // 0xfc8(0x08)
	struct UBP_SelfiePoint_C* BP_SelfiePoint2; // 0xfd0(0x08)
	struct UBP_SelfiePoint_C* BP_SelfiePoint1; // 0xfd8(0x08)
	struct UBP_SelfiePoint_C* BP_SelfiePoint; // 0xfe0(0x08)
	struct UBP_SelfiePoint_C* BP_SelfiePoint8; // 0xfe8(0x08)
	struct UStaticMeshComponent* DropShadow; // 0xff0(0x08)
	struct UFragileDebrisCleaner* FragileDebrisCleanerCore; // 0xff8(0x08)
	struct UFragileDebrisCleaner* FragileDebrisCleanerFeet; // 0x1000(0x08)
	struct UParticleSystemComponent* P_Ambient_Dust; // 0x1008(0x08)
	struct UBP_FlyingState_C* BP_FlyingState; // 0x1010(0x08)
	struct USpotLightComponent* TP_SpotLight_shadow; // 0x1018(0x08)
	struct USceneComponent* TP_SpotLight; // 0x1020(0x08)
	struct USpotLightComponent* FP_SpotLight_Light; // 0x1028(0x08)
	struct USceneComponent* FP_SpotLight; // 0x1030(0x08)
	struct UPointLightComponent* EmergencyLight; // 0x1038(0x08)
	struct UPointLightComponent* FP_PointLight_CloseShine; // 0x1040(0x08)
	struct UBP_NoMovementState_C* BP_NoMovementState; // 0x1048(0x08)
	struct UBP_ZipLineState_C* BP_ZipLineState; // 0x1050(0x08)
	struct UBP_UsingState_C* BP_UsingState; // 0x1058(0x08)
	struct UAudioComponent* ShieldRegenAudio; // 0x1060(0x08)
	struct URadarPointComponent* radarPoint; // 0x1068(0x08)
	struct UBP_ParalyzedState_C* BP_ParalyzedState; // 0x1070(0x08)
	struct UPointLightComponent* PointLight_SpotCloseShine; // 0x1078(0x08)
	struct UBP_DownedState_C* BP_DownedState; // 0x1080(0x08)
	struct UBP_FallingState_C* BP_FallingState; // 0x1088(0x08)
	struct UBP_WalkingState_C* BP_WalkingState; // 0x1090(0x08)
	struct UStaticMeshComponent* SM_LightCone; // 0x1098(0x08)
	struct UStaticMeshComponent* Mesh_Lamp_rim; // 0x10a0(0x08)
	struct UStaticMeshComponent* Mesh_Lamp; // 0x10a8(0x08)
	struct USphereComponent* UsableCollision; // 0x10b0(0x08)
	float Emergency_Timeline_Light_Intensity_49385F0B40EDFCE34D2340AC7114B889; // 0x10b8(0x04)
	enum class ETimelineDirection Emergency_Timeline__Direction_49385F0B40EDFCE34D2340AC7114B889; // 0x10bc(0x01)
	char pad_10BD[0x3]; // 0x10bd(0x03)
	struct UTimelineComponent* Emergency Timeline; // 0x10c0(0x08)
	float ShieldRegenTimeline_Volume_007E924B43B618D88D08859A06A1CF61; // 0x10c8(0x04)
	float ShieldRegenTimeline_Pitch_007E924B43B618D88D08859A06A1CF61; // 0x10cc(0x04)
	enum class ETimelineDirection ShieldRegenTimeline__Direction_007E924B43B618D88D08859A06A1CF61; // 0x10d0(0x01)
	char pad_10D1[0x7]; // 0x10d1(0x07)
	struct UTimelineComponent* ShieldRegenTimeline; // 0x10d8(0x08)
	float ShieldRegenTime; // 0x10e0(0x04)
	float LastDamageTime; // 0x10e4(0x04)
	struct TArray<struct UBP_SelfiePoint_C*> FixedSelfiePointList; // 0x10e8(0x10)
	struct UBP_SelfiePoint_C* ActiveSelfiePoint; // 0x10f8(0x08)
	bool WasHUDVisible; // 0x1100(0x01)
	char pad_1101[0x7]; // 0x1101(0x07)
	struct UReverbEffect* PreDownReverb; // 0x1108(0x08)
	struct FScaledEffect MixerConfetti; // 0x1110(0x10)
	struct UParticleSystem* InstantReviveParticles; // 0x1120(0x08)
	struct USoundBase* InstantReviveCue; // 0x1128(0x08)
	bool LeftShiftPressed; // 0x1130(0x01)
	bool LeftCtrPressed; // 0x1131(0x01)
	char pad_1132[0x6]; // 0x1132(0x06)
	struct FTimerHandle SelfieZoomTimer; // 0x1138(0x08)
	struct FTimerHandle SelfieMoveRightTimer; // 0x1140(0x08)
	struct FTimerHandle SelfieMoveUpTimer; // 0x1148(0x08)

	void GotoNextSelfiePoint(bool ForceExitSelfieMode); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.GotoNextSelfiePoint // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetActiveSelfiePoint(struct UBP_SelfiePoint_C* InSelfiePoint); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetActiveSelfiePoint // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	bool DamageCausesReaction(struct UDamageClass* DamageClass); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.DamageCausesReaction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x158ca90
	struct USceneComponent* GetDownCameraAttachPoint(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetDownCameraAttachPoint // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	struct USceneComponent* GetDownCameraRotationPoint(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetDownCameraRotationPoint // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ChromaEffect(char effect); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.ChromaEffect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void CharacterAudioThrottled(struct UDialogDataAsset* Shout); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.CharacterAudioThrottled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void UpdateHeadLight(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateHeadLight // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ShieldRegenTimeline__FinishedFunc(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.ShieldRegenTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x158ca90
	void ShieldRegenTimeline__UpdateFunc(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.ShieldRegenTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x158ca90
	void Emergency Timeline__FinishedFunc(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.Emergency Timeline__FinishedFunc // (BlueprintEvent) // @ game+0x158ca90
	void Emergency Timeline__UpdateFunc(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.Emergency Timeline__UpdateFunc // (BlueprintEvent) // @ game+0x158ca90
	void InpActEvt_P_K2Node_InputKeyEvent_17(struct FKey Key); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_P_K2Node_InputKeyEvent_17 // (BlueprintEvent) // @ game+0x158ca90
	void InpActEvt_LeftShift_K2Node_InputKeyEvent_16(struct FKey Key); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_LeftShift_K2Node_InputKeyEvent_16 // (BlueprintEvent) // @ game+0x158ca90
	void InpActEvt_LeftShift_K2Node_InputKeyEvent_15(struct FKey Key); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_LeftShift_K2Node_InputKeyEvent_15 // (BlueprintEvent) // @ game+0x158ca90
	void InpActEvt_LeftControl_K2Node_InputKeyEvent_14(struct FKey Key); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_LeftControl_K2Node_InputKeyEvent_14 // (BlueprintEvent) // @ game+0x158ca90
	void InpActEvt_LeftControl_K2Node_InputKeyEvent_13(struct FKey Key); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_LeftControl_K2Node_InputKeyEvent_13 // (BlueprintEvent) // @ game+0x158ca90
	void InpActEvt_PageDown_K2Node_InputKeyEvent_12(struct FKey Key); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_PageDown_K2Node_InputKeyEvent_12 // (BlueprintEvent) // @ game+0x158ca90
	void InpActEvt_PageDown_K2Node_InputKeyEvent_11(struct FKey Key); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_PageDown_K2Node_InputKeyEvent_11 // (BlueprintEvent) // @ game+0x158ca90
	void InpActEvt_PageUp_K2Node_InputKeyEvent_10(struct FKey Key); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_PageUp_K2Node_InputKeyEvent_10 // (BlueprintEvent) // @ game+0x158ca90
	void InpActEvt_PageUp_K2Node_InputKeyEvent_9(struct FKey Key); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_PageUp_K2Node_InputKeyEvent_9 // (BlueprintEvent) // @ game+0x158ca90
	void InpActEvt_Home_K2Node_InputKeyEvent_8(struct FKey Key); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_Home_K2Node_InputKeyEvent_8 // (BlueprintEvent) // @ game+0x158ca90
	void InpActEvt_Home_K2Node_InputKeyEvent_7(struct FKey Key); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_Home_K2Node_InputKeyEvent_7 // (BlueprintEvent) // @ game+0x158ca90
	void InpActEvt_End_K2Node_InputKeyEvent_6(struct FKey Key); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_End_K2Node_InputKeyEvent_6 // (BlueprintEvent) // @ game+0x158ca90
	void InpActEvt_End_K2Node_InputKeyEvent_5(struct FKey Key); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_End_K2Node_InputKeyEvent_5 // (BlueprintEvent) // @ game+0x158ca90
	void InpActEvt_Insert_K2Node_InputKeyEvent_4(struct FKey Key); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_Insert_K2Node_InputKeyEvent_4 // (BlueprintEvent) // @ game+0x158ca90
	void InpActEvt_Insert_K2Node_InputKeyEvent_3(struct FKey Key); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_Insert_K2Node_InputKeyEvent_3 // (BlueprintEvent) // @ game+0x158ca90
	void InpActEvt_Delete_K2Node_InputKeyEvent_2(struct FKey Key); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_Delete_K2Node_InputKeyEvent_2 // (BlueprintEvent) // @ game+0x158ca90
	void InpActEvt_Delete_K2Node_InputKeyEvent_1(struct FKey Key); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_Delete_K2Node_InputKeyEvent_1 // (BlueprintEvent) // @ game+0x158ca90
	void BP_OnControllerReady(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.BP_OnControllerReady // (Event|Protected|BlueprintEvent) // @ game+0x158ca90
	void ReceiveBeginPlay(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x158ca90
	void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_ArmorHealedSig__DelegateSignature(float Amount); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_ArmorHealedSig__DelegateSignature // (BlueprintEvent) // @ game+0x158ca90
	void StopRegenAudio(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.StopRegenAudio // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void BP_OnUpdateMeshes(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.BP_OnUpdateMeshes // (Event|Protected|BlueprintEvent) // @ game+0x158ca90
	void CharacterState Changed(enum class ECharacterState NewState); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.CharacterState Changed // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DamageSig__DelegateSignature(float Amount); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DamageSig__DelegateSignature // (BlueprintEvent) // @ game+0x158ca90
	void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_DamageSig__DelegateSignature(float Amount); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_DamageSig__DelegateSignature // (BlueprintEvent) // @ game+0x158ca90
	void Init Selfie Cam(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.Init Selfie Cam // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetDustVisible(bool Visible); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetDustVisible // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ReceiveOnHeadlightOn(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceiveOnHeadlightOn // (Event|Protected|BlueprintEvent) // @ game+0x158ca90
	void ResetSaveGameIDInEditor(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.ResetSaveGameIDInEditor // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void On Temporary Buff Changed(struct UTemporaryBuff* buff, struct APlayerCharacter* AffectedPlayer); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.On Temporary Buff Changed // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void MixerClientSpawnConfettii(struct FVector Location, struct FRotator Rotation); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.MixerClientSpawnConfettii // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void MixerServerSpawnConfettii(struct FVector Location, struct FRotator Rotation); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.MixerServerSpawnConfettii // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void MixerSpawnConfetti(struct FVector Location, struct FRotator Rotation); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.MixerSpawnConfetti // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void PrepareForEndScreen(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.PrepareForEndScreen // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_HitSig__DelegateSignature(float Damage, struct UDamageClass* DamageClass, struct AActor* DamageCauser, bool anyHealthLost); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_HitSig__DelegateSignature // (BlueprintEvent) // @ game+0x158ca90
	void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_HitSig__DelegateSignature(float Damage, struct UDamageClass* DamageClass, struct AActor* DamageCauser, bool anyHealthLost); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_HitSig__DelegateSignature // (BlueprintEvent) // @ game+0x158ca90
	void Activate Temporary buff on server(struct UTemporaryBuff* buff, struct APlayerCharacter* Player); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.Activate Temporary buff on server // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void Receive_ShowFieldMedicInstantReviveEffects(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.Receive_ShowFieldMedicInstantReviveEffects // (Event|Public|BlueprintEvent) // @ game+0x158ca90
	void InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_1(float AxisValue); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_1 // (BlueprintEvent) // @ game+0x158ca90
	void InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_2(float AxisValue); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_2 // (BlueprintEvent) // @ game+0x158ca90
	void SelfieZoom(float InDelta); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.SelfieZoom // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void TickSelfieZoom(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.TickSelfieZoom // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SelfieMoveUp(float InDirection); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.SelfieMoveUp // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void TickSelfieMoveUp(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.TickSelfieMoveUp // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SelfieMoveRight(float InDirection); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.SelfieMoveRight // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void TickSelfieMoveRight(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.TickSelfieMoveRight // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_BP_PlayerCharacter(int32_t EntryPoint); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.ExecuteUbergraph_BP_PlayerCharacter // (Final|UbergraphFunction|HasDefaults) // @ game+0x158ca90
};

