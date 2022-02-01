// Enum SimpleUGC.EUGCApprovalStatus
enum class EUGCApprovalStatus : uint8 {
	Fully,
	Progression,
	Sandbox,
	All,
	EUGCApprovalStatus_MAX,
};

// Enum SimpleUGC.EPackageSortField
enum class EPackageSortField : uint8 {
	None,
	Name,
	Status,
	Author,
	Mounted,
	EPackageSortField_MAX,
};

// Enum SimpleUGC.EModioRequestType
enum class EModioRequestType : uint8 {
	InitializeLocalInstallation,
	Authentication,
	K2_Authentication,
	TermsOfUse,
	FetchModUpdates,
	ModMetaData,
	Thumbnail,
	HostHiddenModsInstalled,
	Subscribe,
	ModDependencySubscribe,
	ModDependencyList,
	ModDependencyAdd,
	EModioRequestType_MAX,
};

// Enum SimpleUGC.EUGCPackageError
enum class EUGCPackageError : uint8 {
	Exists,
	Invalid,
	Other,
	EUGCPackageError_MAX,
};

// Enum SimpleUGC.EUGCBlueprintSpawning
enum class EUGCBlueprintSpawning : uint8 {
	Spacerig,
	Cave,
	Other,
	EUGCBlueprintSpawning_MAX,
};

// ScriptStruct SimpleUGC.Mods
// Size: 0x10 (Inherited: 0x00)
struct FMods {
	struct TArray<struct FModDefinition> Mods; // 0x00(0x10)
};

// ScriptStruct SimpleUGC.ModDefinition
// Size: 0x28 (Inherited: 0x00)
struct FModDefinition {
	struct FString Name; // 0x00(0x10)
	int32_t Category; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString Version; // 0x18(0x10)
};

