// BlueprintGeneratedClass LVL_Loading_DeepDive_B.LVL_Loading_DeepDive_B_C
// Size: 0x238 (Inherited: 0x228)
struct ALVL_Loading_DeepDive_B_C : ALevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x228(0x08)
	struct ULevelSequencePlayer* Player; // 0x230(0x08)

	void StopPlayer(); // Function LVL_Loading_DeepDive_B.LVL_Loading_DeepDive_B_C.StopPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void StartPlayer(struct ULevelSequence* LevelSequence); // Function LVL_Loading_DeepDive_B.LVL_Loading_DeepDive_B_C.StartPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ReceiveBeginPlay(); // Function LVL_Loading_DeepDive_B.LVL_Loading_DeepDive_B_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x158ca90
	void PlayerStart(struct ULevelSequence* LoaderLevelSequence); // Function LVL_Loading_DeepDive_B.LVL_Loading_DeepDive_B_C.PlayerStart // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void PlayerStop(); // Function LVL_Loading_DeepDive_B.LVL_Loading_DeepDive_B_C.PlayerStop // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_LVL_Loading_DeepDive_B(int32_t EntryPoint); // Function LVL_Loading_DeepDive_B.LVL_Loading_DeepDive_B_C.ExecuteUbergraph_LVL_Loading_DeepDive_B // (Final|UbergraphFunction) // @ game+0x158ca90
};

