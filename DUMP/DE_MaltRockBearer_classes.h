// BlueprintGeneratedClass DE_MaltRockBearer.DE_MaltRockBearer_C
// Size: 0xf4 (Inherited: 0xc0)
struct UDE_MaltRockBearer_C : UDrinkEffectComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	struct APlayerCharacter* Character; // 0xc8(0x08)
	float StartScale; // 0xd0(0x04)
	float TargetScale; // 0xd4(0x04)
	float Progress; // 0xd8(0x04)
	float Current Scale; // 0xdc(0x04)
	float Previous Progress; // 0xe0(0x04)
	bool IsScalingActive; // 0xe4(0x01)
	char pad_E5[0x3]; // 0xe5(0x03)
	float ScaleCheckCooldown; // 0xe8(0x04)
	bool EffectEnabled; // 0xec(0x01)
	char pad_ED[0x3]; // 0xed(0x03)
	float OriginalPitchValue; // 0xf0(0x04)

	void OnRep_Current Scale(); // Function DE_MaltRockBearer.DE_MaltRockBearer_C.OnRep_Current Scale // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void TraceForScaledCollision(bool IsNextScaleColliding); // Function DE_MaltRockBearer.DE_MaltRockBearer_C.TraceForScaledCollision // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ReceiveTick(float DeltaSeconds); // Function DE_MaltRockBearer.DE_MaltRockBearer_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x158ca90
	void OnStartEffect(struct APlayerCharacter* Character); // Function DE_MaltRockBearer.DE_MaltRockBearer_C.OnStartEffect // (Event|Protected|BlueprintEvent) // @ game+0x158ca90
	void OnStopEffect(); // Function DE_MaltRockBearer.DE_MaltRockBearer_C.OnStopEffect // (Event|Protected|BlueprintEvent) // @ game+0x158ca90
	void Handle Scaling(float DeltaTime); // Function DE_MaltRockBearer.DE_MaltRockBearer_C.Handle Scaling // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void Reset Voice(); // Function DE_MaltRockBearer.DE_MaltRockBearer_C.Reset Voice // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_DE_MaltRockBearer(int32_t EntryPoint); // Function DE_MaltRockBearer.DE_MaltRockBearer_C.ExecuteUbergraph_DE_MaltRockBearer // (Final|UbergraphFunction|HasDefaults) // @ game+0x158ca90
};

