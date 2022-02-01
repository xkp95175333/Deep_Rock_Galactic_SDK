// Class AudioMixer.SynthComponent
// Size: 0x6d0 (Inherited: 0x1f0)
struct USynthComponent : USceneComponent {
	char bAutoDestroy : 1; // 0x1f0(0x01)
	char bStopWhenOwnerDestroyed : 1; // 0x1f0(0x01)
	char bAllowSpatialization : 1; // 0x1f0(0x01)
	char bOverrideAttenuation : 1; // 0x1f0(0x01)
	char pad_1F0_4 : 4; // 0x1f0(0x01)
	char pad_1F1[0x3]; // 0x1f1(0x03)
	char bOutputToBusOnly : 1; // 0x1f4(0x01)
	char pad_1F4_1 : 7; // 0x1f4(0x01)
	char pad_1F5[0x3]; // 0x1f5(0x03)
	struct USoundAttenuation* AttenuationSettings; // 0x1f8(0x08)
	struct FSoundAttenuationSettings AttenuationOverrides; // 0x200(0x3a0)
	struct USoundConcurrency* ConcurrencySettings; // 0x5a0(0x08)
	struct TSet<struct USoundConcurrency*> ConcurrencySet; // 0x5a8(0x50)
	struct USoundClass* SoundClass; // 0x5f8(0x08)
	struct USoundEffectSourcePresetChain* SourceEffectChain; // 0x600(0x08)
	struct USoundSubmixBase* SoundSubmix; // 0x608(0x08)
	struct TArray<struct FSoundSubmixSendInfo> SoundSubmixSends; // 0x610(0x10)
	struct TArray<struct FSoundSourceBusSendInfo> BusSends; // 0x620(0x10)
	struct FSoundModulation Modulation; // 0x630(0x10)
	struct TArray<struct FSoundSourceBusSendInfo> PreEffectBusSends; // 0x640(0x10)
	char bIsUISound : 1; // 0x650(0x01)
	char bIsPreviewSound : 1; // 0x650(0x01)
	char pad_650_2 : 6; // 0x650(0x01)
	char pad_651[0x3]; // 0x651(0x03)
	int32_t EnvelopeFollowerAttackTime; // 0x654(0x04)
	int32_t EnvelopeFollowerReleaseTime; // 0x658(0x04)
	char pad_65C[0x4]; // 0x65c(0x04)
	struct FMulticastInlineDelegate OnAudioEnvelopeValue; // 0x660(0x10)
	char pad_670[0x20]; // 0x670(0x20)
	struct USynthSound* Synth; // 0x690(0x08)
	struct UAudioComponent* AudioComponent; // 0x698(0x08)
	char pad_6A0[0x30]; // 0x6a0(0x30)

	void Stop(); // Function AudioMixer.SynthComponent.Stop // (Final|Native|Public|BlueprintCallable) // @ game+0x253b500
	void Start(); // Function AudioMixer.SynthComponent.Start // (Final|Native|Public|BlueprintCallable) // @ game+0x253b220
	void SetVolumeMultiplier(float VolumeMultiplier); // Function AudioMixer.SynthComponent.SetVolumeMultiplier // (Final|Native|Public|BlueprintCallable) // @ game+0x253b1a0
	void SetSubmixSend(struct USoundSubmixBase* Submix, float SendLevel); // Function AudioMixer.SynthComponent.SetSubmixSend // (Final|Native|Public|BlueprintCallable) // @ game+0x253b0d0
	bool IsPlaying(); // Function AudioMixer.SynthComponent.IsPlaying // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x253a310
};

// Class AudioMixer.AudioGenerator
// Size: 0xa8 (Inherited: 0x28)
struct UAudioGenerator : UObject {
	char pad_28[0x80]; // 0x28(0x80)
};

