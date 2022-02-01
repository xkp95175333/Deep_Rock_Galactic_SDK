// Class UMG.Visual
// Size: 0x28 (Inherited: 0x28)
struct UVisual : UObject {
};

// Class UMG.Widget
// Size: 0x108 (Inherited: 0x28)
struct UWidget : UVisual {
	struct UPanelSlot* Slot; // 0x28(0x08)
	struct FDelegate bIsEnabledDelegate; // 0x30(0x10)
	struct FText ToolTipText; // 0x40(0x18)
	struct FDelegate ToolTipTextDelegate; // 0x58(0x10)
	struct UWidget* ToolTipWidget; // 0x68(0x08)
	struct FDelegate ToolTipWidgetDelegate; // 0x70(0x10)
	struct FDelegate VisibilityDelegate; // 0x80(0x10)
	struct FWidgetTransform RenderTransform; // 0x90(0x1c)
	struct FVector2D RenderTransformPivot; // 0xac(0x08)
	char bIsVariable : 1; // 0xb4(0x01)
	char bCreatedByConstructionScript : 1; // 0xb4(0x01)
	char bIsEnabled : 1; // 0xb4(0x01)
	char bOverride_Cursor : 1; // 0xb4(0x01)
	char pad_B4_4 : 4; // 0xb4(0x01)
	char pad_B5[0x3]; // 0xb5(0x03)
	struct USlateAccessibleWidgetData* AccessibleWidgetData; // 0xb8(0x08)
	char bIsVolatile : 1; // 0xc0(0x01)
	char pad_C0_1 : 7; // 0xc0(0x01)
	enum class EMouseCursor Cursor; // 0xc1(0x01)
	enum class EWidgetClipping Clipping; // 0xc2(0x01)
	enum class ESlateVisibility Visibility; // 0xc3(0x01)
	float RenderOpacity; // 0xc4(0x04)
	struct UWidgetNavigation* Navigation; // 0xc8(0x08)
	enum class EFlowDirectionPreference FlowDirectionPreference; // 0xd0(0x01)
	char pad_D1[0x27]; // 0xd1(0x27)
	struct TArray<struct UPropertyBinding*> NativeBindings; // 0xf8(0x10)

	void SetVisibility(enum class ESlateVisibility InVisibility); // Function UMG.Widget.SetVisibility // (Native|Public|BlueprintCallable) // @ game+0x24c6b30
	void SetUserFocus(struct APlayerController* PlayerController); // Function UMG.Widget.SetUserFocus // (Final|Native|Public|BlueprintCallable) // @ game+0x24c6910
	void SetToolTipText(struct FText InToolTipText); // Function UMG.Widget.SetToolTipText // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x24c6840
	void SetToolTip(struct UWidget* Widget); // Function UMG.Widget.SetToolTip // (Final|Native|Public|BlueprintCallable) // @ game+0x24c67c0
	void SetRenderTranslation(struct FVector2D Translation); // Function UMG.Widget.SetRenderTranslation // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x24c66b0
	void SetRenderTransformPivot(struct FVector2D Pivot); // Function UMG.Widget.SetRenderTransformPivot // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x24c6630
	void SetRenderTransformAngle(float Angle); // Function UMG.Widget.SetRenderTransformAngle // (Final|Native|Public|BlueprintCallable) // @ game+0x24c65b0
	void SetRenderTransform(struct FWidgetTransform InTransform); // Function UMG.Widget.SetRenderTransform // (Final|Native|Public|BlueprintCallable) // @ game+0x24c64d0
	void SetRenderShear(struct FVector2D Shear); // Function UMG.Widget.SetRenderShear // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x24c6450
	void SetRenderScale(struct FVector2D Scale); // Function UMG.Widget.SetRenderScale // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x24c63d0
	void SetRenderOpacity(float InOpacity); // Function UMG.Widget.SetRenderOpacity // (Final|Native|Public|BlueprintCallable) // @ game+0x24c6350
	void SetNavigationRuleExplicit(enum class EUINavigation Direction, struct UWidget* InWidget); // Function UMG.Widget.SetNavigationRuleExplicit // (Final|Native|Public|BlueprintCallable) // @ game+0x24c6200
	void SetNavigationRuleCustomBoundary(enum class EUINavigation Direction, struct FDelegate InCustomDelegate); // Function UMG.Widget.SetNavigationRuleCustomBoundary // (Final|Native|Public|BlueprintCallable) // @ game+0x24c6120
	void SetNavigationRuleCustom(enum class EUINavigation Direction, struct FDelegate InCustomDelegate); // Function UMG.Widget.SetNavigationRuleCustom // (Final|Native|Public|BlueprintCallable) // @ game+0x24c6040
	void SetNavigationRuleBase(enum class EUINavigation Direction, enum class EUINavigationRule Rule); // Function UMG.Widget.SetNavigationRuleBase // (Final|Native|Public|BlueprintCallable) // @ game+0x24c5f80
	void SetNavigationRule(enum class EUINavigation Direction, enum class EUINavigationRule Rule, struct FName WidgetToFocus); // Function UMG.Widget.SetNavigationRule // (Final|Native|Public|BlueprintCallable) // @ game+0x24c5e70
	void SetKeyboardFocus(); // Function UMG.Widget.SetKeyboardFocus // (Final|Native|Public|BlueprintCallable) // @ game+0x24c5e50
	void SetIsEnabled(bool bInIsEnabled); // Function UMG.Widget.SetIsEnabled // (Native|Public|BlueprintCallable) // @ game+0x24c5dc0
	void SetFocus(); // Function UMG.Widget.SetFocus // (Final|Native|Public|BlueprintCallable) // @ game+0x24c5d20
	void SetCursor(enum class EMouseCursor InCursor); // Function UMG.Widget.SetCursor // (Final|Native|Public|BlueprintCallable) // @ game+0x24c5ca0
	void SetClipping(enum class EWidgetClipping InClipping); // Function UMG.Widget.SetClipping // (Final|Native|Public|BlueprintCallable) // @ game+0x24c5c20
	void SetAllNavigationRules(enum class EUINavigationRule Rule, struct FName WidgetToFocus); // Function UMG.Widget.SetAllNavigationRules // (Final|Native|Public|BlueprintCallable) // @ game+0x24c5b60
	void ResetCursor(); // Function UMG.Widget.ResetCursor // (Final|Native|Public|BlueprintCallable) // @ game+0x24c5b40
	void RemoveFromParent(); // Function UMG.Widget.RemoveFromParent // (Native|Public|BlueprintCallable) // @ game+0x24c5b20
	struct FEventReply OnReply__DelegateSignature(); // DelegateFunction UMG.Widget.OnReply__DelegateSignature // (Public|Delegate) // @ game+0x158ca90
	struct FEventReply OnPointerEvent__DelegateSignature(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // DelegateFunction UMG.Widget.OnPointerEvent__DelegateSignature // (Public|Delegate|HasOutParms) // @ game+0x158ca90
	bool IsVisible(); // Function UMG.Widget.IsVisible // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24c5af0
	bool IsHovered(); // Function UMG.Widget.IsHovered // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1216c00
	void InvalidateLayoutAndVolatility(); // Function UMG.Widget.InvalidateLayoutAndVolatility // (Final|Native|Public|BlueprintCallable) // @ game+0x24c5ad0
	bool HasUserFocusedDescendants(struct APlayerController* PlayerController); // Function UMG.Widget.HasUserFocusedDescendants // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24c5a40
	bool HasUserFocus(struct APlayerController* PlayerController); // Function UMG.Widget.HasUserFocus // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24c59b0
	bool HasMouseCaptureByUser(int32_t UserIndex, int32_t PointerIndex); // Function UMG.Widget.HasMouseCaptureByUser // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24c58f0
	bool HasMouseCapture(); // Function UMG.Widget.HasMouseCapture // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24c58c0
	bool HasKeyboardFocus(); // Function UMG.Widget.HasKeyboardFocus // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24c5890
	bool HasFocusedDescendants(); // Function UMG.Widget.HasFocusedDescendants // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24c5860
	bool HasAnyUserFocus(); // Function UMG.Widget.HasAnyUserFocus // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24c5830
	struct UWidget* GetWidget__DelegateSignature(); // DelegateFunction UMG.Widget.GetWidget__DelegateSignature // (Public|Delegate) // @ game+0x158ca90
	enum class ESlateVisibility GetVisibility(); // Function UMG.Widget.GetVisibility // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24c5800
	struct FGeometry GetTickSpaceGeometry(); // Function UMG.Widget.GetTickSpaceGeometry // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24c56e0
	struct FText GetText__DelegateSignature(); // DelegateFunction UMG.Widget.GetText__DelegateSignature // (Public|Delegate) // @ game+0x158ca90
	enum class ESlateVisibility GetSlateVisibility__DelegateSignature(); // DelegateFunction UMG.Widget.GetSlateVisibility__DelegateSignature // (Public|Delegate) // @ game+0x158ca90
	struct FSlateColor GetSlateColor__DelegateSignature(); // DelegateFunction UMG.Widget.GetSlateColor__DelegateSignature // (Public|Delegate) // @ game+0x158ca90
	struct FSlateBrush GetSlateBrush__DelegateSignature(); // DelegateFunction UMG.Widget.GetSlateBrush__DelegateSignature // (Public|Delegate) // @ game+0x158ca90
	float GetRenderTransformAngle(); // Function UMG.Widget.GetRenderTransformAngle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24c5680
	float GetRenderOpacity(); // Function UMG.Widget.GetRenderOpacity // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24c5650
	struct UPanelWidget* GetParent(); // Function UMG.Widget.GetParent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24c5620
	struct FGeometry GetPaintSpaceGeometry(); // Function UMG.Widget.GetPaintSpaceGeometry // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24c55e0
	struct APlayerController* GetOwningPlayer(); // Function UMG.Widget.GetOwningPlayer // (BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24c55b0
	struct ULocalPlayer* GetOwningLocalPlayer(); // Function UMG.Widget.GetOwningLocalPlayer // (BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24c5580
	enum class EMouseCursor GetMouseCursor__DelegateSignature(); // DelegateFunction UMG.Widget.GetMouseCursor__DelegateSignature // (Public|Delegate) // @ game+0x158ca90
	struct FLinearColor GetLinearColor__DelegateSignature(); // DelegateFunction UMG.Widget.GetLinearColor__DelegateSignature // (Public|Delegate|HasDefaults) // @ game+0x158ca90
	bool GetIsEnabled(); // Function UMG.Widget.GetIsEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24c5550
	int32_t GetInt32__DelegateSignature(); // DelegateFunction UMG.Widget.GetInt32__DelegateSignature // (Public|Delegate) // @ game+0x158ca90
	struct UGameInstance* GetGameInstance(); // Function UMG.Widget.GetGameInstance // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24c5520
	float GetFloat__DelegateSignature(); // DelegateFunction UMG.Widget.GetFloat__DelegateSignature // (Public|Delegate) // @ game+0x158ca90
	struct FVector2D GetDesiredSize(); // Function UMG.Widget.GetDesiredSize // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x24c54b0
	enum class EWidgetClipping GetClipping(); // Function UMG.Widget.GetClipping // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24c5480
	enum class ECheckBoxState GetCheckBoxState__DelegateSignature(); // DelegateFunction UMG.Widget.GetCheckBoxState__DelegateSignature // (Public|Delegate) // @ game+0x158ca90
	struct FGeometry GetCachedGeometry(); // Function UMG.Widget.GetCachedGeometry // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24c5440
	bool GetBool__DelegateSignature(); // DelegateFunction UMG.Widget.GetBool__DelegateSignature // (Public|Delegate) // @ game+0x158ca90
	struct UWidget* GenerateWidgetForString__DelegateSignature(struct FString Item); // DelegateFunction UMG.Widget.GenerateWidgetForString__DelegateSignature // (Public|Delegate) // @ game+0x158ca90
	struct UWidget* GenerateWidgetForObject__DelegateSignature(struct UObject* Item); // DelegateFunction UMG.Widget.GenerateWidgetForObject__DelegateSignature // (Public|Delegate) // @ game+0x158ca90
	void ForceVolatile(bool bForce); // Function UMG.Widget.ForceVolatile // (Final|Native|Public|BlueprintCallable) // @ game+0x24c53b0
	void ForceLayoutPrepass(); // Function UMG.Widget.ForceLayoutPrepass // (Final|Native|Public|BlueprintCallable) // @ game+0x24c5390
};

// Class UMG.UserWidget
// Size: 0x230 (Inherited: 0x108)
struct UUserWidget : UWidget {
	char pad_108[0x8]; // 0x108(0x08)
	struct FLinearColor ColorAndOpacity; // 0x110(0x10)
	struct FDelegate ColorAndOpacityDelegate; // 0x120(0x10)
	struct FSlateColor ForegroundColor; // 0x130(0x28)
	struct FDelegate ForegroundColorDelegate; // 0x158(0x10)
	struct FMargin Padding; // 0x168(0x10)
	struct TArray<struct UUMGSequencePlayer*> ActiveSequencePlayers; // 0x178(0x10)
	struct TArray<struct UUMGSequencePlayer*> StoppedSequencePlayers; // 0x188(0x10)
	struct TArray<struct FNamedSlotBinding> NamedSlotBindings; // 0x198(0x10)
	struct UWidgetTree* WidgetTree; // 0x1a8(0x08)
	int32_t Priority; // 0x1b0(0x04)
	char bSupportsKeyboardFocus : 1; // 0x1b4(0x01)
	char bIsFocusable : 1; // 0x1b4(0x01)
	char bStopAction : 1; // 0x1b4(0x01)
	char bHasScriptImplementedTick : 1; // 0x1b4(0x01)
	char bHasScriptImplementedPaint : 1; // 0x1b4(0x01)
	char pad_1B4_5 : 2; // 0x1b4(0x01)
	char bCookedWidgetTree : 1; // 0x1b4(0x01)
	char pad_1B5[0xb]; // 0x1b5(0x0b)
	enum class EWidgetTickFrequency TickFrequency; // 0x1c0(0x01)
	char pad_1C1[0x7]; // 0x1c1(0x07)
	struct UInputComponent* InputComponent; // 0x1c8(0x08)
	struct TArray<struct FAnimationEventBinding> AnimationCallbacks; // 0x1d0(0x10)
	char pad_1E0[0x50]; // 0x1e0(0x50)

