// BlueprintGeneratedClass DE_DiscoLight.DE_DiscoLight_C
// Size: 0xf9 (Inherited: 0xc0)
struct UDE_DiscoLight_C : UDrinkEffectComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	struct APlayerCharacter* Character; // 0xc8(0x08)
	struct APointLight* Light; // 0xd0(0x08)
	struct UCurveLinearColor* LightColorCurve; // 0xd8(0x08)
	float TimeSinceStart; // 0xe0(0x04)
	float curvelength; // 0xe4(0x04)
	struct UAudioComponent* MusicPlayer; // 0xe8(0x08)
	struct UParticleSystemComponent* StarburstParticles; // 0xf0(0x08)
	bool EnabledEffect; // 0xf8(0x01)

	void OnRep_Light(); // Function DE_DiscoLight.DE_DiscoLight_C.OnRep_Light // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnLoaded_9A4F10A04AD1DAA8BA45FFA4A7DB3EEC(struct UObject* Loaded); // Function DE_DiscoLight.DE_DiscoLight_C.OnLoaded_9A4F10A04AD1DAA8BA45FFA4A7DB3EEC // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ReceiveBeginPlay(); // Function DE_DiscoLight.DE_DiscoLight_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x158ca90
	void ReceiveTick(float DeltaSeconds); // Function DE_DiscoLight.DE_DiscoLight_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x158ca90
	void OnStartEffect(struct APlayerCharacter* Character); // Function DE_DiscoLight.DE_DiscoLight_C.OnStartEffect // (Event|Protected|BlueprintEvent) // @ game+0x158ca90
	void OnStopEffect(); // Function DE_DiscoLight.DE_DiscoLight_C.OnStopEffect // (Event|Protected|BlueprintEvent) // @ game+0x158ca90
	void Set Light(); // Function DE_DiscoLight.DE_DiscoLight_C.Set Light // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_DE_DiscoLight(int32_t EntryPoint); // Function DE_DiscoLight.DE_DiscoLight_C.ExecuteUbergraph_DE_DiscoLight // (Final|UbergraphFunction|HasDefaults) // @ game+0x158ca90
};

