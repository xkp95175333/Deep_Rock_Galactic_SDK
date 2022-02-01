// WidgetBlueprintGeneratedClass MissionControl_TextAnimator.MissionControl_TextAnimator_C
// Size: 0x2a4 (Inherited: 0x230)
struct UMissionControl_TextAnimator_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* AnimTextRun; // 0x238(0x08)
	struct URichTextBlock* TextBlock; // 0x240(0x08)
	struct FText Text; // 0x248(0x18)
	struct FRichTextParseResult Parser; // 0x260(0x40)
	float AnimProgress; // 0x2a0(0x04)

	void GetFirstWord(struct FString inString, struct FString OutWord); // Function MissionControl_TextAnimator.MissionControl_TextAnimator_C.GetFirstWord // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x158ca90
	void SetAnimProgress(float AnimProgress); // Function MissionControl_TextAnimator.MissionControl_TextAnimator_C.SetAnimProgress // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetText(struct FText InText, int32_t Unformatted Length); // Function MissionControl_TextAnimator.MissionControl_TextAnimator_C.SetText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void PreConstruct(bool IsDesignTime); // Function MissionControl_TextAnimator.MissionControl_TextAnimator_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_MissionControl_TextAnimator(int32_t EntryPoint); // Function MissionControl_TextAnimator.MissionControl_TextAnimator_C.ExecuteUbergraph_MissionControl_TextAnimator // (Final|UbergraphFunction) // @ game+0x158ca90
};

