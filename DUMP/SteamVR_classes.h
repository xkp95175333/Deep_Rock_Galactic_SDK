// Class SteamVR.SteamVRChaperoneComponent
// Size: 0xd8 (Inherited: 0xb0)
struct USteamVRChaperoneComponent : UActorComponent {
	struct FMulticastInlineDelegate OnLeaveBounds; // 0xb0(0x10)
	struct FMulticastInlineDelegate OnReturnToBounds; // 0xc0(0x10)
	char pad_D0[0x8]; // 0xd0(0x08)

	void SteamVRChaperoneEvent__DelegateSignature(); // DelegateFunction SteamVR.SteamVRChaperoneComponent.SteamVRChaperoneEvent__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x158ca90
	struct TArray<struct FVector> GetBounds(); // Function SteamVR.SteamVRChaperoneComponent.GetBounds // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xcb7ad0
};

// Class SteamVR.SteamVRFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct USteamVRFunctionLibrary : UBlueprintFunctionLibrary {

	void GetValidTrackedDeviceIds(enum class ESteamVRTrackedDeviceType DeviceType, struct TArray<int32_t> OutTrackedDeviceIds); // Function SteamVR.SteamVRFunctionLibrary.GetValidTrackedDeviceIds // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xcb7dc0
	bool GetTrackedDevicePositionAndOrientation(int32_t DeviceID, struct FVector OutPosition, struct FRotator OutOrientation); // Function SteamVR.SteamVRFunctionLibrary.GetTrackedDevicePositionAndOrientation // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0xcb7ca0
	bool GetHandPositionAndOrientation(int32_t ControllerIndex, enum class EControllerHand hand, struct FVector OutPosition, struct FRotator OutOrientation); // Function SteamVR.SteamVRFunctionLibrary.GetHandPositionAndOrientation // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0xcb7b50
};

// Class SteamVR.SteamVRHQStereoLayerShape
// Size: 0x38 (Inherited: 0x28)
struct USteamVRHQStereoLayerShape : UStereoLayerShapeQuad {
	bool bCurved; // 0x28(0x01)
	bool bAntiAlias; // 0x29(0x01)
	char pad_2A[0x2]; // 0x2a(0x02)
	float AutoCurveMinDistance; // 0x2c(0x04)
	float AutoCurveMaxDistance; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)

	void SetCurved(bool InCurved); // Function SteamVR.SteamVRHQStereoLayerShape.SetCurved // (Final|Native|Public|BlueprintCallable) // @ game+0xcb8030
	void SetAutoCurveMinDistance(float InDistance); // Function SteamVR.SteamVRHQStereoLayerShape.SetAutoCurveMinDistance // (Final|Native|Public|BlueprintCallable) // @ game+0xcb7fb0
	void SetAutoCurveMaxDistance(float InDistance); // Function SteamVR.SteamVRHQStereoLayerShape.SetAutoCurveMaxDistance // (Final|Native|Public|BlueprintCallable) // @ game+0xcb7f30
	void SetAntiAlias(bool InAntiAlias); // Function SteamVR.SteamVRHQStereoLayerShape.SetAntiAlias // (Final|Native|Public|BlueprintCallable) // @ game+0xcb7ea0
};

