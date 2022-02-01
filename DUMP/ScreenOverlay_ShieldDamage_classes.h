// WidgetBlueprintGeneratedClass ScreenOverlay_ShieldDamage.ScreenOverlay_ShieldDamage_C
// Size: 0x270 (Inherited: 0x230)
struct UScreenOverlay_ShieldDamage_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UImage* SplatImage; // 0x238(0x08)
	float Duration; // 0x240(0x04)
	float Time; // 0x244(0x04)
	struct FLinearColor Color; // 0x248(0x10)
	struct FLinearColor StartColor; // 0x258(0x10)
	struct APlayerCharacter* Player; // 0x268(0x08)

	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function ScreenOverlay_ShieldDamage.ScreenOverlay_ShieldDamage_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void OnArmorDamaged(float Amount); // Function ScreenOverlay_ShieldDamage.ScreenOverlay_ShieldDamage_C.OnArmorDamaged // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void Begin Splat(float Duration, struct FLinearColor Color); // Function ScreenOverlay_ShieldDamage.ScreenOverlay_ShieldDamage_C.Begin Splat // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void Construct(); // Function ScreenOverlay_ShieldDamage.ScreenOverlay_ShieldDamage_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void OnCharacterStateChanged(enum class ECharacterState NewState); // Function ScreenOverlay_ShieldDamage.ScreenOverlay_ShieldDamage_C.OnCharacterStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void End Splat(); // Function ScreenOverlay_ShieldDamage.ScreenOverlay_ShieldDamage_C.End Splat // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnCameraModeChanged(enum class ECharacterCameraMode NewCameraMode, enum class ECharacterCameraMode OldCameraMode); // Function ScreenOverlay_ShieldDamage.ScreenOverlay_ShieldDamage_C.OnCameraModeChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_ScreenOverlay_ShieldDamage(int32_t EntryPoint); // Function ScreenOverlay_ShieldDamage.ScreenOverlay_ShieldDamage_C.ExecuteUbergraph_ScreenOverlay_ShieldDamage // (Final|UbergraphFunction|HasDefaults) // @ game+0x158ca90
};

