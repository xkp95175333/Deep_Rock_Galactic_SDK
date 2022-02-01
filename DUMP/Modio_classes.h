// Class Modio.ModioCommonTypesLibrary
// Size: 0x28 (Inherited: 0x28)
struct UModioCommonTypesLibrary : UBlueprintFunctionLibrary {

	struct FModioInitializeOptions SetPortal(struct FModioInitializeOptions options, enum class EModioPortal PortalToUse); // Function Modio.ModioCommonTypesLibrary.SetPortal // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xaa21e0
	struct FModioInitializeOptions MakeInitializeOptions(int64_t GameId, struct FString ApiKey, enum class EModioEnvironment GameEnvironment, enum class EModioPortal PortalInUse); // Function Modio.ModioCommonTypesLibrary.MakeInitializeOptions // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xaa15e0
	struct FModioGameID MakeGameId(int64_t GameId); // Function Modio.ModioCommonTypesLibrary.MakeGameId // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xaa1550
	struct FModioAuthenticationParams MakeAuthParams(struct FString AuthToken, struct FString EmailAddress, bool bHasAcceptedTOS); // Function Modio.ModioCommonTypesLibrary.MakeAuthParams // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xaa1310
	struct FModioApiKey MakeApiKey(struct FString ApiKey); // Function Modio.ModioCommonTypesLibrary.MakeApiKey // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xaa11f0
	struct FString Conv_UserIDToString(struct FModioUserID UserId); // Function Modio.ModioCommonTypesLibrary.Conv_UserIDToString // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xa9fef0
	struct FModioEmailAuthCode Conv_StringToEmailAuthCode(struct FString AuthCode); // Function Modio.ModioCommonTypesLibrary.Conv_StringToEmailAuthCode // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xa9fe10
	struct FModioEmailAddress Conv_StringToEmailAddress(struct FString Email); // Function Modio.ModioCommonTypesLibrary.Conv_StringToEmailAddress // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xa9fe10
	struct FString Conv_ModIDToString(struct FModioModID ModId); // Function Modio.ModioCommonTypesLibrary.Conv_ModIDToString // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xa9fd40
	struct FString Conv_GameIDToString(struct FModioGameID GameId); // Function Modio.ModioCommonTypesLibrary.Conv_GameIDToString // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xa9fc70
	struct FString Conv_FileMetadataIDToString(struct FModioFileMetadataID FileMetadataID); // Function Modio.ModioCommonTypesLibrary.Conv_FileMetadataIDToString // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xa9fba0
	struct FString Conv_EmailAuthCodeToString(struct FModioEmailAuthCode EmailAuthCode); // Function Modio.ModioCommonTypesLibrary.Conv_EmailAuthCodeToString // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xa9fa80
	struct FString Conv_EmailAddressToString(struct FModioEmailAddress EmailAddress); // Function Modio.ModioCommonTypesLibrary.Conv_EmailAddressToString // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xa9f960
	struct FString Conv_ApiKeyToString(struct FModioApiKey ApiKey); // Function Modio.ModioCommonTypesLibrary.Conv_ApiKeyToString // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xa9f840
};

// Class Modio.ModioErrorCodeLibrary
// Size: 0x28 (Inherited: 0x28)
struct UModioErrorCodeLibrary : UBlueprintFunctionLibrary {

	bool IsError(struct FModioErrorCode Error); // Function Modio.ModioErrorCodeLibrary.IsError // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xaa1050
	int32_t GetValue(struct FModioErrorCode Error); // Function Modio.ModioErrorCodeLibrary.GetValue // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xaa0d70
	struct FString GetMessage(struct FModioErrorCode Error); // Function Modio.ModioErrorCodeLibrary.GetMessage // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xaa0770
};

// Class Modio.ModioErrorConditionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UModioErrorConditionLibrary : UBlueprintFunctionLibrary {

	bool ErrorCodeMatches(struct FModioErrorCode ErrorCode, enum class EModioErrorCondition Condition); // Function Modio.ModioErrorConditionLibrary.ErrorCodeMatches // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xa9ffc0
};

// Class Modio.ModioFilterParamsLibrary
// Size: 0x28 (Inherited: 0x28)
struct UModioFilterParamsLibrary : UBlueprintFunctionLibrary {

