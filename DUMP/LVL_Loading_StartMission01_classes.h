// BlueprintGeneratedClass LVL_Loading_StartMission01.LVL_Loading_StartMission01_C
// Size: 0x240 (Inherited: 0x228)
struct ALVL_Loading_StartMission01_C : ALevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x228(0x08)
	struct ULevelSequencePlayer* Player; // 0x230(0x08)
	struct AEmitter* P_E3trailer_DropPod_Exhaust_4_ExecuteUbergraph_LVL_Loading_StartMission01_RefProperty; // 0x238(0x08)

	void OnFinshed(); // Function LVL_Loading_StartMission01.LVL_Loading_StartMission01_C.OnFinshed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void StopPlayer(); // Function LVL_Loading_StartMission01.LVL_Loading_StartMission01_C.StopPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void StartPlayer(struct ULevelSequence* LevelSequence); // Function LVL_Loading_StartMission01.LVL_Loading_StartMission01_C.StartPlayer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ReceiveBeginPlay(); // Function LVL_Loading_StartMission01.LVL_Loading_StartMission01_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x158ca90
	void PlayerStart(struct ULevelSequence* LoaderLevelSequence); // Function LVL_Loading_StartMission01.LVL_Loading_StartMission01_C.PlayerStart // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void PlayerStop(); // Function LVL_Loading_StartMission01.LVL_Loading_StartMission01_C.PlayerStop // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_LVL_Loading_StartMission01(int32_t EntryPoint); // Function LVL_Loading_StartMission01.LVL_Loading_StartMission01_C.ExecuteUbergraph_LVL_Loading_StartMission01 // (Final|UbergraphFunction) // @ game+0x158ca90
};

