// WidgetBlueprintGeneratedClass Basic_ScrollBarBox.Basic_ScrollBarBox_C
// Size: 0x278 (Inherited: 0x230)
struct UBasic_ScrollBarBox_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct USizeBox* OptionalSizeBox; // 0x238(0x08)
	struct UNamedSlot* PutStuffHere; // 0x240(0x08)
	struct UScrollBox* ScrollBox_Items; // 0x248(0x08)
	bool Always Show Scroll Bars; // 0x250(0x01)
	enum class EOrientation Orientation; // 0x251(0x01)
	char pad_252[0x2]; // 0x252(0x02)
	struct FSizeBoxSettings SizeSettings; // 0x254(0x20)
	float ScrollbarThickness; // 0x274(0x04)

	void PreConstruct(bool IsDesignTime); // Function Basic_ScrollBarBox.Basic_ScrollBarBox_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void ScrollToChild(struct UWidget* WidgetToFind, bool AnimateScroll, enum class EDescendantScrollDestination ScrollDestination); // Function Basic_ScrollBarBox.Basic_ScrollBarBox_C.ScrollToChild // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_Basic_ScrollBarBox(int32_t EntryPoint); // Function Basic_ScrollBarBox.Basic_ScrollBarBox_C.ExecuteUbergraph_Basic_ScrollBarBox // (Final|UbergraphFunction|HasDefaults) // @ game+0x158ca90
};