	struct FModioFilterParams WithTags(struct FModioFilterParams Filter, struct TArray<struct FString> NewTags); // Function Modio.ModioFilterParamsLibrary.WithTags // (Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xaa2750
	struct FModioFilterParams WithTag(struct FModioFilterParams Filter, struct FString Tag); // Function Modio.ModioFilterParamsLibrary.WithTag // (Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xaa2540
	struct FModioFilterParams WithoutTags(struct FModioFilterParams Filter, struct TArray<struct FString> NewTags); // Function Modio.ModioFilterParamsLibrary.WithoutTags // (Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xaa2ba0
	struct FModioFilterParams WithoutTag(struct FModioFilterParams Filter, struct FString Tag); // Function Modio.ModioFilterParamsLibrary.WithoutTag // (Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xaa2990
	struct FModioFilterParams SortBy(struct FModioFilterParams Filter, enum class EModioSortFieldType ByField, enum class EModioSortDirection ByDirection); // Function Modio.ModioFilterParamsLibrary.SortBy // (Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xaa2300
	struct FModioFilterParams PagedResults(struct FModioFilterParams Filter, int64_t PageNumber, int64_t PageSize); // Function Modio.ModioFilterParamsLibrary.PagedResults // (Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xaa1fa0
	struct FModioFilterParams NameContainsStrings(struct FModioFilterParams Filter, struct FString SearchString); // Function Modio.ModioFilterParamsLibrary.NameContainsStrings // (Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xaa1d90
	struct FModioFilterParams NameContains(struct FModioFilterParams Filter, struct FString SearchString); // Function Modio.ModioFilterParamsLibrary.NameContains // (Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xaa1d90
	struct FModioFilterParams MatchingIDs(struct FModioFilterParams Filter, struct TArray<struct FModioModID> IDs); // Function Modio.ModioFilterParamsLibrary.MatchingIDs // (Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xaa1b70
	struct FModioFilterParams MarkedLiveBefore(struct FModioFilterParams Filter, struct FDateTime LiveBefore); // Function Modio.ModioFilterParamsLibrary.MarkedLiveBefore // (Final|Native|Static|Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0xaa1970
	struct FModioFilterParams MarkedLiveAfter(struct FModioFilterParams Filter, struct FDateTime LiveAfter); // Function Modio.ModioFilterParamsLibrary.MarkedLiveAfter // (Final|Native|Static|Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0xaa1770
	struct FModioFilterParams IndexedResults(struct FModioFilterParams Filter, int64_t StartIndex, int64_t ResultCount); // Function Modio.ModioFilterParamsLibrary.IndexedResults // (Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xaa0e10
	struct FModioFilterParams ExcludingIDs(struct FModioFilterParams Filter, struct TArray<struct FModioModID> IDs); // Function Modio.ModioFilterParamsLibrary.ExcludingIDs // (Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xaa00a0
};

// Class Modio.ModioImageLibrary
// Size: 0x28 (Inherited: 0x28)
struct UModioImageLibrary : UBlueprintFunctionLibrary {

	void LoadAsync(struct FModioImage Image, struct FDelegate OnImageLoaded); // Function Modio.ModioImageLibrary.LoadAsync // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xaa10f0
	struct UTexture2DDynamic* GetTexture(struct FModioImage Image); // Function Modio.ModioImageLibrary.GetTexture // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xaa0cc0
	enum class EModioImageState GetState(struct FModioImage Image); // Function Modio.ModioImageLibrary.GetState // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xaa0c10
	struct FVector2D GetLogoSize(struct UTexture* Logo, enum class EModioLogoSize LogoSize); // Function Modio.ModioImageLibrary.GetLogoSize // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0xaa06b0
	struct FVector2D GetGallerySize(struct UTexture* GalleryImage, enum class EModioGallerySize GallerySize); // Function Modio.ModioImageLibrary.GetGallerySize // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0xaa0500
	struct FVector2D GetAvatarSize(struct UTexture* avatar, enum class EModioAvatarSize AvatarSize); // Function Modio.ModioImageLibrary.GetAvatarSize // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0xaa02c0
};

