// WidgetBlueprintGeneratedClass Popup_ModdedSave.Popup_ModdedSave_C
// Size: 0x2e9 (Inherited: 0x270)
struct UPopup_ModdedSave_C : UWindowWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar; // 0x278(0x08)
	struct UBorder* Border_1; // 0x280(0x08)
	struct UBasic_ButtonScalable_C* Button_Cancel; // 0x288(0x08)
	struct UTextBlock* Header; // 0x290(0x08)
	struct UITM_CreateNewSaveSlot_Entry_C* ITM_CreateNewSaveSlot_Entry; // 0x298(0x08)
	struct UITM_SaveSlot_Entry_C* ITM_SaveSlot_Entry; // 0x2a0(0x08)
	struct UITM_SaveSlot_Entry_Header_C* ITM_SaveSlotsCategoryList_Entry; // 0x2a8(0x08)
	struct UScrollBox* SaveSlotContainer; // 0x2b0(0x08)
	struct FMulticastInlineDelegate OnModdedSaveLoaded; // 0x2b8(0x10)
	bool CanCancel; // 0x2c8(0x01)
	char pad_2C9[0x7]; // 0x2c9(0x07)
	struct FMulticastInlineDelegate OnModdedSaveCancelled; // 0x2d0(0x10)
	struct UBasic_ToolTip_C* CancelTooltip; // 0x2e0(0x08)
	bool LoadVanillaSaves; // 0x2e8(0x01)

	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function Popup_ModdedSave.Popup_ModdedSave_C.OnKeyUp // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function Popup_ModdedSave.Popup_ModdedSave_C.OnKeyDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	struct UWidget* CancelButtonTooltip(); // Function Popup_ModdedSave.Popup_ModdedSave_C.CancelButtonTooltip // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x158ca90
	void SetCanCancel(bool Can, struct FText OptionalTooltipText); // Function Popup_ModdedSave.Popup_ModdedSave_C.SetCanCancel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void Reset Color on Non Selected Save(struct UFSDSaveGame* SaveSlot); // Function Popup_ModdedSave.Popup_ModdedSave_C.Reset Color on Non Selected Save // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void BindSaveslotEvents(struct UITM_SaveSlot_Entry_C* SaveslotWidget); // Function Popup_ModdedSave.Popup_ModdedSave_C.BindSaveslotEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetColors(); // Function Popup_ModdedSave.Popup_ModdedSave_C.SetColors // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void Set Create New Saveslot Entry(); // Function Popup_ModdedSave.Popup_ModdedSave_C.Set Create New Saveslot Entry // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void Construct(); // Function Popup_ModdedSave.Popup_ModdedSave_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void PreConstruct(bool IsDesignTime); // Function Popup_ModdedSave.Popup_ModdedSave_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void OnSaveDeleted(); // Function Popup_ModdedSave.Popup_ModdedSave_C.OnSaveDeleted // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnSaveLoaded(); // Function Popup_ModdedSave.Popup_ModdedSave_C.OnSaveLoaded // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnSaveCreated(); // Function Popup_ModdedSave.Popup_ModdedSave_C.OnSaveCreated // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_0_OnReleased__DelegateSignature(); // Function Popup_ModdedSave.Popup_ModdedSave_C.BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_0_OnReleased__DelegateSignature // (BlueprintEvent) // @ game+0x158ca90
	void Cancel(); // Function Popup_ModdedSave.Popup_ModdedSave_C.Cancel // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_Popup_ModdedSave(int32_t EntryPoint); // Function Popup_ModdedSave.Popup_ModdedSave_C.ExecuteUbergraph_Popup_ModdedSave // (Final|UbergraphFunction|HasDefaults) // @ game+0x158ca90
	void OnModdedSaveCancelled__DelegateSignature(); // Function Popup_ModdedSave.Popup_ModdedSave_C.OnModdedSaveCancelled__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnModdedSaveLoaded__DelegateSignature(); // Function Popup_ModdedSave.Popup_ModdedSave_C.OnModdedSaveLoaded__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
};

