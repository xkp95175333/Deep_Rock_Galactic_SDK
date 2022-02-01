// WidgetBlueprintGeneratedClass HUD_Chat.HUD_Chat_C
// Size: 0x290 (Inherited: 0x230)
struct UHUD_Chat_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* BackgroundFade; // 0x238(0x08)
	struct UBorder* Border_1; // 0x240(0x08)
	struct UImage* ChatBackground; // 0x248(0x08)
	struct UImage* ChatBar; // 0x250(0x08)
	struct UVerticalBox* ChatMessages; // 0x258(0x08)
	struct UEditableTextBox* NewChatEdit; // 0x260(0x08)
	float Duration; // 0x268(0x04)
	float FadeTime; // 0x26c(0x04)
	int32_t MaxLines; // 0x270(0x04)
	bool InLoadMenu; // 0x274(0x01)
	enum class EChatSenderType SenderType; // 0x275(0x01)
	char pad_276[0x2]; // 0x276(0x02)
	struct UEditableTextBox* OutsiteChatbox; // 0x278(0x08)
	struct UEditableTextBox* InputChatBox; // 0x280(0x08)
	float MinLinesConst; // 0x288(0x04)
	float MaxLinesConst; // 0x28c(0x04)

	void SetMaxLinesFromFontSize(int32_t FontSize); // Function HUD_Chat.HUD_Chat_C.SetMaxLinesFromFontSize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void UpdateChatMessages(bool resetAge); // Function HUD_Chat.HUD_Chat_C.UpdateChatMessages // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void IsStringNotEmpty(struct FString String, bool isEmpty); // Function HUD_Chat.HUD_Chat_C.IsStringNotEmpty // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x158ca90
	void GetSenderType(enum class EChatSenderType SenderType); // Function HUD_Chat.HUD_Chat_C.GetSenderType // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x158ca90
	void OpenChat(); // Function HUD_Chat.HUD_Chat_C.OpenChat // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void BeginChat(); // Function HUD_Chat.HUD_Chat_C.BeginChat // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnOpenChat(); // Function HUD_Chat.HUD_Chat_C.OnOpenChat // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void Update Chat Background(); // Function HUD_Chat.HUD_Chat_C.Update Chat Background // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void Add Chat Message(struct FFSDChatMessage Msg); // Function HUD_Chat.HUD_Chat_C.Add Chat Message // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnMessageHidden_Event(); // Function HUD_Chat.HUD_Chat_C.OnMessageHidden_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void BndEvt__NewChatEdit_K2Node_ComponentBoundEvent_19_OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText Text, enum class ETextCommit CommitMethod); // Function HUD_Chat.HUD_Chat_C.BndEvt__NewChatEdit_K2Node_ComponentBoundEvent_19_OnEditableTextBoxCommittedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x158ca90
	void PreConstruct(bool IsDesignTime); // Function HUD_Chat.HUD_Chat_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void CloseChat(); // Function HUD_Chat.HUD_Chat_C.CloseChat // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnBackgroundFadeFinished(); // Function HUD_Chat.HUD_Chat_C.OnBackgroundFadeFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void BndEvt__OutsiteChatbox_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature(struct FText Text, enum class ETextCommit CommitMethod); // Function HUD_Chat.HUD_Chat_C.BndEvt__OutsiteChatbox_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x158ca90
	void BndEvt__OutsiteChatbox_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature(struct FText Text); // Function HUD_Chat.HUD_Chat_C.BndEvt__OutsiteChatbox_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x158ca90
	void SendChatMessage(struct FText InText, enum class ETextCommit CommitMethod); // Function HUD_Chat.HUD_Chat_C.SendChatMessage // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void NewMesssage(struct FFSDChatMessage Message); // Function HUD_Chat.HUD_Chat_C.NewMesssage // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void Construct(); // Function HUD_Chat.HUD_Chat_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void BndEvt__NewChatEdit_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature(struct FText Text); // Function HUD_Chat.HUD_Chat_C.BndEvt__NewChatEdit_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x158ca90
	void OnFontSizeChange(int32_t NewValue); // Function HUD_Chat.HUD_Chat_C.OnFontSizeChange // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_HUD_Chat(int32_t EntryPoint); // Function HUD_Chat.HUD_Chat_C.ExecuteUbergraph_HUD_Chat // (Final|UbergraphFunction|HasDefaults) // @ game+0x158ca90
};

