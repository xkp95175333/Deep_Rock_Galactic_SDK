// WidgetBlueprintGeneratedClass MissionControl_MainDialogue.MissionControl_MainDialogue_C
// Size: 0x2e0 (Inherited: 0x250)
struct UMissionControl_MainDialogue_C : UFSDUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct UWidgetAnimation* AnimIn; // 0x258(0x08)
	struct UImage* BorderInner; // 0x260(0x08)
	struct UImage* BorderOuter; // 0x268(0x08)
	struct UUI_MaskedImage_C* CharacterIcon; // 0x270(0x08)
	struct UTextBlock* ClassLabel; // 0x278(0x08)
	struct UImage* Image_109; // 0x280(0x08)
	struct UImage* Image_110; // 0x288(0x08)
	struct UMissionControl_TextAnimator_C* MissionControl_TextAnimator; // 0x290(0x08)
	struct UDialogDataAsset* PreviewShout; // 0x298(0x08)
	bool ManuallyControlled; // 0x2a0(0x01)
	char pad_2A1[0x7]; // 0x2a1(0x07)
	struct FText Text; // 0x2a8(0x18)
	float Duration; // 0x2c0(0x04)
	float StartTime; // 0x2c4(0x04)
	struct FTimerHandle TickHandle; // 0x2c8(0x08)
	struct UAudioComponent* ManualSpeakComponent; // 0x2d0(0x08)
	struct FTimerHandle HideHandle; // 0x2d8(0x08)

	void SetPreview(struct UDialogDataAsset* PreviewShout); // Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.SetPreview // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void Reset(); // Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.Reset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetProgress(float Progress, bool Finished); // Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.SetProgress // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void TickRunningText(); // Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.TickRunningText // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void StopRunningText(); // Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.StopRunningText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SpeakEntryManually(struct FDialogStruct Entry, float Duration, struct UAudioComponent* AudioComponent); // Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.SpeakEntryManually // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SpeakManually(struct UDialogDataAsset* MissionShout, float Duration, struct UAudioComponent* AudioComponent); // Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.SpeakManually // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void Start Running Text(struct FText Text, float Duration); // Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.Start Running Text // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnMissionShout(struct FText Text, float Duration); // Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.OnMissionShout // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void Construct(); // Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void PreConstruct(bool IsDesignTime); // Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void OnMissionShoutEnd(); // Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.OnMissionShoutEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void HideMissionShout(); // Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.HideMissionShout // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_MissionControl_MainDialogue(int32_t EntryPoint); // Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.ExecuteUbergraph_MissionControl_MainDialogue // (Final|UbergraphFunction|HasDefaults) // @ game+0x158ca90
};

