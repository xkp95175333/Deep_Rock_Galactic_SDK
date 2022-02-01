// BlueprintGeneratedClass BP_AudioControl_LowHealth.BP_AudioControl_LowHealth_C
// Size: 0x208 (Inherited: 0xb0)
struct UBP_AudioControl_LowHealth_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	struct USoundSubmix* ExplosionsSubmix; // 0xb8(0x08)
	struct USoundSubmix* WeaponFireSubmix; // 0xc0(0x08)
	float CurrentAttack; // 0xc8(0x04)
	float CurrentRelease; // 0xcc(0x04)
	bool wasAbove; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)
	struct FRuntimeFloatCurve Blend; // 0xd8(0x88)
	float BlendProgress; // 0x160(0x04)
	float DuckingPower; // 0x164(0x04)
	struct UAudioComponent* IronWillIsSpawned; // 0x168(0x08)
	struct USubmixEffectSubmixEQPreset* LowHealthEq; // 0x170(0x08)
	float MufflingLowHealthAmount; // 0x178(0x04)
	float DuckingDownStateAmount; // 0x17c(0x04)
	float DuckingIronWillAmount; // 0x180(0x04)
	bool Off; // 0x184(0x01)
	char pad_185[0x3]; // 0x185(0x03)
	struct UAudioComponent* Health_Low_Cue; // 0x188(0x08)
	struct APlayerCharacter* PlayerCharacter; // 0x190(0x08)
	struct UPlayerHealthComponent* PlayerHealthComponent; // 0x198(0x08)
	struct USubmixEffectReverbPreset* LowHealthReverb; // 0x1a0(0x08)
	float ReverbLoHealthWetLevel; // 0x1a8(0x04)
	float ReverbLoHealthDryLevel; // 0x1ac(0x04)
	float ReverbLoHealthGain; // 0x1b0(0x04)
	char pad_1B4[0x4]; // 0x1b4(0x04)
	struct UPlayerTemperatureComponent* PlayerTemperatureComponent; // 0x1b8(0x08)
	bool LowTemperatureFade; // 0x1c0(0x01)
	char pad_1C1[0x7]; // 0x1c1(0x07)
	struct UCurveFloat* FadeInCurve; // 0x1c8(0x08)
	float FadeTimeLeft; // 0x1d0(0x04)
	float FadeInTime; // 0x1d4(0x04)
	float alpha; // 0x1d8(0x04)
	bool IsFadingIn; // 0x1dc(0x01)
	char pad_1DD[0x3]; // 0x1dd(0x03)
	float FadeOutTime; // 0x1e0(0x04)
	bool prevIsLowHealth; // 0x1e4(0x01)
	char pad_1E5[0x3]; // 0x1e5(0x03)
	float HealthChange; // 0x1e8(0x04)
	bool IsLowHealthOn; // 0x1ec(0x01)
	char pad_1ED[0x3]; // 0x1ed(0x03)
	float VeryColdThreshold; // 0x1f0(0x04)
	float ColdThreshold; // 0x1f4(0x04)
	struct UAudioComponent* Temperature_Low_Cue; // 0x1f8(0x08)
	struct UAudioComponent* Temperature_VeryLow_Cue; // 0x200(0x08)

	void HealthAudio(struct USubmixEffectSubmixEQPreset* EQPreset, float HealthPercentage); // Function BP_AudioControl_LowHealth.BP_AudioControl_LowHealth_C.HealthAudio // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	bool ShouldSetTimestamp(bool IsActivate); // Function BP_AudioControl_LowHealth.BP_AudioControl_LowHealth_C.ShouldSetTimestamp // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x158ca90
	void SubmixCompressor(float Volume, struct USoundSubmix* Master Listen Submix, float Threshold, float Attack, float Release, struct TArray<struct FCompressorData> CompressorData); // Function BP_AudioControl_LowHealth.BP_AudioControl_LowHealth_C.SubmixCompressor // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SubmixDucking(struct USoundSubmix* ListenSubmix, int32_t ListenAttack Max 200, int32_t ListenRelease Max 1000, float ListenDuckMultiply, struct USubmixEffectSubmixEQPreset* TargetDuckingEQ, bool Multiply Value Print, struct UCurveFloat* DuckingCurve, struct UCurveFloat* AttackCurve, struct UCurveFloat* ReleaseCurve, float ListenArrayElement); // Function BP_AudioControl_LowHealth.BP_AudioControl_LowHealth_C.SubmixDucking // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ReceiveBeginPlay(); // Function BP_AudioControl_LowHealth.BP_AudioControl_LowHealth_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x158ca90
	void ReceiveTick(float DeltaSeconds); // Function BP_AudioControl_LowHealth.BP_AudioControl_LowHealth_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x158ca90
	void HealthChanged(float Amount); // Function BP_AudioControl_LowHealth.BP_AudioControl_LowHealth_C.HealthChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void FadeInLowHealth(); // Function BP_AudioControl_LowHealth.BP_AudioControl_LowHealth_C.FadeInLowHealth // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void FadeOutLowHealth(); // Function BP_AudioControl_LowHealth.BP_AudioControl_LowHealth_C.FadeOutLowHealth // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void HandleHeartbeat(bool TurnOn); // Function BP_AudioControl_LowHealth.BP_AudioControl_LowHealth_C.HandleHeartbeat // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void HandleLowHealthMuffling(bool TurnOn); // Function BP_AudioControl_LowHealth.BP_AudioControl_LowHealth_C.HandleLowHealthMuffling // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnTemperatureChanged_Event(float Temperature, float Change); // Function BP_AudioControl_LowHealth.BP_AudioControl_LowHealth_C.OnTemperatureChanged_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ResetVeryLowCue(); // Function BP_AudioControl_LowHealth.BP_AudioControl_LowHealth_C.ResetVeryLowCue // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ResetLowCue(); // Function BP_AudioControl_LowHealth.BP_AudioControl_LowHealth_C.ResetLowCue // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_BP_AudioControl_LowHealth(int32_t EntryPoint); // Function BP_AudioControl_LowHealth.BP_AudioControl_LowHealth_C.ExecuteUbergraph_BP_AudioControl_LowHealth // (Final|UbergraphFunction|HasDefaults) // @ game+0x158ca90
};

