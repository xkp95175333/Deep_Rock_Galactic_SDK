// WidgetBlueprintGeneratedClass HUD_EnemyTargeting_Affliction.HUD_EnemyTargeting_Affliction_C
// Size: 0x270 (Inherited: 0x230)
struct UHUD_EnemyTargeting_Affliction_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* FadeIn; // 0x238(0x08)
	struct UUI_MaskedImage_C* AfflictionIcon; // 0x240(0x08)
	struct UImage* BorderInner; // 0x248(0x08)
	struct UImage* BorderOuter; // 0x250(0x08)
	struct USizeBox* ImgSize; // 0x258(0x08)
	float Size; // 0x260(0x04)
	bool Active; // 0x264(0x01)
	char pad_265[0x3]; // 0x265(0x03)
	struct UPawnAffliction* Affliction; // 0x268(0x08)

	void UpdateTarget(struct UPawnAfflictionComponent* InPawnAfflictions); // Function HUD_EnemyTargeting_Affliction.HUD_EnemyTargeting_Affliction_C.UpdateTarget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetActive(bool Inactive); // Function HUD_EnemyTargeting_Affliction.HUD_EnemyTargeting_Affliction_C.SetActive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void Construct(); // Function HUD_EnemyTargeting_Affliction.HUD_EnemyTargeting_Affliction_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void PreConstruct(bool IsDesignTime); // Function HUD_EnemyTargeting_Affliction.HUD_EnemyTargeting_Affliction_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void OnFadeInFinished(); // Function HUD_EnemyTargeting_Affliction.HUD_EnemyTargeting_Affliction_C.OnFadeInFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_HUD_EnemyTargeting_Affliction(int32_t EntryPoint); // Function HUD_EnemyTargeting_Affliction.HUD_EnemyTargeting_Affliction_C.ExecuteUbergraph_HUD_EnemyTargeting_Affliction // (Final|UbergraphFunction|HasDefaults) // @ game+0x158ca90
};

