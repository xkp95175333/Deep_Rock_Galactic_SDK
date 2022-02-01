// WidgetBlueprintGeneratedClass Basic_ToolTip.Basic_ToolTip_C
// Size: 0x288 (Inherited: 0x230)
struct UBasic_ToolTip_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* AnimFadeIn; // 0x238(0x08)
	struct UWidgetAnimation* Intro; // 0x240(0x08)
	struct UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow; // 0x248(0x08)
	struct UTextBlock* DATA_ToolTip; // 0x250(0x08)
	struct USizeBox* ToolTipSizer; // 0x258(0x08)
	struct FText Text; // 0x260(0x18)
	struct FVector2D Position; // 0x278(0x08)
	struct FVector2D Alignment; // 0x280(0x08)

	void SetTextJustification(enum class ETextJustify Justification); // Function Basic_ToolTip.Basic_ToolTip_C.SetTextJustification // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void FadeIn(float Duration); // Function Basic_ToolTip.Basic_ToolTip_C.FadeIn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetWidth(float InWidthOverride); // Function Basic_ToolTip.Basic_ToolTip_C.SetWidth // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetMaxWidth(float MaxWidth); // Function Basic_ToolTip.Basic_ToolTip_C.SetMaxWidth // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetMinWidth(float MinWidth); // Function Basic_ToolTip.Basic_ToolTip_C.SetMinWidth // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetPostionAndAlignment(struct FVector2D InPosition, struct FVector2D InAlignment); // Function Basic_ToolTip.Basic_ToolTip_C.SetPostionAndAlignment // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetText(struct FText ToolTip); // Function Basic_ToolTip.Basic_ToolTip_C.SetText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetTarget(struct UWidget* Target Widget); // Function Basic_ToolTip.Basic_ToolTip_C.SetTarget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void PreConstruct(bool IsDesignTime); // Function Basic_ToolTip.Basic_ToolTip_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void Set Tool Tip Owner(struct UWidget* Owner); // Function Basic_ToolTip.Basic_ToolTip_C.Set Tool Tip Owner // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_Basic_ToolTip(int32_t EntryPoint); // Function Basic_ToolTip.Basic_ToolTip_C.ExecuteUbergraph_Basic_ToolTip // (Final|UbergraphFunction) // @ game+0x158ca90
};

