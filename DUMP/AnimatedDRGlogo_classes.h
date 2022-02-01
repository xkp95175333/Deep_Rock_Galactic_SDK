// WidgetBlueprintGeneratedClass AnimatedDRGlogo.AnimatedDRGlogo_C
// Size: 0x268 (Inherited: 0x230)
struct UAnimatedDRGlogo_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* Flash4; // 0x238(0x08)
	struct UWidgetAnimation* Flash3; // 0x240(0x08)
	struct UWidgetAnimation* Flash2; // 0x248(0x08)
	struct UWidgetAnimation* Flash1; // 0x250(0x08)
	struct UWidgetAnimation* Idle; // 0x258(0x08)
	struct UImage* Logo; // 0x260(0x08)

	void Construct(); // Function AnimatedDRGlogo.AnimatedDRGlogo_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_AnimatedDRGlogo(int32_t EntryPoint); // Function AnimatedDRGlogo.AnimatedDRGlogo_C.ExecuteUbergraph_AnimatedDRGlogo // (Final|UbergraphFunction|HasDefaults) // @ game+0x158ca90
};