// Class Modio.ModioModCollectionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UModioModCollectionLibrary : UBlueprintFunctionLibrary {

	struct FString GetPath(struct FModioModCollectionEntry Entry); // Function Modio.ModioModCollectionLibrary.GetPath // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xaa0b10
	enum class EModioModState GetModState(struct FModioModCollectionEntry Entry); // Function Modio.ModioModCollectionLibrary.GetModState // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xaa0940
	struct FModioModInfo GetModProfile(struct FModioModCollectionEntry Entry); // Function Modio.ModioModCollectionLibrary.GetModProfile // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xaa0850
	struct FModioModID GetID(struct FModioModCollectionEntry Entry); // Function Modio.ModioModCollectionLibrary.GetID // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xaa05c0
};

// Class Modio.ModioModDependenciesLibrary
// Size: 0x28 (Inherited: 0x28)
struct UModioModDependenciesLibrary : UBlueprintFunctionLibrary {

	struct FModioPagedResult GetPagedResult(struct FModioModDependencyList ModTags); // Function Modio.ModioModDependenciesLibrary.GetPagedResult // (Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xaa0a30
	struct TArray<struct FModioModDependency> GetDependencies(struct FModioModDependencyList ModTags); // Function Modio.ModioModDependenciesLibrary.GetDependencies // (Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xaa0380
};

// Class Modio.ModioModInfoListLibrary
// Size: 0x28 (Inherited: 0x28)
struct UModioModInfoListLibrary : UBlueprintFunctionLibrary {

	struct FModioPagedResult GetPagedResult(struct FModioModInfoList ModInfoList); // Function Modio.ModioModInfoListLibrary.GetPagedResult // (Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xaa60e0
	struct TArray<struct FModioModInfo> GetMods(struct FModioModInfoList ModInfoList); // Function Modio.ModioModInfoListLibrary.GetMods // (Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xaa5e50
};

// Class Modio.ModioModTagOptionsLibrary
// Size: 0x28 (Inherited: 0x28)
struct UModioModTagOptionsLibrary : UBlueprintFunctionLibrary {

	struct TArray<struct FModioModTagInfo> GetTags(struct FModioModTagOptions ModTags); // Function Modio.ModioModTagOptionsLibrary.GetTags // (Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xaa6630
	struct FModioPagedResult GetPagedResult(struct FModioModTagOptions ModTags); // Function Modio.ModioModTagOptionsLibrary.GetPagedResult // (Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xaa6370
};

// Class Modio.ModioOptionalLibrary
// Size: 0x28 (Inherited: 0x28)
struct UModioOptionalLibrary : UBlueprintFunctionLibrary {

	bool IsSet_ModioOptionalUser(struct FModioOptionalUser OptionalUser); // Function Modio.ModioOptionalLibrary.IsSet_ModioOptionalUser // (Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xaa7af0
	bool IsSet_ModioOptionalTerms(struct FModioOptionalTerms OptionalTerms); // Function Modio.ModioOptionalLibrary.IsSet_ModioOptionalTerms // (Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xaa7a10
	bool IsSet_ModioOptionalModTagOptions(struct FModioOptionalModTagOptions OptionalModTagOptions); // Function Modio.ModioOptionalLibrary.IsSet_ModioOptionalModTagOptions // (Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xaa7940
	bool IsSet_ModioOptionalModProgressInfo(struct FModioOptionalModProgressInfo OptionalModProgressInfo); // Function Modio.ModioOptionalLibrary.IsSet_ModioOptionalModProgressInfo // (Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xaa7890
	bool IsSet_ModioOptionalModInfoList(struct FModioOptionalModInfoList OptionalModInfoList); // Function Modio.ModioOptionalLibrary.IsSet_ModioOptionalModInfoList // (Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xaa77c0
	bool IsSet_ModioOptionalModInfo(struct FModioOptionalModInfo OptionalModInfo); // Function Modio.ModioOptionalLibrary.IsSet_ModioOptionalModInfo // (Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xaa76e0
	bool IsSet_ModioOptionalModDependencyList(struct FModioOptionalModDependencyList OptionalDependencyList); // Function Modio.ModioOptionalLibrary.IsSet_ModioOptionalModDependencyList // (Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xaa7610
	bool IsSet_ModioOptionalImage(struct FModioOptionalImage OptionalImage); // Function Modio.ModioOptionalLibrary.IsSet_ModioOptionalImage // (Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xaa7540
	bool GetValue_ModioOptionalUser(struct FModioOptionalUser OptionalUser, struct FModioUser User); // Function Modio.ModioOptionalLibrary.GetValue_ModioOptionalUser // (Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xaa73c0
	bool GetValue_ModioOptionalTerms(struct FModioOptionalTerms OptionalTerms, struct FModioTerms Terms); // Function Modio.ModioOptionalLibrary.GetValue_ModioOptionalTerms // (Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xaa7190
	bool GetValue_ModioOptionalModTagOptions(struct FModioOptionalModTagOptions OptionalModTagOptions, struct FModioModTagOptions ModTagOptions); // Function Modio.ModioOptionalLibrary.GetValue_ModioOptionalModTagOptions // (Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xaa6ff0
	bool GetValue_ModioOptionalModProgressInfo(struct FModioOptionalModProgressInfo OptionalModProgressInfo, struct FModioModProgressInfo ModProgressInfo); // Function Modio.ModioOptionalLibrary.GetValue_ModioOptionalModProgressInfo // (Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xaa6ee0
	bool GetValue_ModioOptionalModInfoList(struct FModioOptionalModInfoList OptionalModInfoList, struct FModioModInfoList ModInfoList); // Function Modio.ModioOptionalLibrary.GetValue_ModioOptionalModInfoList // (Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xaa6bd0
	bool GetValue_ModioOptionalModInfo(struct FModioOptionalModInfo OptionalModInfo, struct FModioModInfo ModInfo); // Function Modio.ModioOptionalLibrary.GetValue_ModioOptionalModInfo // (Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xaa6a80
	bool GetValue_ModioOptionalModDependencyList(struct FModioOptionalModDependencyList OptionalDependencyList, struct FModioModDependencyList DependencyList); // Function Modio.ModioOptionalLibrary.GetValue_ModioOptionalModDependencyList // (Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xaa6920
	bool GetValue_ModioOptionalImage(struct FModioOptionalImage OptionalImage, struct FModioImage Image); // Function Modio.ModioOptionalLibrary.GetValue_ModioOptionalImage // (Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xaa67f0
};

