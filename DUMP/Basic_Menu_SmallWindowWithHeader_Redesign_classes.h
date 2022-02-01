// WidgetBlueprintGeneratedClass Basic_Menu_SmallWindowWithHeader_Redesign.Basic_Menu_SmallWindowWithHeader_Redesign_C
// Size: 0x55b (Inherited: 0x230)
struct UBasic_Menu_SmallWindowWithHeader_Redesign_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar; // 0x238(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_1; // 0x240(0x08)
	struct UBorder* Brackets; // 0x248(0x08)
	struct USizeBox* CornerDoubleBars_Left; // 0x250(0x08)
	struct USizeBox* CornerDoubleBars_Right; // 0x258(0x08)
	struct UTextBlock* Counter; // 0x260(0x08)
	struct UTextBlock* DATA_headerText; // 0x268(0x08)
	struct UBorder* DoubleBar_Left1; // 0x270(0x08)
	struct UBorder* DoubleBar_Left2; // 0x278(0x08)
	struct UBorder* DoubleBar_Right1; // 0x280(0x08)
	struct UBorder* DoubleBar_Right2; // 0x288(0x08)
	struct UBorder* HeaderBG; // 0x290(0x08)
	struct UBorder* MainBG; // 0x298(0x08)
	struct UNamedSlot* PutStuffHere; // 0x2a0(0x08)
	struct UButton* WindowButton; // 0x2a8(0x08)
	struct FText HeaderText; // 0x2b0(0x18)
	bool ShowCounter; // 0x2c8(0x01)
	bool WindowIsButton; // 0x2c9(0x01)
	char pad_2CA[0x6]; // 0x2ca(0x06)
	struct FMulticastInlineDelegate On Clicked; // 0x2d0(0x10)
	struct FButtonStyle ButtonStyle; // 0x2e0(0x278)
	bool Brackets Active; // 0x558(0x01)
	bool SidesActive; // 0x559(0x01)
	enum class ENUM_MenuColors HeaderColor; // 0x55a(0x01)

	void SetHeaderText(struct FText NewHeaderText); // Function Basic_Menu_SmallWindowWithHeader_Redesign.Basic_Menu_SmallWindowWithHeader_Redesign_C.SetHeaderText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	bool IsHovering(); // Function Basic_Menu_SmallWindowWithHeader_Redesign.Basic_Menu_SmallWindowWithHeader_Redesign_C.IsHovering // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x158ca90
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function Basic_Menu_SmallWindowWithHeader_Redesign.Basic_Menu_SmallWindowWithHeader_Redesign_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x158ca90
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function Basic_Menu_SmallWindowWithHeader_Redesign.Basic_Menu_SmallWindowWithHeader_Redesign_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x158ca90
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature(); // Function Basic_Menu_SmallWindowWithHeader_Redesign.Basic_Menu_SmallWindowWithHeader_Redesign_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x158ca90
	void PreConstruct(bool IsDesignTime); // Function Basic_Menu_SmallWindowWithHeader_Redesign.Basic_Menu_SmallWindowWithHeader_Redesign_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void SetCounterText(struct FText InText); // Function Basic_Menu_SmallWindowWithHeader_Redesign.Basic_Menu_SmallWindowWithHeader_Redesign_C.SetCounterText // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_Basic_Menu_SmallWindowWithHeader_Redesign(int32_t EntryPoint); // Function Basic_Menu_SmallWindowWithHeader_Redesign.Basic_Menu_SmallWindowWithHeader_Redesign_C.ExecuteUbergraph_Basic_Menu_SmallWindowWithHeader_Redesign // (Final|UbergraphFunction|HasDefaults) // @ game+0x158ca90
	void On Clicked__DelegateSignature(); // Function Basic_Menu_SmallWindowWithHeader_Redesign.Basic_Menu_SmallWindowWithHeader_Redesign_C.On Clicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
};

