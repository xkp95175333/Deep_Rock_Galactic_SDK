// WidgetBlueprintGeneratedClass ScreenOverlay_GenericAffliction.ScreenOverlay_GenericAffliction_C
// Size: 0x25c (Inherited: 0x240)
struct UScreenOverlay_GenericAffliction_C : UPlayerAfflictionOverlayWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x240(0x08)
	struct UWidgetAnimation* AnimFading; // 0x248(0x08)
	struct UImage* AfflictionImage; // 0x250(0x08)
	float FadeDuration; // 0x258(0x04)

	void Construct(); // Function ScreenOverlay_GenericAffliction.ScreenOverlay_GenericAffliction_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void ReceiveBeginOverlay(struct UTexture2D* InTexture, struct FLinearColor InTint); // Function ScreenOverlay_GenericAffliction.ScreenOverlay_GenericAffliction_C.ReceiveBeginOverlay // (Event|Protected|BlueprintEvent) // @ game+0x158ca90
	void ReceiveEndOverlay(); // Function ScreenOverlay_GenericAffliction.ScreenOverlay_GenericAffliction_C.ReceiveEndOverlay // (Event|Protected|BlueprintEvent) // @ game+0x158ca90
	void Play Fade(enum class EUMGSequencePlayMode PlayMode); // Function ScreenOverlay_GenericAffliction.ScreenOverlay_GenericAffliction_C.Play Fade // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnAnimFadingFinished(); // Function ScreenOverlay_GenericAffliction.ScreenOverlay_GenericAffliction_C.OnAnimFadingFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_ScreenOverlay_GenericAffliction(int32_t EntryPoint); // Function ScreenOverlay_GenericAffliction.ScreenOverlay_GenericAffliction_C.ExecuteUbergraph_ScreenOverlay_GenericAffliction // (Final|UbergraphFunction|HasDefaults) // @ game+0x158ca90
};

