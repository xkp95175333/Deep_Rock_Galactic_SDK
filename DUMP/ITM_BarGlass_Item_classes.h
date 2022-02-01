// BlueprintGeneratedClass ITM_BarGlass_Item.ITM_BarGlass_Item_C
// Size: 0x3e8 (Inherited: 0x398)
struct AITM_BarGlass_Item_C : ADrinkableItem {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x398(0x08)
	struct UParticleSystemComponent* TPParticleSystem; // 0x3a0(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x3a8(0x08)
	struct UAudioComponent* SparkleDrink; // 0x3b0(0x08)
	bool IsFull; // 0x3b8(0x01)
	char pad_3B9[0x7]; // 0x3b9(0x07)
	struct ABar_Glass_Physics_C* PhysicsActor; // 0x3c0(0x08)
	struct UAnimMontage* TPMontage; // 0x3c8(0x08)
	struct UAnimMontage* FPMontage; // 0x3d0(0x08)
	bool Visible; // 0x3d8(0x01)
	char pad_3D9[0x7]; // 0x3d9(0x07)
	struct ABar_Glass_Physics_C* ThrownGlass; // 0x3e0(0x08)

	void OnRep_ThrownGlass(); // Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.OnRep_ThrownGlass // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnRep_Visible(); // Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.OnRep_Visible // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnRep_IsFull(); // Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.OnRep_IsFull // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	bool CheckCanSalute(); // Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.CheckCanSalute // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x158ca90
	void IsDrinking(bool IsDrinking); // Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.IsDrinking // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x158ca90
	float PlayThrow(); // Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.PlayThrow // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	float PlayDrink(); // Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.PlayDrink // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void UserConstructionScript(); // Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void RecieveStartUsing(); // Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.RecieveStartUsing // (Event|Protected|BlueprintEvent) // @ game+0x158ca90
	void Server_Use(); // Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.Server_Use // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void All_Drink(); // Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.All_Drink // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void All_Throw(); // Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.All_Throw // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetEmpty(); // Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.SetEmpty // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void BndEvt__ParticleSystem_K2Node_ComponentBoundEvent_0_ActorComponentActivatedSignature__DelegateSignature(struct UActorComponent* Component, bool bReset); // Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.BndEvt__ParticleSystem_K2Node_ComponentBoundEvent_0_ActorComponentActivatedSignature__DelegateSignature // (BlueprintEvent) // @ game+0x158ca90
	void ReceiveBeginPlay(); // Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x158ca90
	void SkinThrownGlass(); // Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.SkinThrownGlass // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_ITM_BarGlass_Item(int32_t EntryPoint); // Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.ExecuteUbergraph_ITM_BarGlass_Item // (Final|UbergraphFunction|HasDefaults) // @ game+0x158ca90
};

