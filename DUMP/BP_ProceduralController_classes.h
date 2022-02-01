// BlueprintGeneratedClass BP_ProceduralController.BP_ProceduralController_C
// Size: 0xb8 (Inherited: 0xb0)
struct UBP_ProceduralController_C : UProceduralController {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)

	void SendRoomData(); // Function BP_ProceduralController.BP_ProceduralController_C.SendRoomData // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SendTunnelData(); // Function BP_ProceduralController.BP_ProceduralController_C.SendTunnelData // (Event|Protected|BlueprintEvent) // @ game+0x158ca90
	void ReceivedRoomData(int32_t Seed, struct TArray<struct FRoomNode> Rooms, struct TArray<struct FPathObstacle> obstacles); // Function BP_ProceduralController.BP_ProceduralController_C.ReceivedRoomData // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x158ca90
	void ReceivedTunnelData(struct TArray<struct FTunnelNode> Tunnels); // Function BP_ProceduralController.BP_ProceduralController_C.ReceivedTunnelData // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x158ca90
	void Server_RequestPLSData(); // Function BP_ProceduralController.BP_ProceduralController_C.Server_RequestPLSData // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void Server_RequestCarverData(enum class EDebrisItemPass pass); // Function BP_ProceduralController.BP_ProceduralController_C.Server_RequestCarverData // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void RequestPLSData(); // Function BP_ProceduralController.BP_ProceduralController_C.RequestPLSData // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void RequestCarverData(enum class EDebrisItemPass pass); // Function BP_ProceduralController.BP_ProceduralController_C.RequestCarverData // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_BP_ProceduralController(int32_t EntryPoint); // Function BP_ProceduralController.BP_ProceduralController_C.ExecuteUbergraph_BP_ProceduralController // (Final|UbergraphFunction|HasDefaults) // @ game+0x158ca90
};

