// WidgetBlueprintGeneratedClass UI_Forge_Schematic.UI_Forge_Schematic_C
// Size: 0x318 (Inherited: 0x230)
struct UUI_Forge_Schematic_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* IconReady; // 0x238(0x08)
	struct UWidgetAnimation* AnimReveal; // 0x240(0x08)
	struct UWidgetAnimation* Hover; // 0x248(0x08)
	struct UBorder* Border_76; // 0x250(0x08)
	struct UOverlay* ContentOverlay; // 0x258(0x08)
	struct UImage* ICON_Item; // 0x260(0x08)
	struct UOverlay* IconOverlay; // 0x268(0x08)
	struct UImage* Image_92; // 0x270(0x08)
	struct UButton* ItemButton; // 0x278(0x08)
	struct UITM_CharacterIcon_C* ITM_CharacterIcon; // 0x280(0x08)
	struct UITM_MatrixCore_C* ITM_MatrixCore; // 0x288(0x08)
	struct UITM_Overclock_Icon_C* ITM_Overclock_Icon; // 0x290(0x08)
	struct UITM_ItemUnlockedIcon_C* NotificationIcon; // 0x298(0x08)
	struct UTextBlock* SchematicCategoryLabel; // 0x2a0(0x08)
	struct UUI_HorizontalResourceBar_C* SchematicCost; // 0x2a8(0x08)
	struct UTextBlock* SchematicNameLabel; // 0x2b0(0x08)
	struct UWidgetSwitcher* TypeSwitcher; // 0x2b8(0x08)
	struct UUI_Forge_Schematic_OwnerIcon_C* UI_SchematicOwnerIcon; // 0x2c0(0x08)
	struct USchematic* Schematic; // 0x2c8(0x08)
	bool Hovered; // 0x2d0(0x01)
	char pad_2D1[0x7]; // 0x2d1(0x07)
	struct FMulticastInlineDelegate OnItemHovered; // 0x2d8(0x10)
	struct FMulticastInlineDelegate OnItemUnhovered; // 0x2e8(0x10)
	struct FMulticastInlineDelegate OnItemClicked; // 0x2f8(0x10)
	bool Show Cost; // 0x308(0x01)
	bool HideIfNotForgeable; // 0x309(0x01)
	bool ShowNewItemNotification; // 0x30a(0x01)
	char pad_30B[0x5]; // 0x30b(0x05)
	struct UTextureRenderTarget2D* IconRenderTarget; // 0x310(0x08)

	void ReleaseRenderTarget(); // Function UI_Forge_Schematic.UI_Forge_Schematic_C.ReleaseRenderTarget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void PrepareRevealAnim(); // Function UI_Forge_Schematic.UI_Forge_Schematic_C.PrepareRevealAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void PlayRevealAnim(float Duration); // Function UI_Forge_Schematic.UI_Forge_Schematic_C.PlayRevealAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void GetCategory(struct USchematicCategory* Category); // Function UI_Forge_Schematic.UI_Forge_Schematic_C.GetCategory // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x158ca90
	void OnItemReset(struct USchematic* Schematic); // Function UI_Forge_Schematic.UI_Forge_Schematic_C.OnItemReset // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetHovering(bool InHovering); // Function UI_Forge_Schematic.UI_Forge_Schematic_C.SetHovering // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void TryBuildSchematic(bool success); // Function UI_Forge_Schematic.UI_Forge_Schematic_C.TryBuildSchematic // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnItemChanged(struct USchematic* Schematic); // Function UI_Forge_Schematic.UI_Forge_Schematic_C.OnItemChanged // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void GetSchematic(struct USchematic* Schematic); // Function UI_Forge_Schematic.UI_Forge_Schematic_C.GetSchematic // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x158ca90
	void Refresh(bool RefreshImage); // Function UI_Forge_Schematic.UI_Forge_Schematic_C.Refresh // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetSchematic(struct USchematic* InSchematic); // Function UI_Forge_Schematic.UI_Forge_Schematic_C.SetSchematic // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void BndEvt__ItemButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function UI_Forge_Schematic.UI_Forge_Schematic_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x158ca90
	void BndEvt__ItemButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function UI_Forge_Schematic.UI_Forge_Schematic_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x158ca90
	void BndEvt__ItemButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature(); // Function UI_Forge_Schematic.UI_Forge_Schematic_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x158ca90
	void Construct(); // Function UI_Forge_Schematic.UI_Forge_Schematic_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void PreConstruct(bool IsDesignTime); // Function UI_Forge_Schematic.UI_Forge_Schematic_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void GenerateIcon(struct UVanityItem* Item, struct UPlayerCharacterID* Character); // Function UI_Forge_Schematic.UI_Forge_Schematic_C.GenerateIcon // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_UI_Forge_Schematic(int32_t EntryPoint); // Function UI_Forge_Schematic.UI_Forge_Schematic_C.ExecuteUbergraph_UI_Forge_Schematic // (Final|UbergraphFunction) // @ game+0x158ca90
	void OnItemClicked__DelegateSignature(struct UUI_Forge_Schematic_C* Item); // Function UI_Forge_Schematic.UI_Forge_Schematic_C.OnItemClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnItemUnhovered__DelegateSignature(struct UUI_Forge_Schematic_C* Item); // Function UI_Forge_Schematic.UI_Forge_Schematic_C.OnItemUnhovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnItemHovered__DelegateSignature(struct UUI_Forge_Schematic_C* Item); // Function UI_Forge_Schematic.UI_Forge_Schematic_C.OnItemHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
};