// Class AudioMixer.AudioMixerBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UAudioMixerBlueprintLibrary : UBlueprintFunctionLibrary {

	float TrimAudioCache(float InMegabytesToFree); // Function AudioMixer.AudioMixerBlueprintLibrary.TrimAudioCache // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x253b7e0
	struct USoundWave* StopRecordingOutput(struct UObject* WorldContextObject, enum class EAudioRecordingExportType ExportType, struct FString Name, struct FString Path, struct USoundSubmix* SubmixToRecord, struct USoundWave* ExistingSoundWaveToOverwrite); // Function AudioMixer.AudioMixerBlueprintLibrary.StopRecordingOutput // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x253b5d0
	void StopAnalyzingOutput(struct UObject* WorldContextObject, struct USoundSubmix* SubmixToStopAnalyzing); // Function AudioMixer.AudioMixerBlueprintLibrary.StopAnalyzingOutput // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x253b520
	void StartRecordingOutput(struct UObject* WorldContextObject, float ExpectedDuration, struct USoundSubmix* SubmixToRecord); // Function AudioMixer.AudioMixerBlueprintLibrary.StartRecordingOutput // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x253b400
	void StartAnalyzingOutput(struct UObject* WorldContextObject, struct USoundSubmix* SubmixToAnalyze, enum class EFFTSize FFTSize, enum class EFFTPeakInterpolationMethod InterpolationMethod, enum class EFFTWindowType WindowType, float HopSize); // Function AudioMixer.AudioMixerBlueprintLibrary.StartAnalyzingOutput // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x253b240
	void SetBypassSourceEffectChainEntry(struct UObject* WorldContextObject, struct USoundEffectSourcePresetChain* PresetChain, int32_t EntryIndex, bool bBypassed); // Function AudioMixer.AudioMixerBlueprintLibrary.SetBypassSourceEffectChainEntry // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x253aa90
	void ResumeRecordingOutput(struct UObject* WorldContextObject, struct USoundSubmix* SubmixToPause); // Function AudioMixer.AudioMixerBlueprintLibrary.ResumeRecordingOutput // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x253a9e0
	void ReplaceSoundEffectSubmix(struct UObject* WorldContextObject, struct USoundSubmix* InSoundSubmix, int32_t SubmixChainIndex, struct USoundEffectSubmixPreset* SubmixEffectPreset); // Function AudioMixer.AudioMixerBlueprintLibrary.ReplaceSoundEffectSubmix // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x253a8b0
	void RemoveSubmixEffectPresetAtIndex(struct UObject* WorldContextObject, struct USoundSubmix* SoundSubmix, int32_t SubmixChainIndex); // Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectPresetAtIndex // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x253a7c0
	void RemoveSubmixEffectPreset(struct UObject* WorldContextObject, struct USoundSubmix* SoundSubmix, struct USoundEffectSubmixPreset* SubmixEffectPreset); // Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectPreset // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x253a6d0
	void RemoveSourceEffectFromPresetChain(struct UObject* WorldContextObject, struct USoundEffectSourcePresetChain* PresetChain, int32_t EntryIndex); // Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSourceEffectFromPresetChain // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x253a5e0
	void RemoveMasterSubmixEffect(struct UObject* WorldContextObject, struct USoundEffectSubmixPreset* SubmixEffectPreset); // Function AudioMixer.AudioMixerBlueprintLibrary.RemoveMasterSubmixEffect // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x253a530
	void PrimeSoundForPlayback(struct USoundWave* SoundWave, struct FDelegate OnLoadCompletion); // Function AudioMixer.AudioMixerBlueprintLibrary.PrimeSoundForPlayback // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x253a460
	void PrimeSoundCueForPlayback(struct USoundCue* SoundCue); // Function AudioMixer.AudioMixerBlueprintLibrary.PrimeSoundCueForPlayback // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x253a3f0
	void PauseRecordingOutput(struct UObject* WorldContextObject, struct USoundSubmix* SubmixToPause); // Function AudioMixer.AudioMixerBlueprintLibrary.PauseRecordingOutput // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x253a340
	void GetPhaseForFrequencies(struct UObject* WorldContextObject, struct TArray<float> Frequencies, struct TArray<float> Phases, struct USoundSubmix* SubmixToAnalyze); // Function AudioMixer.AudioMixerBlueprintLibrary.GetPhaseForFrequencies // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x253a190
	int32_t GetNumberOfEntriesInSourceEffectChain(struct UObject* WorldContextObject, struct USoundEffectSourcePresetChain* PresetChain); // Function AudioMixer.AudioMixerBlueprintLibrary.GetNumberOfEntriesInSourceEffectChain // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x253a0d0
	void GetMagnitudeForFrequencies(struct UObject* WorldContextObject, struct TArray<float> Frequencies, struct TArray<float> Magnitudes, struct USoundSubmix* SubmixToAnalyze); // Function AudioMixer.AudioMixerBlueprintLibrary.GetMagnitudeForFrequencies // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x2539f50
	void ClearSubmixEffects(struct UObject* WorldContextObject, struct USoundSubmix* SoundSubmix); // Function AudioMixer.AudioMixerBlueprintLibrary.ClearSubmixEffects // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x2539ea0
	void ClearMasterSubmixEffects(struct UObject* WorldContextObject); // Function AudioMixer.AudioMixerBlueprintLibrary.ClearMasterSubmixEffects // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x2539e30
	int32_t AddSubmixEffect(struct UObject* WorldContextObject, struct USoundSubmix* SoundSubmix, struct USoundEffectSubmixPreset* SubmixEffectPreset); // Function AudioMixer.AudioMixerBlueprintLibrary.AddSubmixEffect // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x2539d40
	void AddSourceEffectToPresetChain(struct UObject* WorldContextObject, struct USoundEffectSourcePresetChain* PresetChain, struct FSourceEffectChainEntry Entry); // Function AudioMixer.AudioMixerBlueprintLibrary.AddSourceEffectToPresetChain // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x2539c40
	void AddMasterSubmixEffect(struct UObject* WorldContextObject, struct USoundEffectSubmixPreset* SubmixEffectPreset); // Function AudioMixer.AudioMixerBlueprintLibrary.AddMasterSubmixEffect // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x2539b90
};

