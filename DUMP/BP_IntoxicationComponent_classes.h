// BlueprintGeneratedClass BP_IntoxicationComponent.BP_IntoxicationComponent_C
// Size: 0x148 (Inherited: 0x100)
struct UBP_IntoxicationComponent_C : UCharacterIntoxicationComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x100(0x08)
	float Seed; // 0x108(0x04)
	float DrunkEffectCoolDown; // 0x10c(0x04)
	float DrunkenMovementNoiseStrength; // 0x110(0x04)
	float DrunkenYawNoiseStrength; // 0x114(0x04)
	float DrunkenPitchNoiseStrength; // 0x118(0x04)
	bool IgnoreMovement; // 0x11c(0x01)
	bool IgnoreYaw; // 0x11d(0x01)
	bool IgnorePitch; // 0x11e(0x01)
	char pad_11F[0x1]; // 0x11f(0x01)
	struct UMaterialInstanceDynamic* DrunkenEffect; // 0x120(0x08)
	struct FName EffectID; // 0x128(0x08)
	float IntoxicationVisualStrength; // 0x130(0x04)
	float IntoxicationMovementStrength; // 0x134(0x04)
	float DrunkenShoutCoolDown; // 0x138(0x04)
	float ShoutCooldownMax; // 0x13c(0x04)
	float ShoutCooldownMin; // 0x140(0x04)
	float BeginShoutIntoxicationLimit; // 0x144(0x04)

	void ToPercentStr(float Progress, struct FString PercentString); // Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.ToPercentStr // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x158ca90
	void MyLerp(float Current Value, float Target Value, float Delta Time, float Result); // Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.MyLerp // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x158ca90
	void SetPostProcessStrength(float NewStrength); // Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.SetPostProcessStrength // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	int32_t GetAlcoholPct(enum class EDrinkableAlcoholStrength Strength); // Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.GetAlcoholPct // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x158ca90
	void Lerp Movement Stength(float DeltaTime); // Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.Lerp Movement Stength // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void Push Effects(); // Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.Push Effects // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void Pop Effects(struct FString DebugReason); // Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.Pop Effects // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ReceiveDrunkTick(float DeltaTime, float DrunkTime); // Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.ReceiveDrunkTick // (Event|Protected|BlueprintEvent) // @ game+0x158ca90
	void ReceivePassOutDrunk(); // Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.ReceivePassOutDrunk // (Event|Protected|BlueprintEvent) // @ game+0x158ca90
	void Lerp Post Process Strength(float DeltaTime); // Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.Lerp Post Process Strength // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ReceiveDrunkEnd(); // Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.ReceiveDrunkEnd // (Event|Protected|BlueprintEvent) // @ game+0x158ca90
	void ReceiveDrunkBegin(); // Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.ReceiveDrunkBegin // (Event|Protected|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_BP_IntoxicationComponent(int32_t EntryPoint); // Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.ExecuteUbergraph_BP_IntoxicationComponent // (Final|UbergraphFunction) // @ game+0x158ca90
};

