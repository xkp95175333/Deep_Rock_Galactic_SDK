// WidgetBlueprintGeneratedClass UI_ModdingProgressBar.UI_ModdingProgressBar_C
// Size: 0x270 (Inherited: 0x230)
struct UUI_ModdingProgressBar_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UProgressBar* ActionProgressBar; // 0x238(0x08)
	struct USizeBox* HeightSizeBox; // 0x240(0x08)
	struct UBasic_Label_C* LabelAction; // 0x248(0x08)
	int32_t Height; // 0x250(0x04)
	bool PreviewDownloading; // 0x254(0x01)
	char pad_255[0x3]; // 0x255(0x03)
	int32_t PreviewProgress; // 0x258(0x04)
	int32_t PreviewTotal; // 0x25c(0x04)
	int32_t Width; // 0x260(0x04)
	enum class EVerticalAlignment VerticalAlignment; // 0x264(0x01)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x265(0x01)
	bool IsDownloading; // 0x266(0x01)
	char pad_267[0x1]; // 0x267(0x01)
	int32_t CurrentProgress; // 0x268(0x04)
	int32_t CurrentTotal; // 0x26c(0x04)

	void GetTotal(int32_t Total); // Function UI_ModdingProgressBar.UI_ModdingProgressBar_C.GetTotal // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x158ca90
	void Error(enum class EUGCPackageError InErrorType); // Function UI_ModdingProgressBar.UI_ModdingProgressBar_C.Error // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void FinishExtracting(); // Function UI_ModdingProgressBar.UI_ModdingProgressBar_C.FinishExtracting // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	struct FText Int2Text(int32_t Value); // Function UI_ModdingProgressBar.UI_ModdingProgressBar_C.Int2Text // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x158ca90
	void SetProgress(bool Downloading, int32_t Progress, int32_t Total); // Function UI_ModdingProgressBar.UI_ModdingProgressBar_C.SetProgress // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void PreConstruct(bool IsDesignTime); // Function UI_ModdingProgressBar.UI_ModdingProgressBar_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_UI_ModdingProgressBar(int32_t EntryPoint); // Function UI_ModdingProgressBar.UI_ModdingProgressBar_C.ExecuteUbergraph_UI_ModdingProgressBar // (Final|UbergraphFunction) // @ game+0x158ca90
};

