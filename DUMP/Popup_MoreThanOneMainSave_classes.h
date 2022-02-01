// WidgetBlueprintGeneratedClass Popup_MoreThanOneMainSave.Popup_MoreThanOneMainSave_C
// Size: 0x2e0 (Inherited: 0x270)
struct UPopup_MoreThanOneMainSave_C : UWindowWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UWidgetAnimation* FlashingText; // 0x278(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar; // 0x280(0x08)
	struct UBorder* Border_1; // 0x288(0x08)
	struct UTextBlock* Header; // 0x290(0x08)
	struct UITM_SaveSlot_Entry_C* ITM_SaveSlot_Entry; // 0x298(0x08)
	struct UITM_SaveSlot_Entry_Header_C* ITM_SaveSlotsCategoryList_Entry; // 0x2a0(0x08)
	struct UScrollBox* SaveSlotContainer; // 0x2a8(0x08)
	struct TArray<struct UFSDSaveGame*> MainSaves; // 0x2b0(0x10)
	struct FMulticastInlineDelegate OnOneMainSaveLeft; // 0x2c0(0x10)
	struct FString TmpSaveslot; // 0x2d0(0x10)

	void RemoveTempSave(); // Function Popup_MoreThanOneMainSave.Popup_MoreThanOneMainSave_C.RemoveTempSave // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void CreateTempSave(); // Function Popup_MoreThanOneMainSave.Popup_MoreThanOneMainSave_C.CreateTempSave // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void TransformSavenameByBranch(struct FString InSavename, struct FString Savename); // Function Popup_MoreThanOneMainSave.Popup_MoreThanOneMainSave_C.TransformSavenameByBranch // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x158ca90
	void CreateMainSaveslots(); // Function Popup_MoreThanOneMainSave.Popup_MoreThanOneMainSave_C.CreateMainSaveslots // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void Reset Color on Non Selected Save(struct UFSDSaveGame* SaveSlot); // Function Popup_MoreThanOneMainSave.Popup_MoreThanOneMainSave_C.Reset Color on Non Selected Save // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void BindSaveslotEvents(struct UITM_SaveSlot_Entry_C* SaveslotWidget); // Function Popup_MoreThanOneMainSave.Popup_MoreThanOneMainSave_C.BindSaveslotEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetColors(); // Function Popup_MoreThanOneMainSave.Popup_MoreThanOneMainSave_C.SetColors // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void Construct(); // Function Popup_MoreThanOneMainSave.Popup_MoreThanOneMainSave_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void PreConstruct(bool IsDesignTime); // Function Popup_MoreThanOneMainSave.Popup_MoreThanOneMainSave_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void SaveDeleted(struct UFSDSaveGame* save); // Function Popup_MoreThanOneMainSave.Popup_MoreThanOneMainSave_C.SaveDeleted // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_Popup_MoreThanOneMainSave(int32_t EntryPoint); // Function Popup_MoreThanOneMainSave.Popup_MoreThanOneMainSave_C.ExecuteUbergraph_Popup_MoreThanOneMainSave // (Final|UbergraphFunction) // @ game+0x158ca90
	void OnOneMainSaveLeft__DelegateSignature(); // Function Popup_MoreThanOneMainSave.Popup_MoreThanOneMainSave_C.OnOneMainSaveLeft__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
};

