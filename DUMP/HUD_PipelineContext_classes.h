// WidgetBlueprintGeneratedClass HUD_PipelineContext.HUD_PipelineContext_C
// Size: 0x270 (Inherited: 0x240)
struct UHUD_PipelineContext_C : UActorContextWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x240(0x08)
	struct UUI_AdvancedLabel_C* ContextLabel; // 0x248(0x08)
	struct UProgressBar* HealthProgressBar; // 0x250(0x08)
	struct UCanvasPanel* RootCanvas; // 0x258(0x08)
	struct APipelineSegment* PipelineSegment; // 0x260(0x08)
	struct APlayerCharacter* Character; // 0x268(0x08)

	void UpdateWidget(struct UPrimitiveComponent* InPrimitive); // Function HUD_PipelineContext.HUD_PipelineContext_C.UpdateWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ReceiveContextActorChanged(struct AActor* InContextActor); // Function HUD_PipelineContext.HUD_PipelineContext_C.ReceiveContextActorChanged // (Event|Protected|BlueprintEvent) // @ game+0x158ca90
	void PreConstruct(bool IsDesignTime); // Function HUD_PipelineContext.HUD_PipelineContext_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void ReceiveUpdate(struct UPrimitiveComponent* InContextPrimitive); // Function HUD_PipelineContext.HUD_PipelineContext_C.ReceiveUpdate // (Event|Protected|BlueprintEvent) // @ game+0x158ca90
	void ReceiveShow(struct UPrimitiveComponent* InContextPrimitive); // Function HUD_PipelineContext.HUD_PipelineContext_C.ReceiveShow // (Event|Protected|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_HUD_PipelineContext(int32_t EntryPoint); // Function HUD_PipelineContext.HUD_PipelineContext_C.ExecuteUbergraph_HUD_PipelineContext // (Final|UbergraphFunction) // @ game+0x158ca90
};

