// BlueprintGeneratedClass ITM_GrenadeThrow.ITM_GrenadeThrow_C
// Size: 0x488 (Inherited: 0x3b0)
struct AITM_GrenadeThrow_C : AThrownGrenadeItem {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3b0(0x08)
	struct UBillboardComponent* Billboard; // 0x3b8(0x08)
	struct USceneComponent* EndPoint; // 0x3c0(0x08)
	struct USplineMeshComponent* SplineMesh; // 0x3c8(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x3d0(0x08)
	struct FVector StartTangent; // 0x3d8(0x0c)
	struct FVector EndTangent; // 0x3e4(0x0c)
	struct FVector EndLocation; // 0x3f0(0x0c)
	char pad_3FC[0x4]; // 0x3fc(0x04)
	struct FRuntimeFloatCurve ScaleCurve; // 0x400(0x88)

	void UpdateSpline(struct TArray<struct FVector> Array, float DeltaTime); // Function ITM_GrenadeThrow.ITM_GrenadeThrow_C.UpdateSpline // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ReceiveTick(float DeltaSeconds); // Function ITM_GrenadeThrow.ITM_GrenadeThrow_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x158ca90
	void RecieveEquipped(); // Function ITM_GrenadeThrow.ITM_GrenadeThrow_C.RecieveEquipped // (Event|Protected|BlueprintEvent) // @ game+0x158ca90
	void RecieveUnequipped(); // Function ITM_GrenadeThrow.ITM_GrenadeThrow_C.RecieveUnequipped // (Event|Protected|BlueprintEvent) // @ game+0x158ca90
	void ReceiveBeginPlay(); // Function ITM_GrenadeThrow.ITM_GrenadeThrow_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x158ca90
	void Set Is Visible(bool Visible); // Function ITM_GrenadeThrow.ITM_GrenadeThrow_C.Set Is Visible // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void GrenadeThrown(); // Function ITM_GrenadeThrow.ITM_GrenadeThrow_C.GrenadeThrown // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_ITM_GrenadeThrow(int32_t EntryPoint); // Function ITM_GrenadeThrow.ITM_GrenadeThrow_C.ExecuteUbergraph_ITM_GrenadeThrow // (Final|UbergraphFunction|HasDefaults) // @ game+0x158ca90
};

