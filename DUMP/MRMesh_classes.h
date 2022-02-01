// Class MRMesh.MeshReconstructorBase
// Size: 0x28 (Inherited: 0x28)
struct UMeshReconstructorBase : UObject {

	void StopReconstruction(); // Function MRMesh.MeshReconstructorBase.StopReconstruction // (Native|Public|BlueprintCallable) // @ game+0x203b200
	void StartReconstruction(); // Function MRMesh.MeshReconstructorBase.StartReconstruction // (Native|Public|BlueprintCallable) // @ game+0x203b1e0
	void PauseReconstruction(); // Function MRMesh.MeshReconstructorBase.PauseReconstruction // (Native|Public|BlueprintCallable) // @ game+0x203b1c0
	bool IsReconstructionStarted(); // Function MRMesh.MeshReconstructorBase.IsReconstructionStarted // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1216c00
	bool IsReconstructionPaused(); // Function MRMesh.MeshReconstructorBase.IsReconstructionPaused // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x203b190
	void DisconnectMRMesh(); // Function MRMesh.MeshReconstructorBase.DisconnectMRMesh // (Native|Public) // @ game+0x203b090
	void ConnectMRMesh(struct UMRMeshComponent* Mesh); // Function MRMesh.MeshReconstructorBase.ConnectMRMesh // (Native|Public) // @ game+0x203af80
};

// Class MRMesh.MockDataMeshTrackerComponent
// Size: 0x260 (Inherited: 0x1f0)
struct UMockDataMeshTrackerComponent : USceneComponent {
	struct FMulticastInlineDelegate OnMeshTrackerUpdated; // 0x1f0(0x10)
	bool ScanWorld; // 0x200(0x01)
	bool RequestNormals; // 0x201(0x01)
	bool RequestVertexConfidence; // 0x202(0x01)
	enum class EMeshTrackerVertexColorMode VertexColorMode; // 0x203(0x01)
	char pad_204[0x4]; // 0x204(0x04)
	struct TArray<struct FColor> BlockVertexColors; // 0x208(0x10)
	struct FLinearColor VertexColorFromConfidenceZero; // 0x218(0x10)
	struct FLinearColor VertexColorFromConfidenceOne; // 0x228(0x10)
	float UpdateInterval; // 0x238(0x04)
	char pad_23C[0x4]; // 0x23c(0x04)
	struct UMRMeshComponent* MRMesh; // 0x240(0x08)
	char pad_248[0x18]; // 0x248(0x18)

	void OnMockDataMeshTrackerUpdated__DelegateSignature(int32_t Index, struct TArray<struct FVector> Vertices, struct TArray<int32_t> Triangles, struct TArray<struct FVector> Normals, struct TArray<float> Confidence); // DelegateFunction MRMesh.MockDataMeshTrackerComponent.OnMockDataMeshTrackerUpdated__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x158ca90
	void DisconnectMRMesh(struct UMRMeshComponent* InMRMeshPtr); // Function MRMesh.MockDataMeshTrackerComponent.DisconnectMRMesh // (Final|Native|Public|BlueprintCallable) // @ game+0x203b0b0
	void ConnectMRMesh(struct UMRMeshComponent* InMRMeshPtr); // Function MRMesh.MockDataMeshTrackerComponent.ConnectMRMesh // (Final|Native|Public|BlueprintCallable) // @ game+0x203b010
};

// Class MRMesh.MRMeshComponent
// Size: 0x470 (Inherited: 0x3f0)
struct UMRMeshComponent : UPrimitiveComponent {
	char pad_3F0[0x8]; // 0x3f0(0x08)
	struct UMaterialInterface* Material; // 0x3f8(0x08)
	bool bCreateMeshProxySections; // 0x400(0x01)
	bool bUpdateNavMeshOnMeshUpdate; // 0x401(0x01)
	bool bNeverCreateCollisionMesh; // 0x402(0x01)
	char pad_403[0x5]; // 0x403(0x05)
	struct UBodySetup* CachedBodySetup; // 0x408(0x08)
	struct TArray<struct UBodySetup*> BodySetups; // 0x410(0x10)
	struct UMaterialInterface* WireframeMaterial; // 0x420(0x08)
	char pad_428[0x48]; // 0x428(0x48)

	bool IsConnected(); // Function MRMesh.MRMeshComponent.IsConnected // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x203b150
	void ForceNavMeshUpdate(); // Function MRMesh.MRMeshComponent.ForceNavMeshUpdate // (Final|Native|Public|BlueprintCallable) // @ game+0x203b130
	void Clear(); // Function MRMesh.MRMeshComponent.Clear // (Final|Native|Public|BlueprintCallable) // @ game+0x203af50
};

