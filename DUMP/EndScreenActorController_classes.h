// BlueprintGeneratedClass EndScreenActorController.EndScreenActorController_C
// Size: 0x170 (Inherited: 0xb0)
struct UEndScreenActorController_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	struct UPlayerTPAnimInstance* AnimInstance; // 0xb8(0x08)
	float WalkPlayRate; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
	struct ABP_MisComp_FXspawner_C* FX; // 0xc8(0x08)
	struct FRandomStream RandomStream; // 0xd0(0x08)
	struct AActor* AttachmentClass; // 0xd8(0x08)
	struct AActor* AttachmentActor; // 0xe0(0x08)
	float PosePlayRate; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)
	struct FTransform SpawnTransfrom; // 0xf0(0x30)
	bool IsLooping; // 0x120(0x01)
	char pad_121[0x7]; // 0x121(0x07)
	struct FEndScreenMove ActiveMoveSet; // 0x128(0x48)

	void Reset(); // Function EndScreenActorController.EndScreenActorController_C.Reset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SpawnAttachmentIfNeeded(); // Function EndScreenActorController.EndScreenActorController_C.SpawnAttachmentIfNeeded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void Cleanup(); // Function EndScreenActorController.EndScreenActorController_C.Cleanup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void InitFXLights(struct FTransform SpawnTransform, bool Survived); // Function EndScreenActorController.EndScreenActorController_C.InitFXLights // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void RandomAnimElement(struct TArray<struct UAnimSequence*> Array, struct UAnimSequence* Output); // Function EndScreenActorController.EndScreenActorController_C.RandomAnimElement // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x158ca90
	void ReceiveBeginPlay(); // Function EndScreenActorController.EndScreenActorController_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x158ca90
	void Play(struct APlayerCharacter* PlayerCharacter, bool SurvivedInPod, struct FTransform SpawnTransform, struct FEndScreenMove ESMoveSet, int32_t Seed); // Function EndScreenActorController.EndScreenActorController_C.Play // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void PoseFinished(struct UAnimMontage* Montage, bool bInterrupted); // Function EndScreenActorController.EndScreenActorController_C.PoseFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void BreakFinished(struct UAnimMontage* Montage, bool bInterrupted); // Function EndScreenActorController.EndScreenActorController_C.BreakFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void WalkFinished(struct UAnimMontage* Montage, bool bInterrupted); // Function EndScreenActorController.EndScreenActorController_C.WalkFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void PropPoseDone(struct UAnimMontage* Montage, bool bInterrupted); // Function EndScreenActorController.EndScreenActorController_C.PropPoseDone // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void CustomEvent_1(struct UAnimMontage* Montage, bool bInterrupted); // Function EndScreenActorController.EndScreenActorController_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_EndScreenActorController(int32_t EntryPoint); // Function EndScreenActorController.EndScreenActorController_C.ExecuteUbergraph_EndScreenActorController // (Final|UbergraphFunction|HasDefaults) // @ game+0x158ca90
};