	void UnregisterInputComponent(); // Function UMG.UserWidget.UnregisterInputComponent // (Final|Native|Protected|BlueprintCallable) // @ game+0x24c34d0
	void UnbindFromAnimationStarted(struct UWidgetAnimation* Animation, struct FDelegate Delegate); // Function UMG.UserWidget.UnbindFromAnimationStarted // (Final|Native|Public|BlueprintCallable) // @ game+0x24c33f0
	void UnbindFromAnimationFinished(struct UWidgetAnimation* Animation, struct FDelegate Delegate); // Function UMG.UserWidget.UnbindFromAnimationFinished // (Final|Native|Public|BlueprintCallable) // @ game+0x24c3310
	void UnbindAllFromAnimationStarted(struct UWidgetAnimation* Animation); // Function UMG.UserWidget.UnbindAllFromAnimationStarted // (Final|Native|Public|BlueprintCallable) // @ game+0x24c3290
	void UnbindAllFromAnimationFinished(struct UWidgetAnimation* Animation); // Function UMG.UserWidget.UnbindAllFromAnimationFinished // (Final|Native|Public|BlueprintCallable) // @ game+0x24c3210
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG.UserWidget.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void StopListeningForInputAction(struct FName ActionName, enum class EInputEvent EventType); // Function UMG.UserWidget.StopListeningForInputAction // (Final|Native|Protected|BlueprintCallable) // @ game+0x24c3150
	void StopListeningForAllInputActions(); // Function UMG.UserWidget.StopListeningForAllInputActions // (Final|Native|Protected|BlueprintCallable) // @ game+0x24c3130
	void StopAnimationsAndLatentActions(); // Function UMG.UserWidget.StopAnimationsAndLatentActions // (Final|Native|Public|BlueprintCallable) // @ game+0x24c3110
	void StopAnimation(struct UWidgetAnimation* InAnimation); // Function UMG.UserWidget.StopAnimation // (Final|Native|Public|BlueprintCallable) // @ game+0x24c3090
	void StopAllAnimations(); // Function UMG.UserWidget.StopAllAnimations // (Final|Native|Public|BlueprintCallable) // @ game+0x24c3070
	void SetPositionInViewport(struct FVector2D Position, bool bRemoveDPIScale); // Function UMG.UserWidget.SetPositionInViewport // (Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x24c2da0
	void SetPlaybackSpeed(struct UWidgetAnimation* InAnimation, float PlaybackSpeed); // Function UMG.UserWidget.SetPlaybackSpeed // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x24c2cd0
	void SetPadding(struct FMargin InPadding); // Function UMG.UserWidget.SetPadding // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x24c2c40
	void SetOwningPlayer(struct APlayerController* LocalPlayerController); // Function UMG.UserWidget.SetOwningPlayer // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x24c2bc0
	void SetNumLoopsToPlay(struct UWidgetAnimation* InAnimation, int32_t NumLoopsToPlay); // Function UMG.UserWidget.SetNumLoopsToPlay // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x24c2b00
	void SetInputActionPriority(int32_t NewPriority); // Function UMG.UserWidget.SetInputActionPriority // (Final|Native|Protected|BlueprintCallable) // @ game+0x24c2980
	void SetInputActionBlocking(bool bShouldBlock); // Function UMG.UserWidget.SetInputActionBlocking // (Final|Native|Protected|BlueprintCallable) // @ game+0x24c28f0
	void SetForegroundColor(struct FSlateColor InForegroundColor); // Function UMG.UserWidget.SetForegroundColor // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x24c2780
	void SetDesiredSizeInViewport(struct FVector2D Size); // Function UMG.UserWidget.SetDesiredSizeInViewport // (Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x24c2700
	void SetColorAndOpacity(struct FLinearColor InColorAndOpacity); // Function UMG.UserWidget.SetColorAndOpacity // (Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x24c2600
	void SetAnchorsInViewport(struct FAnchors Anchors); // Function UMG.UserWidget.SetAnchorsInViewport // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x24c2570
	void SetAlignmentInViewport(struct FVector2D Alignment); // Function UMG.UserWidget.SetAlignmentInViewport // (Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x24c24f0
	void ReverseAnimation(struct UWidgetAnimation* InAnimation); // Function UMG.UserWidget.ReverseAnimation // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x24c2470
	void RemoveFromViewport(); // Function UMG.UserWidget.RemoveFromViewport // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x24c2450
	void RegisterInputComponent(); // Function UMG.UserWidget.RegisterInputComponent // (Final|Native|Protected|BlueprintCallable) // @ game+0x24c2430
	void PreConstruct(bool IsDesignTime); // Function UMG.UserWidget.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void PlaySound(struct USoundBase* SoundToPlay); // Function UMG.UserWidget.PlaySound // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x24c23b0
	struct UUMGSequencePlayer* PlayAnimationTimeRange(struct UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32_t NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed, bool bRestoreState); // Function UMG.UserWidget.PlayAnimationTimeRange // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x24c21c0
	struct UUMGSequencePlayer* PlayAnimationReverse(struct UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState); // Function UMG.UserWidget.PlayAnimationReverse // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x24c20b0
	struct UUMGSequencePlayer* PlayAnimationForward(struct UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState); // Function UMG.UserWidget.PlayAnimationForward // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x24c1fa0
	struct UUMGSequencePlayer* PlayAnimation(struct UWidgetAnimation* InAnimation, float StartAtTime, int32_t NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed, bool bRestoreState); // Function UMG.UserWidget.PlayAnimation // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x24c1de0
	float PauseAnimation(struct UWidgetAnimation* InAnimation); // Function UMG.UserWidget.PauseAnimation // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x24c1d40
	struct FEventReply OnTouchStarted(struct FGeometry MyGeometry, struct FPointerEvent InTouchEvent); // Function UMG.UserWidget.OnTouchStarted // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x158ca90
	struct FEventReply OnTouchMoved(struct FGeometry MyGeometry, struct FPointerEvent InTouchEvent); // Function UMG.UserWidget.OnTouchMoved // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x158ca90
	struct FEventReply OnTouchGesture(struct FGeometry MyGeometry, struct FPointerEvent GestureEvent); // Function UMG.UserWidget.OnTouchGesture // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x158ca90
	struct FEventReply OnTouchForceChanged(struct FGeometry MyGeometry, struct FPointerEvent InTouchEvent); // Function UMG.UserWidget.OnTouchForceChanged // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x158ca90
	struct FEventReply OnTouchEnded(struct FGeometry MyGeometry, struct FPointerEvent InTouchEvent); // Function UMG.UserWidget.OnTouchEnded // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x158ca90
	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent); // Function UMG.UserWidget.OnRemovedFromFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	struct FEventReply OnPreviewMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function UMG.UserWidget.OnPreviewMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x158ca90
	struct FEventReply OnPreviewKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function UMG.UserWidget.OnPreviewKeyDown // (Event|Public|BlueprintEvent) // @ game+0x158ca90
	void OnPaint(struct FPaintContext Context); // Function UMG.UserWidget.OnPaint // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent|Const) // @ game+0x158ca90
	struct FEventReply OnMouseWheel(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function UMG.UserWidget.OnMouseWheel // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x158ca90
	struct FEventReply OnMouseMove(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function UMG.UserWidget.OnMouseMove // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x158ca90
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function UMG.UserWidget.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x158ca90
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function UMG.UserWidget.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x158ca90
	void OnMouseCaptureLost(); // Function UMG.UserWidget.OnMouseCaptureLost // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function UMG.UserWidget.OnMouseButtonUp // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x158ca90
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function UMG.UserWidget.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x158ca90
	struct FEventReply OnMouseButtonDoubleClick(struct FGeometry InMyGeometry, struct FPointerEvent InMouseEvent); // Function UMG.UserWidget.OnMouseButtonDoubleClick // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x158ca90
	struct FEventReply OnMotionDetected(struct FGeometry MyGeometry, struct FMotionEvent InMotionEvent); // Function UMG.UserWidget.OnMotionDetected // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function UMG.UserWidget.OnKeyUp // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function UMG.UserWidget.OnKeyDown // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	struct FEventReply OnKeyChar(struct FGeometry MyGeometry, struct FCharacterEvent InCharacterEvent); // Function UMG.UserWidget.OnKeyChar // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void OnInitialized(); // Function UMG.UserWidget.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent); // Function UMG.UserWidget.OnFocusReceived // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void OnFocusLost(struct FFocusEvent InFocusEvent); // Function UMG.UserWidget.OnFocusLost // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	bool OnDrop(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UMG.UserWidget.OnDrop // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	bool OnDragOver(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UMG.UserWidget.OnDragOver // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void OnDragLeave(struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UMG.UserWidget.OnDragLeave // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void OnDragEnter(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UMG.UserWidget.OnDragEnter // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void OnDragDetected(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UMG.UserWidget.OnDragDetected // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x158ca90
	void OnDragCancelled(struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UMG.UserWidget.OnDragCancelled // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x158ca90
	void OnAnimationStarted(struct UWidgetAnimation* Animation); // Function UMG.UserWidget.OnAnimationStarted // (BlueprintCosmetic|Native|Event|Protected|BlueprintEvent) // @ game+0x24c1cb0
	void OnAnimationFinished(struct UWidgetAnimation* Animation); // Function UMG.UserWidget.OnAnimationFinished // (BlueprintCosmetic|Native|Event|Protected|BlueprintEvent) // @ game+0x24c1c20
	struct FEventReply OnAnalogValueChanged(struct FGeometry MyGeometry, struct FAnalogInputEvent InAnalogInputEvent); // Function UMG.UserWidget.OnAnalogValueChanged // (Event|Public|BlueprintEvent) // @ game+0x158ca90
	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // Function UMG.UserWidget.OnAddedToFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void ListenForInputAction(struct FName ActionName, enum class EInputEvent EventType, bool bConsume, struct FDelegate Callback); // Function UMG.UserWidget.ListenForInputAction // (Final|Native|Protected|BlueprintCallable) // @ game+0x24c1aa0
	bool IsPlayingAnimation(); // Function UMG.UserWidget.IsPlayingAnimation // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24c1a70
	bool IsListeningForInputAction(struct FName ActionName); // Function UMG.UserWidget.IsListeningForInputAction // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x24c19e0
	bool IsInViewport(); // Function UMG.UserWidget.IsInViewport // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24c1810
	bool IsInteractable(); // Function UMG.UserWidget.IsInteractable // (BlueprintCosmetic|Event|Public|BlueprintEvent|Const) // @ game+0x158ca90
	bool IsAnyAnimationPlaying(); // Function UMG.UserWidget.IsAnyAnimationPlaying // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24c19b0
	bool IsAnimationPlayingForward(struct UWidgetAnimation* InAnimation); // Function UMG.UserWidget.IsAnimationPlayingForward // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x24c1920
	bool IsAnimationPlaying(struct UWidgetAnimation* InAnimation); // Function UMG.UserWidget.IsAnimationPlaying // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24c1890
	struct APawn* GetOwningPlayerPawn(); // Function UMG.UserWidget.GetOwningPlayerPawn // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24c1840
	bool GetIsVisible(); // Function UMG.UserWidget.GetIsVisible // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24c1810
	float GetAnimationCurrentTime(struct UWidgetAnimation* InAnimation); // Function UMG.UserWidget.GetAnimationCurrentTime // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24c1770
	struct FAnchors GetAnchorsInViewport(); // Function UMG.UserWidget.GetAnchorsInViewport // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24c1730
	struct FVector2D GetAlignmentInViewport(); // Function UMG.UserWidget.GetAlignmentInViewport // (Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x24c16f0
	void Destruct(); // Function UMG.UserWidget.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void Construct(); // Function UMG.UserWidget.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x158ca90
	void CancelLatentActions(); // Function UMG.UserWidget.CancelLatentActions // (Final|Native|Public|BlueprintCallable) // @ game+0x24c16d0
	void BindToAnimationStarted(struct UWidgetAnimation* Animation, struct FDelegate Delegate); // Function UMG.UserWidget.BindToAnimationStarted // (Final|Native|Public|BlueprintCallable) // @ game+0x24c15f0
	void BindToAnimationFinished(struct UWidgetAnimation* Animation, struct FDelegate Delegate); // Function UMG.UserWidget.BindToAnimationFinished // (Final|Native|Public|BlueprintCallable) // @ game+0x24c1510
	void BindToAnimationEvent(struct UWidgetAnimation* Animation, struct FDelegate Delegate, enum class EWidgetAnimationEvent AnimationEvent, struct FName UserTag); // Function UMG.UserWidget.BindToAnimationEvent // (Final|Native|Public|BlueprintCallable) // @ game+0x24c13a0
	void AddToViewport(int32_t ZOrder); // Function UMG.UserWidget.AddToViewport // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x24c1320
	bool AddToPlayerScreen(int32_t ZOrder); // Function UMG.UserWidget.AddToPlayerScreen // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x24c1290
};

// Class UMG.RichTextBlockDecorator
// Size: 0x28 (Inherited: 0x28)
struct URichTextBlockDecorator : UObject {
};

// Class UMG.WidgetComponent
// Size: 0x540 (Inherited: 0x420)
struct UWidgetComponent : UMeshComponent {
	enum class EWidgetSpace Space; // 0x418(0x01)
	enum class EWidgetTimingPolicy TimingPolicy; // 0x419(0x01)
	struct UUserWidget* WidgetClass; // 0x420(0x08)
	struct FIntPoint DrawSize; // 0x428(0x08)
	bool bManuallyRedraw; // 0x430(0x01)
	bool bRedrawRequested; // 0x431(0x01)
	float RedrawTime; // 0x434(0x04)
	char pad_438[0x8]; // 0x438(0x08)
	struct FIntPoint CurrentDrawSize; // 0x440(0x08)
	bool bDrawAtDesiredSize; // 0x448(0x01)
	char pad_449[0x3]; // 0x449(0x03)
	struct FVector2D Pivot; // 0x44c(0x08)
	bool bReceiveHardwareInput; // 0x454(0x01)
	bool bWindowFocusable; // 0x455(0x01)
	enum class EWindowVisibility WindowVisibility; // 0x456(0x01)
	bool bApplyGammaCorrection; // 0x457(0x01)
	struct ULocalPlayer* OwnerPlayer; // 0x458(0x08)
	struct FLinearColor BackgroundColor; // 0x460(0x10)
	struct FLinearColor TintColorAndOpacity; // 0x470(0x10)
	float OpacityFromTexture; // 0x480(0x04)
	enum class EWidgetBlendMode BlendMode; // 0x484(0x01)
	bool bIsTwoSided; // 0x485(0x01)
	bool TickWhenOffscreen; // 0x486(0x01)
	char pad_487[0x1]; // 0x487(0x01)
	struct UUserWidget* Widget; // 0x488(0x08)
	char pad_490[0x20]; // 0x490(0x20)
	struct UBodySetup* BodySetup; // 0x4b0(0x08)
	struct UMaterialInterface* TranslucentMaterial; // 0x4b8(0x08)
	struct UMaterialInterface* TranslucentMaterial_OneSided; // 0x4c0(0x08)
	struct UMaterialInterface* OpaqueMaterial; // 0x4c8(0x08)
	struct UMaterialInterface* OpaqueMaterial_OneSided; // 0x4d0(0x08)
	struct UMaterialInterface* MaskedMaterial; // 0x4d8(0x08)
	struct UMaterialInterface* MaskedMaterial_OneSided; // 0x4e0(0x08)
	struct UTextureRenderTarget2D* RenderTarget; // 0x4e8(0x08)
	struct UMaterialInstanceDynamic* MaterialInstance; // 0x4f0(0x08)
	bool bAddedToScreen; // 0x4f8(0x01)
	bool bEditTimeUsable; // 0x4f9(0x01)
	char pad_4FA[0x2]; // 0x4fa(0x02)
	struct FName SharedLayerName; // 0x4fc(0x08)
	int32_t LayerZOrder; // 0x504(0x04)
	enum class EWidgetGeometryMode GeometryMode; // 0x508(0x01)
	char pad_509[0x3]; // 0x509(0x03)
	float CylinderArcAngle; // 0x50c(0x04)
	char pad_510[0x30]; // 0x510(0x30)

	void SetWindowVisibility(enum class EWindowVisibility InVisibility); // Function UMG.WidgetComponent.SetWindowVisibility // (Final|Native|Public|BlueprintCallable) // @ game+0x24cf7d0
	void SetWindowFocusable(bool bInWindowFocusable); // Function UMG.WidgetComponent.SetWindowFocusable // (Final|Native|Public|BlueprintCallable) // @ game+0x24cf740
	void SetWidgetSpace(enum class EWidgetSpace NewSpace); // Function UMG.WidgetComponent.SetWidgetSpace // (Final|Native|Public|BlueprintCallable) // @ game+0x24cf6c0
	void SetWidget(struct UUserWidget* Widget); // Function UMG.WidgetComponent.SetWidget // (Native|Public|BlueprintCallable) // @ game+0x24cf630
	void SetTwoSided(bool bWantTwoSided); // Function UMG.WidgetComponent.SetTwoSided // (Final|Native|Public|BlueprintCallable) // @ game+0x24cf5a0
	void SetTintColorAndOpacity(struct FLinearColor NewTintColorAndOpacity); // Function UMG.WidgetComponent.SetTintColorAndOpacity // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x24cf520
	void SetTickWhenOffscreen(bool bWantTickWhenOffscreen); // Function UMG.WidgetComponent.SetTickWhenOffscreen // (Final|Native|Public|BlueprintCallable) // @ game+0x24cf4a0
	void SetRedrawTime(float InRedrawTime); // Function UMG.WidgetComponent.SetRedrawTime // (Final|Native|Public|BlueprintCallable) // @ game+0x24cf420
	void SetPivot(struct FVector2D InPivot); // Function UMG.WidgetComponent.SetPivot // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x24cf390
	void SetOwnerPlayer(struct ULocalPlayer* LocalPlayer); // Function UMG.WidgetComponent.SetOwnerPlayer // (Final|Native|Public|BlueprintCallable) // @ game+0x24cf310
	void SetManuallyRedraw(bool bUseManualRedraw); // Function UMG.WidgetComponent.SetManuallyRedraw // (Final|Native|Public|BlueprintCallable) // @ game+0x24cf280
	void SetGeometryMode(enum class EWidgetGeometryMode InGeometryMode); // Function UMG.WidgetComponent.SetGeometryMode // (Final|Native|Public|BlueprintCallable) // @ game+0x24cf200
	void SetDrawSize(struct FVector2D Size); // Function UMG.WidgetComponent.SetDrawSize // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x24cf100
	void SetDrawAtDesiredSize(bool bInDrawAtDesiredSize); // Function UMG.WidgetComponent.SetDrawAtDesiredSize // (Final|Native|Public|BlueprintCallable) // @ game+0x24cf080
	void SetCylinderArcAngle(float InCylinderArcAngle); // Function UMG.WidgetComponent.SetCylinderArcAngle // (Final|Native|Public|BlueprintCallable) // @ game+0x24cf000
	void SetBackgroundColor(struct FLinearColor NewBackgroundColor); // Function UMG.WidgetComponent.SetBackgroundColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x24ceea0
	void RequestRedraw(); // Function UMG.WidgetComponent.RequestRedraw // (Native|Public|BlueprintCallable) // @ game+0x24cecc0
	enum class EWindowVisibility GetWindowVisiblility(); // Function UMG.WidgetComponent.GetWindowVisiblility // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24ce540
	bool GetWindowFocusable(); // Function UMG.WidgetComponent.GetWindowFocusable // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24ce520
	enum class EWidgetSpace GetWidgetSpace(); // Function UMG.WidgetComponent.GetWidgetSpace // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24ce500
	struct UUserWidget* GetUserWidgetObject(); // Function UMG.WidgetComponent.GetUserWidgetObject // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24ce300
	bool GetTwoSided(); // Function UMG.WidgetComponent.GetTwoSided // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24ce2e0
	bool GetTickWhenOffscreen(); // Function UMG.WidgetComponent.GetTickWhenOffscreen // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24ce2c0
	struct UTextureRenderTarget2D* GetRenderTarget(); // Function UMG.WidgetComponent.GetRenderTarget // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24ce290
	float GetRedrawTime(); // Function UMG.WidgetComponent.GetRedrawTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x120e130
	struct FVector2D GetPivot(); // Function UMG.WidgetComponent.GetPivot // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x24ce1b0
	struct ULocalPlayer* GetOwnerPlayer(); // Function UMG.WidgetComponent.GetOwnerPlayer // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24ce180
	struct UMaterialInstanceDynamic* GetMaterialInstance(); // Function UMG.WidgetComponent.GetMaterialInstance // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24cdf60
	bool GetManuallyRedraw(); // Function UMG.WidgetComponent.GetManuallyRedraw // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x206d9a0
	enum class EWidgetGeometryMode GetGeometryMode(); // Function UMG.WidgetComponent.GetGeometryMode // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24cde90
	struct FVector2D GetDrawSize(); // Function UMG.WidgetComponent.GetDrawSize // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x24cde50
	bool GetDrawAtDesiredSize(); // Function UMG.WidgetComponent.GetDrawAtDesiredSize // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24cde30
	float GetCylinderArcAngle(); // Function UMG.WidgetComponent.GetCylinderArcAngle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24cde10
	struct FVector2D GetCurrentDrawSize(); // Function UMG.WidgetComponent.GetCurrentDrawSize // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x24cddd0
};

// Class UMG.TextLayoutWidget
// Size: 0x128 (Inherited: 0x108)
struct UTextLayoutWidget : UWidget {
	struct FShapedTextOptions ShapedTextOptions; // 0x108(0x03)
	enum class ETextJustify Justification; // 0x10b(0x01)
	enum class ETextWrappingPolicy WrappingPolicy; // 0x10c(0x01)
	char AutoWrapText : 1; // 0x10d(0x01)
	char pad_10D_1 : 7; // 0x10d(0x01)
	char pad_10E[0x2]; // 0x10e(0x02)
	float WrapTextAt; // 0x110(0x04)
	struct FMargin Margin; // 0x114(0x10)
	float LineHeightPercentage; // 0x124(0x04)

	void SetJustification(enum class ETextJustify InJustification); // Function UMG.TextLayoutWidget.SetJustification // (Native|Public|BlueprintCallable) // @ game+0x24bc220
};

// Class UMG.TextBlock
// Size: 0x2a0 (Inherited: 0x128)
struct UTextBlock : UTextLayoutWidget {
	struct FText Text; // 0x128(0x18)
	struct FDelegate TextDelegate; // 0x140(0x10)
	struct FSlateColor ColorAndOpacity; // 0x150(0x28)
	struct FDelegate ColorAndOpacityDelegate; // 0x178(0x10)
	struct FSlateFontInfo Font; // 0x188(0x50)
	struct FSlateBrush StrikeBrush; // 0x1d8(0x88)
	struct FVector2D ShadowOffset; // 0x260(0x08)
	struct FLinearColor ShadowColorAndOpacity; // 0x268(0x10)
	struct FDelegate ShadowColorAndOpacityDelegate; // 0x278(0x10)
	float MinDesiredWidth; // 0x288(0x04)
	bool bWrapWithInvalidationPanel; // 0x28c(0x01)
	bool bAutoWrapText; // 0x28d(0x01)
	bool bSimpleTextMode; // 0x28e(0x01)
	char pad_28F[0x11]; // 0x28f(0x11)

	void SetText(struct FText InText); // Function UMG.TextBlock.SetText // (Native|Public|BlueprintCallable) // @ game+0x24bcde0
	void SetStrikeBrush(struct FSlateBrush InStrikeBrush); // Function UMG.TextBlock.SetStrikeBrush // (Final|Native|Public|BlueprintCallable) // @ game+0x24bcbb0
	void SetShadowOffset(struct FVector2D InShadowOffset); // Function UMG.TextBlock.SetShadowOffset // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x24bc930
	void SetShadowColorAndOpacity(struct FLinearColor InShadowColorAndOpacity); // Function UMG.TextBlock.SetShadowColorAndOpacity // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x24bc8b0
	void SetOpacity(float InOpacity); // Function UMG.TextBlock.SetOpacity // (Final|Native|Public|BlueprintCallable) // @ game+0x24bc830
	void SetMinDesiredWidth(float InMinDesiredWidth); // Function UMG.TextBlock.SetMinDesiredWidth // (Final|Native|Public|BlueprintCallable) // @ game+0x24bc530
	void SetFont(struct FSlateFontInfo InFontInfo); // Function UMG.TextBlock.SetFont // (Final|Native|Public|BlueprintCallable) // @ game+0x24bbea0
	void SetColorAndOpacity(struct FSlateColor InColorAndOpacity); // Function UMG.TextBlock.SetColorAndOpacity // (Final|Native|Public|BlueprintCallable) // @ game+0x24bbc30
	void SetAutoWrapText(bool InAutoTextWrap); // Function UMG.TextBlock.SetAutoWrapText // (Final|Native|Public|BlueprintCallable) // @ game+0x24bbba0
	struct FText GetText(); // Function UMG.TextBlock.GetText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24bb7c0
	struct UMaterialInstanceDynamic* GetDynamicOutlineMaterial(); // Function UMG.TextBlock.GetDynamicOutlineMaterial // (Final|Native|Public|BlueprintCallable) // @ game+0x24bb5c0
	struct UMaterialInstanceDynamic* GetDynamicFontMaterial(); // Function UMG.TextBlock.GetDynamicFontMaterial // (Final|Native|Public|BlueprintCallable) // @ game+0x24bb590
};

// Class UMG.RichTextBlock
// Size: 0x668 (Inherited: 0x128)
struct URichTextBlock : UTextLayoutWidget {
	struct FText Text; // 0x128(0x18)
	struct UDataTable* TextStyleSet; // 0x140(0x08)
	struct TArray<struct URichTextBlockDecorator*> DecoratorClasses; // 0x148(0x10)
	bool bOverrideDefaultStyle; // 0x158(0x01)
	char pad_159[0x7]; // 0x159(0x07)
	struct FTextBlockStyle DefaultTextStyleOverride; // 0x160(0x268)
	float MinDesiredWidth; // 0x3c8(0x04)
	char pad_3CC[0x26c]; // 0x3cc(0x26c)
	struct TArray<struct URichTextBlockDecorator*> InstanceDecorators; // 0x638(0x10)
	char pad_648[0x20]; // 0x648(0x20)

	void SetTextStyleSet(struct UDataTable* NewTextStyleSet); // Function UMG.RichTextBlock.SetTextStyleSet // (Final|Native|Public|BlueprintCallable) // @ game+0x24b4800
	void SetText(struct FText InText); // Function UMG.RichTextBlock.SetText // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x24b4680
	void SetMinDesiredWidth(float InMinDesiredWidth); // Function UMG.RichTextBlock.SetMinDesiredWidth // (Final|Native|Public|BlueprintCallable) // @ game+0x24b4270
	void SetDefaultTextStyle(struct FTextBlockStyle InDefaultTextStyle); // Function UMG.RichTextBlock.SetDefaultTextStyle // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x24b3bf0
	void SetDefaultStrikeBrush(struct FSlateBrush InStrikeBrush); // Function UMG.RichTextBlock.SetDefaultStrikeBrush // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x24b3a70
	void SetDefaultShadowOffset(struct FVector2D InShadowOffset); // Function UMG.RichTextBlock.SetDefaultShadowOffset // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x24b39f0
	void SetDefaultShadowColorAndOpacity(struct FLinearColor InShadowColorAndOpacity); // Function UMG.RichTextBlock.SetDefaultShadowColorAndOpacity // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x24b3970
	void SetDefaultFont(struct FSlateFontInfo InFontInfo); // Function UMG.RichTextBlock.SetDefaultFont // (Final|Native|Public|BlueprintCallable) // @ game+0x24b3840
	void SetDefaultColorAndOpacity(struct FSlateColor InColorAndOpacity); // Function UMG.RichTextBlock.SetDefaultColorAndOpacity // (Final|Native|Public|BlueprintCallable) // @ game+0x24b3750
	void SetAutoWrapText(bool InAutoTextWrap); // Function UMG.RichTextBlock.SetAutoWrapText // (Final|Native|Public|BlueprintCallable) // @ game+0x24b36c0
	struct FText GetText(); // Function UMG.RichTextBlock.GetText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24b33f0
	struct URichTextBlockDecorator* GetDecoratorByClass(struct URichTextBlockDecorator* DecoratorClass); // Function UMG.RichTextBlock.GetDecoratorByClass // (Final|Native|Public|BlueprintCallable) // @ game+0x24b30b0
	void ClearAllDefaultStyleOverrides(); // Function UMG.RichTextBlock.ClearAllDefaultStyleOverrides // (Final|Native|Public) // @ game+0x24b2ea0
};

// Class UMG.AsyncTaskDownloadImage
// Size: 0x50 (Inherited: 0x30)
struct UAsyncTaskDownloadImage : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFail; // 0x40(0x10)

	struct UAsyncTaskDownloadImage* DownloadImage(struct FString URL); // Function UMG.AsyncTaskDownloadImage.DownloadImage // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x24a4ff0
};

// Class UMG.PanelWidget
// Size: 0x120 (Inherited: 0x108)
struct UPanelWidget : UWidget {
	struct TArray<struct UPanelSlot*> Slots; // 0x108(0x10)
	char pad_118[0x8]; // 0x118(0x08)

	bool RemoveChildAt(int32_t Index); // Function UMG.PanelWidget.RemoveChildAt // (Final|Native|Public|BlueprintCallable) // @ game+0x24b3610
	bool RemoveChild(struct UWidget* Content); // Function UMG.PanelWidget.RemoveChild // (Final|Native|Public|BlueprintCallable) // @ game+0x24b3580
	bool HasChild(struct UWidget* Content); // Function UMG.PanelWidget.HasChild // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24b34f0
	bool HasAnyChildren(); // Function UMG.PanelWidget.HasAnyChildren // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24b34c0
	int32_t GetChildrenCount(); // Function UMG.PanelWidget.GetChildrenCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24b3080
	int32_t GetChildIndex(struct UWidget* Content); // Function UMG.PanelWidget.GetChildIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24b2ff0
	struct UWidget* GetChildAt(int32_t Index); // Function UMG.PanelWidget.GetChildAt // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24b2f60
	struct TArray<struct UWidget*> GetAllChildren(); // Function UMG.PanelWidget.GetAllChildren // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24b2ee0
	void ClearChildren(); // Function UMG.PanelWidget.ClearChildren // (Native|Public|BlueprintCallable) // @ game+0x24b2ec0
	struct UPanelSlot* AddChild(struct UWidget* Content); // Function UMG.PanelWidget.AddChild // (Final|Native|Public|BlueprintCallable) // @ game+0x24b2d80
};

// Class UMG.ContentWidget
// Size: 0x120 (Inherited: 0x120)
struct UContentWidget : UPanelWidget {

	struct UPanelSlot* SetContent(struct UWidget* Content); // Function UMG.ContentWidget.SetContent // (Final|Native|Public|BlueprintCallable) // @ game+0x24aa250
	struct UPanelSlot* GetContentSlot(); // Function UMG.ContentWidget.GetContentSlot // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24a9a90
	struct UWidget* GetContent(); // Function UMG.ContentWidget.GetContent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24a9a60
};

// Class UMG.BackgroundBlur
// Size: 0x1d8 (Inherited: 0x120)
struct UBackgroundBlur : UContentWidget {
	struct FMargin Padding; // 0x120(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x130(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x131(0x01)
	bool bApplyAlphaToBlur; // 0x132(0x01)
	char pad_133[0x1]; // 0x133(0x01)
	float BlurStrength; // 0x134(0x04)
	bool bOverrideAutoRadiusCalculation; // 0x138(0x01)
	char pad_139[0x3]; // 0x139(0x03)
	int32_t BlurRadius; // 0x13c(0x04)
	struct FSlateBrush LowQualityFallbackBrush; // 0x140(0x88)
	char pad_1C8[0x10]; // 0x1c8(0x10)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.BackgroundBlur.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x24a6df0
	void SetPadding(struct FMargin InPadding); // Function UMG.BackgroundBlur.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x24a6740
	void SetLowQualityFallbackBrush(struct FSlateBrush InBrush); // Function UMG.BackgroundBlur.SetLowQualityFallbackBrush // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x24a63b0
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.BackgroundBlur.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x24a6000
	void SetBlurStrength(float InStrength); // Function UMG.BackgroundBlur.SetBlurStrength // (Native|Public|BlueprintCallable) // @ game+0x24a5980
	void SetBlurRadius(int32_t InBlurRadius); // Function UMG.BackgroundBlur.SetBlurRadius // (Final|Native|Public|BlueprintCallable) // @ game+0x24a5900
	void SetApplyAlphaToBlur(bool bInApplyAlphaToBlur); // Function UMG.BackgroundBlur.SetApplyAlphaToBlur // (Final|Native|Public|BlueprintCallable) // @ game+0x24a5760
};

// Class UMG.PanelSlot
// Size: 0x38 (Inherited: 0x28)
struct UPanelSlot : UVisual {
	struct UPanelWidget* Parent; // 0x28(0x08)
	struct UWidget* Content; // 0x30(0x08)
};

// Class UMG.BackgroundBlurSlot
// Size: 0x60 (Inherited: 0x38)
struct UBackgroundBlurSlot : UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x48(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x49(0x01)
	char pad_4A[0x16]; // 0x4a(0x16)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.BackgroundBlurSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x24a6e70
	void SetPadding(struct FMargin InPadding); // Function UMG.BackgroundBlurSlot.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x24a67d0
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.BackgroundBlurSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x24a6080
};

// Class UMG.PropertyBinding
// Size: 0x60 (Inherited: 0x28)
struct UPropertyBinding : UObject {
	struct TWeakObjectPtr<struct UObject> SourceObject; // 0x28(0x08)
	struct FDynamicPropertyPath SourcePath; // 0x30(0x28)
	struct FName DestinationProperty; // 0x58(0x08)
};

// Class UMG.BoolBinding
// Size: 0x60 (Inherited: 0x60)
struct UBoolBinding : UPropertyBinding {

	bool GetValue(); // Function UMG.BoolBinding.GetValue // (Final|Native|Public|Const) // @ game+0x24a53a0
};

// Class UMG.Border
// Size: 0x270 (Inherited: 0x120)
struct UBorder : UContentWidget {
	enum class EHorizontalAlignment HorizontalAlignment; // 0x120(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x121(0x01)
	char bShowEffectWhenDisabled : 1; // 0x122(0x01)
	char pad_122_1 : 7; // 0x122(0x01)
	char pad_123[0x1]; // 0x123(0x01)
	struct FLinearColor ContentColorAndOpacity; // 0x124(0x10)
	struct FDelegate ContentColorAndOpacityDelegate; // 0x134(0x10)
	struct FMargin Padding; // 0x144(0x10)
	char pad_154[0x4]; // 0x154(0x04)
	struct FSlateBrush Background; // 0x158(0x88)
	struct FDelegate BackgroundDelegate; // 0x1e0(0x10)
	struct FLinearColor BrushColor; // 0x1f0(0x10)
	struct FDelegate BrushColorDelegate; // 0x200(0x10)
	struct FVector2D DesiredSizeScale; // 0x210(0x08)
	bool bFlipForRightToLeftFlowDirection; // 0x218(0x01)
	char pad_219[0x3]; // 0x219(0x03)
	struct FDelegate OnMouseButtonDownEvent; // 0x21c(0x10)
	struct FDelegate OnMouseButtonUpEvent; // 0x22c(0x10)
	struct FDelegate OnMouseMoveEvent; // 0x23c(0x10)
	struct FDelegate OnMouseDoubleClickEvent; // 0x24c(0x10)
	char pad_25C[0x14]; // 0x25c(0x14)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.Border.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x24a6ef0
	void SetPadding(struct FMargin InPadding); // Function UMG.Border.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x24a6860
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.Border.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x24a6100
	void SetDesiredSizeScale(struct FVector2D InScale); // Function UMG.Border.SetDesiredSizeScale // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x24a5f80
	void SetContentColorAndOpacity(struct FLinearColor InContentColorAndOpacity); // Function UMG.Border.SetContentColorAndOpacity // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x24a5f00
	void SetBrushFromTexture(struct UTexture2D* Texture); // Function UMG.Border.SetBrushFromTexture // (Final|Native|Public|BlueprintCallable) // @ game+0x24a5d00
	void SetBrushFromMaterial(struct UMaterialInterface* Material); // Function UMG.Border.SetBrushFromMaterial // (Final|Native|Public|BlueprintCallable) // @ game+0x24a5c80
	void SetBrushFromAsset(struct USlateBrushAsset* Asset); // Function UMG.Border.SetBrushFromAsset // (Final|Native|Public|BlueprintCallable) // @ game+0x24a5c00
	void SetBrushColor(struct FLinearColor InBrushColor); // Function UMG.Border.SetBrushColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x24a5b80
	void SetBrush(struct FSlateBrush InBrush); // Function UMG.Border.SetBrush // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x24a5a00
	struct UMaterialInstanceDynamic* GetDynamicMaterial(); // Function UMG.Border.GetDynamicMaterial // (Final|Native|Public|BlueprintCallable) // @ game+0x24a51b0
};

// Class UMG.BorderSlot
// Size: 0x60 (Inherited: 0x38)
struct UBorderSlot : UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x48(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x49(0x01)
	char pad_4A[0x16]; // 0x4a(0x16)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.BorderSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x24a6f70
	void SetPadding(struct FMargin InPadding); // Function UMG.BorderSlot.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x24a68f0
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.BorderSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x24a6180
};

// Class UMG.BrushBinding
// Size: 0x68 (Inherited: 0x60)
struct UBrushBinding : UPropertyBinding {
	char pad_60[0x8]; // 0x60(0x08)

	struct FSlateBrush GetValue(); // Function UMG.BrushBinding.GetValue // (Final|Native|Public|Const) // @ game+0x24a53d0
};

// Class UMG.Button
// Size: 0x428 (Inherited: 0x120)
struct UButton : UContentWidget {
	struct USlateWidgetStyleAsset* Style; // 0x120(0x08)
	struct FButtonStyle WidgetStyle; // 0x128(0x278)
	struct FLinearColor ColorAndOpacity; // 0x3a0(0x10)
	struct FLinearColor BackgroundColor; // 0x3b0(0x10)
	enum class EButtonClickMethod ClickMethod; // 0x3c0(0x01)
	enum class EButtonTouchMethod TouchMethod; // 0x3c1(0x01)
	enum class EButtonPressMethod PressMethod; // 0x3c2(0x01)
	bool IsFocusable; // 0x3c3(0x01)
	char pad_3C4[0x4]; // 0x3c4(0x04)
	struct FMulticastInlineDelegate OnClicked; // 0x3c8(0x10)
	struct FMulticastInlineDelegate OnPressed; // 0x3d8(0x10)
	struct FMulticastInlineDelegate OnReleased; // 0x3e8(0x10)
	struct FMulticastInlineDelegate OnHovered; // 0x3f8(0x10)
	struct FMulticastInlineDelegate OnUnhovered; // 0x408(0x10)
	char pad_418[0x10]; // 0x418(0x10)

	void SetTouchMethod(enum class EButtonTouchMethod InTouchMethod); // Function UMG.Button.SetTouchMethod // (Final|Native|Public|BlueprintCallable) // @ game+0x24a6d70
	void SetStyle(struct FButtonStyle InStyle); // Function UMG.Button.SetStyle // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x24a6c90
	void SetPressMethod(enum class EButtonPressMethod InPressMethod); // Function UMG.Button.SetPressMethod // (Final|Native|Public|BlueprintCallable) // @ game+0x24a6b10
	void SetColorAndOpacity(struct FLinearColor InColorAndOpacity); // Function UMG.Button.SetColorAndOpacity // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x24a5e80
	void SetClickMethod(enum class EButtonClickMethod InClickMethod); // Function UMG.Button.SetClickMethod // (Final|Native|Public|BlueprintCallable) // @ game+0x24a5e00
	void SetBackgroundColor(struct FLinearColor InBackgroundColor); // Function UMG.Button.SetBackgroundColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x24a5880
	bool IsPressed(); // Function UMG.Button.IsPressed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24a55f0
};

// Class UMG.ButtonSlot
// Size: 0x60 (Inherited: 0x38)
struct UButtonSlot : UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x48(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x49(0x01)
	char pad_4A[0x16]; // 0x4a(0x16)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.ButtonSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x24a6ff0
	void SetPadding(struct FMargin InPadding); // Function UMG.ButtonSlot.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x24a6980
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.ButtonSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x24a6200
};

// Class UMG.CanvasPanel
// Size: 0x130 (Inherited: 0x120)
struct UCanvasPanel : UPanelWidget {
	char pad_120[0x10]; // 0x120(0x10)

	struct UCanvasPanelSlot* AddChildToCanvas(struct UWidget* Content); // Function UMG.CanvasPanel.AddChildToCanvas // (Final|Native|Public|BlueprintCallable) // @ game+0x24a4f60
};

// Class UMG.CanvasPanelSlot
// Size: 0x70 (Inherited: 0x38)
struct UCanvasPanelSlot : UPanelSlot {
	struct FAnchorData LayoutData; // 0x38(0x28)
	bool bAutoSize; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	int32_t ZOrder; // 0x64(0x04)
	char pad_68[0x8]; // 0x68(0x08)

	void SetZOrder(int32_t InZOrder); // Function UMG.CanvasPanelSlot.SetZOrder // (Final|Native|Public|BlueprintCallable) // @ game+0x24a7070
	void SetSize(struct FVector2D InSize); // Function UMG.CanvasPanelSlot.SetSize // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x24a6c10
	void SetPosition(struct FVector2D InPosition); // Function UMG.CanvasPanelSlot.SetPosition // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x24a6a90
	void SetOffsets(struct FMargin InOffset); // Function UMG.CanvasPanelSlot.SetOffsets // (Final|Native|Public|BlueprintCallable) // @ game+0x24a66b0
	void SetMinimum(struct FVector2D InMinimumAnchors); // Function UMG.CanvasPanelSlot.SetMinimum // (Final|Native|Public|HasDefaults) // @ game+0x24a65b0
	void SetMaximum(struct FVector2D InMaximumAnchors); // Function UMG.CanvasPanelSlot.SetMaximum // (Final|Native|Public|HasDefaults) // @ game+0x24a6530
	void SetLayout(struct FAnchorData InLayoutData); // Function UMG.CanvasPanelSlot.SetLayout // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x24a6310
	void SetAutoSize(bool InbAutoSize); // Function UMG.CanvasPanelSlot.SetAutoSize // (Final|Native|Public|BlueprintCallable) // @ game+0x24a57f0
	void SetAnchors(struct FAnchors InAnchors); // Function UMG.CanvasPanelSlot.SetAnchors // (Final|Native|Public|BlueprintCallable) // @ game+0x24a56d0
	void SetAlignment(struct FVector2D InAlignment); // Function UMG.CanvasPanelSlot.SetAlignment // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x24a5650
	int32_t GetZOrder(); // Function UMG.CanvasPanelSlot.GetZOrder // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24a5590
	struct FVector2D GetSize(); // Function UMG.CanvasPanelSlot.GetSize // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x24a52f0
	struct FVector2D GetPosition(); // Function UMG.CanvasPanelSlot.GetPosition // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x24a52b0
	struct FMargin GetOffsets(); // Function UMG.CanvasPanelSlot.GetOffsets // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24a5270
	struct FAnchorData GetLayout(); // Function UMG.CanvasPanelSlot.GetLayout // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24a51e0
	bool GetAutoSize(); // Function UMG.CanvasPanelSlot.GetAutoSize // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24a5150
	struct FAnchors GetAnchors(); // Function UMG.CanvasPanelSlot.GetAnchors // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24a5110
	struct FVector2D GetAlignment(); // Function UMG.CanvasPanelSlot.GetAlignment // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x24a50d0
};

// Class UMG.CheckBox
// Size: 0x770 (Inherited: 0x120)
struct UCheckBox : UContentWidget {
	enum class ECheckBoxState CheckedState; // 0x120(0x01)
	char pad_121[0x3]; // 0x121(0x03)
	struct FDelegate CheckedStateDelegate; // 0x124(0x10)
	char pad_134[0x4]; // 0x134(0x04)
	struct FCheckBoxStyle WidgetStyle; // 0x138(0x580)
	struct USlateWidgetStyleAsset* Style; // 0x6b8(0x08)
	struct USlateBrushAsset* UncheckedImage; // 0x6c0(0x08)
	struct USlateBrushAsset* UncheckedHoveredImage; // 0x6c8(0x08)
	struct USlateBrushAsset* UncheckedPressedImage; // 0x6d0(0x08)
	struct USlateBrushAsset* CheckedImage; // 0x6d8(0x08)
	struct USlateBrushAsset* CheckedHoveredImage; // 0x6e0(0x08)
	struct USlateBrushAsset* CheckedPressedImage; // 0x6e8(0x08)
	struct USlateBrushAsset* UndeterminedImage; // 0x6f0(0x08)
	struct USlateBrushAsset* UndeterminedHoveredImage; // 0x6f8(0x08)
	struct USlateBrushAsset* UndeterminedPressedImage; // 0x700(0x08)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x708(0x01)
	char pad_709[0x3]; // 0x709(0x03)
	struct FMargin Padding; // 0x70c(0x10)
	char pad_71C[0x4]; // 0x71c(0x04)
	struct FSlateColor BorderBackgroundColor; // 0x720(0x28)
	bool IsFocusable; // 0x748(0x01)
	char pad_749[0x7]; // 0x749(0x07)
	struct FMulticastInlineDelegate OnCheckStateChanged; // 0x750(0x10)
	char pad_760[0x10]; // 0x760(0x10)

	void SetIsChecked(bool InIsChecked); // Function UMG.CheckBox.SetIsChecked // (Final|Native|Public|BlueprintCallable) // @ game+0x24a6280
	void SetCheckedState(enum class ECheckBoxState InCheckedState); // Function UMG.CheckBox.SetCheckedState // (Final|Native|Public|BlueprintCallable) // @ game+0x24a5d80
	bool IsPressed(); // Function UMG.CheckBox.IsPressed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24a5620
	bool IsChecked(); // Function UMG.CheckBox.IsChecked // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24a55c0
	enum class ECheckBoxState GetCheckedState(); // Function UMG.CheckBox.GetCheckedState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24a5180
};

// Class UMG.CheckedStateBinding
// Size: 0x68 (Inherited: 0x60)
struct UCheckedStateBinding : UPropertyBinding {
	char pad_60[0x8]; // 0x60(0x08)

	enum class ECheckBoxState GetValue(); // Function UMG.CheckedStateBinding.GetValue // (Final|Native|Public|Const) // @ game+0x24a5560
};

// Class UMG.CircularThrobber
// Size: 0x1c0 (Inherited: 0x108)
struct UCircularThrobber : UWidget {
	int32_t NumberOfPieces; // 0x108(0x04)
	float Period; // 0x10c(0x04)
	float Radius; // 0x110(0x04)
	char pad_114[0x4]; // 0x114(0x04)
	struct USlateBrushAsset* PieceImage; // 0x118(0x08)
	struct FSlateBrush Image; // 0x120(0x88)
	bool bEnableRadius; // 0x1a8(0x01)
	char pad_1A9[0x17]; // 0x1a9(0x17)

	void SetRadius(float InRadius); // Function UMG.CircularThrobber.SetRadius // (Final|Native|Public|BlueprintCallable) // @ game+0x24a6b90
	void SetPeriod(float InPeriod); // Function UMG.CircularThrobber.SetPeriod // (Final|Native|Public|BlueprintCallable) // @ game+0x24a6a10
	void SetNumberOfPieces(int32_t InNumberOfPieces); // Function UMG.CircularThrobber.SetNumberOfPieces // (Final|Native|Public|BlueprintCallable) // @ game+0x24a6630
};

// Class UMG.ColorBinding
// Size: 0x68 (Inherited: 0x60)
struct UColorBinding : UPropertyBinding {
	char pad_60[0x8]; // 0x60(0x08)

	struct FSlateColor GetSlateValue(); // Function UMG.ColorBinding.GetSlateValue // (Final|Native|Public|Const) // @ game+0x24a5330
	struct FLinearColor GetLinearValue(); // Function UMG.ColorBinding.GetLinearValue // (Final|Native|Public|HasDefaults|Const) // @ game+0x24a5230
};

// Class UMG.ComboBox
// Size: 0x140 (Inherited: 0x108)
struct UComboBox : UWidget {
	struct TArray<struct UObject*> Items; // 0x108(0x10)
	struct FDelegate OnGenerateWidgetEvent; // 0x118(0x10)
	bool bIsFocusable; // 0x128(0x01)
	char pad_129[0x17]; // 0x129(0x17)
};

// Class UMG.ComboBoxString
// Size: 0xdf8 (Inherited: 0x108)
struct UComboBoxString : UWidget {
	struct TArray<struct FString> DefaultOptions; // 0x108(0x10)
	struct FString SelectedOption; // 0x118(0x10)
	struct FComboBoxStyle WidgetStyle; // 0x128(0x3f0)
	struct FTableRowStyle ItemStyle; // 0x518(0x7c8)
	struct FMargin ContentPadding; // 0xce0(0x10)
	float MaxListHeight; // 0xcf0(0x04)
	bool HasDownArrow; // 0xcf4(0x01)
	bool EnableGamepadNavigationMode; // 0xcf5(0x01)
	char pad_CF6[0x2]; // 0xcf6(0x02)
	struct FSlateFontInfo Font; // 0xcf8(0x50)
	struct FSlateColor ForegroundColor; // 0xd48(0x28)
	bool bIsFocusable; // 0xd70(0x01)
	char pad_D71[0x3]; // 0xd71(0x03)
	struct FDelegate OnGenerateWidgetEvent; // 0xd74(0x10)
	char pad_D84[0x4]; // 0xd84(0x04)
	struct FMulticastInlineDelegate OnSelectionChanged; // 0xd88(0x10)
	struct FMulticastInlineDelegate OnOpening; // 0xd98(0x10)
	char pad_DA8[0x50]; // 0xda8(0x50)

	void SetSelectedOption(struct FString Option); // Function UMG.ComboBoxString.SetSelectedOption // (Final|Native|Public|BlueprintCallable) // @ game+0x24aaed0
	void SetSelectedIndex(int32_t Index); // Function UMG.ComboBoxString.SetSelectedIndex // (Final|Native|Public|BlueprintCallable) // @ game+0x24aae50
	bool RemoveOption(struct FString Option); // Function UMG.ComboBoxString.RemoveOption // (Final|Native|Public|BlueprintCallable) // @ game+0x24a9f40
	void RefreshOptions(); // Function UMG.ComboBoxString.RefreshOptions // (Final|Native|Public|BlueprintCallable) // @ game+0x24a9ea0
	void OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, enum class ESelectInfo SelectionType); // DelegateFunction UMG.ComboBoxString.OnSelectionChangedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x158ca90
	void OnOpeningEvent__DelegateSignature(); // DelegateFunction UMG.ComboBoxString.OnOpeningEvent__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x158ca90
	bool IsOpen(); // Function UMG.ComboBoxString.IsOpen // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24a9e70
	struct FString GetSelectedOption(); // Function UMG.ComboBoxString.GetSelectedOption // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24a9c50
	int32_t GetSelectedIndex(); // Function UMG.ComboBoxString.GetSelectedIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24a9c20
	int32_t GetOptionCount(); // Function UMG.ComboBoxString.GetOptionCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24a9bf0
	struct FString GetOptionAtIndex(int32_t Index); // Function UMG.ComboBoxString.GetOptionAtIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24a9b20
	int32_t FindOptionIndex(struct FString Option); // Function UMG.ComboBoxString.FindOptionIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24a9920
	void ClearSelection(); // Function UMG.ComboBoxString.ClearSelection // (Final|Native|Public|BlueprintCallable) // @ game+0x24a9570
	void ClearOptions(); // Function UMG.ComboBoxString.ClearOptions // (Final|Native|Public|BlueprintCallable) // @ game+0x24a9550
	void AddOption(struct FString Option); // Function UMG.ComboBoxString.AddOption // (Final|Native|Public|BlueprintCallable) // @ game+0x24a93d0
};

// Class UMG.DragDropOperation
// Size: 0x88 (Inherited: 0x28)
struct UDragDropOperation : UObject {
	struct FString Tag; // 0x28(0x10)
	struct UObject* Payload; // 0x38(0x08)
	struct UWidget* DefaultDragVisual; // 0x40(0x08)
	enum class EDragPivot Pivot; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	struct FVector2D Offset; // 0x4c(0x08)
	char pad_54[0x4]; // 0x54(0x04)
	struct FMulticastInlineDelegate OnDrop; // 0x58(0x10)
	struct FMulticastInlineDelegate OnDragCancelled; // 0x68(0x10)
	struct FMulticastInlineDelegate OnDragged; // 0x78(0x10)

