// BlueprintGeneratedClass DE_ArkenStout.DE_ArkenStout_C
// Size: 0xd0 (Inherited: 0xc0)
struct UDE_ArkenStout_C : UDrinkEffectComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	struct APlayerCharacter* Character; // 0xc8(0x08)

	void OnStopEffect(); // Function DE_ArkenStout.DE_ArkenStout_C.OnStopEffect // (Event|Protected|BlueprintEvent) // @ game+0x158ca90
	void OnStartEffect(struct APlayerCharacter* Character); // Function DE_ArkenStout.DE_ArkenStout_C.OnStartEffect // (Event|Protected|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_DE_ArkenStout(int32_t EntryPoint); // Function DE_ArkenStout.DE_ArkenStout_C.ExecuteUbergraph_DE_ArkenStout // (Final|UbergraphFunction) // @ game+0x158ca90
};

