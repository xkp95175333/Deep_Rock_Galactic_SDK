// BlueprintGeneratedClass BP_ZipLineState.BP_ZipLineState_C
// Size: 0x238 (Inherited: 0x230)
struct UBP_ZipLineState_C : UZipLineStateComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)

	struct FVector GetJumpVector(struct FVector LookVector, struct FVector CurrentVelocity); // Function BP_ZipLineState.BP_ZipLineState_C.GetJumpVector // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ReceiveSpeedBoostActivated(); // Function BP_ZipLineState.BP_ZipLineState_C.ReceiveSpeedBoostActivated // (Event|Protected|BlueprintEvent) // @ game+0x158ca90
	void ReceiveSpeedBoostDeactivated(); // Function BP_ZipLineState.BP_ZipLineState_C.ReceiveSpeedBoostDeactivated // (Event|Protected|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_BP_ZipLineState(int32_t EntryPoint); // Function BP_ZipLineState.BP_ZipLineState_C.ExecuteUbergraph_BP_ZipLineState // (Final|UbergraphFunction) // @ game+0x158ca90
};

