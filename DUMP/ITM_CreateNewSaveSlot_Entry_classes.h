// WidgetBlueprintGeneratedClass ITM_CreateNewSaveSlot_Entry.ITM_CreateNewSaveSlot_Entry_C
// Size: 0x2a0 (Inherited: 0x230)
struct UITM_CreateNewSaveSlot_Entry_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* FlashingText; // 0x238(0x08)
	struct UBasic_ButtonCutCorner_C* Basic_CurrentProgress; // 0x240(0x08)
	struct UBasic_ButtonCutCorner_C* Basic_NewProgress; // 0x248(0x08)
	struct UImage* IMG_MissionIcon; // 0x250(0x08)
	struct UBasic_TextInputField_C* SaveslotName_Input; // 0x258(0x08)
	struct FString saveSlotName; // 0x260(0x10)
	bool ResetProgress; // 0x270(0x01)
	char pad_271[0x7]; // 0x271(0x07)
	struct FMulticastInlineDelegate OnSaveslotCreated; // 0x278(0x10)
	struct FString IlligalChars; // 0x288(0x10)
	struct UBasic_ToolTip_C* CurrentProgressTooltip; // 0x298(0x08)

	struct UWidget* CreateCurrentProgressButtonToolTip(); // Function ITM_CreateNewSaveSlot_Entry.ITM_CreateNewSaveSlot_Entry_C.CreateCurrentProgressButtonToolTip // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x158ca90
	void CheckForIlligalChars(struct FString inString, bool IsIlligal); // Function ITM_CreateNewSaveSlot_Entry.ITM_CreateNewSaveSlot_Entry_C.CheckForIlligalChars // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x158ca90
	void ChangeSave(struct FString Name, bool Reset, bool StartTutorial); // Function ITM_CreateNewSaveSlot_Entry.ITM_CreateNewSaveSlot_Entry_C.ChangeSave // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SaveSlotNameExists(bool Exists); // Function ITM_CreateNewSaveSlot_Entry.ITM_CreateNewSaveSlot_Entry_C.SaveSlotNameExists // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SaveNameInputError(); // Function ITM_CreateNewSaveSlot_Entry.ITM_CreateNewSaveSlot_Entry_C.SaveNameInputError // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void BndEvt__SaveslotName_Input_K2Node_ComponentBoundEvent_2_OnTextCommitted__DelegateSignature(struct FText Text, char CommitMethod); // Function ITM_CreateNewSaveSlot_Entry.ITM_CreateNewSaveSlot_Entry_C.BndEvt__SaveslotName_Input_K2Node_ComponentBoundEvent_2_OnTextCommitted__DelegateSignature // (BlueprintEvent) // @ game+0x158ca90
	void BndEvt__Basic_ButtonCutCorner_K2Node_ComponentBoundEvent_3_OnReleased__DelegateSignature(); // Function ITM_CreateNewSaveSlot_Entry.ITM_CreateNewSaveSlot_Entry_C.BndEvt__Basic_ButtonCutCorner_K2Node_ComponentBoundEvent_3_OnReleased__DelegateSignature // (BlueprintEvent) // @ game+0x158ca90
	void Answer(bool Yes); // Function ITM_CreateNewSaveSlot_Entry.ITM_CreateNewSaveSlot_Entry_C.Answer // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void BndEvt__Basic_NewProgress_K2Node_ComponentBoundEvent_0_OnReleased__DelegateSignature(); // Function ITM_CreateNewSaveSlot_Entry.ITM_CreateNewSaveSlot_Entry_C.BndEvt__Basic_NewProgress_K2Node_ComponentBoundEvent_0_OnReleased__DelegateSignature // (BlueprintEvent) // @ game+0x158ca90
	void TutorialAnswer(bool Yes); // Function ITM_CreateNewSaveSlot_Entry.ITM_CreateNewSaveSlot_Entry_C.TutorialAnswer // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void BndEvt__SaveslotName_Input_K2Node_ComponentBoundEvent_1_OnTextChanged__DelegateSignature(struct FText Text); // Function ITM_CreateNewSaveSlot_Entry.ITM_CreateNewSaveSlot_Entry_C.BndEvt__SaveslotName_Input_K2Node_ComponentBoundEvent_1_OnTextChanged__DelegateSignature // (BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_ITM_CreateNewSaveSlot_Entry(int32_t EntryPoint); // Function ITM_CreateNewSaveSlot_Entry.ITM_CreateNewSaveSlot_Entry_C.ExecuteUbergraph_ITM_CreateNewSaveSlot_Entry // (Final|UbergraphFunction|HasDefaults) // @ game+0x158ca90
	void OnSaveslotCreated__DelegateSignature(); // Function ITM_CreateNewSaveSlot_Entry.ITM_CreateNewSaveSlot_Entry_C.OnSaveslotCreated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
};

