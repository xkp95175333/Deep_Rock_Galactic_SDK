// Class SimpleUGC.MakeReplaceableActorComponent
// Size: 0xb8 (Inherited: 0xb0)
struct UMakeReplaceableActorComponent : UActorComponent {
	struct AActor* CompatibleReplacement; // 0xb0(0x08)
};

// Class SimpleUGC.ReplacementActorComponent
// Size: 0xc0 (Inherited: 0xb0)
struct UReplacementActorComponent : UActorComponent {
	struct TArray<struct AActor*> ActorClassesToReplace; // 0xb0(0x10)
};

// Class SimpleUGC.UGCBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UUGCBlueprintLibrary : UBlueprintFunctionLibrary {

	struct UUGCRegistry* GetUGCRegistry(struct UObject* WorldContextObject); // Function SimpleUGC.UGCBlueprintLibrary.GetUGCRegistry // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xad7840
};

// Class SimpleUGC.ModioModInfoWrapper
// Size: 0x90 (Inherited: 0x28)
struct UModioModInfoWrapper : UObject {
	struct FString ModId; // 0x28(0x10)
	struct FString ModName; // 0x38(0x10)
	struct FString ModURL; // 0x48(0x10)
	struct FString ModAuthor; // 0x58(0x10)
	struct FString ModVersion; // 0x68(0x10)
	struct FString ModDescription; // 0x78(0x10)
	enum class EUGCApprovalStatus Status; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)

	bool IsModIdInvalid(); // Function SimpleUGC.ModioModInfoWrapper.IsModIdInvalid // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xad7a40
};

// Class SimpleUGC.ModioTermsWrapper
// Size: 0x98 (Inherited: 0x28)
struct UModioTermsWrapper : UObject {
	struct FString AgreeButtonText; // 0x28(0x10)
	struct FString DisagreeButtonText; // 0x38(0x10)
	struct FString TermsLink; // 0x48(0x10)
	struct FString TermsText; // 0x58(0x10)
	struct FString PrivacyLink; // 0x68(0x10)
	struct FString PrivacyText; // 0x78(0x10)
	struct FString TermsOfUseText; // 0x88(0x10)

	bool isEmpty(); // Function SimpleUGC.ModioTermsWrapper.isEmpty // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xad9660
};

// Class SimpleUGC.UGCLatentActionManager
// Size: 0x128 (Inherited: 0x28)
struct UUGCLatentActionManager : UObject {
	char pad_28[0x100]; // 0x28(0x100)
};

// Class SimpleUGC.UGCPackage
// Size: 0x108 (Inherited: 0x28)
struct UUGCPackage : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct FString Name; // 0x30(0x10)
	struct FString Version; // 0x40(0x10)
	struct FString ModURL; // 0x50(0x10)
	struct FString Categories; // 0x60(0x10)
	enum class EUGCApprovalStatus Status; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
	struct FString ModPath; // 0x78(0x10)
	struct FString PakFileLocation; // 0x88(0x10)
	struct TArray<struct FString> PakFileAssets; // 0x98(0x10)
	struct FString Author; // 0xa8(0x10)
	struct FString AuthorURL; // 0xb8(0x10)
	struct FString Description; // 0xc8(0x10)
	char pad_D8[0x4]; // 0xd8(0x04)
	bool IsMounted; // 0xdc(0x01)
	bool MountingToBeApplied; // 0xdd(0x01)
	bool DeprecatedLocation; // 0xde(0x01)
	char pad_DF[0x1]; // 0xdf(0x01)
	bool ShowStatusForAudioCosmetic; // 0xe0(0x01)
	char pad_E1[0x7]; // 0xe1(0x07)
	struct TArray<int64_t> Dependencies; // 0xe8(0x10)
	bool DependencyRemoved; // 0xf8(0x01)
	bool PackagedForLatestVersion; // 0xf9(0x01)
	bool OverridePackedForLatestVersion; // 0xfa(0x01)
	char pad_FB[0x5]; // 0xfb(0x05)
	struct FDateTime LastUpdated; // 0x100(0x08)

	struct FString GetIdAsString(); // Function SimpleUGC.UGCPackage.GetIdAsString // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xad7340
	int64_t GetIdAsInt(); // Function SimpleUGC.UGCPackage.GetIdAsInt // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xad7310
};

