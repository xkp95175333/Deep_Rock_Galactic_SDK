// WidgetBlueprintGeneratedClass HUD_ThrowCarriable.HUD_ThrowCarriable_C
// Size: 0x278 (Inherited: 0x250)
struct UHUD_ThrowCarriable_C : UFSDUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct UProgressBar* HoldingProgressL; // 0x258(0x08)
	struct UProgressBar* HoldingProgressR; // 0x260(0x08)
	struct UHorizontalBox* HorizontalBox_1; // 0x268(0x08)
	struct UInvalidationBox* Invalidation; // 0x270(0x08)

	void Construct(); // Function HUD_ThrowCarriable.HUD_ThrowCarriable_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void OnThrowCarriableProgress_Event(float Progress, float timeToCancel, bool isDone); // Function HUD_ThrowCarriable.HUD_ThrowCarriable_C.OnThrowCarriableProgress_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_HUD_ThrowCarriable(int32_t EntryPoint); // Function HUD_ThrowCarriable.HUD_ThrowCarriable_C.ExecuteUbergraph_HUD_ThrowCarriable // (Final|UbergraphFunction) // @ game+0x158ca90
};

