// Enum OculusHMD.EBoundaryType
enum class EBoundaryType : uint8 {
	Boundary_Outer,
	Boundary_PlayArea,
	Boundary_MAX,
};

// Enum OculusHMD.EFixedFoveatedRenderingLevel
enum class EFixedFoveatedRenderingLevel : uint8 {
	FFR_Off,
	FFR_Low,
	FFR_Medium,
	FFR_High,
	FFR_HighTop,
	FFR_MAX,
};

// Enum OculusHMD.ETrackedDeviceType
enum class ETrackedDeviceType : uint8 {
	None,
	HMD,
	LTouch,
	RTouch,
	Touch,
	DeviceObjectZero,
	All,
	ETrackedDeviceType_MAX,
};

// ScriptStruct OculusHMD.GuardianTestResult
// Size: 0x20 (Inherited: 0x00)
struct FGuardianTestResult {
	bool IsTriggering; // 0x00(0x01)
	enum class ETrackedDeviceType DeviceType; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float ClosestDistance; // 0x04(0x04)
	struct FVector ClosestPoint; // 0x08(0x0c)
	struct FVector ClosestPointNormal; // 0x14(0x0c)
};

// ScriptStruct OculusHMD.HmdUserProfile
// Size: 0x48 (Inherited: 0x00)
struct FHmdUserProfile {
	struct FString Name; // 0x00(0x10)
	struct FString Gender; // 0x10(0x10)
	float PlayerHeight; // 0x20(0x04)
	float EyeHeight; // 0x24(0x04)
	float IPD; // 0x28(0x04)
	struct FVector2D NeckToEyeDistance; // 0x2c(0x08)
	char pad_34[0x4]; // 0x34(0x04)
	struct TArray<struct FHmdUserProfileField> ExtraFields; // 0x38(0x10)
};

// ScriptStruct OculusHMD.HmdUserProfileField
// Size: 0x20 (Inherited: 0x00)
struct FHmdUserProfileField {
	struct FString FieldName; // 0x00(0x10)
	struct FString FieldValue; // 0x10(0x10)
};

// ScriptStruct OculusHMD.OculusSplashDesc
// Size: 0xa0 (Inherited: 0x00)
struct FOculusSplashDesc {
	struct FSoftObjectPath TexturePath; // 0x00(0x18)
	char pad_18[0x8]; // 0x18(0x08)
	struct FTransform TransformInMeters; // 0x20(0x30)
	struct FVector2D QuadSizeInMeters; // 0x50(0x08)
	char pad_58[0x8]; // 0x58(0x08)
	struct FQuat DeltaRotation; // 0x60(0x10)
	struct FVector2D TextureOffset; // 0x70(0x08)
	struct FVector2D TextureScale; // 0x78(0x08)
	bool bNoAlphaChannel; // 0x80(0x01)
	char pad_81[0x1f]; // 0x81(0x1f)
};

