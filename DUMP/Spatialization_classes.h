// Class Spatialization.ITDSpatializationSourceSettings
// Size: 0xb8 (Inherited: 0x28)
struct UITDSpatializationSourceSettings : USpatializationPluginSourceSettingsBase {
	bool bEnableILD; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FRuntimeFloatCurve PanningIntensityOverDistance; // 0x30(0x88)
};

