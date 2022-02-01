// BlueprintGeneratedClass OBJ_FindItems_Base.OBJ_FindItems_Base_C
// Size: 0x1a8 (Inherited: 0x190)
struct UOBJ_FindItems_Base_C : UGatheItemsObjective {
	struct FText ObjectiveDescription; // 0x190(0x18)

	bool IsObjectiveResource(struct UResourceData* InResource); // Function OBJ_FindItems_Base.OBJ_FindItems_Base_C.IsObjectiveResource // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x158ca90
	struct UTexture2D* GetInMissionCounterIcon(); // Function OBJ_FindItems_Base.OBJ_FindItems_Base_C.GetInMissionCounterIcon // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x158ca90
	struct FText GetInMissionCounterText(); // Function OBJ_FindItems_Base.OBJ_FindItems_Base_C.GetInMissionCounterText // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x158ca90
	struct UTexture2D* GetObjectiveIcon(); // Function OBJ_FindItems_Base.OBJ_FindItems_Base_C.GetObjectiveIcon // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x158ca90
	int32_t GetObjectiveAmount(float missionLength); // Function OBJ_FindItems_Base.OBJ_FindItems_Base_C.GetObjectiveAmount // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x158ca90
	struct FText GetInMissionText(); // Function OBJ_FindItems_Base.OBJ_FindItems_Base_C.GetInMissionText // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x158ca90
	struct FText GetObjectiveDescription(float missionLength); // Function OBJ_FindItems_Base.OBJ_FindItems_Base_C.GetObjectiveDescription // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
};

