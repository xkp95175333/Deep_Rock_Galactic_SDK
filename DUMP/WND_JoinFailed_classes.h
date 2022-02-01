// WidgetBlueprintGeneratedClass WND_JoinFailed.WND_JoinFailed_C
// Size: 0x2a8 (Inherited: 0x270)
struct UWND_JoinFailed_C : UWindowWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UBasic_Menu_MinimalWindow_C* BasicWindow_Minimal; // 0x278(0x08)
	struct UBlurBackground_C* BlurBackground; // 0x280(0x08)
	struct UBasic_ButtonScalable2_C* BTN_Cancel; // 0x288(0x08)
	struct UTextBlock* DisconnectReasonText; // 0x290(0x08)
	struct UTextBlock* ErrorCode; // 0x298(0x08)
	struct UTextBlock* TextBlock_129; // 0x2a0(0x08)

	void OnFailure_EF9B242446B45E709293BAB20166BCB2(); // Function WND_JoinFailed.WND_JoinFailed_C.OnFailure_EF9B242446B45E709293BAB20166BCB2 // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnSuccess_EF9B242446B45E709293BAB20166BCB2(); // Function WND_JoinFailed.WND_JoinFailed_C.OnSuccess_EF9B242446B45E709293BAB20166BCB2 // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void BndEvt__Button_Close_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function WND_JoinFailed.WND_JoinFailed_C.BndEvt__Button_Close_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x158ca90
	void PreConstruct(bool IsDesignTime); // Function WND_JoinFailed.WND_JoinFailed_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void Cancel(); // Function WND_JoinFailed.WND_JoinFailed_C.Cancel // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnShown(); // Function WND_JoinFailed.WND_JoinFailed_C.OnShown // (Event|Protected|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_WND_JoinFailed(int32_t EntryPoint); // Function WND_JoinFailed.WND_JoinFailed_C.ExecuteUbergraph_WND_JoinFailed // (Final|UbergraphFunction|HasDefaults) // @ game+0x158ca90
};

