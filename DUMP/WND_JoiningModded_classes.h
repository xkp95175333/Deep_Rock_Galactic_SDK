// WidgetBlueprintGeneratedClass WND_JoiningModded.WND_JoiningModded_C
// Size: 0x470 (Inherited: 0x270)
struct UWND_JoiningModded_C : UWindowWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct URichTextSizable* AboutToJoinModdedText; // 0x278(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar; // 0x280(0x08)
	struct UBasic_PasswordField_C* Basic_PasswordField; // 0x288(0x08)
	struct UBlurBackground_C* BlurBackground; // 0x290(0x08)
	struct UBorder* Border_1; // 0x298(0x08)
	struct UBasic_ButtonScalable2_C* BTN_Cancel; // 0x2a0(0x08)
	struct UBasic_ButtonScalable2_C* BTN_Join; // 0x2a8(0x08)
	struct URichTextSizable* DisclaimerModded; // 0x2b0(0x08)
	struct UWidgetSwitcher* HasMods_Switcher; // 0x2b8(0x08)
	struct UTextBlock* Header; // 0x2c0(0x08)
	struct UImage* Image_123; // 0x2c8(0x08)
	struct UVerticalBox* ModsInstalledBox; // 0x2d0(0x08)
	struct UVerticalBox* ModsPendingBox; // 0x2d8(0x08)
	struct UCircularThrobber* SubscribtionLoading; // 0x2e0(0x08)
	struct FBlueprintSessionResult Session; // 0x2e8(0x108)
	struct FMulticastInlineDelegate JoinModdedServer; // 0x3f0(0x10)
	struct FMulticastInlineDelegate OnCancel; // 0x400(0x10)
	bool EmptyMods; // 0x410(0x01)
	char pad_411[0x7]; // 0x411(0x07)
	struct TArray<struct FString> ModsToInstall; // 0x418(0x10)
	struct TArray<struct FString> HostMods; // 0x428(0x10)
	struct TArray<struct FString> ModsToEnable; // 0x438(0x10)
	bool DependencyRecusivenessDone; // 0x448(0x01)
	char pad_449[0x7]; // 0x449(0x07)
	struct TArray<struct FString> DependencyMods; // 0x450(0x10)
	struct FString DependencyRequestedMod; // 0x460(0x10)

	void UpdateHasModsInstalled(); // Function WND_JoiningModded.WND_JoiningModded_C.UpdateHasModsInstalled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnGottonModDependencies(struct TArray<struct FString> ModIds, struct FString ParentMod); // Function WND_JoiningModded.WND_JoiningModded_C.OnGottonModDependencies // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void UnbindEvents(); // Function WND_JoiningModded.WND_JoiningModded_C.UnbindEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void HiddenModsBlock(bool Hidden); // Function WND_JoiningModded.WND_JoiningModded_C.HiddenModsBlock // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnFetchedTermsOfUse(struct UModioTermsWrapper* Terms); // Function WND_JoiningModded.WND_JoiningModded_C.OnFetchedTermsOfUse // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void StartJoinSession(); // Function WND_JoiningModded.WND_JoiningModded_C.StartJoinSession // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnDownloadFinished(struct FString ModName, struct FString ModId); // Function WND_JoiningModded.WND_JoiningModded_C.OnDownloadFinished // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SubscribeToMods(); // Function WND_JoiningModded.WND_JoiningModded_C.SubscribeToMods // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetDefaultModDescription(); // Function WND_JoiningModded.WND_JoiningModded_C.SetDefaultModDescription // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetColors(); // Function WND_JoiningModded.WND_JoiningModded_C.SetColors // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetModNames(); // Function WND_JoiningModded.WND_JoiningModded_C.SetModNames // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetSession(struct FBlueprintSessionResult Session); // Function WND_JoiningModded.WND_JoiningModded_C.SetSession // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void BndEvt__Button_Close_K2Node_ComponentBoundEvent_62_OnButtonClickedEvent__DelegateSignature(); // Function WND_JoiningModded.WND_JoiningModded_C.BndEvt__Button_Close_K2Node_ComponentBoundEvent_62_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x158ca90
	void BndEvt__Button_Join_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature(); // Function WND_JoiningModded.WND_JoiningModded_C.BndEvt__Button_Join_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x158ca90
	void PreConstruct(bool IsDesignTime); // Function WND_JoiningModded.WND_JoiningModded_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void ReceiveCloseCommand(); // Function WND_JoiningModded.WND_JoiningModded_C.ReceiveCloseCommand // (Event|Protected|BlueprintEvent) // @ game+0x158ca90
	void ReceiveOkCommand(); // Function WND_JoiningModded.WND_JoiningModded_C.ReceiveOkCommand // (Event|Protected|BlueprintEvent) // @ game+0x158ca90
	void AnsweredTerms(bool Agree); // Function WND_JoiningModded.WND_JoiningModded_C.AnsweredTerms // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ReloadWorldAndJoin(); // Function WND_JoiningModded.WND_JoiningModded_C.ReloadWorldAndJoin // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnModioUserAuthenticated(bool Authenticated); // Function WND_JoiningModded.WND_JoiningModded_C.OnModioUserAuthenticated // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void Construct(); // Function WND_JoiningModded.WND_JoiningModded_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void HasHiddenMods(); // Function WND_JoiningModded.WND_JoiningModded_C.HasHiddenMods // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnModMetaDataLoaded(struct FString ModId, enum class EUGCApprovalStatus ModStatus); // Function WND_JoiningModded.WND_JoiningModded_C.OnModMetaDataLoaded // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void Cancel(); // Function WND_JoiningModded.WND_JoiningModded_C.Cancel // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void RequestDependenciesOfDependencies(); // Function WND_JoiningModded.WND_JoiningModded_C.RequestDependenciesOfDependencies // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnErrorInstallingMod(struct FString ModName, enum class EUGCPackageError ErrorType); // Function WND_JoiningModded.WND_JoiningModded_C.OnErrorInstallingMod // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_WND_JoiningModded(int32_t EntryPoint); // Function WND_JoiningModded.WND_JoiningModded_C.ExecuteUbergraph_WND_JoiningModded // (Final|UbergraphFunction|HasDefaults) // @ game+0x158ca90
	void OnCancel__DelegateSignature(); // Function WND_JoiningModded.WND_JoiningModded_C.OnCancel__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void JoinModdedServer__DelegateSignature(struct FBlueprintSessionResult Session, struct FString Password); // Function WND_JoiningModded.WND_JoiningModded_C.JoinModdedServer__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
};

