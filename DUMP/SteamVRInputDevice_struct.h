// Enum SteamVRInputDevice.ESkeletalSummaryDataType
enum class ESkeletalSummaryDataType : uint8 {
	VR_SummaryType_FromAnimation,
	VR_SummaryType_FromDevice,
	VR_SummaryType_MAX,
};

// Enum SteamVRInputDevice.ESteamVRInputStringBits
enum class ESteamVRInputStringBits : uint8 {
	VR_InputString_Hand,
	VR_InputString_ControllerType,
	VR_InputString_InputSource,
	VR_InputString_All,
	VR_InputString_MAX,
};

// Enum SteamVRInputDevice.EControllerFidelity
enum class EControllerFidelity : uint8 {
	VR_ControllerFidelity_Estimated,
	VR_ControllerFidelity_Full,
	VR_ControllerFidelity_Partial,
	VR_ControllerFidelity_MAX,
};

// Enum SteamVRInputDevice.EHandSkeleton
enum class EHandSkeleton : uint8 {
	VR_SteamVRHandSkeleton,
	VR_UE4HandSkeleton,
	VR_MAX,
};

// Enum SteamVRInputDevice.EHand
enum class EHand : uint8 {
	VR_LeftHand,
	VR_RightHand,
	VR_MAX,
};

// Enum SteamVRInputDevice.EMotionRange
enum class EMotionRange : uint8 {
	VR_WithoutController,
	VR_WithController,
	VR_MAX,
};

// Enum SteamVRInputDevice.ESteamVRHand
enum class ESteamVRHand : uint8 {
	VR_Left,
	VR_Right,
	VR_MAX,
};

// ScriptStruct SteamVRInputDevice.AnimNode_SteamVRInputAnimPose
// Size: 0x620 (Inherited: 0x10)
struct FAnimNode_SteamVRInputAnimPose : FAnimNode_Base {
	enum class EMotionRange MotionRange; // 0x10(0x01)
	enum class EHand hand; // 0x11(0x01)
	enum class EHandSkeleton HandSkeleton; // 0x12(0x01)
	bool Mirror; // 0x13(0x01)
	char pad_14[0xc]; // 0x14(0x0c)
	struct FSteamVRSkeletonTransform SteamVRSkeletalTransform; // 0x20(0x5d0)
	struct FUE4RetargettingRefs UE4RetargettingRefs; // 0x5f0(0x28)
	char pad_618[0x8]; // 0x618(0x08)
};

// ScriptStruct SteamVRInputDevice.UE4RetargettingRefs
// Size: 0x28 (Inherited: 0x00)
struct FUE4RetargettingRefs {
	bool bIsInitialized; // 0x00(0x01)
	bool bIsRightHanded; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	struct FVector KnuckleAverageMS_UE4; // 0x04(0x0c)
	struct FVector WristSideDirectionLS_UE4; // 0x10(0x0c)
	struct FVector WristForwardLS_UE4; // 0x1c(0x0c)
};

// ScriptStruct SteamVRInputDevice.SteamVRSkeletonTransform
// Size: 0x5d0 (Inherited: 0x00)
struct FSteamVRSkeletonTransform {
	struct FTransform Root; // 0x00(0x30)
	struct FTransform wrist; // 0x30(0x30)
	struct FTransform Thumb_1; // 0x60(0x30)
	struct FTransform Thumb_2; // 0x90(0x30)
	struct FTransform Thumb_3; // 0xc0(0x30)
	struct FTransform Thumb_4; // 0xf0(0x30)
	struct FTransform Index_1; // 0x120(0x30)
	struct FTransform Index_2; // 0x150(0x30)
	struct FTransform Index_3; // 0x180(0x30)
	struct FTransform Index_4; // 0x1b0(0x30)
	struct FTransform Index_5; // 0x1e0(0x30)
	struct FTransform Middle_1; // 0x210(0x30)
	struct FTransform Middle_2; // 0x240(0x30)
	struct FTransform Middle_3; // 0x270(0x30)
	struct FTransform Middle_4; // 0x2a0(0x30)
	struct FTransform Middle_5; // 0x2d0(0x30)
	struct FTransform Ring_1; // 0x300(0x30)
	struct FTransform Ring_2; // 0x330(0x30)
	struct FTransform Ring_3; // 0x360(0x30)
	struct FTransform Ring_4; // 0x390(0x30)
	struct FTransform Ring_5; // 0x3c0(0x30)
	struct FTransform Pinky_1; // 0x3f0(0x30)
	struct FTransform Pinky_2; // 0x420(0x30)
	struct FTransform Pinky_3; // 0x450(0x30)
	struct FTransform Pinky_4; // 0x480(0x30)
	struct FTransform Pinky_5; // 0x4b0(0x30)
	struct FTransform Aux_Thumb; // 0x4e0(0x30)
	struct FTransform Aux_Index; // 0x510(0x30)
	struct FTransform Aux_Middle; // 0x540(0x30)
	struct FTransform Aux_Ring; // 0x570(0x30)
	struct FTransform Aux_Pinky; // 0x5a0(0x30)
};

// ScriptStruct SteamVRInputDevice.AnimNode_SteamVRSetWristTransform
// Size: 0x40 (Inherited: 0x10)
struct FAnimNode_SteamVRSetWristTransform : FAnimNode_Base {
	struct FPoseLink ReferencePose; // 0x10(0x10)
	enum class EHandSkeleton HandSkeleton; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct FPoseLink targetPose; // 0x28(0x10)
	char pad_38[0x8]; // 0x38(0x08)
};

// ScriptStruct SteamVRInputDevice.SteamVRInputBindingInfo
// Size: 0x20 (Inherited: 0x00)
struct FSteamVRInputBindingInfo {
	struct FName DevicePathName; // 0x00(0x08)
	struct FName InputPathName; // 0x08(0x08)
	struct FName ModeName; // 0x10(0x08)
	struct FName slotName; // 0x18(0x08)
};

// ScriptStruct SteamVRInputDevice.SteamVRInputOriginInfo
// Size: 0x28 (Inherited: 0x00)
struct FSteamVRInputOriginInfo {
	int32_t TrackedDeviceIndex; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString RenderModelComponentName; // 0x08(0x10)
	struct FString TrackedDeviceModel; // 0x18(0x10)
};

// ScriptStruct SteamVRInputDevice.SteamVRActionSet
// Size: 0x18 (Inherited: 0x00)
struct FSteamVRActionSet {
	struct FString Path; // 0x00(0x10)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct SteamVRInputDevice.SteamVRAction
// Size: 0x28 (Inherited: 0x00)
struct FSteamVRAction {
	struct FName Name; // 0x00(0x08)
	struct FString Path; // 0x08(0x10)
	char pad_18[0x10]; // 0x18(0x10)
};

// ScriptStruct SteamVRInputDevice.SteamVRFingerSplays
// Size: 0x10 (Inherited: 0x00)
struct FSteamVRFingerSplays {
	float Thumb_Index; // 0x00(0x04)
	float Index_Middle; // 0x04(0x04)
	float Middle_Ring; // 0x08(0x04)
	float Ring_Pinky; // 0x0c(0x04)
};

// ScriptStruct SteamVRInputDevice.SteamVRFingerCurls
// Size: 0x14 (Inherited: 0x00)
struct FSteamVRFingerCurls {
	float Thumb; // 0x00(0x04)
	float Index; // 0x04(0x04)
	float Middle; // 0x08(0x04)
	float Ring; // 0x0c(0x04)
	float Pinky; // 0x10(0x04)
};