// Class Modio.ModioPopupBase
// Size: 0x230 (Inherited: 0x230)
struct UModioPopupBase : UUserWidget {
};

// Class Modio.ModioPopupContainer
// Size: 0x250 (Inherited: 0x230)
struct UModioPopupContainer : UUserWidget {
	struct TArray<struct UModioPopupBase*> PopupStack; // 0x230(0x10)
	struct TArray<struct UModioPopupBase*> PopupCache; // 0x240(0x10)

	struct UModioPopupBase* PushPopup(struct UModioPopupBase* PopupClass); // Function Modio.ModioPopupContainer.PushPopup // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xaa8700
	struct UModioPopupBase* PopPopup(struct UModioPopupBase* PopupClass); // Function Modio.ModioPopupContainer.PopPopup // (Final|Native|Public|BlueprintCallable) // @ game+0xaa8670
};

// Class Modio.ModioReportLibrary
// Size: 0x28 (Inherited: 0x28)
struct UModioReportLibrary : UBlueprintFunctionLibrary {

	struct FModioReportParams MakeReportForUser(struct FModioUserID User, enum class EModioReportType Type, struct FString ReportDescription, struct FString ReporterName, struct FString ReporterContact); // Function Modio.ModioReportLibrary.MakeReportForUser // (Final|Native|Static|Private|BlueprintCallable|BlueprintPure) // @ game+0xaa82d0
	struct FModioReportParams MakeReportForMod(struct FModioModID Mod, enum class EModioReportType Type, struct FString ReportDescription, struct FString ReporterName, struct FString ReporterContact); // Function Modio.ModioReportLibrary.MakeReportForMod // (Final|Native|Static|Private|BlueprintCallable|BlueprintPure) // @ game+0xaa7ff0
	struct FModioReportParams MakeReportForGame(struct FModioGameID Game, enum class EModioReportType Type, struct FString ReportDescription, struct FString ReporterName, struct FString ReporterContact); // Function Modio.ModioReportLibrary.MakeReportForGame // (Final|Native|Static|Private|BlueprintCallable|BlueprintPure) // @ game+0xaa7d10
};

// Class Modio.ModioSDKLibrary
// Size: 0x28 (Inherited: 0x28)
struct UModioSDKLibrary : UBlueprintFunctionLibrary {