// Class AudioMixer.SubmixEffectDynamicsProcessorPreset
// Size: 0x108 (Inherited: 0x40)
struct USubmixEffectDynamicsProcessorPreset : USoundEffectSubmixPreset {
	char pad_40[0x78]; // 0x40(0x78)
	struct FSubmixEffectDynamicsProcessorSettings Settings; // 0xb8(0x50)

	void SetSettings(struct FSubmixEffectDynamicsProcessorSettings Settings); // Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x253ac40
	void SetExternalSubmix(struct USoundSubmix* Submix); // Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetExternalSubmix // (Final|Native|Public|BlueprintCallable) // @ game+0x253abc0
};

// Class AudioMixer.SubmixEffectSubmixEQPreset
// Size: 0x88 (Inherited: 0x40)
struct USubmixEffectSubmixEQPreset : USoundEffectSubmixPreset {
	char pad_40[0x38]; // 0x40(0x38)
	struct FSubmixEffectSubmixEQSettings Settings; // 0x78(0x10)

	void SetSettings(struct FSubmixEffectSubmixEQSettings InSettings); // Function AudioMixer.SubmixEffectSubmixEQPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x73b050
};

// Class AudioMixer.SubmixEffectReverbPreset
// Size: 0xd0 (Inherited: 0x40)
struct USubmixEffectReverbPreset : USoundEffectSubmixPreset {
	char pad_40[0x5c]; // 0x40(0x5c)
	struct FSubmixEffectReverbSettings Settings; // 0x9c(0x34)

	void SetSettingsWithReverbEffect(struct UReverbEffect* InReverbEffect, float WetLevel, float DryLevel); // Function AudioMixer.SubmixEffectReverbPreset.SetSettingsWithReverbEffect // (Final|Native|Public|BlueprintCallable) // @ game+0x253afd0
	void SetSettings(struct FSubmixEffectReverbSettings InSettings); // Function AudioMixer.SubmixEffectReverbPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x253ae10
};

// Class AudioMixer.SubmixEffectReverbFastPreset
// Size: 0xd8 (Inherited: 0x40)
struct USubmixEffectReverbFastPreset : USoundEffectSubmixPreset {
	char pad_40[0x60]; // 0x40(0x60)
	struct FSubmixEffectReverbFastSettings Settings; // 0xa0(0x38)

	void SetSettingsWithReverbEffect(struct UReverbEffect* InReverbEffect, float WetLevel, float DryLevel); // Function AudioMixer.SubmixEffectReverbFastPreset.SetSettingsWithReverbEffect // (Final|Native|Public|BlueprintCallable) // @ game+0x253aed0
	void SetSettings(struct FSubmixEffectReverbFastSettings InSettings); // Function AudioMixer.SubmixEffectReverbFastPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x253ad50
};

// Class AudioMixer.SynthSound
// Size: 0x380 (Inherited: 0x360)
struct USynthSound : USoundWaveProcedural {
	struct USynthComponent* OwningSynthComponent; // 0x360(0x08)
	char pad_368[0x18]; // 0x368(0x18)
};

