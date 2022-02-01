// WidgetBlueprintGeneratedClass UI_BlackOverlay.UI_BlackOverlay_C
// Size: 0x278 (Inherited: 0x230)
struct UUI_BlackOverlay_C : UFSDLevelLoadingPersistentWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UImage* FullscreenImage; // 0x238(0x08)
	struct UUI_AdvancedLabel_C* LoaderText; // 0x240(0x08)
	struct UUI_PlayerSpeaking_List_C* PlayersSpeaking; // 0x248(0x08)
	struct UImage* ScaledImage; // 0x250(0x08)
	struct UImage* Shadow; // 0x258(0x08)
	struct UOverlay* TextOverlay; // 0x260(0x08)
	float Fade; // 0x268(0x04)
	bool ToSpaceRig; // 0x26c(0x01)
	char pad_26D[0x3]; // 0x26d(0x03)
	struct UTexture* loadingImage; // 0x270(0x08)

	void SetProgress(float InFade, bool InToSpacerig, struct UTexture* InLoadingImage); // Function UI_BlackOverlay.UI_BlackOverlay_C.SetProgress // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void PreConstruct(bool IsDesignTime); // Function UI_BlackOverlay.UI_BlackOverlay_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void SetFadeProgress(float Fade, bool ToSpaceRig, struct UTexture* loadingImage); // Function UI_BlackOverlay.UI_BlackOverlay_C.SetFadeProgress // (Event|Public|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_UI_BlackOverlay(int32_t EntryPoint); // Function UI_BlackOverlay.UI_BlackOverlay_C.ExecuteUbergraph_UI_BlackOverlay // (Final|UbergraphFunction) // @ game+0x158ca90
};

