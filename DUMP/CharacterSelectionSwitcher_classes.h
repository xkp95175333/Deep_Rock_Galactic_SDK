// BlueprintGeneratedClass CharacterSelectionSwitcher.CharacterSelectionSwitcher_C
// Size: 0x438 (Inherited: 0x220)
struct ACharacterSelectionSwitcher_C : ACharacterSelectionSwitcher {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UEndScreenSetups_C* EndScreenSetups; // 0x228(0x08)
	struct UEndScreenActorController_C* EndScreenActorController3; // 0x230(0x08)
	struct UEndScreenActorController_C* EndScreenActorController2; // 0x238(0x08)
	struct UEndScreenActorController_C* EndScreenActorController1; // 0x240(0x08)
	struct UEndScreenActorController_C* EndScreenActorController0; // 0x248(0x08)
	struct USkeletalMeshComponent* Dwarf_Rig; // 0x250(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x258(0x08)
	struct APlayerCharacter* PlayerCharacterClass; // 0x260(0x08)
	struct APlayerCharacter* Character; // 0x268(0x08)
	struct ACameraActor* Camera; // 0x270(0x08)
	struct AActor* selectionLocation; // 0x278(0x08)
	struct AActor* CustomizationLocation; // 0x280(0x08)
	struct FTimerHandle IdleTimer; // 0x288(0x08)
	int32_t EquippedIndex; // 0x290(0x04)
	enum class ECharselectionCameraLocation CurrentSelection; // 0x294(0x01)
	char pad_295[0x3]; // 0x295(0x03)
	struct AActor* Viewer3DCharacterClass; // 0x298(0x08)
	struct AActor* ViewerObject; // 0x2a0(0x08)
	struct AActor* ViewWeaponCamLocation; // 0x2a8(0x08)
	struct AActor* ViewWeaponObjectLocation; // 0x2b0(0x08)
	struct AItem* EquipedItem; // 0x2b8(0x08)
	float LastManualRotate; // 0x2c0(0x04)
	char pad_2C4[0x4]; // 0x2c4(0x04)
	struct AActor* View3DItemClass; // 0x2c8(0x08)
	struct AActor* EndScreenCamLocation; // 0x2d0(0x08)
	struct TArray<struct AActor*> EndscreenActors; // 0x2d8(0x10)
	struct FCharacterViewScene Scene; // 0x2e8(0x18)
	struct TArray<struct AActor*> EndScreenActorPositions_Four; // 0x300(0x10)
	struct TArray<struct AActor*> EndScreenActorPositions_Three; // 0x310(0x10)
	struct TArray<struct AActor*> EndScreenActorPositions_Two; // 0x320(0x10)
	struct TArray<struct AActor*> EndScreenActorPositions_One; // 0x330(0x10)
	struct TArray<struct UEndScreenActorController_C*> CharAnimControllers; // 0x340(0x10)
	struct FRandomStream EndScreenRandomStream; // 0x350(0x08)
	struct TArray<struct AActor*> EndscreenOnlySceneActors; // 0x358(0x10)
	struct TArray<struct AActor*> CharacterViewSceneOnlyActors; // 0x368(0x10)
	struct UFSDPhysicalMaterial* EndscreenPhysicalMaterial; // 0x378(0x08)
	struct TArray<struct ABP_Endscreen_Lamp_C*> EndScreenLamps; // 0x380(0x10)
	struct AActor* ForgeCamLocation; // 0x390(0x08)
	struct AActor* ForgeStartLocation; // 0x398(0x08)
	struct UPlayerTPAnimInstance* ForgeAnimInstance; // 0x3a0(0x08)
	struct ASkeletalMeshActor* ForgeBench; // 0x3a8(0x08)
	bool IsIdling; // 0x3b0(0x01)
	char pad_3B1[0x7]; // 0x3b1(0x07)
	struct UStaticMeshComponent* MatrixCore; // 0x3b8(0x08)
	bool IsForging; // 0x3c0(0x01)
	char pad_3C1[0x7]; // 0x3c1(0x07)
	struct TArray<struct UAnimSequenceBase*> ForgeIdleBreaks; // 0x3c8(0x10)
	struct UAnimSequence* Prop_AnimSeq; // 0x3d8(0x08)
	struct AActor* Prop_Actor; // 0x3e0(0x08)
	struct UAnimSequence* Victory_Pose; // 0x3e8(0x08)
	struct AActor* Prop_ActorClass; // 0x3f0(0x08)
	struct UAnimSequence* Prop_Pose; // 0x3f8(0x08)
	struct UAnimSequence* Prop_Idle; // 0x400(0x08)
	struct UAnimSequence* Victory_Idle; // 0x408(0x08)
	bool RestartLoadoutIdle; // 0x410(0x01)
	char pad_411[0x7]; // 0x411(0x07)
	struct UFSDPhysicalMaterial* CharacerViewerFallbackPhysicalMaterial; // 0x418(0x08)
	struct AActor* PickaxeCameraLocation; // 0x420(0x08)
	struct AActor* Podium; // 0x428(0x08)
	struct AActor* CraftingLocation; // 0x430(0x08)