	void Drop(struct FPointerEvent PointerEvent); // Function UMG.DragDropOperation.Drop // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x24a97f0
	void Dragged(struct FPointerEvent PointerEvent); // Function UMG.DragDropOperation.Dragged // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x24a96c0
	void DragCancelled(struct FPointerEvent PointerEvent); // Function UMG.DragDropOperation.DragCancelled // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x24a9590
};

// Class UMG.DynamicEntryBoxBase
// Size: 0x1c8 (Inherited: 0x108)
struct UDynamicEntryBoxBase : UWidget {
	enum class EDynamicBoxType EntryBoxType; // 0x108(0x01)
	char pad_109[0x3]; // 0x109(0x03)
	struct FVector2D EntrySpacing; // 0x10c(0x08)
	char pad_114[0x4]; // 0x114(0x04)
	struct TArray<struct FVector2D> SpacingPattern; // 0x118(0x10)
	struct FSlateChildSize EntrySizeRule; // 0x128(0x08)
	enum class EHorizontalAlignment EntryHorizontalAlignment; // 0x130(0x01)
	enum class EVerticalAlignment EntryVerticalAlignment; // 0x131(0x01)
	char pad_132[0x2]; // 0x132(0x02)
	int32_t MaxElementSize; // 0x134(0x04)
	char pad_138[0x10]; // 0x138(0x10)
	struct FUserWidgetPool EntryWidgetPool; // 0x148(0x80)

