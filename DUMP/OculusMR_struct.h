// Enum OculusMR.EOculusMR_BoundaryType
enum class EOculusMR_BoundaryType : uint8 {
	BT_OuterBoundary,
	BT_PlayArea,
	BT_MAX,
};

// Enum OculusMR.EOculusMR_CompositionMethod
enum class EOculusMR_CompositionMethod : uint8 {
	ExternalComposition,
	DirectComposition,
	EOculusMR_MAX,
};

// Enum OculusMR.EOculusMR_DepthQuality
enum class EOculusMR_DepthQuality : uint8 {
	DQ_Low,
	DQ_Medium,
	DQ_High,
	DQ_MAX,
};

// Enum OculusMR.EOculusMR_PostProcessEffects
enum class EOculusMR_PostProcessEffects : uint8 {
	PPE_Off,
	PPE_On,
	PPE_MAX,
};

// Enum OculusMR.EOculusMR_VirtualGreenScreenType
enum class EOculusMR_VirtualGreenScreenType : uint8 {
	VGS_Off,
	VGS_OuterBoundary,
	VGS_PlayArea,
	VGS_MAX,
};

// Enum OculusMR.EOculusMR_ClippingReference
enum class EOculusMR_ClippingReference : uint8 {
	CR_TrackingReference,
	CR_Head,
	CR_MAX,
};

// Enum OculusMR.EOculusMR_CameraDeviceEnum
enum class EOculusMR_CameraDeviceEnum : uint8 {
	CD_None,
	CD_WebCamera0,
	CD_WebCamera1,
	CD_ZEDCamera,
	CD_MAX,
};

// ScriptStruct OculusMR.OculusMR_PlaneMeshTriangle
// Size: 0x3c (Inherited: 0x00)
struct FOculusMR_PlaneMeshTriangle {
	struct FVector Vertex0; // 0x00(0x0c)
	struct FVector2D UV0; // 0x0c(0x08)
	struct FVector Vertex1; // 0x14(0x0c)
	struct FVector2D UV1; // 0x20(0x08)
	struct FVector Vertex2; // 0x28(0x0c)
	struct FVector2D UV2; // 0x34(0x08)
};

// ScriptStruct OculusMR.TrackedCamera
// Size: 0x70 (Inherited: 0x00)
struct FTrackedCamera {
	int32_t Index; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString Name; // 0x08(0x10)
	float FieldOfView; // 0x18(0x04)
	int32_t SizeX; // 0x1c(0x04)
	int32_t SizeY; // 0x20(0x04)
	enum class ETrackedDeviceType AttachedTrackedDevice; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	struct FRotator CalibratedRotation; // 0x28(0x0c)
	struct FVector CalibratedOffset; // 0x34(0x0c)
	struct FRotator UserRotation; // 0x40(0x0c)
	struct FVector UserOffset; // 0x4c(0x0c)
	struct FRotator RawRotation; // 0x58(0x0c)
	struct FVector RawOffset; // 0x64(0x0c)
};

