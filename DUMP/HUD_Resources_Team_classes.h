// WidgetBlueprintGeneratedClass HUD_Resources_Team.HUD_Resources_Team_C
// Size: 0x289 (Inherited: 0x230)
struct UHUD_Resources_Team_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* Transition; // 0x238(0x08)
	struct UBasic_HUD_BracketWindowBig_Single_C* Basic_HUD_BracketWindowBig_Single; // 0x240(0x08)
	struct UVerticalBox* IconParentBottom; // 0x248(0x08)
	struct UVerticalBox* IconParentTop; // 0x250(0x08)
	struct UBorder* SplitterBar; // 0x258(0x08)
	struct UTextBlock* TEXT_Empty; // 0x260(0x08)
	struct UTextBlock* TEXT_Header; // 0x268(0x08)
	struct APlayerCharacter* Character; // 0x270(0x08)
	struct UResourcesComponent* ResourceComponent; // 0x278(0x08)
	bool DoIntroAnim; // 0x280(0x01)
	char pad_281[0x3]; // 0x281(0x03)
	int32_t WidgetHideLock; // 0x284(0x04)
	bool Pinging; // 0x288(0x01)

	void IsObjectiveResource(struct UCappedResource* InResource, bool IsObjective, struct UCappedResource* OutResource); // Function HUD_Resources_Team.HUD_Resources_Team_C.IsObjectiveResource // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void Construct(); // Function HUD_Resources_Team.HUD_Resources_Team_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void PreConstruct(bool IsDesignTime); // Function HUD_Resources_Team.HUD_Resources_Team_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void Add Resource(struct UCappedResource* Resource); // Function HUD_Resources_Team.HUD_Resources_Team_C.Add Resource // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void Show Widget(); // Function HUD_Resources_Team.HUD_Resources_Team_C.Show Widget // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void Hide Widget(); // Function HUD_Resources_Team.HUD_Resources_Team_C.Hide Widget // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void Ping Widget(); // Function HUD_Resources_Team.HUD_Resources_Team_C.Ping Widget // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnTransitionFinished(); // Function HUD_Resources_Team.HUD_Resources_Team_C.OnTransitionFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnDepositingEnd_Event(struct UResourceBank* ResourceBank); // Function HUD_Resources_Team.HUD_Resources_Team_C.OnDepositingEnd_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnDepositingBegin_Event(struct UResourceBank* ResourceBank); // Function HUD_Resources_Team.HUD_Resources_Team_C.OnDepositingBegin_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnResourceChanged_Event(struct UCappedResource* Resource, float Amount); // Function HUD_Resources_Team.HUD_Resources_Team_C.OnResourceChanged_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnResourceAdded(struct UCappedResource* Resource); // Function HUD_Resources_Team.HUD_Resources_Team_C.OnResourceAdded // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnToggleOutline_Event(bool Visible); // Function HUD_Resources_Team.HUD_Resources_Team_C.OnToggleOutline_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_HUD_Resources_Team(int32_t EntryPoint); // Function HUD_Resources_Team.HUD_Resources_Team_C.ExecuteUbergraph_HUD_Resources_Team // (Final|UbergraphFunction|HasDefaults) // @ game+0x158ca90
};

