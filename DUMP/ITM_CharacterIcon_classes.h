// WidgetBlueprintGeneratedClass ITM_CharacterIcon.ITM_CharacterIcon_C
// Size: 0x289 (Inherited: 0x230)
struct UITM_CharacterIcon_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UImage* Border_CharacterColor; // 0x238(0x08)
	struct UImage* Border_CharacterColorBG; // 0x240(0x08)
	struct UImage* Border_Outer; // 0x248(0x08)
	struct UUI_MaskedImage_C* Icon_Character; // 0x250(0x08)
	struct UITM_HostIcon_C* Icon_Host; // 0x258(0x08)
	struct UITM_RetirementBadge_C* Icon_Promotion; // 0x260(0x08)
	struct UITM_SonyTeamLeader_C* Icon_SonyTeamLeader; // 0x268(0x08)
	struct USizeBox* SizeBox_1; // 0x270(0x08)
	struct UPlayerCharacterID* Character; // 0x278(0x08)
	bool ShowPromotion; // 0x280(0x01)
	bool ShowHost; // 0x281(0x01)
	char pad_282[0x2]; // 0x282(0x02)
	float Base Icon Size; // 0x284(0x04)
	bool ShowSessionLeader; // 0x288(0x01)

	void SetShowSonySessionLeader(bool Index); // Function ITM_CharacterIcon.ITM_CharacterIcon_C.SetShowSonySessionLeader // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetFromCharacterID(struct UPlayerCharacterID* characterID); // Function ITM_CharacterIcon.ITM_CharacterIcon_C.SetFromCharacterID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetFromCharacterClass(struct UPlayerCharacterID* InCharacterClass); // Function ITM_CharacterIcon.ITM_CharacterIcon_C.SetFromCharacterClass // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetFromPlayerCharacter(struct APlayerCharacter* Character); // Function ITM_CharacterIcon.ITM_CharacterIcon_C.SetFromPlayerCharacter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetFromPlayerState(struct APlayerState* InState); // Function ITM_CharacterIcon.ITM_CharacterIcon_C.SetFromPlayerState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetBaseSize(float Size); // Function ITM_CharacterIcon.ITM_CharacterIcon_C.SetBaseSize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetShowPromotion(bool Index); // Function ITM_CharacterIcon.ITM_CharacterIcon_C.SetShowPromotion // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetImage(struct UTexture2D* Value, struct FLinearColor InColorAndOpacity); // Function ITM_CharacterIcon.ITM_CharacterIcon_C.SetImage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetCharacterImageAndColor(struct UPlayerCharacterID* Character); // Function ITM_CharacterIcon.ITM_CharacterIcon_C.SetCharacterImageAndColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetShowHostIcon(bool Index); // Function ITM_CharacterIcon.ITM_CharacterIcon_C.SetShowHostIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void PreConstruct(bool IsDesignTime); // Function ITM_CharacterIcon.ITM_CharacterIcon_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_ITM_CharacterIcon(int32_t EntryPoint); // Function ITM_CharacterIcon.ITM_CharacterIcon_C.ExecuteUbergraph_ITM_CharacterIcon // (Final|UbergraphFunction) // @ game+0x158ca90
};

