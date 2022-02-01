// Class OculusHMD.OculusFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UOculusFunctionLibrary : UBlueprintFunctionLibrary {

	void ShowLoadingSplashScreen(); // Function OculusHMD.OculusFunctionLibrary.ShowLoadingSplashScreen // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc91040
	void ShowLoadingIcon(struct UTexture2D* Texture); // Function OculusHMD.OculusFunctionLibrary.ShowLoadingIcon // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc90fd0
	void SetReorientHMDOnControllerRecenter(bool recenterMode); // Function OculusHMD.OculusFunctionLibrary.SetReorientHMDOnControllerRecenter // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc90f50
	void SetPositionScale3D(struct FVector PosScale3D); // Function OculusHMD.OculusFunctionLibrary.SetPositionScale3D // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0xc90ef0
	void SetLoadingSplashParams(struct FString TexturePath, struct FVector DistanceInMeters, struct FVector2D SizeInMeters, struct FVector RotationAxis, float RotationDeltaInDeg); // Function OculusHMD.OculusFunctionLibrary.SetLoadingSplashParams // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0xc90d10
	void SetGuardianVisibility(bool GuardianVisible); // Function OculusHMD.OculusFunctionLibrary.SetGuardianVisibility // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc90c90
	void SetFixedFoveatedRenderingLevel(enum class EFixedFoveatedRenderingLevel Level); // Function OculusHMD.OculusFunctionLibrary.SetFixedFoveatedRenderingLevel // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc90c20
	void SetDisplayFrequency(float RequestedFrequency); // Function OculusHMD.OculusFunctionLibrary.SetDisplayFrequency // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc90bb0
	void SetCPUAndGPULevels(int32_t CPULevel, int32_t GPULevel); // Function OculusHMD.OculusFunctionLibrary.SetCPUAndGPULevels // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc90a00
	void SetColorScaleAndOffset(struct FLinearColor ColorScale, struct FLinearColor ColorOffset, bool bApplyToAllLayers); // Function OculusHMD.OculusFunctionLibrary.SetColorScaleAndOffset // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0xc90ab0
	void SetBaseRotationAndPositionOffset(struct FRotator BaseRot, struct FVector PosOffset, enum class EOrientPositionSelector options); // Function OculusHMD.OculusFunctionLibrary.SetBaseRotationAndPositionOffset // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0xc908f0
	void SetBaseRotationAndBaseOffsetInMeters(struct FRotator Rotation, struct FVector BaseOffsetInMeters, enum class EOrientPositionSelector options); // Function OculusHMD.OculusFunctionLibrary.SetBaseRotationAndBaseOffsetInMeters // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0xc907e0
	bool IsLoadingIconEnabled(); // Function OculusHMD.OculusFunctionLibrary.IsLoadingIconEnabled // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xc907b0
	bool IsGuardianDisplayed(); // Function OculusHMD.OculusFunctionLibrary.IsGuardianDisplayed // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xc90780
	bool IsGuardianConfigured(); // Function OculusHMD.OculusFunctionLibrary.IsGuardianConfigured // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xc90750
	bool IsDeviceTracked(enum class ETrackedDeviceType DeviceType); // Function OculusHMD.OculusFunctionLibrary.IsDeviceTracked // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xc906d0
	bool IsAutoLoadingSplashScreenEnabled(); // Function OculusHMD.OculusFunctionLibrary.IsAutoLoadingSplashScreenEnabled // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xc906a0
	void HideLoadingSplashScreen(bool bClear); // Function OculusHMD.OculusFunctionLibrary.HideLoadingSplashScreen // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc90620
	void HideLoadingIcon(); // Function OculusHMD.OculusFunctionLibrary.HideLoadingIcon // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc90600
	bool HasSystemOverlayPresent(); // Function OculusHMD.OculusFunctionLibrary.HasSystemOverlayPresent // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xc905d0
	bool HasInputFocus(); // Function OculusHMD.OculusFunctionLibrary.HasInputFocus // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xc905a0
	bool GetUserProfile(struct FHmdUserProfile Profile); // Function OculusHMD.OculusFunctionLibrary.GetUserProfile // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xc90470
	void GetRawSensorData(struct FVector AngularAcceleration, struct FVector LinearAcceleration, struct FVector AngularVelocity, struct FVector LinearVelocity, float TimeInSeconds, enum class ETrackedDeviceType DeviceType); // Function OculusHMD.OculusFunctionLibrary.GetRawSensorData // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0xc90240
	void GetPose(struct FRotator DeviceRotation, struct FVector DevicePosition, struct FVector NeckPosition, bool bUseOrienationForPlayerCamera, bool bUsePositionForPlayerCamera, struct FVector PositionScale); // Function OculusHMD.OculusFunctionLibrary.GetPose // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0xc90040
	struct FGuardianTestResult GetPointGuardianIntersection(struct FVector Point, enum class EBoundaryType BoundaryType); // Function OculusHMD.OculusFunctionLibrary.GetPointGuardianIntersection // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0xc8ff60
	struct FTransform GetPlayAreaTransform(); // Function OculusHMD.OculusFunctionLibrary.GetPlayAreaTransform // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0xc8ff00
	struct FGuardianTestResult GetNodeGuardianIntersection(enum class ETrackedDeviceType DeviceType, enum class EBoundaryType BoundaryType); // Function OculusHMD.OculusFunctionLibrary.GetNodeGuardianIntersection // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc8fe30
	void GetLoadingSplashParams(struct FString TexturePath, struct FVector DistanceInMeters, struct FVector2D SizeInMeters, struct FVector RotationAxis, float RotationDeltaInDeg); // Function OculusHMD.OculusFunctionLibrary.GetLoadingSplashParams // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0xc8fc30
	struct TArray<struct FVector> GetGuardianPoints(enum class EBoundaryType BoundaryType, bool UsePawnSpace); // Function OculusHMD.OculusFunctionLibrary.GetGuardianPoints // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xc8fb20
	struct FVector GetGuardianDimensions(enum class EBoundaryType BoundaryType); // Function OculusHMD.OculusFunctionLibrary.GetGuardianDimensions // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0xc8fa90
	void GetGPUUtilization(bool IsGPUAvailable, float GPUUtilization); // Function OculusHMD.OculusFunctionLibrary.GetGPUUtilization // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xc8f9b0
	float GetGPUFrameTime(); // Function OculusHMD.OculusFunctionLibrary.GetGPUFrameTime // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xc8f980
	enum class EFixedFoveatedRenderingLevel GetFixedFoveatedRenderingLevel(); // Function OculusHMD.OculusFunctionLibrary.GetFixedFoveatedRenderingLevel // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xc8f950
	struct FString GetDeviceName(); // Function OculusHMD.OculusFunctionLibrary.GetDeviceName // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xc8f8d0
	float GetCurrentDisplayFrequency(); // Function OculusHMD.OculusFunctionLibrary.GetCurrentDisplayFrequency // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xc8f8a0
	void GetBaseRotationAndPositionOffset(struct FRotator OutRot, struct FVector OutPosOffset); // Function OculusHMD.OculusFunctionLibrary.GetBaseRotationAndPositionOffset // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xc8f7d0
	void GetBaseRotationAndBaseOffsetInMeters(struct FRotator OutRotation, struct FVector OutBaseOffsetInMeters); // Function OculusHMD.OculusFunctionLibrary.GetBaseRotationAndBaseOffsetInMeters // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0xc8f700
	struct TArray<float> GetAvailableDisplayFrequencies(); // Function OculusHMD.OculusFunctionLibrary.GetAvailableDisplayFrequencies // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xc8f680
	void EnablePositionTracking(bool bPositionTracking); // Function OculusHMD.OculusFunctionLibrary.EnablePositionTracking // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc8f600
	void EnableOrientationTracking(bool bOrientationTracking); // Function OculusHMD.OculusFunctionLibrary.EnableOrientationTracking // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc8f580
	void EnableAutoLoadingSplashScreen(bool bAutoShowEnabled); // Function OculusHMD.OculusFunctionLibrary.EnableAutoLoadingSplashScreen // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc8f500
	void ClearLoadingSplashScreens(); // Function OculusHMD.OculusFunctionLibrary.ClearLoadingSplashScreens // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc8f4e0
	void AddLoadingSplashScreen(struct UTexture2D* Texture, struct FVector TranslationInMeters, struct FRotator Rotation, struct FVector2D SizeInMeters, struct FRotator DeltaRotation, bool bClearBeforeAdd); // Function OculusHMD.OculusFunctionLibrary.AddLoadingSplashScreen // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0xc8f300
};

