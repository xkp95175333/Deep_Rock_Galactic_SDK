// BlueprintGeneratedClass LVL_CharacterSelection.LVL_CharacterSelection_C
// Size: 0x260 (Inherited: 0x228)
struct ALVL_CharacterSelection_C : ALevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x228(0x08)
	struct ULevelSequencePlayer* Player; // 0x230(0x08)
	struct ACharacterSelectionSwitcher_C* switcher; // 0x238(0x08)
	struct TArray<struct FCharacterViewInfo> CharViewerList; // 0x240(0x10)
	struct ACharacterSelectionSwitcher_C* CharacterSelectionSwitcher_186_ExecuteUbergraph_LVL_CharacterSelection_RefProperty; // 0x250(0x08)
	struct ACameraActor* CameraActor_1_ExecuteUbergraph_LVL_CharacterSelection_RefProperty; // 0x258(0x08)

	void PlaySpecificSequence(struct ULevelSequence* LevelSequence); // Function LVL_CharacterSelection.LVL_CharacterSelection_C.PlaySpecificSequence // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void StopPlayer(); // Function LVL_CharacterSelection.LVL_CharacterSelection_C.StopPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void StartPlayer(enum class ECharselectionCameraLocation CamSetting); // Function LVL_CharacterSelection.LVL_CharacterSelection_C.StartPlayer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void StopPlay(); // Function LVL_CharacterSelection.LVL_CharacterSelection_C.StopPlay // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void StartLevelSeq(struct ULevelSequence* CharacterLevelSequence); // Function LVL_CharacterSelection.LVL_CharacterSelection_C.StartLevelSeq // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void StartPlay(enum class ECharselectionCameraLocation selectionLocation); // Function LVL_CharacterSelection.LVL_CharacterSelection_C.StartPlay // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ReceiveBeginPlay(); // Function LVL_CharacterSelection.LVL_CharacterSelection_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x158ca90
	void ReceiveDestroyed(); // Function LVL_CharacterSelection.LVL_CharacterSelection_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_LVL_CharacterSelection(int32_t EntryPoint); // Function LVL_CharacterSelection.LVL_CharacterSelection_C.ExecuteUbergraph_LVL_CharacterSelection // (Final|UbergraphFunction|HasDefaults) // @ game+0x158ca90
};

