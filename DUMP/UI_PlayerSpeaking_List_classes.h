// WidgetBlueprintGeneratedClass UI_PlayerSpeaking_List.UI_PlayerSpeaking_List_C
// Size: 0x270 (Inherited: 0x230)
struct UUI_PlayerSpeaking_List_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UHorizontalBox* Box_Horizontal; // 0x238(0x08)
	struct UVerticalBox* Box_Vertical; // 0x240(0x08)
	struct TArray<struct UUI_PlayerSpeaking_WithName_C*> Entries; // 0x248(0x10)
	bool Vertical; // 0x258(0x01)
	char pad_259[0x7]; // 0x259(0x07)
	struct TArray<struct AFSDPlayerState*> PlayerStates; // 0x260(0x10)

	void CreateEntries(); // Function UI_PlayerSpeaking_List.UI_PlayerSpeaking_List_C.CreateEntries // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void GetPlayerStates(struct TArray<struct AFSDPlayerState*> OutStates); // Function UI_PlayerSpeaking_List.UI_PlayerSpeaking_List_C.GetPlayerStates // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x158ca90
	void GetPlayerState(int32_t Index, struct AFSDPlayerState* State); // Function UI_PlayerSpeaking_List.UI_PlayerSpeaking_List_C.GetPlayerState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x158ca90
	void PreConstruct(bool IsDesignTime); // Function UI_PlayerSpeaking_List.UI_PlayerSpeaking_List_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void Construct(); // Function UI_PlayerSpeaking_List.UI_PlayerSpeaking_List_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void UpdateEntries(); // Function UI_PlayerSpeaking_List.UI_PlayerSpeaking_List_C.UpdateEntries // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnPlayerJoined(struct AFSDPlayerState* PlayerState); // Function UI_PlayerSpeaking_List.UI_PlayerSpeaking_List_C.OnPlayerJoined // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnPlayerLeave(struct AFSDPlayerState* PlayerState); // Function UI_PlayerSpeaking_List.UI_PlayerSpeaking_List_C.OnPlayerLeave // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_UI_PlayerSpeaking_List(int32_t EntryPoint); // Function UI_PlayerSpeaking_List.UI_PlayerSpeaking_List_C.ExecuteUbergraph_UI_PlayerSpeaking_List // (Final|UbergraphFunction|HasDefaults) // @ game+0x158ca90
};