	float Pct_Int64Int64(int64_t Dividend, int64_t Divisor); // Function Modio.ModioSDKLibrary.Pct_Int64Int64 // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xaa85b0
	bool IsValidSecurityCodeFormat(struct FString String); // Function Modio.ModioSDKLibrary.IsValidSecurityCodeFormat // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xaa7c70
	bool IsValidEmailAddressFormat(struct FString String); // Function Modio.ModioSDKLibrary.IsValidEmailAddressFormat // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xaa7bd0
	struct FModioInitializeOptions GetProjectInitializeOptions(); // Function Modio.ModioSDKLibrary.GetProjectInitializeOptions // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xaa6580
	struct FModioGameID GetProjectGameId(); // Function Modio.ModioSDKLibrary.GetProjectGameId // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xaa6540
	enum class EModioEnvironment GetProjectEnvironment(); // Function Modio.ModioSDKLibrary.GetProjectEnvironment // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xaa6510
	struct FModioApiKey GetProjectApiKey(); // Function Modio.ModioSDKLibrary.GetProjectApiKey // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xaa6490
	struct FText Filesize_ToString(int64_t Filesize, int32_t MaxDecimals, enum class EFileSizeUnit Unit); // Function Modio.ModioSDKLibrary.Filesize_ToString // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xaa5d00
	struct FText Conv_Int64ToText(int64_t Value, bool bAlwaysSign, bool bUseGrouping, int32_t MinimumIntegralDigits, int32_t MaximumIntegralDigits); // Function Modio.ModioSDKLibrary.Conv_Int64ToText // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xaa5af0
	struct FString Conv_Int64ToString(int64_t inInt); // Function Modio.ModioSDKLibrary.Conv_Int64ToString // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xaa5a20
};

// Class Modio.ModioSettings
// Size: 0x48 (Inherited: 0x28)
struct UModioSettings : UObject {
	int64_t GameId; // 0x28(0x08)
	struct FString ApiKey; // 0x30(0x10)
	enum class EModioEnvironment Environment; // 0x40(0x01)
	enum class EModioLogLevel LogLevel; // 0x41(0x01)
	enum class EModioPortal DefaultPortal; // 0x42(0x01)
	char pad_43[0x5]; // 0x43(0x05)
};

// Class Modio.ModioSubsystem
// Size: 0x170 (Inherited: 0x30)
struct UModioSubsystem : UEngineSubsystem {
	char pad_30[0x140]; // 0x30(0x140)

