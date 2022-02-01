// BlueprintGeneratedClass OBJ_1st_Refinery.OBJ_1st_Refinery_C
// Size: 0x210 (Inherited: 0x208)
struct UOBJ_1st_Refinery_C : URefineryObjective {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x208(0x08)

	int32_t GetObjectiveAmount(float missionLength); // Function OBJ_1st_Refinery.OBJ_1st_Refinery_C.GetObjectiveAmount // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x158ca90
	struct FText GetObjectiveDescription(float missionLength); // Function OBJ_1st_Refinery.OBJ_1st_Refinery_C.GetObjectiveDescription // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	struct FText GetInMissionText(); // Function OBJ_1st_Refinery.OBJ_1st_Refinery_C.GetInMissionText // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x158ca90
	struct UTexture2D* GetObjectiveIcon(); // Function OBJ_1st_Refinery.OBJ_1st_Refinery_C.GetObjectiveIcon // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x158ca90
	void ReceiveRefinerySpawned(struct AFSDRefinery* InRefinery); // Function OBJ_1st_Refinery.OBJ_1st_Refinery_C.ReceiveRefinerySpawned // (Event|Protected|BlueprintEvent) // @ game+0x158ca90
	void OnRefineryStateChangedBP(enum class ERefineryState InRefineryState); // Function OBJ_1st_Refinery.OBJ_1st_Refinery_C.OnRefineryStateChangedBP // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_OBJ_1st_Refinery(int32_t EntryPoint); // Function OBJ_1st_Refinery.OBJ_1st_Refinery_C.ExecuteUbergraph_OBJ_1st_Refinery // (Final|UbergraphFunction) // @ game+0x158ca90
};

