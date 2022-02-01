// WidgetBlueprintGeneratedClass ITM_OverClock_Icon.ITM_Overclock_Icon_C
// Size: 0x2c8 (Inherited: 0x230)
struct UITM_Overclock_Icon_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UButton* Button_Outer; // 0x238(0x08)
	struct USizeBox* IconSizer; // 0x240(0x08)
	struct UWidgetSwitcher* IconTypeSwitcher; // 0x248(0x08)
	struct UImage* ImgFrame; // 0x250(0x08)
	struct UImage* ImgIcon; // 0x258(0x08)
	struct UITM_SkinIcon_C* ITM_SkinIcon; // 0x260(0x08)
	int32_t IconSize; // 0x268(0x04)
	char pad_26C[0x4]; // 0x26c(0x04)
	struct UTexture2D* IconTexture; // 0x270(0x08)
	enum class ENUM_MenuColors IconColor; // 0x278(0x01)
	char pad_279[0x7]; // 0x279(0x07)
	struct UTexture2D* FrameTexture; // 0x280(0x08)
	enum class ENUM_MenuColors FrameColor; // 0x288(0x01)
	bool HasTooltip; // 0x289(0x01)
	char pad_28A[0x6]; // 0x28a(0x06)
	struct FText TooltipHeader; // 0x290(0x18)
	struct FText TooltipTxt; // 0x2a8(0x18)
	struct UItemUpgrade* Overclock; // 0x2c0(0x08)

	void SetOverclockTooltip(struct UItemUpgrade* Overclock); // Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.SetOverclockTooltip // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	struct UWidget* GetOverclockTooltip(); // Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.GetOverclockTooltip // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x158ca90
	void GetFrameLinearColor(struct FLinearColor ColorAndOpacity); // Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.GetFrameLinearColor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x158ca90
	void FromSchematicType(enum class ESchematicType InType); // Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.FromSchematicType // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetCategory(struct USchematicCategory* InCategory); // Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.SetCategory // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetFrameLinearColor(struct FLinearColor Color); // Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.SetFrameLinearColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void FromUpgrade(struct UItemUpgrade* InUpgrade, struct USchematicCategory* OutSchematicCategory); // Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.FromUpgrade // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void FromSchematic(struct USchematic* InSchematic, bool ShowState); // Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.FromSchematic // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetIconColor(enum class ENUM_MenuColors Color); // Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.SetIconColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetIcon(struct UTexture2D* Value); // Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.SetIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetFrame(struct UTexture2D* Texture); // Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.SetFrame // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetFrameColor(enum class ENUM_MenuColors ColorSelector); // Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.SetFrameColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetIconSize(int32_t InSize); // Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.SetIconSize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void PreConstruct(bool IsDesignTime); // Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_ITM_Overclock_Icon(int32_t EntryPoint); // Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.ExecuteUbergraph_ITM_Overclock_Icon // (Final|UbergraphFunction) // @ game+0x158ca90
};

