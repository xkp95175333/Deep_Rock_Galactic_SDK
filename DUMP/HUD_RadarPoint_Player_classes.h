// WidgetBlueprintGeneratedClass HUD_RadarPoint_Player.HUD_RadarPoint_Player_C
// Size: 0x241 (Inherited: 0x230)
struct UHUD_RadarPoint_Player_C : UUserWidget {
	struct UImage* Image_1; // 0x230(0x08)
	struct APlayerCharacter* Player; // 0x238(0x08)
	bool MarkedForDestruction; // 0x240(0x01)

	void InitPoint(struct URadarPointComponent* RadarComponent, bool success); // Function HUD_RadarPoint_Player.HUD_RadarPoint_Player_C.InitPoint // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void Get3dPosition(struct FVector Pos); // Function HUD_RadarPoint_Player.HUD_RadarPoint_Player_C.Get3dPosition // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void UpdatePoint(float alpha, float verticalDist, bool destroy); // Function HUD_RadarPoint_Player.HUD_RadarPoint_Player_C.UpdatePoint // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
	void Deactivate(); // Function HUD_RadarPoint_Player.HUD_RadarPoint_Player_C.Deactivate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x158ca90
};

