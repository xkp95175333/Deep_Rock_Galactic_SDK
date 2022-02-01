// BlueprintGeneratedClass OBJ_1st_Escort.OBJ_1st_Escort_C
// Size: 0x388 (Inherited: 0x338)
struct UOBJ_1st_Escort_C : UEscortObjective {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x338(0x08)
	SoftClassProperty GarageBeacon; // 0x340(0x28)
	bool MuleClass; // 0x368(0x01)
	char pad_369[0x7]; // 0x369(0x07)
	struct FSoftObjectPath EscortMuleClass; // 0x370(0x18)

	int32_t GetObjectiveAmount(float missionLength); // Function OBJ_1st_Escort.OBJ_1st_Escort_C.GetObjectiveAmount // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x158ca90
	struct FText GetObjectiveDescription(float missionLength); // Function OBJ_1st_Escort.OBJ_1st_Escort_C.GetObjectiveDescription // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	struct FText GetInMissionText(); // Function OBJ_1st_Escort.OBJ_1st_Escort_C.GetInMissionText // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x158ca90
	struct UTexture2D* GetObjectiveIcon(); // Function OBJ_1st_Escort.OBJ_1st_Escort_C.GetObjectiveIcon // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x158ca90
	void ReceiveBeginPlay(); // Function OBJ_1st_Escort.OBJ_1st_Escort_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x158ca90
	void OnEscortMuleSpawnedEvent(); // Function OBJ_1st_Escort.OBJ_1st_Escort_C.OnEscortMuleSpawnedEvent // (Event|Protected|BlueprintEvent) // @ game+0x158ca90
	void OnMuleDied(struct UHealthComponentBase* HealthComponent); // Function OBJ_1st_Escort.OBJ_1st_Escort_C.OnMuleDied // (Event|Protected|BlueprintEvent) // @ game+0x158ca90
	void SpawnGarage(); // Function OBJ_1st_Escort.OBJ_1st_Escort_C.SpawnGarage // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnAllDwarvesDown(); // Function OBJ_1st_Escort.OBJ_1st_Escort_C.OnAllDwarvesDown // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_OBJ_1st_Escort(int32_t EntryPoint); // Function OBJ_1st_Escort.OBJ_1st_Escort_C.ExecuteUbergraph_OBJ_1st_Escort // (Final|UbergraphFunction|HasDefaults) // @ game+0x158ca90
};

