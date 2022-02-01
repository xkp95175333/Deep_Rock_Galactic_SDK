// WidgetBlueprintGeneratedClass ITM_Mod_Joining.ITM_Mod_Joining_C
// Size: 0x2c9 (Inherited: 0x230)
struct UITM_Mod_Joining_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetSwitcher* HasMetaData_Switcher; // 0x238(0x08)
	struct UWidgetSwitcher* Installed_Switcher; // 0x240(0x08)
	struct UButton* LinkButton; // 0x248(0x08)
	struct UBasic_Label_C* Mod_Approval; // 0x250(0x08)
	struct UBasic_Label_C* Mod_Name; // 0x258(0x08)
	struct UUI_ModdingProgressBar_C* ModdingProgressBar; // 0x260(0x08)
	struct UCircularThrobber* ModName_Loading; // 0x268(0x08)
	struct FString ModId; // 0x270(0x10)
	bool DownloadFinished; // 0x280(0x01)
	char pad_281[0x7]; // 0x281(0x07)
	struct FMulticastInlineDelegate OnMetaDataLoaded; // 0x288(0x10)
	struct FString ModName; // 0x298(0x10)
	struct FString ModURL; // 0x2a8(0x10)
	enum class EUGCApprovalStatus ApprovalStatus; // 0x2b8(0x01)
	bool ModInstalled; // 0x2b9(0x01)
	char pad_2BA[0x6]; // 0x2ba(0x06)
	struct UModioModInfoWrapper* MetaData; // 0x2c0(0x08)
	enum class ENUM_MenuColors NameColor; // 0x2c8(0x01)

	void Update(); // Function ITM_Mod_Joining.ITM_Mod_Joining_C.Update // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetMetaData(struct UModioModInfoWrapper* InModMetaData); // Function ITM_Mod_Joining.ITM_Mod_Joining_C.SetMetaData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	struct UWidget* Get_LinkButton_ToolTip(); // Function ITM_Mod_Joining.ITM_Mod_Joining_C.Get_LinkButton_ToolTip // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x158ca90
	void OnDownloadExtractModFinished(struct FString ModName, struct FString ModId); // Function ITM_Mod_Joining.ITM_Mod_Joining_C.OnDownloadExtractModFinished // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnDownloadExtractMod(struct FString Name, struct TArray<struct FString> ModsPendingDownload, bool Downloading, int32_t Progress, int32_t Total); // Function ITM_Mod_Joining.ITM_Mod_Joining_C.OnDownloadExtractMod // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void Construct(); // Function ITM_Mod_Joining.ITM_Mod_Joining_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void BndEvt__LinkButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function ITM_Mod_Joining.ITM_Mod_Joining_C.BndEvt__LinkButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x158ca90
	void OnOverlayClosed(struct FString LastURL); // Function ITM_Mod_Joining.ITM_Mod_Joining_C.OnOverlayClosed // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void Destruct(); // Function ITM_Mod_Joining.ITM_Mod_Joining_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void PreConstruct(bool IsDesignTime); // Function ITM_Mod_Joining.ITM_Mod_Joining_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void BndEvt__LinkButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function ITM_Mod_Joining.ITM_Mod_Joining_C.BndEvt__LinkButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x158ca90
	void BndEvt__LinkButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function ITM_Mod_Joining.ITM_Mod_Joining_C.BndEvt__LinkButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_ITM_Mod_Joining(int32_t EntryPoint); // Function ITM_Mod_Joining.ITM_Mod_Joining_C.ExecuteUbergraph_ITM_Mod_Joining // (Final|UbergraphFunction) // @ game+0x158ca90
	void OnMetaDataLoaded__DelegateSignature(struct FString ModId, enum class EUGCApprovalStatus ModStatus); // Function ITM_Mod_Joining.ITM_Mod_Joining_C.OnMetaDataLoaded__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
};

