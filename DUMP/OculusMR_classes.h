// Class OculusMR.OculusMR_BoundaryActor
// Size: 0x228 (Inherited: 0x220)
struct AOculusMR_BoundaryActor : AActor {
	struct UOculusMR_BoundaryMeshComponent* BoundaryMeshComponent; // 0x220(0x08)
};

// Class OculusMR.OculusMR_BoundaryMeshComponent
// Size: 0x440 (Inherited: 0x420)
struct UOculusMR_BoundaryMeshComponent : UMeshComponent {
	enum class EOculusMR_BoundaryType BoundaryType; // 0x418(0x01)
	float BottomZ; // 0x41c(0x04)
	float TopZ; // 0x420(0x04)
	struct UMaterial* WhiteMaterial; // 0x428(0x08)
	struct AOculusMR_CastingCameraActor* CastingCameraActor; // 0x430(0x08)
	char pad_439[0x7]; // 0x439(0x07)
};

// Class OculusMR.OculusMR_CastingCameraActor
// Size: 0x330 (Inherited: 0x238)
struct AOculusMR_CastingCameraActor : ASceneCapture2D {
	struct UVRNotificationsComponent* VRNotificationComponent; // 0x238(0x08)
	struct UTexture2D* CameraColorTexture; // 0x240(0x08)
	struct UTexture2D* CameraDepthTexture; // 0x248(0x08)
	struct UOculusMR_PlaneMeshComponent* PlaneMeshComponent; // 0x250(0x08)
	struct UMaterial* ChromaKeyMaterial; // 0x258(0x08)
	struct UMaterial* ChromaKeyLitMaterial; // 0x260(0x08)
	struct UMaterial* OpaqueColoredMaterial; // 0x268(0x08)
	struct UMaterialInstanceDynamic* ChromaKeyMaterialInstance; // 0x270(0x08)
	struct UMaterialInstanceDynamic* ChromaKeyLitMaterialInstance; // 0x278(0x08)
	struct UMaterialInstanceDynamic* CameraFrameMaterialInstance; // 0x280(0x08)
	struct UMaterialInstanceDynamic* BackdropMaterialInstance; // 0x288(0x08)
	struct AOculusMR_BoundaryActor* BoundaryActor; // 0x290(0x08)
	struct ASceneCapture2D* BoundarySceneCaptureActor; // 0x298(0x08)
	struct UTexture2D* DefaultTexture_White; // 0x2a0(0x08)
	char pad_2A8[0x50]; // 0x2a8(0x50)
	struct TArray<struct UTextureRenderTarget2D*> BackgroundRenderTargets; // 0x2f8(0x10)
	struct ASceneCapture2D* ForegroundCaptureActor; // 0x308(0x08)
	struct TArray<struct UTextureRenderTarget2D*> ForegroundRenderTargets; // 0x310(0x10)
	struct UOculusMR_Settings* MRSettings; // 0x320(0x08)
	struct UOculusMR_State* MRState; // 0x328(0x08)
};

// Class OculusMR.OculusMR_PlaneMeshComponent
// Size: 0x430 (Inherited: 0x420)
struct UOculusMR_PlaneMeshComponent : UMeshComponent {
	char pad_420[0x10]; // 0x420(0x10)

	bool SetCustomMeshTriangles(struct TArray<struct FOculusMR_PlaneMeshTriangle> Triangles); // Function OculusMR.OculusMR_PlaneMeshComponent.SetCustomMeshTriangles // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xca1700
	void ClearCustomMeshTriangles(); // Function OculusMR.OculusMR_PlaneMeshComponent.ClearCustomMeshTriangles // (Final|Native|Public|BlueprintCallable) // @ game+0xca13f0
	void AddCustomMeshTriangles(struct TArray<struct FOculusMR_PlaneMeshTriangle> Triangles); // Function OculusMR.OculusMR_PlaneMeshComponent.AddCustomMeshTriangles // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xca12c0
};

// Class OculusMR.OculusMR_Settings
// Size: 0xc8 (Inherited: 0x28)
struct UOculusMR_Settings : UObject {
	enum class EOculusMR_ClippingReference ClippingReference; // 0x28(0x01)
	bool bUseTrackedCameraResolution; // 0x29(0x01)
	char pad_2A[0x2]; // 0x2a(0x02)
	int32_t WidthPerView; // 0x2c(0x04)
	int32_t HeightPerView; // 0x30(0x04)
	float CastingLatency; // 0x34(0x04)
	struct FColor BackdropColor; // 0x38(0x04)
	float HandPoseStateLatency; // 0x3c(0x04)
	struct FColor ChromaKeyColor; // 0x40(0x04)
	float ChromaKeySimilarity; // 0x44(0x04)
	float ChromaKeySmoothRange; // 0x48(0x04)
	float ChromaKeySpillRange; // 0x4c(0x04)
	enum class EOculusMR_VirtualGreenScreenType VirtualGreenScreenType; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	float DynamicLightingDepthSmoothFactor; // 0x54(0x04)
	float DynamicLightingDepthVariationClampingValue; // 0x58(0x04)
	enum class EOculusMR_PostProcessEffects ExternalCompositionPostProcessEffects; // 0x5c(0x01)
	bool bIsCasting; // 0x5d(0x01)
	enum class EOculusMR_CompositionMethod CompositionMethod; // 0x5e(0x01)
	enum class EOculusMR_CameraDeviceEnum CapturingCamera; // 0x5f(0x01)
	bool bUseDynamicLighting; // 0x60(0x01)
	enum class EOculusMR_DepthQuality DepthQuality; // 0x61(0x01)
	char pad_62[0x66]; // 0x62(0x66)

