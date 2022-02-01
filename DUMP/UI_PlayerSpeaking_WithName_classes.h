// WidgetBlueprintGeneratedClass UI_PlayerSpeaking_WithName.UI_PlayerSpeaking_WithName_C
// Size: 0x259 (Inherited: 0x230)
struct UUI_PlayerSpeaking_WithName_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UHorizontalBox* LineBox; // 0x238(0x08)
	struct UBasic_Label_C* NameLabel; // 0x240(0x08)
	struct UBasic_Image_C* SpeakingIcon; // 0x248(0x08)
	struct AFSDPlayerState* PlayerState; // 0x250(0x08)
	bool IsTalking; // 0x258(0x01)

	void SetLineVisible(bool InVisible); // Function UI_PlayerSpeaking_WithName.UI_PlayerSpeaking_WithName_C.SetLineVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetPlayerState(struct AFSDPlayerState* InPlayerState); // Function UI_PlayerSpeaking_WithName.UI_PlayerSpeaking_WithName_C.SetPlayerState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetIsTalking(bool IsTalking, bool OutTalking); // Function UI_PlayerSpeaking_WithName.UI_PlayerSpeaking_WithName_C.SetIsTalking // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetPlayerName(struct FString NewName); // Function UI_PlayerSpeaking_WithName.UI_PlayerSpeaking_WithName_C.SetPlayerName // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void Construct(); // Function UI_PlayerSpeaking_WithName.UI_PlayerSpeaking_WithName_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void OnTalkingChanged(bool IsTalking); // Function UI_PlayerSpeaking_WithName.UI_PlayerSpeaking_WithName_C.OnTalkingChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_UI_PlayerSpeaking_WithName(int32_t EntryPoint); // Function UI_PlayerSpeaking_WithName.UI_PlayerSpeaking_WithName_C.ExecuteUbergraph_UI_PlayerSpeaking_WithName // (Final|UbergraphFunction|HasDefaults) // @ game+0x158ca90
};

