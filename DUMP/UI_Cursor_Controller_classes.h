// WidgetBlueprintGeneratedClass UI_Cursor_Controller.UI_Cursor_Controller_C
// Size: 0x270 (Inherited: 0x258)
struct UUI_Cursor_Controller_C : UMouseCursorWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x258(0x08)
	struct UWidgetAnimation* Hover; // 0x260(0x08)
	struct UImage* Controller; // 0x268(0x08)

	void OnHover(); // Function UI_Cursor_Controller.UI_Cursor_Controller_C.OnHover // (Event|Protected|BlueprintEvent) // @ game+0x158ca90
	void OnUnhover(); // Function UI_Cursor_Controller.UI_Cursor_Controller_C.OnUnhover // (Event|Protected|BlueprintEvent) // @ game+0x158ca90
	void ExecuteUbergraph_UI_Cursor_Controller(int32_t EntryPoint); // Function UI_Cursor_Controller.UI_Cursor_Controller_C.ExecuteUbergraph_UI_Cursor_Controller // (Final|UbergraphFunction) // @ game+0x158ca90
};

