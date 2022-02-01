// WidgetBlueprintGeneratedClass HUD_Countdown_Extraction.HUD_Countdown_Extraction_C
// Size: 0x250 (Inherited: 0x230)
struct UHUD_Countdown_Extraction_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBasic_HUD_BracketWindowBig_Single_C* Basic_HUD_BracketWindowBig_Single; // 0x238(0x08)
	struct UTextBlock* DATA_Header; // 0x240(0x08)
	struct UTextBlock* DATA_Time; // 0x248(0x08)

	void FormatTime(int32_t Time, struct FText Text); // Function HUD_Countdown_Extraction.HUD_Countdown_Extraction_C.FormatTime // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x158ca90
	void CountdownStarted(struct FText countdownText); // Function HUD_Countdown_Extraction.HUD_Countdown_Extraction_C.CountdownStarted // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnCountdownTimeChanged(int32_t SecondsLeft); // Function HUD_Countdown_Extraction.HUD_Countdown_Extraction_C.OnCountdownTimeChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnCountdownFinished(); // Function HUD_Countdown_Extraction.HUD_Countdown_Extraction_C.OnCountdownFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void Construct(); // Function HUD_Countdown_Extraction.HUD_Countdown_Extraction_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void PreConstruct(bool IsDesignTime); // Function HUD_Countdown_Extraction.HUD_Countdown_Extraction_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_HUD_Countdown_Extraction(int32_t EntryPoint); // Function HUD_Countdown_Extraction.HUD_Countdown_Extraction_C.ExecuteUbergraph_HUD_Countdown_Extraction // (Final|UbergraphFunction|HasDefaults) // @ game+0x158ca90
};

