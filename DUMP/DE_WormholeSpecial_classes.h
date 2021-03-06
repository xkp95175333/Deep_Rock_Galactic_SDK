// BlueprintGeneratedClass DE_WormholeSpecial.DE_WormholeSpecial_C
// Size: 0x108 (Inherited: 0xc0)
struct UDE_WormholeSpecial_C : UDrinkEffectComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	struct APlayerCharacter* Character; // 0xc8(0x08)
	struct FTransform On Start Transform; // 0xd0(0x30)
	struct ABP_WormholeLocation_Base_C* ActiveWormhole; // 0x100(0x08)

	void Disable Older Active Wormhole Effects(); // Function DE_WormholeSpecial.DE_WormholeSpecial_C.Disable Older Active Wormhole Effects // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void IsLastActiveWormholeEffect(bool was last effect); // Function DE_WormholeSpecial.DE_WormholeSpecial_C.IsLastActiveWormholeEffect // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void Set Original position(); // Function DE_WormholeSpecial.DE_WormholeSpecial_C.Set Original position // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ReceiveTick(float DeltaSeconds); // Function DE_WormholeSpecial.DE_WormholeSpecial_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x158ca90
	void OnStartEffect(struct APlayerCharacter* Character); // Function DE_WormholeSpecial.DE_WormholeSpecial_C.OnStartEffect // (Event|Protected|BlueprintEvent) // @ game+0x158ca90
	void OnStopEffect(); // Function DE_WormholeSpecial.DE_WormholeSpecial_C.OnStopEffect // (Event|Protected|BlueprintEvent) // @ game+0x158ca90
	void Spawn Teleport Effects(); // Function DE_WormholeSpecial.DE_WormholeSpecial_C.Spawn Teleport Effects // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void Disable Active Location Effects(); // Function DE_WormholeSpecial.DE_WormholeSpecial_C.Disable Active Location Effects // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_DE_WormholeSpecial(int32_t EntryPoint); // Function DE_WormholeSpecial.DE_WormholeSpecial_C.ExecuteUbergraph_DE_WormholeSpecial // (Final|UbergraphFunction|HasDefaults) // @ game+0x158ca90
};

