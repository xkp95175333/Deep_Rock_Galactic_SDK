// AnimBlueprintGeneratedClass ABP_Forge.ABP_Forge_C
// Size: 0x338 (Inherited: 0x270)
struct UABP_Forge_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x278(0x30)
	struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator; // 0x2a8(0x48)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x2f0(0x48)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ABP_Forge.ABP_Forge_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_ABP_Forge(int32_t EntryPoint); // Function ABP_Forge.ABP_Forge_C.ExecuteUbergraph_ABP_Forge // (Final|UbergraphFunction) // @ game+0x158ca90
};