	void SetLogLevel(enum class EModioLogLevel UnrealLogLevel); // Function Modio.ModioSubsystem.SetLogLevel // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0xaabb60
	void RunPendingHandlers(); // Function Modio.ModioSubsystem.RunPendingHandlers // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0xaabb40
	struct TMap<struct FModioModID, struct FModioModCollectionEntry> QueryUserSubscriptions(); // Function Modio.ModioSubsystem.QueryUserSubscriptions // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xaabb00
	struct TMap<struct FModioModID, struct FModioModCollectionEntry> QueryUserInstallations(bool bIncludeOutdatedMods); // Function Modio.ModioSubsystem.QueryUserInstallations // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xaaba60
	struct TMap<struct FModioModID, struct FModioModCollectionEntry> QuerySystemInstallations(); // Function Modio.ModioSubsystem.QuerySystemInstallations // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xaab970
	void K2_UnsubscribeFromModAsync(struct FModioModID ModToUnsubscribeFrom, struct FDelegate OnUnsubscribeComplete); // Function Modio.ModioSubsystem.K2_UnsubscribeFromModAsync // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0xaab890
	void K2_SubscribeToModAsync(struct FModioModID ModToSubscribeTo, struct FDelegate OnSubscribeComplete); // Function Modio.ModioSubsystem.K2_SubscribeToModAsync // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0xaab7b0
	void K2_SubmitModRatingAsync(struct FModioModID Mod, enum class EModioRating Rating, struct FDelegate Callback); // Function Modio.ModioSubsystem.K2_SubmitModRatingAsync // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0xaab690
	void K2_ShutdownAsync(struct FDelegate OnShutdownComplete); // Function Modio.ModioSubsystem.K2_ShutdownAsync // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0xaab5f0
	void K2_RequestEmailAuthCodeAsync(struct FModioEmailAddress EmailAddress, struct FDelegate Callback); // Function Modio.ModioSubsystem.K2_RequestEmailAuthCodeAsync // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xaab4e0
	void K2_ReportContentAsync(struct FModioReportParams Report, struct FDelegate Callback); // Function Modio.ModioSubsystem.K2_ReportContentAsync // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0xaab340
	struct FModioOptionalUser K2_QueryUserProfile(); // Function Modio.ModioSubsystem.K2_QueryUserProfile // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xaab240
	struct FModioOptionalModProgressInfo K2_QueryCurrentModUpdate(); // Function Modio.ModioSubsystem.K2_QueryCurrentModUpdate // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xaab1c0
	void K2_ListAllModsAsync(struct FModioFilterParams Filter, struct FDelegate Callback); // Function Modio.ModioSubsystem.K2_ListAllModsAsync // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xaaafb0
	void K2_InitializeAsync(struct FModioInitializeOptions InitializeOptions, struct FDelegate OnInitComplete); // Function Modio.ModioSubsystem.K2_InitializeAsync // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xaaae90
	void K2_GetUserMediaAvatarAsync(enum class EModioAvatarSize AvatarSize, struct FDelegate Callback); // Function Modio.ModioSubsystem.K2_GetUserMediaAvatarAsync // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0xaaadb0
	void K2_GetTermsOfUseAsync(enum class EModioAuthenticationProvider Provider, enum class EModioLanguage Locale, struct FDelegate Callback); // Function Modio.ModioSubsystem.K2_GetTermsOfUseAsync // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0xaaac90
	void K2_GetModTagOptionsAsync(struct FDelegate Callback); // Function Modio.ModioSubsystem.K2_GetModTagOptionsAsync // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0xaaabf0
	void K2_GetModMediaLogoAsync(struct FModioModID ModId, enum class EModioLogoSize LogoSize, struct FDelegate Callback); // Function Modio.ModioSubsystem.K2_GetModMediaLogoAsync // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0xaaaad0
	void K2_GetModMediaGalleryImageAsync(struct FModioModID ModId, enum class EModioGallerySize GallerySize, int32_t Index, struct FDelegate Callback); // Function Modio.ModioSubsystem.K2_GetModMediaGalleryImageAsync // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0xaaa960
	void K2_GetModMediaAvatarAsync(struct FModioModID ModId, enum class EModioAvatarSize AvatarSize, struct FDelegate Callback); // Function Modio.ModioSubsystem.K2_GetModMediaAvatarAsync // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0xaaa840
	void K2_GetModInfoAsync(struct FModioModID ModId, struct FDelegate Callback); // Function Modio.ModioSubsystem.K2_GetModInfoAsync // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0xaaa760
	void K2_GetModDependenciesAsync(struct FModioModID ModId, struct FDelegate Callback); // Function Modio.ModioSubsystem.K2_GetModDependenciesAsync // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0xaaa680
	void K2_FetchExternalUpdatesAsync(struct FDelegate OnFetchDone); // Function Modio.ModioSubsystem.K2_FetchExternalUpdatesAsync // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0xaaa5e0
	void K2_EnableModManagement(struct FDelegate Callback); // Function Modio.ModioSubsystem.K2_EnableModManagement // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0xaaa540
	void K2_ClearUserDataAsync(struct FDelegate Callback); // Function Modio.ModioSubsystem.K2_ClearUserDataAsync // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0xaaa4a0
	void K2_AuthenticateUserExternalAsync(struct FModioAuthenticationParams User, enum class EModioAuthenticationProvider Provider, struct FDelegate Callback); // Function Modio.ModioSubsystem.K2_AuthenticateUserExternalAsync // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xaaa350
	void K2_AuthenticateUserEmailAsync(struct FModioEmailAuthCode AuthenticationCode, struct FDelegate Callback); // Function Modio.ModioSubsystem.K2_AuthenticateUserEmailAsync // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xaaa240
	bool IsModManagementBusy(); // Function Modio.ModioSubsystem.IsModManagementBusy // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0xaaa210
	struct TArray<struct FModioValidationError> GetLastValidationError(); // Function Modio.ModioSubsystem.GetLastValidationError // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0xaaa110
	void ForceUninstallModAsync(struct FModioModID ModToRemove, struct FDelegate Callback); // Function Modio.ModioSubsystem.ForceUninstallModAsync // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0xaaa030
	void DisableModManagement(); // Function Modio.ModioSubsystem.DisableModManagement // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0xaaa010
};

