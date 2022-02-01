// WidgetBlueprintGeneratedClass ITM_SaveSlot_Entry.ITM_SaveSlot_Entry_C
// Size: 0x358 (Inherited: 0x230)
struct UITM_SaveSlot_Entry_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar; // 0x238(0x08)
	struct UBasic_ButtonScalable_C* Button_Delete; // 0x240(0x08)
	struct UBasic_ButtonScalable_C* Button_Load; // 0x248(0x08)
	struct UITM_SaveSlot_Entry_ClassIcon_C* Driller; // 0x250(0x08)
	struct UITM_SaveSlot_Entry_ClassIcon_C* Engineer; // 0x258(0x08)
	struct UITM_SaveSlot_Entry_ClassIcon_C* Gunner; // 0x260(0x08)
	struct UImage* Image_2; // 0x268(0x08)
	struct UImage* IMG_MissionIcon; // 0x270(0x08)
	struct UButton* MainButton; // 0x278(0x08)
	struct UITM_SaveSlot_Entry_ClassIcon_C* Scout; // 0x280(0x08)
	struct UTextBlock* Text_Rank; // 0x288(0x08)
	struct UTextBlock* TXT_MainSave; // 0x290(0x08)
	struct UTextBlock* TXT_Modded; // 0x298(0x08)
	struct UTextBlock* TXT_SaveName; // 0x2a0(0x08)
	struct UTextBlock* TXT_TimeStamp; // 0x2a8(0x08)
	struct UBasic_ToolTip_C* MutatorToolTip; // 0x2b0(0x08)
	struct UBasic_ToolTip_C* WarningToolTip; // 0x2b8(0x08)
	struct UBiome_ToolTip_C* BiomeToolTip; // 0x2c0(0x08)
	struct FString saveSlotName; // 0x2c8(0x10)
	struct FString FullSaveSlotName; // 0x2d8(0x10)
	struct FMulticastInlineDelegate OnSaveDeleted; // 0x2e8(0x10)
	struct FMulticastInlineDelegate OnSaveConverted; // 0x2f8(0x10)
	struct UFSDSaveGame* SaveInstance; // 0x308(0x08)
	struct FMulticastInlineDelegate OnSaveDetails; // 0x310(0x10)
	struct FMulticastInlineDelegate OnSaveLoaded; // 0x320(0x10)
	bool ActiveSave; // 0x330(0x01)
	char pad_331[0x7]; // 0x331(0x07)
	struct UBasic_ToolTip_C* LoadButtonTooltip; // 0x338(0x08)
	struct UBasic_ToolTip_C* DeleteButtonTooltip; // 0x340(0x08)
	struct FMulticastInlineDelegate OnSaveDeletedWithReference; // 0x348(0x10)

	struct UWidget* CreateDeleteButtonToolTip(); // Function ITM_SaveSlot_Entry.ITM_SaveSlot_Entry_C.CreateDeleteButtonToolTip // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x158ca90
	struct UWidget* CreateLoadButtonToolTip(); // Function ITM_SaveSlot_Entry.ITM_SaveSlot_Entry_C.CreateLoadButtonToolTip // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x158ca90
	void SetIfSaveIsActive(bool IsMainSlot); // Function ITM_SaveSlot_Entry.ITM_SaveSlot_Entry_C.SetIfSaveIsActive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SaveNameExists(struct FString Name, bool Exists); // Function ITM_SaveSlot_Entry.ITM_SaveSlot_Entry_C.SaveNameExists // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetSelectedColor(); // Function ITM_SaveSlot_Entry.ITM_SaveSlot_Entry_C.SetSelectedColor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetHeroRanks(); // Function ITM_SaveSlot_Entry.ITM_SaveSlot_Entry_C.SetHeroRanks // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void GetSaveSlotName(struct UFSDSaveGame* SaveGame, bool ReturnEmptyOnNonUser, struct FString OutSaveSlotName); // Function ITM_SaveSlot_Entry.ITM_SaveSlot_Entry_C.GetSaveSlotName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetValues(struct UFSDSaveGame* SaveGameInstance, bool MainSlot); // Function ITM_SaveSlot_Entry.ITM_SaveSlot_Entry_C.SetValues // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature(); // Function ITM_SaveSlot_Entry.ITM_SaveSlot_Entry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x158ca90
	void LoadAnswer(bool Yes); // Function ITM_SaveSlot_Entry.ITM_SaveSlot_Entry_C.LoadAnswer // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void BndEvt__Delete_Button_K2Node_ComponentBoundEvent_0_OnReleased__DelegateSignature(); // Function ITM_SaveSlot_Entry.ITM_SaveSlot_Entry_C.BndEvt__Delete_Button_K2Node_ComponentBoundEvent_0_OnReleased__DelegateSignature // (BlueprintEvent) // @ game+0x158ca90
	void DeleteAnswer(bool Yes); // Function ITM_SaveSlot_Entry.ITM_SaveSlot_Entry_C.DeleteAnswer // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void BndEvt__Button_Load_K2Node_ComponentBoundEvent_3_OnReleased__DelegateSignature(); // Function ITM_SaveSlot_Entry.ITM_SaveSlot_Entry_C.BndEvt__Button_Load_K2Node_ComponentBoundEvent_3_OnReleased__DelegateSignature // (BlueprintEvent) // @ game+0x158ca90
	void PreConstruct(bool IsDesignTime); // Function ITM_SaveSlot_Entry.ITM_SaveSlot_Entry_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_ITM_SaveSlot_Entry(int32_t EntryPoint); // Function ITM_SaveSlot_Entry.ITM_SaveSlot_Entry_C.ExecuteUbergraph_ITM_SaveSlot_Entry // (Final|UbergraphFunction|HasDefaults) // @ game+0x158ca90
	void OnSaveDeletedWithReference__DelegateSignature(struct UFSDSaveGame* save); // Function ITM_SaveSlot_Entry.ITM_SaveSlot_Entry_C.OnSaveDeletedWithReference__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnSaveLoaded__DelegateSignature(); // Function ITM_SaveSlot_Entry.ITM_SaveSlot_Entry_C.OnSaveLoaded__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnSaveDetails__DelegateSignature(struct UFSDSaveGame* SaveSlot); // Function ITM_SaveSlot_Entry.ITM_SaveSlot_Entry_C.OnSaveDetails__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnSaveConverted__DelegateSignature(); // Function ITM_SaveSlot_Entry.ITM_SaveSlot_Entry_C.OnSaveConverted__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnSaveDeleted__DelegateSignature(); // Function ITM_SaveSlot_Entry.ITM_SaveSlot_Entry_C.OnSaveDeleted__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
};

