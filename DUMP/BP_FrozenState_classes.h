// BlueprintGeneratedClass BP_FrozenState.BP_FrozenState_C
// Size: 0x138 (Inherited: 0x130)
struct UBP_FrozenState_C : UFrozenStateComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x130(0x08)

	void ReceiveStateEnter(); // Function BP_FrozenState.BP_FrozenState_C.ReceiveStateEnter // (Event|Protected|BlueprintEvent) // @ game+0x158ca90
	void ReceiveStateExit(); // Function BP_FrozenState.BP_FrozenState_C.ReceiveStateExit // (Event|Protected|BlueprintEvent) // @ game+0x158ca90
	void ReceiveOnDefrosting(); // Function BP_FrozenState.BP_FrozenState_C.ReceiveOnDefrosting // (Event|Protected|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_BP_FrozenState(int32_t EntryPoint); // Function BP_FrozenState.BP_FrozenState_C.ExecuteUbergraph_BP_FrozenState // (Final|UbergraphFunction) // @ game+0x158ca90
};

