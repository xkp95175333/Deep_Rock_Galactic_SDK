// BlueprintGeneratedClass BP_PassedOut.BP_PassedOut_C
// Size: 0x151 (Inherited: 0x110)
struct UBP_PassedOut_C : UPassedOutStateComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x110(0x08)
	char pad_118[0x8]; // 0x118(0x08)
	struct FTransform Start Transform; // 0x120(0x30)
	bool WakeInBed; // 0x150(0x01)

	void AllPassedOut(bool AllPassedOut); // Function BP_PassedOut.BP_PassedOut_C.AllPassedOut // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x158ca90
	void ReceiveBeginPlay(); // Function BP_PassedOut.BP_PassedOut_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x158ca90
	void BeginFadeToBlack(); // Function BP_PassedOut.BP_PassedOut_C.BeginFadeToBlack // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ReceiveStateEnter(); // Function BP_PassedOut.BP_PassedOut_C.ReceiveStateEnter // (Event|Protected|BlueprintEvent) // @ game+0x158ca90
	void ReceiveStateExit(); // Function BP_PassedOut.BP_PassedOut_C.ReceiveStateExit // (Event|Protected|BlueprintEvent) // @ game+0x158ca90
	void Turn Off Juke Box(); // Function BP_PassedOut.BP_PassedOut_C.Turn Off Juke Box // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void Remove Drinking Mugs(); // Function BP_PassedOut.BP_PassedOut_C.Remove Drinking Mugs // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ReceiveTeamPassedOut(); // Function BP_PassedOut.BP_PassedOut_C.ReceiveTeamPassedOut // (Event|Protected|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_BP_PassedOut(int32_t EntryPoint); // Function BP_PassedOut.BP_PassedOut_C.ExecuteUbergraph_BP_PassedOut // (Final|UbergraphFunction|HasDefaults) // @ game+0x158ca90
};

