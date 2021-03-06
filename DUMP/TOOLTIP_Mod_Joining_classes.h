// WidgetBlueprintGeneratedClass TOOLTIP_Mod_Joining.TOOLTIP_Mod_Joining_C
// Size: 0x2d8 (Inherited: 0x230)
struct UTOOLTIP_Mod_Joining_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBasic_Label_C* Mod_ApprovalStatus_Text; // 0x238(0x08)
	struct UBasic_Label_C* Mod_Author_Text; // 0x240(0x08)
	struct UBasic_Label_C* Mod_Description_Text; // 0x248(0x08)
	struct UBasic_Label_C* Mod_Name_Text; // 0x250(0x08)
	struct UImage* Mod_Thumbnail_Image; // 0x258(0x08)
	struct UBasic_Label_C* Mod_Version_Text; // 0x260(0x08)
	struct FString ModId; // 0x268(0x10)
	struct FString Name; // 0x278(0x10)
	struct FString Version; // 0x288(0x10)
	struct FString Description; // 0x298(0x10)
	struct FString Author; // 0x2a8(0x10)
	enum class EUGCApprovalStatus ApprovalState; // 0x2b8(0x01)
	char pad_2B9[0x7]; // 0x2b9(0x07)
	struct UModioModInfoWrapper* MetaData; // 0x2c0(0x08)
	struct FString ThumbnailID; // 0x2c8(0x10)

	void SetData(struct FString InModID, struct FString InName, struct FString InVersion, struct FString InDescription, struct FString InAuthor, enum class EUGCApprovalStatus InApprovalState, bool InFetchThumbnail); // Function TOOLTIP_Mod_Joining.TOOLTIP_Mod_Joining_C.SetData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void FromMetaData(struct UModioModInfoWrapper* InMetaData); // Function TOOLTIP_Mod_Joining.TOOLTIP_Mod_Joining_C.FromMetaData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void PreConstruct(bool IsDesignTime); // Function TOOLTIP_Mod_Joining.TOOLTIP_Mod_Joining_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void LoadThumbnail(); // Function TOOLTIP_Mod_Joining.TOOLTIP_Mod_Joining_C.LoadThumbnail // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_TOOLTIP_Mod_Joining(int32_t EntryPoint); // Function TOOLTIP_Mod_Joining.TOOLTIP_Mod_Joining_C.ExecuteUbergraph_TOOLTIP_Mod_Joining // (Final|UbergraphFunction) // @ game+0x158ca90
};