// Class SimpleUGC.UGCRegistry
// Size: 0x108 (Inherited: 0x28)
struct UUGCRegistry : UObject {
	struct FMulticastInlineDelegate OnPackageMounted; // 0x28(0x10)
	struct TArray<struct UUGCPackage*> UGCPackages; // 0x38(0x10)
	struct TMap<struct AActor*, struct AActor*> RegisteredOverrides; // 0x48(0x50)
	bool PackageChange; // 0x98(0x01)
	char pad_99[0x37]; // 0x99(0x37)
	struct TArray<struct UUGCPackage*> UGCPackagesInstalledDuringJoin; // 0xd0(0x10)
	struct TArray<struct UUGCPackage*> UGCPackagesUnmountedDuringJoin; // 0xe0(0x10)
	char pad_F0[0x18]; // 0xf0(0x18)

	void UnmountUGCPackages(struct TArray<struct FString> ExcludingModIds); // Function SimpleUGC.UGCRegistry.UnmountUGCPackages // (Final|Native|Public|BlueprintCallable) // @ game+0xad9500
	bool UnmountUGCPackage(struct UUGCPackage* Package, bool RemoveFromUserSettings); // Function SimpleUGC.UGCRegistry.UnmountUGCPackage // (Final|Native|Public|BlueprintCallable) // @ game+0xad9440
	void UnmountSandboxUGCPackages(); // Function SimpleUGC.UGCRegistry.UnmountSandboxUGCPackages // (Final|Native|Public|BlueprintCallable) // @ game+0xad9420
	void UnmountAllNonVerifiedUGCPackages(); // Function SimpleUGC.UGCRegistry.UnmountAllNonVerifiedUGCPackages // (Final|Native|Public|BlueprintCallable) // @ game+0xad9400
	void UGCPackageMounted__DelegateSignature(bool Sandbox); // DelegateFunction SimpleUGC.UGCRegistry.UGCPackageMounted__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x158ca90
	struct UUGCPackage* TryGetPackageFromId(struct FString ModId); // Function SimpleUGC.UGCRegistry.TryGetPackageFromId // (Final|Native|Public|BlueprintCallable) // @ game+0xad9310
	void ResetUGCPackagesManipulatedDuringJoin(); // Function SimpleUGC.UGCRegistry.ResetUGCPackagesManipulatedDuringJoin // (Final|Native|Public|BlueprintCallable) // @ game+0xad9020
	void RegisterOverrideForClass(struct AActor* ClassToOverride, struct AActor* OverrideClass); // Function SimpleUGC.UGCRegistry.RegisterOverrideForClass // (Final|Native|Public|BlueprintCallable) // @ game+0xad8ee0
	void RegisterAssetFromPackage(struct UUGCPackage* Package); // Function SimpleUGC.UGCRegistry.RegisterAssetFromPackage // (Final|Native|Public|BlueprintCallable) // @ game+0xad8e60
	int32_t NumberOfModsInstalled(enum class EUGCApprovalStatus ApprovalStatus); // Function SimpleUGC.UGCRegistry.NumberOfModsInstalled // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xad8dd0
	bool MountUGCPackage(struct UUGCPackage* Package, bool FromJoining); // Function SimpleUGC.UGCRegistry.MountUGCPackage // (Final|Native|Public|BlueprintCallable) // @ game+0xad8d10
	bool IsModToBeEnabled(int64_t ModId); // Function SimpleUGC.UGCRegistry.IsModToBeEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xad7f60
	bool IsModInstalledImprecise(struct FString ModName, bool IncludeDeprecatedLocation); // Function SimpleUGC.UGCRegistry.IsModInstalledImprecise // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xad7d90
	bool IsModInstalledByIdOrName(struct FString ModIdOrName, bool IncludeDeprecatedLocation); // Function SimpleUGC.UGCRegistry.IsModInstalledByIdOrName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xad7c50
	bool IsModInstalled(struct FString ModId); // Function SimpleUGC.UGCRegistry.IsModInstalled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xad7b60
	bool IsModEnabled(struct FString ModId); // Function SimpleUGC.UGCRegistry.IsModEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xad7950
	struct TArray<struct UUGCPackage*> GetPackagesWhichDependsOnPackage(struct UUGCPackage* Package); // Function SimpleUGC.UGCRegistry.GetPackagesWhichDependsOnPackage // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xad7760
	struct TArray<struct UUGCPackage*> GetPackagesSorted(enum class EPackageSortField ByField, bool Ascending); // Function SimpleUGC.UGCRegistry.GetPackagesSorted // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xad7650
	struct AActor* GetOverrideForActorClass(struct AActor* ActorClass); // Function SimpleUGC.UGCRegistry.GetOverrideForActorClass // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xad75c0
	bool GetMapsInPackage(struct UUGCPackage* Package, struct TArray<struct FName> Maps); // Function SimpleUGC.UGCRegistry.GetMapsInPackage // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xad73c0
	bool GetAllClassesInPackage(struct UUGCPackage* Package, struct TArray<struct UObject*> Classes); // Function SimpleUGC.UGCRegistry.GetAllClassesInPackage // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xad71e0
	bool GetActorClassesWithReplacementActorComponentsInPackage(struct UUGCPackage* Package, struct TArray<struct AActor*> ActorClasses); // Function SimpleUGC.UGCRegistry.GetActorClassesWithReplacementActorComponentsInPackage // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xad70e0
	void ClearOverrideForClass(struct AActor* ActorClass); // Function SimpleUGC.UGCRegistry.ClearOverrideForClass // (Final|Native|Public|BlueprintCallable) // @ game+0xad7020
	bool AreModsInstalled(enum class EUGCApprovalStatus ApprovalStatus); // Function SimpleUGC.UGCRegistry.AreModsInstalled // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xad6f90
	bool AreDeprecatedModsInstalled(); // Function SimpleUGC.UGCRegistry.AreDeprecatedModsInstalled // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xad6f60
	bool ApplyOverridesForActorClass(struct AActor* ActorClass); // Function SimpleUGC.UGCRegistry.ApplyOverridesForActorClass // (Final|Native|Public|BlueprintCallable) // @ game+0xad6e40
	bool ApplyAllOverridesInPackage(struct UUGCPackage* Package); // Function SimpleUGC.UGCRegistry.ApplyAllOverridesInPackage // (Final|Native|Public|BlueprintCallable) // @ game+0xad6db0
};

