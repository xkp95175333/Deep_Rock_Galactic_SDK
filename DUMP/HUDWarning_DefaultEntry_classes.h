// WidgetBlueprintGeneratedClass HUDWarning_DefaultEntry.HUDWarning_DefaultEntry_C
// Size: 0x298 (Inherited: 0x250)
struct UHUDWarning_DefaultEntry_C : UHUDWarningWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct UWidgetAnimation* PingAnim; // 0x258(0x08)
	struct UImage* BG_Gradient; // 0x260(0x08)
	struct UImage* IconLeft; // 0x268(0x08)
	struct UImage* IconRight; // 0x270(0x08)
	struct UImage* Image_Main; // 0x278(0x08)
	struct UOverlay* Overlay_Outer; // 0x280(0x08)
	struct USoundBase* PingSound; // 0x288(0x08)
	bool ShouldDestroyAfterPing; // 0x290(0x01)
	char pad_291[0x3]; // 0x291(0x03)
	float TimeBetweenSound; // 0x294(0x04)

	void SetData(struct UTexture2D* Texture, struct USoundBase* PingSound); // Function HUDWarning_DefaultEntry.HUDWarning_DefaultEntry_C.SetData // (Event|Public|BlueprintEvent) // @ game+0x158ca90
	void PreConstruct(bool IsDesignTime); // Function HUDWarning_DefaultEntry.HUDWarning_DefaultEntry_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void Ping(bool DestroyAfterPing); // Function HUDWarning_DefaultEntry.HUDWarning_DefaultEntry_C.Ping // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void PingFinished(); // Function HUDWarning_DefaultEntry.HUDWarning_DefaultEntry_C.PingFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void Construct(); // Function HUDWarning_DefaultEntry.HUDWarning_DefaultEntry_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_HUDWarning_DefaultEntry(int32_t EntryPoint); // Function HUDWarning_DefaultEntry.HUDWarning_DefaultEntry_C.ExecuteUbergraph_HUDWarning_DefaultEntry // (Final|UbergraphFunction) // @ game+0x158ca90
};

