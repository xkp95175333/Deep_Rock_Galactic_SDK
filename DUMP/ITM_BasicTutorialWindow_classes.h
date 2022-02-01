// WidgetBlueprintGeneratedClass ITM_BasicTutorialWindow.ITM_BasicTutorialWindow_C
// Size: 0x2d1 (Inherited: 0x230)
struct UITM_BasicTutorialWindow_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* TaskProgress; // 0x238(0x08)
	struct UWidgetAnimation* CompleteAnim; // 0x240(0x08)
	struct UWidgetAnimation* RemoveAnim; // 0x248(0x08)
	struct UBasic_CheckBox_C* Basic_CheckBox; // 0x250(0x08)
	struct UBorder* Border_Checkbox; // 0x258(0x08)
	struct UHorizontalBox* HorizontalBox_TaskBar; // 0x260(0x08)
	struct UImage* Image_80; // 0x268(0x08)
	struct UImage* Image_BG; // 0x270(0x08)
	struct UImage* Image_ColorBar; // 0x278(0x08)
	struct UImage* Image_Tutorial; // 0x280(0x08)
	struct URichTextSizable* MainText; // 0x288(0x08)
	struct UOverlay* Overlay_ContentHolder; // 0x290(0x08)
	struct URichTextSizable* TaskCounter; // 0x298(0x08)
	struct URichTextSizable* TaskText; // 0x2a0(0x08)
	struct UTextBlock* TextHeadline; // 0x2a8(0x08)
	struct FMulticastInlineDelegate CompleteAnimationFinished; // 0x2b0(0x10)
	struct FMulticastInlineDelegate RemoveAnimationFinished; // 0x2c0(0x10)
	bool TaskVisible; // 0x2d0(0x01)

	void SetText(struct FText Header, struct FText MainText, struct FText TaskText); // Function ITM_BasicTutorialWindow.ITM_BasicTutorialWindow_C.SetText // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void PlayRemove(); // Function ITM_BasicTutorialWindow.ITM_BasicTutorialWindow_C.PlayRemove // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void PlayShow(); // Function ITM_BasicTutorialWindow.ITM_BasicTutorialWindow_C.PlayShow // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void PlayComplete(); // Function ITM_BasicTutorialWindow.ITM_BasicTutorialWindow_C.PlayComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void CompleteAnimFinished(); // Function ITM_BasicTutorialWindow.ITM_BasicTutorialWindow_C.CompleteAnimFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetImage(struct UTexture2D* Texture); // Function ITM_BasicTutorialWindow.ITM_BasicTutorialWindow_C.SetImage // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void PlayTaskProgress(); // Function ITM_BasicTutorialWindow.ITM_BasicTutorialWindow_C.PlayTaskProgress // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetTaskCounter(int32_t Counter, int32_t Denominator); // Function ITM_BasicTutorialWindow.ITM_BasicTutorialWindow_C.SetTaskCounter // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_ITM_BasicTutorialWindow(int32_t EntryPoint); // Function ITM_BasicTutorialWindow.ITM_BasicTutorialWindow_C.ExecuteUbergraph_ITM_BasicTutorialWindow // (Final|UbergraphFunction|HasDefaults) // @ game+0x158ca90
	void RemoveAnimationFinished__DelegateSignature(); // Function ITM_BasicTutorialWindow.ITM_BasicTutorialWindow_C.RemoveAnimationFinished__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void CompleteAnimationFinished__DelegateSignature(); // Function ITM_BasicTutorialWindow.ITM_BasicTutorialWindow_C.CompleteAnimationFinished__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
};

