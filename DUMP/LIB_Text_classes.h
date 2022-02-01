// BlueprintGeneratedClass LIB_Text.LIB_Text_C
// Size: 0x28 (Inherited: 0x28)
struct ULIB_Text_C : UBlueprintFunctionLibrary {

	void Select CharacterText(struct APlayerCharacter* Character, struct FText DrillerText, struct FText GunnerText, struct FText ScoutText, struct FText EngineerText, struct FText BoscoText, struct FText NoneText, struct UObject* __WorldContext, struct FText OutText); // Function LIB_Text.LIB_Text_C.Select CharacterText // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x158ca90
	void Select Character Class Text(struct UPlayerCharacterID* CharacterClass, struct FText DrillerText, struct FText GunnerText, struct FText ScoutText, struct FText EngineerText, struct FText BoscoText, struct FText NoneText, struct UObject* __WorldContext, struct FText OutText); // Function LIB_Text.LIB_Text_C.Select Character Class Text // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x158ca90
	void Select Character ID Text(struct UPlayerCharacterID* characterID, struct FText DrillerText, struct FText GunnerText, struct FText ScoutText, struct FText EngineerText, struct FText BoscoText, struct FText NoneText, struct UObject* __WorldContext, struct FText OutText); // Function LIB_Text.LIB_Text_C.Select Character ID Text // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x158ca90
	void GetTimeText(float Dividend, struct UObject* __WorldContext, struct FText Text); // Function LIB_Text.LIB_Text_C.GetTimeText // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x158ca90
	void SetTextCased(struct UTextBlock* Target, struct FText InText, enum class ENU_TextCase Text Case, struct UObject* __WorldContext); // Function LIB_Text.LIB_Text_C.SetTextCased // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void GetFontSize(struct UTextBlock* Label, struct UObject* __WorldContext, int32_t Size); // Function LIB_Text.LIB_Text_C.GetFontSize // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x158ca90
	void SetFontSize(struct UTextBlock* Label, int32_t NewSize, struct UObject* __WorldContext); // Function LIB_Text.LIB_Text_C.SetFontSize // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetTextUpperCased(struct UTextBlock* Target, struct FText InText, struct UObject* __WorldContext); // Function LIB_Text.LIB_Text_C.SetTextUpperCased // (Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void GetDisconnectReasonCaption(enum class EDisconnectReason DisconnectReason, struct UObject* __WorldContext, struct FText Text); // Function LIB_Text.LIB_Text_C.GetDisconnectReasonCaption // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x158ca90
	void GetDisconnectReasonText(enum class EDisconnectReason DisconnectReason, struct UObject* __WorldContext, struct FText Text); // Function LIB_Text.LIB_Text_C.GetDisconnectReasonText // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x158ca90
};

