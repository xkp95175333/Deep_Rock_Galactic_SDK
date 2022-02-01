// Class FSDAnsel.FSDAnselFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UFSDAnselFunctionLibrary : UBlueprintFunctionLibrary {

	void StopPhotographySession(struct UObject* WorldContextObject); // Function FSDAnsel.FSDAnselFunctionLibrary.StopPhotographySession // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x704880
	void StartPhotographySession(struct UObject* WorldContextObject); // Function FSDAnsel.FSDAnselFunctionLibrary.StartPhotographySession // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x704810
	void SetUIControlVisibility(struct UObject* WorldContextObject, enum class EUIControlEffectTarget UIControlTarget, bool bIsVisible); // Function FSDAnsel.FSDAnselFunctionLibrary.SetUIControlVisibility // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x704710
	void SetSettleFrames(int32_t NumSettleFrames); // Function FSDAnsel.FSDAnselFunctionLibrary.SetSettleFrames // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7046a0
	void SetIsPhotographyAllowed(bool bIsPhotographyAllowed); // Function FSDAnsel.FSDAnselFunctionLibrary.SetIsPhotographyAllowed // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x704620
	void SetCameraMovementSpeed(float TranslationSpeed); // Function FSDAnsel.FSDAnselFunctionLibrary.SetCameraMovementSpeed // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7045b0
	void SetCameraConstraintDistance(float MaxCameraDistance); // Function FSDAnsel.FSDAnselFunctionLibrary.SetCameraConstraintDistance // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x704540
	void SetCameraConstraintCameraSize(float CameraSize); // Function FSDAnsel.FSDAnselFunctionLibrary.SetCameraConstraintCameraSize // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7044d0
	void SetAutoPostprocess(bool bShouldAutoPostprocess); // Function FSDAnsel.FSDAnselFunctionLibrary.SetAutoPostprocess // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x704450
	void SetAutoPause(bool bShouldAutoPause); // Function FSDAnsel.FSDAnselFunctionLibrary.SetAutoPause // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7043d0
	bool IsPhotographyAvailable(); // Function FSDAnsel.FSDAnselFunctionLibrary.IsPhotographyAvailable // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7043a0
	bool IsPhotographyAllowed(); // Function FSDAnsel.FSDAnselFunctionLibrary.IsPhotographyAllowed // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x704370
	void ConstrainCameraByGeometry(struct UObject* WorldContextObject, struct FVector NewCameraLocation, struct FVector PreviousCameraLocation, struct FVector OriginalCameraLocation, struct FVector OutCameraLocation); // Function FSDAnsel.FSDAnselFunctionLibrary.ConstrainCameraByGeometry // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x7041c0
	void ConstrainCameraByDistance(struct UObject* WorldContextObject, struct FVector NewCameraLocation, struct FVector PreviousCameraLocation, struct FVector OriginalCameraLocation, struct FVector OutCameraLocation, float MaxDistance); // Function FSDAnsel.FSDAnselFunctionLibrary.ConstrainCameraByDistance // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x703fd0
};

