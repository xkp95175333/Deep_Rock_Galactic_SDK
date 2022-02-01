// BlueprintGeneratedClass BP_PlayerControllerBase.BP_PlayerControllerBase_C
// Size: 0x7f0 (Inherited: 0x7a0)
struct ABP_PlayerControllerBase_C : AFSDPlayerController {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x7a0(0x08)
	struct FMulticastInlineDelegate ReplyToInviteRequest; // 0x7a8(0x10)
	struct UBP_Invitation_C* InviteRequest; // 0x7b8(0x08)
	float InviteTimeElapsed; // 0x7c0(0x04)
	char pad_7C4[0x4]; // 0x7c4(0x04)
	struct FDateTime InviteWaitTime; // 0x7c8(0x08)
	int32_t AnselStatus; // 0x7d0(0x04)
	int32_t AnselCameraTries; // 0x7d4(0x04)
	struct ABP_FSDCameraManager_C* CameraManager; // 0x7d8(0x08)
	struct FTimerHandle AnselTimerHandle; // 0x7e0(0x08)
	struct UWindowWidget* RetirementPopup; // 0x7e8(0x08)

	void SetIsEscapeMenuEnabled(bool IsEscapeMenuEnabled); // Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.SetIsEscapeMenuEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetHasShownCharacterSelector(bool HasShown); // Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.SetHasShownCharacterSelector // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ItemFilter(struct AActor* itemClass, bool Result); // Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.ItemFilter // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetClassAnalytics(); // Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.SetClassAnalytics // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetUnlockAnalytics(struct TArray<struct AActor*> primary, struct TArray<struct AActor*> Secundary); // Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.SetUnlockAnalytics // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void GetUnlockedItems(enum class EItemCategory Category, struct TArray<struct AActor*> Unlocked Items); // Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.GetUnlockedItems // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x158ca90
	void ReStartAnsel(); // Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.ReStartAnsel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void StartAnsel(); // Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.StartAnsel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void StopAnsel(); // Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.StopAnsel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void CreateInviteRequestIfNotCreated(); // Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.CreateInviteRequestIfNotCreated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void InpActEvt_AcceptInvite_K2Node_InputActionEvent_3(struct FKey Key); // Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.InpActEvt_AcceptInvite_K2Node_InputActionEvent_3 // (BlueprintEvent) // @ game+0x158ca90
	void InpActEvt_RejectInvite_K2Node_InputActionEvent_2(struct FKey Key); // Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.InpActEvt_RejectInvite_K2Node_InputActionEvent_2 // (BlueprintEvent) // @ game+0x158ca90
	void InpActEvt_IgnoreInvite_K2Node_InputActionEvent_1(struct FKey Key); // Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.InpActEvt_IgnoreInvite_K2Node_InputActionEvent_1 // (BlueprintEvent) // @ game+0x158ca90
	void InpActEvt_Ctrl_O_K2Node_InputKeyEvent_1(struct FKey Key); // Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.InpActEvt_Ctrl_O_K2Node_InputKeyEvent_1 // (BlueprintEvent) // @ game+0x158ca90
	void ReceiveBeginPlay(); // Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x158ca90
	void SetPhotographyMode(bool Active); // Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.SetPhotographyMode // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void Return Client Camera(); // Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.Return Client Camera // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void Setup Invite Handling(); // Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.Setup Invite Handling // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void Setup Retirement Notification(); // Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.Setup Retirement Notification // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnCharacterCanRetire_Event(struct APlayerCharacter* CharacterClass); // Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.OnCharacterCanRetire_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void UpdateAnalytics(); // Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.UpdateAnalytics // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void AdjustCamera(); // Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.AdjustCamera // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void Setup Change User(); // Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.Setup Change User // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ChangeUser(); // Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.ChangeUser // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ChangeUserReply(bool Yes); // Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.ChangeUserReply // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void Reset Player Location(); // Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.Reset Player Location // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnJoinRequest(struct FDiscordUserDataSDK joinRequest); // Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.OnJoinRequest // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void Event On Join Request Reply(int32_t Reply); // Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.Event On Join Request Reply // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_BP_PlayerControllerBase(int32_t EntryPoint); // Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.ExecuteUbergraph_BP_PlayerControllerBase // (Final|UbergraphFunction|HasDefaults) // @ game+0x158ca90
	void ReplyToInviteRequest__DelegateSignature(int32_t Reply); // Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.ReplyToInviteRequest__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
};