	void SetEntrySpacing(struct FVector2D InEntrySpacing); // Function UMG.DynamicEntryBoxBase.SetEntrySpacing // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x24aa2e0
	int32_t GetNumEntries(); // Function UMG.DynamicEntryBoxBase.GetNumEntries // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24a9af0
	struct TArray<struct UUserWidget*> GetAllEntries(); // Function UMG.DynamicEntryBoxBase.GetAllEntries // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24a99d0
};

// Class UMG.DynamicEntryBox
// Size: 0x1d0 (Inherited: 0x1c8)
struct UDynamicEntryBox : UDynamicEntryBoxBase {
	struct UUserWidget* EntryWidgetClass; // 0x1c8(0x08)

	void Reset(bool bDeleteWidgets); // Function UMG.DynamicEntryBox.Reset // (Final|Native|Public|BlueprintCallable) // @ game+0x24a9ff0
	void RemoveEntry(struct UUserWidget* EntryWidget); // Function UMG.DynamicEntryBox.RemoveEntry // (Final|Native|Public|BlueprintCallable) // @ game+0x24a9ec0
	struct UUserWidget* BP_CreateEntryOfClass(struct UUserWidget* EntryClass); // Function UMG.DynamicEntryBox.BP_CreateEntryOfClass // (Final|Native|Private|BlueprintCallable) // @ game+0x24a94a0
	struct UUserWidget* BP_CreateEntry(); // Function UMG.DynamicEntryBox.BP_CreateEntry // (Final|Native|Private|BlueprintCallable) // @ game+0x24a9470
};

// Class UMG.EditableText
// Size: 0x450 (Inherited: 0x108)
struct UEditableText : UWidget {
	struct FText Text; // 0x108(0x18)
	struct FDelegate TextDelegate; // 0x120(0x10)
	struct FText HintText; // 0x130(0x18)
	struct FDelegate HintTextDelegate; // 0x148(0x10)
	struct FEditableTextStyle WidgetStyle; // 0x158(0x218)
	struct USlateWidgetStyleAsset* Style; // 0x370(0x08)
	struct USlateBrushAsset* BackgroundImageSelected; // 0x378(0x08)
	struct USlateBrushAsset* BackgroundImageComposing; // 0x380(0x08)
	struct USlateBrushAsset* CaretImage; // 0x388(0x08)
	struct FSlateFontInfo Font; // 0x390(0x50)
	struct FSlateColor ColorAndOpacity; // 0x3e0(0x28)
	bool IsReadOnly; // 0x408(0x01)
	bool IsPassword; // 0x409(0x01)
	char pad_40A[0x2]; // 0x40a(0x02)
	float MinimumDesiredWidth; // 0x40c(0x04)
	bool IsCaretMovedWhenGainFocus; // 0x410(0x01)
	bool SelectAllTextWhenFocused; // 0x411(0x01)
	bool RevertTextOnEscape; // 0x412(0x01)
	bool ClearKeyboardFocusOnCommit; // 0x413(0x01)
	bool SelectAllTextOnCommit; // 0x414(0x01)
	bool AllowContextMenu; // 0x415(0x01)
	enum class EVirtualKeyboardType KeyboardType; // 0x416(0x01)
	struct FVirtualKeyboardOptions VirtualKeyboardOptions; // 0x417(0x01)
	enum class EVirtualKeyboardTrigger VirtualKeyboardTrigger; // 0x418(0x01)
	enum class EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0x419(0x01)
	enum class ETextJustify Justification; // 0x41a(0x01)
	struct FShapedTextOptions ShapedTextOptions; // 0x41b(0x03)
	char pad_41E[0x2]; // 0x41e(0x02)
	struct FMulticastInlineDelegate OnTextChanged; // 0x420(0x10)
	struct FMulticastInlineDelegate OnTextCommitted; // 0x430(0x10)
	char pad_440[0x10]; // 0x440(0x10)

	void SetText(struct FText InText); // Function UMG.EditableText.SetText // (Final|Native|Public|BlueprintCallable) // @ game+0x24aafb0
	void SetJustification(enum class ETextJustify InJustification); // Function UMG.EditableText.SetJustification // (Final|Native|Public|BlueprintCallable) // @ game+0x24aa9f0
	void SetIsReadOnly(bool InbIsReadyOnly); // Function UMG.EditableText.SetIsReadOnly // (Final|Native|Public|BlueprintCallable) // @ game+0x24aa8d0
	void SetIsPassword(bool InbIsPassword); // Function UMG.EditableText.SetIsPassword // (Final|Native|Public|BlueprintCallable) // @ game+0x24aa7b0
	void SetHintText(struct FText InHintText); // Function UMG.EditableText.SetHintText // (Final|Native|Public|BlueprintCallable) // @ game+0x24aa450
	void OnEditableTextCommittedEvent__DelegateSignature(struct FText Text, enum class ETextCommit CommitMethod); // DelegateFunction UMG.EditableText.OnEditableTextCommittedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x158ca90
	void OnEditableTextChangedEvent__DelegateSignature(struct FText Text); // DelegateFunction UMG.EditableText.OnEditableTextChangedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x158ca90
	struct FText GetText(); // Function UMG.EditableText.GetText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24a9cd0
};

// Class UMG.EditableTextBox
// Size: 0xa28 (Inherited: 0x108)
struct UEditableTextBox : UWidget {
	struct FText Text; // 0x108(0x18)
	struct FDelegate TextDelegate; // 0x120(0x10)
	struct FEditableTextBoxStyle WidgetStyle; // 0x130(0x7f0)
	struct USlateWidgetStyleAsset* Style; // 0x920(0x08)
	struct FText HintText; // 0x928(0x18)
	struct FDelegate HintTextDelegate; // 0x940(0x10)
	struct FSlateFontInfo Font; // 0x950(0x50)
	struct FLinearColor ForegroundColor; // 0x9a0(0x10)
	struct FLinearColor BackgroundColor; // 0x9b0(0x10)
	struct FLinearColor ReadOnlyForegroundColor; // 0x9c0(0x10)
	bool IsReadOnly; // 0x9d0(0x01)
	bool IsPassword; // 0x9d1(0x01)
	char pad_9D2[0x2]; // 0x9d2(0x02)
	float MinimumDesiredWidth; // 0x9d4(0x04)
	struct FMargin Padding; // 0x9d8(0x10)
	bool IsCaretMovedWhenGainFocus; // 0x9e8(0x01)
	bool SelectAllTextWhenFocused; // 0x9e9(0x01)
	bool RevertTextOnEscape; // 0x9ea(0x01)
	bool ClearKeyboardFocusOnCommit; // 0x9eb(0x01)
	bool SelectAllTextOnCommit; // 0x9ec(0x01)
	bool AllowContextMenu; // 0x9ed(0x01)
	enum class EVirtualKeyboardType KeyboardType; // 0x9ee(0x01)
	struct FVirtualKeyboardOptions VirtualKeyboardOptions; // 0x9ef(0x01)
	enum class EVirtualKeyboardTrigger VirtualKeyboardTrigger; // 0x9f0(0x01)
	enum class EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0x9f1(0x01)
	enum class ETextJustify Justification; // 0x9f2(0x01)
	struct FShapedTextOptions ShapedTextOptions; // 0x9f3(0x03)
	char pad_9F6[0x2]; // 0x9f6(0x02)
	struct FMulticastInlineDelegate OnTextChanged; // 0x9f8(0x10)
	struct FMulticastInlineDelegate OnTextCommitted; // 0xa08(0x10)
	char pad_A18[0x10]; // 0xa18(0x10)

	void SetText(struct FText InText); // Function UMG.EditableTextBox.SetText // (Final|Native|Public|BlueprintCallable) // @ game+0x24ab090
	void SetJustification(enum class ETextJustify InJustification); // Function UMG.EditableTextBox.SetJustification // (Final|Native|Public|BlueprintCallable) // @ game+0x24aaa70
	void SetIsReadOnly(bool bReadOnly); // Function UMG.EditableTextBox.SetIsReadOnly // (Final|Native|Public|BlueprintCallable) // @ game+0x24aa960
	void SetIsPassword(bool bIsPassword); // Function UMG.EditableTextBox.SetIsPassword // (Final|Native|Public|BlueprintCallable) // @ game+0x24aa840
	void SetHintText(struct FText InText); // Function UMG.EditableTextBox.SetHintText // (Final|Native|Public|BlueprintCallable) // @ game+0x24aa530
	void SetError(struct FText InError); // Function UMG.EditableTextBox.SetError // (Final|Native|Public|BlueprintCallable) // @ game+0x24aa370
	void OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText Text, enum class ETextCommit CommitMethod); // DelegateFunction UMG.EditableTextBox.OnEditableTextBoxCommittedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x158ca90
	void OnEditableTextBoxChangedEvent__DelegateSignature(struct FText Text); // DelegateFunction UMG.EditableTextBox.OnEditableTextBoxChangedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x158ca90
	bool HasError(); // Function UMG.EditableTextBox.HasError // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24a9e40
	struct FText GetText(); // Function UMG.EditableTextBox.GetText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24a9d70
	void ClearError(); // Function UMG.EditableTextBox.ClearError // (Final|Native|Public|BlueprintCallable) // @ game+0x24a9530
};

// Class UMG.ExpandableArea
// Size: 0x338 (Inherited: 0x108)
struct UExpandableArea : UWidget {
	char pad_108[0x8]; // 0x108(0x08)
	struct FExpandableAreaStyle Style; // 0x110(0x120)
	struct FSlateBrush BorderBrush; // 0x230(0x88)
	struct FSlateColor BorderColor; // 0x2b8(0x28)
	bool bIsExpanded; // 0x2e0(0x01)
	char pad_2E1[0x3]; // 0x2e1(0x03)
	float MaxHeight; // 0x2e4(0x04)
	struct FMargin HeaderPadding; // 0x2e8(0x10)
	struct FMargin AreaPadding; // 0x2f8(0x10)
	struct FMulticastInlineDelegate OnExpansionChanged; // 0x308(0x10)
	struct UWidget* HeaderContent; // 0x318(0x08)
	struct UWidget* BodyContent; // 0x320(0x08)
	char pad_328[0x10]; // 0x328(0x10)

	void SetIsExpanded_Animated(bool IsExpanded); // Function UMG.ExpandableArea.SetIsExpanded_Animated // (Final|Native|Public|BlueprintCallable) // @ game+0x24aa720
	void SetIsExpanded(bool IsExpanded); // Function UMG.ExpandableArea.SetIsExpanded // (Final|Native|Public|BlueprintCallable) // @ game+0x24aa690
	bool GetIsExpanded(); // Function UMG.ExpandableArea.GetIsExpanded // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24a9ac0
};

// Class UMG.FloatBinding
// Size: 0x60 (Inherited: 0x60)
struct UFloatBinding : UPropertyBinding {

	float GetValue(); // Function UMG.FloatBinding.GetValue // (Final|Native|Public|Const) // @ game+0x24a9e10
};

// Class UMG.GridPanel
// Size: 0x150 (Inherited: 0x120)
struct UGridPanel : UPanelWidget {
	struct TArray<float> ColumnFill; // 0x120(0x10)
	struct TArray<float> RowFill; // 0x130(0x10)
	char pad_140[0x10]; // 0x140(0x10)

	void SetRowFill(int32_t ColumnIndex, float Coefficient); // Function UMG.GridPanel.SetRowFill // (Final|Native|Public|BlueprintCallable) // @ game+0x24aad00
	void SetColumnFill(int32_t ColumnIndex, float Coefficient); // Function UMG.GridPanel.SetColumnFill // (Final|Native|Public|BlueprintCallable) // @ game+0x24aa100
	struct UGridSlot* AddChildToGrid(struct UWidget* Content, int32_t InRow, int32_t InColumn); // Function UMG.GridPanel.AddChildToGrid // (Final|Native|Public|BlueprintCallable) // @ game+0x24a92d0
};

// Class UMG.GridSlot
// Size: 0x70 (Inherited: 0x38)
struct UGridSlot : UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x48(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x49(0x01)
	char pad_4A[0x2]; // 0x4a(0x02)
	int32_t Row; // 0x4c(0x04)
	int32_t RowSpan; // 0x50(0x04)
	int32_t Column; // 0x54(0x04)
	int32_t ColumnSpan; // 0x58(0x04)
	int32_t Layer; // 0x5c(0x04)
	struct FVector2D Nudge; // 0x60(0x08)
	char pad_68[0x8]; // 0x68(0x08)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.GridSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x24ab170
	void SetRowSpan(int32_t InRowSpan); // Function UMG.GridSlot.SetRowSpan // (Final|Native|Public|BlueprintCallable) // @ game+0x24aadd0
	void SetRow(int32_t InRow); // Function UMG.GridSlot.SetRow // (Final|Native|Public|BlueprintCallable) // @ game+0x24aac80
	void SetPadding(struct FMargin InPadding); // Function UMG.GridSlot.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x24aabf0
	void SetNudge(struct FVector2D InNudge); // Function UMG.GridSlot.SetNudge // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x24aab70
	void SetLayer(int32_t InLayer); // Function UMG.GridSlot.SetLayer // (Final|Native|Public|BlueprintCallable) // @ game+0x24aaaf0
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.GridSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x24aa610
	void SetColumnSpan(int32_t InColumnSpan); // Function UMG.GridSlot.SetColumnSpan // (Final|Native|Public|BlueprintCallable) // @ game+0x24aa1d0
	void SetColumn(int32_t InColumn); // Function UMG.GridSlot.SetColumn // (Final|Native|Public|BlueprintCallable) // @ game+0x24aa080
};

// Class UMG.HorizontalBox
// Size: 0x130 (Inherited: 0x120)
struct UHorizontalBox : UPanelWidget {
	char pad_120[0x10]; // 0x120(0x10)

	struct UHorizontalBoxSlot* AddChildToHorizontalBox(struct UWidget* Content); // Function UMG.HorizontalBox.AddChildToHorizontalBox // (Final|Native|Public|BlueprintCallable) // @ game+0x24ad550
};

// Class UMG.HorizontalBoxSlot
// Size: 0x60 (Inherited: 0x38)
struct UHorizontalBoxSlot : UPanelSlot {
	char pad_38[0x8]; // 0x38(0x08)
	struct FMargin Padding; // 0x40(0x10)
	struct FSlateChildSize Size; // 0x50(0x08)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x58(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x59(0x01)
	char pad_5A[0x6]; // 0x5a(0x06)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.HorizontalBoxSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x24af940
	void SetSize(struct FSlateChildSize InSize); // Function UMG.HorizontalBoxSlot.SetSize // (Final|Native|Public|BlueprintCallable) // @ game+0x24af830
	void SetPadding(struct FMargin InPadding); // Function UMG.HorizontalBoxSlot.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x24af430
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.HorizontalBoxSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x24af170
};

// Class UMG.Image
// Size: 0x210 (Inherited: 0x108)
struct UImage : UWidget {
	struct FSlateBrush Brush; // 0x108(0x88)
	struct FDelegate BrushDelegate; // 0x190(0x10)
	struct FLinearColor ColorAndOpacity; // 0x1a0(0x10)
	struct FDelegate ColorAndOpacityDelegate; // 0x1b0(0x10)
	bool bFlipForRightToLeftFlowDirection; // 0x1c0(0x01)
	char pad_1C1[0x3]; // 0x1c1(0x03)
	struct FDelegate OnMouseButtonDownEvent; // 0x1c4(0x10)
	char pad_1D4[0x3c]; // 0x1d4(0x3c)

	void SetOpacity(float InOpacity); // Function UMG.Image.SetOpacity // (Final|Native|Public|BlueprintCallable) // @ game+0x24af3b0
	void SetColorAndOpacity(struct FLinearColor InColorAndOpacity); // Function UMG.Image.SetColorAndOpacity // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x24af000
	void SetBrushTintColor(struct FSlateColor TintColor); // Function UMG.Image.SetBrushTintColor // (Final|Native|Public|BlueprintCallable) // @ game+0x24aee80
	void SetBrushSize(struct FVector2D DesiredSize); // Function UMG.Image.SetBrushSize // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x24aee00
	void SetBrushResourceObject(struct UObject* ResourceObject); // Function UMG.Image.SetBrushResourceObject // (Final|Native|Public|BlueprintCallable) // @ game+0x24aed80
	void SetBrushFromTextureDynamic(struct UTexture2DDynamic* Texture, bool bMatchSize); // Function UMG.Image.SetBrushFromTextureDynamic // (Native|Public|BlueprintCallable) // @ game+0x24aecb0
	void SetBrushFromTexture(struct UTexture2D* Texture, bool bMatchSize); // Function UMG.Image.SetBrushFromTexture // (Native|Public|BlueprintCallable) // @ game+0x24aebe0
	void SetBrushFromSoftTexture(struct TSoftObjectPtr<struct UTexture2D> SoftTexture, bool bMatchSize); // Function UMG.Image.SetBrushFromSoftTexture // (Native|Public|BlueprintCallable) // @ game+0x24aea90
	void SetBrushFromSoftMaterial(struct TSoftObjectPtr<struct UMaterialInterface> SoftMaterial); // Function UMG.Image.SetBrushFromSoftMaterial // (Native|Public|BlueprintCallable) // @ game+0x24ae980
	void SetBrushFromMaterial(struct UMaterialInterface* Material); // Function UMG.Image.SetBrushFromMaterial // (Native|Public|BlueprintCallable) // @ game+0x24ae8f0
	void SetBrushFromAtlasInterface(struct TScriptInterface<None> AtlasRegion, bool bMatchSize); // Function UMG.Image.SetBrushFromAtlasInterface // (Native|Public|BlueprintCallable) // @ game+0x24ae800
	void SetBrushFromAsset(struct USlateBrushAsset* Asset); // Function UMG.Image.SetBrushFromAsset // (Native|Public|BlueprintCallable) // @ game+0x24ae770
	void SetBrush(struct FSlateBrush InBrush); // Function UMG.Image.SetBrush // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x24ae5f0
	struct UMaterialInstanceDynamic* GetDynamicMaterial(); // Function UMG.Image.GetDynamicMaterial // (Final|Native|Public|BlueprintCallable) // @ game+0x24adce0
};

// Class UMG.InputKeySelector
// Size: 0x6f0 (Inherited: 0x108)
struct UInputKeySelector : UWidget {
	struct FButtonStyle WidgetStyle; // 0x108(0x278)
	struct FTextBlockStyle TextStyle; // 0x380(0x268)
	struct FInputChord SelectedKey; // 0x5e8(0x20)
	struct FSlateFontInfo Font; // 0x608(0x50)
	struct FMargin Margin; // 0x658(0x10)
	struct FLinearColor ColorAndOpacity; // 0x668(0x10)
	struct FText KeySelectionText; // 0x678(0x18)
	struct FText NoKeySpecifiedText; // 0x690(0x18)
	bool bAllowModifierKeys; // 0x6a8(0x01)
	bool bAllowGamepadKeys; // 0x6a9(0x01)
	char pad_6AA[0x6]; // 0x6aa(0x06)
	struct TArray<struct FKey> EscapeKeys; // 0x6b0(0x10)
	struct FMulticastInlineDelegate OnKeySelected; // 0x6c0(0x10)
	struct FMulticastInlineDelegate OnIsSelectingKeyChanged; // 0x6d0(0x10)
	char pad_6E0[0x10]; // 0x6e0(0x10)

	void SetTextBlockVisibility(enum class ESlateVisibility InVisibility); // Function UMG.InputKeySelector.SetTextBlockVisibility // (Final|Native|Public|BlueprintCallable) // @ game+0x24af8c0
	void SetSelectedKey(struct FInputChord InSelectedKey); // Function UMG.InputKeySelector.SetSelectedKey // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x24af6c0
	void SetNoKeySpecifiedText(struct FText InNoKeySpecifiedText); // Function UMG.InputKeySelector.SetNoKeySpecifiedText // (Final|Native|Public|BlueprintCallable) // @ game+0x24af2d0
	void SetKeySelectionText(struct FText InKeySelectionText); // Function UMG.InputKeySelector.SetKeySelectionText // (Final|Native|Public|BlueprintCallable) // @ game+0x24af1f0
	void SetEscapeKeys(struct TArray<struct FKey> InKeys); // Function UMG.InputKeySelector.SetEscapeKeys // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x24af080
	void SetAllowModifierKeys(bool bInAllowModifierKeys); // Function UMG.InputKeySelector.SetAllowModifierKeys // (Final|Native|Public|BlueprintCallable) // @ game+0x24ae560
	void SetAllowGamepadKeys(bool bInAllowGamepadKeys); // Function UMG.InputKeySelector.SetAllowGamepadKeys // (Final|Native|Public|BlueprintCallable) // @ game+0x24ae4d0
	void OnKeySelected__DelegateSignature(struct FInputChord SelectedKey); // DelegateFunction UMG.InputKeySelector.OnKeySelected__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x158ca90
	void OnIsSelectingKeyChanged__DelegateSignature(); // DelegateFunction UMG.InputKeySelector.OnIsSelectingKeyChanged__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x158ca90
	bool GetIsSelectingKey(); // Function UMG.InputKeySelector.GetIsSelectingKey // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24adda0
};

// Class UMG.Int32Binding
// Size: 0x60 (Inherited: 0x60)
struct UInt32Binding : UPropertyBinding {

	int32_t GetValue(); // Function UMG.Int32Binding.GetValue // (Final|Native|Public|Const) // @ game+0x24ae040
};

// Class UMG.InvalidationBox
// Size: 0x138 (Inherited: 0x120)
struct UInvalidationBox : UContentWidget {
	bool bCanCache; // 0x120(0x01)
	bool CacheRelativeTransforms; // 0x121(0x01)
	char pad_122[0x16]; // 0x122(0x16)

