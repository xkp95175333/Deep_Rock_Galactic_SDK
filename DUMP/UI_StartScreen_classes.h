// WidgetBlueprintGeneratedClass UI_StartScreen.UI_StartScreen_C
// Size: 0x2e8 (Inherited: 0x230)
struct UUI_StartScreen_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* FadeIn; // 0x238(0x08)
	struct UWidgetAnimation* FadeOut; // 0x240(0x08)
	struct UWidgetAnimation* BlinkText; // 0x248(0x08)
	struct UAnimatedDRGlogo_C* AnimatedDRGlogo; // 0x250(0x08)
	struct UAnimatedStaticOverlay_C* AnimatedStaticOverlay; // 0x258(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar; // 0x260(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_2; // 0x268(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_3; // 0x270(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_4; // 0x278(0x08)
	struct UBorder* Border_Glow; // 0x280(0x08)
	struct UImage* FadeOverlay; // 0x288(0x08)
	struct UImage* GhostShipLogo; // 0x290(0x08)
	struct UImage* Image_8; // 0x298(0x08)
	struct UImage* Image_64; // 0x2a0(0x08)
	struct UImage* Image_73; // 0x2a8(0x08)
	struct UImage* Image_220; // 0x2b0(0x08)
	struct UImage* Image_Background; // 0x2b8(0x08)
	struct UImage* Image_Background_Black; // 0x2c0(0x08)
	struct UImage* Image_Background_Smoke; // 0x2c8(0x08)
	struct UCircularThrobber* LogginInThrobber; // 0x2d0(0x08)
	struct UUI_AdvancedLabel_C* PressStartLabel; // 0x2d8(0x08)
	struct UTextBlock* VersionInfo; // 0x2e0(0x08)

	void FadeIt(bool FadeIn, float Duration); // Function UI_StartScreen.UI_StartScreen_C.FadeIt // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void Construct(); // Function UI_StartScreen.UI_StartScreen_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void PressStart(); // Function UI_StartScreen.UI_StartScreen_C.PressStart // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void PreConstruct(bool IsDesignTime); // Function UI_StartScreen.UI_StartScreen_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_UI_StartScreen(int32_t EntryPoint); // Function UI_StartScreen.UI_StartScreen_C.ExecuteUbergraph_UI_StartScreen // (Final|UbergraphFunction|HasDefaults) // @ game+0x158ca90
};

