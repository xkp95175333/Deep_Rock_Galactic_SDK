// WidgetBlueprintGeneratedClass ITM_SkinIcon.ITM_SkinIcon_C
// Size: 0x28a (Inherited: 0x230)
struct UITM_SkinIcon_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UImage* DefaultItem; // 0x238(0x08)
	struct UUI_DLC_Indicator_C* DLC_Indicator; // 0x240(0x08)
	struct USizeBox* IconSizer; // 0x248(0x08)
	struct UImage* PaintBucketOverlay; // 0x250(0x08)
	struct UImage* SkinIcon; // 0x258(0x08)
	struct UItemSkin* Skin; // 0x260(0x08)
	float Size; // 0x268(0x04)
	bool IsLocked; // 0x26c(0x01)
	bool IsDefault; // 0x26d(0x01)
	bool ShowBucket; // 0x26e(0x01)
	char pad_26F[0x1]; // 0x26f(0x01)
	struct UMaterialInstanceDynamic* Material; // 0x270(0x08)
	struct FLinearColor OutlineTint; // 0x278(0x10)
	enum class ENUM_SkinWidgetTypes BucketIcon; // 0x288(0x01)
	bool ShowDLC; // 0x289(0x01)

	void SetIconColor(struct FLinearColor InColorAndOpacity); // Function ITM_SkinIcon.ITM_SkinIcon_C.SetIconColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetBucketVisibility(bool ShowBucket); // Function ITM_SkinIcon.ITM_SkinIcon_C.SetBucketVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetOutlineTint(struct FLinearColor Color); // Function ITM_SkinIcon.ITM_SkinIcon_C.SetOutlineTint // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void GetIsLocked(bool IsLocked); // Function ITM_SkinIcon.ITM_SkinIcon_C.GetIsLocked // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x158ca90
	void SetSize(float InSize); // Function ITM_SkinIcon.ITM_SkinIcon_C.SetSize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetFromMaterial(struct UMaterialInterface* inMaterial, bool inIsLocked, bool InIsDefault, enum class ENUM_SkinWidgetTypes InBucketIcon); // Function ITM_SkinIcon.ITM_SkinIcon_C.SetFromMaterial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetSkin(struct UItemSkin* InSkin, bool inIsLocked, bool InIsDefault); // Function ITM_SkinIcon.ITM_SkinIcon_C.SetSkin // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void PreConstruct(bool IsDesignTime); // Function ITM_SkinIcon.ITM_SkinIcon_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_ITM_SkinIcon(int32_t EntryPoint); // Function ITM_SkinIcon.ITM_SkinIcon_C.ExecuteUbergraph_ITM_SkinIcon // (Final|UbergraphFunction) // @ game+0x158ca90
};

