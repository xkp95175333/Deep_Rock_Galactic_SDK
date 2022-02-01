// Enum Modio.EModioVirusStatus
enum class EModioVirusStatus : uint8 {
	NoThreat,
	Malicious,
	EModioVirusStatus_MAX,
};

// Enum Modio.EModioVirusScanStatus
enum class EModioVirusScanStatus : uint8 {
	NotScanned,
	ScanComplete,
	InProgress,
	TooLargeToScan,
	FileNotFound,
	ErrorScanning,
	EModioVirusScanStatus_MAX,
};

// Enum Modio.EModioMaturityFlags
enum class EModioMaturityFlags : uint8 {
	None,
	Alcohol,
	Drugs,
	Violence,
	Explicit,
	EModioMaturityFlags_MAX,
};

// Enum Modio.EModioModManagementEventType
enum class EModioModManagementEventType : uint8 {
	Installed,
	Uninstalled,
	Updated,
	EModioModManagementEventType_MAX,
};

// Enum Modio.EModioAuthenticationProvider
enum class EModioAuthenticationProvider : uint8 {
	XboxLive,
	Steam,
	GoG,
	Itch,
	Switch,
	Discord,
	EModioAuthenticationProvider_MAX,
};

// Enum Modio.EModioLanguage
enum class EModioLanguage : uint8 {
	English,
	Bulgarian,
	French,
	German,
	Italian,
	Polish,
	Portuguese,
	Hungarian,
	Japanese,
	Korean,
	Russian,
	Spanish,
	Thai,
	ChineseSimplified,
	ChineseTraditional,
	EModioLanguage_MAX,
};

// Enum Modio.EModioLogLevel
enum class EModioLogLevel : uint8 {
	Trace,
	Info,
	Warning,
	Error,
	EModioLogLevel_MAX,
};

// Enum Modio.EModioGallerySize
enum class EModioGallerySize : uint8 {
	Original,
	Thumb320,
	EModioGallerySize_MAX,
};

// Enum Modio.EModioAvatarSize
enum class EModioAvatarSize : uint8 {
	Original,
	Thumb50,
	Thumb100,
	EModioAvatarSize_MAX,
};

// Enum Modio.EModioLogoSize
enum class EModioLogoSize : uint8 {
	Original,
	Thumb320,
	Thumb640,
	Thumb1280,
	EModioLogoSize_MAX,
};

// Enum Modio.EModioPortal
enum class EModioPortal : uint8 {
	None,
	Apple,
	EpicGamesStore,
	GOG,
	Google,
	Itchio,
	Nintendo,
	PSN,
	Steam,
	XboxLive,
	EModioPortal_MAX,
};

// Enum Modio.EModioEnvironment
enum class EModioEnvironment : uint8 {
	Test,
	Live,
	EModioEnvironment_MAX,
};

// Enum Modio.EModioErrorCondition
enum class EModioErrorCondition : uint8 {
	NoError,
	NetworkError,
	ConfigurationError,
	InvalidArgsError,
	FilesystemError,
	InternalError,
	EntityNotFoundError,
	UserTermsOfUseError,
	SubmitReportError,
	EModioErrorCondition_MAX,
};

// Enum Modio.EModioSortDirection
enum class EModioSortDirection : uint8 {
	Ascending,
	Descending,
	EModioSortDirection_MAX,
};

// Enum Modio.EModioSortFieldType
enum class EModioSortFieldType : uint8 {
	ID,
	DownloadsToday,
	SubscriberCount,
	Rating,
	DateMarkedLive,
	DateUpdated,
	EModioSortFieldType_MAX,
};

// Enum Modio.EModioImageState
enum class EModioImageState : uint8 {
	OnDisc,
	LoadingIntoMemory,
	InMemory,
	Corrupted,
	EModioImageState_MAX,
};

// Enum Modio.EModioModState
enum class EModioModState : uint8 {
	InstallationPending,
	Installed,
	UpdatePending,
	Downloading,
	Extracting,
	UninstallPending,
	EModioModState_MAX,
};

// Enum Modio.EModioRating
enum class EModioRating : uint8 {
	Neutral,
	Positive,
	Negative,
	EModioRating_MAX,
};

