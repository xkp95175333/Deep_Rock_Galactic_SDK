// Class DiscordSDK.DiscordSDKInterface
// Size: 0x58 (Inherited: 0x28)
struct UDiscordSDKInterface : UObject {
	struct FMulticastInlineDelegate OnJoinRequest; // 0x28(0x10)
	char pad_38[0x20]; // 0x38(0x20)

	void RejectInvite(struct FString UserId); // Function DiscordSDK.DiscordSDKInterface.RejectInvite // (Native|Protected|BlueprintCallable) // @ game+0xabb7c0
	void IgnoreInvite(struct FString UserId); // Function DiscordSDK.DiscordSDKInterface.IgnoreInvite // (Native|Protected|BlueprintCallable) // @ game+0xabb6d0
	struct UDiscordSDKInterface* Get(); // Function DiscordSDK.DiscordSDKInterface.Get // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xabb6b0
	void AcceptInvite(struct FString UserId); // Function DiscordSDK.DiscordSDKInterface.AcceptInvite // (Native|Protected|BlueprintCallable) // @ game+0xabb5c0
};

// Class DiscordSDK.DiscordSDKInterface_Win64
// Size: 0x60 (Inherited: 0x58)
struct UDiscordSDKInterface_Win64 : UDiscordSDKInterface {
	char pad_58[0x8]; // 0x58(0x08)
};

