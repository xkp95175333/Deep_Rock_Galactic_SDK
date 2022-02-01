// BlueprintGeneratedClass BP_DownedState.BP_DownedState_C
// Size: 0x1a0 (Inherited: 0x148)
struct UBP_DownedState_C : UDownedStateComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x148(0x08)
	struct TSoftObjectPtr<struct UObject> SeeYouInHell_Particles; // 0x150(0x28)
	struct TSoftObjectPtr<struct UObject> SeeYOuInHell_Charge_Particles; // 0x178(0x28)

	void OnLoaded_4C0CAFB9405C60A5642DA2A8AFDA785B(struct UObject* Loaded); // Function BP_DownedState.BP_DownedState_C.OnLoaded_4C0CAFB9405C60A5642DA2A8AFDA785B // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnLoaded_5277138148709B6872AFA8AE00BD1B01(struct UObject* Loaded); // Function BP_DownedState.BP_DownedState_C.OnLoaded_5277138148709B6872AFA8AE00BD1B01 // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnLoaded_EE490F594C2547CD96CB63943EA06475(struct UObject* Loaded); // Function BP_DownedState.BP_DownedState_C.OnLoaded_EE490F594C2547CD96CB63943EA06475 // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnLoaded_369215DE4E9E3D75961755AB344B6937(struct UObject* Loaded); // Function BP_DownedState.BP_DownedState_C.OnLoaded_369215DE4E9E3D75961755AB344B6937 // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ReceiveBeginPlay(); // Function BP_DownedState.BP_DownedState_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x158ca90
	void Receive_TriggerDownedBomb(); // Function BP_DownedState.BP_DownedState_C.Receive_TriggerDownedBomb // (Event|Protected|BlueprintEvent) // @ game+0x158ca90
	void All_ShowDownedBomb(); // Function BP_DownedState.BP_DownedState_C.All_ShowDownedBomb // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void All_ShowBombIntro(); // Function BP_DownedState.BP_DownedState_C.All_ShowBombIntro // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void Server_SpawnDBField(); // Function BP_DownedState.BP_DownedState_C.Server_SpawnDBField // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_BP_DownedState(int32_t EntryPoint); // Function BP_DownedState.BP_DownedState_C.ExecuteUbergraph_BP_DownedState // (Final|UbergraphFunction|HasDefaults) // @ game+0x158ca90
};