// Class SimpleUGC.UGCSubsystem
// Size: 0x278 (Inherited: 0x30)
struct UUGCSubsystem : UEngineSubsystem {
	bool forceNoMods; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct UUGCRegistry* UGCRegistry; // 0x38(0x08)
	bool ModioTermsAndConditionsAccepted; // 0x40(0x01)
	char pad_41[0x17]; // 0x41(0x17)
	struct FMulticastInlineDelegate OnModioUserAuthenticated; // 0x58(0x10)
	struct FMulticastInlineDelegate OnErrorInstalling; // 0x68(0x10)
	struct TMap<struct FString, enum class EUGCPackageError> ModsFailedInstall; // 0x78(0x50)
	struct FMulticastInlineDelegate OnModDownloadExtractProgress; // 0xc8(0x10)
	struct FMulticastInlineDelegate OnModDownloadExtractProgressFinished; // 0xd8(0x10)
	struct FMulticastInlineDelegate OnModUninstallProgressFinished; // 0xe8(0x10)
	struct FMulticastInlineDelegate OnModManagementStateChanged; // 0xf8(0x10)
	bool IsModioModManagementEnabled; // 0x108(0x01)
	char pad_109[0x7]; // 0x109(0x07)
	struct FMulticastInlineDelegate OnLocalUserModsInstalled; // 0x110(0x10)
	bool IsLocalUserModsInstalled; // 0x120(0x01)
	char pad_121[0x7]; // 0x121(0x07)
	struct TArray<struct FString> CrashingDisabledMods; // 0x128(0x10)
	struct UUGCLatentActionManager* UGCLatentActionManager; // 0x138(0x08)
	char pad_140[0x70]; // 0x140(0x70)
	struct TArray<struct UUGCPackage*> ModsPendingUninstall; // 0x1b0(0x10)
	char pad_1C0[0x18]; // 0x1c0(0x18)
	struct TMap<int64_t, struct UTexture2DDynamic*> CachedThumbnails; // 0x1d8(0x50)
	struct TArray<enum class EModioRequestType> ModioRequests; // 0x228(0x10)
	struct TArray<int64_t> ModioSubscribeRequestsIds; // 0x238(0x10)
	struct TArray<int64_t> ModioSubscribeDependecyRequestsIds; // 0x248(0x10)
	struct TArray<int64_t> ModioAddDependecyRequestsIds; // 0x258(0x10)
	char pad_268[0x10]; // 0x268(0x10)