	void SetCanCache(bool CanCache); // Function UMG.InvalidationBox.SetCanCache // (Final|Native|Public|BlueprintCallable) // @ game+0x24aef70
	void InvalidateCache(); // Function UMG.InvalidationBox.InvalidateCache // (Final|Native|Public|BlueprintCallable) // @ game+0x8dc380
	bool GetCanCache(); // Function UMG.InvalidationBox.GetCanCache // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24adc20
};

// Class UMG.UserListEntry
// Size: 0x28 (Inherited: 0x28)
struct UUserListEntry : UInterface {

	void BP_OnItemSelectionChanged(bool bIsSelected); // Function UMG.UserListEntry.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0x158ca90
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function UMG.UserListEntry.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0x158ca90
	void BP_OnEntryReleased(); // Function UMG.UserListEntry.BP_OnEntryReleased // (Event|Protected|BlueprintEvent) // @ game+0x158ca90
};

// Class UMG.UserListEntryLibrary
// Size: 0x28 (Inherited: 0x28)
struct UUserListEntryLibrary : UBlueprintFunctionLibrary {

	bool IsListItemSelected(struct TScriptInterface<None> UserListEntry); // Function UMG.UserListEntryLibrary.IsListItemSelected // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x24ae140
	bool IsListItemExpanded(struct TScriptInterface<None> UserListEntry); // Function UMG.UserListEntryLibrary.IsListItemExpanded // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x24ae0a0
	struct UListViewBase* GetOwningListView(struct TScriptInterface<None> UserListEntry); // Function UMG.UserListEntryLibrary.GetOwningListView // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x24adfa0
};

// Class UMG.UserObjectListEntry
// Size: 0x28 (Inherited: 0x28)
struct UUserObjectListEntry : UUserListEntry {

	void OnListItemObjectSet(struct UObject* ListItemObject); // Function UMG.UserObjectListEntry.OnListItemObjectSet // (Event|Protected|BlueprintEvent) // @ game+0x158ca90
};

// Class UMG.UserObjectListEntryLibrary
// Size: 0x28 (Inherited: 0x28)
struct UUserObjectListEntryLibrary : UBlueprintFunctionLibrary {

	struct UObject* GetListItemObject(struct TScriptInterface<None> UserObjectListEntry); // Function UMG.UserObjectListEntryLibrary.GetListItemObject // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x24ade60
};

// Class UMG.ListViewBase
// Size: 0x218 (Inherited: 0x108)
struct UListViewBase : UWidget {
	struct UUserWidget* EntryWidgetClass; // 0x108(0x08)
	float WheelScrollMultiplier; // 0x110(0x04)
	bool bEnableScrollAnimation; // 0x114(0x01)
	bool bEnableFixedLineOffset; // 0x115(0x01)
	char pad_116[0x2]; // 0x116(0x02)
	float FixedLineScrollOffset; // 0x118(0x04)
	char pad_11C[0x4]; // 0x11c(0x04)
	struct FMulticastInlineDelegate BP_OnEntryGenerated; // 0x120(0x10)
	struct FMulticastInlineDelegate BP_OnEntryReleased; // 0x130(0x10)
	struct FUserWidgetPool EntryWidgetPool; // 0x140(0x80)
	char pad_1C0[0x58]; // 0x1c0(0x58)

	void SetWheelScrollMultiplier(float NewWheelScrollMultiplier); // Function UMG.ListViewBase.SetWheelScrollMultiplier // (Final|Native|Public|BlueprintCallable) // @ game+0x24af9c0
	void SetScrollOffset(float InScrollOffset); // Function UMG.ListViewBase.SetScrollOffset // (Final|Native|Public|BlueprintCallable) // @ game+0x24af540
	void SetScrollbarVisibility(enum class ESlateVisibility InVisibility); // Function UMG.ListViewBase.SetScrollbarVisibility // (Final|Native|Public|BlueprintCallable) // @ game+0x24af5c0
	void ScrollToTop(); // Function UMG.ListViewBase.ScrollToTop // (Final|Native|Public|BlueprintCallable) // @ game+0x24ae4b0
	void ScrollToBottom(); // Function UMG.ListViewBase.ScrollToBottom // (Final|Native|Public|BlueprintCallable) // @ game+0x24ae490
	void RequestRefresh(); // Function UMG.ListViewBase.RequestRefresh // (Final|Native|Public|BlueprintCallable) // @ game+0x24ae3f0
	void RegenerateAllEntries(); // Function UMG.ListViewBase.RegenerateAllEntries // (Final|Native|Public|BlueprintCallable) // @ game+0x24ae350
	struct TArray<struct UUserWidget*> GetDisplayedEntryWidgets(); // Function UMG.ListViewBase.GetDisplayedEntryWidgets // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24adc50
};

// Class UMG.ListView
// Size: 0x368 (Inherited: 0x218)
struct UListView : UListViewBase {
	char pad_218[0xc0]; // 0x218(0xc0)
	enum class EOrientation Orientation; // 0x2d8(0x01)
	enum class ESelectionMode SelectionMode; // 0x2d9(0x01)
	enum class EConsumeMouseWheel ConsumeMouseWheel; // 0x2da(0x01)
	bool bClearSelectionOnClick; // 0x2db(0x01)
	bool bIsFocusable; // 0x2dc(0x01)
	char pad_2DD[0x3]; // 0x2dd(0x03)
	float EntrySpacing; // 0x2e0(0x04)
	bool bReturnFocusToSelection; // 0x2e4(0x01)
	char pad_2E5[0x3]; // 0x2e5(0x03)
	struct TArray<struct UObject*> ListItems; // 0x2e8(0x10)
	char pad_2F8[0x10]; // 0x2f8(0x10)
	struct FMulticastInlineDelegate BP_OnEntryInitialized; // 0x308(0x10)
	struct FMulticastInlineDelegate BP_OnItemClicked; // 0x318(0x10)
	struct FMulticastInlineDelegate BP_OnItemDoubleClicked; // 0x328(0x10)
	struct FMulticastInlineDelegate BP_OnItemIsHoveredChanged; // 0x338(0x10)
	struct FMulticastInlineDelegate BP_OnItemSelectionChanged; // 0x348(0x10)
	struct FMulticastInlineDelegate BP_OnItemScrolledIntoView; // 0x358(0x10)

	void SetSelectionMode(enum class ESelectionMode SelectionMode); // Function UMG.ListView.SetSelectionMode // (Final|Native|Public|BlueprintCallable) // @ game+0x24af7b0
	void SetSelectedIndex(int32_t Index); // Function UMG.ListView.SetSelectedIndex // (Final|Native|Public|BlueprintCallable) // @ game+0x24af640
	void ScrollIndexIntoView(int32_t Index); // Function UMG.ListView.ScrollIndexIntoView // (Final|Native|Public|BlueprintCallable) // @ game+0x24ae410
	void RemoveItem(struct UObject* Item); // Function UMG.ListView.RemoveItem // (Final|Native|Public|BlueprintCallable) // @ game+0x24ae370
	void NavigateToIndex(int32_t Index); // Function UMG.ListView.NavigateToIndex // (Final|Native|Public|BlueprintCallable) // @ game+0x24ae240
	bool IsRefreshPending(); // Function UMG.ListView.IsRefreshPending // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24ae210
	int32_t GetNumItems(); // Function UMG.ListView.GetNumItems // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24adf70
	struct TArray<struct UObject*> GetListItems(); // Function UMG.ListView.GetListItems // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24adf00
	struct UObject* GetItemAt(int32_t Index); // Function UMG.ListView.GetItemAt // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24addd0
	int32_t GetIndexForItem(struct UObject* Item); // Function UMG.ListView.GetIndexForItem // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24add10
	void ClearListItems(); // Function UMG.ListView.ClearListItems // (Final|Native|Public|BlueprintCallable) // @ game+0x24adb50
	void BP_SetSelectedItem(struct UObject* Item); // Function UMG.ListView.BP_SetSelectedItem // (Final|Native|Private|BlueprintCallable) // @ game+0x24adad0
	void BP_SetListItems(struct TArray<struct UObject*> InListItems); // Function UMG.ListView.BP_SetListItems // (Final|Native|Private|HasOutParms|BlueprintCallable) // @ game+0x24ada20
	void BP_SetItemSelection(struct UObject* Item, bool bSelected); // Function UMG.ListView.BP_SetItemSelection // (Final|Native|Private|BlueprintCallable) // @ game+0x24ad950
	void BP_ScrollItemIntoView(struct UObject* Item); // Function UMG.ListView.BP_ScrollItemIntoView // (Final|Native|Private|BlueprintCallable) // @ game+0x24ad8d0
	void BP_NavigateToItem(struct UObject* Item); // Function UMG.ListView.BP_NavigateToItem // (Final|Native|Private|BlueprintCallable) // @ game+0x24ad850
	bool BP_IsItemVisible(struct UObject* Item); // Function UMG.ListView.BP_IsItemVisible // (Final|Native|Private|BlueprintCallable|BlueprintPure|Const) // @ game+0x24ad7c0
	bool BP_GetSelectedItems(struct TArray<struct UObject*> Items); // Function UMG.ListView.BP_GetSelectedItems // (Final|Native|Private|HasOutParms|BlueprintCallable|Const) // @ game+0x24ad700
	struct UObject* BP_GetSelectedItem(); // Function UMG.ListView.BP_GetSelectedItem // (Final|Native|Private|BlueprintCallable|BlueprintPure|Const) // @ game+0x24ad6d0
	int32_t BP_GetNumItemsSelected(); // Function UMG.ListView.BP_GetNumItemsSelected // (Final|Native|Private|BlueprintCallable|BlueprintPure|Const) // @ game+0x24ad6a0
	void BP_ClearSelection(); // Function UMG.ListView.BP_ClearSelection // (Final|Native|Private|BlueprintCallable) // @ game+0x24ad680
	void BP_CancelScrollIntoView(); // Function UMG.ListView.BP_CancelScrollIntoView // (Final|Native|Private|BlueprintCallable) // @ game+0x24ad660
	void AddItem(struct UObject* Item); // Function UMG.ListView.AddItem // (Final|Native|Public|BlueprintCallable) // @ game+0x24ad5e0
};

// Class UMG.ListViewDesignerPreviewItem
// Size: 0x28 (Inherited: 0x28)
struct UListViewDesignerPreviewItem : UObject {
};

// Class UMG.MenuAnchor
// Size: 0x160 (Inherited: 0x120)
struct UMenuAnchor : UContentWidget {
	struct UUserWidget* MenuClass; // 0x120(0x08)
	struct FDelegate OnGetMenuContentEvent; // 0x128(0x10)
	enum class EMenuPlacement Placement; // 0x138(0x01)
	bool bFitInWindow; // 0x139(0x01)
	bool ShouldDeferPaintingAfterWindowContent; // 0x13a(0x01)
	bool UseApplicationMenuStack; // 0x13b(0x01)
	char pad_13C[0x4]; // 0x13c(0x04)
	struct FMulticastInlineDelegate OnMenuOpenChanged; // 0x140(0x10)
	char pad_150[0x10]; // 0x150(0x10)

	void ToggleOpen(bool bFocusOnOpen); // Function UMG.MenuAnchor.ToggleOpen // (Final|Native|Public|BlueprintCallable) // @ game+0x24afa70
	bool ShouldOpenDueToClick(); // Function UMG.MenuAnchor.ShouldOpenDueToClick // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24afa40
	void SetPlacement(enum class EMenuPlacement InPlacement); // Function UMG.MenuAnchor.SetPlacement // (Final|Native|Public|BlueprintCallable) // @ game+0x24af4c0
	void Open(bool bFocusMenu); // Function UMG.MenuAnchor.Open // (Final|Native|Public|BlueprintCallable) // @ game+0x24ae2c0
	bool IsOpen(); // Function UMG.MenuAnchor.IsOpen // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24ae1e0
	bool HasOpenSubMenus(); // Function UMG.MenuAnchor.HasOpenSubMenus // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24ae070
	struct FVector2D GetMenuPosition(); // Function UMG.MenuAnchor.GetMenuPosition // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x24adf30
	void FitInWindow(bool bFit); // Function UMG.MenuAnchor.FitInWindow // (Final|Native|Public|BlueprintCallable) // @ game+0x24adb90
	void Close(); // Function UMG.MenuAnchor.Close // (Final|Native|Public|BlueprintCallable) // @ game+0x24adb70
};

// Class UMG.MouseCursorBinding
// Size: 0x60 (Inherited: 0x60)
struct UMouseCursorBinding : UPropertyBinding {

	enum class EMouseCursor GetValue(); // Function UMG.MouseCursorBinding.GetValue // (Final|Native|Public|Const) // @ game+0x24b3490
};

// Class UMG.MovieScene2DTransformSection
// Size: 0x550 (Inherited: 0xe0)
struct UMovieScene2DTransformSection : UMovieSceneSection {
	struct FMovieScene2DTransformMask TransformMask; // 0xe0(0x04)
	char pad_E4[0x4]; // 0xe4(0x04)
	struct FMovieSceneFloatChannel Translation[0x2]; // 0xe8(0x140)
	struct FMovieSceneFloatChannel Rotation; // 0x228(0xa0)
	struct FMovieSceneFloatChannel Scale[0x2]; // 0x2c8(0x140)
	struct FMovieSceneFloatChannel Shear[0x2]; // 0x408(0x140)
	char pad_548[0x8]; // 0x548(0x08)
};

// Class UMG.MovieScene2DTransformTrack
// Size: 0x88 (Inherited: 0x88)
struct UMovieScene2DTransformTrack : UMovieScenePropertyTrack {
};

// Class UMG.MovieSceneMarginSection
// Size: 0x360 (Inherited: 0xe0)
struct UMovieSceneMarginSection : UMovieSceneSection {
	struct FMovieSceneFloatChannel TopCurve; // 0xe0(0xa0)
	struct FMovieSceneFloatChannel LeftCurve; // 0x180(0xa0)
	struct FMovieSceneFloatChannel RightCurve; // 0x220(0xa0)
	struct FMovieSceneFloatChannel BottomCurve; // 0x2c0(0xa0)
};

// Class UMG.MovieSceneMarginTrack
// Size: 0x88 (Inherited: 0x88)
struct UMovieSceneMarginTrack : UMovieScenePropertyTrack {
};

// Class UMG.MovieSceneWidgetMaterialTrack
// Size: 0x80 (Inherited: 0x68)
struct UMovieSceneWidgetMaterialTrack : UMovieSceneMaterialTrack {
	struct TArray<struct FName> BrushPropertyNamePath; // 0x68(0x10)
	struct FName TrackName; // 0x78(0x08)
};

// Class UMG.MultiLineEditableText
// Size: 0x460 (Inherited: 0x128)
struct UMultiLineEditableText : UTextLayoutWidget {
	struct FText Text; // 0x128(0x18)
	struct FText HintText; // 0x140(0x18)
	struct FDelegate HintTextDelegate; // 0x158(0x10)
	struct FTextBlockStyle WidgetStyle; // 0x168(0x268)
	bool bIsReadOnly; // 0x3d0(0x01)
	char pad_3D1[0x7]; // 0x3d1(0x07)
	struct FSlateFontInfo Font; // 0x3d8(0x50)
	bool SelectAllTextWhenFocused; // 0x428(0x01)
	bool ClearTextSelectionOnFocusLoss; // 0x429(0x01)
	bool RevertTextOnEscape; // 0x42a(0x01)
	bool ClearKeyboardFocusOnCommit; // 0x42b(0x01)
	bool AllowContextMenu; // 0x42c(0x01)
	struct FVirtualKeyboardOptions VirtualKeyboardOptions; // 0x42d(0x01)
	enum class EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0x42e(0x01)
	char pad_42F[0x1]; // 0x42f(0x01)
	struct FMulticastInlineDelegate OnTextChanged; // 0x430(0x10)
	struct FMulticastInlineDelegate OnTextCommitted; // 0x440(0x10)
	char pad_450[0x10]; // 0x450(0x10)

	void SetWidgetStyle(struct FTextBlockStyle InWidgetStyle); // Function UMG.MultiLineEditableText.SetWidgetStyle // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x24b4980
	void SetText(struct FText InText); // Function UMG.MultiLineEditableText.SetText // (Final|Native|Public|BlueprintCallable) // @ game+0x24b44c0
	void SetIsReadOnly(bool bReadOnly); // Function UMG.MultiLineEditableText.SetIsReadOnly // (Final|Native|Public|BlueprintCallable) // @ game+0x24b4150
	void SetHintText(struct FText InHintText); // Function UMG.MultiLineEditableText.SetHintText // (Final|Native|Public|BlueprintCallable) // @ game+0x24b3e80
	void OnMultiLineEditableTextCommittedEvent__DelegateSignature(struct FText Text, enum class ETextCommit CommitMethod); // DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextCommittedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x158ca90
	void OnMultiLineEditableTextChangedEvent__DelegateSignature(struct FText Text); // DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextChangedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x158ca90
	struct FText GetText(); // Function UMG.MultiLineEditableText.GetText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24b32b0
	struct FText GetHintText(); // Function UMG.MultiLineEditableText.GetHintText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24b3170
};

// Class UMG.MultiLineEditableTextBox
// Size: 0xc80 (Inherited: 0x128)
struct UMultiLineEditableTextBox : UTextLayoutWidget {
	struct FText Text; // 0x128(0x18)
	struct FText HintText; // 0x140(0x18)
	struct FDelegate HintTextDelegate; // 0x158(0x10)
	struct FEditableTextBoxStyle WidgetStyle; // 0x168(0x7f0)
	struct FTextBlockStyle TextStyle; // 0x958(0x268)
	bool bIsReadOnly; // 0xbc0(0x01)
	bool AllowContextMenu; // 0xbc1(0x01)
	struct FVirtualKeyboardOptions VirtualKeyboardOptions; // 0xbc2(0x01)
	enum class EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0xbc3(0x01)
	char pad_BC4[0x4]; // 0xbc4(0x04)
	struct USlateWidgetStyleAsset* Style; // 0xbc8(0x08)
	struct FSlateFontInfo Font; // 0xbd0(0x50)
	struct FLinearColor ForegroundColor; // 0xc20(0x10)
	struct FLinearColor BackgroundColor; // 0xc30(0x10)
	struct FLinearColor ReadOnlyForegroundColor; // 0xc40(0x10)
	struct FMulticastInlineDelegate OnTextChanged; // 0xc50(0x10)
	struct FMulticastInlineDelegate OnTextCommitted; // 0xc60(0x10)
	char pad_C70[0x10]; // 0xc70(0x10)

	void SetTextStyle(struct FTextBlockStyle InTextStyle); // Function UMG.MultiLineEditableTextBox.SetTextStyle // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x24b4750
	void SetText(struct FText InText); // Function UMG.MultiLineEditableTextBox.SetText // (Final|Native|Public|BlueprintCallable) // @ game+0x24b45a0
	void SetIsReadOnly(bool bReadOnly); // Function UMG.MultiLineEditableTextBox.SetIsReadOnly // (Final|Native|Public|BlueprintCallable) // @ game+0x24b41e0
	void SetHintText(struct FText InHintText); // Function UMG.MultiLineEditableTextBox.SetHintText // (Final|Native|Public|BlueprintCallable) // @ game+0x24b3f60
	void SetError(struct FText InError); // Function UMG.MultiLineEditableTextBox.SetError // (Final|Native|Public|BlueprintCallable) // @ game+0x24b3d20
	void OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(struct FText Text, enum class ETextCommit CommitMethod); // DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x158ca90
	void OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(struct FText Text); // DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxChangedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x158ca90
	struct FText GetText(); // Function UMG.MultiLineEditableTextBox.GetText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24b3350
	struct FText GetHintText(); // Function UMG.MultiLineEditableTextBox.GetHintText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24b3210
};

// Class UMG.NamedSlot
// Size: 0x130 (Inherited: 0x120)
struct UNamedSlot : UContentWidget {
	char pad_120[0x10]; // 0x120(0x10)
};

// Class UMG.NamedSlotInterface
// Size: 0x28 (Inherited: 0x28)
struct UNamedSlotInterface : UInterface {
};

// Class UMG.NativeWidgetHost
// Size: 0x118 (Inherited: 0x108)
struct UNativeWidgetHost : UWidget {
	char pad_108[0x10]; // 0x108(0x10)
};

// Class UMG.Overlay
// Size: 0x130 (Inherited: 0x120)
struct UOverlay : UPanelWidget {
	char pad_120[0x10]; // 0x120(0x10)

	struct UOverlaySlot* AddChildToOverlay(struct UWidget* Content); // Function UMG.Overlay.AddChildToOverlay // (Final|Native|Public|BlueprintCallable) // @ game+0x24b2e10
};

// Class UMG.OverlaySlot
// Size: 0x58 (Inherited: 0x38)
struct UOverlaySlot : UPanelSlot {
	char pad_38[0x8]; // 0x38(0x08)
	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0x6]; // 0x52(0x06)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.OverlaySlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x24b4900
	void SetPadding(struct FMargin InPadding); // Function UMG.OverlaySlot.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x24b42f0
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.OverlaySlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x24b4040
};

// Class UMG.ProgressBar
// Size: 0x318 (Inherited: 0x108)
struct UProgressBar : UWidget {
	struct FProgressBarStyle WidgetStyle; // 0x108(0x1a0)
	struct USlateWidgetStyleAsset* Style; // 0x2a8(0x08)
	struct USlateBrushAsset* BackgroundImage; // 0x2b0(0x08)
	struct USlateBrushAsset* FillImage; // 0x2b8(0x08)
	struct USlateBrushAsset* MarqueeImage; // 0x2c0(0x08)
	float Percent; // 0x2c8(0x04)
	enum class EProgressBarFillType BarFillType; // 0x2cc(0x01)
	bool bIsMarquee; // 0x2cd(0x01)
	char pad_2CE[0x2]; // 0x2ce(0x02)
	struct FVector2D BorderPadding; // 0x2d0(0x08)
	struct FDelegate PercentDelegate; // 0x2d8(0x10)
	struct FLinearColor FillColorAndOpacity; // 0x2e8(0x10)
	struct FDelegate FillColorAndOpacityDelegate; // 0x2f8(0x10)
	char pad_308[0x10]; // 0x308(0x10)

	void SetPercent(float InPercent); // Function UMG.ProgressBar.SetPercent // (Final|Native|Public|BlueprintCallable) // @ game+0x24b4380
	void SetIsMarquee(bool InbIsMarquee); // Function UMG.ProgressBar.SetIsMarquee // (Final|Native|Public|BlueprintCallable) // @ game+0x24b40c0
	void SetFillColorAndOpacity(struct FLinearColor InColor); // Function UMG.ProgressBar.SetFillColorAndOpacity // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x24b3e00
};

