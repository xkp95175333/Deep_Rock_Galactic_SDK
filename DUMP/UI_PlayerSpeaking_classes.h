// WidgetBlueprintGeneratedClass UI_PlayerSpeaking.UI_PlayerSpeaking_C
// Size: 0x261 (Inherited: 0x230)
struct UUI_PlayerSpeaking_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBasic_Image_C* Basic_Image; // 0x238(0x08)
	float Size; // 0x240(0x04)
	char pad_244[0x4]; // 0x244(0x04)
	struct AFSDPlayerState* PlayerState; // 0x248(0x08)
	struct FMulticastInlineDelegate OnChanged; // 0x250(0x10)
	bool CollapseWhenHidden; // 0x260(0x01)

	void PreConstruct(bool IsDesignTime); // Function UI_PlayerSpeaking.UI_PlayerSpeaking_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void OnTalkingChanged(bool IsTalking); // Function UI_PlayerSpeaking.UI_PlayerSpeaking_C.OnTalkingChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetPlayerState(struct AFSDPlayerState* NewPlayerState); // Function UI_PlayerSpeaking.UI_PlayerSpeaking_C.SetPlayerState // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_UI_PlayerSpeaking(int32_t EntryPoint); // Function UI_PlayerSpeaking.UI_PlayerSpeaking_C.ExecuteUbergraph_UI_PlayerSpeaking // (Final|UbergraphFunction) // @ game+0x158ca90
	void OnChanged__DelegateSignature(bool InTalking); // Function UI_PlayerSpeaking.UI_PlayerSpeaking_C.OnChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
};

