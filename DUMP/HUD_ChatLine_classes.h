// WidgetBlueprintGeneratedClass HUD_ChatLine.HUD_ChatLine_C
// Size: 0x2fc (Inherited: 0x230)
struct UHUD_ChatLine_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct URichTextSizable* ChatRichText; // 0x238(0x08)
	struct UImage* SenderIcon; // 0x240(0x08)
	float Duration; // 0x248(0x04)
	float FadeOut; // 0x24c(0x04)
	struct FFSDChatMessage Msg; // 0x250(0x60)
	struct FVector2D PrevSize; // 0x2b0(0x08)
	struct FMulticastInlineDelegate OnMessageHidden; // 0x2b8(0x10)
	enum class EChatMessageType PreviewMsgType; // 0x2c8(0x01)
	char pad_2C9[0x7]; // 0x2c9(0x07)
	struct FString PreviewSender; // 0x2d0(0x10)
	enum class EChatSenderType PreviewSenderType; // 0x2e0(0x01)
	char pad_2E1[0x7]; // 0x2e1(0x07)
	struct FString PreviewMsg; // 0x2e8(0x10)
	int32_t oldFontSize; // 0x2f8(0x04)

	void RemoveTags(struct FString Source, struct FString Result); // Function HUD_ChatLine.HUD_ChatLine_C.RemoveTags // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x158ca90
	void EncloseText(struct FString Pre, struct FText Text, struct FString Post, struct FText Result); // Function HUD_ChatLine.HUD_ChatLine_C.EncloseText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x158ca90
	void StyledText(struct FText style Name, struct FText Text, struct FText Result); // Function HUD_ChatLine.HUD_ChatLine_C.StyledText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x158ca90
	void UpdateUserIcon(enum class EChatMessageType MessageType, enum class EChatSenderType SenderType); // Function HUD_ChatLine.HUD_ChatLine_C.UpdateUserIcon // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void UpdateOpacity(); // Function HUD_ChatLine.HUD_ChatLine_C.UpdateOpacity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetMessage(enum class EChatMessageType MsgType, struct FString SenderStr, enum class EChatSenderType SenderType, struct FString MsgStr); // Function HUD_ChatLine.HUD_ChatLine_C.SetMessage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void Construct(); // Function HUD_ChatLine.HUD_ChatLine_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function HUD_ChatLine.HUD_ChatLine_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void PreConstruct(bool IsDesignTime); // Function HUD_ChatLine.HUD_ChatLine_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void ChangeFontSize(int32_t NewValue); // Function HUD_ChatLine.HUD_ChatLine_C.ChangeFontSize // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_HUD_ChatLine(int32_t EntryPoint); // Function HUD_ChatLine.HUD_ChatLine_C.ExecuteUbergraph_HUD_ChatLine // (Final|UbergraphFunction|HasDefaults) // @ game+0x158ca90
	void OnMessageHidden__DelegateSignature(); // Function HUD_ChatLine.HUD_ChatLine_C.OnMessageHidden__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
};

