// WidgetBlueprintGeneratedClass Basic_Image.Basic_Image_C
// Size: 0x440 (Inherited: 0x230)
struct UBasic_Image_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* AnimFadeIn; // 0x238(0x08)
	struct UImage* ImageComponent; // 0x240(0x08)
	struct FSlateBrush Brush; // 0x248(0x88)
	enum class ENUM_MenuColors Tint; // 0x2d0(0x01)
	char pad_2D1[0x3]; // 0x2d1(0x03)
	float TintOpacity; // 0x2d4(0x04)
	struct TMap<struct FName, float> Scalars; // 0x2d8(0x50)
	struct TMap<struct FName, struct FLinearColor> Vectors; // 0x328(0x50)
	struct TMap<struct FName, struct TSoftObjectPtr<struct UTexture>> Textures; // 0x378(0x50)
	struct TMap<struct FName, struct FMenuColorAndOpacity> MenuColors; // 0x3c8(0x50)
	struct FText BasicToolTipText; // 0x418(0x18)
	struct FVector2D BasicToolTipPosition; // 0x430(0x08)
	struct FVector2D BasicToolTipAlignment; // 0x438(0x08)

	void SetBasicToolTip(struct FText BasicToolTipText, struct FVector2D BasicToolTipPosition, struct FVector2D BasicToolTipAlignment); // Function Basic_Image.Basic_Image_C.SetBasicToolTip // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	struct UWidget* GetBasicToolTip(); // Function Basic_Image.Basic_Image_C.GetBasicToolTip // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x158ca90
	void SetDynamicMaterialValues(); // Function Basic_Image.Basic_Image_C.SetDynamicMaterialValues // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetDynamicMaterialTexture(struct FName ParameterName, struct UTexture* Value); // Function Basic_Image.Basic_Image_C.SetDynamicMaterialTexture // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetDynamicMaterialVector(struct FName ParameterName, struct FLinearColor Value); // Function Basic_Image.Basic_Image_C.SetDynamicMaterialVector // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetDynamicMaterialScalar(struct FName ParameterName, float Value); // Function Basic_Image.Basic_Image_C.SetDynamicMaterialScalar // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void FadeOut(float InDuration); // Function Basic_Image.Basic_Image_C.FadeOut // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void FadeIn(float InDuration); // Function Basic_Image.Basic_Image_C.FadeIn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void GetBrushSize(struct FVector2D Brush Image Size); // Function Basic_Image.Basic_Image_C.GetBrushSize // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x158ca90
	void SetBrushSize(struct FVector2D DesiredSize); // Function Basic_Image.Basic_Image_C.SetBrushSize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	struct UMaterialInstanceDynamic* GetDynamicMaterial(); // Function Basic_Image.Basic_Image_C.GetDynamicMaterial // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x158ca90
	void SetTintAndOpacity(enum class ENUM_MenuColors InTint, float InTintOpacity); // Function Basic_Image.Basic_Image_C.SetTintAndOpacity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetTintOpacity(float InOpacity); // Function Basic_Image.Basic_Image_C.SetTintOpacity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetTint(enum class ENUM_MenuColors InTint); // Function Basic_Image.Basic_Image_C.SetTint // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetBrushFromTexture(struct UTexture2D* Texture, bool bMatchSize); // Function Basic_Image.Basic_Image_C.SetBrushFromTexture // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetBrush(struct FSlateBrush InBrush); // Function Basic_Image.Basic_Image_C.SetBrush // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void GetBrush(struct FSlateBrush Brush); // Function Basic_Image.Basic_Image_C.GetBrush // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x158ca90
	void PreConstruct(bool IsDesignTime); // Function Basic_Image.Basic_Image_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void Construct(); // Function Basic_Image.Basic_Image_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_Basic_Image(int32_t EntryPoint); // Function Basic_Image.Basic_Image_C.ExecuteUbergraph_Basic_Image // (Final|UbergraphFunction) // @ game+0x158ca90
};

