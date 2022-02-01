// BlueprintGeneratedClass BP_EnemyControlState.BP_EnemyControlState_C
// Size: 0x2a0 (Inherited: 0x290)
struct UBP_EnemyControlState_C : UEnemyControlStateComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	struct UAnimMontage* GetOnMontage; // 0x298(0x08)

	void OnNotifyEnd_C6BE400543D83DD77DB15BA38DC1ED24(struct FName NotifyName); // Function BP_EnemyControlState.BP_EnemyControlState_C.OnNotifyEnd_C6BE400543D83DD77DB15BA38DC1ED24 // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnNotifyBegin_C6BE400543D83DD77DB15BA38DC1ED24(struct FName NotifyName); // Function BP_EnemyControlState.BP_EnemyControlState_C.OnNotifyBegin_C6BE400543D83DD77DB15BA38DC1ED24 // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnInterrupted_C6BE400543D83DD77DB15BA38DC1ED24(struct FName NotifyName); // Function BP_EnemyControlState.BP_EnemyControlState_C.OnInterrupted_C6BE400543D83DD77DB15BA38DC1ED24 // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnBlendOut_C6BE400543D83DD77DB15BA38DC1ED24(struct FName NotifyName); // Function BP_EnemyControlState.BP_EnemyControlState_C.OnBlendOut_C6BE400543D83DD77DB15BA38DC1ED24 // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnCompleted_C6BE400543D83DD77DB15BA38DC1ED24(struct FName NotifyName); // Function BP_EnemyControlState.BP_EnemyControlState_C.OnCompleted_C6BE400543D83DD77DB15BA38DC1ED24 // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnControllingEnemy(bool IsControlling); // Function BP_EnemyControlState.BP_EnemyControlState_C.OnControllingEnemy // (Event|Protected|BlueprintEvent) // @ game+0x158ca90
	void OnControllingEnemyAttached(); // Function BP_EnemyControlState.BP_EnemyControlState_C.OnControllingEnemyAttached // (Event|Protected|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_BP_EnemyControlState(int32_t EntryPoint); // Function BP_EnemyControlState.BP_EnemyControlState_C.ExecuteUbergraph_BP_EnemyControlState // (Final|UbergraphFunction) // @ game+0x158ca90
};

