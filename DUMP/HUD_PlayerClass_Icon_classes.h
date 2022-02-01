// WidgetBlueprintGeneratedClass HUD_PlayerClass_Icon.HUD_PlayerClass_Icon_C
// Size: 0x270 (Inherited: 0x230)
struct UHUD_PlayerClass_Icon_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UImage* BarBuff; // 0x238(0x08)
	struct UInvalidationBox* InvalidationBox_3; // 0x240(0x08)
	struct UITM_CharacterIcon_C* ITM_CharacterIcon; // 0x248(0x08)
	struct FLinearColor Tint_Edge; // 0x250(0x10)
	struct FLinearColor Tint_Class; // 0x260(0x10)

	void SetBuf(struct UTemporaryBuff* Buf); // Function HUD_PlayerClass_Icon.HUD_PlayerClass_Icon_C.SetBuf // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetIsServer(bool IsServer); // Function HUD_PlayerClass_Icon.HUD_PlayerClass_Icon_C.SetIsServer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetData(struct UPlayerCharacterID* playerClass, int32_t TimesRetired, bool IsServer, struct UTemporaryBuff* Buf); // Function HUD_PlayerClass_Icon.HUD_PlayerClass_Icon_C.SetData // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void Construct(); // Function HUD_PlayerClass_Icon.HUD_PlayerClass_Icon_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void FromPlayerState(struct APlayerState* PlayerState, struct APlayerCharacter* playerClass); // Function HUD_PlayerClass_Icon.HUD_PlayerClass_Icon_C.FromPlayerState // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnTemporaryBuffChanged(struct UTemporaryBuff* buff, struct APlayerCharacter* AffectedPlayer); // Function HUD_PlayerClass_Icon.HUD_PlayerClass_Icon_C.OnTemporaryBuffChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_HUD_PlayerClass_Icon(int32_t EntryPoint); // Function HUD_PlayerClass_Icon.HUD_PlayerClass_Icon_C.ExecuteUbergraph_HUD_PlayerClass_Icon // (Final|UbergraphFunction) // @ game+0x158ca90
};

