// WidgetBlueprintGeneratedClass HUD_Resources_Player_Icon.HUD_Resources_Player_Icon_C
// Size: 0x2a0 (Inherited: 0x230)
struct UHUD_Resources_Player_Icon_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* Ping; // 0x238(0x08)
	struct UWidgetAnimation* Intro; // 0x240(0x08)
	struct UWidgetAnimation* Outro; // 0x248(0x08)
	struct UBorder* BG; // 0x250(0x08)
	struct UInvalidationBox* Invalidation; // 0x258(0x08)
	struct UHUD_DefaultLabel_C* Item_Name; // 0x260(0x08)
	struct UProgressBar* ItemProgress; // 0x268(0x08)
	struct UHUD_DefaultLabel_C* ResourceAmount; // 0x270(0x08)
	struct UBasic_ResourceIcon_C* ResourceIcon; // 0x278(0x08)
	struct UCappedResource* Resource; // 0x280(0x08)
	float Amount; // 0x288(0x04)
	char pad_28C[0x4]; // 0x28c(0x04)
	struct FMulticastInlineDelegate OnResourceChanged; // 0x290(0x10)

	void UpdateIfChanged(bool Changed); // Function HUD_Resources_Player_Icon.HUD_Resources_Player_Icon_C.UpdateIfChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetAmount(float Amount, bool ValueChanged); // Function HUD_Resources_Player_Icon.HUD_Resources_Player_Icon_C.SetAmount // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void Refresh(); // Function HUD_Resources_Player_Icon.HUD_Resources_Player_Icon_C.Refresh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetResource(struct UCappedResource* InResource, bool HideIfEmpty); // Function HUD_Resources_Player_Icon.HUD_Resources_Player_Icon_C.SetResource // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnChanged(struct UCappedResource* Resource, float Amount); // Function HUD_Resources_Player_Icon.HUD_Resources_Player_Icon_C.OnChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void PreConstruct(bool IsDesignTime); // Function HUD_Resources_Player_Icon.HUD_Resources_Player_Icon_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void Construct(); // Function HUD_Resources_Player_Icon.HUD_Resources_Player_Icon_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void OnOutroFinished(); // Function HUD_Resources_Player_Icon.HUD_Resources_Player_Icon_C.OnOutroFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function HUD_Resources_Player_Icon.HUD_Resources_Player_Icon_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void OnIncreased(struct UCappedResource* Resource, float Amount); // Function HUD_Resources_Player_Icon.HUD_Resources_Player_Icon_C.OnIncreased // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void Init Resource(); // Function HUD_Resources_Player_Icon.HUD_Resources_Player_Icon_C.Init Resource // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_HUD_Resources_Player_Icon(int32_t EntryPoint); // Function HUD_Resources_Player_Icon.HUD_Resources_Player_Icon_C.ExecuteUbergraph_HUD_Resources_Player_Icon // (Final|UbergraphFunction|HasDefaults) // @ game+0x158ca90
	void OnResourceChanged__DelegateSignature(struct UHUD_Resources_Player_Icon_C* ResourceIcon); // Function HUD_Resources_Player_Icon.HUD_Resources_Player_Icon_C.OnResourceChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
};