	void SetUseDynamicLighting(bool Val); // Function OculusMR.OculusMR_Settings.SetUseDynamicLighting // (Final|Native|Public|BlueprintCallable) // @ game+0xca19d0
	void SetIsCasting(bool Val); // Function OculusMR.OculusMR_Settings.SetIsCasting // (Final|Native|Public|BlueprintCallable) // @ game+0xca1840
	void SetDepthQuality(enum class EOculusMR_DepthQuality Val); // Function OculusMR.OculusMR_Settings.SetDepthQuality // (Final|Native|Public|BlueprintCallable) // @ game+0xca17c0
	void SetCompositionMethod(enum class EOculusMR_CompositionMethod Val); // Function OculusMR.OculusMR_Settings.SetCompositionMethod // (Final|Native|Public|BlueprintCallable) // @ game+0xca1680
	void SetCapturingCamera(enum class EOculusMR_CameraDeviceEnum Val); // Function OculusMR.OculusMR_Settings.SetCapturingCamera // (Final|Native|Public|BlueprintCallable) // @ game+0xca1600
	void SaveToIni(); // Function OculusMR.OculusMR_Settings.SaveToIni // (Final|Native|Public|BlueprintCallable|Const) // @ game+0xca15e0
	void LoadFromIni(); // Function OculusMR.OculusMR_Settings.LoadFromIni // (Final|Native|Public|BlueprintCallable) // @ game+0xca15c0
	bool GetUseDynamicLighting(); // Function OculusMR.OculusMR_Settings.GetUseDynamicLighting // (Final|Native|Public|BlueprintCallable) // @ game+0xca1540
	bool GetIsCasting(); // Function OculusMR.OculusMR_Settings.GetIsCasting // (Final|Native|Public|BlueprintCallable) // @ game+0xca1490
	enum class EOculusMR_DepthQuality GetDepthQuality(); // Function OculusMR.OculusMR_Settings.GetDepthQuality // (Final|Native|Public|BlueprintCallable) // @ game+0xca1470
	enum class EOculusMR_CompositionMethod GetCompositionMethod(); // Function OculusMR.OculusMR_Settings.GetCompositionMethod // (Final|Native|Public|BlueprintCallable) // @ game+0xca1450
	enum class EOculusMR_CameraDeviceEnum GetCapturingCamera(); // Function OculusMR.OculusMR_Settings.GetCapturingCamera // (Final|Native|Public|BlueprintCallable) // @ game+0xca1430
	int32_t GetBindToTrackedCameraIndex(); // Function OculusMR.OculusMR_Settings.GetBindToTrackedCameraIndex // (Final|Native|Public|BlueprintCallable) // @ game+0xca1410
	void BindToTrackedCameraIndexIfAvailable(int32_t InTrackedCameraIndex); // Function OculusMR.OculusMR_Settings.BindToTrackedCameraIndexIfAvailable // (Final|Native|Public|BlueprintCallable) // @ game+0xca1370
};

// Class OculusMR.OculusMR_State
// Size: 0xb0 (Inherited: 0x28)
struct UOculusMR_State : UObject {
	struct FTrackedCamera TrackedCamera; // 0x28(0x70)
	struct USceneComponent* TrackingReferenceComponent; // 0x98(0x08)
	double ScalingFactor; // 0xa0(0x08)
	char pad_A8[0x4]; // 0xa8(0x04)
	bool ChangeCameraStateRequested; // 0xac(0x01)
	bool BindToTrackedCameraIndexRequested; // 0xad(0x01)
	char pad_AE[0x2]; // 0xae(0x02)
};

// Class OculusMR.OculusMRFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UOculusMRFunctionLibrary : UBlueprintFunctionLibrary {

	bool SetTrackingReferenceComponent(struct USceneComponent* Component); // Function OculusMR.OculusMRFunctionLibrary.SetTrackingReferenceComponent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xca1950
	bool SetMrcScalingFactor(float ScalingFactor); // Function OculusMR.OculusMRFunctionLibrary.SetMrcScalingFactor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xca18d0
	bool IsMrcEnabled(); // Function OculusMR.OculusMRFunctionLibrary.IsMrcEnabled // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xca1590
	bool IsMrcActive(); // Function OculusMR.OculusMRFunctionLibrary.IsMrcActive // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xca1560
	struct USceneComponent* GetTrackingReferenceComponent(); // Function OculusMR.OculusMRFunctionLibrary.GetTrackingReferenceComponent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xca1510
	struct UOculusMR_Settings* GetOculusMRSettings(); // Function OculusMR.OculusMRFunctionLibrary.GetOculusMRSettings // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xca14e0
	float GetMrcScalingFactor(); // Function OculusMR.OculusMRFunctionLibrary.GetMrcScalingFactor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xca14b0
};

