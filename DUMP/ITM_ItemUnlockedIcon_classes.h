// WidgetBlueprintGeneratedClass ITM_ItemUnlockedIcon.ITM_ItemUnlockedIcon_C
// Size: 0x2a0 (Inherited: 0x230)
struct UITM_ItemUnlockedIcon_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* OutroAnim; // 0x238(0x08)
	struct UWidgetAnimation* Ping; // 0x240(0x08)
	struct UImage* UnlockedIcon; // 0x248(0x08)
	bool MatchChildNotifications; // 0x250(0x01)
	char pad_251[0x7]; // 0x251(0x07)
	struct TArray<struct UObject*> IDArray; // 0x258(0x10)
	bool HasNotification; // 0x268(0x01)
	char pad_269[0x7]; // 0x269(0x07)
	struct FMulticastInlineDelegate OnNotificationRemoved; // 0x270(0x10)
	struct TArray<struct UITM_ItemUnlockedIcon_C*> Children; // 0x280(0x10)
	struct FMulticastInlineDelegate OnChanged; // 0x290(0x10)

	void Refresh(); // Function ITM_ItemUnlockedIcon.ITM_ItemUnlockedIcon_C.Refresh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ClearChildren(); // Function ITM_ItemUnlockedIcon.ITM_ItemUnlockedIcon_C.ClearChildren // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ChildNotificationChanged(); // Function ITM_ItemUnlockedIcon.ITM_ItemUnlockedIcon_C.ChildNotificationChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void AddChildNotification(struct UITM_ItemUnlockedIcon_C* ChildIcon); // Function ITM_ItemUnlockedIcon.ITM_ItemUnlockedIcon_C.AddChildNotification // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void RemoveNotification(); // Function ITM_ItemUnlockedIcon.ITM_ItemUnlockedIcon_C.RemoveNotification // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetItemIDArray(struct TArray<struct UObject*> ObjectsWithID, bool MatchChildNotifications); // Function ITM_ItemUnlockedIcon.ITM_ItemUnlockedIcon_C.SetItemIDArray // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void SetVisible(); // Function ITM_ItemUnlockedIcon.ITM_ItemUnlockedIcon_C.SetVisible // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void HideIcon(); // Function ITM_ItemUnlockedIcon.ITM_ItemUnlockedIcon_C.HideIcon // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnAnimFinished(); // Function ITM_ItemUnlockedIcon.ITM_ItemUnlockedIcon_C.OnAnimFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_ITM_ItemUnlockedIcon(int32_t EntryPoint); // Function ITM_ItemUnlockedIcon.ITM_ItemUnlockedIcon_C.ExecuteUbergraph_ITM_ItemUnlockedIcon // (Final|UbergraphFunction) // @ game+0x158ca90
	void OnChanged__DelegateSignature(); // Function ITM_ItemUnlockedIcon.ITM_ItemUnlockedIcon_C.OnChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void OnNotificationRemoved__DelegateSignature(); // Function ITM_ItemUnlockedIcon.ITM_ItemUnlockedIcon_C.OnNotificationRemoved__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
};