// Class OculusHMD.OculusHMDRuntimeSettings
// Size: 0x58 (Inherited: 0x28)
struct UOculusHMDRuntimeSettings : UObject {
	bool bAutoEnabled; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct TArray<struct FOculusSplashDesc> SplashDescs; // 0x30(0x10)
	bool bSupportsDash; // 0x40(0x01)
	bool bCompositesDepth; // 0x41(0x01)
	bool bHQDistortion; // 0x42(0x01)
	char pad_43[0x1]; // 0x43(0x01)
	float PixelDensityMin; // 0x44(0x04)
	float PixelDensityMax; // 0x48(0x04)
	int32_t CPULevel; // 0x4c(0x04)
	int32_t GPULevel; // 0x50(0x04)
	enum class EFixedFoveatedRenderingLevel FFRLevel; // 0x54(0x01)
	bool bChromaCorrection; // 0x55(0x01)
	bool bRecenterHMDWithController; // 0x56(0x01)
	char pad_57[0x1]; // 0x57(0x01)
};

// Class OculusHMD.OculusSceneCaptureCubemap
// Size: 0x90 (Inherited: 0x28)
struct UOculusSceneCaptureCubemap : UObject {
	char pad_28[0x10]; // 0x28(0x10)
	struct TArray<struct USceneCaptureComponent2D*> CaptureComponents; // 0x38(0x10)
	char pad_48[0x48]; // 0x48(0x48)
};

