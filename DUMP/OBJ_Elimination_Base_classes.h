// BlueprintGeneratedClass OBJ_Elimination_Base.OBJ_Elimination_Base_C
// Size: 0x250 (Inherited: 0x218)
struct UOBJ_Elimination_Base_C : UEliminationObjective {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x218(0x08)
	struct FText Title; // 0x220(0x18)
	struct FText Description; // 0x238(0x18)

	struct UTexture2D* GetInMissionCounterIcon(); // Function OBJ_Elimination_Base.OBJ_Elimination_Base_C.GetInMissionCounterIcon // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x158ca90
	struct FText GetInMissionCounterText(); // Function OBJ_Elimination_Base.OBJ_Elimination_Base_C.GetInMissionCounterText // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x158ca90
	struct UTexture2D* GetObjectiveIcon(); // Function OBJ_Elimination_Base.OBJ_Elimination_Base_C.GetObjectiveIcon // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x158ca90
	int32_t GetObjectiveAmount(float missionLength); // Function OBJ_Elimination_Base.OBJ_Elimination_Base_C.GetObjectiveAmount // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x158ca90
	struct FText GetInMissionText(); // Function OBJ_Elimination_Base.OBJ_Elimination_Base_C.GetInMissionText // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x158ca90
	struct FText GetObjectiveDescription(float missionLength); // Function OBJ_Elimination_Base.OBJ_Elimination_Base_C.GetObjectiveDescription // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ReceiveTargetKilled(); // Function OBJ_Elimination_Base.OBJ_Elimination_Base_C.ReceiveTargetKilled // (Event|Protected|BlueprintEvent) // @ game+0x158ca90
	void ReceiveTargetSpawned(); // Function OBJ_Elimination_Base.OBJ_Elimination_Base_C.ReceiveTargetSpawned // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_OBJ_Elimination_Base(int32_t EntryPoint); // Function OBJ_Elimination_Base.OBJ_Elimination_Base_C.ExecuteUbergraph_OBJ_Elimination_Base // (Final|UbergraphFunction) // @ game+0x158ca90
};