// Class UMG.RetainerBox
// Size: 0x150 (Inherited: 0x120)
struct URetainerBox : UContentWidget {
	bool RenderOnInvalidation; // 0x120(0x01)
	bool RenderOnPhase; // 0x121(0x01)
	char pad_122[0x2]; // 0x122(0x02)
	int32_t Phase; // 0x124(0x04)
	int32_t PhaseCount; // 0x128(0x04)
	char pad_12C[0x4]; // 0x12c(0x04)
	struct UMaterialInterface* EffectMaterial; // 0x130(0x08)
	struct FName TextureParameter; // 0x138(0x08)
	char pad_140[0x10]; // 0x140(0x10)

	void SetTextureParameter(struct FName TextureParameter); // Function UMG.RetainerBox.SetTextureParameter // (Final|Native|Public|BlueprintCallable) // @ game+0x24b4880
	void SetRenderingPhase(int32_t RenderPhase, int32_t TotalPhases); // Function UMG.RetainerBox.SetRenderingPhase // (Final|Native|Public|BlueprintCallable) // @ game+0x24b4400
	void SetEffectMaterial(struct UMaterialInterface* EffectMaterial); // Function UMG.RetainerBox.SetEffectMaterial // (Final|Native|Public|BlueprintCallable) // @ game+0x24b3ca0
	void RequestRender(); // Function UMG.RetainerBox.RequestRender // (Final|Native|Public|BlueprintCallable) // @ game+0x24b36a0
	struct UMaterialInstanceDynamic* GetEffectMaterial(); // Function UMG.RetainerBox.GetEffectMaterial // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24b3140
};

// Class UMG.RichTextBlockImageDecorator
// Size: 0x30 (Inherited: 0x28)
struct URichTextBlockImageDecorator : URichTextBlockDecorator {
	struct UDataTable* ImageSet; // 0x28(0x08)
};

// Class UMG.SafeZone
// Size: 0x138 (Inherited: 0x120)
struct USafeZone : UContentWidget {
	bool PadLeft; // 0x120(0x01)
	bool PadRight; // 0x121(0x01)
	bool PadTop; // 0x122(0x01)
	bool PadBottom; // 0x123(0x01)
	char pad_124[0x14]; // 0x124(0x14)

	void SetSidesToPad(bool InPadLeft, bool InPadRight, bool InPadTop, bool InPadBottom); // Function UMG.SafeZone.SetSidesToPad // (Final|Native|Public|BlueprintCallable) // @ game+0x24b8910
};

// Class UMG.SafeZoneSlot
// Size: 0x60 (Inherited: 0x38)
struct USafeZoneSlot : UPanelSlot {
	bool bIsTitleSafe; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	struct FMargin SafeAreaScale; // 0x3c(0x10)
	enum class EHorizontalAlignment HAlign; // 0x4c(0x01)
	enum class EVerticalAlignment VAlign; // 0x4d(0x01)
	char pad_4E[0x2]; // 0x4e(0x02)
	struct FMargin Padding; // 0x50(0x10)
};

// Class UMG.ScaleBox
// Size: 0x140 (Inherited: 0x120)
struct UScaleBox : UContentWidget {
	enum class EStretch Stretch; // 0x120(0x01)
	enum class EStretchDirection StretchDirection; // 0x121(0x01)
	char pad_122[0x2]; // 0x122(0x02)
	float UserSpecifiedScale; // 0x124(0x04)
	bool IgnoreInheritedScale; // 0x128(0x01)
	char pad_129[0x17]; // 0x129(0x17)

	void SetUserSpecifiedScale(float InUserSpecifiedScale); // Function UMG.ScaleBox.SetUserSpecifiedScale // (Final|Native|Public|BlueprintCallable) // @ game+0x24b8c40
	void SetStretchDirection(enum class EStretchDirection InStretchDirection); // Function UMG.ScaleBox.SetStretchDirection // (Final|Native|Public|BlueprintCallable) // @ game+0x24b8bc0
	void SetStretch(enum class EStretch InStretch); // Function UMG.ScaleBox.SetStretch // (Final|Native|Public|BlueprintCallable) // @ game+0x24b8b40
	void SetIgnoreInheritedScale(bool bInIgnoreInheritedScale); // Function UMG.ScaleBox.SetIgnoreInheritedScale // (Final|Native|Public|BlueprintCallable) // @ game+0x24b8120
};

// Class UMG.ScaleBoxSlot
// Size: 0x60 (Inherited: 0x38)
struct UScaleBoxSlot : UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x48(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x49(0x01)
	char pad_4A[0x16]; // 0x4a(0x16)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.ScaleBoxSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x24a6ff0
	void SetPadding(struct FMargin InPadding); // Function UMG.ScaleBoxSlot.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x24b8530
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.ScaleBoxSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x24a6200
};

// Class UMG.ScrollBar
// Size: 0x610 (Inherited: 0x108)
struct UScrollBar : UWidget {
	struct FScrollBarStyle WidgetStyle; // 0x108(0x4d0)
	struct USlateWidgetStyleAsset* Style; // 0x5d8(0x08)
	bool bAlwaysShowScrollbar; // 0x5e0(0x01)
	bool bAlwaysShowScrollbarTrack; // 0x5e1(0x01)
	enum class EOrientation Orientation; // 0x5e2(0x01)
	char pad_5E3[0x1]; // 0x5e3(0x01)
	struct FVector2D Thickness; // 0x5e4(0x08)
	struct FMargin Padding; // 0x5ec(0x10)
	char pad_5FC[0x14]; // 0x5fc(0x14)

	void SetState(float InOffsetFraction, float InThumbSizeFraction); // Function UMG.ScrollBar.SetState // (Final|Native|Public|BlueprintCallable) // @ game+0x24b8a80
};

// Class UMG.ScrollBox
// Size: 0x880 (Inherited: 0x120)
struct UScrollBox : UPanelWidget {
	struct FScrollBoxStyle WidgetStyle; // 0x120(0x228)
	struct FScrollBarStyle WidgetBarStyle; // 0x348(0x4d0)
	struct USlateWidgetStyleAsset* Style; // 0x818(0x08)
	struct USlateWidgetStyleAsset* BarStyle; // 0x820(0x08)
	enum class EOrientation Orientation; // 0x828(0x01)
	enum class ESlateVisibility ScrollBarVisibility; // 0x829(0x01)
	enum class EConsumeMouseWheel ConsumeMouseWheel; // 0x82a(0x01)
	char pad_82B[0x1]; // 0x82b(0x01)
	struct FVector2D ScrollbarThickness; // 0x82c(0x08)
	struct FMargin ScrollbarPadding; // 0x834(0x10)
	bool AlwaysShowScrollbar; // 0x844(0x01)
	bool AlwaysShowScrollbarTrack; // 0x845(0x01)
	bool AllowOverscroll; // 0x846(0x01)
	bool bAnimateWheelScrolling; // 0x847(0x01)
	enum class EDescendantScrollDestination NavigationDestination; // 0x848(0x01)
	char pad_849[0x3]; // 0x849(0x03)
	float NavigationScrollPadding; // 0x84c(0x04)
	enum class EScrollWhenFocusChanges ScrollWhenFocusChanges; // 0x850(0x01)
	bool bAllowRightClickDragScrolling; // 0x851(0x01)
	char pad_852[0x2]; // 0x852(0x02)
	float WheelScrollMultiplier; // 0x854(0x04)
	struct FMulticastInlineDelegate OnUserScrolled; // 0x858(0x10)
	char pad_868[0x18]; // 0x868(0x18)

	void SetWheelScrollMultiplier(float NewWheelScrollMultiplier); // Function UMG.ScrollBox.SetWheelScrollMultiplier // (Final|Native|Public|BlueprintCallable) // @ game+0x24b8dc0
	void SetScrollOffset(float NewScrollOffset); // Function UMG.ScrollBox.SetScrollOffset // (Final|Native|Public|BlueprintCallable) // @ game+0x24b8760
	void SetScrollbarVisibility(enum class ESlateVisibility NewScrollBarVisibility); // Function UMG.ScrollBox.SetScrollbarVisibility // (Final|Native|Public|BlueprintCallable) // @ game+0x24b86e0
	void SetScrollbarThickness(struct FVector2D NewScrollbarThickness); // Function UMG.ScrollBox.SetScrollbarThickness // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x24b8880
	void SetScrollbarPadding(struct FMargin NewScrollbarPadding); // Function UMG.ScrollBox.SetScrollbarPadding // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x24b87e0
	void SetOrientation(enum class EOrientation NewOrientation); // Function UMG.ScrollBox.SetOrientation // (Final|Native|Public|BlueprintCallable) // @ game+0x24b84b0
	void SetConsumeMouseWheel(enum class EConsumeMouseWheel NewConsumeMouseWheel); // Function UMG.ScrollBox.SetConsumeMouseWheel // (Final|Native|Public|BlueprintCallable) // @ game+0x24b7f20
	void SetAnimateWheelScrolling(bool bShouldAnimateWheelScrolling); // Function UMG.ScrollBox.SetAnimateWheelScrolling // (Final|Native|Public|BlueprintCallable) // @ game+0x24b7e90
	void SetAlwaysShowScrollbar(bool NewAlwaysShowScrollbar); // Function UMG.ScrollBox.SetAlwaysShowScrollbar // (Final|Native|Public|BlueprintCallable) // @ game+0x24b7e00
	void SetAllowOverscroll(bool NewAllowOverscroll); // Function UMG.ScrollBox.SetAllowOverscroll // (Final|Native|Public|BlueprintCallable) // @ game+0x24b7d70
	void ScrollWidgetIntoView(struct UWidget* WidgetToFind, bool AnimateScroll, enum class EDescendantScrollDestination ScrollDestination, float Padding); // Function UMG.ScrollBox.ScrollWidgetIntoView // (Final|Native|Public|BlueprintCallable) // @ game+0x24b7c20
	void ScrollToStart(); // Function UMG.ScrollBox.ScrollToStart // (Final|Native|Public|BlueprintCallable) // @ game+0x24b7c00
	void ScrollToEnd(); // Function UMG.ScrollBox.ScrollToEnd // (Final|Native|Public|BlueprintCallable) // @ game+0x24b7be0
	float GetViewOffsetFraction(); // Function UMG.ScrollBox.GetViewOffsetFraction // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24b73b0
	float GetScrollOffsetOfEnd(); // Function UMG.ScrollBox.GetScrollOffsetOfEnd // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24b7380
	float GetScrollOffset(); // Function UMG.ScrollBox.GetScrollOffset // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24b7350
	void EndInertialScrolling(); // Function UMG.ScrollBox.EndInertialScrolling // (Final|Native|Public|BlueprintCallable) // @ game+0x24b6e40
};

// Class UMG.ScrollBoxSlot
// Size: 0x58 (Inherited: 0x38)
struct UScrollBoxSlot : UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x48(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x49(0x01)
	char pad_4A[0xe]; // 0x4a(0x0e)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.ScrollBoxSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x24b8cc0
	void SetPadding(struct FMargin InPadding); // Function UMG.ScrollBoxSlot.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x24b85c0
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.ScrollBoxSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x24b8020
};

// Class UMG.SizeBox
// Size: 0x158 (Inherited: 0x120)
struct USizeBox : UContentWidget {
	char pad_120[0x10]; // 0x120(0x10)
	float WidthOverride; // 0x130(0x04)
	float HeightOverride; // 0x134(0x04)
	float MinDesiredWidth; // 0x138(0x04)
	float MinDesiredHeight; // 0x13c(0x04)
	float MaxDesiredWidth; // 0x140(0x04)
	float MaxDesiredHeight; // 0x144(0x04)
	float MinAspectRatio; // 0x148(0x04)
	float MaxAspectRatio; // 0x14c(0x04)
	char bOverride_WidthOverride : 1; // 0x150(0x01)
	char bOverride_HeightOverride : 1; // 0x150(0x01)
	char bOverride_MinDesiredWidth : 1; // 0x150(0x01)
	char bOverride_MinDesiredHeight : 1; // 0x150(0x01)
	char bOverride_MaxDesiredWidth : 1; // 0x150(0x01)
	char bOverride_MaxDesiredHeight : 1; // 0x150(0x01)
	char bOverride_MinAspectRatio : 1; // 0x150(0x01)
	char bOverride_MaxAspectRatio : 1; // 0x150(0x01)
	char pad_151[0x7]; // 0x151(0x07)

	void SetWidthOverride(float InWidthOverride); // Function UMG.SizeBox.SetWidthOverride // (Final|Native|Public|BlueprintCallable) // @ game+0x24b8e40
	void SetMinDesiredWidth(float InMinDesiredWidth); // Function UMG.SizeBox.SetMinDesiredWidth // (Final|Native|Public|BlueprintCallable) // @ game+0x24b8430
	void SetMinDesiredHeight(float InMinDesiredHeight); // Function UMG.SizeBox.SetMinDesiredHeight // (Final|Native|Public|BlueprintCallable) // @ game+0x24b83b0
	void SetMinAspectRatio(float InMinAspectRatio); // Function UMG.SizeBox.SetMinAspectRatio // (Final|Native|Public|BlueprintCallable) // @ game+0x24b8330
	void SetMaxDesiredWidth(float InMaxDesiredWidth); // Function UMG.SizeBox.SetMaxDesiredWidth // (Final|Native|Public|BlueprintCallable) // @ game+0x24b82b0
	void SetMaxDesiredHeight(float InMaxDesiredHeight); // Function UMG.SizeBox.SetMaxDesiredHeight // (Final|Native|Public|BlueprintCallable) // @ game+0x24b8230
	void SetMaxAspectRatio(float InMaxAspectRatio); // Function UMG.SizeBox.SetMaxAspectRatio // (Final|Native|Public|BlueprintCallable) // @ game+0x24b81b0
	void SetHeightOverride(float InHeightOverride); // Function UMG.SizeBox.SetHeightOverride // (Final|Native|Public|BlueprintCallable) // @ game+0x24b7fa0
	void ClearWidthOverride(); // Function UMG.SizeBox.ClearWidthOverride // (Final|Native|Public|BlueprintCallable) // @ game+0x24b6e20
	void ClearMinDesiredWidth(); // Function UMG.SizeBox.ClearMinDesiredWidth // (Final|Native|Public|BlueprintCallable) // @ game+0x24b6e00
	void ClearMinDesiredHeight(); // Function UMG.SizeBox.ClearMinDesiredHeight // (Final|Native|Public|BlueprintCallable) // @ game+0x24b6de0
	void ClearMinAspectRatio(); // Function UMG.SizeBox.ClearMinAspectRatio // (Final|Native|Public|BlueprintCallable) // @ game+0x24b6dc0
	void ClearMaxDesiredWidth(); // Function UMG.SizeBox.ClearMaxDesiredWidth // (Final|Native|Public|BlueprintCallable) // @ game+0x24b6da0
	void ClearMaxDesiredHeight(); // Function UMG.SizeBox.ClearMaxDesiredHeight // (Final|Native|Public|BlueprintCallable) // @ game+0x24b6d80
	void ClearMaxAspectRatio(); // Function UMG.SizeBox.ClearMaxAspectRatio // (Final|Native|Public|BlueprintCallable) // @ game+0x24b6d60
	void ClearHeightOverride(); // Function UMG.SizeBox.ClearHeightOverride // (Final|Native|Public|BlueprintCallable) // @ game+0x24b6d40
};

// Class UMG.SizeBoxSlot
// Size: 0x60 (Inherited: 0x38)
struct USizeBoxSlot : UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	char pad_48[0x10]; // 0x48(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x58(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x59(0x01)
	char pad_5A[0x6]; // 0x5a(0x06)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.SizeBoxSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x24b8d40
	void SetPadding(struct FMargin InPadding); // Function UMG.SizeBoxSlot.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x24b8650
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.SizeBoxSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x24b80a0
};

// Class UMG.SlateBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct USlateBlueprintLibrary : UBlueprintFunctionLibrary {

	struct FVector2D TransformVectorLocalToAbsolute(struct FGeometry Geometry, struct FVector2D LocalVector); // Function UMG.SlateBlueprintLibrary.TransformVectorLocalToAbsolute // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x24b91c0
	struct FVector2D TransformVectorAbsoluteToLocal(struct FGeometry Geometry, struct FVector2D AbsoluteVector); // Function UMG.SlateBlueprintLibrary.TransformVectorAbsoluteToLocal // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x24b90c0
	float TransformScalarLocalToAbsolute(struct FGeometry Geometry, float LocalScalar); // Function UMG.SlateBlueprintLibrary.TransformScalarLocalToAbsolute // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x24b8fc0
	float TransformScalarAbsoluteToLocal(struct FGeometry Geometry, float AbsoluteScalar); // Function UMG.SlateBlueprintLibrary.TransformScalarAbsoluteToLocal // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x24b8ec0
	void ScreenToWidgetLocal(struct UObject* WorldContextObject, struct FGeometry Geometry, struct FVector2D ScreenPosition, struct FVector2D LocalCoordinate, bool bIncludeWindowPosition); // Function UMG.SlateBlueprintLibrary.ScreenToWidgetLocal // (Final|Native|Static|Public|HasOutParms|HasDefaults) // @ game+0x24b7a10
	void ScreenToWidgetAbsolute(struct UObject* WorldContextObject, struct FVector2D ScreenPosition, struct FVector2D AbsoluteCoordinate, bool bIncludeWindowPosition); // Function UMG.SlateBlueprintLibrary.ScreenToWidgetAbsolute // (Final|Native|Static|Public|HasOutParms|HasDefaults) // @ game+0x24b78c0
	void ScreenToViewport(struct UObject* WorldContextObject, struct FVector2D ScreenPosition, struct FVector2D ViewportPosition); // Function UMG.SlateBlueprintLibrary.ScreenToViewport // (Final|Native|Static|Public|HasOutParms|HasDefaults) // @ game+0x24b77c0
	void LocalToViewport(struct UObject* WorldContextObject, struct FGeometry Geometry, struct FVector2D LocalCoordinate, struct FVector2D PixelPosition, struct FVector2D ViewportPosition); // Function UMG.SlateBlueprintLibrary.LocalToViewport // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x24b75e0
	struct FVector2D LocalToAbsolute(struct FGeometry Geometry, struct FVector2D LocalCoordinate); // Function UMG.SlateBlueprintLibrary.LocalToAbsolute // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x24b74e0
	bool IsUnderLocation(struct FGeometry Geometry, struct FVector2D AbsoluteCoordinate); // Function UMG.SlateBlueprintLibrary.IsUnderLocation // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x24b73e0
	struct FVector2D GetLocalTopLeft(struct FGeometry Geometry); // Function UMG.SlateBlueprintLibrary.GetLocalTopLeft // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x24b7290
	struct FVector2D GetLocalSize(struct FGeometry Geometry); // Function UMG.SlateBlueprintLibrary.GetLocalSize // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x24b71d0
	struct FVector2D GetAbsoluteSize(struct FGeometry Geometry); // Function UMG.SlateBlueprintLibrary.GetAbsoluteSize // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x24b7110
	bool EqualEqual_SlateBrush(struct FSlateBrush A, struct FSlateBrush B); // Function UMG.SlateBlueprintLibrary.EqualEqual_SlateBrush // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x24b6e60
	void AbsoluteToViewport(struct UObject* WorldContextObject, struct FVector2D AbsoluteDesktopCoordinate, struct FVector2D PixelPosition, struct FVector2D ViewportPosition); // Function UMG.SlateBlueprintLibrary.AbsoluteToViewport // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x24b6bf0
	struct FVector2D AbsoluteToLocal(struct FGeometry Geometry, struct FVector2D AbsoluteCoordinate); // Function UMG.SlateBlueprintLibrary.AbsoluteToLocal // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x24b6af0
};

// Class UMG.SlateVectorArtData
// Size: 0x60 (Inherited: 0x28)
struct USlateVectorArtData : UObject {
	struct TArray<struct FSlateMeshVertex> VertexData; // 0x28(0x10)
	struct TArray<uint32_t> IndexData; // 0x38(0x10)
	struct UMaterialInterface* Material; // 0x48(0x08)
	struct FVector2D ExtentMin; // 0x50(0x08)
	struct FVector2D ExtentMax; // 0x58(0x08)
};

// Class UMG.SlateAccessibleWidgetData
// Size: 0x80 (Inherited: 0x28)
struct USlateAccessibleWidgetData : UObject {
	bool bCanChildrenBeAccessible; // 0x28(0x01)
	enum class ESlateAccessibleBehavior AccessibleBehavior; // 0x29(0x01)
	enum class ESlateAccessibleBehavior AccessibleSummaryBehavior; // 0x2a(0x01)
	char pad_2B[0x5]; // 0x2b(0x05)
	struct FText AccessibleText; // 0x30(0x18)
	struct FDelegate AccessibleTextDelegate; // 0x48(0x10)
	struct FText AccessibleSummaryText; // 0x58(0x18)
	struct FDelegate AccessibleSummaryTextDelegate; // 0x70(0x10)
};

// Class UMG.Slider
// Size: 0x4f8 (Inherited: 0x108)
struct USlider : UWidget {
	float Value; // 0x108(0x04)
	struct FDelegate ValueDelegate; // 0x10c(0x10)
	float MinValue; // 0x11c(0x04)
	float MaxValue; // 0x120(0x04)
	char pad_124[0x4]; // 0x124(0x04)
	struct FSliderStyle WidgetStyle; // 0x128(0x340)
	enum class EOrientation Orientation; // 0x468(0x01)
	char pad_469[0x3]; // 0x469(0x03)
	struct FLinearColor SliderBarColor; // 0x46c(0x10)
	struct FLinearColor SliderHandleColor; // 0x47c(0x10)
	bool IndentHandle; // 0x48c(0x01)
	bool Locked; // 0x48d(0x01)
	bool MouseUsesStep; // 0x48e(0x01)
	bool RequiresControllerLock; // 0x48f(0x01)
	float StepSize; // 0x490(0x04)
	bool IsFocusable; // 0x494(0x01)
	char pad_495[0x3]; // 0x495(0x03)
	struct FMulticastInlineDelegate OnMouseCaptureBegin; // 0x498(0x10)
	struct FMulticastInlineDelegate OnMouseCaptureEnd; // 0x4a8(0x10)
	struct FMulticastInlineDelegate OnControllerCaptureBegin; // 0x4b8(0x10)
	struct FMulticastInlineDelegate OnControllerCaptureEnd; // 0x4c8(0x10)
	struct FMulticastInlineDelegate OnValueChanged; // 0x4d8(0x10)
	char pad_4E8[0x10]; // 0x4e8(0x10)

