// BlueprintGeneratedClass LIB_Game.LIB_Game_C
// Size: 0x28 (Inherited: 0x28)
struct ULIB_Game_C : UBlueprintFunctionLibrary {

	void SetTextureAndColor(struct UImage* Target, struct UTexture2D* Texture, bool bMatchSize, struct FLinearColor InColorAndOpacity, struct UObject* __WorldContext); // Function LIB_Game.LIB_Game_C.SetTextureAndColor // (Static|Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void IsFlaggedVisible(struct UWidget* InWidget, struct UObject* __WorldContext, bool IsFlaggedVisible); // Function LIB_Game.LIB_Game_C.IsFlaggedVisible // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x158ca90
	void SetSoftTextureAndTint(struct UImage* Target, struct TSoftObjectPtr<struct UTexture2D> Texture, bool bMatchSize, struct FLinearColor Tint, struct UObject* __WorldContext); // Function LIB_Game.LIB_Game_C.SetSoftTextureAndTint // (Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetTextureAndTint(struct UImage* Target, struct UTexture2D* Texture, bool bMatchSize, struct FLinearColor Tint, struct UObject* __WorldContext); // Function LIB_Game.LIB_Game_C.SetTextureAndTint // (Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void UpdateBool(bool Variable, bool InValue, struct UObject* __WorldContext, bool ValueChanged, bool OutValue); // Function LIB_Game.LIB_Game_C.UpdateBool // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetVisibilityIf(struct UWidget* Widget, enum class ESlateVisibility Visibility, bool Condition, struct UObject* __WorldContext, bool IsVisible); // Function LIB_Game.LIB_Game_C.SetVisibilityIf // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void LoadMission(struct FSoftObjectPath NewParam, struct UObject* __WorldContext); // Function LIB_Game.LIB_Game_C.LoadMission // (Static|Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SelectVisibility(struct UWidget* Widget, enum class ESlateVisibility FALSE, enum class ESlateVisibility TRUE, bool Index, struct UObject* __WorldContext, bool IsVisible, bool VisibilityChanged, enum class ESlateVisibility New Visibility); // Function LIB_Game.LIB_Game_C.SelectVisibility // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void IsOnSpaceRig(struct UObject* __WorldContext, bool OnSpaceRig); // Function LIB_Game.LIB_Game_C.IsOnSpaceRig // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x158ca90
	void IsKickReason(enum class EDisconnectReason DisconnectReason, struct UObject* __WorldContext, bool Kicked); // Function LIB_Game.LIB_Game_C.IsKickReason // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x158ca90
};

