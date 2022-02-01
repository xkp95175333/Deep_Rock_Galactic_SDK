// BlueprintGeneratedClass BP_FSDCameraManager.BP_FSDCameraManager_C
// Size: 0x278c (Inherited: 0x2740)
struct ABP_FSDCameraManager_C : AFSDPlayerCameraManager {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2740(0x08)
	struct UStaticMeshComponent* PhysicalSphere; // 0x2748(0x08)
	bool SessionStarted; // 0x2750(0x01)
	char pad_2751[0x3]; // 0x2751(0x03)
	float MaxDistance; // 0x2754(0x04)
	struct FMulticastInlineDelegate HideHUDForPhotography; // 0x2758(0x10)
	struct FMulticastInlineDelegate ShowHUDForPhotography; // 0x2768(0x10)
	bool UserVisibility; // 0x2778(0x01)
	enum class ECharacterCameraMode PreviousCameraMode; // 0x2779(0x01)
	bool PauseGame; // 0x277a(0x01)
	char pad_277B[0x1]; // 0x277b(0x01)
	float SphereReturnVelocity; // 0x277c(0x04)
	float MaxDistanceTolerance; // 0x2780(0x04)
	bool KeyDebug; // 0x2784(0x01)
	char pad_2785[0x3]; // 0x2785(0x03)
	float MaxSpeed; // 0x2788(0x04)

	void ChangeMaxDistance(float MaxDistance); // Function BP_FSDCameraManager.BP_FSDCameraManager_C.ChangeMaxDistance // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ChangeSpeed(float MaxSpeed); // Function BP_FSDCameraManager.BP_FSDCameraManager_C.ChangeSpeed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	float SmoothReturnVelocity(struct FVector New Camera Location); // Function BP_FSDCameraManager.BP_FSDCameraManager_C.SmoothReturnVelocity // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x158ca90
	void SphereDirectionToPlayer(struct FVector Direction); // Function BP_FSDCameraManager.BP_FSDCameraManager_C.SphereDirectionToPlayer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x158ca90
	void SetToThirdPersonCamera(struct FVector New Camera Position); // Function BP_FSDCameraManager.BP_FSDCameraManager_C.SetToThirdPersonCamera // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ReturnCameraMode(struct APlayerCharacter* Target, enum class ECharacterCameraMode NewCameraMode); // Function BP_FSDCameraManager.BP_FSDCameraManager_C.ReturnCameraMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void PhotographyCameraModify(struct FVector NewCameraLocation, struct FVector PreviousCameraLocation, struct FVector OriginalCameraLocation, struct FVector ResultCameraLocation); // Function BP_FSDCameraManager.BP_FSDCameraManager_C.PhotographyCameraModify // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ReceiveDestroyed(); // Function BP_FSDCameraManager.BP_FSDCameraManager_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0x158ca90
	void OnPhotographySessionEnd(); // Function BP_FSDCameraManager.BP_FSDCameraManager_C.OnPhotographySessionEnd // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void OnPhotographySessionStart(); // Function BP_FSDCameraManager.BP_FSDCameraManager_C.OnPhotographySessionStart // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void TogglePhotographyMode(bool Active); // Function BP_FSDCameraManager.BP_FSDCameraManager_C.TogglePhotographyMode // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void Return Camera(); // Function BP_FSDCameraManager.BP_FSDCameraManager_C.Return Camera // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ReceiveTick(float DeltaSeconds); // Function BP_FSDCameraManager.BP_FSDCameraManager_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x158ca90
	void LoaderStart(struct ULevelSequence* LoaderLevelSequence); // Function BP_FSDCameraManager.BP_FSDCameraManager_C.LoaderStart // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ReceiveBeginPlay(); // Function BP_FSDCameraManager.BP_FSDCameraManager_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x158ca90
	void LoaderStop(); // Function BP_FSDCameraManager.BP_FSDCameraManager_C.LoaderStop // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_BP_FSDCameraManager(int32_t EntryPoint); // Function BP_FSDCameraManager.BP_FSDCameraManager_C.ExecuteUbergraph_BP_FSDCameraManager // (Final|UbergraphFunction) // @ game+0x158ca90
	void ShowHUDForPhotography__DelegateSignature(); // Function BP_FSDCameraManager.BP_FSDCameraManager_C.ShowHUDForPhotography__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void HideHUDForPhotography__DelegateSignature(); // Function BP_FSDCameraManager.BP_FSDCameraManager_C.HideHUDForPhotography__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
};