	void SetValue(float InValue); // Function UMG.Slider.SetValue // (Final|Native|Public|BlueprintCallable) // @ game+0x24bcec0
	void SetStepSize(float InValue); // Function UMG.Slider.SetStepSize // (Final|Native|Public|BlueprintCallable) // @ game+0x24bcb30
	void SetSliderHandleColor(struct FLinearColor InValue); // Function UMG.Slider.SetSliderHandleColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x24bcab0
	void SetSliderBarColor(struct FLinearColor InValue); // Function UMG.Slider.SetSliderBarColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x24bca30
	void SetMinValue(float InValue); // Function UMG.Slider.SetMinValue // (Final|Native|Public|BlueprintCallable) // @ game+0x24bc6b0
	void SetMaxValue(float InValue); // Function UMG.Slider.SetMaxValue // (Final|Native|Public|BlueprintCallable) // @ game+0x24bc430
	void SetLocked(bool InValue); // Function UMG.Slider.SetLocked // (Final|Native|Public|BlueprintCallable) // @ game+0x24bc2a0
	void SetIndentHandle(bool InValue); // Function UMG.Slider.SetIndentHandle // (Final|Native|Public|BlueprintCallable) // @ game+0x24bc0c0
	float GetValue(); // Function UMG.Slider.GetValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24bb900
	float GetNormalizedValue(); // Function UMG.Slider.GetNormalizedValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24bb710
};

// Class UMG.Spacer
// Size: 0x120 (Inherited: 0x108)
struct USpacer : UWidget {
	struct FVector2D Size; // 0x108(0x08)
	char pad_110[0x10]; // 0x110(0x10)

	void SetSize(struct FVector2D InSize); // Function UMG.Spacer.SetSize // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x24bc9b0
};

// Class UMG.SpinBox
// Size: 0x518 (Inherited: 0x108)
struct USpinBox : UWidget {
	float Value; // 0x108(0x04)
	struct FDelegate ValueDelegate; // 0x10c(0x10)
	char pad_11C[0x4]; // 0x11c(0x04)
	struct FSpinBoxStyle WidgetStyle; // 0x120(0x2e8)
	struct USlateWidgetStyleAsset* Style; // 0x408(0x08)
	int32_t MinFractionalDigits; // 0x410(0x04)
	int32_t MaxFractionalDigits; // 0x414(0x04)
	bool bAlwaysUsesDeltaSnap; // 0x418(0x01)
	char pad_419[0x3]; // 0x419(0x03)
	float Delta; // 0x41c(0x04)
	float SliderExponent; // 0x420(0x04)
	char pad_424[0x4]; // 0x424(0x04)
	struct FSlateFontInfo Font; // 0x428(0x50)
	enum class ETextJustify Justification; // 0x478(0x01)
	char pad_479[0x3]; // 0x479(0x03)
	float MinDesiredWidth; // 0x47c(0x04)
	bool ClearKeyboardFocusOnCommit; // 0x480(0x01)
	bool SelectAllTextOnCommit; // 0x481(0x01)
	char pad_482[0x6]; // 0x482(0x06)
	struct FSlateColor ForegroundColor; // 0x488(0x28)
	struct FMulticastInlineDelegate OnValueChanged; // 0x4b0(0x10)
	struct FMulticastInlineDelegate OnValueCommitted; // 0x4c0(0x10)
	struct FMulticastInlineDelegate OnBeginSliderMovement; // 0x4d0(0x10)
	struct FMulticastInlineDelegate OnEndSliderMovement; // 0x4e0(0x10)
	char bOverride_MinValue : 1; // 0x4f0(0x01)
	char bOverride_MaxValue : 1; // 0x4f0(0x01)
	char bOverride_MinSliderValue : 1; // 0x4f0(0x01)
	char bOverride_MaxSliderValue : 1; // 0x4f0(0x01)
	char pad_4F0_4 : 4; // 0x4f0(0x01)
	char pad_4F1[0x3]; // 0x4f1(0x03)
	float MinValue; // 0x4f4(0x04)
	float MaxValue; // 0x4f8(0x04)
	float MinSliderValue; // 0x4fc(0x04)
	float MaxSliderValue; // 0x500(0x04)
	char pad_504[0x14]; // 0x504(0x14)

	void SetValue(float NewValue); // Function UMG.SpinBox.SetValue // (Final|Native|Public|BlueprintCallable) // @ game+0x24bcf40
	void SetMinValue(float NewValue); // Function UMG.SpinBox.SetMinValue // (Final|Native|Public|BlueprintCallable) // @ game+0x24bc730
	void SetMinSliderValue(float NewValue); // Function UMG.SpinBox.SetMinSliderValue // (Final|Native|Public|BlueprintCallable) // @ game+0x24bc630
	void SetMinFractionalDigits(int32_t NewValue); // Function UMG.SpinBox.SetMinFractionalDigits // (Final|Native|Public|BlueprintCallable) // @ game+0x24bc5b0
	void SetMaxValue(float NewValue); // Function UMG.SpinBox.SetMaxValue // (Final|Native|Public|BlueprintCallable) // @ game+0x24bc4b0
	void SetMaxSliderValue(float NewValue); // Function UMG.SpinBox.SetMaxSliderValue // (Final|Native|Public|BlueprintCallable) // @ game+0x24bc3b0
	void SetMaxFractionalDigits(int32_t NewValue); // Function UMG.SpinBox.SetMaxFractionalDigits // (Final|Native|Public|BlueprintCallable) // @ game+0x24bc330
	void SetForegroundColor(struct FSlateColor InForegroundColor); // Function UMG.SpinBox.SetForegroundColor // (Final|Native|Public|BlueprintCallable) // @ game+0x24bbfd0
	void SetDelta(float NewValue); // Function UMG.SpinBox.SetDelta // (Final|Native|Public|BlueprintCallable) // @ game+0x24bbd20
	void SetAlwaysUsesDeltaSnap(bool bNewValue); // Function UMG.SpinBox.SetAlwaysUsesDeltaSnap // (Final|Native|Public|BlueprintCallable) // @ game+0x24bb960
	void OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, enum class ETextCommit CommitMethod); // DelegateFunction UMG.SpinBox.OnSpinBoxValueCommittedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x158ca90
	void OnSpinBoxValueChangedEvent__DelegateSignature(float InValue); // DelegateFunction UMG.SpinBox.OnSpinBoxValueChangedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x158ca90
	void OnSpinBoxBeginSliderMovement__DelegateSignature(); // DelegateFunction UMG.SpinBox.OnSpinBoxBeginSliderMovement__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x158ca90
	float GetValue(); // Function UMG.SpinBox.GetValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24bb930
	float GetMinValue(); // Function UMG.SpinBox.GetMinValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24bb6e0
	float GetMinSliderValue(); // Function UMG.SpinBox.GetMinSliderValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24bb6b0
	int32_t GetMinFractionalDigits(); // Function UMG.SpinBox.GetMinFractionalDigits // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24bb680
	float GetMaxValue(); // Function UMG.SpinBox.GetMaxValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24bb650
	float GetMaxSliderValue(); // Function UMG.SpinBox.GetMaxSliderValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24bb620
	int32_t GetMaxFractionalDigits(); // Function UMG.SpinBox.GetMaxFractionalDigits // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24bb5f0
	float GetDelta(); // Function UMG.SpinBox.GetDelta // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24bb560
	bool GetAlwaysUsesDeltaSnap(); // Function UMG.SpinBox.GetAlwaysUsesDeltaSnap // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24bb530
	void ClearMinValue(); // Function UMG.SpinBox.ClearMinValue // (Final|Native|Public|BlueprintCallable) // @ game+0x24bb4d0
	void ClearMinSliderValue(); // Function UMG.SpinBox.ClearMinSliderValue // (Final|Native|Public|BlueprintCallable) // @ game+0x24bb4b0
	void ClearMaxValue(); // Function UMG.SpinBox.ClearMaxValue // (Final|Native|Public|BlueprintCallable) // @ game+0x24bb490
	void ClearMaxSliderValue(); // Function UMG.SpinBox.ClearMaxSliderValue // (Final|Native|Public|BlueprintCallable) // @ game+0x24bb470
};

// Class UMG.TextBinding
// Size: 0x68 (Inherited: 0x60)
struct UTextBinding : UPropertyBinding {
	char pad_60[0x8]; // 0x60(0x08)

	struct FText GetTextValue(); // Function UMG.TextBinding.GetTextValue // (Final|Native|Public|Const) // @ game+0x24bb860
	struct FString GetStringValue(); // Function UMG.TextBinding.GetStringValue // (Final|Native|Public|Const) // @ game+0x24bb740
};

// Class UMG.Throbber
// Size: 0x1b0 (Inherited: 0x108)
struct UThrobber : UWidget {
	int32_t NumberOfPieces; // 0x108(0x04)
	bool bAnimateHorizontally; // 0x10c(0x01)
	bool bAnimateVertically; // 0x10d(0x01)
	bool bAnimateOpacity; // 0x10e(0x01)
	char pad_10F[0x1]; // 0x10f(0x01)
	struct USlateBrushAsset* PieceImage; // 0x110(0x08)
	struct FSlateBrush Image; // 0x118(0x88)
	char pad_1A0[0x10]; // 0x1a0(0x10)

	void SetNumberOfPieces(int32_t InNumberOfPieces); // Function UMG.Throbber.SetNumberOfPieces // (Final|Native|Public|BlueprintCallable) // @ game+0x24bc7b0
	void SetAnimateVertically(bool bInAnimateVertically); // Function UMG.Throbber.SetAnimateVertically // (Final|Native|Public|BlueprintCallable) // @ game+0x24bbb10
	void SetAnimateOpacity(bool bInAnimateOpacity); // Function UMG.Throbber.SetAnimateOpacity // (Final|Native|Public|BlueprintCallable) // @ game+0x24bba80
	void SetAnimateHorizontally(bool bInAnimateHorizontally); // Function UMG.Throbber.SetAnimateHorizontally // (Final|Native|Public|BlueprintCallable) // @ game+0x24bb9f0
};

// Class UMG.TileView
// Size: 0x388 (Inherited: 0x368)
struct UTileView : UListView {
	float EntryHeight; // 0x368(0x04)
	float EntryWidth; // 0x36c(0x04)
	enum class EListItemAlignment TileAlignment; // 0x370(0x01)
	bool bWrapHorizontalNavigation; // 0x371(0x01)
	char pad_372[0x16]; // 0x372(0x16)

	void SetEntryWidth(float NewWidth); // Function UMG.TileView.SetEntryWidth // (Final|Native|Public|BlueprintCallable) // @ game+0x24bbe20
	void SetEntryHeight(float NewHeight); // Function UMG.TileView.SetEntryHeight // (Final|Native|Public|BlueprintCallable) // @ game+0x24bbda0
};

// Class UMG.TreeView
// Size: 0x3c0 (Inherited: 0x368)
struct UTreeView : UListView {
	char pad_368[0x10]; // 0x368(0x10)
	struct FDelegate BP_OnGetItemChildren; // 0x378(0x10)
	struct FMulticastInlineDelegate BP_OnItemExpansionChanged; // 0x388(0x10)
	char pad_398[0x28]; // 0x398(0x28)

	void SetItemExpansion(struct UObject* Item, bool bExpandItem); // Function UMG.TreeView.SetItemExpansion // (Final|Native|Public|BlueprintCallable) // @ game+0x24bc150
	void ExpandAll(); // Function UMG.TreeView.ExpandAll // (Final|Native|Public|BlueprintCallable) // @ game+0x24bb510
	void CollapseAll(); // Function UMG.TreeView.CollapseAll // (Final|Native|Public|BlueprintCallable) // @ game+0x24bb4f0
};

// Class UMG.UMGSequencePlayer
// Size: 0x7a8 (Inherited: 0x28)
struct UUMGSequencePlayer : UObject {
	char pad_28[0x3e0]; // 0x28(0x3e0)
	struct UWidgetAnimation* Animation; // 0x408(0x08)
	char pad_410[0x398]; // 0x410(0x398)

	void SetUserTag(struct FName InUserTag); // Function UMG.UMGSequencePlayer.SetUserTag // (Final|Native|Public|BlueprintCallable) // @ game+0x24c2f70
	struct FName GetUserTag(); // Function UMG.UMGSequencePlayer.GetUserTag // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24c1870
};

// Class UMG.UniformGridPanel
// Size: 0x148 (Inherited: 0x120)
struct UUniformGridPanel : UPanelWidget {
	struct FMargin SlotPadding; // 0x120(0x10)
	float MinDesiredSlotWidth; // 0x130(0x04)
	float MinDesiredSlotHeight; // 0x134(0x04)
	char pad_138[0x10]; // 0x138(0x10)

	void SetSlotPadding(struct FMargin InSlotPadding); // Function UMG.UniformGridPanel.SetSlotPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x24c2ee0
	void SetMinDesiredSlotWidth(float InMinDesiredSlotWidth); // Function UMG.UniformGridPanel.SetMinDesiredSlotWidth // (Final|Native|Public|BlueprintCallable) // @ game+0x24c2a80
	void SetMinDesiredSlotHeight(float InMinDesiredSlotHeight); // Function UMG.UniformGridPanel.SetMinDesiredSlotHeight // (Final|Native|Public|BlueprintCallable) // @ game+0x24c2a00
	struct UUniformGridSlot* AddChildToUniformGrid(struct UWidget* Content, int32_t InRow, int32_t InColumn); // Function UMG.UniformGridPanel.AddChildToUniformGrid // (Final|Native|Public|BlueprintCallable) // @ game+0x24c1190
};

// Class UMG.UniformGridSlot
// Size: 0x50 (Inherited: 0x38)
struct UUniformGridSlot : UPanelSlot {
	enum class EHorizontalAlignment HorizontalAlignment; // 0x38(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x39(0x01)
	char pad_3A[0x2]; // 0x3a(0x02)
	int32_t Row; // 0x3c(0x04)
	int32_t Column; // 0x40(0x04)
	char pad_44[0xc]; // 0x44(0x0c)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.UniformGridSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x24c2ff0
	void SetRow(int32_t InRow); // Function UMG.UniformGridSlot.SetRow // (Final|Native|Public|BlueprintCallable) // @ game+0x24c2e60
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.UniformGridSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x24c2870
	void SetColumn(int32_t InColumn); // Function UMG.UniformGridSlot.SetColumn // (Final|Native|Public|BlueprintCallable) // @ game+0x24c2680
};

// Class UMG.VerticalBox
// Size: 0x130 (Inherited: 0x120)
struct UVerticalBox : UPanelWidget {
	char pad_120[0x10]; // 0x120(0x10)

	struct UVerticalBoxSlot* AddChildToVerticalBox(struct UWidget* Content); // Function UMG.VerticalBox.AddChildToVerticalBox // (Final|Native|Public|BlueprintCallable) // @ game+0x24c5140
};

// Class UMG.VerticalBoxSlot
// Size: 0x60 (Inherited: 0x38)
struct UVerticalBoxSlot : UPanelSlot {
	struct FSlateChildSize Size; // 0x38(0x08)
	struct FMargin Padding; // 0x40(0x10)
	char pad_50[0x8]; // 0x50(0x08)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x58(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x59(0x01)
	char pad_5A[0x6]; // 0x5a(0x06)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.VerticalBoxSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x24c6990
	void SetSize(struct FSlateChildSize InSize); // Function UMG.VerticalBoxSlot.SetSize // (Final|Native|Public|BlueprintCallable) // @ game+0x24c6730
	void SetPadding(struct FMargin InPadding); // Function UMG.VerticalBoxSlot.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x24c62c0
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.VerticalBoxSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x24c5d40
};

// Class UMG.Viewport
// Size: 0x148 (Inherited: 0x120)
struct UViewport : UContentWidget {
	struct FLinearColor BackgroundColor; // 0x120(0x10)
	char pad_130[0x18]; // 0x130(0x18)

	struct AActor* Spawn(struct AActor* ActorClass); // Function UMG.Viewport.Spawn // (Final|Native|Public|BlueprintCallable) // @ game+0x24c6bb0
	void SetViewRotation(struct FRotator Rotation); // Function UMG.Viewport.SetViewRotation // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x24c6aa0
	void SetViewLocation(struct FVector Location); // Function UMG.Viewport.SetViewLocation // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x24c6a10
	struct FRotator GetViewRotation(); // Function UMG.Viewport.GetViewRotation // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x24c5790
	struct UWorld* GetViewportWorld(); // Function UMG.Viewport.GetViewportWorld // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24c57d0
	struct FVector GetViewLocation(); // Function UMG.Viewport.GetViewLocation // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x24c5750
};

// Class UMG.VisibilityBinding
// Size: 0x60 (Inherited: 0x60)
struct UVisibilityBinding : UPropertyBinding {

	enum class ESlateVisibility GetValue(); // Function UMG.VisibilityBinding.GetValue // (Final|Native|Public|Const) // @ game+0x24c5720
};

// Class UMG.WidgetAnimation
// Size: 0x378 (Inherited: 0x348)
struct UWidgetAnimation : UMovieSceneSequence {
	struct UMovieScene* MovieScene; // 0x348(0x08)
	struct TArray<struct FWidgetAnimationBinding> AnimationBindings; // 0x350(0x10)
	bool bLegacyFinishOnStop; // 0x360(0x01)
	char pad_361[0x7]; // 0x361(0x07)
	struct FString DisplayLabel; // 0x368(0x10)

	void UnbindFromAnimationStarted(struct UUserWidget* Widget, struct FDelegate Delegate); // Function UMG.WidgetAnimation.UnbindFromAnimationStarted // (Final|Native|Public|BlueprintCallable) // @ game+0x24c6e20
	void UnbindFromAnimationFinished(struct UUserWidget* Widget, struct FDelegate Delegate); // Function UMG.WidgetAnimation.UnbindFromAnimationFinished // (Final|Native|Public|BlueprintCallable) // @ game+0x24c6d40
	void UnbindAllFromAnimationStarted(struct UUserWidget* Widget); // Function UMG.WidgetAnimation.UnbindAllFromAnimationStarted // (Final|Native|Public|BlueprintCallable) // @ game+0x24c6cc0
	void UnbindAllFromAnimationFinished(struct UUserWidget* Widget); // Function UMG.WidgetAnimation.UnbindAllFromAnimationFinished // (Final|Native|Public|BlueprintCallable) // @ game+0x24c6c40
	float GetStartTime(); // Function UMG.WidgetAnimation.GetStartTime // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24c56b0
	float GetEndTime(); // Function UMG.WidgetAnimation.GetEndTime // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24c54f0
	void BindToAnimationStarted(struct UUserWidget* Widget, struct FDelegate Delegate); // Function UMG.WidgetAnimation.BindToAnimationStarted // (Final|Native|Public|BlueprintCallable) // @ game+0x24c52b0
	void BindToAnimationFinished(struct UUserWidget* Widget, struct FDelegate Delegate); // Function UMG.WidgetAnimation.BindToAnimationFinished // (Final|Native|Public|BlueprintCallable) // @ game+0x24c51d0
};

// Class UMG.WidgetAnimationDelegateBinding
// Size: 0x38 (Inherited: 0x28)
struct UWidgetAnimationDelegateBinding : UDynamicBlueprintBinding {
	struct TArray<struct FBlueprintWidgetAnimationDelegateBinding> WidgetAnimationDelegateBindings; // 0x28(0x10)
};

// Class UMG.WidgetAnimationPlayCallbackProxy
// Size: 0x48 (Inherited: 0x28)
struct UWidgetAnimationPlayCallbackProxy : UObject {
	struct FMulticastInlineDelegate Finished; // 0x28(0x10)
	char pad_38[0x10]; // 0x38(0x10)

	struct UWidgetAnimationPlayCallbackProxy* CreatePlayAnimationTimeRangeProxyObject(struct UUMGSequencePlayer* Result, struct UUserWidget* Widget, struct UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32_t NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed); // Function UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationTimeRangeProxyObject // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x24c8cb0
	struct UWidgetAnimationPlayCallbackProxy* CreatePlayAnimationProxyObject(struct UUMGSequencePlayer* Result, struct UUserWidget* Widget, struct UWidgetAnimation* InAnimation, float StartAtTime, int32_t NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed); // Function UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationProxyObject // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x24c8ab0
};

// Class UMG.WidgetBinding
// Size: 0x60 (Inherited: 0x60)
struct UWidgetBinding : UPropertyBinding {

	struct UWidget* GetValue(); // Function UMG.WidgetBinding.GetValue // (Final|Native|Public|Const) // @ game+0x24cad90
};

// Class UMG.WidgetBlueprintGeneratedClass
// Size: 0x398 (Inherited: 0x328)
struct UWidgetBlueprintGeneratedClass : UBlueprintGeneratedClass {
	struct UWidgetTree* WidgetTree; // 0x328(0x08)
	char bAllowTemplate : 1; // 0x330(0x01)
	char bAllowDynamicCreation : 1; // 0x330(0x01)
	char bValidTemplate : 1; // 0x330(0x01)
	char bTemplateInitialized : 1; // 0x330(0x01)
	char bCookedTemplate : 1; // 0x330(0x01)
	char bClassRequiresNativeTick : 1; // 0x330(0x01)
	char pad_330_6 : 2; // 0x330(0x01)
	char pad_331[0x7]; // 0x331(0x07)
	struct TArray<struct FDelegateRuntimeBinding> Bindings; // 0x338(0x10)
	struct TArray<struct UWidgetAnimation*> Animations; // 0x348(0x10)
	struct TArray<struct FName> NamedSlots; // 0x358(0x10)
	struct TSoftObjectPtr<struct UUserWidget> TemplateAsset; // 0x368(0x28)
	struct UUserWidget* Template; // 0x390(0x08)
};

