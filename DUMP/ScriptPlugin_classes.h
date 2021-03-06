// Class ScriptPlugin.ScriptBlueprint
// Size: 0xc0 (Inherited: 0xa0)
struct UScriptBlueprint : UBlueprint {
	struct TArray<char> ByteCode; // 0xa0(0x10)
	struct FString SourceCode; // 0xb0(0x10)
};

// Class ScriptPlugin.ScriptBlueprintGeneratedClass
// Size: 0x368 (Inherited: 0x328)
struct UScriptBlueprintGeneratedClass : UBlueprintGeneratedClass {
	struct TArray<char> ByteCode; // 0x328(0x10)
	struct FString SourceCode; // 0x338(0x10)
	struct TArray<struct UProperty*> ScriptProperties; // 0x348(0x10)
	char pad_358[0x10]; // 0x358(0x10)
};

// Class ScriptPlugin.ScriptContext
// Size: 0x30 (Inherited: 0x28)
struct UScriptContext : UObject {
	char pad_28[0x8]; // 0x28(0x08)

	void CallScriptFunction(struct FString FunctionName); // Function ScriptPlugin.ScriptContext.CallScriptFunction // (Final|Native|Public|BlueprintCallable) // @ game+0x8f8010
};

// Class ScriptPlugin.ScriptContextComponent
// Size: 0xb8 (Inherited: 0xb0)
struct UScriptContextComponent : UActorComponent {
	char pad_B0[0x8]; // 0xb0(0x08)

	void CallScriptFunction(struct FString FunctionName); // Function ScriptPlugin.ScriptContextComponent.CallScriptFunction // (Final|Native|Public|BlueprintCallable) // @ game+0x8f80f0
};

// Class ScriptPlugin.ScriptPluginComponent
// Size: 0xb8 (Inherited: 0xb0)
struct UScriptPluginComponent : UActorComponent {
	char pad_B0[0x8]; // 0xb0(0x08)

	bool CallScriptFunction(struct FString FunctionName); // Function ScriptPlugin.ScriptPluginComponent.CallScriptFunction // (Native|Public|BlueprintCallable) // @ game+0x8f81d0
};

// Class ScriptPlugin.ScriptTestActor
// Size: 0x238 (Inherited: 0x220)
struct AScriptTestActor : AActor {
	struct FString TestString; // 0x220(0x10)
	float TestValue; // 0x230(0x04)
	bool TestBool; // 0x234(0x01)
	char pad_235[0x3]; // 0x235(0x03)

	float TestFunction(float InValue, float InFactor, bool bMultiply); // Function ScriptPlugin.ScriptTestActor.TestFunction // (Final|Native|Public) // @ game+0x8f82d0
};

