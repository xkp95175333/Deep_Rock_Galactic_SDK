// BlueprintGeneratedClass PLS_Base.PLS_Base_C
// Size: 0x500 (Inherited: 0x4c0)
struct APLS_Base_C : AProceduralSetup {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4c0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x4c8(0x08)
	struct UMaterial* OutlineMaterial; // 0x4d0(0x08)
	struct TArray<struct URoomGenerator*> Starting Rooms; // 0x4d8(0x10)
	struct FMulticastInlineDelegate CompletedGenerationPass; // 0x4e8(0x10)
	struct UMusicLibrary* MusicOverride; // 0x4f8(0x08)

	void EnsureSafelandingsite(); // Function PLS_Base.PLS_Base_C.EnsureSafelandingsite // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	struct UProceduralController* GetProceduralController(); // Function PLS_Base.PLS_Base_C.GetProceduralController // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x158ca90
	void SpawnCriticalItems(); // Function PLS_Base.PLS_Base_C.SpawnCriticalItems // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	bool HasSelectedCharacter(); // Function PLS_Base.PLS_Base_C.HasSelectedCharacter // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x158ca90
	void CallGenerationComplete(int32_t pass, enum class PLS_Passes PLS Pass); // Function PLS_Base.PLS_Base_C.CallGenerationComplete // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void PlayMusicAndAmbient(); // Function PLS_Base.PLS_Base_C.PlayMusicAndAmbient // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SaveInitialState(); // Function PLS_Base.PLS_Base_C.SaveInitialState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void CreateCaveGraph(); // Function PLS_Base.PLS_Base_C.CreateCaveGraph // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void GetRandomRoom(struct TArray<struct URoomGenerator*> Rooms, bool RemoveRoom, struct URoomGenerator* Room); // Function PLS_Base.PLS_Base_C.GetRandomRoom // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x158ca90
	void OnLoaded_11827D59481E498DEC10999DAE2915BF(struct UObject* Loaded); // Function PLS_Base.PLS_Base_C.OnLoaded_11827D59481E498DEC10999DAE2915BF // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnLoaded_C0B2FCB247E1A2F8766E5E93EBF80DF8(struct UObject* Loaded); // Function PLS_Base.PLS_Base_C.OnLoaded_C0B2FCB247E1A2F8766E5E93EBF80DF8 // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ReceiveBeginPlay(); // Function PLS_Base.PLS_Base_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x158ca90
	void BaseLayerCommitDone(); // Function PLS_Base.PLS_Base_C.BaseLayerCommitDone // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void FinalCommitDone(); // Function PLS_Base.PLS_Base_C.FinalCommitDone // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void CreateSpawn(); // Function PLS_Base.PLS_Base_C.CreateSpawn // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void Generate_Graph(); // Function PLS_Base.PLS_Base_C.Generate_Graph // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void Generate_Pass_2(); // Function PLS_Base.PLS_Base_C.Generate_Pass_2 // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void Generate_Pass_4(); // Function PLS_Base.PLS_Base_C.Generate_Pass_4 // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void Final Pass(); // Function PLS_Base.PLS_Base_C.Final Pass // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void Generate_Pass_5_Server(); // Function PLS_Base.PLS_Base_C.Generate_Pass_5_Server // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void Generate_Pass_5_Clients(); // Function PLS_Base.PLS_Base_C.Generate_Pass_5_Clients // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void GenerateLandscape(); // Function PLS_Base.PLS_Base_C.GenerateLandscape // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void Generate_Pass_5(); // Function PLS_Base.PLS_Base_C.Generate_Pass_5 // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void Generate_Pass_7(); // Function PLS_Base.PLS_Base_C.Generate_Pass_7 // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void BeginLiveGeneration(); // Function PLS_Base.PLS_Base_C.BeginLiveGeneration // (Event|Public|BlueprintEvent) // @ game+0x158ca90
	void OnPLSDataRecieved(); // Function PLS_Base.PLS_Base_C.OnPLSDataRecieved // (Event|Public|BlueprintEvent) // @ game+0x158ca90
	void AddRoomToInitialState(struct FRoomNode RoomNode); // Function PLS_Base.PLS_Base_C.AddRoomToInitialState // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x158ca90
	void CreateGraphSecondPass(); // Function PLS_Base.PLS_Base_C.CreateGraphSecondPass // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void Generate_Tunnels(); // Function PLS_Base.PLS_Base_C.Generate_Tunnels // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void StartGenerationOnClient(struct AFSDPlayerController* client); // Function PLS_Base.PLS_Base_C.StartGenerationOnClient // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void GenerateLandscapeFromData(int32_t Seed, struct TArray<struct FRoomNode> Rooms, struct TArray<struct FPathObstacle> obstacles); // Function PLS_Base.PLS_Base_C.GenerateLandscapeFromData // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void CarveTunnels(); // Function PLS_Base.PLS_Base_C.CarveTunnels // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void Generate_Pass_1(); // Function PLS_Base.PLS_Base_C.Generate_Pass_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void Generate_Pass_0_Client(); // Function PLS_Base.PLS_Base_C.Generate_Pass_0_Client // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnCarverDataRecieved(enum class EDebrisItemPass pass); // Function PLS_Base.PLS_Base_C.OnCarverDataRecieved // (Event|Public|BlueprintEvent) // @ game+0x158ca90
	void Generate_Pass_3(); // Function PLS_Base.PLS_Base_C.Generate_Pass_3 // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_PLS_Base(int32_t EntryPoint); // Function PLS_Base.PLS_Base_C.ExecuteUbergraph_PLS_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x158ca90
	void CompletedGenerationPass__DelegateSignature(int32_t pass, enum class PLS_Passes PLS Pass); // Function PLS_Base.PLS_Base_C.CompletedGenerationPass__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
};

