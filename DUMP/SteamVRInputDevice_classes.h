// Class SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct USteamVRInputDeviceFunctionLibrary : UBlueprintFunctionLibrary {

	void ShowSteamVR_ActionOrigin(struct FSteamVRAction SteamVRAction, struct FSteamVRActionSet SteamVRActionSet); // Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.ShowSteamVR_ActionOrigin // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xce6400
	void ShowAllSteamVR_ActionOrigins(); // Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.ShowAllSteamVR_ActionOrigins // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xce63e0
	float SetSteamVR_GlobalPredictedSecondsFromNow(float NewValue); // Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.SetSteamVR_GlobalPredictedSecondsFromNow // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xce6360
	void SetPoseSource(bool bUseSkeletonPose); // Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.SetPoseSource // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xce62e0
	void SetCurlsAndSplaysState(bool NewLeftHandState, bool NewRightHandState); // Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.SetCurlsAndSplaysState // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xce6210
	bool ResetSeatedPosition(); // Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.ResetSeatedPosition // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xce61e0
	void PlaySteamVR_HapticFeedback(enum class ESteamVRHand hand, float StartSecondsFromNow, float DurationSeconds, float Frequency, float Amplitude); // Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.PlaySteamVR_HapticFeedback // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xce6060
	float GetUserIPD(); // Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetUserIPD // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xce6010
	bool GetSteamVR_OriginTrackedDeviceInfo(struct FSteamVRAction SteamVRAction, struct FSteamVRInputOriginInfo InputOriginInfo); // Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_OriginTrackedDeviceInfo // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xce5e90
	void GetSteamVR_OriginLocalizedName(struct FSteamVRAction SteamVRAction, struct TArray<enum class ESteamVRInputStringBits> LocalizedParts, struct FString OriginLocalizedName); // Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_OriginLocalizedName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xce5ca0
	struct TArray<struct FSteamVRInputBindingInfo> GetSteamVR_InputBindingInfo(struct FSteamVRAction SteamVRActionHandle); // Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_InputBindingInfo // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xce5b60
	bool GetSteamVR_HandPoseRelativeToNow(struct FVector Position, struct FRotator Orientation, enum class ESteamVRHand hand, float PredictedSecondsFromNow); // Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_HandPoseRelativeToNow // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xce59f0
	float GetSteamVR_GlobalPredictedSecondsFromNow(); // Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_GlobalPredictedSecondsFromNow // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xce59c0
	void GetSteamVR_ActionSetArray(struct TArray<struct FSteamVRActionSet> SteamVRActionSets); // Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_ActionSetArray // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xce5900
	void GetSteamVR_ActionArray(struct TArray<struct FSteamVRAction> SteamVRActions); // Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_ActionArray // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xce5840
	void GetSkeletalTransform(struct FSteamVRSkeletonTransform LeftHand, struct FSteamVRSkeletonTransform RightHand, bool bWithController); // Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSkeletalTransform // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xce56d0
	void GetSkeletalState(bool LeftHandState, bool RightHandState); // Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSkeletalState // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xce55f0
	void GetRightHandPoseData(struct FVector Position, struct FRotator Orientation, struct FVector AngularVelocity, struct FVector Velocity); // Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetRightHandPoseData // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xce5470
	void GetPoseSource(bool bUsingSkeletonPose); // Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetPoseSource // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xce53f0
	void GetLeftHandPoseData(struct FVector Position, struct FRotator Orientation, struct FVector AngularVelocity, struct FVector Velocity); // Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetLeftHandPoseData // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xce5270
	void GetFingerCurlsAndSplays(enum class EHand hand, struct FSteamVRFingerCurls FingerCurls, struct FSteamVRFingerSplays FingerSplays, enum class ESkeletalSummaryDataType SummaryDataType); // Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetFingerCurlsAndSplays // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xce50f0
	void GetCurlsAndSplaysState(bool LeftHandState, bool RightHandState); // Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetCurlsAndSplaysState // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xce5010
	void GetControllerFidelity(enum class EControllerFidelity LeftControllerFidelity, enum class EControllerFidelity RightControllerFidelity); // Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetControllerFidelity // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xce4f30
	void FindSteamVR_OriginTrackedDeviceInfo(struct FName ActionName, bool bResult, struct FSteamVRInputOriginInfo InputOriginInfo, struct FName ActionSet); // Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.FindSteamVR_OriginTrackedDeviceInfo // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xce4da0
	struct TArray<struct FSteamVRInputBindingInfo> FindSteamVR_InputBindingInfo(struct FName ActionName, struct FName ActionSet); // Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.FindSteamVR_InputBindingInfo // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xce4ca0
	bool FindSteamVR_ActionOrigin(struct FName ActionName, struct FName ActionSet); // Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.FindSteamVR_ActionOrigin // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xce4be0
	void FindSteamVR_Action(struct FName ActionName, bool bResult, struct FSteamVRAction FoundAction, struct FSteamVRActionSet FoundActionSet, struct FName ActionSet); // Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.FindSteamVR_Action // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xce4a00
};

// Class SteamVRInputDevice.SteamVRTrackingReferences
// Size: 0x108 (Inherited: 0xb0)
struct USteamVRTrackingReferences : UActorComponent {
	struct FMulticastInlineDelegate OnTrackedDeviceActivated; // 0xb0(0x10)
	struct FMulticastInlineDelegate OnTrackedDeviceDeactivated; // 0xc0(0x10)
	float ActiveDevicePollFrequency; // 0xd0(0x04)
	struct FVector TrackingReferenceScale; // 0xd4(0x0c)
	struct TArray<struct UStaticMeshComponent*> TrackingReferences; // 0xe0(0x10)
	char pad_F0[0x18]; // 0xf0(0x18)

	bool ShowTrackingReferences(struct UStaticMesh* TrackingReferenceMesh); // Function SteamVRInputDevice.SteamVRTrackingReferences.ShowTrackingReferences // (Final|Native|Public|BlueprintCallable) // @ game+0xce6590
	void HideTrackingReferences(); // Function SteamVRInputDevice.SteamVRTrackingReferences.HideTrackingReferences // (Final|Native|Public|BlueprintCallable) // @ game+0xce6040
};

