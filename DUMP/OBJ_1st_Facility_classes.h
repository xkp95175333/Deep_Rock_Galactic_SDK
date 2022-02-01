// BlueprintGeneratedClass OBJ_1st_Facility.OBJ_1st_Facility_C
// Size: 0x2f8 (Inherited: 0x2f0)
struct UOBJ_1st_Facility_C : UFacilityObjective {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)

	struct FText GetObjectiveDescription(float missionLength); // Function OBJ_1st_Facility.OBJ_1st_Facility_C.GetObjectiveDescription // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	struct FText GetInMissionCounterText(); // Function OBJ_1st_Facility.OBJ_1st_Facility_C.GetInMissionCounterText // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x158ca90
	struct FText GetInMissionText(); // Function OBJ_1st_Facility.OBJ_1st_Facility_C.GetInMissionText // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x158ca90
	int32_t GetObjectiveAmount(float missionLength); // Function OBJ_1st_Facility.OBJ_1st_Facility_C.GetObjectiveAmount // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x158ca90
	bool IsObjectiveResource(struct UResourceData* InResource); // Function OBJ_1st_Facility.OBJ_1st_Facility_C.IsObjectiveResource // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x158ca90
	struct UTexture2D* GetInMissionCounterIcon(); // Function OBJ_1st_Facility.OBJ_1st_Facility_C.GetInMissionCounterIcon // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x158ca90
	struct UTexture2D* GetObjectiveIcon(); // Function OBJ_1st_Facility.OBJ_1st_Facility_C.GetObjectiveIcon // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x158ca90
	void ReceiveBeginPlay(); // Function OBJ_1st_Facility.OBJ_1st_Facility_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x158ca90
	void OnCoreDeposited(); // Function OBJ_1st_Facility.OBJ_1st_Facility_C.OnCoreDeposited // (Event|Public|BlueprintEvent) // @ game+0x158ca90
	void Receive_AddEnemies(struct AProceduralSetup* setup); // Function OBJ_1st_Facility.OBJ_1st_Facility_C.Receive_AddEnemies // (Event|Public|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_OBJ_1st_Facility(int32_t EntryPoint); // Function OBJ_1st_Facility.OBJ_1st_Facility_C.ExecuteUbergraph_OBJ_1st_Facility // (Final|UbergraphFunction) // @ game+0x158ca90
};

