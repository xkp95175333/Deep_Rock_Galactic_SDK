// Class AssetRegistry.AssetRegistryImpl
// Size: 0x778 (Inherited: 0x28)
struct UAssetRegistryImpl : UObject {
	char pad_28[0x750]; // 0x28(0x750)
};

// Class AssetRegistry.AssetRegistryHelpers
// Size: 0x28 (Inherited: 0x28)
struct UAssetRegistryHelpers : UObject {

	struct FSoftObjectPath ToSoftObjectPath(struct FAssetData InAssetData); // Function AssetRegistry.AssetRegistryHelpers.ToSoftObjectPath // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x2584050
	struct FARFilter SetFilterTagsAndValues(struct FARFilter InFilter, struct TArray<struct FTagAndValue> InTagsAndValues); // Function AssetRegistry.AssetRegistryHelpers.SetFilterTagsAndValues // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x2583d20
	bool IsValid(struct FAssetData InAssetData); // Function AssetRegistry.AssetRegistryHelpers.IsValid // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x2583210
	bool IsUAsset(struct FAssetData InAssetData); // Function AssetRegistry.AssetRegistryHelpers.IsUAsset // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x2583120
	bool IsRedirector(struct FAssetData InAssetData); // Function AssetRegistry.AssetRegistryHelpers.IsRedirector // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x2583030
	bool IsAssetLoaded(struct FAssetData InAssetData); // Function AssetRegistry.AssetRegistryHelpers.IsAssetLoaded // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x2582f10
	bool GetTagValue(struct FAssetData InAssetData, struct FName InTagName, struct FString OutTagValue); // Function AssetRegistry.AssetRegistryHelpers.GetTagValue // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x2582c90
	struct FString GetFullName(struct FAssetData InAssetData); // Function AssetRegistry.AssetRegistryHelpers.GetFullName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x25829d0
	struct FString GetExportTextName(struct FAssetData InAssetData); // Function AssetRegistry.AssetRegistryHelpers.GetExportTextName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x2582890
	struct UObject* GetClass(struct FAssetData InAssetData); // Function AssetRegistry.AssetRegistryHelpers.GetClass // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x25827a0
	struct TScriptInterface<None> GetAssetRegistry(); // Function AssetRegistry.AssetRegistryHelpers.GetAssetRegistry // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x2581f20
	struct UObject* GetAsset(struct FAssetData InAssetData); // Function AssetRegistry.AssetRegistryHelpers.GetAsset // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x2581d10
	struct FAssetData CreateAssetData(struct UObject* InAsset, bool bAllowBlueprintClass); // Function AssetRegistry.AssetRegistryHelpers.CreateAssetData // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x25819d0
};

// Class AssetRegistry.AssetRegistry
// Size: 0x28 (Inherited: 0x28)
struct UAssetRegistry : UInterface {

