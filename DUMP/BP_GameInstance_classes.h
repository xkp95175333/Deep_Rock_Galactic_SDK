// BlueprintGeneratedClass BP_GameInstance.BP_GameInstance_C
// Size: 0x1120 (Inherited: 0xeb0)
struct UBP_GameInstance_C : UFSDGameInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xeb0(0x08)
	struct FMulticastInlineDelegate OnAvailableCraftingItems; // 0xeb8(0x10)
	bool EligibleForRetirementAssignment; // 0xec8(0x01)
	char pad_EC9[0x7]; // 0xec9(0x07)
	struct FMulticastInlineDelegate OnEligibleForRetirementAssignment; // 0xed0(0x10)
	struct UWND_JoiningPassword_C* JoinFriendInvitePasswordWidget; // 0xee0(0x08)
	struct UWND_JoiningModded_C* JoinFriendInviteModdedWidget; // 0xee8(0x08)
	struct FBlueprintSessionResult CurrentModdedSession; // 0xef0(0x108)
	struct FString CurrentModdedPassword; // 0xff8(0x10)
	struct UWND_Joining_C* JoiningFriendInviteWidget; // 0x1008(0x08)
	struct UObject* JoinFriendInviteProgressionDisabling; // 0x1010(0x08)
	struct FBlueprintSessionResult tmpSetupModdedSession; // 0x1018(0x108)

	void ResetTempSessions(); // Function BP_GameInstance.BP_GameInstance_C.ResetTempSessions // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void CreateAndOpenModdedWidget(); // Function BP_GameInstance.BP_GameInstance_C.CreateAndOpenModdedWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetModdedSession(); // Function BP_GameInstance.BP_GameInstance_C.SetModdedSession // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetupJoinVanillaDisableProgressionMods(struct FBlueprintSessionResult Session); // Function BP_GameInstance.BP_GameInstance_C.SetupJoinVanillaDisableProgressionMods // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void PromptSandboxUser(struct FBlueprintSessionResult Session); // Function BP_GameInstance.BP_GameInstance_C.PromptSandboxUser // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ShouldPromptSandboxUser(struct FBlueprintSessionResult Session, bool Yes); // Function BP_GameInstance.BP_GameInstance_C.ShouldPromptSandboxUser // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetupJoinModded(struct FBlueprintSessionResult Session); // Function BP_GameInstance.BP_GameInstance_C.SetupJoinModded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void Setup Join with Password(struct FBlueprintSessionResult Session); // Function BP_GameInstance.BP_GameInstance_C.Setup Join with Password // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void IsEligibleForRetirementAassignment(bool EligibleForRetirementAssignment); // Function BP_GameInstance.BP_GameInstance_C.IsEligibleForRetirementAassignment // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x158ca90
	void OnFailure_7B3ECFCE46627790F0C9B89A6B449207(); // Function BP_GameInstance.BP_GameInstance_C.OnFailure_7B3ECFCE46627790F0C9B89A6B449207 // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnSuccess_7B3ECFCE46627790F0C9B89A6B449207(); // Function BP_GameInstance.BP_GameInstance_C.OnSuccess_7B3ECFCE46627790F0C9B89A6B449207 // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnFailure_7B3ECFCE46627790F0C9B89A0D72085C(); // Function BP_GameInstance.BP_GameInstance_C.OnFailure_7B3ECFCE46627790F0C9B89A0D72085C // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnSuccess_7B3ECFCE46627790F0C9B89A0D72085C(); // Function BP_GameInstance.BP_GameInstance_C.OnSuccess_7B3ECFCE46627790F0C9B89A0D72085C // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnFailure_7B3ECFCE46627790F0C9B89A89B12120(); // Function BP_GameInstance.BP_GameInstance_C.OnFailure_7B3ECFCE46627790F0C9B89A89B12120 // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnSuccess_7B3ECFCE46627790F0C9B89A89B12120(); // Function BP_GameInstance.BP_GameInstance_C.OnSuccess_7B3ECFCE46627790F0C9B89A89B12120 // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnFailure_D72617F2470A6492F0633884F8A94A97(); // Function BP_GameInstance.BP_GameInstance_C.OnFailure_D72617F2470A6492F0633884F8A94A97 // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnSuccess_D72617F2470A6492F0633884F8A94A97(); // Function BP_GameInstance.BP_GameInstance_C.OnSuccess_D72617F2470A6492F0633884F8A94A97 // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnFailure_E6A52403462766A65D96D581DEE58F2A(); // Function BP_GameInstance.BP_GameInstance_C.OnFailure_E6A52403462766A65D96D581DEE58F2A // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnSuccess_E6A52403462766A65D96D581DEE58F2A(); // Function BP_GameInstance.BP_GameInstance_C.OnSuccess_E6A52403462766A65D96D581DEE58F2A // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnFailure_3F92037B4548E12D6DF3A4A0C91F55FB(); // Function BP_GameInstance.BP_GameInstance_C.OnFailure_3F92037B4548E12D6DF3A4A0C91F55FB // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnSuccess_3F92037B4548E12D6DF3A4A0C91F55FB(); // Function BP_GameInstance.BP_GameInstance_C.OnSuccess_3F92037B4548E12D6DF3A4A0C91F55FB // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ReceiveInit(); // Function BP_GameInstance.BP_GameInstance_C.ReceiveInit // (Event|Public|BlueprintEvent) // @ game+0x158ca90
	void JoinFriendInvite(struct FBlueprintSessionResult Session); // Function BP_GameInstance.BP_GameInstance_C.JoinFriendInvite // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnLoadComplete(struct FString MapName); // Function BP_GameInstance.BP_GameInstance_C.OnLoadComplete // (Event|Public|BlueprintEvent) // @ game+0x158ca90
	void SetEligableForRetirementAssignment(bool eligable); // Function BP_GameInstance.BP_GameInstance_C.SetEligableForRetirementAssignment // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void JoinFriendInviteWithPassword(struct FBlueprintSessionResult Session, struct FString Password); // Function BP_GameInstance.BP_GameInstance_C.JoinFriendInviteWithPassword // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnCancelJoin(); // Function BP_GameInstance.BP_GameInstance_C.OnCancelJoin // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnJoiningModded(struct FBlueprintSessionResult Session, struct FString Password); // Function BP_GameInstance.BP_GameInstance_C.OnJoiningModded // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ModdedSaveLoaded(); // Function BP_GameInstance.BP_GameInstance_C.ModdedSaveLoaded // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnSandboxAnswer(bool Yes); // Function BP_GameInstance.BP_GameInstance_C.OnSandboxAnswer // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnSaveLoaded(); // Function BP_GameInstance.BP_GameInstance_C.OnSaveLoaded // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_BP_GameInstance(int32_t EntryPoint); // Function BP_GameInstance.BP_GameInstance_C.ExecuteUbergraph_BP_GameInstance // (Final|UbergraphFunction|HasDefaults) // @ game+0x158ca90
	void OnEligibleForRetirementAssignment__DelegateSignature(struct UBP_GameInstance_C* GameInstance); // Function BP_GameInstance.BP_GameInstance_C.OnEligibleForRetirementAssignment__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnAvailableCraftingItems__DelegateSignature(struct TArray<struct TScriptInterface<None>> NewItems); // Function BP_GameInstance.BP_GameInstance_C.OnAvailableCraftingItems__DelegateSignature // (Public|Delegate|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
};

