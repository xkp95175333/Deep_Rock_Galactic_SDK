// WidgetBlueprintGeneratedClass UI_PatchNotes.UI_PatchNotes_C
// Size: 0x2e8 (Inherited: 0x230)
struct UUI_PatchNotes_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBasic_Menu_SmallWindowWithHeader_Redesign_C* Basic_Menu_SmallWindowWithHeader; // 0x238(0x08)
	struct UBasic_ScrollBarBox_C* Basic_ScrollBarBox; // 0x240(0x08)
	struct URichTextBlock* PatchTextBlock; // 0x248(0x08)
	struct UBasic_ScrollArrow_C* ScrollArrow_Left; // 0x250(0x08)
	struct UBasic_ScrollArrow_C* ScrollArrow_Right; // 0x258(0x08)
	int32_t PatchNoteIndex; // 0x260(0x04)
	char pad_264[0x4]; // 0x264(0x04)
	struct TArray<struct FText> PatchNoteHeaders_Steam; // 0x268(0x10)
	struct TArray<struct FText> PatchNotes_Steam; // 0x278(0x10)
	struct TArray<struct FText> PatchNoteHeaders_Xbox; // 0x288(0x10)
	struct TArray<struct FText> PatchNotes_Xbox; // 0x298(0x10)
	struct TArray<struct FText> Headers; // 0x2a8(0x10)
	struct TArray<struct FText> Notes; // 0x2b8(0x10)
	struct TArray<struct FText> PatchNoteHeaders_Sony; // 0x2c8(0x10)
	struct TArray<struct FText> PatchNotes_Sony; // 0x2d8(0x10)

	struct TArray<struct FText> SelectByPlatform(struct TArray<struct FText> Default, struct TArray<struct FText> Xbox, struct TArray<struct FText> Sony); // Function UI_PatchNotes.UI_PatchNotes_C.SelectByPlatform // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x158ca90
	void UpdatePatchNotes(); // Function UI_PatchNotes.UI_PatchNotes_C.UpdatePatchNotes // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void PreConstruct(bool IsDesignTime); // Function UI_PatchNotes.UI_PatchNotes_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void BndEvt__ScrollArrow_Left_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(); // Function UI_PatchNotes.UI_PatchNotes_C.BndEvt__ScrollArrow_Left_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x158ca90
	void BndEvt__ScrollArrow_Right_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(); // Function UI_PatchNotes.UI_PatchNotes_C.BndEvt__ScrollArrow_Right_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_UI_PatchNotes(int32_t EntryPoint); // Function UI_PatchNotes.UI_PatchNotes_C.ExecuteUbergraph_UI_PatchNotes // (Final|UbergraphFunction|HasDefaults) // @ game+0x158ca90
};

