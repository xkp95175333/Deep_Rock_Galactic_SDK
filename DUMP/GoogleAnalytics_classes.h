// Class GoogleAnalytics.GoogleAnalyticsBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UGoogleAnalyticsBlueprintLibrary : UBlueprintFunctionLibrary {

	void SetTrackingId(struct FString TrackingId); // Function GoogleAnalytics.GoogleAnalyticsBlueprintLibrary.SetTrackingId // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6e9ed0
	void SetAnonymizeIP(bool Anonymize); // Function GoogleAnalytics.GoogleAnalyticsBlueprintLibrary.SetAnonymizeIP // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6e9e50
	void RecordGoogleUserTiming(struct FString TimingCategory, int32_t TimingValue, struct FString TimingName, struct TArray<struct FCustomDimension> CustomDimensions, struct TArray<struct FCustomMetric> CustomMetrics); // Function GoogleAnalytics.GoogleAnalyticsBlueprintLibrary.RecordGoogleUserTiming // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6e9b70
	void RecordGoogleSocialInteraction(struct FString SocialNetwork, struct FString SocialAction, struct FString SocialTarget, struct TArray<struct FCustomDimension> CustomDimensions, struct TArray<struct FCustomMetric> CustomMetrics); // Function GoogleAnalytics.GoogleAnalyticsBlueprintLibrary.RecordGoogleSocialInteraction // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6e9870
	void RecordGoogleScreen(struct FString ScreenName, struct TArray<struct FCustomDimension> CustomDimensions, struct TArray<struct FCustomMetric> CustomMetrics); // Function GoogleAnalytics.GoogleAnalyticsBlueprintLibrary.RecordGoogleScreen // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6e9620
	void RecordGoogleEvent(struct FString EventCategory, struct FString EventAction, struct FString EventLabel, int32_t EventValue, struct TArray<struct FCustomDimension> CustomDimensions, struct TArray<struct FCustomMetric> CustomMetrics); // Function GoogleAnalytics.GoogleAnalyticsBlueprintLibrary.RecordGoogleEvent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6e92e0
	struct FString GetTrackingId(); // Function GoogleAnalytics.GoogleAnalyticsBlueprintLibrary.GetTrackingId // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6e9260
};

// Class GoogleAnalytics.GoogleAnalyticsSettings
// Size: 0x30 (Inherited: 0x28)
struct UGoogleAnalyticsSettings : UObject {
	bool bEnableIDFACollection; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

