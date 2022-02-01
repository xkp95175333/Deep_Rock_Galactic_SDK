// BlueprintGeneratedClass Bp_StartMenu_PlayerController.Bp_StartMenu_PlayerController_C
// Size: 0x620 (Inherited: 0x5c8)
struct ABp_StartMenu_PlayerController_C : AFSDPlayerControllerBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5c8(0x08)
	struct UUI_StartScreen_C* StartScreen; // 0x5d0(0x08)
	struct UWidget* ActiveScreen; // 0x5d8(0x08)
	struct UWND_Joining_C* JoinWidget; // 0x5e0(0x08)
	bool AcceptInput; // 0x5e8(0x01)
	char pad_5E9[0x7]; // 0x5e9(0x07)
	struct UUI_Disconnect_Screen_Base_C* Disconnect; // 0x5f0(0x08)
	bool Joining; // 0x5f8(0x01)
	bool SignInGate; // 0x5f9(0x01)
	char pad_5FA[0x6]; // 0x5fa(0x06)
	struct UUI_SteamLoading_C* UI Steam Loading; // 0x600(0x08)
	bool SteamLoadingUI; // 0x608(0x01)
	bool ReloadOnlineSubsystem; // 0x609(0x01)
	char pad_60A[0x6]; // 0x60a(0x06)
	struct TArray<struct UNiagaraComponent*> SpawnedParticles; // 0x610(0x10)

	void ShouldPromptUserToDeleteMainSaves(bool Should, struct TArray<struct UFSDSaveGame*> outMainSaves); // Function Bp_StartMenu_PlayerController.Bp_StartMenu_PlayerController_C.ShouldPromptUserToDeleteMainSaves // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x158ca90
	void Prompt Delete Main Save(struct TArray<struct UFSDSaveGame*> Saves); // Function Bp_StartMenu_PlayerController.Bp_StartMenu_PlayerController_C.Prompt Delete Main Save // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnModdedSaveCancelled(); // Function Bp_StartMenu_PlayerController.Bp_StartMenu_PlayerController_C.OnModdedSaveCancelled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ModdingSavegameCheck(bool ShouldContinue); // Function Bp_StartMenu_PlayerController.Bp_StartMenu_PlayerController_C.ModdingSavegameCheck // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	bool ShouldSkipInfoScreen(); // Function Bp_StartMenu_PlayerController.Bp_StartMenu_PlayerController_C.ShouldSkipInfoScreen // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x158ca90
	void JoinInvite(); // Function Bp_StartMenu_PlayerController.Bp_StartMenu_PlayerController_C.JoinInvite // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OpenGameLevel(); // Function Bp_StartMenu_PlayerController.Bp_StartMenu_PlayerController_C.OpenGameLevel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void DetectControllerMovement(float A); // Function Bp_StartMenu_PlayerController.Bp_StartMenu_PlayerController_C.DetectControllerMovement // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void DetectMouseMovement(float A); // Function Bp_StartMenu_PlayerController.Bp_StartMenu_PlayerController_C.DetectMouseMovement // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void Cleanup(); // Function Bp_StartMenu_PlayerController.Bp_StartMenu_PlayerController_C.Cleanup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void InpActEvt_AnyKey_K2Node_InputKeyEvent_1(struct FKey Key); // Function Bp_StartMenu_PlayerController.Bp_StartMenu_PlayerController_C.InpActEvt_AnyKey_K2Node_InputKeyEvent_1 // (BlueprintEvent) // @ game+0x158ca90
	void OnFailure_04D1FF9C451C776CE714DD955E807494(); // Function Bp_StartMenu_PlayerController.Bp_StartMenu_PlayerController_C.OnFailure_04D1FF9C451C776CE714DD955E807494 // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnSuccess_04D1FF9C451C776CE714DD955E807494(struct FBlueprintSessionResult Result); // Function Bp_StartMenu_PlayerController.Bp_StartMenu_PlayerController_C.OnSuccess_04D1FF9C451C776CE714DD955E807494 // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnFailure_A64EBA1647E90DBDF8B6D99030E3E0D5(); // Function Bp_StartMenu_PlayerController.Bp_StartMenu_PlayerController_C.OnFailure_A64EBA1647E90DBDF8B6D99030E3E0D5 // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnSuccess_A64EBA1647E90DBDF8B6D99030E3E0D5(); // Function Bp_StartMenu_PlayerController.Bp_StartMenu_PlayerController_C.OnSuccess_A64EBA1647E90DBDF8B6D99030E3E0D5 // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnLoaded_7CBF629D4A9F4FCA015C509A1D6E8A59(struct UObject* Loaded); // Function Bp_StartMenu_PlayerController.Bp_StartMenu_PlayerController_C.OnLoaded_7CBF629D4A9F4FCA015C509A1D6E8A59 // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnLoaded_5BEC96E84FBD6958EFD47D9A09FD96A9(struct UObject* Loaded); // Function Bp_StartMenu_PlayerController.Bp_StartMenu_PlayerController_C.OnLoaded_5BEC96E84FBD6958EFD47D9A09FD96A9 // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnLoaded_7CBF629D4A9F4FCA015C509AA9E0F545(struct UObject* Loaded); // Function Bp_StartMenu_PlayerController.Bp_StartMenu_PlayerController_C.OnLoaded_7CBF629D4A9F4FCA015C509AA9E0F545 // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnLoaded_7CBF629D4A9F4FCA015C509A49AA71BD(struct UObject* Loaded); // Function Bp_StartMenu_PlayerController.Bp_StartMenu_PlayerController_C.OnLoaded_7CBF629D4A9F4FCA015C509A49AA71BD // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ReceiveBeginPlay(); // Function Bp_StartMenu_PlayerController.Bp_StartMenu_PlayerController_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x158ca90
	void PressStart(); // Function Bp_StartMenu_PlayerController.Bp_StartMenu_PlayerController_C.PressStart // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnClose_Event_1(struct UUI_InfoScreen_C* Screen); // Function Bp_StartMenu_PlayerController.Bp_StartMenu_PlayerController_C.OnClose_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_1(float AxisValue); // Function Bp_StartMenu_PlayerController.Bp_StartMenu_PlayerController_C.InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_1 // (BlueprintEvent) // @ game+0x158ca90
	void InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_2(float AxisValue); // Function Bp_StartMenu_PlayerController.Bp_StartMenu_PlayerController_C.InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_2 // (BlueprintEvent) // @ game+0x158ca90
	void InpAxisKeyEvt_Gamepad_LeftX_K2Node_InputAxisKeyEvent_18(float AxisValue); // Function Bp_StartMenu_PlayerController.Bp_StartMenu_PlayerController_C.InpAxisKeyEvt_Gamepad_LeftX_K2Node_InputAxisKeyEvent_18 // (BlueprintEvent) // @ game+0x158ca90
	void InpAxisKeyEvt_Gamepad_LeftY_K2Node_InputAxisKeyEvent_64(float AxisValue); // Function Bp_StartMenu_PlayerController.Bp_StartMenu_PlayerController_C.InpAxisKeyEvt_Gamepad_LeftY_K2Node_InputAxisKeyEvent_64 // (BlueprintEvent) // @ game+0x158ca90
	void InpAxisKeyEvt_Gamepad_RightX_K2Node_InputAxisKeyEvent_72(float AxisValue); // Function Bp_StartMenu_PlayerController.Bp_StartMenu_PlayerController_C.InpAxisKeyEvt_Gamepad_RightX_K2Node_InputAxisKeyEvent_72 // (BlueprintEvent) // @ game+0x158ca90
	void InpAxisKeyEvt_Gamepad_RightY_K2Node_InputAxisKeyEvent_77(float AxisValue); // Function Bp_StartMenu_PlayerController.Bp_StartMenu_PlayerController_C.InpAxisKeyEvt_Gamepad_RightY_K2Node_InputAxisKeyEvent_77 // (BlueprintEvent) // @ game+0x158ca90
	void ReceiveTick(float DeltaSeconds); // Function Bp_StartMenu_PlayerController.Bp_StartMenu_PlayerController_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x158ca90
	void NetworkErrorAccepted(); // Function Bp_StartMenu_PlayerController.Bp_StartMenu_PlayerController_C.NetworkErrorAccepted // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnCloseInfoscreen(struct UUI_InfoScreen_Xbox_C* Screen); // Function Bp_StartMenu_PlayerController.Bp_StartMenu_PlayerController_C.OnCloseInfoscreen // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void AttempReconnect(bool Yes); // Function Bp_StartMenu_PlayerController.Bp_StartMenu_PlayerController_C.AttempReconnect // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void CustomEvent_1(struct UUI_InfoScreen_Xbox_C* Screen); // Function Bp_StartMenu_PlayerController.Bp_StartMenu_PlayerController_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnFailedJoiningInvite(); // Function Bp_StartMenu_PlayerController.Bp_StartMenu_PlayerController_C.OnFailedJoiningInvite // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnModdedSaveChosen(); // Function Bp_StartMenu_PlayerController.Bp_StartMenu_PlayerController_C.OnModdedSaveChosen // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OneMainSaveLeft(); // Function Bp_StartMenu_PlayerController.Bp_StartMenu_PlayerController_C.OneMainSaveLeft // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void GenerateNiagaraShaders(); // Function Bp_StartMenu_PlayerController.Bp_StartMenu_PlayerController_C.GenerateNiagaraShaders // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void NiagaraGenrationDone(); // Function Bp_StartMenu_PlayerController.Bp_StartMenu_PlayerController_C.NiagaraGenrationDone // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_Bp_StartMenu_PlayerController(int32_t EntryPoint); // Function Bp_StartMenu_PlayerController.Bp_StartMenu_PlayerController_C.ExecuteUbergraph_Bp_StartMenu_PlayerController // (Final|UbergraphFunction|HasDefaults) // @ game+0x158ca90
};