// Enum Modio.EModioReportType
enum class EModioReportType : uint8 {
	Generic,
	DMCA,
	NotWorking,
	RudeContent,
	IllegalContent,
	StolenContent,
	FalseInformation,
	Other,
	EModioReportType_MAX,
};

// Enum Modio.EFileSizeUnit
enum class EFileSizeUnit : uint8 {
	Largest,
	B,
	KB,
	MB,
	GB,
	EFileSizeUnit_MAX,
};

// ScriptStruct Modio.ModioYoutubeURLList
// Size: 0x01 (Inherited: 0x00)
struct FModioYoutubeURLList {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Modio.ModioSketchfabURLList
// Size: 0x01 (Inherited: 0x00)
struct FModioSketchfabURLList {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Modio.ModioModInfoList
// Size: 0x28 (Inherited: 0x00)
struct FModioModInfoList {
	struct FModioPagedResult PagedResult; // 0x00(0x14)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<struct FModioModInfo> InternalList; // 0x18(0x10)
};

// ScriptStruct Modio.ModioModInfo
// Size: 0x1c0 (Inherited: 0x00)
struct FModioModInfo {
	struct FModioModID ModId; // 0x00(0x08)
	struct FString ProfileName; // 0x08(0x10)
	struct FString ProfileSummary; // 0x18(0x10)
	struct FString ProfileDescription; // 0x28(0x10)
	struct FString ProfileDescriptionPlaintext; // 0x38(0x10)
	struct FString ProfileUrl; // 0x48(0x10)
	struct FModioUser ProfileSubmittedBy; // 0x58(0x30)
	struct FDateTime ProfileDateAdded; // 0x88(0x08)
	struct FDateTime ProfileDateUpdated; // 0x90(0x08)
	struct FDateTime ProfileDateLive; // 0x98(0x08)
	enum class EModioMaturityFlags ProfileMaturityOption; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
	struct FString MetadataBlob; // 0xa8(0x10)
	struct FModioFileMetadata FileInfo; // 0xb8(0x68)
	struct TArray<struct FModioMetadata> MetadataKvp; // 0x120(0x10)
	struct TArray<struct FModioModTag> Tags; // 0x130(0x10)
	int32_t NumGalleryImages; // 0x140(0x04)
	char pad_144[0x4]; // 0x144(0x04)
	struct FModioYoutubeURLList YoutubeURLs; // 0x148(0x01)
	char pad_149[0xf]; // 0x149(0x0f)
	struct FModioSketchfabURLList SketchfabURLs; // 0x158(0x01)
	char pad_159[0xf]; // 0x159(0x0f)
	struct FModioModStats Stats; // 0x168(0x58)
};

// ScriptStruct Modio.ModioModStats
// Size: 0x58 (Inherited: 0x00)
struct FModioModStats {
	int64_t PopularityRankPosition; // 0x00(0x08)
	int64_t PopularityRankTotalMods; // 0x08(0x08)
	int64_t DownloadsTotal; // 0x10(0x08)
	int64_t SubscribersTotal; // 0x18(0x08)
	int64_t RatingTotal; // 0x20(0x08)
	int64_t RatingPositive; // 0x28(0x08)
	int64_t RatingNegative; // 0x30(0x08)
	int64_t RatingPercentagePositive; // 0x38(0x08)
	float RatingWeightedAggregate; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct FString RatingDisplayText; // 0x48(0x10)
};

// ScriptStruct Modio.ModioModTag
// Size: 0x10 (Inherited: 0x00)
struct FModioModTag {
	struct FString Tag; // 0x00(0x10)
};

// ScriptStruct Modio.ModioMetadata
// Size: 0x20 (Inherited: 0x00)
struct FModioMetadata {
	struct FString Key; // 0x00(0x10)
	struct FString Value; // 0x10(0x10)
};

// ScriptStruct Modio.ModioFileMetadata
// Size: 0x68 (Inherited: 0x00)
struct FModioFileMetadata {
	struct FModioFileMetadataID MetadataId; // 0x00(0x08)
	struct FModioModID ModId; // 0x08(0x08)
	struct FDateTime DateAdded; // 0x10(0x08)
	enum class EModioVirusScanStatus CurrentVirusScanStatus; // 0x18(0x01)
	enum class EModioVirusStatus CurrentVirusStatus; // 0x19(0x01)
	char pad_1A[0x6]; // 0x1a(0x06)
	int64_t Filesize; // 0x20(0x08)
	struct FString Filename; // 0x28(0x10)
	struct FString Version; // 0x38(0x10)
	struct FString Changelog; // 0x48(0x10)
	struct FString MetadataBlob; // 0x58(0x10)
};

// ScriptStruct Modio.ModioModID
// Size: 0x08 (Inherited: 0x00)
struct FModioModID {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Modio.ModioFileMetadataID
// Size: 0x08 (Inherited: 0x00)
struct FModioFileMetadataID {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Modio.ModioUser
// Size: 0x30 (Inherited: 0x00)
struct FModioUser {
	struct FModioUserID UserId; // 0x00(0x08)
	struct FString Username; // 0x08(0x10)
	struct FDateTime DateOnline; // 0x18(0x08)
	struct FString ProfileUrl; // 0x20(0x10)
};

// ScriptStruct Modio.ModioUserID
// Size: 0x08 (Inherited: 0x00)
struct FModioUserID {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Modio.ModioPagedResult
// Size: 0x14 (Inherited: 0x00)
struct FModioPagedResult {
	int32_t PageIndex; // 0x00(0x04)
	int32_t PageSize; // 0x04(0x04)
	int32_t PageCount; // 0x08(0x04)
	int32_t TotalResultCount; // 0x0c(0x04)
	int32_t ResultCount; // 0x10(0x04)
};

// ScriptStruct Modio.ModioModTagOptions
// Size: 0x28 (Inherited: 0x00)
struct FModioModTagOptions {
	struct FModioPagedResult PagedResult; // 0x00(0x14)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<struct FModioModTagInfo> InternalList; // 0x18(0x10)
};

// ScriptStruct Modio.ModioModTagInfo
// Size: 0x28 (Inherited: 0x00)
struct FModioModTagInfo {
	struct FString TagGroupName; // 0x00(0x10)
	struct TArray<struct FString> TagGroupValues; // 0x10(0x10)
	bool bAllowMultipleSelection; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct Modio.ModioErrorCode
// Size: 0x08 (Inherited: 0x00)
struct FModioErrorCode {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Modio.ModioModManagementEvent
// Size: 0x18 (Inherited: 0x00)
struct FModioModManagementEvent {
	struct FModioModID ID; // 0x00(0x08)
	enum class EModioModManagementEventType Event; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FModioErrorCode Status; // 0x10(0x08)
};

// ScriptStruct Modio.ModioOptionalModInfoList
// Size: 0x30 (Inherited: 0x00)
struct FModioOptionalModInfoList {
	char pad_0[0x30]; // 0x00(0x30)
};

// ScriptStruct Modio.ModioOptionalModInfo
// Size: 0x1c8 (Inherited: 0x00)
struct FModioOptionalModInfo {
	char pad_0[0x1c8]; // 0x00(0x1c8)
};

// ScriptStruct Modio.ModioOptionalImage
// Size: 0x18 (Inherited: 0x00)
struct FModioOptionalImage {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct Modio.ModioOptionalModTagOptions
// Size: 0x30 (Inherited: 0x00)
struct FModioOptionalModTagOptions {
	char pad_0[0x30]; // 0x00(0x30)
};

// ScriptStruct Modio.ModioOptionalTerms
// Size: 0xd8 (Inherited: 0x00)
struct FModioOptionalTerms {
	char pad_0[0xd8]; // 0x00(0xd8)
};

// ScriptStruct Modio.ModioOptionalModDependencyList
// Size: 0x30 (Inherited: 0x00)
struct FModioOptionalModDependencyList {
	char pad_0[0x30]; // 0x00(0x30)
};

// ScriptStruct Modio.ModioAuthenticationParams
// Size: 0x28 (Inherited: 0x00)
struct FModioAuthenticationParams {
	struct FString AuthToken; // 0x00(0x10)
	struct FString UserEmail; // 0x10(0x10)
	bool bUserHasAcceptedTerms; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct Modio.ModioEmailAuthCode
// Size: 0x10 (Inherited: 0x00)
struct FModioEmailAuthCode {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Modio.ModioEmailAddress
// Size: 0x10 (Inherited: 0x00)
struct FModioEmailAddress {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Modio.ModioApiKey
// Size: 0x10 (Inherited: 0x00)
struct FModioApiKey {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Modio.ModioGameID
// Size: 0x08 (Inherited: 0x00)
struct FModioGameID {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Modio.ModioFilterParams
// Size: 0x90 (Inherited: 0x00)
struct FModioFilterParams {
	char pad_0[0x90]; // 0x00(0x90)
};

// ScriptStruct Modio.ModioImage
// Size: 0x10 (Inherited: 0x00)
struct FModioImage {
	struct FString ImagePath; // 0x00(0x10)
};

// ScriptStruct Modio.ModioInitializeOptions
// Size: 0x20 (Inherited: 0x00)
struct FModioInitializeOptions {
	struct FModioGameID GameId; // 0x00(0x08)
	struct FModioApiKey ApiKey; // 0x08(0x10)
	enum class EModioEnvironment GameEnvironment; // 0x18(0x01)
	enum class EModioPortal PortalInUse; // 0x19(0x01)
	char pad_1A[0x6]; // 0x1a(0x06)
};

// ScriptStruct Modio.ModioModCollectionEntry
// Size: 0x1e8 (Inherited: 0x00)
struct FModioModCollectionEntry {
	char pad_0[0x1e8]; // 0x00(0x1e8)
};

// ScriptStruct Modio.ModioModDependencyList
// Size: 0x28 (Inherited: 0x00)
struct FModioModDependencyList {
	struct FModioPagedResult PagedResult; // 0x00(0x14)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<struct FModioModDependency> InternalList; // 0x18(0x10)
};

// ScriptStruct Modio.ModioModDependency
// Size: 0x18 (Inherited: 0x00)
struct FModioModDependency {
	struct FModioModID ModId; // 0x00(0x08)
	struct FString ModName; // 0x08(0x10)
};

// ScriptStruct Modio.ModioOptionalModProgressInfo
// Size: 0x30 (Inherited: 0x00)
struct FModioOptionalModProgressInfo {
	char pad_0[0x30]; // 0x00(0x30)
};

// ScriptStruct Modio.ModioModProgressInfo
// Size: 0x28 (Inherited: 0x00)
struct FModioModProgressInfo {
	int64_t TotalDownloadSize; // 0x00(0x08)
	int64_t CurrentlyDownloadedBytes; // 0x08(0x08)
	int64_t TotalExtractedSizeOnDisk; // 0x10(0x08)
	int64_t CurrentlyExtractedBytes; // 0x18(0x08)
	struct FModioModID ID; // 0x20(0x08)
};

// ScriptStruct Modio.ModioReportParams
// Size: 0x58 (Inherited: 0x00)
struct FModioReportParams {
	char pad_0[0x58]; // 0x00(0x58)
};

// ScriptStruct Modio.ModioTerms
// Size: 0xd0 (Inherited: 0x00)
struct FModioTerms {
	struct FString AgreeButtonText; // 0x00(0x10)
	struct FString DisagreeButtonText; // 0x10(0x10)
	struct FModioLink WebsiteLink; // 0x20(0x28)
	struct FModioLink TermsLink; // 0x48(0x28)
	struct FModioLink PrivacyLink; // 0x70(0x28)
	struct FModioLink ManageLink; // 0x98(0x28)
	char pad_C0[0x10]; // 0xc0(0x10)
};

// ScriptStruct Modio.ModioLink
// Size: 0x28 (Inherited: 0x00)
struct FModioLink {
	struct FString Text; // 0x00(0x10)
	struct FString URL; // 0x10(0x10)
	bool bRequired; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct Modio.ModioOptionalUser
// Size: 0x38 (Inherited: 0x00)
struct FModioOptionalUser {
	char pad_0[0x38]; // 0x00(0x38)
};

// ScriptStruct Modio.ModioValidationError
// Size: 0x20 (Inherited: 0x00)
struct FModioValidationError {
	struct FString FieldName; // 0x00(0x10)
	struct FString ValidationFailureDescription; // 0x10(0x10)
};

