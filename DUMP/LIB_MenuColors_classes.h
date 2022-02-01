// BlueprintGeneratedClass LIB_MenuColors.LIB_MenuColors_C
// Size: 0x28 (Inherited: 0x28)
struct ULIB_MenuColors_C : UBlueprintFunctionLibrary {

	void WindowColors(enum class ENUM_WindowColors InColor, struct UObject* __WorldContext, struct FLinearColor Color1, struct FLinearColor Color2); // Function LIB_MenuColors.LIB_MenuColors_C.WindowColors // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SelectTextColor(struct UTextBlock* Text, enum class ENUM_MenuColors FALSE, enum class ENUM_MenuColors TRUE, bool Condition, struct UObject* __WorldContext); // Function LIB_MenuColors.LIB_MenuColors_C.SelectTextColor // (Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetTextColor(struct UTextBlock* Text, enum class ENUM_MenuColors Color, struct UObject* __WorldContext); // Function LIB_MenuColors.LIB_MenuColors_C.SetTextColor // (Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SelectMenuColor(enum class ENUM_MenuColors FALSE, enum class ENUM_MenuColors TRUE, bool Condition, struct UObject* __WorldContext, struct FLinearColor OutputColor); // Function LIB_MenuColors.LIB_MenuColors_C.SelectMenuColor // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x158ca90
	void MenuColorsAndOpacity(enum class ENUM_MenuColors ColorSelector, float Opacity, struct UObject* __WorldContext, struct FLinearColor OutputColor); // Function LIB_MenuColors.LIB_MenuColors_C.MenuColorsAndOpacity // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x158ca90
	void MenuColors(enum class ENUM_MenuColors ColorSelector, struct UObject* __WorldContext, struct FLinearColor OutputColor); // Function LIB_MenuColors.LIB_MenuColors_C.MenuColors // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x158ca90
};

