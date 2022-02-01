// BlueprintGeneratedClass BP_SelfiePoint.BP_SelfiePoint_C
// Size: 0x224 (Inherited: 0x1f0)
struct UBP_SelfiePoint_C : USceneComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1f0(0x08)
	struct ACameraActor* Camera; // 0x1f8(0x08)
	float FOV; // 0x200(0x04)
	float EaseMultiplier; // 0x204(0x04)
	enum class EEasingFunc EaseFunction; // 0x208(0x01)
	char pad_209[0x3]; // 0x209(0x03)
	float BlendExp; // 0x20c(0x04)
	int32_t Steps; // 0x210(0x04)
	bool LookAtPlayerOffset; // 0x214(0x01)
	char pad_215[0x3]; // 0x215(0x03)
	struct FVector PlayerOffset; // 0x218(0x0c)

	struct FTransform GetTargetTransform(); // Function BP_SelfiePoint.BP_SelfiePoint_C.GetTargetTransform // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x158ca90
	void DeactivateCamera(); // Function BP_SelfiePoint.BP_SelfiePoint_C.DeactivateCamera // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ActivateCamera(); // Function BP_SelfiePoint.BP_SelfiePoint_C.ActivateCamera // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ReceiveBeginPlay(); // Function BP_SelfiePoint.BP_SelfiePoint_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x158ca90
	void ReceiveTick(float DeltaSeconds); // Function BP_SelfiePoint.BP_SelfiePoint_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_BP_SelfiePoint(int32_t EntryPoint); // Function BP_SelfiePoint.BP_SelfiePoint_C.ExecuteUbergraph_BP_SelfiePoint // (Final|UbergraphFunction|HasDefaults) // @ game+0x158ca90
};

