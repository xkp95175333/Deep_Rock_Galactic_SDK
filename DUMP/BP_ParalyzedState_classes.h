// BlueprintGeneratedClass BP_ParalyzedState.BP_ParalyzedState_C
// Size: 0x158 (Inherited: 0x140)
struct UBP_ParalyzedState_C : UParalyzedStateComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x140(0x08)
	struct FRotator StoredRotation; // 0x148(0x0c)
	float Camera Arm Y Rotation ; // 0x154(0x04)

	void ReceiveStateEnter(); // Function BP_ParalyzedState.BP_ParalyzedState_C.ReceiveStateEnter // (Event|Protected|BlueprintEvent) // @ game+0x158ca90
	void ReceiveStateExit(); // Function BP_ParalyzedState.BP_ParalyzedState_C.ReceiveStateExit // (Event|Protected|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_BP_ParalyzedState(int32_t EntryPoint); // Function BP_ParalyzedState.BP_ParalyzedState_C.ExecuteUbergraph_BP_ParalyzedState // (Final|UbergraphFunction|HasDefaults) // @ game+0x158ca90
};

