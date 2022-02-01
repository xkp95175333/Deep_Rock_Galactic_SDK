// WidgetBlueprintGeneratedClass UI_CallingMolly.UI_CallingMolly_C
// Size: 0x280 (Inherited: 0x230)
struct UUI_CallingMolly_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* AnimPing; // 0x238(0x08)
	struct UWidgetAnimation* AnimShow; // 0x240(0x08)
	struct UBasic_Image_C* Molly_Image; // 0x248(0x08)
	struct USizeBox* MollySize; // 0x250(0x08)
	int32_t Size; // 0x258(0x04)
	char pad_25C[0x4]; // 0x25c(0x04)
	struct AMolly* Donkey; // 0x260(0x08)
	struct AFSDPlayerState* PlayerState; // 0x268(0x08)
	bool IsIconVisible; // 0x270(0x01)
	char pad_271[0x7]; // 0x271(0x07)
	struct FTimerHandle TimeoutHandle; // 0x278(0x08)

	void GetIsPlayerCalling(bool OutIsCalling); // Function UI_CallingMolly.UI_CallingMolly_C.GetIsPlayerCalling // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x158ca90
	void SetDonkey(struct AMolly* InDonkey); // Function UI_CallingMolly.UI_CallingMolly_C.SetDonkey // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetPlayerState(struct APlayerState* InPlayerState); // Function UI_CallingMolly.UI_CallingMolly_C.SetPlayerState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnDonkeyChanged(struct AMolly* InDonkey); // Function UI_CallingMolly.UI_CallingMolly_C.OnDonkeyChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetIconVisible(bool InVisible); // Function UI_CallingMolly.UI_CallingMolly_C.SetIconVisible // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnAnimStarted(); // Function UI_CallingMolly.UI_CallingMolly_C.OnAnimStarted // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnAnimFinished(); // Function UI_CallingMolly.UI_CallingMolly_C.OnAnimFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnCalledByChanged(struct APlayerCharacter* PlayerCharacter); // Function UI_CallingMolly.UI_CallingMolly_C.OnCalledByChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void Construct(); // Function UI_CallingMolly.UI_CallingMolly_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void PreConstruct(bool IsDesignTime); // Function UI_CallingMolly.UI_CallingMolly_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void OnTimeOut(); // Function UI_CallingMolly.UI_CallingMolly_C.OnTimeOut // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void PingIcon(); // Function UI_CallingMolly.UI_CallingMolly_C.PingIcon // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnPingFinished(); // Function UI_CallingMolly.UI_CallingMolly_C.OnPingFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_UI_CallingMolly(int32_t EntryPoint); // Function UI_CallingMolly.UI_CallingMolly_C.ExecuteUbergraph_UI_CallingMolly // (Final|UbergraphFunction) // @ game+0x158ca90
};

