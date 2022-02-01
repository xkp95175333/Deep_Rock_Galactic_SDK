// WidgetBlueprintGeneratedClass Dialog_Modding_TermsAndConditions.Dialog_Modding_TermsAndConditions_C
// Size: 0x310 (Inherited: 0x288)
struct UDialog_Modding_TermsAndConditions_C : UYesNoPromptWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UBasic_Menu_MinimalWindow_C* BasicWindow_Minimal; // 0x290(0x08)
	struct UBasic_ButtonScalable2_C* BTN_No; // 0x298(0x08)
	struct UBasic_ButtonScalable2_C* BTN_Yes; // 0x2a0(0x08)
	struct UTextBlock* DATA_Content; // 0x2a8(0x08)
	struct UTextBlock* DATA_Header; // 0x2b0(0x08)
	struct URichTextBlock* Data_Privacy; // 0x2b8(0x08)
	struct URichTextBlock* Data_Terms; // 0x2c0(0x08)
	struct UITM_MenuBackground_C* ITM_MenuBackground; // 0x2c8(0x08)
	struct UButton* Privacy; // 0x2d0(0x08)
	struct UButton* Terms; // 0x2d8(0x08)
	struct FString TermsURL; // 0x2e0(0x10)
	struct FString PrivacyURL; // 0x2f0(0x10)
	struct FMulticastInlineDelegate OnAnswer; // 0x300(0x10)

	void OnModOverlayClosed(struct FString LastURL); // Function Dialog_Modding_TermsAndConditions.Dialog_Modding_TermsAndConditions_C.OnModOverlayClosed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function Dialog_Modding_TermsAndConditions.Dialog_Modding_TermsAndConditions_C.OnKeyUp // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void Construct(); // Function Dialog_Modding_TermsAndConditions.Dialog_Modding_TermsAndConditions_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void ShowTerms(struct UModioTermsWrapper* Terms); // Function Dialog_Modding_TermsAndConditions.Dialog_Modding_TermsAndConditions_C.ShowTerms // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void BndEvt__Terms_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function Dialog_Modding_TermsAndConditions.Dialog_Modding_TermsAndConditions_C.BndEvt__Terms_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x158ca90
	void BndEvt__Privacy_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function Dialog_Modding_TermsAndConditions.Dialog_Modding_TermsAndConditions_C.BndEvt__Privacy_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x158ca90
	void Disagree(); // Function Dialog_Modding_TermsAndConditions.Dialog_Modding_TermsAndConditions_C.Disagree // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void Agree(); // Function Dialog_Modding_TermsAndConditions.Dialog_Modding_TermsAndConditions_C.Agree // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void BndEvt__BTN_No_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(); // Function Dialog_Modding_TermsAndConditions.Dialog_Modding_TermsAndConditions_C.BndEvt__BTN_No_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x158ca90
	void BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(); // Function Dialog_Modding_TermsAndConditions.Dialog_Modding_TermsAndConditions_C.BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x158ca90
	void DummyEventThatLeadToNowhere(bool Yes); // Function Dialog_Modding_TermsAndConditions.Dialog_Modding_TermsAndConditions_C.DummyEventThatLeadToNowhere // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_Dialog_Modding_TermsAndConditions(int32_t EntryPoint); // Function Dialog_Modding_TermsAndConditions.Dialog_Modding_TermsAndConditions_C.ExecuteUbergraph_Dialog_Modding_TermsAndConditions // (Final|UbergraphFunction|HasDefaults) // @ game+0x158ca90
	void OnAnswer__DelegateSignature(bool Agree); // Function Dialog_Modding_TermsAndConditions.Dialog_Modding_TermsAndConditions_C.OnAnswer__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
};

