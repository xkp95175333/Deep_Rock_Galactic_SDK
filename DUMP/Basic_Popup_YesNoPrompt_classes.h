// WidgetBlueprintGeneratedClass Basic_Popup_YesNoPrompt.Basic_Popup_YesNoPrompt_C
// Size: 0x2e0 (Inherited: 0x288)
struct UBasic_Popup_YesNoPrompt_C : UYesNoPromptWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UBasic_ScrollBarBox_C* Basic_ScrollBarBox; // 0x290(0x08)
	struct UBasic_Menu_MinimalWindow_C* BasicWindow_Minimal; // 0x298(0x08)
	struct UBasic_ButtonScalable2_C* BTN_No; // 0x2a0(0x08)
	struct UBasic_ButtonScalable2_C* BTN_Yes; // 0x2a8(0x08)
	struct UTextBlock* DATA_Content; // 0x2b0(0x08)
	struct UTextBlock* DATA_Header; // 0x2b8(0x08)
	struct UITM_MenuBackground_C* ITM_MenuBackground; // 0x2c0(0x08)
	struct UUI_HorizontalResourceBar_C* UI_HorizontalResourceBar; // 0x2c8(0x08)
	struct FMulticastInlineDelegate OnClickedYesNo; // 0x2d0(0x10)

	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function Basic_Popup_YesNoPrompt.Basic_Popup_YesNoPrompt_C.OnKeyUp // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnShow(struct FText Title, struct FText Message); // Function Basic_Popup_YesNoPrompt.Basic_Popup_YesNoPrompt_C.OnShow // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x158ca90
	void BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(); // Function Basic_Popup_YesNoPrompt.Basic_Popup_YesNoPrompt_C.BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x158ca90
	void BndEvt__BTN_No_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(); // Function Basic_Popup_YesNoPrompt.Basic_Popup_YesNoPrompt_C.BndEvt__BTN_No_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x158ca90
	void PreConstruct(bool IsDesignTime); // Function Basic_Popup_YesNoPrompt.Basic_Popup_YesNoPrompt_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void Yes(); // Function Basic_Popup_YesNoPrompt.Basic_Popup_YesNoPrompt_C.Yes // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void No(); // Function Basic_Popup_YesNoPrompt.Basic_Popup_YesNoPrompt_C.No // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void Clear Resources(); // Function Basic_Popup_YesNoPrompt.Basic_Popup_YesNoPrompt_C.Clear Resources // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void Add Resource(struct UResourceData* InResource, float InAmount); // Function Basic_Popup_YesNoPrompt.Basic_Popup_YesNoPrompt_C.Add Resource // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetResources(struct TArray<struct FCraftingCost> Resources); // Function Basic_Popup_YesNoPrompt.Basic_Popup_YesNoPrompt_C.SetResources // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetMappedResources(struct TMap<struct UResourceData*, int32_t> Resources); // Function Basic_Popup_YesNoPrompt.Basic_Popup_YesNoPrompt_C.SetMappedResources // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnClicked(bool Yes); // Function Basic_Popup_YesNoPrompt.Basic_Popup_YesNoPrompt_C.OnClicked // (Event|Protected|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_Basic_Popup_YesNoPrompt(int32_t EntryPoint); // Function Basic_Popup_YesNoPrompt.Basic_Popup_YesNoPrompt_C.ExecuteUbergraph_Basic_Popup_YesNoPrompt // (Final|UbergraphFunction|HasDefaults) // @ game+0x158ca90
	void OnClickedYesNo__DelegateSignature(bool InYes); // Function Basic_Popup_YesNoPrompt.Basic_Popup_YesNoPrompt_C.OnClickedYesNo__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
};