	void UseFilterToExcludeAssets(struct TArray<struct FAssetData> AssetDataList, struct FARFilter Filter); // Function AssetRegistry.AssetRegistry.UseFilterToExcludeAssets // (Native|Public|HasOutParms|BlueprintCallable|Const) // @ game+0x2584190
	void SearchAllAssets(bool bSynchronousSearch); // Function AssetRegistry.AssetRegistry.SearchAllAssets // (Native|Public|BlueprintCallable) // @ game+0x2583c90
	void ScanPathsSynchronous(struct TArray<struct FString> InPaths, bool bForceRescan); // Function AssetRegistry.AssetRegistry.ScanPathsSynchronous // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2583b70
	void ScanModifiedAssetFiles(struct TArray<struct FString> InFilePaths); // Function AssetRegistry.AssetRegistry.ScanModifiedAssetFiles // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2583aa0
	void ScanFilesSynchronous(struct TArray<struct FString> InFilePaths, bool bForceRescan); // Function AssetRegistry.AssetRegistry.ScanFilesSynchronous // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2583980
	void RunAssetsThroughFilter(struct TArray<struct FAssetData> AssetDataList, struct FARFilter Filter); // Function AssetRegistry.AssetRegistry.RunAssetsThroughFilter // (Native|Public|HasOutParms|BlueprintCallable|Const) // @ game+0x2583640
	void PrioritizeSearchPath(struct FString PathToPrioritize); // Function AssetRegistry.AssetRegistry.PrioritizeSearchPath // (Native|Public|BlueprintCallable) // @ game+0x25835a0
	bool K2_GetReferencers(struct FName PackageName, struct FAssetRegistryDependencyOptions ReferenceOptions, struct TArray<struct FName> OutReferencers); // Function AssetRegistry.AssetRegistry.K2_GetReferencers // (Native|Public|HasOutParms|BlueprintCallable|Const) // @ game+0x2583450
	bool K2_GetDependencies(struct FName PackageName, struct FAssetRegistryDependencyOptions DependencyOptions, struct TArray<struct FName> OutDependencies); // Function AssetRegistry.AssetRegistry.K2_GetDependencies // (Native|Public|HasOutParms|BlueprintCallable|Const) // @ game+0x2583300
	bool IsLoadingAssets(); // Function AssetRegistry.AssetRegistry.IsLoadingAssets // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2583000
	bool HasAssets(struct FName PackagePath, bool bRecursive); // Function AssetRegistry.AssetRegistry.HasAssets // (Native|Public|BlueprintCallable|Const) // @ game+0x2582e40
	void GetSubPaths(struct FString InBasePath, struct TArray<struct FString> OutPathList, bool bInRecurse); // Function AssetRegistry.AssetRegistry.GetSubPaths // (Native|Public|HasOutParms|BlueprintCallable|Const) // @ game+0x2582b10
	bool GetAssetsByPath(struct FName PackagePath, struct TArray<struct FAssetData> OutAssetData, bool bRecursive, bool bIncludeOnlyOnDiskAssets); // Function AssetRegistry.AssetRegistry.GetAssetsByPath // (Native|Public|HasOutParms|BlueprintCallable|Const) // @ game+0x25825c0
	bool GetAssetsByPackageName(struct FName PackageName, struct TArray<struct FAssetData> OutAssetData, bool bIncludeOnlyOnDiskAssets); // Function AssetRegistry.AssetRegistry.GetAssetsByPackageName // (Native|Public|HasOutParms|BlueprintCallable|Const) // @ game+0x2582430
	bool GetAssetsByClass(struct FName ClassName, struct TArray<struct FAssetData> OutAssetData, bool bSearchSubClasses); // Function AssetRegistry.AssetRegistry.GetAssetsByClass // (Native|Public|HasOutParms|BlueprintCallable|Const) // @ game+0x25822a0
	bool GetAssets(struct FARFilter Filter, struct TArray<struct FAssetData> OutAssetData); // Function AssetRegistry.AssetRegistry.GetAssets // (Native|Public|HasOutParms|BlueprintCallable|Const) // @ game+0x2581f60
	struct FAssetData GetAssetByObjectPath(struct FName ObjectPath, bool bIncludeOnlyOnDiskAssets); // Function AssetRegistry.AssetRegistry.GetAssetByObjectPath // (Native|Public|BlueprintCallable|Const) // @ game+0x2581e00
	void GetAllCachedPaths(struct TArray<struct FString> OutPathList); // Function AssetRegistry.AssetRegistry.GetAllCachedPaths // (Native|Public|HasOutParms|BlueprintCallable|Const) // @ game+0x2581c40
	bool GetAllAssets(struct TArray<struct FAssetData> OutAssetData, bool bIncludeOnlyOnDiskAssets); // Function AssetRegistry.AssetRegistry.GetAllAssets // (Native|Public|HasOutParms|BlueprintCallable|Const) // @ game+0x2581af0
};