	void CleanActors(); // Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.CleanActors // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	struct AActor* GetViewerActor(); // Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.GetViewerActor // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x158ca90
	void RestartVanityIdleAnimMonatge(); // Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.RestartVanityIdleAnimMonatge // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void CleanVictoryPoseStuff(); // Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.CleanVictoryPoseStuff // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void LoadVictoryPoseStuff(struct UVictoryPose* VicPose); // Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.LoadVictoryPoseStuff // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void FindEndscreenActorPos(int32_t num players, int32_t Index, struct AActor* NewParam); // Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.FindEndscreenActorPos // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void DestroyPreviousSceneActors(); // Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.DestroyPreviousSceneActors // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void RotateFun(float Yaw); // Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.RotateFun // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetPreviewItem(struct UItemID* Item); // Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.SetPreviewItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SelectCameraLocation(enum class ECharselectionCameraLocation Selection); // Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.SelectCameraLocation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	struct APlayerCharacter* GetActiveCharacter(); // Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.GetActiveCharacter // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x158ca90
	void RefreshCharacter(enum class ECharselectionCameraLocation SelectionType); // Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.RefreshCharacter // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnLoaded_516F3DE24C233C61C7A1519D88D99E0F(struct UObject* Loaded); // Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnLoaded_516F3DE24C233C61C7A1519D88D99E0F // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnLoaded_516F3DE24C233C61C7A1519D1101C230(struct UObject* Loaded); // Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnLoaded_516F3DE24C233C61C7A1519D1101C230 // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnNotifyEnd_B0CB40174FA1135597179392BE030FD1(struct FName NotifyName); // Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnNotifyEnd_B0CB40174FA1135597179392BE030FD1 // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnNotifyBegin_B0CB40174FA1135597179392BE030FD1(struct FName NotifyName); // Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnNotifyBegin_B0CB40174FA1135597179392BE030FD1 // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnInterrupted_B0CB40174FA1135597179392BE030FD1(struct FName NotifyName); // Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnInterrupted_B0CB40174FA1135597179392BE030FD1 // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnBlendOut_B0CB40174FA1135597179392BE030FD1(struct FName NotifyName); // Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnBlendOut_B0CB40174FA1135597179392BE030FD1 // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnCompleted_B0CB40174FA1135597179392BE030FD1(struct FName NotifyName); // Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnCompleted_B0CB40174FA1135597179392BE030FD1 // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnNotifyEnd_BDB7978A405A08A3A09CF3BC042E4D40(struct FName NotifyName); // Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnNotifyEnd_BDB7978A405A08A3A09CF3BC042E4D40 // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnNotifyBegin_BDB7978A405A08A3A09CF3BC042E4D40(struct FName NotifyName); // Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnNotifyBegin_BDB7978A405A08A3A09CF3BC042E4D40 // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnInterrupted_BDB7978A405A08A3A09CF3BC042E4D40(struct FName NotifyName); // Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnInterrupted_BDB7978A405A08A3A09CF3BC042E4D40 // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnBlendOut_BDB7978A405A08A3A09CF3BC042E4D40(struct FName NotifyName); // Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnBlendOut_BDB7978A405A08A3A09CF3BC042E4D40 // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnCompleted_BDB7978A405A08A3A09CF3BC042E4D40(struct FName NotifyName); // Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnCompleted_BDB7978A405A08A3A09CF3BC042E4D40 // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnNotifyEnd_6DC7882842E914A95C4ACD9AF2E9C943(struct FName NotifyName); // Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnNotifyEnd_6DC7882842E914A95C4ACD9AF2E9C943 // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnNotifyBegin_6DC7882842E914A95C4ACD9AF2E9C943(struct FName NotifyName); // Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnNotifyBegin_6DC7882842E914A95C4ACD9AF2E9C943 // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnInterrupted_6DC7882842E914A95C4ACD9AF2E9C943(struct FName NotifyName); // Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnInterrupted_6DC7882842E914A95C4ACD9AF2E9C943 // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnBlendOut_6DC7882842E914A95C4ACD9AF2E9C943(struct FName NotifyName); // Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnBlendOut_6DC7882842E914A95C4ACD9AF2E9C943 // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnCompleted_6DC7882842E914A95C4ACD9AF2E9C943(struct FName NotifyName); // Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnCompleted_6DC7882842E914A95C4ACD9AF2E9C943 // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ReceiveBeginPlay(); // Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x158ca90
	void OnShowCharacterSelector(struct APlayerCharacter* NewCharacter, enum class ECharselectionCameraLocation selectionLocation); // Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnShowCharacterSelector // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SwitchToWeapon(int32_t WeaponIndex); // Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.SwitchToWeapon // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void EquipSlot(int32_t EquipSlot); // Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.EquipSlot // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void StartIdles(); // Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.StartIdles // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetIdleBreak(); // Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.SetIdleBreak // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void Hide(); // Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.Hide // (Event|Public|BlueprintEvent) // @ game+0x158ca90
	void Rotate(float Pitch, float Yaw); // Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.Rotate // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void VanityLoop(); // Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.VanityLoop // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void DoStuff(); // Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.DoStuff // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void StartVanityIdles(); // Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.StartVanityIdles // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnVanityItemEquipped(enum class EVanitySlot Slot); // Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnVanityItemEquipped // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ShowViewer3D(struct AActor* Actor, enum class ECharselectionCameraLocation selectionLocation); // Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.ShowViewer3D // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void Equip(struct AItem* itemClass, int32_t EquipSlot); // Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.Equip // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ReceiveTick(float DeltaSeconds); // Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x158ca90
	void ShowEndScreen(struct FCharacterViewScene viewScene); // Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.ShowEndScreen // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ForgeLoop(); // Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.ForgeLoop // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ForgeStart(); // Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.ForgeStart // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void BreakEnd(struct UAnimMontage* Montage, bool bInterrupted); // Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.BreakEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ForgeIdleLoop(); // Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.ForgeIdleLoop // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnVictoryPoseChanged(struct UVictoryPose* VictoryPose); // Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnVictoryPoseChanged // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void PropPoseDone(struct UAnimMontage* Montage, bool bInterrupted); // Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.PropPoseDone // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void PoseDone(struct UAnimMontage* Montage, bool bInterrupted); // Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.PoseDone // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnCharacterRefresh(); // Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnCharacterRefresh // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_CharacterSelectionSwitcher(int32_t EntryPoint); // Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.ExecuteUbergraph_CharacterSelectionSwitcher // (Final|UbergraphFunction|HasDefaults) // @ game+0x158ca90
};

