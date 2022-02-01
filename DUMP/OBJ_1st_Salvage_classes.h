// BlueprintGeneratedClass OBJ_1st_Salvage.OBJ_1st_Salvage_C
// Size: 0x280 (Inherited: 0x268)
struct UOBJ_1st_Salvage_C : USalvageObjective {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct FMulticastInlineDelegate OnAllActorsSalvaged; // 0x270(0x10)

	struct UTexture2D* GetInMissionCounterIcon(); // Function OBJ_1st_Salvage.OBJ_1st_Salvage_C.GetInMissionCounterIcon // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x158ca90
	struct FText GetInMissionCounterText(); // Function OBJ_1st_Salvage.OBJ_1st_Salvage_C.GetInMissionCounterText // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x158ca90
	int32_t GetObjectiveAmount(float missionLength); // Function OBJ_1st_Salvage.OBJ_1st_Salvage_C.GetObjectiveAmount // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x158ca90
	struct FText GetInMissionText(); // Function OBJ_1st_Salvage.OBJ_1st_Salvage_C.GetInMissionText // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x158ca90
	struct FText GetObjectiveDescription(float missionLength); // Function OBJ_1st_Salvage.OBJ_1st_Salvage_C.GetObjectiveDescription // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	struct UTexture2D* GetObjectiveIcon(); // Function OBJ_1st_Salvage.OBJ_1st_Salvage_C.GetObjectiveIcon // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x158ca90
	void AllActorsSalvaged(); // Function OBJ_1st_Salvage.OBJ_1st_Salvage_C.AllActorsSalvaged // (Event|Protected|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_OBJ_1st_Salvage(int32_t EntryPoint); // Function OBJ_1st_Salvage.OBJ_1st_Salvage_C.ExecuteUbergraph_OBJ_1st_Salvage // (Final|UbergraphFunction) // @ game+0x158ca90
	void OnAllActorsSalvaged__DelegateSignature(); // Function OBJ_1st_Salvage.OBJ_1st_Salvage_C.OnAllActorsSalvaged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
};