	void UGModProgressDone__DelegateSignature(struct FString ModName, struct FString ModId); // DelegateFunction SimpleUGC.UGCSubsystem.UGModProgressDone__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x158ca90
	void UGInstallError__DelegateSignature(struct FString ModName, enum class EUGCPackageError ErrorType); // DelegateFunction SimpleUGC.UGCSubsystem.UGInstallError__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x158ca90
	void UGCModProgress__DelegateSignature(struct FString Name, struct TArray<struct FString> ModsPendingDownload, bool Downloading, int32_t Progress, int32_t Total); // DelegateFunction SimpleUGC.UGCSubsystem.UGCModProgress__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x158ca90
	void UGCModManagementStateChanged__DelegateSignature(bool Enabled); // DelegateFunction SimpleUGC.UGCSubsystem.UGCModManagementStateChanged__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x158ca90
	void UGCLocalUserModsInstalled__DelegateSignature(); // DelegateFunction SimpleUGC.UGCSubsystem.UGCLocalUserModsInstalled__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x158ca90
	void UGCAuthenticatedModioUser__DelegateSignature(bool Authenticated); // DelegateFunction SimpleUGC.UGCSubsystem.UGCAuthenticatedModioUser__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x158ca90
	void SetPackagesAsRecentlyInstalled(struct TArray<struct UUGCPackage*> RecentMods); // Function SimpleUGC.UGCSubsystem.SetPackagesAsRecentlyInstalled // (Final|Native|Public|BlueprintCallable) // @ game+0xad9230
	void SetModsAsRecentlyInstalled(struct TArray<struct FString> RecentMods); // Function SimpleUGC.UGCSubsystem.SetModsAsRecentlyInstalled // (Final|Native|Public|BlueprintCallable) // @ game+0xad90d0
	void SetCheckGameVersion(bool ShouldCheck); // Function SimpleUGC.UGCSubsystem.SetCheckGameVersion // (Final|Native|Public|BlueprintCallable) // @ game+0xad9040
	void RemoveRequestOfType(enum class EModioRequestType requestType); // Function SimpleUGC.UGCSubsystem.RemoveRequestOfType // (Final|Native|Public|BlueprintCallable) // @ game+0xad8fa0
	void MarkRecentlyInstalledModsSuccesful(); // Function SimpleUGC.UGCSubsystem.MarkRecentlyInstalledModsSuccesful // (Final|Native|Public|BlueprintCallable) // @ game+0xad8cf0
	void K2_RequestTermsOfUse(struct UObject* WorldContext, struct FLatentActionInfo LatentInfo, struct UModioTermsWrapper* outTerms); // Function SimpleUGC.UGCSubsystem.K2_RequestTermsOfUse // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xad8bb0
	bool K2_RequestSubscribe(struct FString ModId); // Function SimpleUGC.UGCSubsystem.K2_RequestSubscribe // (Final|Native|Public|BlueprintCallable) // @ game+0xad8ac0
	void K2_RequestModThumbnailById(struct UObject* WorldContext, struct FLatentActionInfo LatentInfo, struct FString ModId, struct UTexture2DDynamic* outThumbnail); // Function SimpleUGC.UGCSubsystem.K2_RequestModThumbnailById // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xad8900
	void K2_RequestModThumbnail(struct UObject* WorldContext, struct FLatentActionInfo LatentInfo, struct UUGCPackage* Package, struct UTexture2DDynamic* outThumbnail); // Function SimpleUGC.UGCSubsystem.K2_RequestModThumbnail // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xad87a0
	void K2_RequestModMetaData(struct UObject* WorldContext, struct FLatentActionInfo LatentInfo, struct FString ModioStringID, struct UModioModInfoWrapper* outModInfo); // Function SimpleUGC.UGCSubsystem.K2_RequestModMetaData // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xad85e0
	void K2_RequestModDependencyList(struct UObject* WorldContext, struct FLatentActionInfo LatentInfo, struct FString ModId, struct FString outParentId, struct TArray<struct FString> outModIds); // Function SimpleUGC.UGCSubsystem.K2_RequestModDependencyList // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xad8380
	void K2_RequestHasHostHiddenMods(struct UObject* WorldContext, struct FLatentActionInfo LatentInfo, struct TArray<struct FString> sHostModIds, struct TArray<struct FString> sClientModIds, bool outHidden); // Function SimpleUGC.UGCSubsystem.K2_RequestHasHostHiddenMods // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xad8030
	void K2_RequestFetchModUpdates(); // Function SimpleUGC.UGCSubsystem.K2_RequestFetchModUpdates // (Final|Native|Public|BlueprintCallable) // @ game+0xad8010
	void K2_RequestAuthentication(); // Function SimpleUGC.UGCSubsystem.K2_RequestAuthentication // (Final|Native|Public|BlueprintCallable) // @ game+0xad7ff0
	bool IsModPendingUninstall(struct UUGCPackage* InMod); // Function SimpleUGC.UGCSubsystem.IsModPendingUninstall // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xad7ed0
	bool HasOutstadingRequestOfType(enum class EModioRequestType requestType); // Function SimpleUGC.UGCSubsystem.HasOutstadingRequestOfType // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xad78c0
	struct TArray<struct FString> GetNamesOfModsPendingUninstall(); // Function SimpleUGC.UGCSubsystem.GetNamesOfModsPendingUninstall // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xad7540
	struct TArray<struct FString> GetNamesOfModsPendingInstall(); // Function SimpleUGC.UGCSubsystem.GetNamesOfModsPendingInstall // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xad74c0
	bool GetCheckGameVersion(); // Function SimpleUGC.UGCSubsystem.GetCheckGameVersion // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xad72e0
	void EnableModioModManagement(); // Function SimpleUGC.UGCSubsystem.EnableModioModManagement // (Final|Native|Public|BlueprintCallable) // @ game+0xad70c0
	void DisableModioModManagement(); // Function SimpleUGC.UGCSubsystem.DisableModioModManagement // (Final|Native|Public|BlueprintCallable) // @ game+0xad70a0
	void ApplyPendingMods(bool FromJoining); // Function SimpleUGC.UGCSubsystem.ApplyPendingMods // (Final|Native|Public|BlueprintCallable) // @ game+0xad6ed0
};