// Class UMG.WidgetBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UWidgetBlueprintLibrary : UBlueprintFunctionLibrary {

	struct FEventReply UnlockMouse(struct FEventReply Reply); // Function UMG.WidgetBlueprintLibrary.UnlockMouse // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x24cc2e0
	struct FEventReply Unhandled(); // Function UMG.WidgetBlueprintLibrary.Unhandled // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x24cc270
	void SetWindowTitleBarState(struct UWidget* TitleBarContent, enum class EWindowTitleBarMode Mode, bool bTitleBarDragEnabled, bool bWindowButtonsVisible, bool bTitleBarVisible); // Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarState // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x24cc0e0
	void SetWindowTitleBarOnCloseClickedDelegate(struct FDelegate Delegate); // Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarOnCloseClickedDelegate // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x24cc050
	void SetWindowTitleBarCloseButtonActive(bool bActive); // Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarCloseButtonActive // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x24cbfd0
	struct FEventReply SetUserFocus(struct FEventReply Reply, struct UWidget* FocusWidget, bool bInAllUsers); // Function UMG.WidgetBlueprintLibrary.SetUserFocus // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x24c8570
	struct FEventReply SetMousePosition(struct FEventReply Reply, struct FVector2D NewMousePosition); // Function UMG.WidgetBlueprintLibrary.SetMousePosition // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x24cbeb0
	void SetInputMode_UIOnlyEx(struct APlayerController* PlayerController, struct UWidget* InWidgetToFocus, enum class EMouseLockMode InMouseLockMode); // Function UMG.WidgetBlueprintLibrary.SetInputMode_UIOnlyEx // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x24cbdc0
	void SetInputMode_UIOnly(struct APlayerController* Target, struct UWidget* InWidgetToFocus, bool bLockMouseToViewport); // Function UMG.WidgetBlueprintLibrary.SetInputMode_UIOnly // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x24cbcc0
	void SetInputMode_GameOnly(struct APlayerController* PlayerController); // Function UMG.WidgetBlueprintLibrary.SetInputMode_GameOnly // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x24cbc50
	void SetInputMode_GameAndUIEx(struct APlayerController* PlayerController, struct UWidget* InWidgetToFocus, enum class EMouseLockMode InMouseLockMode, bool bHideCursorDuringCapture); // Function UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUIEx // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x24cbb10
	void SetInputMode_GameAndUI(struct APlayerController* Target, struct UWidget* InWidgetToFocus, bool bLockMouseToViewport, bool bHideCursorDuringCapture); // Function UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUI // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x24cb9d0
	bool SetHardwareCursor(struct UObject* WorldContextObject, enum class EMouseCursor CursorShape, struct FName CursorName, struct FVector2D HotSpot); // Function UMG.WidgetBlueprintLibrary.SetHardwareCursor // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x24cb8a0
	void SetFocusToGameViewport(); // Function UMG.WidgetBlueprintLibrary.SetFocusToGameViewport // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x24cb880
	void SetColorVisionDeficiencyType(enum class EColorVisionDeficiency Type, float Severity, bool CorrectDeficiency, bool ShowCorrectionWithDeficiency); // Function UMG.WidgetBlueprintLibrary.SetColorVisionDeficiencyType // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x24cb730
	void SetBrushResourceToTexture(struct FSlateBrush Brush, struct UTexture2D* Texture); // Function UMG.WidgetBlueprintLibrary.SetBrushResourceToTexture // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x24cb580
	void SetBrushResourceToMaterial(struct FSlateBrush Brush, struct UMaterialInterface* Material); // Function UMG.WidgetBlueprintLibrary.SetBrushResourceToMaterial // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x24cb580
	void RestorePreviousWindowTitleBarState(); // Function UMG.WidgetBlueprintLibrary.RestorePreviousWindowTitleBarState // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x24cb560
	struct FEventReply ReleaseMouseCapture(struct FEventReply Reply); // Function UMG.WidgetBlueprintLibrary.ReleaseMouseCapture // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x24cb470
	struct FEventReply ReleaseJoystickCapture(struct FEventReply Reply, bool bInAllJoysticks); // Function UMG.WidgetBlueprintLibrary.ReleaseJoystickCapture // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x24c8810
	void OnGameWindowCloseButtonClickedDelegate__DelegateSignature(); // DelegateFunction UMG.WidgetBlueprintLibrary.OnGameWindowCloseButtonClickedDelegate__DelegateSignature // (Public|Delegate) // @ game+0x158ca90
	struct FSlateBrush NoResourceBrush(); // Function UMG.WidgetBlueprintLibrary.NoResourceBrush // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x24cb3c0
	struct FSlateBrush MakeBrushFromTexture(struct UTexture2D* Texture, int32_t Width, int32_t Height); // Function UMG.WidgetBlueprintLibrary.MakeBrushFromTexture // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x24cb230
	struct FSlateBrush MakeBrushFromMaterial(struct UMaterialInterface* Material, int32_t Width, int32_t Height); // Function UMG.WidgetBlueprintLibrary.MakeBrushFromMaterial // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x24cb0a0
	struct FSlateBrush MakeBrushFromAsset(struct USlateBrushAsset* BrushAsset); // Function UMG.WidgetBlueprintLibrary.MakeBrushFromAsset // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x24caf90
	struct FEventReply LockMouse(struct FEventReply Reply, struct UWidget* CapturingWidget); // Function UMG.WidgetBlueprintLibrary.LockMouse // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x24cae60
	bool IsDragDropping(); // Function UMG.WidgetBlueprintLibrary.IsDragDropping // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x24cae30
	struct FEventReply Handled(); // Function UMG.WidgetBlueprintLibrary.Handled // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x24cadc0
	void GetSafeZonePadding(struct UObject* WorldContextObject, struct FVector4 SafePadding, struct FVector2D SafePaddingScale, struct FVector4 SpillOverPadding); // Function UMG.WidgetBlueprintLibrary.GetSafeZonePadding // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x24cac20
	struct FKeyEvent GetKeyEventFromAnalogInputEvent(struct FAnalogInputEvent Event); // Function UMG.WidgetBlueprintLibrary.GetKeyEventFromAnalogInputEvent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x24caaa0
	struct FInputEvent GetInputEventFromPointerEvent(struct FPointerEvent Event); // Function UMG.WidgetBlueprintLibrary.GetInputEventFromPointerEvent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x24ca950
	struct FInputEvent GetInputEventFromNavigationEvent(struct FNavigationEvent Event); // Function UMG.WidgetBlueprintLibrary.GetInputEventFromNavigationEvent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x24ca870
	struct FInputEvent GetInputEventFromKeyEvent(struct FKeyEvent Event); // Function UMG.WidgetBlueprintLibrary.GetInputEventFromKeyEvent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x24ca750
	struct FInputEvent GetInputEventFromCharacterEvent(struct FCharacterEvent Event); // Function UMG.WidgetBlueprintLibrary.GetInputEventFromCharacterEvent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x24ca670
	struct UMaterialInstanceDynamic* GetDynamicMaterial(struct FSlateBrush Brush); // Function UMG.WidgetBlueprintLibrary.GetDynamicMaterial // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x24ca4f0
	struct UDragDropOperation* GetDragDroppingContent(); // Function UMG.WidgetBlueprintLibrary.GetDragDroppingContent // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x24ca4c0
	struct UTexture2D* GetBrushResourceAsTexture2D(struct FSlateBrush Brush); // Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsTexture2D // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x24ca340
	struct UMaterialInterface* GetBrushResourceAsMaterial(struct FSlateBrush Brush); // Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsMaterial // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x24ca1c0
	struct UObject* GetBrushResource(struct FSlateBrush Brush); // Function UMG.WidgetBlueprintLibrary.GetBrushResource // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x24ca040
	void GetAllWidgetsWithInterface(struct UObject* WorldContextObject, struct TArray<struct UUserWidget*> FoundWidgets, struct UInterface* Interface, bool TopLevelOnly); // Function UMG.WidgetBlueprintLibrary.GetAllWidgetsWithInterface // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x24c9ee0
	void GetAllWidgetsOfClass(struct UObject* WorldContextObject, struct TArray<struct UUserWidget*> FoundWidgets, struct UUserWidget* WidgetClass, bool TopLevelOnly); // Function UMG.WidgetBlueprintLibrary.GetAllWidgetsOfClass // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x24c9d80
	struct FEventReply EndDragDrop(struct FEventReply Reply); // Function UMG.WidgetBlueprintLibrary.EndDragDrop // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x24c9c90
	void DrawTextFormatted(struct FPaintContext Context, struct FText Text, struct FVector2D Position, struct UFont* Font, int32_t FontSize, struct FName FontTypeFace, struct FLinearColor Tint); // Function UMG.WidgetBlueprintLibrary.DrawTextFormatted // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x24c9a30
	void DrawText(struct FPaintContext Context, struct FString inString, struct FVector2D Position, struct FLinearColor Tint); // Function UMG.WidgetBlueprintLibrary.DrawText // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x24c98b0
	void DrawLines(struct FPaintContext Context, struct TArray<struct FVector2D> Points, struct FLinearColor Tint, bool bAntiAlias, float Thickness); // Function UMG.WidgetBlueprintLibrary.DrawLines // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x24c96e0
	void DrawLine(struct FPaintContext Context, struct FVector2D PositionA, struct FVector2D PositionB, struct FLinearColor Tint, bool bAntiAlias, float Thickness); // Function UMG.WidgetBlueprintLibrary.DrawLine // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x24c94e0
	void DrawBox(struct FPaintContext Context, struct FVector2D Position, struct FVector2D Size, struct USlateBrushAsset* Brush, struct FLinearColor Tint); // Function UMG.WidgetBlueprintLibrary.DrawBox // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x24c9330
	void DismissAllMenus(); // Function UMG.WidgetBlueprintLibrary.DismissAllMenus // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x24c9310
	struct FEventReply DetectDragIfPressed(struct FPointerEvent PointerEvent, struct UWidget* WidgetDetectingDrag, struct FKey DragKey); // Function UMG.WidgetBlueprintLibrary.DetectDragIfPressed // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x24c90c0
	struct FEventReply DetectDrag(struct FEventReply Reply, struct UWidget* WidgetDetectingDrag, struct FKey DragKey); // Function UMG.WidgetBlueprintLibrary.DetectDrag // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x24c8ef0
	struct UDragDropOperation* CreateDragDropOperation(struct UDragDropOperation* OperationClass); // Function UMG.WidgetBlueprintLibrary.CreateDragDropOperation // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x24c8a30
	struct UUserWidget* Create(struct UObject* WorldContextObject, struct UUserWidget* WidgetType, struct APlayerController* OwningPlayer); // Function UMG.WidgetBlueprintLibrary.Create // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x24c8940
	struct FEventReply ClearUserFocus(struct FEventReply Reply, bool bInAllUsers); // Function UMG.WidgetBlueprintLibrary.ClearUserFocus // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x24c8810
	struct FEventReply CaptureMouse(struct FEventReply Reply, struct UWidget* CapturingWidget); // Function UMG.WidgetBlueprintLibrary.CaptureMouse // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x24c86e0
	struct FEventReply CaptureJoystick(struct FEventReply Reply, struct UWidget* CapturingWidget, bool bInAllJoysticks); // Function UMG.WidgetBlueprintLibrary.CaptureJoystick // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x24c8570
	void CancelDragDrop(); // Function UMG.WidgetBlueprintLibrary.CancelDragDrop // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x24c8550
};

// Class UMG.WidgetInteractionComponent
// Size: 0x3e0 (Inherited: 0x1f0)
struct UWidgetInteractionComponent : USceneComponent {
	struct FMulticastInlineDelegate OnHoveredWidgetChanged; // 0x1f0(0x10)
	char pad_200[0x10]; // 0x200(0x10)
	int32_t VirtualUserIndex; // 0x210(0x04)
	float PointerIndex; // 0x214(0x04)
	enum class ECollisionChannel TraceChannel; // 0x218(0x01)
	char pad_219[0x3]; // 0x219(0x03)
	float InteractionDistance; // 0x21c(0x04)
	enum class EWidgetInteractionSource InteractionSource; // 0x220(0x01)
	bool bEnableHitTesting; // 0x221(0x01)
	bool bShowDebug; // 0x222(0x01)
	char pad_223[0x1]; // 0x223(0x01)
	struct FLinearColor DebugColor; // 0x224(0x10)
	char pad_234[0x7c]; // 0x234(0x7c)
	struct FHitResult CustomHitResult; // 0x2b0(0x88)
	struct FVector2D LocalHitLocation; // 0x338(0x08)
	struct FVector2D LastLocalHitLocation; // 0x340(0x08)
	struct UWidgetComponent* HoveredWidgetComponent; // 0x348(0x08)
	struct FHitResult LastHitResult; // 0x350(0x88)
	bool bIsHoveredWidgetInteractable; // 0x3d8(0x01)
	bool bIsHoveredWidgetFocusable; // 0x3d9(0x01)
	bool bIsHoveredWidgetHitTestVisible; // 0x3da(0x01)
	char pad_3DB[0x5]; // 0x3db(0x05)

	void SetFocus(struct UWidget* FocusWidget); // Function UMG.WidgetInteractionComponent.SetFocus // (Final|Native|Public|BlueprintCallable) // @ game+0x24cf180
	void SetCustomHitResult(struct FHitResult HitResult); // Function UMG.WidgetInteractionComponent.SetCustomHitResult // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x24cef20
	bool SendKeyChar(struct FString Characters, bool bRepeat); // Function UMG.WidgetInteractionComponent.SendKeyChar // (Native|Public|BlueprintCallable) // @ game+0x24ced60
	void ScrollWheel(float ScrollDelta); // Function UMG.WidgetInteractionComponent.ScrollWheel // (Native|Public|BlueprintCallable) // @ game+0x24cece0
	void ReleasePointerKey(struct FKey Key); // Function UMG.WidgetInteractionComponent.ReleasePointerKey // (Native|Public|BlueprintCallable) // @ game+0x24ceb70
	bool ReleaseKey(struct FKey Key); // Function UMG.WidgetInteractionComponent.ReleaseKey // (Native|Public|BlueprintCallable) // @ game+0x24cea70
	void PressPointerKey(struct FKey Key); // Function UMG.WidgetInteractionComponent.PressPointerKey // (Native|Public|BlueprintCallable) // @ game+0x24ce830
	bool PressKey(struct FKey Key, bool bRepeat); // Function UMG.WidgetInteractionComponent.PressKey // (Native|Public|BlueprintCallable) // @ game+0x24ce6f0
	bool PressAndReleaseKey(struct FKey Key); // Function UMG.WidgetInteractionComponent.PressAndReleaseKey // (Native|Public|BlueprintCallable) // @ game+0x24ce5f0
	bool IsOverInteractableWidget(); // Function UMG.WidgetInteractionComponent.IsOverInteractableWidget // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24ce5c0
	bool IsOverHitTestVisibleWidget(); // Function UMG.WidgetInteractionComponent.IsOverHitTestVisibleWidget // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24ce590
	bool IsOverFocusableWidget(); // Function UMG.WidgetInteractionComponent.IsOverFocusableWidget // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24ce560
	struct FHitResult GetLastHitResult(); // Function UMG.WidgetInteractionComponent.GetLastHitResult // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24cdee0
	struct UWidgetComponent* GetHoveredWidgetComponent(); // Function UMG.WidgetInteractionComponent.GetHoveredWidgetComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24cdeb0
	struct FVector2D Get2DHitLocation(); // Function UMG.WidgetInteractionComponent.Get2DHitLocation // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x24cdd90
};

// Class UMG.WidgetLayoutLibrary
// Size: 0x28 (Inherited: 0x28)
struct UWidgetLayoutLibrary : UBlueprintFunctionLibrary {

	struct UWrapBoxSlot* SlotAsWrapBoxSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsWrapBoxSlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x24cfe50
	struct UWidgetSwitcherSlot* SlotAsWidgetSwitcherSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsWidgetSwitcherSlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x24cfdd0
	struct UVerticalBoxSlot* SlotAsVerticalBoxSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsVerticalBoxSlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x24cfd50
	struct UUniformGridSlot* SlotAsUniformGridSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsUniformGridSlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x24cfcd0
	struct USizeBoxSlot* SlotAsSizeBoxSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsSizeBoxSlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x24cfc50
	struct UScrollBoxSlot* SlotAsScrollBoxSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsScrollBoxSlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x24cfbd0
	struct UScaleBoxSlot* SlotAsScaleBoxSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsScaleBoxSlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x24cfb50
	struct USafeZoneSlot* SlotAsSafeBoxSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsSafeBoxSlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x24cfad0
	struct UOverlaySlot* SlotAsOverlaySlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsOverlaySlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x24cfa50
	struct UHorizontalBoxSlot* SlotAsHorizontalBoxSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsHorizontalBoxSlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x24cf9d0
	struct UGridSlot* SlotAsGridSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsGridSlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x24cf950
	struct UCanvasPanelSlot* SlotAsCanvasSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsCanvasSlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x24cf8d0
	struct UBorderSlot* SlotAsBorderSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsBorderSlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x24cf850
	void RemoveAllWidgets(struct UObject* WorldContextObject); // Function UMG.WidgetLayoutLibrary.RemoveAllWidgets // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x24cec50
	bool ProjectWorldLocationToWidgetPosition(struct APlayerController* PlayerController, struct FVector WorldLocation, struct FVector2D ScreenPosition, bool bPlayerViewportRelative); // Function UMG.WidgetLayoutLibrary.ProjectWorldLocationToWidgetPosition // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x24ce910
	struct FGeometry GetViewportWidgetGeometry(struct UObject* WorldContextObject); // Function UMG.WidgetLayoutLibrary.GetViewportWidgetGeometry // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x24ce450
	struct FVector2D GetViewportSize(struct UObject* WorldContextObject); // Function UMG.WidgetLayoutLibrary.GetViewportSize // (Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x24ce3c0
	float GetViewportScale(struct UObject* WorldContextObject); // Function UMG.WidgetLayoutLibrary.GetViewportScale // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x24ce330
	struct FGeometry GetPlayerScreenWidgetGeometry(struct APlayerController* PlayerController); // Function UMG.WidgetLayoutLibrary.GetPlayerScreenWidgetGeometry // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x24ce1e0
	bool GetMousePositionScaledByDPI(struct APlayerController* Player, float LocationX, float LocationY); // Function UMG.WidgetLayoutLibrary.GetMousePositionScaledByDPI // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x24ce060
	struct FVector2D GetMousePositionOnViewport(struct UObject* WorldContextObject); // Function UMG.WidgetLayoutLibrary.GetMousePositionOnViewport // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x24cdfd0
	struct FVector2D GetMousePositionOnPlatform(); // Function UMG.WidgetLayoutLibrary.GetMousePositionOnPlatform // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x24cdf90
};

// Class UMG.WidgetNavigation
// Size: 0x100 (Inherited: 0x28)
struct UWidgetNavigation : UObject {
	struct FWidgetNavigationData Up; // 0x28(0x24)
	struct FWidgetNavigationData Down; // 0x4c(0x24)
	struct FWidgetNavigationData Left; // 0x70(0x24)
	struct FWidgetNavigationData Right; // 0x94(0x24)
	struct FWidgetNavigationData Next; // 0xb8(0x24)
	struct FWidgetNavigationData Previous; // 0xdc(0x24)
};

// Class UMG.WidgetSwitcher
// Size: 0x138 (Inherited: 0x120)
struct UWidgetSwitcher : UPanelWidget {
	int32_t ActiveWidgetIndex; // 0x120(0x04)
	char pad_124[0x14]; // 0x124(0x14)

	void SetActiveWidgetIndex(int32_t Index); // Function UMG.WidgetSwitcher.SetActiveWidgetIndex // (Native|Public|BlueprintCallable) // @ game+0x24d1160
	void SetActiveWidget(struct UWidget* Widget); // Function UMG.WidgetSwitcher.SetActiveWidget // (Native|Public|BlueprintCallable) // @ game+0x24ae8f0
	struct UWidget* GetWidgetAtIndex(int32_t Index); // Function UMG.WidgetSwitcher.GetWidgetAtIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24d10d0
	int32_t GetNumWidgets(); // Function UMG.WidgetSwitcher.GetNumWidgets // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24d10a0
	int32_t GetActiveWidgetIndex(); // Function UMG.WidgetSwitcher.GetActiveWidgetIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24d1070
	struct UWidget* GetActiveWidget(); // Function UMG.WidgetSwitcher.GetActiveWidget // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24d1040
};

// Class UMG.WidgetSwitcherSlot
// Size: 0x58 (Inherited: 0x38)
struct UWidgetSwitcherSlot : UPanelSlot {
	char pad_38[0x8]; // 0x38(0x08)
	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0x6]; // 0x52(0x06)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.WidgetSwitcherSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x24d17c0
	void SetPadding(struct FMargin InPadding); // Function UMG.WidgetSwitcherSlot.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x24d1580
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.WidgetSwitcherSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x24d1300
};

// Class UMG.WidgetTree
// Size: 0x30 (Inherited: 0x28)
struct UWidgetTree : UObject {
	struct UWidget* RootWidget; // 0x28(0x08)
};

// Class UMG.WindowTitleBarArea
// Size: 0x140 (Inherited: 0x120)
struct UWindowTitleBarArea : UContentWidget {
	bool bWindowButtonsEnabled; // 0x120(0x01)
	bool bDoubleClickTogglesFullscreen; // 0x121(0x01)
	char pad_122[0x1e]; // 0x122(0x1e)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.WindowTitleBarArea.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x24d1840
	void SetPadding(struct FMargin InPadding); // Function UMG.WindowTitleBarArea.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x24d1610
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.WindowTitleBarArea.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x24d1380
};

// Class UMG.WindowTitleBarAreaSlot
// Size: 0x60 (Inherited: 0x38)
struct UWindowTitleBarAreaSlot : UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x48(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x49(0x01)
	char pad_4A[0x16]; // 0x4a(0x16)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.WindowTitleBarAreaSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x24d18c0
	void SetPadding(struct FMargin InPadding); // Function UMG.WindowTitleBarAreaSlot.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x24d16a0
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.WindowTitleBarAreaSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x24d1400
};

// Class UMG.WrapBox
// Size: 0x140 (Inherited: 0x120)
struct UWrapBox : UPanelWidget {
	struct FVector2D InnerSlotPadding; // 0x120(0x08)
	float WrapWidth; // 0x128(0x04)
	bool bExplicitWrapWidth; // 0x12c(0x01)
	char pad_12D[0x13]; // 0x12d(0x13)

	void SetInnerSlotPadding(struct FVector2D InPadding); // Function UMG.WrapBox.SetInnerSlotPadding // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x24d1500
	struct UWrapBoxSlot* AddChildToWrapBox(struct UWidget* Content); // Function UMG.WrapBox.AddChildToWrapBox // (Final|Native|Public|BlueprintCallable) // @ game+0x24d0fb0
};

// Class UMG.WrapBoxSlot
// Size: 0x60 (Inherited: 0x38)
struct UWrapBoxSlot : UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	bool bFillEmptySpace; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	float FillSpanWhenLessThan; // 0x4c(0x04)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0xe]; // 0x52(0x0e)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.WrapBoxSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x24d1940
	void SetPadding(struct FMargin InPadding); // Function UMG.WrapBoxSlot.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x24d1730
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.WrapBoxSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x24d1480
	void SetFillSpanWhenLessThan(float InFillSpanWhenLessThan); // Function UMG.WrapBoxSlot.SetFillSpanWhenLessThan // (Final|Native|Public|BlueprintCallable) // @ game+0x24d1280
	void SetFillEmptySpace(bool InbFillEmptySpace); // Function UMG.WrapBoxSlot.SetFillEmptySpace // (Final|Native|Public|BlueprintCallable) // @ game+0x24d11f0
};

