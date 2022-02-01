// BlueprintGeneratedClass BP_DeadState.BP_DeadState_C
// Size: 0x15c (Inherited: 0x108)
struct UBP_DeadState_C : UDeadStateComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x108(0x08)
	struct FTransform Start Transform; // 0x110(0x30)
	struct UParticleSystem* deathEffect; // 0x140(0x08)
	struct UAnimMontage* deathMontage; // 0x148(0x08)
	struct UParticleSystemComponent* Active DeathParticle system; // 0x150(0x08)
	float Effect start delay; // 0x158(0x04)

	void ReceiveBeginPlay(); // Function BP_DeadState.BP_DeadState_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x158ca90
	void ReceiveStateExit(); // Function BP_DeadState.BP_DeadState_C.ReceiveStateExit // (Event|Protected|BlueprintEvent) // @ game+0x158ca90
	void ReceiveStateEnter(); // Function BP_DeadState.BP_DeadState_C.ReceiveStateEnter // (Event|Protected|BlueprintEvent) // @ game+0x158ca90
	void SetDeathParameters(float respawnDelay, float effectDelay, struct UAnimMontage* deathMontage, struct UParticleSystem* deathEffect, bool useAnimationTimeAsRespawnTime); // Function BP_DeadState.BP_DeadState_C.SetDeathParameters // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_BP_DeadState(int32_t EntryPoint); // Function BP_DeadState.BP_DeadState_C.ExecuteUbergraph_BP_DeadState // (Final|UbergraphFunction|HasDefaults) // @ game+0x158ca90
};

