// Enum FSD.EDrinkableAlcoholStrength
enum class EDrinkableAlcoholStrength : uint8 {
	NonAlcoholic,
	Light,
	Regular,
	Strong,
	VeryStrong,
	InstantPassout,
	EDrinkableAlcoholStrength_MAX,
};

// Enum FSD.EIntoxicationState
enum class EIntoxicationState : uint8 {
	NotIntoxicated,
	Intoxicated,
	PassOut,
	EIntoxicationState_MAX,
};

// Enum FSD.ECharacterState
enum class ECharacterState : uint8 {
	Walking,
	Downed,
	Dead,
	Falling,
	Paralyzed,
	Using,
	ZipLine,
	NoMovement,
	Grabbed,
	Flying,
	Frozen,
	PassedOut,
	Photography,
	Piloting,
	Attached,
	Pushing,
	TrackMovement,
	EnemyControl,
	Invalid,
	ECharacterState_MAX,
};

// Enum FSD.ECharacterCameraMode
enum class ECharacterCameraMode : uint8 {
	FirstPerson,
	ThirdPerson,
	Follow,
	DownCamera,
	TerrainScanner,
	PhotographyMode,
	FirstPersonHeadOnly,
	ECharacterCameraMode_MAX,
};

// Enum FSD.EMissionStatType
enum class EMissionStatType : uint8 {
	Float,
	Integer,
	Time,
	Distance,
	EMissionStatType_MAX,
};

// Enum FSD.EInputKeys
enum class EInputKeys : uint8 {
	Use,
	Fire,
	Mine,
	EInputKeys_MAX,
};

// Enum FSD.EPlatformComponentCriteria
enum class EPlatformComponentCriteria : uint8 {
	All,
	ServerOnly,
	ClientOnly,
	OwningClientOnly,
	EPlatformComponentCriteria_MAX,
};

// Enum FSD.EOutline
enum class EOutline : uint8 {
	OL_NONE,
	OL_FRIENDLY,
	OL_NEUTRAL,
	OL_ENEMY,
	OL_ITEM,
	EOutline_MAX,
};

// Enum FSD.EPlayerTemperatureState
enum class EPlayerTemperatureState : uint8 {
	Normal,
	Frozen,
	Overheated,
	EPlayerTemperatureState_MAX,
};

// Enum FSD.EDeepMovementState
enum class EDeepMovementState : uint8 {
	Stationary,
	Controlled,
	Moving,
	WaitingForPath,
	AttackStance,
	FakePhysics,
	EDeepMovementState_MAX,
};

// Enum FSD.ECharselectionCameraLocation
enum class ECharselectionCameraLocation : uint8 {
	Selection,
	Customization,
	Crafting,
	ViewWeapon,
	EndScreen,
	Forge,
	Pickaxe,
	ECharselectionCameraLocation_MAX,
};

// Enum FSD.EMinersManualSection
enum class EMinersManualSection : uint8 {
	FrontPage,
	Hints,
	Combat,
	Creatures,
	Biomes,
	Missions,
	Resources,
	EMinersManualSection_MAX,
};

// Enum FSD.ECharacterSelectorItemStatus
enum class ECharacterSelectorItemStatus : uint8 {
	LeaveAsIs,
	SwitchToDefault,
	NoItemEquipped,
	ECharacterSelectorItemStatus_MAX,
};

// Enum FSD.EGameType
enum class EGameType : uint8 {
	Fully,
	Progression,
	Sandbox,
	Vanilla,
	EGameType_MAX,
};

// Enum FSD.ESteamSearchRegion
enum class ESteamSearchRegion : uint8 {
	Close,
	Medium,
	Far,
	World,
	ESteamSearchRegion_MAX,
};

// Enum FSD.ESteamServerJoinStatus
enum class ESteamServerJoinStatus : uint8 {
	Open,
	PasswordRequired,
	ESteamServerJoinStatus_MAX,
};

// Enum FSD.EAlwaysLoadedWorlds
enum class EAlwaysLoadedWorlds : uint8 {
	CharacterViewer,
	LoaderNormal,
	LoaderDeepDive,
	EAlwaysLoadedWorlds_MAX,
};

// Enum FSD.EDisconnectReason
enum class EDisconnectReason : uint8 {
	None,
	Kicked_HaveMyReasons,
	Kicked_ShouldBePrivate,
	Kicked_AFK,
	Banned,
	ServerQuit,
	Disconnected,
	SignInChange,
	JoinSessionFail_SessionIsFull,
	JoinSessionFail_SessionDoesNotExist,
	JoinSessionFail_Other,
	JoinSessionFail_Privilege,
	NetworkError,
	SignOutComplete,
	WrongPassword,
	DeepDiveLateJoin,
	MissionStarting,
	LatejoinNotAllowed,
	EDisconnectReason_MAX,
};

// Enum FSD.EChatSenderType
enum class EChatSenderType : uint8 {
	NormalUser,
	DeluxUser,
	Developer,
	Streamer,
	Modder,
	EChatSenderType_MAX,
};

// Enum FSD.EChatMessageType
enum class EChatMessageType : uint8 {
	ES_Chat,
	ES_Game,
	ES_MAX,
};

// Enum FSD.EFSDInputSource
enum class EFSDInputSource : uint8 {
	None,
	MouseAndKeyboard,
	Controller,
	EFSDInputSource_MAX,
};

// Enum FSD.EKeyboardLayout
enum class EKeyboardLayout : uint8 {
	QWERTY,
	AZERTY,
	QWERTZ,
	EKeyboardLayout_MAX,
};

// Enum FSD.EHUDVisibilityReason
enum class EHUDVisibilityReason : uint8 {
	Invalid,
	UserChoice,
	StandDown,
	MenuActive,
	Photography,
	EHUDVisibilityReason_MAX,
};

// Enum FSD.ESpacerigStartType
enum class ESpacerigStartType : uint8 {
	PlayerHub,
	Medbay,
	ESpacerigStartType_MAX,
};

// Enum FSD.EItemCategory
enum class EItemCategory : uint8 {
	PrimaryWeapon,
	SecondaryWeapon,
	TraversalTool,
	ClassTool,
	Grenade,
	Flare,
	MiningTool,
	Armor,
	EItemCategory_MAX,
};

// Enum FSD.EFSDFaction
enum class EFSDFaction : uint8 {
	NoFaction,
	CaveCrawlers,
	MightyMiners,
	DirtDiggers,
	EFSDFaction_MAX,
};

// Enum FSD.ESonyInputSettingsBools
enum class ESonyInputSettingsBools : uint8 {
	MotionControlEnabled,
	MotionControlFlight,
	MotionControlSalute,
	MotionControlPrecisionMode,
	AdaptiveTriggersEnabled,
	TouchPadTerrainScannerEnabled,
	TouchPadGesturesEnabled,
	ControllerSpeakerMissionControl,
	ControllerSpeakerSalute,
	ControllerSpeakerFlare,
	ControllerSpeakerMineralCollection,
	ESonyInputSettingsBools_MAX,
};

// Enum FSD.ESonyInputSettingsFloats
enum class ESonyInputSettingsFloats : uint8 {
	MotionControlXSensitivity,
	MotionControlYSensitivity,
	ControllerSpeakerVolume,
	TouchPadTerrainScannerXSensitivity,
	TouchPadTerrainScannerYSensitivity,
	TouchPadTerrainScannerZoomSensitivity,
	ESonyInputSettingsFloats_MAX,
};

// Enum FSD.ESonyControllerLightMode
enum class ESonyControllerLightMode : uint8 {
	Disabled,
	Simple,
	Default,
	ESonyControllerLightMode_MAX,
};

// Enum FSD.ESonyControllerMotionMapping
enum class ESonyControllerMotionMapping : uint8 {
	Yaw,
	Roll,
	ESonyControllerMotionMapping_MAX,
};

// Enum FSD.EConsoleGraphicsMode
enum class EConsoleGraphicsMode : uint8 {
	Fidelity,
	Performance,
	Performance120,
	EConsoleGraphicsMode_MAX,
};

// Enum FSD.EHUDVisibilityMode
enum class EHUDVisibilityMode : uint8 {
	Visible,
	Dynamic,
	Hidden,
	EHUDVisibilityMode_MAX,
};

// Enum FSD.ETurn180Mode
enum class ETurn180Mode : uint8 {
	PressRun,
	PressFlare,
	Off,
	ETurn180Mode_MAX,
};

// Enum FSD.EVanitySlot
enum class EVanitySlot : uint8 {
	Head,
	Beard,
	Armor,
	BeardColor,
	SkinColor,
	Moustache,
	Eyebrows,
	Sideburns,
	ArmorMaterial,
	Count,
	EVanitySlot_MAX,
};

// Enum FSD.ESchematicState
enum class ESchematicState : uint8 {
	NotOwned,
	OwnedCannotBuild,
	OwnedCanBuild,
	OwnedBuilt,
	ESchematicState_MAX,
};

// Enum FSD.ECampaignType
enum class ECampaignType : uint8 {
	Normal,
	Weekly,
	MatrixCoreHunt,
	ECampaignType_MAX,
};

// Enum FSD.EItemPreviewStatus
enum class EItemPreviewStatus : uint8 {
	Normal,
	Upgraded,
	Previewed,
	PreviewReduced,
	UpgradedAndPreviewReduced,
	EItemPreviewStatus_MAX,
};

// Enum FSD.EUpgradeCalucationType
enum class EUpgradeCalucationType : uint8 {
	Additive,
	Multiplicative,
	EUpgradeCalucationType_MAX,
};

// Enum FSD.EUpgradeClass
enum class EUpgradeClass : uint8 {
	Class_A,
	Class_B,
	Gear_A,
	Gear_B,
	Armor,
	Pickaxe,
	Class_Bosco,
	EUpgradeClass_MAX,
};

// Enum FSD.EUpgradeTiers
enum class EUpgradeTiers : uint8 {
	Tier_2,
	Tier_3,
	Tier_4,
	Tier_5,
	Tier_6,
	Tier_MAX,
};

// Enum FSD.EDroneAIState
enum class EDroneAIState : uint8 {
	Follow,
	Mine,
	Fight,
	Revive,
	Light,
	GoToPlayer,
	Salute,
	CarryGem,
	UseAbillity,
	Repairing,
	EDroneAIState_MAX,
};

// Enum FSD.ERessuplyPodState
enum class ERessuplyPodState : uint8 {
	ReadyToDrop,
	Dropping,
	Landed,
	Idle,
	ERessuplyPodState_MAX,
};

// Enum FSD.EPawnAttitude
enum class EPawnAttitude : uint8 {
	Friendly,
	Neutral,
	Hostile,
	EPawnAttitude_MAX,
};

// Enum FSD.EHackingPodState
enum class EHackingPodState : uint8 {
	EClosed,
	EShowDispenser,
	EShowButton,
	EHacking,
	EDestroyed,
	EDone,
	EHackingPodState_MAX,
};

// Enum FSD.EUseRestriction
enum class EUseRestriction : uint8 {
	Free,
	StrictOnly,
	DepositOnly,
	Repair,
	Zipline,
	BlockAll,
	PickupItem,
	EUseRestriction_MAX,
};

// Enum FSD.EEnemyHealthScaling
enum class EEnemyHealthScaling : uint8 {
	SmallEnemy,
	LargeEnemy,
	ExtraLargeEnemy,
	ExtraLargeEnemyB,
	ExtraLargeEnemyC,
	ExtraLargeEnemyD,
	NoScaling,
	EEnemyHealthScaling_MAX,
};

// Enum FSD.EHealthbarType
enum class EHealthbarType : uint8 {
	None,
	MainLife,
	Shield,
	EHealthbarType_MAX,
};

// Enum FSD.ERefineryState
enum class ERefineryState : uint8 {
	Landing,
	ConnectingPipes,
	PipesConnected,
	Refining,
	RefiningStalled,
	RefiningComplete,
	RocketLaunched,
	ERefineryState_MAX,
};

// Enum FSD.EFrozenBitsSize
enum class EFrozenBitsSize : uint8 {
	Tiny,
	Small,
	Medium,
	Large,
	Huge,
	EFrozenBitsSize_MAX,
};

// Enum FSD.EDropPodState
enum class EDropPodState : uint8 {
	WaitingToDrop,
	Drilling,
	Landed,
	PrepTakeoff,
	Departing,
	EDropPodState_MAX,
};

// Enum FSD.EPipelineBuildState
enum class EPipelineBuildState : uint8 {
	NotStarted,
	BeginBuilt,
	Completed,
	Broken,
	EPipelineBuildState_MAX,
};

// Enum FSD.ETrackBuildPlacementState
enum class ETrackBuildPlacementState : uint8 {
	NotBeingPlaced,
	BeingPlaced,
	Finished,
	ETrackBuildPlacementState_MAX,
};

// Enum FSD.ESchematicType
enum class ESchematicType : uint8 {
	Overclock,
	Vanity,
	Resource,
	Blank,
	ESchematicType_MAX,
};

// Enum FSD.EHUDVisibilityPresets
enum class EHUDVisibilityPresets : uint8 {
	AllVisible,
	Recommended,
	Minimal,
	AllHidden,
	EHUDVisibilityPresets_MAX,
};

// Enum FSD.EHUDVisibilityGroups
enum class EHUDVisibilityGroups : uint8 {
	OnScreenHelp,
	EnemyHealth,
	RadarAndDepth,
	PlayerHealthShield,
	PlayerNameClassIcon,
	PlayerItems,
	PlayerResources,
	WeaponInfo,
	Grenades,
	FlashLight,
	Flares,
	Crosshair,
	Objectives,
	TeamDisplay,
	SentryGunDisplay,
	EHUDVisibilityGroups_MAX,
};

// Enum FSD.EAmmoWeaponState
enum class EAmmoWeaponState : uint8 {
	Equipping,
	Ready,
	Cycling,
	Reloading,
	BurstCycling,
	EAmmoWeaponState_MAX,
};

// Enum FSD.EGooGunFireMode
enum class EGooGunFireMode : uint8 {
	Normal,
	Charge,
	Burst,
	EGooGunFireMode_MAX,
};

// Enum FSD.ELaserPointerTargetType
enum class ELaserPointerTargetType : uint8 {
	Chunkable,
	Dirt,
	Player,
	Enemy,
	EmbeddedGem,
	Other,
	ELaserPointerTargetType_MAX,
};

// Enum FSD.EMicroMissileLauncherFireMode
enum class EMicroMissileLauncherFireMode : uint8 {
	Normal,
	Charge,
	Buck,
	EMicroMissileLauncherFireMode_MAX,
};

// Enum FSD.EOnProjectileImpactBehaviourEnum
enum class EOnProjectileImpactBehaviourEnum : uint8 {
	CallOnPredict,
	CallOnConfirmed,
	CallOnPredictAndConfirmed,
	ClientAuthoritative,
	EOnProjectileImpactBehaviourEnum_MAX,
};

// Enum FSD.ELineRotation
enum class ELineRotation : uint8 {
	None,
	Yaw,
	Pitch,
	Roll,
	ELineRotation_MAX,
};

// Enum FSD.EImpactDecalSize
enum class EImpactDecalSize : uint8 {
	Small,
	Medium,
	Large,
	None,
	EImpactDecalSize_MAX,
};

// Enum FSD.ERecallableActorState
enum class ERecallableActorState : uint8 {
	Idle,
	RelocateRequested,
	Relocating,
	ReturnRequested,
	Returning,
	Home,
	ERecallableActorState_MAX,
};

// Enum FSD.ERedeployableSentryGunState
enum class ERedeployableSentryGunState : uint8 {
	Deploying,
	Deployed,
	Dismantling,
	Dismantled,
	ERedeployableSentryGunState_MAX,
};

// Enum FSD.EItemSkinType
enum class EItemSkinType : uint8 {
	Color,
	Mesh,
	EItemSkinType_MAX,
};

// Enum FSD.EThrownGrenadeItemState
enum class EThrownGrenadeItemState : uint8 {
	NotEquipped,
	Cooking,
	Throwing,
	EThrownGrenadeItemState_MAX,
};

// Enum FSD.EFriendOnlineStatusEnum
enum class EFriendOnlineStatusEnum : uint8 {
	Online,
	Offline,
	Away,
	EFriendOnlineStatusEnum_MAX,
};

// Enum FSD.EBlueprintablePrivilegeResults
enum class EBlueprintablePrivilegeResults : uint8 {
	NoFailures,
	RequiredPatchAvailable,
	RequiredSystemUpdate,
	AgeRestrictionFailure,
	AccountTypeFailure,
	UserNotFound,
	UserNotLoggedIn,
	ChatRestriction,
	UGCRestriction,
	GenericFailure,
	OnlinePlayRestricted,
	NetworkConnectionUnavailable,
	EBlueprintablePrivilegeResults_MAX,
};

// Enum FSD.EBlueprintableUserPrivileges
enum class EBlueprintableUserPrivileges : uint8 {
	CanPlay,
	CanPlayOnline,
	CanCommunicateOnline,
	CanUseUserGeneratedContent,
	CanUserCrossPlay,
	EBlueprintableUserPrivileges_MAX,
};

// Enum FSD.EActivityType
enum class EActivityType : uint8 {
	Mission,
	Assignment,
	Tutorial,
	None,
	EActivityType_MAX,
};

// Enum FSD.EFSDTargetPlatform
enum class EFSDTargetPlatform : uint8 {
	Steam,
	XboxOne,
	Win10,
	PS4,
	PS5,
	EFSDTargetPlatform_MAX,
};

// Enum FSD.ECreatureSize
enum class ECreatureSize : uint8 {
	Tiny,
	Small,
	Medium,
	Large,
	Huge,
	ECreatureSize_MAX,
};

// Enum FSD.EAsyncLoadPriority
enum class EAsyncLoadPriority : uint8 {
	Normal,
	High,
	Low,
	EAsyncLoadPriority_MAX,
};

// Enum FSD.EAsyncPersistence
enum class EAsyncPersistence : uint8 {
	Manual,
	Level,
	Permanent,
	EAsyncPersistence_MAX,
};

// Enum FSD.EPlatformRestriction
enum class EPlatformRestriction : uint8 {
	Editor,
	Steam,
	Oddish,
	UniversalWindowsPlatform,
	XBoxOne,
	PS4,
	EPlatformRestriction_MAX,
};

// Enum FSD.EBuildTypeRestriction
enum class EBuildTypeRestriction : uint8 {
	Development,
	Shipping,
	EBuildTypeRestriction_MAX,
};

// Enum FSD.ECampaignMutators
enum class ECampaignMutators : uint8 {
	NotAllowed,
	Allowed,
	Preffered,
	ECampaignMutators_MAX,
};

// Enum FSD.ECaretakerSpawnType
enum class ECaretakerSpawnType : uint8 {
	None,
	Drones,
	Bombs,
	Shredders,
	Turrets,
	ECaretakerSpawnType_MAX,
};

// Enum FSD.EFacilityEye
enum class EFacilityEye : uint8 {
	EForward,
	EBack,
	ELeft,
	ERight,
	EFacilityEye_MAX,
};

// Enum FSD.ECellCategory
enum class ECellCategory : uint8 {
	Cave,
	Tunnel,
	ECellCategory_MAX,
};

// Enum FSD.ECaveLeechState
enum class ECaveLeechState : uint8 {
	Idle,
	Tracking,
	Pulling,
	Retracting,
	Dying,
	Dead,
	Frozen,
	ECaveLeechState_MAX,
};

// Enum FSD.ECustomUsableType
enum class ECustomUsableType : uint8 {
	ClearOnFrameEnd,
	ClearOnUseReleased,
	ECustomUsableType_MAX,
};

// Enum FSD.EExampleEnum
enum class EExampleEnum : uint8 {
	FirstName,
	SecondName,
	EExampleEnum_MAX,
};

// Enum FSD.EShoutType
enum class EShoutType : uint8 {
	Attention,
	Follow,
	StandingDown,
	Downed,
	RequestRevive,
	Revived,
	Resupply,
	FriendlyFire,
	KillCry,
	Dead,
	Cheating,
	ResourceFull,
	ResourceFullNoDonkey,
	CallDonkey,
	CallDonkey_NotInMission,
	Depositing,
	DepositingNoDonkey,
	OutOfAmmo,
	Reloading,
	CharacterSelected,
	UpgradeBought,
	WaitingInDropPod,
	Carrying,
	EShoutType_MAX,
};

// Enum FSD.ECommunityGoalTier
enum class ECommunityGoalTier : uint8 {
	Bronze,
	Silver,
	Gold,
	ECommunityGoalTier_MAX,
};

// Enum FSD.ECommunityGoalType
enum class ECommunityGoalType : uint8 {
	Float,
	Integer,
	Time,
	Distance,
	ECommunityGoalType_MAX,
};

// Enum FSD.ECommunityUIState
enum class ECommunityUIState : uint8 {
	Loading,
	SelectFaction,
	Progress,
	Recruitment,
	Reward,
	Invalid,
	ECommunityUIState_MAX,
};

// Enum FSD.ERobotState
enum class ERobotState : uint8 {
	Enemy,
	Friendly,
	PoweredDown,
	ERobotState_MAX,
};

// Enum FSD.EKeyBindingAxis
enum class EKeyBindingAxis : uint8 {
	None,
	Positive,
	Negative,
	EKeyBindingAxis_MAX,
};

// Enum FSD.EDealType
enum class EDealType : uint8 {
	Buy,
	Sell,
	EDealType_MAX,
};

// Enum FSD.EPlasmaCarbineConditions
enum class EPlasmaCarbineConditions : uint8 {
	ShieldRemovedOnReload,
	EPlasmaCarbineConditions_MAX,
};

// Enum FSD.EBoltActionWeaponConditions
enum class EBoltActionWeaponConditions : uint8 {
	WasAimedShot,
	EBoltActionWeaponConditions_MAX,
};

// Enum FSD.EDirectDamageConditionEnum
enum class EDirectDamageConditionEnum : uint8 {
	Direct,
	Radial,
	EDirectDamageConditionEnum_MAX,
};

// Enum FSD.EDamageUpgrade
enum class EDamageUpgrade : uint8 {
	Damage,
	WeakpointDamageMultiplier,
	StaggerChance,
	StaggerDuration,
	RadialDamage,
	RadialRange,
	ArmorDamageMultiplier,
	FearFactor,
	RadialRangeMultiplier,
	StaggerOnWeakpointOnly,
	FriendlyFireModifier,
	ShattersArmor,
	EDamageUpgrade_MAX,
};

// Enum FSD.EDamageComponentType
enum class EDamageComponentType : uint8 {
	Primary,
	Secondary,
	Tertiary,
	Quaternary,
	Quinary,
	Any,
	EDamageComponentType_MAX,
};

// Enum FSD.EDashPointsGenerationMode
enum class EDashPointsGenerationMode : uint8 {
	Surround,
	Forward,
	EDashPointsGenerationMode_MAX,
};

// Enum FSD.EDebrisOrientation
enum class EDebrisOrientation : uint8 {
	Random,
	RandomXY,
	AlignToSurfaceNormal,
	Fixed,
	EDebrisOrientation_MAX,
};

// Enum FSD.EDebrisMeshShadows
enum class EDebrisMeshShadows : uint8 {
	Never,
	High,
	Always,
	EDebrisMeshShadows_MAX,
};

// Enum FSD.EDebrisMeshCollisionProfile
enum class EDebrisMeshCollisionProfile : uint8 {
	NoCollision,
	HitOnly,
	HitAndCollide,
	EDebrisMeshCollisionProfile_MAX,
};

// Enum FSD.EDebrisColliderType
enum class EDebrisColliderType : uint8 {
	Object,
	AirParticles,
	ObjectB,
	ObjectC,
	EDebrisColliderType_MAX,
};

// Enum FSD.EDebrisCarvedType
enum class EDebrisCarvedType : uint8 {
	Large,
	Small,
	LevelGeneration,
	Resources,
	EDebrisCarvedType_MAX,
};

// Enum FSD.EDebrisItemPass
enum class EDebrisItemPass : uint8 {
	PrePlacement,
	Main,
	EDebrisItemPass_MAX,
};

// Enum FSD.EDecalImportance
enum class EDecalImportance : uint8 {
	High,
	Normal,
	Low,
	EDecalImportance_MAX,
};

// Enum FSD.ELandscapeCellFilter
enum class ELandscapeCellFilter : uint8 {
	Any,
	Empty,
	Filled,
	Diggable,
	NotDiggable,
	Collidable,
	NotCollidable,
	Rubble,
	NotRubble,
	ELandscapeCellFilter_MAX,
};

// Enum FSD.EOffsetFrom
enum class EOffsetFrom : uint8 {
	None,
	Floor,
	Ceiling,
	EOffsetFrom_MAX,
};

// Enum FSD.EDeepMovementMode
enum class EDeepMovementMode : uint8 {
	Normal,
	Flee,
	Fly,
	BackOff,
	EDeepMovementMode_MAX,
};

// Enum FSD.EDefendPointState
enum class EDefendPointState : uint8 {
	Idle,
	Started,
	Completed,
	Failed,
	EDefendPointState_MAX,
};

// Enum FSD.EDialogRestriction
enum class EDialogRestriction : uint8 {
	None,
	SinglePlayerOnly,
	MultiPlayerOnly,
	EDialogRestriction_MAX,
};

// Enum FSD.EVeteranScaling
enum class EVeteranScaling : uint8 {
	NormalEnemy,
	LargeEnemy,
	EVeteranScaling_MAX,
};

// Enum FSD.EEnemySignificance
enum class EEnemySignificance : uint8 {
	Swarmer,
	Normal,
	Critical,
	Critter,
	EEnemySignificance_MAX,
};

// Enum FSD.EDiscordBiomeType
enum class EDiscordBiomeType : uint8 {
	CrystallineCaverns,
	FungusBogs,
	GlacialStrata,
	DenseBiozone,
	MagmaCore,
	Radioactive,
	SaltPits,
	Sandblasted,
	CausticMire,
	AzureWeald,
	HollowBough,
	Spacerig,
	EDiscordBiomeType_MAX,
};

// Enum FSD.EDiscordMissionType
enum class EDiscordMissionType : uint8 {
	MiningExpedition,
	EggHunt,
	Escort,
	Elimination,
	PointExtraction,
	Salvage,
	Refinery,
	None,
	EDiscordMissionType_MAX,
};

// Enum FSD.EDoubleDrillState
enum class EDoubleDrillState : uint8 {
	Equipping,
	Idle,
	Mining,
	Overheated,
	OutOfFuel,
	EDoubleDrillState_MAX,
};

// Enum FSD.EBoscoAbillityTargetPreference
enum class EBoscoAbillityTargetPreference : uint8 {
	Self,
	SelectedTarget,
	ClosestPlayer,
	ClosestEnemy,
	TargetLocation,
	EBoscoAbillityTargetPreference_MAX,
};

// Enum FSD.EDroneActions
enum class EDroneActions : uint8 {
	Wandering,
	Mining,
	Fighting,
	Lighting,
	Reviving,
	EDroneActions_MAX,
};

// Enum FSD.EDynamicReverbSetting
enum class EDynamicReverbSetting : uint8 {
	None,
	Small,
	Medium,
	Large,
	EDynamicReverbSetting_MAX,
};

// Enum FSD.EEnemyControlState
enum class EEnemyControlState : uint8 {
	Connecting,
	Connected,
	ThrowingOff,
	Disconnecting,
	Disconneced,
	EEnemyControlState_MAX,
};

// Enum FSD.EEnemyFamily
enum class EEnemyFamily : uint8 {
	Glyphid,
	Mactera,
	Naedocyte,
	Qronar,
	Xynarch,
	Nayaka,
	Deeptora,
	Korlok,
	Automaton,
	Unknown,
	RivalTech,
	EEnemyFamily_MAX,
};

// Enum FSD.EEnemyType
enum class EEnemyType : uint8 {
	Ground,
	Flying,
	GroundAndFlying,
	Stationary,
	EEnemyType_MAX,
};

// Enum FSD.EEscortExtractorState
enum class EEscortExtractorState : uint8 {
	ReadyToGrab,
	Taken,
	Full,
	EEscortExtractorState_MAX,
};

// Enum FSD.EEscortMissionState
enum class EEscortMissionState : uint8 {
	Stationary,
	Moving,
	WaitingForFuel,
	FinalEvent,
	Finished,
	ShellCracked,
	VehicleDead,
	InGarage,
	EEscortMissionState_MAX,
};

// Enum FSD.EExtractorState
enum class EExtractorState : uint8 {
	Attached,
	OnGround,
	Equipping,
	Idle,
	Mining,
	EExtractorState_MAX,
};

// Enum FSD.EFacilityTentacleState
enum class EFacilityTentacleState : uint8 {
	Idle,
	HasTarget,
	Melee,
	Ranged,
	EFacilityTentacleState_MAX,
};

// Enum FSD.EIndicatorMode
enum class EIndicatorMode : uint8 {
	EConstant,
	EFlashing,
	EOff,
	EIndicatorMode_MAX,
};

// Enum FSD.EFSDAchievementType
enum class EFSDAchievementType : uint8 {
	NoStatUsed,
	IncrementStatPerCall,
	SetStatIfHighscore,
	ForceNewStatEachCall,
	EFSDAchievementType_MAX,
};

// Enum FSD.ETargetStateDamageBonusType
enum class ETargetStateDamageBonusType : uint8 {
	Frozen,
	OnFire,
	Fleeing,
	Staggered,
	ETargetStateDamageBonusType_MAX,
};

// Enum FSD.EPauseReason
enum class EPauseReason : uint8 {
	Invalid,
	MenuActive,
	ReconnectController,
	EPauseReason_MAX,
};

// Enum FSD.ESaveSlotChangeProcedure
enum class ESaveSlotChangeProcedure : uint8 {
	NewSave,
	Load,
	Save,
	NewModdedSave,
	ESaveSlotChangeProcedure_MAX,
};

// Enum FSD.EInputInteraction
enum class EInputInteraction : uint8 {
	Press,
	Hold,
	EInputInteraction_MAX,
};

// Enum FSD.EVolumeType
enum class EVolumeType : uint8 {
	CharacterVoices,
	Master,
	SFX,
	Music,
	VoiceChat,
	MissionControl,
	EVolumeType_MAX,
};

// Enum FSD.EInviteBlockReason
enum class EInviteBlockReason : uint8 {
	SoloSession,
	ActiveDeepDive,
	Tutorial,
	OnlinePlayBlocked,
	IsClient,
	None,
	EInviteBlockReason_MAX,
};

// Enum FSD.EPostProcessingType
enum class EPostProcessingType : uint8 {
	GameWorld,
	CharacterSelector,
	EPostProcessingType_MAX,
};

// Enum FSD.EItemNotificationType
enum class EItemNotificationType : uint8 {
	NewOverclock,
	EItemNotificationType_MAX,
};

// Enum FSD.ESteamBranch
enum class ESteamBranch : uint8 {
	Main,
	Experimental,
	Internal_Testing,
	Other,
	ESteamBranch_MAX,
};

// Enum FSD.EMoveType
enum class EMoveType : uint8 {
	EaseIn,
	EaseOut,
	EMoveType_MAX,
};

// Enum FSD.EPingType
enum class EPingType : uint8 {
	EaseOut,
	Bounce,
	EPingType_MAX,
};

// Enum FSD.ECommunityGoalIndex
enum class ECommunityGoalIndex : uint8 {
	KillBroodNexus,
	KillBulkDetonators,
	KillCaveLeeches,
	KillJellyBreeders,
	KillPretorians,
	KillShellbacks,
	KillSpitballers,
	CollectBittergem,
	CollectCompressedGold,
	CollectGold,
	CollectCraftingMaterials,
	GainXP,
	TestGoal,
	Count,
	ECommunityGoalIndex_MAX,
};

// Enum FSD.EFSDGoogleAnalyticsProperties
enum class EFSDGoogleAnalyticsProperties : uint8 {
	DRG,
	Discord,
	CommunityGoals,
	DRG_Discord,
	All,
	Other,
	EFSDGoogleAnalyticsProperties_MAX,
};

// Enum FSD.EGrabberState
enum class EGrabberState : uint8 {
	StandBy,
	Chase,
	Wander,
	Carry,
	Flee,
	EGrabberState_MAX,
};

// Enum FSD.EGrabbedStateCameraMode
enum class EGrabbedStateCameraMode : uint8 {
	FirstPerson,
	ThirdPerson,
	EGrabbedStateCameraMode_MAX,
};

// Enum FSD.EGuntowerModuleState
enum class EGuntowerModuleState : uint8 {
	EDormant,
	EActive,
	EVulnerable,
	EDestoyed,
	EGuntowerModuleState_MAX,
};

// Enum FSD.ERicochetBehavior
enum class ERicochetBehavior : uint8 {
	All,
	PawnsOnly,
	NotPawns,
	ERicochetBehavior_MAX,
};

// Enum FSD.EGeneratorIconType
enum class EGeneratorIconType : uint8 {
	Vanity,
	PickaxePart,
	PickaxeSet,
	WeaponSkin,
	EGeneratorIconType_MAX,
};

// Enum FSD.EKeyBindingSlot
enum class EKeyBindingSlot : uint8 {
	Primary,
	Secondary,
	EKeyBindingSlot_MAX,
};

// Enum FSD.EItemSkinCollectionType
enum class EItemSkinCollectionType : uint8 {
	PerCharacter,
	PerItem,
	EItemSkinCollectionType_MAX,
};

// Enum FSD.EPlasmaCarbineUpgrades
enum class EPlasmaCarbineUpgrades : uint8 {
	RateOfFireBoostOnFullShield,
	RemoveShieldOnOverheat,
	RemoveShieldOnReload,
	EPlasmaCarbineUpgrades_MAX,
};

// Enum FSD.ELockOnWeaponUpgrades
enum class ELockOnWeaponUpgrades : uint8 {
	MaxLockOnDegree,
	TimeBetweenLockedShots,
	LockOnTime,
	MaxTargets,
	LoseLockOnDegree,
	MaxLockOnRange,
	PrioritizeLowHitpoint,
	AlwaysHitTarget,
	MaxLockOnDuration,
	LockOnControlsSentryGun,
	AoeHitCountThreshhold,
	SentryGunShootsOnLockedShot,
	UseLockOnTargetStatusEffect,
	FearEnabled,
	ELockOnWeaponUpgrades_MAX,
};

// Enum FSD.EGooGunProjectileUpgrades
enum class EGooGunProjectileUpgrades : uint8 {
	PuddleLifeSpan,
	FragmentCount,
	EGooGunProjectileUpgrades_MAX,
};

// Enum FSD.EGooGunUpgrades
enum class EGooGunUpgrades : uint8 {
	ChargeFire,
	BurstFire,
	ShotCostCharged,
	ChargeTime,
	ChargeShotCount,
	EGooGunUpgrades_MAX,
};

// Enum FSD.EMicroMissileLauncherUpgrades
enum class EMicroMissileLauncherUpgrades : uint8 {
	ChargeFire,
	BuckFire,
	DisableHomingOnRelease,
	ShotDirectionHorizontalDegreeOffset,
	ShotDirectionVerticleDegreeOffset,
	EMicroMissileLauncherUpgrades_MAX,
};

// Enum FSD.EProjectileLauncherBaseUpgradeType
enum class EProjectileLauncherBaseUpgradeType : uint8 {
	VerticalSpread,
	HorizontalSpread,
	TransferVelocityFromCharacter,
	ArcStartAngle,
	EProjectileLauncherBaseUpgradeType_MAX,
};

// Enum FSD.EDetPackUpgrades
enum class EDetPackUpgrades : uint8 {
	CanPickUp,
	CarveDiameter,
	ExplodeOnDeath,
	ExtraFearRadius,
	ExtraStaggerRadius,
	EDetPackUpgrades_MAX,
};

// Enum FSD.EPlatformGunUpgrades
enum class EPlatformGunUpgrades : uint8 {
	BiggerPlatform,
	LessFallDamage,
	BugRepellant,
	CubePlatform,
	EPlatformGunUpgrades_MAX,
};

// Enum FSD.EBoscoUpgrades
enum class EBoscoUpgrades : uint8 {
	MiningSpeedUpgrade,
	ExtraRevive,
	ActiveLightRadius,
	Missile,
	CryoGrenade,
	SACooldownReduction,
	ExtraAbillityCharge,
	EBoscoUpgrades_MAX,
};

// Enum FSD.EArmorUpgradeType
enum class EArmorUpgradeType : uint8 {
	RegenDelay,
	RegenRate,
	ReviveInvulnerability,
	EArmorUpgradeType_MAX,
};

// Enum FSD.ETriggeredStatusEffectType
enum class ETriggeredStatusEffectType : uint8 {
	ShieldDestroyed,
	GrapplingHookReleased,
	NONE,
	ETriggeredStatusEffectType_MAX,
};

// Enum FSD.EShieldGeneratorUpgrades
enum class EShieldGeneratorUpgrades : uint8 {
	Radius,
	Duration,
	DeployTime,
	RechargeTime,
	RechargeCount,
	PushStatusEffect,
	EShieldGeneratorUpgrades_MAX,
};

// Enum FSD.ESentryGunUpgradeType
enum class ESentryGunUpgradeType : uint8 {
	MaxAmmo,
	ReloadSpeed,
	ExtraSentry,
	AngleRestriction,
	ManualTargeting,
	MaxRange,
	RotationSpeed,
	BurstCooldown,
	ESentryGunUpgradeType_MAX,
};

// Enum FSD.EGrapplingHookUpgrade
enum class EGrapplingHookUpgrade : uint8 {
	MaxDistance,
	MaxSpeed,
	WindUpTime,
	EGrapplingHookUpgrade_MAX,
};

// Enum FSD.EZiplineGunUpgrades
enum class EZiplineGunUpgrades : uint8 {
	MaxAngle,
	MaxDistance,
	MovementSpeed,
	FallDamageReduction,
	EZiplineGunUpgrades_MAX,
};

// Enum FSD.EElectricalSMGUpgrades
enum class EElectricalSMGUpgrades : uint8 {
	AoEChance,
	PlasmaBeam,
	TurretEMPDischarge,
	EElectricalSMGUpgrades_MAX,
};

// Enum FSD.EChargedProjectileUpgrades
enum class EChargedProjectileUpgrades : uint8 {
	ExplodesOnDamage,
	AoEDamageInFlight,
	PersistentExplosion,
	EChargedProjectileUpgrades_MAX,
};

// Enum FSD.EFlaregunProjectileUpgrades
enum class EFlaregunProjectileUpgrades : uint8 {
	Duration,
	EFlaregunProjectileUpgrades_MAX,
};

// Enum FSD.EFlaregunUpgrades
enum class EFlaregunUpgrades : uint8 {
	AutoReload,
	EFlaregunUpgrades_MAX,
};

// Enum FSD.EProjectileUpgrade
enum class EProjectileUpgrade : uint8 {
	Velocity,
	MaxVelocity,
	Bouncy,
	Lifetime,
	DoOnImpact,
	DoOnImpact2,
	DoOnImpact3,
	DoOnSpawn,
	HomingStrength,
	SetInitialSpeedToMaxSpeed,
	AccelerationMultiplier,
	MaxPropulsionTime,
	GravityScale,
	CustomEvent,
	EProjectileUpgrade_MAX,
};

// Enum FSD.ELineCutterProjectileUpgradeType
enum class ELineCutterProjectileUpgradeType : uint8 {
	LineSize,
	LineSizeMultiplier,
	ExplosiveRound,
	SetDeployDelay,
	AddDeployTime,
	ExplodeOnNextProjectile,
	DoubleLine,
	LineSizeAdd,
	SetDeployTime,
	RollUntilStop,
	Yawing,
	PlasmaTrail,
	ELineCutterProjectileUpgradeType_MAX,
};

// Enum FSD.ELineCutterUpgradeType
enum class ELineCutterUpgradeType : uint8 {
	ReverseDirection,
	ExplodeLastProjectile,
	ELineCutterUpgradeType_MAX,
};

// Enum FSD.EGrenadeUpgradeType
enum class EGrenadeUpgradeType : uint8 {
	MaxGrenades,
	FuseTime,
	EGrenadeUpgradeType_MAX,
};

// Enum FSD.EFlareUpgradeType
enum class EFlareUpgradeType : uint8 {
	Duration,
	MaxFlares,
	ProductionTime,
	EFlareUpgradeType_MAX,
};

// Enum FSD.ESingleUsableUpgradeType
enum class ESingleUsableUpgradeType : uint8 {
	UseDuration,
	ESingleUsableUpgradeType_MAX,
};

// Enum FSD.EModifyStatusEffectDamageUpgrade
enum class EModifyStatusEffectDamageUpgrade : uint8 {
	Duration,
	EModifyStatusEffectDamageUpgrade_MAX,
};

// Enum FSD.EHitScanBaseUpgradeType
enum class EHitScanBaseUpgradeType : uint8 {
	MaxVerticalSpread,
	MaxHorizontalSpread,
	MaxPenetrations,
	WeaponAccuracySpreadMultiplier,
	SpreadPerShot,
	MinSpreadWhileMoving,
	SpreadRecoveryMultiplier,
	MinSpreadWhileSprinting,
	MaxSpread,
	RicochetChance,
	RicochetOnWeakspotOnly,
	RicochetBehaviourAll,
	RicochetBehaviourPawnsOnly,
	RicochetBehaviourNotPawns,
	EHitScanBaseUpgradeType_MAX,
};

// Enum FSD.EMultiHitscanUpgradeType
enum class EMultiHitscanUpgradeType : uint8 {
	BulletsPerShot,
	EMultiHitscanUpgradeType_MAX,
};

// Enum FSD.EInventoryItemUpgradeType
enum class EInventoryItemUpgradeType : uint8 {
	MovementSpeedWhileUsing,
	CooldownRate,
	UnJamDuration,
	ManualCooldownDelay,
	ManualHeatPerUse,
	EInventoryItemUpgradeType_MAX,
};

// Enum FSD.EDoubleDrillUpgradeType
enum class EDoubleDrillUpgradeType : uint8 {
	MiningRate,
	MaxFuel,
	HeatRemovalOnKill,
	HeatRemovalOnDamage,
	MovementPenalty,
	EDoubleDrillUpgradeType_MAX,
};

// Enum FSD.EFlameThrowerUpgradeType
enum class EFlameThrowerUpgradeType : uint8 {
	StickyFlameDuration,
	LongReach,
	AoEHeat,
	KilledTargetsExplodeChance,
	EFlameThrowerUpgradeType_MAX,
};

// Enum FSD.EPickaxeUpgradeType
enum class EPickaxeUpgradeType : uint8 {
	RockMining,
	OneHitMineralMining,
	ReceiveBonusMineralNitra,
	ReceiveBonusMineralGold,
	EnablePowerAttack,
	PowerAttackCoolDown,
	EPickaxeUpgradeType_MAX,
};

// Enum FSD.ECryoSprayUpgrades
enum class ECryoSprayUpgrades : uint8 {
	PressureDropMultiplier,
	PressureGainMultiplier,
	ChargeupTime,
	RePressurisationTime,
	FrozenTargetsCanShatter,
	AoECold,
	LongReach,
	ECryoSprayUpgrades_MAX,
};

// Enum FSD.ERevolerUpgrades
enum class ERevolerUpgrades : uint8 {
	OnKillFearFactor,
	ERevolerUpgrades_MAX,
};

// Enum FSD.EBasicPistol
enum class EBasicPistol : uint8 {
	ConsecutiveHitsDamageBonus,
	EBasicPistol_MAX,
};

// Enum FSD.EAutoShotgunUpgrades
enum class EAutoShotgunUpgrades : uint8 {
	TurretSpecialAttackEnabled,
	RateOfFireAndAutoMatic,
	CQCBuffOnKill,
	EAutoShotgunUpgrades_MAX,
};

// Enum FSD.EBurstWeaponUpgrades
enum class EBurstWeaponUpgrades : uint8 {
	FullBurstHitBonusDamage,
	FullBurstStaggerDuraion,
	EBurstWeaponUpgrades_MAX,
};

// Enum FSD.ESawedOffShotgunUpgrades
enum class ESawedOffShotgunUpgrades : uint8 {
	FearOnShoot,
	ShockWave,
	ShotgunJump,
	ESawedOffShotgunUpgrades_MAX,
};

// Enum FSD.EAutoCannonUpgrades
enum class EAutoCannonUpgrades : uint8 {
	FireTimeIncreaseScaleMultiplier,
	DamageBonusAtFullROF,
	StatusEffectAtFullROF,
	StartingFireRate,
	MaxFireRate,
	EAutoCannonUpgrades_MAX,
};

// Enum FSD.EChargedWeaponUpgrades
enum class EChargedWeaponUpgrades : uint8 {
	ShotCostAtFullCharge,
	ChargeSpeed,
	CoolingRate,
	HeatPerSecondCharging,
	HeatPerSecondCharged,
	HeatPerChargedShot,
	HeatPerNormalShot,
	EChargedWeaponUpgrades_MAX,
};

// Enum FSD.EDualMachinePistolsUpgrades
enum class EDualMachinePistolsUpgrades : uint8 {
	TriggerStatusEffectOnEmptyClip,
	EDualMachinePistolsUpgrades_MAX,
};

// Enum FSD.EBoltActionRifleUpgrades
enum class EBoltActionRifleUpgrades : uint8 {
	FocusSpeed,
	AimedShotStagger,
	AimedWeakShotKillFearFactor,
	FocusDamageBonus,
	UnZoomedAccuracySpread,
	FocusedWeakspotHitStatusEffect,
	NoGravityOnFocus,
	KillReloadTimeBoost,
	EBoltActionRifleUpgrades_MAX,
};

// Enum FSD.EAssaultRifleUpgrade
enum class EAssaultRifleUpgrade : uint8 {
	KillResetsSpread,
	KillTriggerStatusEffect,
	EAssaultRifleUpgrade_MAX,
};

// Enum FSD.EGatlingGunUpgrade
enum class EGatlingGunUpgrade : uint8 {
	DamageMultiplierAtMaxStabilization,
	HeatRemovedOnKill,
	CriticalOverheat,
	BarrelProximityDamage,
	EGatlingGunUpgrade_MAX,
};

// Enum FSD.EBeltDrivenWeaponUpgrade
enum class EBeltDrivenWeaponUpgrade : uint8 {
	BarrelSpinupTime,
	BarrelSpinDownTime,
	EBeltDrivenWeaponUpgrade_MAX,
};

// Enum FSD.EAmmoDrivenWeapnUpgradeType
enum class EAmmoDrivenWeapnUpgradeType : uint8 {
	MaxAmmo,
	ClipSize,
	RateOfFire,
	ReloadSpeed,
	RecoilMultiplier,
	BurstCount,
	BurstRateOfFire,
	ActivateBurstFireMode,
	ActivateAutomaticFireMode,
	HeatUpRateModifier,
	AutoReloadDuration,
	RecoilMass,
	OverheatOnReload,
	ShotCost,
	CustomEvent1,
	EAmmoDrivenWeapnUpgradeType_MAX,
};

// Enum FSD.ELaserPointerMarkerType
enum class ELaserPointerMarkerType : uint8 {
	Primary,
	Secondary,
	Count,
	ELaserPointerMarkerType_MAX,
};

// Enum FSD.EMinersManualSinglePage
enum class EMinersManualSinglePage : uint8 {
	Mutators,
	Warnings,
	DamageTypes,
	Weakpoints,
	Armor,
	Light,
	Ammo,
	Traversal,
	Spacerig,
	Upgrades,
	Perks,
	Bosco,
	Assignments,
	Navigation,
	EMinersManualSinglePage_MAX,
};

// Enum FSD.EArmorType
enum class EArmorType : uint8 {
	Light,
	Heavy,
	Unbreakable,
	EArmorType_MAX,
};

// Enum FSD.EDamageType
enum class EDamageType : uint8 {
	Fire,
	Cold,
	Melee,
	Kinetic,
	Explosive,
	Stun,
	Electrocution,
	Fear,
	Radiation,
	Pheromone,
	Poison,
	ArmorBreaking,
	Push,
	Grab,
	None,
	Slow,
	Defense,
	TemperatureShock,
	Corrosive,
	EDamageType_MAX,
};

// Enum FSD.EEnemyAttackType
enum class EEnemyAttackType : uint8 {
	Melee,
	Ranged,
	Grab,
	Area,
	Move,
	EEnemyAttackType_MAX,
};

// Enum FSD.EMiningPodMission
enum class EMiningPodMission : uint8 {
	DropAndReturn,
	Extraction,
	DropFromSpacerig,
	EMiningPodMission_MAX,
};

// Enum FSD.EMiningPodRampState
enum class EMiningPodRampState : uint8 {
	Closed,
	Opening,
	Open,
	Closing,
	EMiningPodRampState_MAX,
};

// Enum FSD.EMiningPodState
enum class EMiningPodState : uint8 {
	Dropping,
	Drilling,
	Landed,
	PrepTakeoff,
	Departing,
	WaitingForGameStart,
	InSpace,
	Destroy,
	WaitOnSpacerig,
	ExitSpacerig,
	Damaged,
	PoweringUp,
	PoweredUp,
	DeepDiveDeparture,
	EMiningPodState_MAX,
};

// Enum FSD.EMissionStructure
enum class EMissionStructure : uint8 {
	SingleMission,
	DeepDive_Normal,
	DeepDive_Elite,
	EMissionStructure_MAX,
};

// Enum FSD.EPatrolBotControlState
enum class EPatrolBotControlState : uint8 {
	Hostile,
	Disabled,
	Hacked,
	EPatrolBotControlState_MAX,
};

// Enum FSD.EPatrolBotState
enum class EPatrolBotState : uint8 {
	Rolling,
	Flying,
	Disabled,
	EPatrolBotState_MAX,
};

// Enum FSD.EAfflictionSocket
enum class EAfflictionSocket : uint8 {
	CenterMass,
	Feet,
	Camera,
	EAfflictionSocket_MAX,
};

// Enum FSD.EPawnStatType
enum class EPawnStatType : uint8 {
	Multiplicative,
	Additive,
	EPawnStatType_MAX,
};

// Enum FSD.EPerkSlotType
enum class EPerkSlotType : uint8 {
	Available,
	LockedByPerk,
	LockedByPromotion,
	EPerkSlotType_MAX,
};

// Enum FSD.EPerkUsageType
enum class EPerkUsageType : uint8 {
	Passive,
	Active,
	EPerkUsageType_MAX,
};

// Enum FSD.EPerkHUDActivationLocation
enum class EPerkHUDActivationLocation : uint8 {
	Main,
	Down,
	EPerkHUDActivationLocation_MAX,
};

// Enum FSD.EPerkTierState
enum class EPerkTierState : uint8 {
	Claimable,
	Claimed,
	Locked,
	Unaffordable,
	NotAvailable,
	EPerkTierState_MAX,
};

// Enum FSD.EPickaxeState
enum class EPickaxeState : uint8 {
	Equipping,
	Mining,
	PowerAttack,
	End,
	EPickaxeState_MAX,
};

// Enum FSD.EPickaxePartLocation
enum class EPickaxePartLocation : uint8 {
	Head,
	FrontBlade,
	BackBlade,
	Shaft,
	Handle,
	Pommel,
	Material,
	Count,
	EPickaxePartLocation_MAX,
};

// Enum FSD.EPickaxePart
enum class EPickaxePart : uint8 {
	Head,
	Blade,
	Shaft,
	Handle,
	Pommel,
	Material,
	EPickaxePart_MAX,
};

// Enum FSD.EPipelineExtractorPodAnimState
enum class EPipelineExtractorPodAnimState : uint8 {
	Folded,
	Idle,
	Running,
	Broken,
	EPipelineExtractorPodAnimState_MAX,
};

// Enum FSD.EPlaceableObstructionType
enum class EPlaceableObstructionType : uint8 {
	Valid,
	GroundTooSteep,
	TooShort,
	TooLong,
	TurnTooSharp,
	Blocked,
	NotEnoughRoom,
	TooSteep,
	Other,
	EPlaceableObstructionType_MAX,
};

// Enum FSD.ECharacterMoveDirection
enum class ECharacterMoveDirection : uint8 {
	None,
	Forward,
	Left,
	Right,
	Back,
	ECharacterMoveDirection_MAX,
};

// Enum FSD.EGameOwnerStatus
enum class EGameOwnerStatus : uint8 {
	Supporter,
	ContentCreator,
	Developer,
	Modder,
	EGameOwnerStatus_Max,
};

// Enum FSD.EMovementCustomMode
enum class EMovementCustomMode : uint8 {
	MOVE_Custom_None,
	MOVE_Custom_Track,
	MOVE_Custom_CharacterStateControlled,
	MOVE_Custom_TraversalTool,
	MOVE_Custom_MAX,
};

// Enum FSD.ESpawnSettings
enum class ESpawnSettings : uint8 {
	Normal,
	NoSpawning,
	SpawnAll,
	ESpawnSettings_MAX,
};

// Enum FSD.ETerrainPlacementBoxType
enum class ETerrainPlacementBoxType : uint8 {
	NoTerrain,
	Terrain,
	ETerrainPlacementBoxType_MAX,
};

// Enum FSD.ERoomMirror
enum class ERoomMirror : uint8 {
	None,
	MirrorX,
	MirrorY,
	ERoomMirror_MAX,
};

// Enum FSD.ERoomMirroringSupport
enum class ERoomMirroringSupport : uint8 {
	NotAllowed,
	MirrorAroundX,
	MirrorAroundY,
	MirrorBoth,
	ERoomMirroringSupport_MAX,
};

// Enum FSD.EItemAdjustmentType
enum class EItemAdjustmentType : uint8 {
	None,
	Cieling,
	Wall,
	Floor,
	EItemAdjustmentType_MAX,
};

// Enum FSD.ECaveEntrancePriority
enum class ECaveEntrancePriority : uint8 {
	Primary,
	Secondary,
	ECaveEntrancePriority_MAX,
};

// Enum FSD.ECaveEntranceType
enum class ECaveEntranceType : uint8 {
	EntranceAndExit,
	Entrance,
	Exit,
	TreassureRoom,
	ECaveEntranceType_MAX,
};

// Enum FSD.ERoomType
enum class ERoomType : uint8 {
	Start,
	End,
	MainPath,
	Gold,
	ERoomType_MAX,
};

// Enum FSD.EProjectileSwitchCriteria
enum class EProjectileSwitchCriteria : uint8 {
	None,
	CharagedProjectile,
	HeatAbove,
	HeatBelow,
	CycleButtonSecondsHeld,
	EProjectileSwitchCriteria_MAX,
};

// Enum FSD.EProspectorRobotState
enum class EProspectorRobotState : uint8 {
	Searching,
	Scanning,
	Sampling,
	Fleeing,
	EProspectorRobotState_MAX,
};

// Enum FSD.EEnemyPlacementMask
enum class EEnemyPlacementMask : uint8 {
	Ground,
	Spawner,
	Cieling,
	EEnemyPlacementMask_MAX,
};

// Enum FSD.ESeasonVisibilityState
enum class ESeasonVisibilityState : uint8 {
	Bought,
	CanBuy,
	Locked,
	ESeasonVisibilityState_MAX,
};

// Enum FSD.EServerSortOrder
enum class EServerSortOrder : uint8 {
	Mission,
	Players,
	Length,
	Complexity,
	Distance,
	Time,
	Difficulty,
	EServerSortOrder_MAX,
};

// Enum FSD.EServerDistance
enum class EServerDistance : uint8 {
	Close,
	Medium,
	Far,
	World,
	EServerDistance_MAX,
};

// Enum FSD.EFSDNATType
enum class EFSDNATType : uint8 {
	Open,
	Moderate,
	Strict,
	Unknown,
	EFSDNATType_MAX,
};

// Enum FSD.EFSDMissionStatus
enum class EFSDMissionStatus : uint8 {
	SpaceRig,
	InGame,
	Starting,
	EscapeSequence,
	FinalBattle,
	EFSDMissionStatus_MAX,
};

// Enum FSD.ESharkEnemyState
enum class ESharkEnemyState : uint8 {
	Idle,
	Circling,
	Attacking,
	Vulnerable,
	Dive,
	ESharkEnemyState_MAX,
};

// Enum FSD.EShowroomScaling
enum class EShowroomScaling : uint8 {
	NoScaling,
	EnemySmall,
	EnemyMedium,
	EnemyBig,
	EnemyHuge,
	EShowroomScaling_MAX,
};

// Enum FSD.EPiplelineConnectorAnimationState
enum class EPiplelineConnectorAnimationState : uint8 {
	Unassembled,
	Assembling,
	Assembled,
	EPiplelineConnectorAnimationState_MAX,
};

// Enum FSD.EMaggotAnimationState
enum class EMaggotAnimationState : uint8 {
	Idle,
	Moving,
	EMaggotAnimationState_MAX,
};

// Enum FSD.EMoveDirection
enum class EMoveDirection : uint8 {
	None,
	Forward,
	Left,
	Right,
	Back,
	EMoveDirection_MAX,
};

// Enum FSD.ETemperatureIntensity
enum class ETemperatureIntensity : uint8 {
	Cold3,
	Cold2,
	Cold1,
	Heat1,
	Heat2,
	Heat3,
	ETemperatureIntensity_MAX,
};

// Enum FSD.ETetherMessageDirection
enum class ETetherMessageDirection : uint8 {
	Forward,
	Backward,
	Both,
	ETetherMessageDirection_MAX,
};

// Enum FSD.ETetherConnectionMode
enum class ETetherConnectionMode : uint8 {
	Both,
	FrontOnly,
	BackOnly,
	None,
	ETetherConnectionMode_MAX,
};

// Enum FSD.EThrowableInput
enum class EThrowableInput : uint8 {
	LeftButton,
	RightButton,
	EThrowableInput_MAX,
};

// Enum FSD.EExitTrackMode
enum class EExitTrackMode : uint8 {
	None,
	StopInPlace,
	JumpInPlace,
	JumpInCamDir,
	JumpInTrackDir,
	EExitTrackMode_MAX,
};

// Enum FSD.ETreasureType
enum class ETreasureType : uint8 {
	WeaponSkin,
	VictoryPose,
	PickaxePart,
	VanityItem,
	ETreasureType_MAX,
};

// Enum FSD.EItemUpgradeStatus
enum class EItemUpgradeStatus : uint8 {
	Locked,
	AvailableCannotAfford,
	AvailableCanAfford,
	Owned,
	Equipped,
	EItemUpgradeStatus_MAX,
};

// Enum FSD.ECharacterHeadMesh
enum class ECharacterHeadMesh : uint8 {
	Full,
	ThichNeckOnly,
	ThinNeckOnly,
	None,
	ECharacterHeadMesh_MAX,
};

// Enum FSD.EHeadVanityType
enum class EHeadVanityType : uint8 {
	HairOnly,
	HeadGearOnly,
	HeadGearOnly_UseArmorMaterial,
	HairAndHeadGear,
	HairAndHeadGear_UseArmorMaterial,
	EHeadVanityType_MAX,
};

// Enum FSD.EArmorSetLegs
enum class EArmorSetLegs : uint8 {
	Invalid,
	LeftUpperLeg,
	LeftLowerLeg,
	LeftFoot,
	LeftToe,
	RightUpperLeg,
	RightLowerLeg,
	RightFoot,
	RightToe,
	EArmorSetLegs_MAX,
};

// Enum FSD.EArmorSetTorso
enum class EArmorSetTorso : uint8 {
	Invalid,
	UpperTorso,
	MiddleTorso,
	LowerTorso,
	UpperBack,
	MiddleBack,
	LowerBack,
	LeftHip,
	RightHip,
	FrontHip,
	LeftUpperLeg,
	LeftLowerLeg,
	LeftFoot,
	LeftToe,
	RightUpperLeg,
	RightLowerLeg,
	RightFoot,
	RightToe,
	EArmorSetTorso_MAX,
};

// Enum FSD.EArmorSetArms
enum class EArmorSetArms : uint8 {
	Invalid,
	LeftShoulder,
	RightShoulder,
	LeftUpperArm,
	LeftLowerArm1,
	LeftLowerArm2,
	LeftHand,
	LeftHandAttach,
	RightUpperArm,
	RightLowerArm1,
	RightLowerArm2,
	RightHand,
	RightHandAttach,
	EArmorSetArms_MAX,
};

// Enum FSD.EVanityAquisitionType
enum class EVanityAquisitionType : uint8 {
	UnlockedFromStart,
	Purchased,
	Schematic,
	Treasure,
	EVanityAquisitionType_MAX,
};

// Enum FSD.EWoodLouseState
enum class EWoodLouseState : uint8 {
	Unfolded,
	Folded,
	Size,
	EWoodLouseState_MAX,
};

// ScriptStruct FSD.CountDownFloat
// Size: 0x0c (Inherited: 0x00)
struct FCountDownFloat {
	float CountDownDuration; // 0x00(0x04)
	char pad_4[0x8]; // 0x04(0x08)
};

// ScriptStruct FSD.LerpingPercent
// Size: 0x08 (Inherited: 0x00)
struct FLerpingPercent {
	char TargetPercent; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
};

// ScriptStruct FSD.ReplicatedCharacterData
// Size: 0x18 (Inherited: 0x00)
struct FReplicatedCharacterData {
	struct TWeakObjectPtr<struct AActor> Target; // 0x00(0x08)
	float TemperatureEffect; // 0x08(0x04)
	bool bCanTakeDamage; // 0x0c(0x01)
	char pad_D[0xb]; // 0x0d(0x0b)
};

// ScriptStruct FSD.LaserPointerTarget
// Size: 0xb0 (Inherited: 0x00)
struct FLaserPointerTarget {
	struct FHitResult HitInfo; // 0x00(0x88)
	char pad_88[0x10]; // 0x88(0x10)
	struct AActor* Target; // 0x98(0x08)
	struct AActor* ExtraTarget; // 0xa0(0x08)
	char pad_A8[0x8]; // 0xa8(0x08)
};

// ScriptStruct FSD.CoolDownProgressStyle
// Size: 0x40 (Inherited: 0x00)
struct FCoolDownProgressStyle {
	struct UTexture2D* Icon; // 0x00(0x08)
	struct FLinearColor IconTint; // 0x08(0x10)
	struct FText Name; // 0x18(0x18)
	struct UCoolDownProgressWidget* WidgetOverride; // 0x30(0x08)
	struct USoundCue* AudioCoolDownFinished; // 0x38(0x08)
};

// ScriptStruct FSD.CameraSpringSettings
// Size: 0x3c (Inherited: 0x00)
struct FCameraSpringSettings {
	bool SpringEnabled; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float StepThreshold; // 0x04(0x04)
	struct FVector2D SpringExtend; // 0x08(0x08)
	float RetractStrength; // 0x10(0x04)
	float RetractDownReduction; // 0x14(0x04)
	bool ShowDebug; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float LastSpeedZ; // 0x1c(0x04)
	struct FVector LastLocation; // 0x20(0x0c)
	struct FVector StartSpringLocation; // 0x2c(0x0c)
	bool bSpringInitialized; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
};

// ScriptStruct FSD.HeroInfo
// Size: 0x88 (Inherited: 0x00)
struct FHeroInfo {
	struct FText HeroName; // 0x00(0x18)
	struct UTexture2D* HeroIcon; // 0x18(0x08)
	struct UTexture2D* SmallHeroIcon; // 0x20(0x08)
	struct UTexture2D* HeroFullSizeImage; // 0x28(0x08)
	struct FLinearColor HeroColor; // 0x30(0x10)
	struct FText HeroShortDescription; // 0x40(0x18)
	struct FText HeroLongDescription; // 0x58(0x18)
	struct FText SwitchToMessage; // 0x70(0x18)
};

// ScriptStruct FSD.AnalogAimSettings
// Size: 0x50 (Inherited: 0x00)
struct FAnalogAimSettings {
	bool ShowDebugOutput; // 0x00(0x01)
	char pad_1[0x23]; // 0x01(0x23)
	struct FVector2D AimRate; // 0x24(0x08)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct UCurveFloat* SensitivityCurve; // 0x30(0x08)
	float LookAtStickyness; // 0x38(0x04)
	float StickynessRecoverySpeed; // 0x3c(0x04)
	float StickynessMaxSensitivity; // 0x40(0x04)
	struct FVector2D ThirdPersonLookRate; // 0x44(0x08)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct FSD.HoldButton
// Size: 0x28 (Inherited: 0x00)
struct FHoldButton {
	struct FText HoldingText; // 0x00(0x18)
	float HoldStartTime; // 0x18(0x04)
	float HoldDuration; // 0x1c(0x04)
	char pad_20[0x8]; // 0x20(0x08)
};

// ScriptStruct FSD.DownCameraSettings
// Size: 0x18 (Inherited: 0x00)
struct FDownCameraSettings {
	struct TWeakObjectPtr<struct APlayerCharacter> Target; // 0x00(0x08)
	int32_t TargetIndex; // 0x08(0x04)
	float MinPitch; // 0x0c(0x04)
	float MaxPitch; // 0x10(0x04)
	float SmoothSpeed; // 0x14(0x04)
};

// ScriptStruct FSD.PlatformComponent
// Size: 0x10 (Inherited: 0x00)
struct FPlatformComponent {
	struct UActorComponent* ComponentClass; // 0x00(0x08)
	enum class EPlatformComponentCriteria Criteria; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct FSD.ClaimableRewardEntry
// Size: 0x58 (Inherited: 0x00)
struct FClaimableRewardEntry {
	struct FText Title; // 0x00(0x18)
	struct FText Text; // 0x18(0x18)
	struct UObject* Image; // 0x30(0x08)
	struct TArray<struct UReward*> Rewards; // 0x38(0x10)
	struct FGuid SaveGameID; // 0x48(0x10)
};

// ScriptStruct FSD.CharacterViewScene
// Size: 0x18 (Inherited: 0x00)
struct FCharacterViewScene {
	struct TArray<struct FCharacterViewInfo> Characters; // 0x00(0x10)
	bool MissionSuccess; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct FSD.CharacterViewInfo
// Size: 0x28 (Inherited: 0x00)
struct FCharacterViewInfo {
	struct APlayerCharacter* CharacterClass; // 0x00(0x08)
	struct TArray<struct UVanityItem*> EquippedVanity; // 0x08(0x10)
	bool SurvivedInPod; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct UVictoryPose* VictoryPose; // 0x20(0x08)
};

// ScriptStruct FSD.SpaceRigNotification
// Size: 0x40 (Inherited: 0x00)
struct FSpaceRigNotification {
	struct FText Text; // 0x00(0x18)
	struct UTexture2D* Icon; // 0x18(0x08)
	struct FLinearColor IconColor; // 0x20(0x10)
	char pad_30[0x10]; // 0x30(0x10)
};

// ScriptStruct FSD.NetworkConnectionInfo
// Size: 0x20 (Inherited: 0x00)
struct FNetworkConnectionInfo {
	struct AFSDPlayerController* PlayerController; // 0x00(0x08)
	float PacketLossIn; // 0x08(0x04)
	float PacketLossOut; // 0x0c(0x04)
	float Ping; // 0x10(0x04)
	float Jitter; // 0x14(0x04)
	bool IsValid; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct FSD.PendingRewards
// Size: 0x190 (Inherited: 0x00)
struct FPendingRewards {
	struct FPendingRewardsStats StartStats; // 0x00(0xb0)
	struct FPendingRewardsStats EndStats; // 0xb0(0xb0)
	struct TArray<struct FCreditsReward> CreditsRewardEntries; // 0x160(0x10)
	int32_t CreditsReward; // 0x170(0x04)
	char pad_174[0x4]; // 0x174(0x04)
	struct TArray<struct FXPReward> XPRewardEntries; // 0x178(0x10)
	int32_t XPReward; // 0x188(0x04)
	bool bHasData; // 0x18c(0x01)
	bool bIsRecording; // 0x18d(0x01)
	bool bWasRewarded; // 0x18e(0x01)
	char pad_18F[0x1]; // 0x18f(0x01)
};

// ScriptStruct FSD.XPReward
// Size: 0x20 (Inherited: 0x00)
struct FXPReward {
	struct FText Description; // 0x00(0x18)
	int32_t XP; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct FSD.CreditsReward
// Size: 0x20 (Inherited: 0x00)
struct FCreditsReward {
	struct FText Description; // 0x00(0x18)
	int32_t Amount; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct FSD.PendingRewardsStats
// Size: 0xb0 (Inherited: 0x00)
struct FPendingRewardsStats {
	struct TMap<struct UResourceData*, float> AllResources; // 0x00(0x50)
	struct TMap<struct UResourceData*, float> CollectedResources; // 0x50(0x50)
	bool PrimaryObjectiveCompleted; // 0xa0(0x01)
	bool SecondaryObjectiveCompleted; // 0xa1(0x01)
	char pad_A2[0x2]; // 0xa2(0x02)
	float TimePlayed; // 0xa4(0x04)
	int32_t EnemiesKilled; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
};

// ScriptStruct FSD.FSDServerSearchOptions
// Size: 0x50 (Inherited: 0x00)
struct FFSDServerSearchOptions {
	enum class ESteamServerJoinStatus JoinStatus; // 0x00(0x01)
	enum class ESteamSearchRegion SearchRegion; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct TArray<struct UDifficultySetting*> Difficulties; // 0x08(0x10)
	bool DeepDive; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct FString SearchString; // 0x20(0x10)
	int32_t MissionSeed; // 0x30(0x04)
	int32_t GlobalMissionSeed; // 0x34(0x04)
	char pad_38[0x8]; // 0x38(0x08)
	struct TArray<enum class EGameType> GameTypes; // 0x40(0x10)
};

// ScriptStruct FSD.FadeData
// Size: 0x48 (Inherited: 0x00)
struct FFadeData {
	bool bEnabled; // 0x00(0x01)
	bool bShowDebugOutput; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct UFSDLevelLoadingPersistentWidget* WidgetType; // 0x08(0x08)
	struct UFSDLevelLoadingPersistentWidget* Widget; // 0x10(0x08)
	float CurrentFade; // 0x18(0x04)
	float TargetFade; // 0x1c(0x04)
	float FadeSpeed; // 0x20(0x04)
	float Delay; // 0x24(0x04)
	bool bFadeWorldOnly; // 0x28(0x01)
	bool bCapFramerate; // 0x29(0x01)
	bool bToSpaceRig; // 0x2a(0x01)
	char pad_2B[0x5]; // 0x2b(0x05)
	struct UTexture* loadingImage; // 0x30(0x08)
	struct FString DebugMsg; // 0x38(0x10)
};

// ScriptStruct FSD.GameStateSeamlessTravelStorage
// Size: 0x150 (Inherited: 0x00)
struct FGameStateSeamlessTravelStorage {
	struct UDifficultySetting* ChosenDifficulty; // 0x00(0x08)
	struct TMap<struct UPlayer*, bool> PlayerShouldStartInMedbay; // 0x08(0x50)
	struct TMap<struct UResourceData*, float> Resources; // 0x58(0x50)
	float MissionTime; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
	struct TMap<struct FName, float> StoredFloatValues; // 0xb0(0x50)
	struct TMap<struct FName, int32_t> StoredIntValues; // 0x100(0x50)
};

// ScriptStruct FSD.FSDChatMessage
// Size: 0x60 (Inherited: 0x00)
struct FFSDChatMessage {
	char pad_0[0x8]; // 0x00(0x08)
	enum class EChatMessageType MsgType; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString Sender; // 0x10(0x10)
	enum class EChatSenderType SenderType; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct FString Msg; // 0x28(0x10)
	struct FUniqueNetIdRepl SenderNetID; // 0x38(0x28)
};

// ScriptStruct FSD.SplineSegmentCarveOperationData
// Size: 0x28 (Inherited: 0x00)
struct FSplineSegmentCarveOperationData {
	int32_t OperationNumber; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FCarveSplineSegment> Segments; // 0x08(0x10)
	struct UTerrainMaterial* Material; // 0x18(0x08)
	enum class ECarveFilterType CarveFilter; // 0x20(0x01)
	enum class EPreciousMaterialOptions Precious; // 0x21(0x01)
	char pad_22[0x6]; // 0x22(0x06)
};

// ScriptStruct FSD.MeltOperationData
// Size: 0x20 (Inherited: 0x00)
struct FMeltOperationData {
	int32_t OperationNumber; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FVector> Points; // 0x08(0x10)
	float Radius; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct FSD.DrillOperationData
// Size: 0x2c (Inherited: 0x00)
struct FDrillOperationData {
	int32_t OperationNumber; // 0x00(0x04)
	struct FVector HitPos; // 0x04(0x0c)
	struct FVector Dir; // 0x10(0x0c)
	struct FVector CarveSize; // 0x1c(0x0c)
	float CarveNoise; // 0x28(0x04)
};

// ScriptStruct FSD.RemoveFloatingIslandOperationData
// Size: 0x04 (Inherited: 0x00)
struct FRemoveFloatingIslandOperationData {
	int32_t OperationNumber; // 0x00(0x04)
};

// ScriptStruct FSD.PickaxeDigOperationData
// Size: 0x28 (Inherited: 0x00)
struct FPickaxeDigOperationData {
	int32_t OperationNumber; // 0x00(0x04)
	struct FVector HitPos; // 0x04(0x0c)
	struct FVector Dir; // 0x10(0x0c)
	float DigSize; // 0x1c(0x04)
	struct AActor* Miner; // 0x20(0x08)
};

// ScriptStruct FSD.CarveWithSTLMeshOperationData
// Size: 0x68 (Inherited: 0x00)
struct FCarveWithSTLMeshOperationData {
	int32_t OperationNumber; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct USTLMeshCarver* STLMeshCarver; // 0x08(0x08)
	struct UStaticMeshCarver* StaticMeshCarver; // 0x10(0x08)
	struct UTerrainMaterial* Material; // 0x18(0x08)
	enum class ECarveFilterType CarveFilter; // 0x20(0x01)
	enum class EPreciousMaterialOptions Precious; // 0x21(0x01)
	char pad_22[0x2]; // 0x22(0x02)
	struct FMatrixWithExactSync Transform; // 0x24(0x40)
	char pad_64[0x4]; // 0x64(0x04)
};

// ScriptStruct FSD.CarveWithColliderOperationData
// Size: 0x68 (Inherited: 0x00)
struct FCarveWithColliderOperationData {
	int32_t OperationNumber; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UStaticMesh* StaticMesh; // 0x08(0x08)
	struct UTerrainMaterial* Material; // 0x10(0x08)
	enum class ECarveFilterType CarveFilter; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	struct FMatrixWithExactSync Transform; // 0x1c(0x40)
	float ExpensiveNoise; // 0x5c(0x04)
	enum class EPreciousMaterialOptions Precious; // 0x60(0x01)
	enum class CarveOptionsCellSize CarveCellSize; // 0x61(0x01)
	char pad_62[0x6]; // 0x62(0x06)
};

// ScriptStruct FSD.GrenadeExplodeOperationData
// Size: 0x38 (Inherited: 0x00)
struct FGrenadeExplodeOperationData {
	int32_t OperationNumber; // 0x00(0x04)
	struct FVector HitPos; // 0x04(0x0c)
	struct FVector Normal; // 0x10(0x0c)
	float NormalOffset; // 0x1c(0x04)
	float NormalSqueeze; // 0x20(0x04)
	float Radius; // 0x24(0x04)
	float Noise; // 0x28(0x04)
	float BurnThickness; // 0x2c(0x04)
	bool UseBulletBurntMaterial; // 0x30(0x01)
	bool DissolvePlatforms; // 0x31(0x01)
	char pad_32[0x2]; // 0x32(0x02)
	uint32_t OverrideBurntMaterialHandle; // 0x34(0x04)
};

// ScriptStruct FSD.SonyInputSettings
// Size: 0x30 (Inherited: 0x00)
struct FSonyInputSettings {
	bool MotionControlEnabled; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float MotionControlXSensitivity; // 0x04(0x04)
	float MotionControlYSensitivity; // 0x08(0x04)
	bool MotionControlPrecisionMode; // 0x0c(0x01)
	bool MotionControlSalute; // 0x0d(0x01)
	bool MotionControlFlight; // 0x0e(0x01)
	enum class ESonyControllerMotionMapping MotionXMapping; // 0x0f(0x01)
	bool AdaptiveTriggersEnabled; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float ControllerSpeakerVolume; // 0x14(0x04)
	bool ControllerSpeakerMissionControl; // 0x18(0x01)
	bool ControllerSpeakerSalute; // 0x19(0x01)
	bool ControllerSpeakerFlare; // 0x1a(0x01)
	bool ControllerSpeakerMineralCollection; // 0x1b(0x01)
	bool TouchPadTerrainScannerEnabled; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	float TouchPadTerrainScannerXSensitivity; // 0x20(0x04)
	float TouchPadTerrainScannerYSensitivity; // 0x24(0x04)
	float TouchPadTerrainScannerZoomSensitivity; // 0x28(0x04)
	bool TouchPadGesturesEnabled; // 0x2c(0x01)
	enum class ESonyControllerLightMode ControllerLightMode; // 0x2d(0x01)
	char pad_2E[0x2]; // 0x2e(0x02)
};

// ScriptStruct FSD.OptionsInSaveGame
// Size: 0x08 (Inherited: 0x00)
struct FOptionsInSaveGame {
	bool SaveGameOptionsValid; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t ScreenMode; // 0x04(0x04)
};

// ScriptStruct FSD.GDKWinOptionsInSaveGame
// Size: 0x70 (Inherited: 0x00)
struct FGDKWinOptionsInSaveGame {
	bool SaveGameOptionsValid; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t ScreenMode; // 0x04(0x04)
	uint32_t ResolutionSizeX; // 0x08(0x04)
	uint32_t ResolutionSizeY; // 0x0c(0x04)
	bool bUseVSync; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float FrameRateLimit; // 0x14(0x04)
	float Sharpening; // 0x18(0x04)
	int32_t AntiAliasingType; // 0x1c(0x04)
	float Gamma; // 0x20(0x04)
	int32_t OverallQuality; // 0x24(0x04)
	float ResolutionScale; // 0x28(0x04)
	int32_t TextureQuality; // 0x2c(0x04)
	int32_t ShadowQuality; // 0x30(0x04)
	int32_t AntiAliasingQuality; // 0x34(0x04)
	int32_t PostProcessingQuality; // 0x38(0x04)
	int32_t EffectsQuality; // 0x3c(0x04)
	int32_t ViewDistanceQuality; // 0x40(0x04)
	bool PreventLatejoinCharacterDuplication; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	struct FString LocalGameServerName; // 0x48(0x10)
	struct FString CurrentAudioOutputDeviceId; // 0x58(0x10)
	bool UseDefaultAudioOutputDevice; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// ScriptStruct FSD.ConsoleOptionsInSaveGame
// Size: 0x120 (Inherited: 0x00)
struct FConsoleOptionsInSaveGame {
	struct FControllerSettings ControllerSettings; // 0x00(0x10)
	struct FHUDElements HUDElements; // 0x10(0x78)
	bool SaveGameOptionsValid; // 0x88(0x01)
	bool bTutorialHintsEnabled; // 0x89(0x01)
	bool bShowFPS; // 0x8a(0x01)
	char pad_8B[0x1]; // 0x8b(0x01)
	int32_t ShowNetInfoLevel; // 0x8c(0x04)
	float FOV; // 0x90(0x04)
	float HeadbobbingScale; // 0x94(0x04)
	float CameraShakeScale; // 0x98(0x04)
	float UIDPIScale; // 0x9c(0x04)
	float volumeCharacterVoice; // 0xa0(0x04)
	float volumeMaster; // 0xa4(0x04)
	float volumeMissionControl; // 0xa8(0x04)
	float volumeSFX; // 0xac(0x04)
	float volumeMusic; // 0xb0(0x04)
	bool bShowSubtitles; // 0xb4(0x01)
	bool InvertMouse; // 0xb5(0x01)
	bool PhotosensitiveMode; // 0xb6(0x01)
	bool bHoldToSprint; // 0xb7(0x01)
	bool bToggleLaserPointer; // 0xb8(0x01)
	bool bToggleTerrainScanner; // 0xb9(0x01)
	bool bUseMouseSmoothing; // 0xba(0x01)
	char pad_BB[0x1]; // 0xbb(0x01)
	float MouseXSensitivity; // 0xbc(0x04)
	float MouseYSensitivity; // 0xc0(0x04)
	bool bUseSeperateSensitivity; // 0xc4(0x01)
	bool bInvertMouseWheel; // 0xc5(0x01)
	bool bInvertIncapacitatedX_Mouse; // 0xc6(0x01)
	bool bInvertIncapacitatedX_Controller; // 0xc7(0x01)
	bool bInvertFlightControls; // 0xc8(0x01)
	bool bShowUIAnimations; // 0xc9(0x01)
	bool bPlaySoundOnChatMessage; // 0xca(0x01)
	char pad_CB[0x1]; // 0xcb(0x01)
	float ChatFadeTime; // 0xcc(0x04)
	float ForceFeedbackScale; // 0xd0(0x04)
	int32_t ChatFontSize; // 0xd4(0x04)
	float HDRColorGamma; // 0xd8(0x04)
	enum class EConsoleGraphicsMode ConsoleGraphicsMode; // 0xdc(0x01)
	char pad_DD[0x3]; // 0xdd(0x03)
	struct FString Language; // 0xe0(0x10)
	struct FCharacterOptions CharacterOptions; // 0xf0(0x02)
	char pad_F2[0x6]; // 0xf2(0x06)
	struct TArray<struct FCustomKeyBinding> CustomKeyBindings; // 0xf8(0x10)
	struct TArray<struct FCustomKeyBinding> CustomControllerBindings; // 0x108(0x10)
	bool SwapControllerThumbsticks; // 0x118(0x01)
	char pad_119[0x7]; // 0x119(0x07)
};

// ScriptStruct FSD.CustomKeyBinding
// Size: 0x28 (Inherited: 0x00)
struct FCustomKeyBinding {
	struct FName ActionName; // 0x00(0x08)
	int32_t Index; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FKey Key; // 0x10(0x18)
};

// ScriptStruct FSD.CharacterOptions
// Size: 0x02 (Inherited: 0x00)
struct FCharacterOptions {
	bool GrapplingHookAutoSwitch; // 0x00(0x01)
	bool ZiplineGunAutoSwitch; // 0x01(0x01)
};

// ScriptStruct FSD.HUDElements
// Size: 0x78 (Inherited: 0x00)
struct FHUDElements {
	struct FHUDElementData OnScreenHelp; // 0x00(0x08)
	struct FHUDElementData EnemyHealth; // 0x08(0x08)
	struct FHUDElementData RadarDepth; // 0x10(0x08)
	struct FHUDElementData PlayerHealthShield; // 0x18(0x08)
	struct FHUDElementData PlayerNameClassIcon; // 0x20(0x08)
	struct FHUDElementData PlayerItems; // 0x28(0x08)
	struct FHUDElementData PlayerResources; // 0x30(0x08)
	struct FHUDElementData WeaponInfo; // 0x38(0x08)
	struct FHUDElementData Grenades; // 0x40(0x08)
	struct FHUDElementData FlashLight; // 0x48(0x08)
	struct FHUDElementData Flares; // 0x50(0x08)
	struct FHUDElementData Crosshair; // 0x58(0x08)
	struct FHUDElementData Objectives; // 0x60(0x08)
	struct FHUDElementData TeamDisplay; // 0x68(0x08)
	struct FHUDElementData SentryGunDisplay; // 0x70(0x08)
};

// ScriptStruct FSD.HUDElementData
// Size: 0x08 (Inherited: 0x00)
struct FHUDElementData {
	enum class EHUDVisibilityMode Mode; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t Version; // 0x04(0x04)
};

// ScriptStruct FSD.ControllerSettings
// Size: 0x10 (Inherited: 0x00)
struct FControllerSettings {
	float AimInnerDeadZone; // 0x00(0x04)
	float AimSensitivity; // 0x04(0x04)
	float AimOuterAcceleration; // 0x08(0x04)
	enum class ETurn180Mode Turn180Mode; // 0x0c(0x01)
	bool bPreviousItemEnabled; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
};

// ScriptStruct FSD.WatchedTutorial
// Size: 0x18 (Inherited: 0x00)
struct FWatchedTutorial {
	struct FString TutorialName; // 0x00(0x10)
	int32_t count; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct FSD.ResourcesSave
// Size: 0xa0 (Inherited: 0x00)
struct FResourcesSave {
	struct TMap<struct FGuid, float> OwnedResources; // 0x00(0x50)
	struct TMap<struct UResourceData*, float> Resources; // 0x50(0x50)
};

// ScriptStruct FSD.ItemUINotifications
// Size: 0x68 (Inherited: 0x00)
struct FItemUINotifications {
	struct TArray<struct FUINotificationItem> UINotifications; // 0x00(0x10)
	struct TSet<struct FGuid> UINotificationSet; // 0x10(0x50)
	struct UFSDSaveGame* SaveGame; // 0x60(0x08)
};

// ScriptStruct FSD.UINotificationItem
// Size: 0x10 (Inherited: 0x00)
struct FUINotificationItem {
	struct TArray<struct FGuid> NotificationIDs; // 0x00(0x10)
};

// ScriptStruct FSD.EventRewardSave
// Size: 0x50 (Inherited: 0x00)
struct FEventRewardSave {
	struct TMap<struct FGuid, struct FEventRewardSaveItem> PendingRewards; // 0x00(0x50)
};

// ScriptStruct FSD.EventRewardSaveItem
// Size: 0x20 (Inherited: 0x00)
struct FEventRewardSaveItem {
	struct FGuid CategoryID; // 0x00(0x10)
	struct TArray<struct FGuid> ClassOptions; // 0x10(0x10)
};

// ScriptStruct FSD.SkinList
// Size: 0x50 (Inherited: 0x00)
struct FSkinList {
	struct TSet<struct FGuid> Skins; // 0x00(0x50)
};

// ScriptStruct FSD.ItemNotificationInfo
// Size: 0x04 (Inherited: 0x00)
struct FItemNotificationInfo {
	int32_t NotificationFlags; // 0x00(0x04)
};

// ScriptStruct FSD.UpgradeLoadout
// Size: 0x50 (Inherited: 0x00)
struct FUpgradeLoadout {
	struct TMap<struct FGuid, struct FItemUpgradeSelection> Loadout; // 0x00(0x50)
};

// ScriptStruct FSD.ItemUpgradeSelection
// Size: 0x78 (Inherited: 0x00)
struct FItemUpgradeSelection {
	struct FGuid WeaponID; // 0x00(0x10)
	struct TArray<struct FGuid> EquippedUpgrades; // 0x10(0x10)
	struct TArray<struct FGuid> PermanentUpgrades; // 0x20(0x10)
	struct FGuid EquippedOverclock; // 0x30(0x10)
	struct TArray<struct FGuid> EquippedSkins; // 0x40(0x10)
	bool OverclockingUnlocked; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	struct FGuid EquippedSkinColor; // 0x54(0x10)
	struct FGuid EquippedSkinMesh; // 0x64(0x10)
	char pad_74[0x4]; // 0x74(0x04)
};

// ScriptStruct FSD.DrinkSave
// Size: 0x58 (Inherited: 0x00)
struct FDrinkSave {
	struct TSet<struct FGuid> UnlockedDrinks; // 0x00(0x50)
	bool HasUnlockedSpecial; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// ScriptStruct FSD.ForgingSave
// Size: 0x08 (Inherited: 0x00)
struct FForgingSave {
	int32_t XP; // 0x00(0x04)
	int32_t AwardsGiven; // 0x04(0x04)
};

// ScriptStruct FSD.CharacterSave
// Size: 0x208 (Inherited: 0x00)
struct FCharacterSave {
	struct FGuid SaveGameID; // 0x00(0x10)
	int32_t XP; // 0x10(0x04)
	bool HasCompletedRetirementCampaign; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	int32_t TimesRetired; // 0x18(0x04)
	int32_t RetiredCharacterLevels; // 0x1c(0x04)
	bool HasSeenRetirementRewardScreen; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct APlayerCharacter* CharacterClass; // 0x28(0x08)
	struct FCharacterVanitySave Vanity; // 0x30(0x110)
	int32_t SelectedLoadout; // 0x140(0x04)
	struct FItemLoadout Loadout; // 0x144(0x84)
	struct TArray<struct FItemLoadout> Loadouts; // 0x1c8(0x10)
	struct FVictoryPoseSave VictoryPose; // 0x1d8(0x30)
};

// ScriptStruct FSD.VictoryPoseSave
// Size: 0x30 (Inherited: 0x00)
struct FVictoryPoseSave {
	struct FGuid EquippedVictoryPose; // 0x00(0x10)
	struct TArray<struct FGuid> UnlockedVictoryPoses; // 0x10(0x10)
	struct TArray<struct FGuid> EquippedVictoryPoses; // 0x20(0x10)
};

// ScriptStruct FSD.ItemLoadout
// Size: 0x84 (Inherited: 0x00)
struct FItemLoadout {
	struct FGuid PrimaryWeapon; // 0x00(0x10)
	struct FGuid SecondaryWeapon; // 0x10(0x10)
	struct FGuid TraversalTool; // 0x20(0x10)
	struct FGuid ClassTool; // 0x30(0x10)
	struct FGuid Armor; // 0x40(0x10)
	struct FGuid Flare; // 0x50(0x10)
	struct FGuid MiningTool; // 0x60(0x10)
	struct FGuid Grenade; // 0x70(0x10)
	int32_t IconIndex; // 0x80(0x04)
};

// ScriptStruct FSD.CharacterVanitySave
// Size: 0x110 (Inherited: 0x00)
struct FCharacterVanitySave {
	struct TArray<struct FCharacterVanityLoadout> Loadouts; // 0x00(0x10)
	struct TArray<struct FGuid> UnLockedVanityItemIDs; // 0x10(0x10)
	struct FGuid EquippedHeadItemID; // 0x20(0x10)
	struct FGuid EquippedBeardItemID; // 0x30(0x10)
	struct FGuid EquippedArmorItemID; // 0x40(0x10)
	struct FGuid EquippedArmorMaterialItemID; // 0x50(0x10)
	struct FGuid EquippedBeardColorItemID; // 0x60(0x10)
	struct FGuid EquippedSkinColorItemID; // 0x70(0x10)
	struct FGuid EquippedEyebrowsItemID; // 0x80(0x10)
	struct FGuid EquippedMoustacheItemID; // 0x90(0x10)
	struct FGuid EquippedSideburnsItemID; // 0xa0(0x10)
	struct TArray<struct UVanityItem*> UnLockedVanityItems; // 0xb0(0x10)
	struct TMap<enum class EVanitySlot, struct FGuid> NewVanityItems; // 0xc0(0x50)
};

// ScriptStruct FSD.CharacterVanityLoadout
// Size: 0x90 (Inherited: 0x00)
struct FCharacterVanityLoadout {
	struct FGuid EquippedHeadItemID; // 0x00(0x10)
	struct FGuid EquippedBeardItemID; // 0x10(0x10)
	struct FGuid EquippedArmorItemID; // 0x20(0x10)
	struct FGuid EquippedArmorMaterialID; // 0x30(0x10)
	struct FGuid EquippedBeardColorItemID; // 0x40(0x10)
	struct FGuid EquippedSkinColorItemID; // 0x50(0x10)
	struct FGuid EquippedEyebrowsItemID; // 0x60(0x10)
	struct FGuid EquippedMoustacheItemID; // 0x70(0x10)
	struct FGuid EquippedSideburnsItemID; // 0x80(0x10)
};

// ScriptStruct FSD.DeepDiveSave
// Size: 0x70 (Inherited: 0x00)
struct FDeepDiveSave {
	struct FDeepDiveItem NormalSave; // 0x00(0x38)
	struct FDeepDiveItem EliteSave; // 0x38(0x38)
};

// ScriptStruct FSD.DeepDiveItem
// Size: 0x38 (Inherited: 0x00)
struct FDeepDiveItem {
	int32_t Progress; // 0x00(0x04)
	int32_t Seed; // 0x04(0x04)
	int32_t BestTime; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FDeepDiveSaveRewardItem> Rewards; // 0x10(0x10)
	bool HasEverCompleted; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct TArray<struct FGuid> RewardsGiven; // 0x28(0x10)
};

// ScriptStruct FSD.DeepDiveSaveRewardItem
// Size: 0x14 (Inherited: 0x00)
struct FDeepDiveSaveRewardItem {
	struct FGuid RewardID; // 0x00(0x10)
	int32_t Stage; // 0x10(0x04)
};

// ScriptStruct FSD.CampaignSave
// Size: 0x48 (Inherited: 0x00)
struct FCampaignSave {
	struct FActiveCampaignItem ActiveCampaign; // 0x00(0x14)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<struct FGuid> CompletedCampaigns; // 0x18(0x10)
	int32_t ActiveCampaignWeek; // 0x28(0x04)
	struct FWeeklyCampaignItem WeeklySave; // 0x2c(0x0c)
	struct FWeeklyCampaignItem MaxtrixCoreHuntSave; // 0x38(0x0c)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct FSD.WeeklyCampaignItem
// Size: 0x0c (Inherited: 0x00)
struct FWeeklyCampaignItem {
	int32_t LastCompletedWeek; // 0x00(0x04)
	int32_t LastStartedWeek; // 0x04(0x04)
	int32_t RewardedProgress; // 0x08(0x04)
};

// ScriptStruct FSD.ActiveCampaignItem
// Size: 0x14 (Inherited: 0x00)
struct FActiveCampaignItem {
	struct FGuid CampaignID; // 0x00(0x10)
	int32_t Progress; // 0x10(0x04)
};

// ScriptStruct FSD.UnLockedMissionParameters
// Size: 0x20 (Inherited: 0x00)
struct FUnLockedMissionParameters {
	struct TArray<struct FGuid> UnLockedComplexities; // 0x00(0x10)
	struct TArray<struct FGuid> UnLockedDurations; // 0x10(0x10)
};

// ScriptStruct FSD.GameDLCSave
// Size: 0x50 (Inherited: 0x00)
struct FGameDLCSave {
	struct TSet<struct FGuid> AnnouncedIDs; // 0x00(0x50)
};

// ScriptStruct FSD.SeasonSave
// Size: 0x50 (Inherited: 0x00)
struct FSeasonSave {
	struct TMap<struct FGuid, struct FSeasonSaveEntry> Seasons; // 0x00(0x50)
};

// ScriptStruct FSD.SeasonSaveEntry
// Size: 0xf0 (Inherited: 0x00)
struct FSeasonSaveEntry {
	int32_t XP; // 0x00(0x04)
	int32_t Tokens; // 0x04(0x04)
	struct TArray<struct FRewardsClaimed> RewardsClaimed; // 0x08(0x10)
	bool HasClaimedAllRewards; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	int32_t RewardsClaimedAfterMaxLevel; // 0x1c(0x04)
	struct TMap<int32_t, bool> NodesBought; // 0x20(0x50)
	struct TArray<struct FChallengeSaveInfo> ActiveChallenges; // 0x70(0x10)
	struct FDateTime LastNewChallengeGiven; // 0x80(0x08)
	struct FDateTime LastChallengeReroll; // 0x88(0x08)
	struct TMap<struct FGuid, int32_t> CompletedSpecialChallenges; // 0x90(0x50)
	int32_t ClaimedScripChallenges; // 0xe0(0x04)
	float TimePlayedAtSeasonStart; // 0xe4(0x04)
	float ChallengesCompletedAtSeasonStart; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)
};

// ScriptStruct FSD.ChallengeSaveInfo
// Size: 0x30 (Inherited: 0x00)
struct FChallengeSaveInfo {
	struct TArray<int32_t> StatIndices; // 0x00(0x10)
	struct FGuid ChallengeGuid; // 0x10(0x10)
	int32_t CurrentWins; // 0x20(0x04)
	int32_t NumberOfWins; // 0x24(0x04)
	int32_t XPCompleteGain; // 0x28(0x04)
	int32_t TokenGain; // 0x2c(0x04)
};

// ScriptStruct FSD.RewardsClaimed
// Size: 0x02 (Inherited: 0x00)
struct FRewardsClaimed {
	bool NormalClaimed; // 0x00(0x01)
	bool SpecialClaimed; // 0x01(0x01)
};

// ScriptStruct FSD.FSDEventRewardsSave
// Size: 0x50 (Inherited: 0x00)
struct FFSDEventRewardsSave {
	struct TSet<struct FGuid> EventsSeen; // 0x00(0x50)
};

// ScriptStruct FSD.PromotionRewardsSave
// Size: 0x50 (Inherited: 0x00)
struct FPromotionRewardsSave {
	struct TSet<struct FGuid> ClaimedRewards; // 0x00(0x50)
};

// ScriptStruct FSD.SchematicSave
// Size: 0x38 (Inherited: 0x00)
struct FSchematicSave {
	struct TArray<struct FGuid> ForgedSchematics; // 0x00(0x10)
	struct FGuid PendingReward; // 0x10(0x10)
	struct TArray<struct FGuid> OwnedSchematics; // 0x20(0x10)
	int32_t SkinFixupCounter; // 0x30(0x04)
	bool bFirstSchematicMessageShown; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
};

// ScriptStruct FSD.CharacterPerksSave
// Size: 0x10 (Inherited: 0x00)
struct FCharacterPerksSave {
	struct TArray<struct FPerkEquipEntry> CharacterPerks; // 0x00(0x10)
};

// ScriptStruct FSD.PerkEquipEntry
// Size: 0x20 (Inherited: 0x00)
struct FPerkEquipEntry {
	struct FGuid characterID; // 0x00(0x10)
	struct TArray<struct FGuid> PerkIDs; // 0x10(0x10)
};

// ScriptStruct FSD.AchievementSave
// Size: 0x20 (Inherited: 0x00)
struct FAchievementSave {
	struct TArray<struct FString> OfflineAchievedAchievements; // 0x00(0x10)
	struct TArray<struct FAchievementSaveEntry> AchievementEntries; // 0x10(0x10)
};

// ScriptStruct FSD.AchievementSaveEntry
// Size: 0x18 (Inherited: 0x00)
struct FAchievementSaveEntry {
	struct FGuid AchievementSaveID; // 0x00(0x10)
	float HighestSavedProgress; // 0x10(0x04)
	float CurrentProgress; // 0x14(0x04)
};

// ScriptStruct FSD.PerkClaimsSave
// Size: 0x18 (Inherited: 0x00)
struct FPerkClaimsSave {
	struct TArray<struct FPerkClaimEntry> PerkEntries; // 0x00(0x10)
	bool HasResetPerks2; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct FSD.PerkClaimEntry
// Size: 0x14 (Inherited: 0x00)
struct FPerkClaimEntry {
	struct FGuid PerkID; // 0x00(0x10)
	int32_t currentRank; // 0x10(0x04)
};

// ScriptStruct FSD.MilestoneSave
// Size: 0x10 (Inherited: 0x00)
struct FMilestoneSave {
	struct TArray<struct FMilestoneCounter> ClaimedKPIRewards; // 0x00(0x10)
};

// ScriptStruct FSD.MilestoneCounter
// Size: 0x14 (Inherited: 0x00)
struct FMilestoneCounter {
	struct FGuid KPIGuid; // 0x00(0x10)
	int32_t Tier; // 0x10(0x04)
};

// ScriptStruct FSD.MissionStatSave
// Size: 0x18 (Inherited: 0x00)
struct FMissionStatSave {
	struct TArray<struct FMissionStatCounter> Counters; // 0x00(0x10)
	bool bCharacterLevelUpFixed; // 0x10(0x01)
	bool bBoughtVanityItemsFixed; // 0x11(0x01)
	bool bBoughtEquipmentUpgradesFixed; // 0x12(0x01)
	bool bCampaignsCompletedFixed; // 0x13(0x01)
	bool WeaponUpgradesFixed; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct FSD.MissionStatCounter
// Size: 0x24 (Inherited: 0x00)
struct FMissionStatCounter {
	struct FGuid PlayerClassID; // 0x00(0x10)
	struct FGuid MissionStatID; // 0x10(0x10)
	float Value; // 0x20(0x04)
};

// ScriptStruct FSD.EndMissionResult
// Size: 0x60 (Inherited: 0x00)
struct FEndMissionResult {
	struct FPlayerProgress PreviousPlayerProgress; // 0x00(0x08)
	struct FPlayerProgress PlayerProgress; // 0x08(0x08)
	struct FCharacterProgress PreviousCharacterProgress; // 0x10(0x20)
	struct FCharacterProgress CharacterProgress; // 0x30(0x20)
	struct USchematic* RewardedSchematic; // 0x50(0x08)
	bool bReadyForUse; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
};

// ScriptStruct FSD.CharacterProgress
// Size: 0x20 (Inherited: 0x00)
struct FCharacterProgress {
	struct UPlayerCharacterID* characterID; // 0x00(0x08)
	int32_t Level; // 0x08(0x04)
	float Progress; // 0x0c(0x04)
	int32_t CurrentXP; // 0x10(0x04)
	int32_t NextLevelXP; // 0x14(0x04)
	int32_t TimesRetired; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct FSD.PlayerProgress
// Size: 0x08 (Inherited: 0x00)
struct FPlayerProgress {
	int32_t PlayerRank; // 0x00(0x04)
	int32_t PlayerStars; // 0x04(0x04)
};

// ScriptStruct FSD.DiscordServerData
// Size: 0x08 (Inherited: 0x00)
struct FDiscordServerData {
	int32_t presenceCount; // 0x00(0x04)
	int32_t memberCount; // 0x04(0x04)
};

// ScriptStruct FSD.ActiveCampaingMission
// Size: 0x0c (Inherited: 0x00)
struct FActiveCampaingMission {
	bool HasMission; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t GlobalSeed; // 0x04(0x04)
	int32_t MissionSeed; // 0x08(0x04)
};

// ScriptStruct FSD.SaveGameStatePerkItem
// Size: 0x10 (Inherited: 0x00)
struct FSaveGameStatePerkItem {
	char Rank; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UPerkAsset* Perk; // 0x08(0x08)
};

// ScriptStruct FSD.DrinkableBarSlot
// Size: 0x14 (Inherited: 0x00)
struct FDrinkableBarSlot {
	struct FVector WorldLocation; // 0x00(0x0c)
	struct TWeakObjectPtr<struct ADrinkableActor> DrinkableActor; // 0x0c(0x08)
};

// ScriptStruct FSD.UpgradeValues
// Size: 0x1c (Inherited: 0x00)
struct FUpgradeValues {
	float BaseValue; // 0x00(0x04)
	float UpgradedValue; // 0x04(0x04)
	float UpgradedPercentageValue; // 0x08(0x04)
	float OldUpgradedValue; // 0x0c(0x04)
	float OldUpgradedPercentageValue; // 0x10(0x04)
	float CurrentValue; // 0x14(0x04)
	enum class EUpgradeCalucationType CalculationType; // 0x18(0x01)
	enum class EItemPreviewStatus PreviewStatus; // 0x19(0x01)
	char pad_1A[0x2]; // 0x1a(0x02)
};

// ScriptStruct FSD.CraftingCost
// Size: 0x10 (Inherited: 0x00)
struct FCraftingCost {
	struct UResourceData* Resource; // 0x00(0x08)
	float Amount; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct FSD.ItemUpgradeStatText
// Size: 0x20 (Inherited: 0x00)
struct FItemUpgradeStatText {
	struct FText StatText; // 0x00(0x18)
	bool IsAdventageous; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct FSD.DeepDiveBank
// Size: 0x10 (Inherited: 0x00)
struct FDeepDiveBank {
	struct UDeepDive* NormalDeepDive; // 0x00(0x08)
	struct UDeepDive* HardDeepDive; // 0x08(0x08)
};

// ScriptStruct FSD.ObjectiveMissionIcon
// Size: 0x18 (Inherited: 0x00)
struct FObjectiveMissionIcon {
	struct UTexture2D* Texture; // 0x00(0x08)
	struct FLinearColor Tint; // 0x08(0x10)
};

// ScriptStruct FSD.MissionShouts
// Size: 0x38 (Inherited: 0x00)
struct FMissionShouts {
	struct UDialogDataAsset* AfterDropPodExit; // 0x00(0x08)
	struct UDialogDataAsset* OnExitPodDescending; // 0x08(0x08)
	struct UDialogDataAsset* OnExitPodArrived; // 0x10(0x08)
	struct UDialogDataAsset* OnCompletion; // 0x18(0x08)
	struct UDialogDataAsset* OnDeepDiveExitPodDescending; // 0x20(0x08)
	struct UDialogDataAsset* OnDeepDiveObjectiveCompletion; // 0x28(0x08)
	struct UDialogDataAsset* OnDeepDiveAllReturnObjectivesCompleted; // 0x30(0x08)
};

// ScriptStruct FSD.AfflictionEntriesArray
// Size: 0x120 (Inherited: 0x108)
struct FAfflictionEntriesArray : FFastArraySerializer {
	struct TArray<struct FAfflictionEntry> Items; // 0x108(0x10)
	struct UPawnAfflictionComponent* Owner; // 0x118(0x08)
};

// ScriptStruct FSD.AfflictionEntry
// Size: 0x18 (Inherited: 0x0c)
struct FAfflictionEntry : FFastArraySerializerItem {
	char pad_C[0x4]; // 0x0c(0x04)
	struct UPawnAffliction* Affliction; // 0x10(0x08)
};

// ScriptStruct FSD.PawnAfflictionItem
// Size: 0x18 (Inherited: 0x00)
struct FPawnAfflictionItem {
	char pad_0[0x8]; // 0x00(0x08)
	struct TArray<struct UAfflictionEffect*> Afflictions; // 0x08(0x10)
};

// ScriptStruct FSD.TrackBuilderPoint
// Size: 0x28 (Inherited: 0x00)
struct FTrackBuilderPoint {
	enum class ETrackBuildPlacementState PlacementState; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector_NetQuantize Location; // 0x04(0x0c)
	struct FVector_NetQuantize EulerRotation; // 0x10(0x0c)
	bool bPointValid; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	struct TWeakObjectPtr<struct UTrackBuilderConnectPoint> ConnectPoint; // 0x20(0x08)
};

// ScriptStruct FSD.MixerAnnouncement
// Size: 0x28 (Inherited: 0x00)
struct FMixerAnnouncement {
	struct FString Username; // 0x00(0x10)
	struct FText Text; // 0x10(0x18)
};

// ScriptStruct FSD.HUDVisibilityRegisteredWidget
// Size: 0x0c (Inherited: 0x00)
struct FHUDVisibilityRegisteredWidget {
	struct TWeakObjectPtr<struct UWidget> Widget; // 0x00(0x08)
	char pad_8[0x4]; // 0x08(0x04)
};

// ScriptStruct FSD.YesNoPromptSettings
// Size: 0x40 (Inherited: 0x00)
struct FYesNoPromptSettings {
	struct UYesNoPromptWidget* WidgetClass; // 0x00(0x08)
	int32_t ZOrder; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FText Title; // 0x10(0x18)
	struct FText Message; // 0x28(0x18)
};

// ScriptStruct FSD.ItemLoadoutAnimations
// Size: 0x18 (Inherited: 0x00)
struct FItemLoadoutAnimations {
	struct UAnimMontage* Loadout; // 0x00(0x08)
	struct TArray<struct UAnimSequence*> Loadout_IdleBreaks; // 0x08(0x10)
};

// ScriptStruct FSD.AudioWithCooldown
// Size: 0x10 (Inherited: 0x00)
struct FAudioWithCooldown {
	struct USoundCue* Audio; // 0x00(0x08)
	float CoolDown; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct FSD.RecoilSettings
// Size: 0x28 (Inherited: 0x00)
struct FRecoilSettings {
	struct FRandRange RecoilRoll; // 0x00(0x08)
	struct FRandRange RecoilPitch; // 0x08(0x08)
	struct FRandRange RecoilYaw; // 0x10(0x08)
	bool CanRecoilDown; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float SpringStiffness; // 0x1c(0x04)
	float CriticalDampening; // 0x20(0x04)
	float Mass; // 0x24(0x04)
};

// ScriptStruct FSD.RandRange
// Size: 0x08 (Inherited: 0x00)
struct FRandRange {
	float Min; // 0x00(0x04)
	float Max; // 0x04(0x04)
};

// ScriptStruct FSD.TracerData
// Size: 0x30 (Inherited: 0x00)
struct FTracerData {
	struct UFXSystemAsset* MainParticle; // 0x00(0x08)
	struct UFXSystemAsset* TrailParticle; // 0x08(0x08)
	float Speed; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct USoundCue* WhizbySound; // 0x18(0x08)
	float WhizBySoundCooldown; // 0x20(0x04)
	float Offset; // 0x24(0x04)
	float MinDistance; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct FSD.ItemAnimationItem
// Size: 0x18 (Inherited: 0x00)
struct FItemAnimationItem {
	struct UAnimMontage* FP_CharacterMontage; // 0x00(0x08)
	struct UAnimMontage* TP_CharacterMontage; // 0x08(0x08)
	struct UAnimMontage* ItemMontage; // 0x10(0x08)
};

// ScriptStruct FSD.HackingUsableState
// Size: 0x14 (Inherited: 0x00)
struct FHackingUsableState {
	bool bIsHacked; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct TWeakObjectPtr<struct AHackingToolItem> BeingHackedByItem; // 0x04(0x08)
	struct TWeakObjectPtr<struct APlayerCharacter> HackedBy; // 0x0c(0x08)
};

// ScriptStruct FSD.LockCounter
// Size: 0x0c (Inherited: 0x00)
struct FLockCounter {
	int32_t LockCount; // 0x00(0x04)
	struct TWeakObjectPtr<struct AActor> LockedActor; // 0x04(0x08)
};

// ScriptStruct FSD.ProjectileImpact
// Size: 0x38 (Inherited: 0x00)
struct FProjectileImpact {
	struct FVector_NetQuantize Location; // 0x00(0x0c)
	struct FVector_NetQuantizeNormal Normal; // 0x0c(0x0c)
	struct TWeakObjectPtr<struct AActor> Actor; // 0x18(0x08)
	struct TWeakObjectPtr<struct UPrimitiveComponent> Component; // 0x20(0x08)
	struct UPhysicalMaterial* PhysMat; // 0x28(0x08)
	int32_t BoneIndex; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct FSD.ProjectileState
// Size: 0x28 (Inherited: 0x00)
struct FProjectileState {
	struct FVector_NetQuantize Velocity; // 0x00(0x0c)
	struct FVector_NetQuantize Location; // 0x0c(0x0c)
	struct USceneComponent* HomingTargetComponent; // 0x18(0x08)
	char IsSimulating : 1; // 0x20(0x01)
	char IsBouncy : 1; // 0x20(0x01)
	char IsHoming : 1; // 0x20(0x01)
	char IsPenetrating : 1; // 0x20(0x01)
	char pad_20_4 : 4; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct FSD.ScaledEffect
// Size: 0x10 (Inherited: 0x00)
struct FScaledEffect {
	struct UFXSystemAsset* ParticleSystem; // 0x00(0x08)
	float Scale; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct FSD.SentryGunMuzzleSetup
// Size: 0x10 (Inherited: 0x00)
struct FSentryGunMuzzleSetup {
	struct FName SocketName; // 0x00(0x08)
	struct UAnimMontage* FireMontage; // 0x08(0x08)
};

// ScriptStruct FSD.BlueprintFriend
// Size: 0x38 (Inherited: 0x00)
struct FBlueprintFriend {
	struct FString DisplayName; // 0x00(0x10)
	struct FString RealName; // 0x10(0x10)
	enum class EFriendOnlineStatusEnum OnlineStatus; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct FString UniqueNetId; // 0x28(0x10)
};

// ScriptStruct FSD.SizeBoxSettings
// Size: 0x20 (Inherited: 0x00)
struct FSizeBoxSettings {
	float WidthOverride; // 0x00(0x04)
	float HeightOverride; // 0x04(0x04)
	float MinDesiredWidth; // 0x08(0x04)
	float MinDesiredHeight; // 0x0c(0x04)
	float MaxDesiredWidth; // 0x10(0x04)
	float MaxDesiredHeight; // 0x14(0x04)
	float MinAspectRatio; // 0x18(0x04)
	float MaxAspectRatio; // 0x1c(0x04)
};

// ScriptStruct FSD.WidgetAnimationSettings
// Size: 0x08 (Inherited: 0x00)
struct FWidgetAnimationSettings {
	float PlaybackSpeed; // 0x00(0x04)
	enum class EUMGSequencePlayMode PlayMode; // 0x04(0x01)
	bool bRestoreState; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
};

// ScriptStruct FSD.TextCounterEntry
// Size: 0x28 (Inherited: 0x00)
struct FTextCounterEntry {
	struct UTextBlock* TextBlock; // 0x00(0x08)
	struct FText Format; // 0x08(0x18)
	int32_t Value; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct FSD.GameActivitySubTask
// Size: 0x10 (Inherited: 0x00)
struct FGameActivitySubTask {
	struct FString SubActivityId; // 0x00(0x10)
};

// ScriptStruct FSD.FrozenAfflictionItem
// Size: 0x18 (Inherited: 0x00)
struct FFrozenAfflictionItem {
	struct FName BoneName; // 0x00(0x08)
	struct FRandRange MeshScale; // 0x08(0x08)
	enum class EFrozenBitsSize FrozenBitsSize; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float ChanceToSpawn; // 0x14(0x04)
};

// ScriptStruct FSD.AttachMeshesAfflictionItem
// Size: 0x18 (Inherited: 0x00)
struct FAttachMeshesAfflictionItem {
	struct FName BoneName; // 0x00(0x08)
	float Scale; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UStaticMesh* Mesh; // 0x10(0x08)
};

// ScriptStruct FSD.PushPoint
// Size: 0x10 (Inherited: 0x00)
struct FPushPoint {
	struct USphereComponent* collider; // 0x00(0x08)
	struct APlayerCharacter* Character; // 0x08(0x08)
};

// ScriptStruct FSD.CompositeArmorItem
// Size: 0x10 (Inherited: 0x00)
struct FCompositeArmorItem {
	struct UPrimitiveComponent* Component; // 0x00(0x08)
	float Health; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct FSD.ArmorHealthItem
// Size: 0x18 (Inherited: 0x00)
struct FArmorHealthItem {
	char MaterialIndex; // 0x00(0x01)
	bool HealthIsBreakPercentage; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct TArray<struct FArmorHealthSubItem> ArmorBones; // 0x08(0x10)
};

// ScriptStruct FSD.ArmorHealthSubItem
// Size: 0x28 (Inherited: 0x00)
struct FArmorHealthSubItem {
	float Health; // 0x00(0x04)
	struct FName BoneName; // 0x04(0x08)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FName> AdditionalBones; // 0x10(0x10)
	struct FName OptionalFXSocket; // 0x20(0x08)
};

// ScriptStruct FSD.DestructableBodypartItem
// Size: 0x18 (Inherited: 0x00)
struct FDestructableBodypartItem {
	char MaterialIndex; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FName> ArmorBones; // 0x08(0x10)
};

// ScriptStruct FSD.AttackCooldown
// Size: 0x10 (Inherited: 0x00)
struct FAttackCooldown {
	struct FName AttackName; // 0x00(0x08)
	float CoolDown; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct FSD.AttackerInfo
// Size: 0x10 (Inherited: 0x00)
struct FAttackerInfo {
	struct TWeakObjectPtr<struct AActor> Attacker; // 0x00(0x08)
	int32_t PositionIndex; // 0x08(0x04)
	float AttackerRadius; // 0x0c(0x04)
};

// ScriptStruct FSD.BiomeEnemyEntry
// Size: 0x10 (Inherited: 0x00)
struct FBiomeEnemyEntry {
	struct UEnemyDescriptor* enemy; // 0x00(0x08)
	bool IsDistruptive; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct FSD.BiomeNoiseItem
// Size: 0x38 (Inherited: 0x00)
struct FBiomeNoiseItem {
	struct UFloodFillSettings* CeilingNoise; // 0x00(0x08)
	struct UDetailNoise* CeilingDetailNoise; // 0x08(0x08)
	struct UFloodFillSettings* WallNoise; // 0x10(0x08)
	struct UDetailNoise* WallDetailNoise; // 0x18(0x08)
	struct UFloodFillSettings* FloorNoise; // 0x20(0x08)
	struct UDetailNoise* FloorDetailNoise; // 0x28(0x08)
	float Weight; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct FSD.BoscoLightSetting
// Size: 0x0c (Inherited: 0x00)
struct FBoscoLightSetting {
	struct FColor Color; // 0x00(0x04)
	float Intensity; // 0x04(0x04)
	float Radius; // 0x08(0x04)
};

// ScriptStruct FSD.BossFight
// Size: 0x18 (Inherited: 0x00)
struct FBossFight {
	struct TWeakObjectPtr<struct AActor> BossActor; // 0x00(0x08)
	struct TWeakObjectPtr<struct UEnemyComponent> EnemyComponent; // 0x08(0x08)
	struct TWeakObjectPtr<struct UEnemyHealthComponent> HealthComponent; // 0x10(0x08)
};

// ScriptStruct FSD.LevelGenerationCarver
// Size: 0x70 (Inherited: 0x00)
struct FLevelGenerationCarver {
	struct FMatrixWithExactSync Transform; // 0x00(0x40)
	struct USTLMeshCarver* MeshCarver; // 0x40(0x08)
	struct UStaticMesh* ConvexCarver; // 0x48(0x08)
	struct UStaticMeshCarver* StaticMeshCarver; // 0x50(0x08)
	float ConvexExpensiveNoise; // 0x58(0x04)
	enum class CarveOptionsCellSize CarveCellSize; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
	struct UTerrainMaterial* TerrainMaterial; // 0x60(0x08)
	enum class ECarveFilterType Filter; // 0x68(0x01)
	bool ToBeDiscarded; // 0x69(0x01)
	char pad_6A[0x6]; // 0x6a(0x06)
};

// ScriptStruct FSD.CustomUsable
// Size: 0x10 (Inherited: 0x00)
struct FCustomUsable {
	struct UUsableComponentBase* Usable; // 0x00(0x08)
	enum class ECustomUsableType TerminationType; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct FSD.UsableRepliactional
// Size: 0x10 (Inherited: 0x00)
struct FUsableRepliactional {
	struct UUsableComponentBase* UsableComp; // 0x00(0x08)
	char Key; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct FSD.ClaimableRewardView
// Size: 0x70 (Inherited: 0x00)
struct FClaimableRewardView {
	struct UDialogDataAsset* MissionControlSpeak; // 0x00(0x08)
	SoftClassProperty BackgroundWidgetClass; // 0x08(0x28)
	struct TSoftObjectPtr<struct USoundCue> FanfareAudio; // 0x30(0x28)
	float MoveInRewardsDelay; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct TArray<struct FClaimableRewardEntry> RewardDisplays; // 0x60(0x10)
};

// ScriptStruct FSD.ClaimableRewardArray
// Size: 0x10 (Inherited: 0x00)
struct FClaimableRewardArray {
	struct TArray<struct FClaimableRewardEntry> Entries; // 0x00(0x10)
};

// ScriptStruct FSD.CloudSaveRequest
// Size: 0x48 (Inherited: 0x00)
struct FCloudSaveRequest {
	struct FString SteamTicket; // 0x00(0x10)
	struct FString PSTicket; // 0x10(0x10)
	int32_t PlayerRank; // 0x20(0x04)
	int32_t SaveToDiskCounter; // 0x24(0x04)
	struct FString RawData; // 0x28(0x10)
	struct FString Branch; // 0x38(0x10)
};

// ScriptStruct FSD.CloudLoadRequest
// Size: 0x38 (Inherited: 0x00)
struct FCloudLoadRequest {
	struct FString SteamTicket; // 0x00(0x10)
	struct FString PSTicket; // 0x10(0x10)
	struct FString Branch; // 0x20(0x10)
	int32_t Offset; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct FSD.ExampleStruct
// Size: 0x04 (Inherited: 0x00)
struct FExampleStruct {
	float Field; // 0x00(0x04)
};

// ScriptStruct FSD.MissionShoutQueueItem
// Size: 0x48 (Inherited: 0x00)
struct FMissionShoutQueueItem {
	struct TSoftObjectPtr<struct USoundBase> AudioPtr; // 0x00(0x28)
	struct FText Text; // 0x28(0x18)
	struct USoundBase* LoadedAudio; // 0x40(0x08)
};

// ScriptStruct FSD.ActiveOutline
// Size: 0x0c (Inherited: 0x00)
struct FActiveOutline {
	char pad_0[0xc]; // 0x00(0x0c)
};

// ScriptStruct FSD.CharacterShouts
// Size: 0xb8 (Inherited: 0x00)
struct FCharacterShouts {
	struct UDialogDataAsset* Attention; // 0x00(0x08)
	struct UDialogDataAsset* Follow; // 0x08(0x08)
	struct UDialogDataAsset* standingDown; // 0x10(0x08)
	struct UDialogDataAsset* Downed; // 0x18(0x08)
	struct UDialogDataAsset* RequestRevive; // 0x20(0x08)
	struct UDialogDataAsset* Revived; // 0x28(0x08)
	struct UDialogDataAsset* Resupply; // 0x30(0x08)
	struct UDialogDataAsset* FriendlyFire; // 0x38(0x08)
	struct UDialogDataAsset* KillCry; // 0x40(0x08)
	struct UDialogDataAsset* Dead; // 0x48(0x08)
	struct UDialogDataAsset* Cheating; // 0x50(0x08)
	struct UDialogDataAsset* ResourceFull; // 0x58(0x08)
	struct UDialogDataAsset* ResourceFullNoDonkey; // 0x60(0x08)
	struct UDialogDataAsset* CallDonkey; // 0x68(0x08)
	struct UDialogDataAsset* CallDonkey_NotInMission; // 0x70(0x08)
	struct UDialogDataAsset* Depositing; // 0x78(0x08)
	struct UDialogDataAsset* DepositingNoDonkey; // 0x80(0x08)
	struct UDialogDataAsset* OutOfAmmo; // 0x88(0x08)
	struct UDialogDataAsset* Reloading; // 0x90(0x08)
	struct UDialogDataAsset* CharacterSelected; // 0x98(0x08)
	struct UDialogDataAsset* UpgradeBought; // 0xa0(0x08)
	struct UDialogDataAsset* WaitingInDropPod; // 0xa8(0x08)
	struct UDialogDataAsset* Carrying; // 0xb0(0x08)
};

// ScriptStruct FSD.CommunityReward
// Size: 0x10 (Inherited: 0x00)
struct FCommunityReward {
	struct UResourceData* Resource; // 0x00(0x08)
	float Value; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct FSD.CommunityFactionData
// Size: 0x38 (Inherited: 0x00)
struct FCommunityFactionData {
	bool IsValid; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FString> Goals; // 0x08(0x10)
	struct TArray<float> Values; // 0x18(0x10)
	struct TArray<int32_t> Members; // 0x28(0x10)
};

// ScriptStruct FSD.CommunityGoalStateData
// Size: 0x10 (Inherited: 0x00)
struct FCommunityGoalStateData {
	bool isGoal; // 0x00(0x01)
	bool isRecruitment; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float TimeLeftSeconds; // 0x04(0x04)
	int32_t CurrentGoalPeriodID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct FSD.CommunityRewardNotification
// Size: 0x40 (Inherited: 0x00)
struct FCommunityRewardNotification {
	struct FText Text; // 0x00(0x18)
	struct UTexture2D* Icon; // 0x18(0x08)
	struct FLinearColor IconColor; // 0x20(0x10)
	struct FString ID; // 0x30(0x10)
};

// ScriptStruct FSD.CommunityFactionResponse
// Size: 0x30 (Inherited: 0x00)
struct FCommunityFactionResponse {
	struct TArray<struct FString> Goals; // 0x00(0x10)
	struct TArray<float> Values; // 0x10(0x10)
	struct TArray<float> Members; // 0x20(0x10)
};

// ScriptStruct FSD.CommunityGoalStateResponse
// Size: 0x10 (Inherited: 0x00)
struct FCommunityGoalStateResponse {
	bool isGoal; // 0x00(0x01)
	bool isRecruitment; // 0x01(0x01)
	bool FreeBeers; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	float TimeLeftSeconds; // 0x04(0x04)
	int32_t LastUpdateGoalsID; // 0x08(0x04)
	int32_t CurrentGoalPeriodID; // 0x0c(0x04)
};

// ScriptStruct FSD.CommunityGoalTierResponse
// Size: 0x28 (Inherited: 0x00)
struct FCommunityGoalTierResponse {
	bool Found; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString GoalID; // 0x08(0x10)
	float FirstTierGoal; // 0x18(0x04)
	float SecondTierGoal; // 0x1c(0x04)
	float ThirdTierGoal; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct FSD.CommunityGoalIncrementResponse
// Size: 0x01 (Inherited: 0x00)
struct FCommunityGoalIncrementResponse {
	bool success; // 0x00(0x01)
};

// ScriptStruct FSD.CommunityGoalTierDataRequest
// Size: 0x10 (Inherited: 0x00)
struct FCommunityGoalTierDataRequest {
	struct FString GoalID; // 0x00(0x10)
};

// ScriptStruct FSD.CommunityGoalRequest
// Size: 0x38 (Inherited: 0x00)
struct FCommunityGoalRequest {
	struct FString GoalID; // 0x00(0x10)
	int32_t FactionID; // 0x10(0x04)
	float Value; // 0x14(0x04)
	struct FString SteamTicket; // 0x18(0x10)
	struct FString Branch; // 0x28(0x10)
};

// ScriptStruct FSD.ActionIconMapping
// Size: 0x28 (Inherited: 0x00)
struct FActionIconMapping {
	struct FKey ActionKey; // 0x00(0x18)
	struct UTexture2D* Icon; // 0x18(0x08)
	bool DoNotTint; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct FSD.PricingTierEntry
// Size: 0x28 (Inherited: 0x08)
struct FPricingTierEntry : FTableRowBase {
	struct FIRandRange CreditCost; // 0x08(0x08)
	struct FIRandRange Material1; // 0x10(0x08)
	struct FIRandRange Material2; // 0x18(0x08)
	struct FIRandRange Material3; // 0x20(0x08)
};

// ScriptStruct FSD.IRandRange
// Size: 0x08 (Inherited: 0x00)
struct FIRandRange {
	int32_t Min; // 0x00(0x04)
	int32_t Max; // 0x04(0x04)
};

// ScriptStruct FSD.CustomKeySetting
// Size: 0x38 (Inherited: 0x00)
struct FCustomKeySetting {
	struct FName SaveID; // 0x00(0x08)
	struct FText Description; // 0x08(0x18)
	struct TArray<struct FName> ActionNames; // 0x20(0x10)
	enum class EKeyBindingAxis ActionAxis; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct FSD.DailyDeal
// Size: 0x18 (Inherited: 0x00)
struct FDailyDeal {
	struct UResourceData* Resource; // 0x00(0x08)
	enum class EDealType DealType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t ResourceAmount; // 0x0c(0x04)
	int32_t Credits; // 0x10(0x04)
	float ChangePercent; // 0x14(0x04)
};

// ScriptStruct FSD.DailyDealSetup
// Size: 0x28 (Inherited: 0x00)
struct FDailyDealSetup {
	struct UResourceData* Resource; // 0x00(0x08)
	enum class EDealType DealType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	struct FIntPoint UnitsRange; // 0x0c(0x08)
	struct FVector2D DiscountRangePercent; // 0x14(0x08)
	struct FVector2D ExtraValueRangePercent; // 0x1c(0x08)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct FSD.DamageSubsystemItem
// Size: 0x20 (Inherited: 0x00)
struct FDamageSubsystemItem {
	struct UDamageComponent* DamageComponent; // 0x00(0x08)
	char pad_8[0x18]; // 0x08(0x18)
};

// ScriptStruct FSD.DamageModifierItem
// Size: 0x0c (Inherited: 0x00)
struct FDamageModifierItem {
	enum class EDamageUpgrade DamageUpgrade; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Additive; // 0x04(0x04)
	float Multiplicative; // 0x08(0x04)
};

// ScriptStruct FSD.DanceItem
// Size: 0x10 (Inherited: 0x00)
struct FDanceItem {
	struct UAnimSequence* DanceMove; // 0x00(0x08)
	struct UAnimSequence* DanceMoveWithBeer; // 0x08(0x08)
};

// ScriptStruct FSD.CellNoise
// Size: 0x2c (Inherited: 0x00)
struct FCellNoise {
	int32_t Seed; // 0x00(0x04)
	struct FVector CellSize; // 0x04(0x0c)
	int32_t NumValues; // 0x10(0x04)
	int32_t MinCellValue; // 0x14(0x04)
	int32_t MaxCellValue; // 0x18(0x04)
	char pad_1C[0x10]; // 0x1c(0x10)
};

// ScriptStruct FSD.DebrisCellNoiseParameters
// Size: 0x10 (Inherited: 0x00)
struct FDebrisCellNoiseParameters {
	struct UDebrisCellNoise* Noise; // 0x00(0x08)
	int32_t MinCellValue; // 0x08(0x04)
	int32_t MaxCellValue; // 0x0c(0x04)
};

// ScriptStruct FSD.UDebrisCarveMesh
// Size: 0x10 (Inherited: 0x00)
struct FUDebrisCarveMesh {
	struct UStaticMesh* Mesh; // 0x00(0x08)
	float Probablity; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct FSD.DebrisItemActorItem
// Size: 0x10 (Inherited: 0x00)
struct FDebrisItemActorItem {
	struct AActor* Actor; // 0x00(0x08)
	float Probability; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct FSD.DebrisStaticMesh
// Size: 0x48 (Inherited: 0x00)
struct FDebrisStaticMesh {
	struct UStaticMesh* Mesh; // 0x00(0x08)
	struct UMaterialInterface* Material; // 0x08(0x08)
	enum class EDebrisMeshCollisionProfile CollisionProfile; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float Probablity; // 0x14(0x04)
	struct USoundCue* DestroyedSound; // 0x18(0x08)
	struct UParticleSystem* DestroyedParticles; // 0x20(0x08)
	struct FDecalData Decal; // 0x28(0x18)
	bool Fragile; // 0x40(0x01)
	enum class EDebrisMeshShadows CastShadows; // 0x41(0x01)
	bool Durable; // 0x42(0x01)
	bool SpawnWhenCarving; // 0x43(0x01)
	bool OnlySpawnWhenCarving; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
};

// ScriptStruct FSD.DecalData
// Size: 0x18 (Inherited: 0x00)
struct FDecalData {
	struct UMaterialInterface* DecalMaterial; // 0x00(0x08)
	float DecalSize; // 0x08(0x04)
	float DecalDepth; // 0x0c(0x04)
	float LifeSpan; // 0x10(0x04)
	float FadeDuration; // 0x14(0x04)
};

// ScriptStruct FSD.UDebrisStaticCarveMesh
// Size: 0x10 (Inherited: 0x00)
struct FUDebrisStaticCarveMesh {
	struct UStaticMeshCarver* Mesh; // 0x00(0x08)
	float Probablity; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct FSD.DebrisCapsule
// Size: 0x20 (Inherited: 0x00)
struct FDebrisCapsule {
	int32_t ID; // 0x00(0x04)
	struct FVector Start; // 0x04(0x0c)
	struct FVector End; // 0x10(0x0c)
	float Radius; // 0x1c(0x04)
};

// ScriptStruct FSD.DebrisInfluence
// Size: 0x10 (Inherited: 0x00)
struct FDebrisInfluence {
	struct UObject* CaveInfluencer; // 0x00(0x08)
	float Radius; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct FSD.DebrisWhenCarving
// Size: 0x30 (Inherited: 0x00)
struct FDebrisWhenCarving {
	char pad_0[0x28]; // 0x00(0x28)
	struct UDebrisInstances* Debris; // 0x28(0x08)
};

// ScriptStruct FSD.CSGRaycastHitInfo
// Size: 0x1c (Inherited: 0x00)
struct FCSGRaycastHitInfo {
	struct FVector Position; // 0x00(0x0c)
	struct FVector Normal; // 0x0c(0x0c)
	int32_t Material; // 0x18(0x04)
};

// ScriptStruct FSD.DeepDiveLoaderSequence
// Size: 0x28 (Inherited: 0x00)
struct FDeepDiveLoaderSequence {
	struct TSoftObjectPtr<struct ULevelSequence> LevelSequence; // 0x00(0x28)
};

// ScriptStruct FSD.DeepDiveTemplateItem
// Size: 0x18 (Inherited: 0x00)
struct FDeepDiveTemplateItem {
	struct UMissionTemplate* mission; // 0x00(0x08)
	struct TArray<struct UMissionDuration*> AllowedDurations; // 0x08(0x10)
};

// ScriptStruct FSD.DeepDiveRewardItem
// Size: 0x10 (Inherited: 0x00)
struct FDeepDiveRewardItem {
	struct USchematic* Schematic; // 0x00(0x08)
	int32_t Stage; // 0x08(0x04)
	bool WasAlreadyGiven; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct FSD.HandleRotationOptions
// Size: 0x01 (Inherited: 0x00)
struct FHandleRotationOptions {
	bool HandlePitch; // 0x00(0x01)
};

// ScriptStruct FSD.DeepRepPath
// Size: 0xd0 (Inherited: 0x00)
struct FDeepRepPath {
	struct FVector PathBase; // 0x00(0x0c)
	char PathLength; // 0x0c(0x01)
	enum class EDeepMovementState State; // 0x0d(0x01)
	char StateBits; // 0x0e(0x01)
	char pad_F[0x1]; // 0x0f(0x01)
	struct FVector PathOffsets[0x10]; // 0x10(0xc0)
};

// ScriptStruct FSD.TerrainLateJoinIteration
// Size: 0x2c (Inherited: 0x00)
struct FTerrainLateJoinIteration {
	int32_t DrillsIndex; // 0x00(0x04)
	int32_t MeltsIndex; // 0x04(0x04)
	int32_t PickAxeIndex; // 0x08(0x04)
	int32_t FloatingIndex; // 0x0c(0x04)
	int32_t ColliderCarvesIndex; // 0x10(0x04)
	int32_t MeshCarvesIndex; // 0x14(0x04)
	int32_t ExplosionsIndex; // 0x18(0x04)
	int32_t SplineIndex; // 0x1c(0x04)
	int32_t LateJoinIndex; // 0x20(0x04)
	int32_t DebrisIndex; // 0x24(0x04)
	int32_t ChunkVisibilityIndex; // 0x28(0x04)
};

// ScriptStruct FSD.TerrainLateJoinData
// Size: 0xa8 (Inherited: 0x00)
struct FTerrainLateJoinData {
	struct TArray<struct FGrenadeExplodeOperationData> explosions; // 0x00(0x10)
	struct TArray<struct FCarveWithColliderOperationData> colliderCarves; // 0x10(0x10)
	struct TArray<struct FCarveWithSTLMeshOperationData> meshCarves; // 0x20(0x10)
	struct TArray<struct FPickaxeDigOperationData> pickAxe; // 0x30(0x10)
	struct TArray<struct FRemoveFloatingIslandOperationData> RemoveFloating; // 0x40(0x10)
	struct TArray<struct FDrillOperationData> drills; // 0x50(0x10)
	struct TArray<struct FMeltOperationData> melts; // 0x60(0x10)
	struct TArray<struct FSplineSegmentCarveOperationData> splines; // 0x70(0x10)
	struct TArray<int32_t> DebrisInstanceComponentPairs; // 0x80(0x10)
	struct TArray<uint32_t> visibleChunks; // 0x90(0x10)
	int32_t OperationCount; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
};

// ScriptStruct FSD.DialogStruct
// Size: 0x50 (Inherited: 0x00)
struct FDialogStruct {
	bool Enabled; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FText Text; // 0x08(0x18)
	struct TSoftObjectPtr<struct USoundBase> Audio; // 0x20(0x28)
	enum class EDialogRestriction Restriction; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// ScriptStruct FSD.VeteranComposition
// Size: 0x20 (Inherited: 0x00)
struct FVeteranComposition {
	struct FRandFloatInterval Normal; // 0x00(0x10)
	struct FRandFloatInterval Large; // 0x10(0x10)
};

// ScriptStruct FSD.RandFloatInterval
// Size: 0x10 (Inherited: 0x00)
struct FRandFloatInterval {
	struct TArray<struct FRandFloatIntervalItem> Intervals; // 0x00(0x10)
};

// ScriptStruct FSD.RandFloatIntervalItem
// Size: 0x0c (Inherited: 0x00)
struct FRandFloatIntervalItem {
	float Weight; // 0x00(0x04)
	struct FRandRange range; // 0x04(0x08)
};

// ScriptStruct FSD.DiscordFSDRichPresence
// Size: 0x80 (Inherited: 0x00)
struct FDiscordFSDRichPresence {
	struct FString State; // 0x00(0x10)
	struct FString details; // 0x10(0x10)
	struct FString matchSecret; // 0x20(0x10)
	struct FString joinSecret; // 0x30(0x10)
	struct FString partyId; // 0x40(0x10)
	struct FString smallImageText; // 0x50(0x10)
	struct FString LargeImageText; // 0x60(0x10)
	int32_t startTimestamp; // 0x70(0x04)
	int32_t partySize; // 0x74(0x04)
	enum class EDiscordBiomeType BiomeType; // 0x78(0x01)
	enum class EDiscordMissionType MissionType; // 0x79(0x01)
	bool bIsPureSolo; // 0x7a(0x01)
	char pad_7B[0x5]; // 0x7b(0x05)
};

// ScriptStruct FSD.DiscordEoMData
// Size: 0x20 (Inherited: 0x00)
struct FDiscordEoMData {
	struct FString nick; // 0x00(0x10)
	struct FString UserId; // 0x10(0x10)
};

// ScriptStruct FSD.DiscordServerInviteData
// Size: 0x78 (Inherited: 0x00)
struct FDiscordServerInviteData {
	struct FString code; // 0x00(0x10)
	struct FString serverID; // 0x10(0x10)
	struct FString serverDescription; // 0x20(0x10)
	struct FString serverName; // 0x30(0x10)
	int32_t presenceCount; // 0x40(0x04)
	int32_t memberCount; // 0x44(0x04)
	struct FString iconKey; // 0x48(0x10)
	struct FString bannerKey; // 0x58(0x10)
	struct FString splashKey; // 0x68(0x10)
};

// ScriptStruct FSD.DiscordRewardNotification
// Size: 0x40 (Inherited: 0x00)
struct FDiscordRewardNotification {
	struct FText Text; // 0x00(0x18)
	struct UTexture2D* Icon; // 0x18(0x08)
	struct FLinearColor IconColor; // 0x20(0x10)
	struct FString ID; // 0x30(0x10)
};

// ScriptStruct FSD.DoubleDrillDamageItem
// Size: 0x38 (Inherited: 0x00)
struct FDoubleDrillDamageItem {
	struct TWeakObjectPtr<struct UPrimitiveComponent> Target; // 0x00(0x08)
	struct FVector_NetQuantize Location; // 0x08(0x0c)
	struct FVector_NetQuantizeNormal Normal; // 0x14(0x0c)
	struct UFSDPhysicalMaterial* Material; // 0x20(0x08)
	struct FName BoneName; // 0x28(0x08)
	char BoneIndex; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct FSD.DeathIntroSettings
// Size: 0x24 (Inherited: 0x00)
struct FDeathIntroSettings {
	char pad_0[0x4]; // 0x00(0x04)
	float FirstPersonDuration; // 0x04(0x04)
	float FadeToBlackDelay; // 0x08(0x04)
	float FadeToBlackDuration; // 0x0c(0x04)
	float FadeFromBlackDelay; // 0x10(0x04)
	float FadeFromBlackDuration; // 0x14(0x04)
	float ZoomOutDuration; // 0x18(0x04)
	float ZoomOutStartDistance; // 0x1c(0x04)
	char pad_20[0x4]; // 0x20(0x04)
};

// ScriptStruct FSD.BarleySpawnItem
// Size: 0x10 (Inherited: 0x00)
struct FBarleySpawnItem {
	struct UResourceData* Resource; // 0x00(0x08)
	float Weight; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct FSD.EliminationDescriptors
// Size: 0x10 (Inherited: 0x00)
struct FEliminationDescriptors {
	struct TArray<struct UEnemyDescriptor*> Descriptors; // 0x00(0x10)
};

// ScriptStruct FSD.EliminationTarget
// Size: 0x10 (Inherited: 0x00)
struct FEliminationTarget {
	struct TArray<struct AFSDPawn*> Targets; // 0x00(0x10)
};

// ScriptStruct FSD.EncounterManagerItem
// Size: 0x40 (Inherited: 0x00)
struct FEncounterManagerItem {
	struct TArray<struct FManagedEncounterItem> ManagedEcnounterItems; // 0x00(0x10)
	struct TArray<struct FPrePlacedEncounterItem> PrePlacedEncounterItems; // 0x10(0x10)
	int32_t ID; // 0x20(0x04)
	bool IsRoom; // 0x24(0x01)
	char pad_25[0x7]; // 0x25(0x07)
	struct FDelegate Callback; // 0x2c(0x10)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct FSD.PrePlacedEncounterItem
// Size: 0x50 (Inherited: 0x00)
struct FPrePlacedEncounterItem {
	struct UEnemyDescriptor* descriptor; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform Location; // 0x10(0x30)
	struct AEncounterActor* EncounterActor; // 0x40(0x08)
	char pad_48[0x8]; // 0x48(0x08)
};

// ScriptStruct FSD.ManagedEncounterItem
// Size: 0x10 (Inherited: 0x00)
struct FManagedEncounterItem {
	struct UEnemyDescriptor* descriptor; // 0x00(0x08)
	int32_t Amount; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct FSD.EncounterSpecialItem
// Size: 0x10 (Inherited: 0x00)
struct FEncounterSpecialItem {
	struct UEnemyDescriptor* enemy; // 0x00(0x08)
	float BaseChance; // 0x08(0x04)
	bool CanSpawnInDeepDive; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct FSD.EncounterRareCritterItem
// Size: 0x10 (Inherited: 0x00)
struct FEncounterRareCritterItem {
	struct URareCritterDescriptor* Critter; // 0x00(0x08)
	float Chance; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct FSD.GliderAnimSync
// Size: 0x20 (Inherited: 0x00)
struct FGliderAnimSync {
	float Time; // 0x00(0x04)
	float AnimAlphaSync; // 0x04(0x04)
	struct FVector VelocityPercent; // 0x08(0x0c)
	bool DownUpBlendBool; // 0x14(0x01)
	bool RightLeftBlendBool; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
	float VerticalAddBlend; // 0x18(0x04)
	float HorizontalAddBlend; // 0x1c(0x04)
};

// ScriptStruct FSD.TestAnimInstanceProxy
// Size: 0x700 (Inherited: 0x6e0)
struct FTestAnimInstanceProxy : FAnimInstanceProxy {
	bool IsAlive; // 0x6e0(0x01)
	char pad_6E1[0x3]; // 0x6e1(0x03)
	float RandomStartPosition; // 0x6e4(0x04)
	float Speed; // 0x6e8(0x04)
	bool IsMoving; // 0x6ec(0x01)
	char pad_6ED[0x3]; // 0x6ed(0x03)
	float WalkCyclePlayRate; // 0x6f0(0x04)
	char pad_6F4[0xc]; // 0x6f4(0x0c)
};

// ScriptStruct FSD.ControlEnemyState
// Size: 0x60 (Inherited: 0x00)
struct FControlEnemyState {
	struct ADeepPathfinderCharacter* ControlledEnemy; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform InitialTargetTransform; // 0x10(0x30)
	float InitialTargetBlendTotalTime; // 0x40(0x04)
	struct FVector InitialCharacterVelocity; // 0x44(0x0c)
	struct FVector InitialEnemyVelocity; // 0x50(0x0c)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct FSD.EnemyAttackDescription
// Size: 0x20 (Inherited: 0x00)
struct FEnemyAttackDescription {
	struct FText Name; // 0x00(0x18)
	enum class EEnemyAttackType range; // 0x18(0x01)
	enum class EDamageType DamageType; // 0x19(0x01)
	char pad_1A[0x6]; // 0x1a(0x06)
};

// ScriptStruct FSD.EnemyMinersManualStats
// Size: 0x0c (Inherited: 0x00)
struct FEnemyMinersManualStats {
	int32_t Health; // 0x00(0x04)
	int32_t Damage; // 0x04(0x04)
	int32_t Speed; // 0x08(0x04)
};

// ScriptStruct FSD.EnemyGroupDescriptorItem
// Size: 0x08 (Inherited: 0x00)
struct FEnemyGroupDescriptorItem {
	struct UEnemyDescriptor* EnemyDescriptor; // 0x00(0x08)
};

// ScriptStruct FSD.EnemyGroupDescriptorSpawnItem
// Size: 0x10 (Inherited: 0x00)
struct FEnemyGroupDescriptorSpawnItem {
	struct UEnemyDescriptor* enemy; // 0x00(0x08)
	int32_t count; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct FSD.EnemyDebris
// Size: 0x18 (Inherited: 0x00)
struct FEnemyDebris {
	float InfluenceRange; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct UDebrisBase*> Debris; // 0x08(0x10)
};

// ScriptStruct FSD.EnemySpawnParamsEntry
// Size: 0x30 (Inherited: 0x08)
struct FEnemySpawnParamsEntry : FTableRowBase {
	struct FString ItemName; // 0x08(0x10)
	float DifficultyRating; // 0x18(0x04)
	int32_t MinSpawnCount; // 0x1c(0x04)
	int32_t MaxSpawnCount; // 0x20(0x04)
	float Rarity; // 0x24(0x04)
	float SpawnAmountModifier; // 0x28(0x04)
	int32_t RequiredMainCampaignProgress; // 0x2c(0x04)
};

// ScriptStruct FSD.SpawnRarityItem
// Size: 0x08 (Inherited: 0x00)
struct FSpawnRarityItem {
	float Duration; // 0x00(0x04)
	float Rarity; // 0x04(0x04)
};

// ScriptStruct FSD.SpawnEffectsArray
// Size: 0x120 (Inherited: 0x108)
struct FSpawnEffectsArray : FFastArraySerializer {
	struct TArray<struct FSpawnEffectItem> Items; // 0x108(0x10)
	char pad_118[0x8]; // 0x118(0x08)
};

// ScriptStruct FSD.SpawnEffectItem
// Size: 0x3c (Inherited: 0x0c)
struct FSpawnEffectItem : FFastArraySerializerItem {
	enum class ECreatureSize CreatureSize; // 0x0c(0x04)
	struct FVector_NetQuantize Location; // 0x10(0x0c)
	struct FRotator Rotation; // 0x1c(0x0c)
	char pad_28[0x14]; // 0x28(0x14)
};

// ScriptStruct FSD.SpawnQueueItem
// Size: 0x80 (Inherited: 0x00)
struct FSpawnQueueItem {
	SoftClassProperty EnemyClass; // 0x00(0x28)
	struct UEnemyDescriptor* enemy; // 0x28(0x08)
	struct FDelegate Callback; // 0x30(0x10)
	char pad_40[0x40]; // 0x40(0x40)
};

// ScriptStruct FSD.SpawnRarityModifierItem
// Size: 0x08 (Inherited: 0x00)
struct FSpawnRarityModifierItem {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct FSD.EnemySpawnItem
// Size: 0x10 (Inherited: 0x00)
struct FEnemySpawnItem {
	struct UEnemyDescriptor* enemy; // 0x00(0x08)
	int32_t count; // 0x08(0x04)
	float VeteranComposition; // 0x0c(0x04)
};

// ScriptStruct FSD.MUSTBEHERETOCOMPILE
// Size: 0x01 (Inherited: 0x00)
struct FMUSTBEHERETOCOMPILE {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct FSD.WaveEntry
// Size: 0x38 (Inherited: 0x00)
struct FWaveEntry {
	struct UEnemyWaveController* WaveControllerLoaded; // 0x00(0x08)
	float Weight; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	SoftClassProperty WaveController; // 0x10(0x28)
};

// ScriptStruct FSD.EscortMulePath
// Size: 0x18 (Inherited: 0x00)
struct FEscortMulePath {
	struct TArray<struct FVector> Path; // 0x00(0x10)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct FSD.EscortMuleMovementState
// Size: 0x50 (Inherited: 0x00)
struct FEscortMuleMovementState {
	struct FTransform TargetTransform; // 0x00(0x30)
	struct FVector Velocity; // 0x30(0x0c)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FQuat AngularVelocity; // 0x40(0x10)
};

// ScriptStruct FSD.EscortMuleExtractorSlot
// Size: 0x20 (Inherited: 0x00)
struct FEscortMuleExtractorSlot {
	enum class EEscortExtractorState ExtractorState; // 0x00(0x01)
	enum class EEscortExtractorState LastState; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct USceneComponent* AttachPoint; // 0x08(0x08)
	struct UInstantUsable* Usable; // 0x10(0x08)
	struct UWidgetComponent* Widget; // 0x18(0x08)
};

// ScriptStruct FSD.SubObjective
// Size: 0x30 (Inherited: 0x00)
struct FSubObjective {
	struct UDialogDataAsset* OnProgressShout; // 0x00(0x08)
	struct UDialogDataAsset* OnCompletedShout; // 0x08(0x08)
	struct FText ObjectiveText; // 0x10(0x18)
	int32_t Required; // 0x28(0x04)
	int32_t count; // 0x2c(0x04)
};

// ScriptStruct FSD.SmartSpawnEntry
// Size: 0x18 (Inherited: 0x00)
struct FSmartSpawnEntry {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct FSD.FacilityGeneratorEnounter
// Size: 0x28 (Inherited: 0x00)
struct FFacilityGeneratorEnounter {
	struct TArray<struct UEnemyDescriptor*> Enemies; // 0x00(0x10)
	float Difficulty; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FRandInterval Diversity; // 0x18(0x10)
};

// ScriptStruct FSD.RandInterval
// Size: 0x10 (Inherited: 0x00)
struct FRandInterval {
	struct TArray<struct FRandIntervalItem> Intervals; // 0x00(0x10)
};

// ScriptStruct FSD.RandIntervalItem
// Size: 0x0c (Inherited: 0x00)
struct FRandIntervalItem {
	float Weight; // 0x00(0x04)
	struct FIRandRange range; // 0x04(0x08)
};

// ScriptStruct FSD.FakeMoveState
// Size: 0x24 (Inherited: 0x00)
struct FFakeMoveState {
	struct FVector Pos1; // 0x00(0x0c)
	struct FVector Pos2; // 0x0c(0x0c)
	struct FVector Vel; // 0x18(0x0c)
};

// ScriptStruct FSD.FakeMoverState
// Size: 0x60 (Inherited: 0x00)
struct FFakeMoverState {
	float TickRate; // 0x00(0x04)
	float TickTime; // 0x04(0x04)
	struct FVector PrevPos; // 0x08(0x0c)
	struct FVector NextPos; // 0x14(0x0c)
	struct FVector PrevSurfaceNormal; // 0x20(0x0c)
	struct FVector NextSurfaceNormal; // 0x2c(0x0c)
	float AccumulatedTime; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct AActor* Target; // 0x40(0x08)
	struct FVector Velocity; // 0x48(0x0c)
	bool NearSurface; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	float SignedDistToSurface; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct FSD.FakeMoverTarget
// Size: 0x1c (Inherited: 0x00)
struct FFakeMoverTarget {
	float InfluenceDistance; // 0x00(0x04)
	float TargetDistance; // 0x04(0x04)
	float GetCloserAirAcceleration; // 0x08(0x04)
	float GetAwayAirAcceleration; // 0x0c(0x04)
	float GetCloserGroundAcceleration; // 0x10(0x04)
	float GetAwayGroundAcceleration; // 0x14(0x04)
	float MinDistance; // 0x18(0x04)
};

// ScriptStruct FSD.FakeMoverPropulsion
// Size: 0x14 (Inherited: 0x00)
struct FFakeMoverPropulsion {
	float Speed; // 0x00(0x04)
	float AirAcceleration; // 0x04(0x04)
	float AirDeceleration; // 0x08(0x04)
	float GroundAcceleration; // 0x0c(0x04)
	float GroundDeceleration; // 0x10(0x04)
};

// ScriptStruct FSD.FlareMeta
// Size: 0x24 (Inherited: 0x00)
struct FFlareMeta {
	struct TWeakObjectPtr<struct AActor> Actor; // 0x00(0x08)
	float Inhibit; // 0x08(0x04)
	float Radius; // 0x0c(0x04)
	float InvRadius; // 0x10(0x04)
	struct FVector Pos; // 0x14(0x0c)
	bool Moving; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
};

// ScriptStruct FSD.FloatPerkEffect
// Size: 0x30 (Inherited: 0x00)
struct FFloatPerkEffect {
	struct UFloatPerkActivation* PerkActivation; // 0x00(0x08)
	struct FText FormattedDescription; // 0x08(0x18)
	struct TArray<struct FFloatPerkRankValue> RankValues; // 0x20(0x10)
};

// ScriptStruct FSD.FloatPerkRankValue
// Size: 0x08 (Inherited: 0x00)
struct FFloatPerkRankValue {
	int32_t RankIndex; // 0x00(0x04)
	float Value; // 0x04(0x04)
};

// ScriptStruct FSD.FloatPerkRank
// Size: 0x08 (Inherited: 0x00)
struct FFloatPerkRank {
	int32_t Tier; // 0x00(0x04)
	int32_t Cost; // 0x04(0x04)
};

// ScriptStruct FSD.PathObstacle
// Size: 0x10 (Inherited: 0x00)
struct FPathObstacle {
	struct FVector Position; // 0x00(0x0c)
	float Radius; // 0x0c(0x04)
};

// ScriptStruct FSD.LayeredNoise
// Size: 0x10 (Inherited: 0x00)
struct FLayeredNoise {
	struct UFloodFillSettings* Noise; // 0x00(0x08)
	float Scale; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct FSD.FormationDataItem
// Size: 0x10 (Inherited: 0x00)
struct FFormationDataItem {
	struct FVector Direction; // 0x00(0x0c)
	float Distance; // 0x0c(0x04)
};

// ScriptStruct FSD.Formation
// Size: 0x20 (Inherited: 0x00)
struct FFormation {
	char pad_0[0x18]; // 0x00(0x18)
	struct UFormationData* FormationData; // 0x18(0x08)
};

// ScriptStruct FSD.FormationID
// Size: 0x08 (Inherited: 0x00)
struct FFormationID {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct FSD.DamageDataBase
// Size: 0x01 (Inherited: 0x00)
struct FDamageDataBase {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct FSD.DamageData
// Size: 0x30 (Inherited: 0x01)
struct FDamageData : FDamageDataBase {
	struct UFSDPhysicalMaterial* Bodypart; // 0x00(0x08)
	struct UDamageClass* DamageClass; // 0x08(0x08)
	char pad_11[0x1f]; // 0x11(0x1f)
};

// ScriptStruct FSD.DelegateStruct
// Size: 0x01 (Inherited: 0x00)
struct FDelegateStruct {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct FSD.FSDTagsRoot
// Size: 0x18 (Inherited: 0x00)
struct FFSDTagsRoot {
	struct FFSDTagsAttitude Attitude; // 0x00(0x18)
};

// ScriptStruct FSD.FSDTagsAttitude
// Size: 0x18 (Inherited: 0x00)
struct FFSDTagsAttitude {
	struct FGameplayTag Friendly; // 0x00(0x08)
	struct FGameplayTag Neutral; // 0x08(0x08)
	struct FGameplayTag Hostile; // 0x10(0x08)
};

// ScriptStruct FSD.GeneratedMissionSeed
// Size: 0x58 (Inherited: 0x00)
struct FGeneratedMissionSeed {
	int32_t Seed; // 0x00(0x04)
	int32_t GlobalSeed; // 0x04(0x04)
	struct UBiome* Biome; // 0x08(0x08)
	struct UMissionTemplate* Template; // 0x10(0x08)
	struct UMissionComplexity* ComplexityLimit; // 0x18(0x08)
	struct UMissionDuration* DurationLimit; // 0x20(0x08)
	struct UMissionMutator* Mutator; // 0x28(0x08)
	struct TArray<struct UMissionWarning*> Warnings; // 0x30(0x10)
	struct TArray<struct UFSDEvent*> ActiveEvents; // 0x40(0x10)
	enum class EMissionStructure MissionStructure; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// ScriptStruct FSD.ReplicatedObjectives
// Size: 0x18 (Inherited: 0x00)
struct FReplicatedObjectives {
	bool HasReplicated; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct UObjective*> Objectives; // 0x08(0x10)
};

// ScriptStruct FSD.ModdingUISettings
// Size: 0x60 (Inherited: 0x00)
struct FModdingUISettings {
	char SortField; // 0x00(0x01)
	bool SortAscending; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct TSet<char> ServerFilters; // 0x08(0x50)
	bool bShowSandboxLabel; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
};

// ScriptStruct FSD.InputDisplay
// Size: 0x40 (Inherited: 0x00)
struct FInputDisplay {
	enum class EInputInteraction Interaction; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FText InputText; // 0x08(0x18)
	struct FLinearColor TextTint; // 0x20(0x10)
	struct UTexture2D* Icon; // 0x30(0x08)
	bool IconTintable; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// ScriptStruct FSD.ItemRefundListItem
// Size: 0x68 (Inherited: 0x00)
struct FItemRefundListItem {
	struct FString Name; // 0x00(0x10)
	struct TMap<struct FGuid, struct FItemRefundResourceItem> Resources; // 0x10(0x50)
	float CreditCost; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
};

// ScriptStruct FSD.ItemRefundResourceItem
// Size: 0x18 (Inherited: 0x00)
struct FItemRefundResourceItem {
	struct FString Name; // 0x00(0x10)
	float Amount; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct FSD.FSDServicesEndpoints
// Size: 0x100 (Inherited: 0x00)
struct FFSDServicesEndpoints {
	char pad_0[0x100]; // 0x00(0x100)
};

// ScriptStruct FSD.SplineHitResult
// Size: 0x98 (Inherited: 0x00)
struct FSplineHitResult {
	struct FHitResult HitResult; // 0x00(0x88)
	float SplineDistance; // 0x88(0x04)
	struct FVector SplineTangent; // 0x8c(0x0c)
};

// ScriptStruct FSD.SplineSegment
// Size: 0x30 (Inherited: 0x00)
struct FSplineSegment {
	struct FVector StartLocation; // 0x00(0x0c)
	struct FVector StartTangent; // 0x0c(0x0c)
	struct FVector EndLocation; // 0x18(0x0c)
	struct FVector EndTangent; // 0x24(0x0c)
};

// ScriptStruct FSD.NewPlayerMutator
// Size: 0x18 (Inherited: 0x00)
struct FNewPlayerMutator {
	int32_t MinCampaignProgress; // 0x00(0x04)
	int32_t MaxCampaignProgress; // 0x04(0x04)
	struct TArray<struct UMutator*> Mutators; // 0x08(0x10)
};

// ScriptStruct FSD.WidgetMover
// Size: 0x28 (Inherited: 0x00)
struct FWidgetMover {
	struct TWeakObjectPtr<struct UWidget> Widget; // 0x00(0x08)
	char pad_8[0x20]; // 0x08(0x20)
};

// ScriptStruct FSD.CustomCounter
// Size: 0x28 (Inherited: 0x00)
struct FCustomCounter {
	struct FDelegate OnCount; // 0x00(0x10)
	struct TWeakObjectPtr<struct UObject> Owner; // 0x10(0x08)
	char pad_18[0x10]; // 0x18(0x10)
};

// ScriptStruct FSD.WidgetTextCounter
// Size: 0x1c (Inherited: 0x00)
struct FWidgetTextCounter {
	struct TWeakObjectPtr<struct UTextBlock> Widget; // 0x00(0x08)
	char pad_8[0x14]; // 0x08(0x14)
};

// ScriptStruct FSD.WidgetFade
// Size: 0x1c (Inherited: 0x00)
struct FWidgetFade {
	struct TWeakObjectPtr<struct UUserWidget> Widget; // 0x00(0x08)
	char pad_8[0x14]; // 0x08(0x14)
};

// ScriptStruct FSD.WidgetPing
// Size: 0x20 (Inherited: 0x00)
struct FWidgetPing {
	struct TWeakObjectPtr<struct UWidget> Widget; // 0x00(0x08)
	char pad_8[0x18]; // 0x08(0x18)
};

// ScriptStruct FSD.TesterName
// Size: 0x28 (Inherited: 0x08)
struct FTesterName : FTableRowBase {
	struct FString SteamID; // 0x08(0x10)
	struct FString SteamProfileName; // 0x18(0x10)
};

// ScriptStruct FSD.TipsTableRow
// Size: 0x70 (Inherited: 0x08)
struct FTipsTableRow : FTableRowBase {
	struct FText Header; // 0x08(0x18)
	struct FText Description; // 0x20(0x18)
	struct FText InputText; // 0x38(0x18)
	struct FText InputTextControllerOverride; // 0x50(0x18)
	float TimeToDisplay; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// ScriptStruct FSD.GVisibilityGroups
// Size: 0x58 (Inherited: 0x00)
struct FGVisibilityGroups {
	struct TSet<struct UHUDVisibilityGroup*> AllGroups; // 0x00(0x50)
	struct UHUDVisibilityGroup* EnemyHealth; // 0x50(0x08)
};

// ScriptStruct FSD.GDItemCategoryIDs
// Size: 0x40 (Inherited: 0x00)
struct FGDItemCategoryIDs {
	struct UCategoryID* OverclockID; // 0x00(0x08)
	struct UCategoryID* ItemSkinID; // 0x08(0x08)
	struct UCategoryID* VanityID; // 0x10(0x08)
	struct UCategoryID* PickaxePartID; // 0x18(0x08)
	struct UCategoryID* WeaponID; // 0x20(0x08)
	struct UCategoryID* CraftingID; // 0x28(0x08)
	struct UCategoryID* ForgeID; // 0x30(0x08)
	struct UCategoryID* BoscoSkinID; // 0x38(0x08)
};

// ScriptStruct FSD.GDPerks
// Size: 0x90 (Inherited: 0x00)
struct FGDPerks {
	struct TArray<struct UPerkAsset*> PerkAssets; // 0x00(0x10)
	struct TArray<int32_t> RequiredClaimsPerTier; // 0x10(0x10)
	struct UFloatPerkAsset* IronWill; // 0x20(0x08)
	struct UFloatPerkAsset* DashPerk; // 0x28(0x08)
	struct UFloatPerkAsset* MarathonPerk; // 0x30(0x08)
	struct UFloatPerkAsset* ShieldLink; // 0x38(0x08)
	struct UFloatPerkAsset* Bezerk; // 0x40(0x08)
	struct UFloatPerkAsset* JumpBoots; // 0x48(0x08)
	struct UFloatPerkAsset* ImpactCompensators; // 0x50(0x08)
	struct UFloatPerkAsset* BeastMaster; // 0x58(0x08)
	struct UFloatPerkAsset* DownedBomb; // 0x60(0x08)
	struct UFloatPerkAsset* FieldMedic; // 0x68(0x08)
	struct UFloatPerkAsset* HeightenedSenses; // 0x70(0x08)
	struct UFloatPerkAsset* HoverBoots; // 0x78(0x08)
	struct UFloatPerkAsset* ActivePerkSlots; // 0x80(0x08)
	struct UFloatPerkAsset* PassivePerkSlots; // 0x88(0x08)
};

// ScriptStruct FSD.GDPlayerAndCharacterProgression
// Size: 0xa0 (Inherited: 0x00)
struct FGDPlayerAndCharacterProgression {
	struct TArray<SoftClassProperty> RankedHeroClasses; // 0x00(0x10)
	struct TArray<SoftClassProperty> TestHeroClasses; // 0x10(0x10)
	struct TArray<struct APlayerCharacter*> LoadedClasses; // 0x20(0x10)
	struct TArray<struct FText> PlayerRankNames; // 0x30(0x10)
	struct TArray<int32_t> CharacterXPLevels; // 0x40(0x10)
	struct TMap<struct FGuid, struct UPlayerCharacterID*> PlayerCharacterIDs; // 0x50(0x50)
};

// ScriptStruct FSD.GDMilestones
// Size: 0x10 (Inherited: 0x00)
struct FGDMilestones {
	struct TArray<struct UMilestoneAsset*> Milestones; // 0x00(0x10)
};

// ScriptStruct FSD.GDGameStatsTracking
// Size: 0x20 (Inherited: 0x00)
struct FGDGameStatsTracking {
	struct FGameplayTagContainer TotalEnemyKillsFilter; // 0x00(0x20)
};

// ScriptStruct FSD.GDTerrainTypes
// Size: 0x10 (Inherited: 0x00)
struct FGDTerrainTypes {
	struct UTerrainType* Rock; // 0x00(0x08)
	struct UTerrainType* Dirt; // 0x08(0x08)
};

// ScriptStruct FSD.GDDifficulty
// Size: 0x10 (Inherited: 0x00)
struct FGDDifficulty {
	struct TArray<struct UDifficultySetting*> DifficultySettings; // 0x00(0x10)
};

// ScriptStruct FSD.GDResources
// Size: 0xe0 (Inherited: 0x00)
struct FGDResources {
	struct UResourceData* CreditsResource; // 0x00(0x08)
	struct UResourceData* MOMResource; // 0x08(0x08)
	struct UResourceData* GoldResource; // 0x10(0x08)
	struct UResourceData* NitraResource; // 0x18(0x08)
	struct UResourceData* HollomiteResource; // 0x20(0x08)
	struct UResourceData* MagniteResource; // 0x28(0x08)
	struct UResourceData* NeromiteResource; // 0x30(0x08)
	struct UResourceData* QuantriteResource; // 0x38(0x08)
	struct UResourceData* UmaniteResource; // 0x40(0x08)
	struct UResourceData* CropaniteResource; // 0x48(0x08)
	struct UResourceData* DystrumResource; // 0x50(0x08)
	struct UResourceData* IronResource; // 0x58(0x08)
	struct UResourceData* EnorResource; // 0x60(0x08)
	struct UResourceData* BismorResource; // 0x68(0x08)
	struct UResourceData* OilShaleResource; // 0x70(0x08)
	struct UResourceData* Barly1; // 0x78(0x08)
	struct UResourceData* Barly2; // 0x80(0x08)
	struct UResourceData* Barly3; // 0x88(0x08)
	struct UResourceData* Barly4; // 0x90(0x08)
	struct UGemResourceData* JadizResource; // 0x98(0x08)
	struct UGemResourceData* BittergemResource; // 0xa0(0x08)
	struct UGemResourceData* MotherlodeGemResource; // 0xa8(0x08)
	struct UResourceData* RedSugarResource; // 0xb0(0x08)
	struct UResourceData* BlankSchematics; // 0xb8(0x08)
	struct TArray<struct UResourceData*> CraftingResources; // 0xc0(0x10)
	struct TArray<struct UResourceData*> AllResources; // 0xd0(0x10)
};

// ScriptStruct FSD.GDCharacterRetirement
// Size: 0xc0 (Inherited: 0x00)
struct FGDCharacterRetirement {
	struct TMap<struct UPlayerCharacterID*, struct UCampaign*> Campaigns; // 0x00(0x50)
	struct TMap<struct UPlayerCharacterID*, struct FRetirementCostItem> RetirementCost; // 0x50(0x50)
	struct TArray<float> CreditsCostMultipliers; // 0xa0(0x10)
	struct TArray<float> ResourceCostMultipliers; // 0xb0(0x10)
};

// ScriptStruct FSD.RetirementCostItem
// Size: 0x50 (Inherited: 0x00)
struct FRetirementCostItem {
	struct TMap<struct UResourceData*, int32_t> RetirementCost; // 0x00(0x50)
};

// ScriptStruct FSD.UpgradeCostItem
// Size: 0x10 (Inherited: 0x00)
struct FUpgradeCostItem {
	struct TArray<int32_t> Amounts; // 0x00(0x10)
};

// ScriptStruct FSD.GDStats
// Size: 0x128 (Inherited: 0x00)
struct FGDStats {
	struct UPawnStat* MaxAmmo; // 0x00(0x08)
	struct UPawnStat* MaxShields; // 0x08(0x08)
	struct UPawnStat* ShieldRegenerationRate; // 0x10(0x08)
	struct UPawnStat* MaxHealth; // 0x18(0x08)
	struct UPawnStat* DamageResistance; // 0x20(0x08)
	struct UPawnStat* FireResistance; // 0x28(0x08)
	struct UPawnStat* ColdResistance; // 0x30(0x08)
	struct UPawnStat* MeleeAttackDamage; // 0x38(0x08)
	struct UPawnStat* MovementSpeed; // 0x40(0x08)
	struct UPawnStat* SprintSpeed; // 0x48(0x08)
	struct UPawnStat* CarryingSpeedModifier; // 0x50(0x08)
	struct UPawnStat* ReviveSpeed; // 0x58(0x08)
	struct UPawnStat* DepositSpeed; // 0x60(0x08)
	struct UPawnStat* RessuplySpeed; // 0x68(0x08)
	struct UPawnStat* RedSugarHeal; // 0x70(0x08)
	struct UPawnStat* CarryingCapacity; // 0x78(0x08)
	struct UPawnStat* ZiplineSpeed; // 0x80(0x08)
	struct UPawnStat* ZiplineDownwardsBoost; // 0x88(0x08)
	struct UPawnStat* SlideDownIce; // 0x90(0x08)
	struct UPawnStat* FriendlyFire; // 0x98(0x08)
	struct UPawnStat* DamageFromPlayers; // 0xa0(0x08)
	struct UPawnStat* DamageBonus; // 0xa8(0x08)
	struct UPawnStat* FlareThrowingStrength; // 0xb0(0x08)
	struct UPawnStat* CaveLeechSense; // 0xb8(0x08)
	struct UPawnStat* MorkiteMining; // 0xc0(0x08)
	struct UPawnStat* GoldMining; // 0xc8(0x08)
	struct UPawnStat* RockMiningStrength; // 0xd0(0x08)
	struct UPawnStat* DirtMiningStrength; // 0xd8(0x08)
	struct UPawnStat* ResourceMiningStrength; // 0xe0(0x08)
	struct UPawnStat* PowerAttackCooldownRate; // 0xe8(0x08)
	struct UPawnStat* ImpactCompensation; // 0xf0(0x08)
	struct UPawnStat* MovementSpeedPenalty; // 0xf8(0x08)
	struct UPawnStat* MovementSpeedPenaltyReduction; // 0x100(0x08)
	struct UPawnStat* MovementSpeedEnvironmentalPenalty; // 0x108(0x08)
	struct UPawnStat* MovementSpeedEnvironmentalPenaltyReduction; // 0x110(0x08)
	struct UPawnStat* CarriableThrowing; // 0x118(0x08)
	struct UPawnStat* HoverBootsDuration; // 0x120(0x08)
};

// ScriptStruct FSD.GDDamageClasses
// Size: 0x48 (Inherited: 0x00)
struct FGDDamageClasses {
	struct UDamageClass* Falling; // 0x00(0x08)
	struct UDamageClass* Fire; // 0x08(0x08)
	struct UDamageClass* Heat; // 0x10(0x08)
	struct UDamageClass* Physical; // 0x18(0x08)
	struct UDamageClass* Kinetic; // 0x20(0x08)
	struct UDamageClass* Explosive; // 0x28(0x08)
	struct UDamageClass* Cold; // 0x30(0x08)
	struct UDamageClass* Ice; // 0x38(0x08)
	struct UDamageClass* Corrosive; // 0x40(0x08)
};

// ScriptStruct FSD.GDAudio
// Size: 0x50 (Inherited: 0x00)
struct FGDAudio {
	struct TSoftObjectPtr<struct USoundAttenuation> FirstPersonHitscanAttenuationOverride; // 0x00(0x28)
	struct AFSDReverbVolume* ReverbActor; // 0x28(0x08)
	struct UDynamicReverbComponent* DynamicReverbClass; // 0x30(0x08)
	float SmallCaveRadius; // 0x38(0x04)
	float MediumCaveRadius; // 0x3c(0x04)
	float LargeCaveRadius; // 0x40(0x04)
	float FirstPersonPriority; // 0x44(0x04)
	float ThirdPersonPriority; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct FSD.ResourcePouchItem
// Size: 0x10 (Inherited: 0x00)
struct FResourcePouchItem {
	struct UResourceData* Resource; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct FSD.TrackPositionList
// Size: 0x38 (Inherited: 0x00)
struct FTrackPositionList {
	struct FName TrackName; // 0x00(0x08)
	struct TArray<struct FVector> Positions; // 0x08(0x10)
	struct TArray<struct TWeakObjectPtr<struct UGemTracker>> Trackers; // 0x18(0x10)
	struct TArray<struct TWeakObjectPtr<struct UMaterialInstanceDynamic>> DynamicMaterials; // 0x28(0x10)
};

// ScriptStruct FSD.GMMutatorItem
// Size: 0x10 (Inherited: 0x00)
struct FGMMutatorItem {
	struct TArray<struct UMutator*> Mutators; // 0x00(0x10)
};

// ScriptStruct FSD.DeepDiveAnalyticsInformation
// Size: 0x0c (Inherited: 0x00)
struct FDeepDiveAnalyticsInformation {
	bool WasDeepDive; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t LastDeepDiveStage; // 0x04(0x04)
	bool EliteDeepDive; // 0x08(0x01)
	bool IsReplay; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
};

// ScriptStruct FSD.PartyAnalyticsInformation
// Size: 0x14 (Inherited: 0x00)
struct FPartyAnalyticsInformation {
	char pad_0[0x14]; // 0x00(0x14)
};

// ScriptStruct FSD.GooPuddleStatusEffectTrigger
// Size: 0x18 (Inherited: 0x00)
struct FGooPuddleStatusEffectTrigger {
	struct TArray<struct UDamageClass*> Trigger; // 0x00(0x10)
	struct UStatusEffect* NewStatusEffect; // 0x10(0x08)
};

// ScriptStruct FSD.AvoidActorEntry
// Size: 0x10 (Inherited: 0x00)
struct FAvoidActorEntry {
	struct AActor* Actor; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct FSD.GrabAvoidClassEntry
// Size: 0x10 (Inherited: 0x00)
struct FGrabAvoidClassEntry {
	struct AActor* ActorClass; // 0x00(0x08)
	float DistanceToKeep; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct FSD.GraplingGunState
// Size: 0x10 (Inherited: 0x00)
struct FGraplingGunState {
	struct FVector_NetQuantize TargetLocation; // 0x00(0x0c)
	char IsGrapling : 1; // 0x0c(0x01)
	char pad_C_1 : 7; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct FSD.StateStats
// Size: 0x14 (Inherited: 0x00)
struct FStateStats {
	float MaxAcceleration; // 0x00(0x04)
	float MaxPawnSpeed; // 0x04(0x04)
	float MinSlowdownAngle; // 0x08(0x04)
	float MaxSlowdownAngle; // 0x0c(0x04)
	float MaxBreakingDeceleration; // 0x10(0x04)
};

// ScriptStruct FSD.GuntowerModuleLevel
// Size: 0x18 (Inherited: 0x00)
struct FGuntowerModuleLevel {
	struct TArray<struct AGuntowerModule*> PossibleModules; // 0x00(0x10)
	bool PreventDuplication; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct FSD.EliteEnemyEntry
// Size: 0x40 (Inherited: 0x00)
struct FEliteEnemyEntry {
	float HeroChance; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UStatusEffect* StatusEffect; // 0x08(0x08)
	struct TArray<struct UActorComponent*> ComponentsToAdd; // 0x10(0x10)
	bool OverrideHealthScaling; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct TArray<struct FEliteEnemyBan> Bans; // 0x28(0x10)
	enum class EEnemyHealthScaling HealthScalingOverride; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// ScriptStruct FSD.EliteEnemyBan
// Size: 0x10 (Inherited: 0x00)
struct FEliteEnemyBan {
	struct FInt32Interval AffectedPlayerCount; // 0x00(0x08)
	struct UMissionTemplate* Template; // 0x08(0x08)
};

// ScriptStruct FSD.HealthBarLooks
// Size: 0x20 (Inherited: 0x00)
struct FHealthBarLooks {
	struct FLinearColor HealthColor; // 0x00(0x10)
	struct FLinearColor DamageColor; // 0x10(0x10)
};

// ScriptStruct FSD.GenerateIconInfo
// Size: 0x78 (Inherited: 0x00)
struct FGenerateIconInfo {
	enum class EGeneratorIconType IconType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UPickaxePart* PickaxePart; // 0x08(0x08)
	struct FPickaxeSet PickaxeSet; // 0x10(0x38)
	enum class EPickaxePartLocation PickaxePartLocation; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct UItemSkin* ItemSkin; // 0x50(0x08)
	struct UVanityItem* Item; // 0x58(0x08)
	struct UPlayerCharacterID* Character; // 0x60(0x08)
	struct FVector2D Size; // 0x68(0x08)
	bool bShowCloseUp; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// ScriptStruct FSD.PickaxeSet
// Size: 0x38 (Inherited: 0x00)
struct FPickaxeSet {
	struct UPickaxePart* BladeFront; // 0x00(0x08)
	struct UPickaxePart* OptionalBladeBack; // 0x08(0x08)
	struct UPickaxePart* Pommel; // 0x10(0x08)
	struct UPickaxePart* Handle; // 0x18(0x08)
	struct UPickaxePart* Shaft; // 0x20(0x08)
	struct UPickaxePart* Head; // 0x28(0x08)
	struct UPickaxePart* Material; // 0x30(0x08)
};

// ScriptStruct FSD.QueuedMontage
// Size: 0x10 (Inherited: 0x00)
struct FQueuedMontage {
	struct UAnimMontage* Montage; // 0x00(0x08)
	bool ForceUpdate; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct FSD.InputTranslationTable
// Size: 0x50 (Inherited: 0x00)
struct FInputTranslationTable {
	struct TMap<struct FName, struct FInputTranslation> Entries; // 0x00(0x50)
};

// ScriptStruct FSD.InputTranslation
// Size: 0x24 (Inherited: 0x00)
struct FInputTranslation {
	struct FInputTranslationEntry Default; // 0x00(0x10)
	bool bControllerOverride; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	struct FInputTranslationEntry ControllerOverride; // 0x14(0x10)
};

// ScriptStruct FSD.InputTranslationEntry
// Size: 0x10 (Inherited: 0x00)
struct FInputTranslationEntry {
	enum class EInputInteraction Interaction; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName InputName; // 0x04(0x08)
	int32_t Axis; // 0x0c(0x04)
};

// ScriptStruct FSD.CarriedItemState
// Size: 0x10 (Inherited: 0x00)
struct FCarriedItemState {
	struct AActor* Item; // 0x00(0x08)
	char PlayThrowMontage : 1; // 0x08(0x01)
	char pad_8_1 : 7; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct FSD.ItemSkinOwners
// Size: 0x10 (Inherited: 0x00)
struct FItemSkinOwners {
	struct TArray<struct UItemID*> Items; // 0x00(0x10)
};

// ScriptStruct FSD.GearStatEntry
// Size: 0x68 (Inherited: 0x00)
struct FGearStatEntry {
	struct FText Text; // 0x00(0x18)
	struct FText Value; // 0x18(0x18)
	struct FText BaseValue; // 0x30(0x18)
	struct FText UpgradeValue; // 0x48(0x18)
	enum class EItemPreviewStatus PreviewStatus; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// ScriptStruct FSD.BumpPlayerHit
// Size: 0x18 (Inherited: 0x00)
struct FBumpPlayerHit {
	struct FVector_NetQuantize force; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct APlayerCharacter* Player; // 0x10(0x08)
};

// ScriptStruct FSD.LaserPointerData
// Size: 0x60 (Inherited: 0x00)
struct FLaserPointerData {
	struct FText Name; // 0x00(0x18)
	struct FText Description; // 0x18(0x18)
	struct FLinearColor Color; // 0x30(0x10)
	struct UTexture2D* Icon; // 0x40(0x08)
	enum class ELaserPointerTargetType TargetType; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	struct FGuid SaveGameID; // 0x4c(0x10)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct FSD.LineSegmentCarverPoint
// Size: 0x24 (Inherited: 0x00)
struct FLineSegmentCarverPoint {
	struct FVector Position; // 0x00(0x0c)
	float HRange; // 0x0c(0x04)
	float VRange; // 0x10(0x04)
	float FloorAngle; // 0x14(0x04)
	float CielingNoiseRange; // 0x18(0x04)
	float WallNoiseRange; // 0x1c(0x04)
	float FloorNoiseRange; // 0x20(0x04)
};

// ScriptStruct FSD.LineSegmentFillerPoint
// Size: 0x24 (Inherited: 0x00)
struct FLineSegmentFillerPoint {
	struct FVector Position; // 0x00(0x0c)
	struct FRandRange RandomRange; // 0x0c(0x08)
	struct FRandRange RandomNoiseRange; // 0x14(0x08)
	struct FRandRange FillAmount; // 0x1c(0x08)
};

// ScriptStruct FSD.FSDTranslationProgress
// Size: 0x18 (Inherited: 0x00)
struct FFSDTranslationProgress {
	struct FString CodeName; // 0x00(0x10)
	int32_t TranslatedPercent; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct FSD.LocalizedLanguageInfo
// Size: 0x38 (Inherited: 0x00)
struct FLocalizedLanguageInfo {
	struct FString EnglishName; // 0x00(0x10)
	struct FString NativeName; // 0x10(0x10)
	struct FString CodeName; // 0x20(0x10)
	bool CommunityTranslated; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	int32_t TranslatedPercent; // 0x34(0x04)
};

// ScriptStruct FSD.BeamCollision
// Size: 0xc8 (Inherited: 0x00)
struct FBeamCollision {
	bool bBeamBlocked; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float BeamHitDistance; // 0x04(0x04)
	struct FVector FinalTraceStart; // 0x08(0x0c)
	struct FVector FinalTraceEnd; // 0x14(0x0c)
	char pad_20[0xa8]; // 0x20(0xa8)
};

// ScriptStruct FSD.FSDLocalizedChatMessage
// Size: 0x48 (Inherited: 0x00)
struct FFSDLocalizedChatMessage {
	char pad_0[0x8]; // 0x00(0x08)
	enum class EChatMessageType MsgType; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString Sender; // 0x10(0x10)
	struct FText Msg; // 0x20(0x18)
	struct TArray<struct FText> Arguments; // 0x38(0x10)
};

// ScriptStruct FSD.MilestoneTier
// Size: 0x08 (Inherited: 0x00)
struct FMilestoneTier {
	float CompletionCount; // 0x00(0x04)
	int32_t PerkPoints; // 0x04(0x04)
};

// ScriptStruct FSD.BiomeFeatures
// Size: 0x10 (Inherited: 0x00)
struct FBiomeFeatures {
	struct UMinersManualData* Descriptions[0x2]; // 0x00(0x10)
};

// ScriptStruct FSD.MissionTypeDescription
// Size: 0x28 (Inherited: 0x00)
struct FMissionTypeDescription {
	struct FText InfoHeadline; // 0x00(0x18)
	struct TArray<struct FSoftMissionStepDescription> Steps; // 0x18(0x10)
};

// ScriptStruct FSD.SoftMissionStepDescription
// Size: 0x58 (Inherited: 0x00)
struct FSoftMissionStepDescription {
	struct FText Headline; // 0x00(0x18)
	struct FText RichDescription; // 0x18(0x18)
	struct TSoftObjectPtr<struct UTexture2D> Image; // 0x30(0x28)
};

// ScriptStruct FSD.MissionStepDescription
// Size: 0x38 (Inherited: 0x00)
struct FMissionStepDescription {
	struct FText Headline; // 0x00(0x18)
	struct FText RichDescription; // 0x18(0x18)
	struct UTexture2D* Image; // 0x30(0x08)
};

// ScriptStruct FSD.MinersManualDescription
// Size: 0x40 (Inherited: 0x00)
struct FMinersManualDescription {
	struct FText Headline; // 0x00(0x18)
	struct FText RichDescription; // 0x18(0x18)
	struct UTexture2D* ImageFront; // 0x30(0x08)
	struct UTexture2D* ImageBackground; // 0x38(0x08)
};

// ScriptStruct FSD.SoftMinersManualDescription
// Size: 0x80 (Inherited: 0x00)
struct FSoftMinersManualDescription {
	struct FText Headline; // 0x00(0x18)
	struct FText RichDescription; // 0x18(0x18)
	struct TSoftObjectPtr<struct UTexture2D> ImageFront; // 0x30(0x28)
	struct TSoftObjectPtr<struct UTexture2D> ImageBackground; // 0x58(0x28)
};

// ScriptStruct FSD.DamageTypeDescription
// Size: 0x78 (Inherited: 0x00)
struct FDamageTypeDescription {
	enum class EDamageType Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FText Name; // 0x08(0x18)
	struct FText RichDescription; // 0x20(0x18)
	struct FSoftIconWithColor Icon; // 0x38(0x38)
	float IconScale; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
};

// ScriptStruct FSD.SoftIconWithColor
// Size: 0x38 (Inherited: 0x00)
struct FSoftIconWithColor {
	struct TSoftObjectPtr<struct UTexture2D> Icon; // 0x00(0x28)
	struct FLinearColor Tint; // 0x28(0x10)
};

// ScriptStruct FSD.MiningPodDialogs
// Size: 0x50 (Inherited: 0x00)
struct FMiningPodDialogs {
	struct UDialogDataAsset* DepartingIn5Min; // 0x00(0x08)
	struct UDialogDataAsset* DepartingIn4Min; // 0x08(0x08)
	struct UDialogDataAsset* DepartingIn3Min; // 0x10(0x08)
	struct UDialogDataAsset* DepartingIn2Min; // 0x18(0x08)
	struct UDialogDataAsset* DepartingIn1Min; // 0x20(0x08)
	struct UDialogDataAsset* DepartingIn30Sec; // 0x28(0x08)
	struct UDialogDataAsset* DepartingIn10Sec; // 0x30(0x08)
	struct UDialogDataAsset* DepartingIn123Sec; // 0x38(0x08)
	struct UDialogDataAsset* Departed; // 0x40(0x08)
	struct UDialogDataAsset* DeepDiveDeparted; // 0x48(0x08)
};

// ScriptStruct FSD.GeneratedMissionGroup
// Size: 0x10 (Inherited: 0x00)
struct FGeneratedMissionGroup {
	struct TArray<struct UGeneratedMission*> AvailableMissions; // 0x00(0x10)
};

// ScriptStruct FSD.RewardTexts
// Size: 0x90 (Inherited: 0x00)
struct FRewardTexts {
	struct FText PrimaryObjective; // 0x00(0x18)
	struct FText SecondaryObjective; // 0x18(0x18)
	struct FText CountPrimaryObjectives; // 0x30(0x18)
	struct FText CountSecondaryObjectives; // 0x48(0x18)
	struct FText MineralsMinedByTeam; // 0x60(0x18)
	struct FText HostilesKilled; // 0x78(0x18)
};

// ScriptStruct FSD.MissionHazardSetting
// Size: 0x20 (Inherited: 0x00)
struct FMissionHazardSetting {
	struct FText Name; // 0x00(0x18)
	float HazardBonus; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct FSD.GDMissionStats
// Size: 0x158 (Inherited: 0x00)
struct FGDMissionStats {
	struct UMissionStat* TimePlayed; // 0x00(0x08)
	struct UMissionStat* DistanceTravelled; // 0x08(0x08)
	struct UMissionStat* EnemiesKilled; // 0x10(0x08)
	struct UMissionStat* MineralsMined; // 0x18(0x08)
	struct UMissionStat* MissionCompleted; // 0x20(0x08)
	struct UMissionStat* SoloMissionCompleted; // 0x28(0x08)
	struct UMissionStat* SecondaryMissionCompleted; // 0x30(0x08)
	struct UMissionStat* CharacterLevelUp; // 0x38(0x08)
	struct UMissionStat* VanityItemsBought; // 0x40(0x08)
	struct UMissionStat* ItemUpgradesBought; // 0x48(0x08)
	struct UMissionStat* DrinkablesConsumed; // 0x50(0x08)
	struct UMissionStat* DrinkableRoundsOrdered; // 0x58(0x08)
	struct UMissionStat* BartenderCreditsTipped; // 0x60(0x08)
	struct UMissionStat* CampaignMissionsCompleted; // 0x68(0x08)
	struct UMissionStat* CampaignsCompleted; // 0x70(0x08)
	struct UMissionStat* TimesDowned; // 0x78(0x08)
	struct UMissionStat* TimesPassedOut; // 0x80(0x08)
	struct UMissionStat* WeaponsUnlockedStat; // 0x88(0x08)
	struct UMissionStat* SeasonEventsCompleted; // 0x90(0x08)
	struct UMissionStat* SeasonChallengesCompleted; // 0x98(0x08)
	struct UMissionStat* DeepDivesCompleted; // 0xa0(0x08)
	struct UMissionStat* EliteDeepDivesCompleted; // 0xa8(0x08)
	struct UMissionStat* CosmeticsCrafted; // 0xb0(0x08)
	struct UMissionStat* WeaponSkinsCrafted; // 0xb8(0x08)
	struct UMissionStat* WeaponOverclocksCrafted; // 0xc0(0x08)
	struct UMissionStat* CraftingMasteryLevel; // 0xc8(0x08)
	struct UMissionStat* DefendBlackBoxObjectivesCompleted; // 0xd0(0x08)
	struct UMissionStat* RepairMiniMuleObjectivesCompleted; // 0xd8(0x08)
	struct UMissionStat* DeepDiveCompletedBestTime; // 0xe0(0x08)
	struct UMissionStat* EliteDeepDiveCompletedBestTime; // 0xe8(0x08)
	struct UMissionStat* SpecialBeersUnlocked; // 0xf0(0x08)
	struct TArray<struct UMissionStat*> AllMissionStats; // 0xf8(0x10)
	struct TMap<struct UPlayerCharacterID*, struct UMissionStat*> CharacterMissionsCompleted; // 0x108(0x50)
};

// ScriptStruct FSD.PlanetZoneItem
// Size: 0x28 (Inherited: 0x00)
struct FPlanetZoneItem {
	struct TArray<struct UBiome*> Biomes; // 0x00(0x10)
	struct TArray<struct UGeneratedMission*> missions; // 0x10(0x10)
	struct UPlanetZone* Zone; // 0x20(0x08)
};

// ScriptStruct FSD.MissionBiomeItem
// Size: 0x10 (Inherited: 0x00)
struct FMissionBiomeItem {
	struct UBiome* Biome; // 0x00(0x08)
	float Rarity; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct FSD.MissionTemplateItem
// Size: 0x10 (Inherited: 0x00)
struct FMissionTemplateItem {
	struct UMissionTemplate* Template; // 0x00(0x08)
	float Rarity; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct FSD.RequiredMissionItem
// Size: 0x18 (Inherited: 0x00)
struct FRequiredMissionItem {
	struct UMissionTemplate* MissionTemplate; // 0x00(0x08)
	struct UMissionComplexity* Complexity; // 0x08(0x08)
	struct UMissionDuration* Duration; // 0x10(0x08)
};

// ScriptStruct FSD.MultiHitScanHits
// Size: 0x30 (Inherited: 0x00)
struct FMultiHitScanHits {
	struct TArray<struct FMultiHitscanHit> Hits; // 0x00(0x10)
	struct TArray<struct UPrimitiveComponent*> Components; // 0x10(0x10)
	struct TArray<struct UFSDPhysicalMaterial*> PhysicalMaterials; // 0x20(0x10)
};

// ScriptStruct FSD.MultiHitscanHit
// Size: 0x20 (Inherited: 0x00)
struct FMultiHitscanHit {
	char TargetComponentIndex; // 0x00(0x01)
	char PhysicalMaterialIndex; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	struct FVector_NetQuantize HitLocation; // 0x04(0x0c)
	struct FVector_NetQuantizeNormal ImpactNormal; // 0x10(0x0c)
	char BoneIndex; // 0x1c(0x01)
	bool PlayImpactSound; // 0x1d(0x01)
	bool SpawnDecal; // 0x1e(0x01)
	char pad_1F[0x1]; // 0x1f(0x01)
};

// ScriptStruct FSD.ProjectileSpawnData
// Size: 0x28 (Inherited: 0x00)
struct FProjectileSpawnData {
	struct AProjectile* projectileClass; // 0x00(0x08)
	struct FFloatInterval HorizontalAngleOffset; // 0x08(0x08)
	struct FFloatInterval VerticalAngleOffset; // 0x10(0x08)
	struct FFloatInterval Delay; // 0x18(0x08)
	bool IsBallistic; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct FSD.ActiveAudioItem
// Size: 0x10 (Inherited: 0x00)
struct FActiveAudioItem {
	struct UAudioComponent* Audio; // 0x00(0x08)
	float FadeoutDuration; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct FSD.ActiveMusicItem
// Size: 0x20 (Inherited: 0x00)
struct FActiveMusicItem {
	struct USoundBase* Sound; // 0x00(0x08)
	float StartingTime; // 0x08(0x04)
	float FadeDuration; // 0x0c(0x04)
	bool Looping; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	struct FMusicHandle Handle; // 0x14(0x04)
	struct UMusicCategory* Category; // 0x18(0x08)
};

// ScriptStruct FSD.MusicHandle
// Size: 0x04 (Inherited: 0x00)
struct FMusicHandle {
	int32_t MusicHandle; // 0x00(0x04)
};

// ScriptStruct FSD.PathCell
// Size: 0x10 (Inherited: 0x00)
struct FPathCell {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct FSD.PathDebugNode
// Size: 0x20 (Inherited: 0x00)
struct FPathDebugNode {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct FSD.OxygenCallback
// Size: 0x18 (Inherited: 0x00)
struct FOxygenCallback {
	struct FDelegate Delegate; // 0x00(0x10)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct FSD.SimpleObjectInfoData
// Size: 0x40 (Inherited: 0x00)
struct FSimpleObjectInfoData {
	struct FText InGameName; // 0x00(0x18)
	struct FText InGameDescription; // 0x18(0x18)
	struct UDialogDataAsset* LookAtShout; // 0x30(0x08)
	struct UTexture2D* Icon; // 0x38(0x08)
};

// ScriptStruct FSD.PawnStatEntriesArray
// Size: 0x120 (Inherited: 0x108)
struct FPawnStatEntriesArray : FFastArraySerializer {
	struct TArray<struct FPawnStatEntry> Items; // 0x108(0x10)
	struct UPawnStatsComponent* Owner; // 0x118(0x08)
};

// ScriptStruct FSD.PawnStatEntry
// Size: 0x30 (Inherited: 0x0c)
struct FPawnStatEntry : FFastArraySerializerItem {
	char pad_C[0x4]; // 0x0c(0x04)
	struct UPawnStat* PawnStat; // 0x10(0x08)
	char pad_18[0x10]; // 0x18(0x10)
	float Value; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct FSD.PerkUsage
// Size: 0x18 (Inherited: 0x00)
struct FPerkUsage {
	struct UPerkAsset* Perk; // 0x00(0x08)
	int32_t UsedCount; // 0x08(0x04)
	char pad_C[0xc]; // 0x0c(0x0c)
};

// ScriptStruct FSD.PickaxeMeshInstance
// Size: 0x10 (Inherited: 0x00)
struct FPickaxeMeshInstance {
	struct UMeshComponent* FP_Mesh; // 0x00(0x08)
	struct UMeshComponent* TP_Mesh; // 0x08(0x08)
};

// ScriptStruct FSD.DefaultPickaxeParts
// Size: 0x50 (Inherited: 0x00)
struct FDefaultPickaxeParts {
	struct TMap<enum class EPickaxePartLocation, struct UPickaxePart*> Parts; // 0x00(0x50)
};

// ScriptStruct FSD.PillarSegment
// Size: 0x08 (Inherited: 0x00)
struct FPillarSegment {
	float Scale; // 0x00(0x04)
	float HeightOffset; // 0x04(0x04)
};

// ScriptStruct FSD.HealthRegenerationParams
// Size: 0x10 (Inherited: 0x00)
struct FHealthRegenerationParams {
	bool bIsRegenerating; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float DelayAfterDamage; // 0x04(0x04)
	float HealthPerSecond; // 0x08(0x04)
	float TargetHealthRatio; // 0x0c(0x04)
};

// ScriptStruct FSD.PlayerSphere
// Size: 0x20 (Inherited: 0x00)
struct FPlayerSphere {
	struct FVector Center; // 0x00(0x0c)
	float Radius; // 0x0c(0x04)
	struct TArray<struct TWeakObjectPtr<struct APlayerCharacter>> Players; // 0x10(0x10)
};

// ScriptStruct FSD.ProximityTriggerItem
// Size: 0x28 (Inherited: 0x00)
struct FProximityTriggerItem {
	char pad_0[0x18]; // 0x00(0x18)
	struct FDelegate Callback; // 0x18(0x10)
};

// ScriptStruct FSD.RejoinFloat
// Size: 0x1c (Inherited: 0x00)
struct FRejoinFloat {
	struct FGuid ItemKey; // 0x00(0x10)
	struct FName ValueKey; // 0x10(0x08)
	float Value; // 0x18(0x04)
};

// ScriptStruct FSD.RejoinInt
// Size: 0x1c (Inherited: 0x00)
struct FRejoinInt {
	struct FGuid ItemKey; // 0x00(0x10)
	struct FName ValueKey; // 0x10(0x08)
	int32_t Value; // 0x18(0x04)
};

// ScriptStruct FSD.DeepDiveTesterItem
// Size: 0x18 (Inherited: 0x00)
struct FDeepDiveTesterItem {
	struct UMissionTemplate* mission; // 0x00(0x08)
	struct UMissionMutator* Mutator; // 0x08(0x08)
	struct UMissionWarning* Warning; // 0x10(0x08)
};

// ScriptStruct FSD.PostDataModel
// Size: 0x10 (Inherited: 0x00)
struct FPostDataModel {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct FSD.PostProcessingBlendable
// Size: 0x20 (Inherited: 0x00)
struct FPostProcessingBlendable {
	struct TScriptInterface<None> Blendable; // 0x00(0x10)
	char pad_10[0x10]; // 0x10(0x10)
};

// ScriptStruct FSD.InfluenceMap
// Size: 0x50 (Inherited: 0x00)
struct FInfluenceMap {
	struct TMap<struct UObject*, struct FCaveInfluenceSet> CaveInfluences; // 0x00(0x50)
};

// ScriptStruct FSD.CaveInfluenceSet
// Size: 0x10 (Inherited: 0x00)
struct FCaveInfluenceSet {
	struct TArray<struct FCaveInfluence> CaveInfluences; // 0x00(0x10)
};

// ScriptStruct FSD.CaveInfluence
// Size: 0x10 (Inherited: 0x00)
struct FCaveInfluence {
	struct FVector Center; // 0x00(0x0c)
	float range; // 0x0c(0x04)
};

// ScriptStruct FSD.GemResourceAmount
// Size: 0x10 (Inherited: 0x00)
struct FGemResourceAmount {
	struct UGemResourceCreator* GemCreator; // 0x00(0x08)
	int32_t Amount; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct FSD.CarvedResource
// Size: 0x20 (Inherited: 0x00)
struct FCarvedResource {
	struct UCarvedResourceCreator* ResourceCreator; // 0x00(0x08)
	struct TArray<int32_t> PredeterminedRooms; // 0x08(0x10)
	int32_t Amount; // 0x18(0x04)
	float Overflow; // 0x1c(0x04)
};

// ScriptStruct FSD.DebrisPatchResource
// Size: 0x18 (Inherited: 0x00)
struct FDebrisPatchResource {
	struct UDebrisPatchComponent* Debris; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
};

// ScriptStruct FSD.DebrisVeinResource
// Size: 0x18 (Inherited: 0x00)
struct FDebrisVeinResource {
	struct UDebrisVeinComponent* Debris; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
};

// ScriptStruct FSD.VeinResource
// Size: 0x28 (Inherited: 0x00)
struct FVeinResource {
	struct UVeinResourceCreator* ResourceCreator; // 0x00(0x08)
	float VeinLengthToGenerate; // 0x08(0x04)
	char pad_C[0x1c]; // 0x0c(0x1c)
};

// ScriptStruct FSD.GeneratedInstantCarvers
// Size: 0x10 (Inherited: 0x00)
struct FGeneratedInstantCarvers {
	struct TArray<struct FLevelCarverPass> LevelCarverPasses; // 0x00(0x10)
};

// ScriptStruct FSD.LevelCarverPass
// Size: 0x18 (Inherited: 0x00)
struct FLevelCarverPass {
	struct TArray<struct FLevelGenerationCarverLists> Lists; // 0x00(0x10)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct FSD.LevelGenerationCarverLists
// Size: 0x10 (Inherited: 0x00)
struct FLevelGenerationCarverLists {
	struct TArray<struct FLevelGenerationCarver> Carvers; // 0x00(0x10)
};

// ScriptStruct FSD.TerrainPlacementDebugItem
// Size: 0x70 (Inherited: 0x00)
struct FTerrainPlacementDebugItem {
	struct TArray<struct FTerrainPlacementBox> TerrainCheckers; // 0x00(0x10)
	bool BoxGood; // 0x10(0x01)
	bool CapsuleGood; // 0x11(0x01)
	enum class EDebrisColliderType CapsuleType; // 0x12(0x01)
	char pad_13[0x1]; // 0x13(0x01)
	struct FDebrisCapsule Capsule; // 0x14(0x20)
	char pad_34[0xc]; // 0x34(0x0c)
	struct FTransform Transform; // 0x40(0x30)
};

// ScriptStruct FSD.TerrainPlacementBox
// Size: 0x1c (Inherited: 0x00)
struct FTerrainPlacementBox {
	struct FVector Min; // 0x00(0x0c)
	struct FVector Max; // 0x0c(0x0c)
	enum class ETerrainPlacementBoxType PlacementType; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
};

// ScriptStruct FSD.GeneratedDebris
// Size: 0x58 (Inherited: 0x00)
struct FGeneratedDebris {
	struct TMap<struct UDebrisBase*, struct UObject*> Debris; // 0x00(0x50)
	bool IsValid; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// ScriptStruct FSD.GeneratedDebrisItem
// Size: 0x10 (Inherited: 0x00)
struct FGeneratedDebrisItem {
	struct UDebrisBase* Debris; // 0x00(0x08)
	struct UObject* Influencer; // 0x08(0x08)
};

// ScriptStruct FSD.GeneratedInfluenceSets
// Size: 0x18 (Inherited: 0x00)
struct FGeneratedInfluenceSets {
	struct TArray<struct FGeneratedInfluenceSet> InfluenceSets; // 0x00(0x10)
	bool IsValid; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct FSD.GeneratedInfluenceSet
// Size: 0x20 (Inherited: 0x00)
struct FGeneratedInfluenceSet {
	struct UObject* CaveInfluencer; // 0x00(0x08)
	int32_t NetworkID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FCaveInfluence> CaveInfluences; // 0x10(0x10)
};

// ScriptStruct FSD.CollectableSpawnableItem
// Size: 0x10 (Inherited: 0x00)
struct FCollectableSpawnableItem {
	struct UCollectableResourceData* Resource; // 0x00(0x08)
	int32_t Amount; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct FSD.ResourceSpawner
// Size: 0x18 (Inherited: 0x00)
struct FResourceSpawner {
	struct UResourceData* Resource; // 0x00(0x08)
	struct FRandFloatInterval AmountToSpawn; // 0x08(0x10)
};

// ScriptStruct FSD.PLSResource
// Size: 0x10 (Inherited: 0x00)
struct FPLSResource {
	struct UResourceData* Resource; // 0x00(0x08)
	float AmountToGenerate; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct FSD.TunnelPath
// Size: 0x10 (Inherited: 0x00)
struct FTunnelPath {
	struct TArray<struct FVector> Path; // 0x00(0x10)
};

// ScriptStruct FSD.InfluenceSphere
// Size: 0x10 (Inherited: 0x00)
struct FInfluenceSphere {
	struct UCaveInfluencer* Influencer; // 0x00(0x08)
	float Radius; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct FSD.ProfileCategoryTiming
// Size: 0x18 (Inherited: 0x00)
struct FProfileCategoryTiming {
	struct FString CategoryName; // 0x00(0x10)
	float CategoryTime; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct FSD.ProfileEntry
// Size: 0x20 (Inherited: 0x00)
struct FProfileEntry {
	struct TWeakObjectPtr<struct UObject> Context; // 0x00(0x08)
	struct FString Category; // 0x08(0x10)
	float TimeSpent; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct FSD.DormantComponentState
// Size: 0x18 (Inherited: 0x00)
struct FDormantComponentState {
	struct TWeakObjectPtr<struct UActorComponent> Component; // 0x00(0x08)
	enum class ECollisionEnabled Collision; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	struct FName CollisionProfileName; // 0x0c(0x08)
	char Active : 1; // 0x14(0x01)
	char Visible : 1; // 0x14(0x01)
	char pad_14_2 : 6; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct FSD.ProjectileSwitch
// Size: 0x10 (Inherited: 0x00)
struct FProjectileSwitch {
	struct AProjectileBase* projectileClass; // 0x00(0x08)
	enum class EProjectileSwitchCriteria CriteriaType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float CriteriaThreshhold; // 0x0c(0x04)
};

// ScriptStruct FSD.PromotionRewardsRank
// Size: 0x60 (Inherited: 0x00)
struct FPromotionRewardsRank {
	struct TArray<struct FClaimableRewardEntry> RewardsAllClasses; // 0x00(0x10)
	struct TMap<struct UPlayerCharacterID*, struct FClaimableRewardArray> RewardsCharacterSpecific; // 0x10(0x50)
};

// ScriptStruct FSD.RagdollItem
// Size: 0x28 (Inherited: 0x00)
struct FRagdollItem {
	struct AActor* Actor; // 0x00(0x08)
	struct TArray<struct UMaterialInstanceDynamic*> Materials; // 0x08(0x10)
	struct UMaterialInstanceDynamic* DropshadowMaterial; // 0x18(0x08)
	char pad_20[0x8]; // 0x20(0x08)
};

// ScriptStruct FSD.ExposedProperty
// Size: 0x01 (Inherited: 0x00)
struct FExposedProperty {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct FSD.ExposedFloat
// Size: 0x28 (Inherited: 0x01)
struct FExposedFloat : FExposedProperty {
	struct FName PropertyName; // 0x00(0x08)
	struct FText Description; // 0x08(0x18)
	float MinValue; // 0x20(0x04)
	float MaxValue; // 0x24(0x04)
};

// ScriptStruct FSD.ExposableFloat
// Size: 0x28 (Inherited: 0x00)
struct FExposableFloat {
	float Value; // 0x00(0x04)
	bool Exposed; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct FText Description; // 0x08(0x18)
	float MinValue; // 0x20(0x04)
	float MaxValue; // 0x24(0x04)
};

// ScriptStruct FSD.RecoilImpulse
// Size: 0x0c (Inherited: 0x00)
struct FRecoilImpulse {
	float Rotation; // 0x00(0x04)
	struct FVector2D Impulse; // 0x04(0x08)
};

// ScriptStruct FSD.ResourceInitalizer
// Size: 0x10 (Inherited: 0x00)
struct FResourceInitalizer {
	struct UResourceData* Resource; // 0x00(0x08)
	float MaxAmount; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct FSD.ResourceDebris
// Size: 0x10 (Inherited: 0x00)
struct FResourceDebris {
	float InfluencerRange; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UDebrisBase* Debris; // 0x08(0x08)
};

// ScriptStruct FSD.RichTextParseResult
// Size: 0x40 (Inherited: 0x00)
struct FRichTextParseResult {
	struct FText SourceText; // 0x00(0x18)
	struct FString UnformattedString; // 0x18(0x10)
	int32_t UnformattedLength; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct TArray<struct FRichTextToken> Tokens; // 0x30(0x10)
};

// ScriptStruct FSD.RichTextToken
// Size: 0x20 (Inherited: 0x00)
struct FRichTextToken {
	struct FString Tag; // 0x00(0x10)
	struct FString Text; // 0x10(0x10)
};

// ScriptStruct FSD.TextStyleOverride
// Size: 0x90 (Inherited: 0x00)
struct FTextStyleOverride {
	bool bOverrideFont; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FSlateFontInfo Font; // 0x08(0x50)
	bool bOverrideColor; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
	struct FSlateColor Color; // 0x60(0x28)
	bool bOverrideSize; // 0x88(0x01)
	char pad_89[0x3]; // 0x89(0x03)
	float SizeScale; // 0x8c(0x04)
};

// ScriptStruct FSD.RoomGeneratorGroupInstance
// Size: 0x10 (Inherited: 0x00)
struct FRoomGeneratorGroupInstance {
	struct TArray<struct URoomGenerator*> Rooms; // 0x00(0x10)
};

// ScriptStruct FSD.RoomNodeBase
// Size: 0x01 (Inherited: 0x00)
struct FRoomNodeBase {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct FSD.RoomNode
// Size: 0xe0 (Inherited: 0x01)
struct FRoomNode : FRoomNodeBase {
	int32_t ID; // 0x00(0x04)
	enum class ERoomType RoomType; // 0x04(0x01)
	char pad_6[0x2]; // 0x06(0x02)
	int32_t CarvePass; // 0x08(0x04)
	struct FVector Position; // 0x0c(0x0c)
	float Radius; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<int32_t> EntranceIDs; // 0x20(0x10)
	struct TArray<int32_t> ExitIDs; // 0x30(0x10)
	struct TArray<struct FRoomEntrance> RoomEntrances; // 0x40(0x10)
	bool CanHaveEnemies; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct TArray<struct FGeneratedRoom> Rooms; // 0x58(0x10)
	float ResourceMultiplier; // 0x68(0x04)
	float WeightedResourceAmount; // 0x6c(0x04)
	struct TArray<struct FRoomGeneratorItem> RoomGenerators; // 0x70(0x10)
	char pad_80[0x60]; // 0x80(0x60)
};

// ScriptStruct FSD.RoomGeneratorItem
// Size: 0x18 (Inherited: 0x00)
struct FRoomGeneratorItem {
	struct URoomGeneratorBase* RoomGenerator; // 0x00(0x08)
	struct FVector Position; // 0x08(0x0c)
	float Rotation; // 0x14(0x04)
};

// ScriptStruct FSD.GeneratedRoom
// Size: 0x88 (Inherited: 0x00)
struct FGeneratedRoom {
	struct UTerrainMaterial* Material; // 0x00(0x08)
	struct TArray<struct FRoomLine> Lines; // 0x08(0x10)
	struct TArray<struct FPillar> Pillars; // 0x18(0x10)
	struct TArray<struct FRoomBox> BoxCarvers; // 0x28(0x10)
	struct TArray<struct FRoomBox> BoxFillers; // 0x38(0x10)
	struct TArray<struct FResourceLocation> ResourceLocations; // 0x48(0x10)
	struct TArray<struct FRoomEntrance> Entrances; // 0x58(0x10)
	struct TArray<struct FRoomItem> RoomItems; // 0x68(0x10)
	struct TArray<struct FTriggerItem> TriggerItems; // 0x78(0x10)
};

// ScriptStruct FSD.TriggerItem
// Size: 0x50 (Inherited: 0x00)
struct FTriggerItem {
	struct ASpawnTrigger* TriggerClass; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform Transform; // 0x10(0x30)
	struct FName Message; // 0x40(0x08)
	char pad_48[0x8]; // 0x48(0x08)
};

// ScriptStruct FSD.RoomItem
// Size: 0x20 (Inherited: 0x00)
struct FRoomItem {
	struct AActor* Spawnable; // 0x00(0x08)
	struct FVector Location; // 0x08(0x0c)
	struct FRotator_NoQuantize Rotation; // 0x14(0x0c)
};

// ScriptStruct FSD.Rotator_NoQuantize
// Size: 0x0c (Inherited: 0x0c)
struct FRotator_NoQuantize : FRotator {
};

// ScriptStruct FSD.RoomEntrance
// Size: 0x20 (Inherited: 0x00)
struct FRoomEntrance {
	struct FVector Location; // 0x00(0x0c)
	struct FVector Direction; // 0x0c(0x0c)
	bool IsBLocked; // 0x18(0x01)
	enum class ECaveEntranceType EntranceType; // 0x19(0x01)
	enum class ECaveEntrancePriority Priority; // 0x1a(0x01)
	char pad_1B[0x1]; // 0x1b(0x01)
	int32_t PathObstacleID; // 0x1c(0x04)
};

// ScriptStruct FSD.ResourceLocation
// Size: 0x20 (Inherited: 0x00)
struct FResourceLocation {
	struct FVector Location; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UResourceData* Resource; // 0x10(0x08)
	float BaseAmount; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct FSD.RoomBox
// Size: 0x30 (Inherited: 0x00)
struct FRoomBox {
	struct FVector Position; // 0x00(0x0c)
	struct FRotator_NoQuantize Rotation; // 0x0c(0x0c)
	struct FVector Extends; // 0x18(0x0c)
	float NoiseRange; // 0x24(0x04)
	struct UFloodFillSettings* Noise; // 0x28(0x08)
};

// ScriptStruct FSD.Pillar
// Size: 0x20 (Inherited: 0x00)
struct FPillar {
	struct UFloodFillSettings* NoiseOverride; // 0x00(0x08)
	struct TArray<struct FWeightedLinePoint> Points; // 0x08(0x10)
	float NoiseScale; // 0x18(0x04)
	float EndcapScale; // 0x1c(0x04)
};

// ScriptStruct FSD.WeightedLinePoint
// Size: 0x1c (Inherited: 0x00)
struct FWeightedLinePoint {
	struct FVector Location; // 0x00(0x0c)
	float range; // 0x0c(0x04)
	float NoiseRange; // 0x10(0x04)
	float SkewFactor; // 0x14(0x04)
	float FillAmount; // 0x18(0x04)
};

// ScriptStruct FSD.RoomLine
// Size: 0x40 (Inherited: 0x00)
struct FRoomLine {
	struct UFloodFillSettings* WallNoiseOverride; // 0x00(0x08)
	struct UFloodFillSettings* CeilingNoiseOverride; // 0x08(0x08)
	struct UFloodFillSettings* FloorNoiseOverride; // 0x10(0x08)
	bool UseDetailNoise; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct TArray<struct FRoomLinePoint> Points; // 0x20(0x10)
	struct TArray<struct FVector> RightVectors; // 0x30(0x10)
};

// ScriptStruct FSD.RoomLinePoint
// Size: 0x30 (Inherited: 0x00)
struct FRoomLinePoint {
	struct FVector Location; // 0x00(0x0c)
	float HRange; // 0x0c(0x04)
	float VRange; // 0x10(0x04)
	float CielingNoiseRange; // 0x14(0x04)
	float WallNoiseRange; // 0x18(0x04)
	float FloorNoiseRange; // 0x1c(0x04)
	float Cielingheight; // 0x20(0x04)
	float HeightScale; // 0x24(0x04)
	float FloorDepth; // 0x28(0x04)
	float FloorAngle; // 0x2c(0x04)
};

// ScriptStruct FSD.TunnelNode
// Size: 0xd8 (Inherited: 0x01)
struct FTunnelNode : FRoomNodeBase {
	int32_t EntranceRoomID; // 0x00(0x04)
	int32_t ExitRoomID; // 0x04(0x04)
	struct FRoomEntrance Entrance; // 0x08(0x20)
	struct FRoomEntrance Exit; // 0x28(0x20)
	struct UTunnelParameters* ParametersOverride; // 0x48(0x08)
	struct FTunnelPath Path; // 0x50(0x10)
	int32_t ID; // 0x60(0x04)
	struct FVector DirtStartLocation; // 0x64(0x0c)
	bool AddDirt; // 0x70(0x01)
	char pad_72[0x2]; // 0x72(0x02)
	float WeightedResourceAmount; // 0x74(0x04)
	char pad_78[0x60]; // 0x78(0x60)
};

// ScriptStruct FSD.RandLinePoint
// Size: 0x2c (Inherited: 0x00)
struct FRandLinePoint {
	struct FVector Location; // 0x00(0x0c)
	struct FRandRange range; // 0x0c(0x08)
	struct FRandRange NoiseRange; // 0x14(0x08)
	struct FRandRange SkewFactor; // 0x1c(0x08)
	struct FRandRange FillAmount; // 0x24(0x08)
};

// ScriptStruct FSD.SaveGameSnapShot
// Size: 0xc8 (Inherited: 0x00)
struct FSaveGameSnapShot {
	struct TWeakObjectPtr<struct UFSDSaveGame> SaveGame; // 0x00(0x08)
	struct FString Filename; // 0x08(0x10)
	bool IsObsolete; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	int32_t VersionNumber; // 0x1c(0x04)
	int32_t Credits; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct TMap<struct APlayerCharacter*, int32_t> CharacterLevels; // 0x28(0x50)
	struct TMap<struct UResourceData*, int32_t> Resources; // 0x78(0x50)
};

// ScriptStruct FSD.SchematicGADataEntry
// Size: 0x30 (Inherited: 0x08)
struct FSchematicGADataEntry : FTableRowBase {
	char pad_8[0x10]; // 0x08(0x10)
	int32_t SchematicGAID; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FString SchematicName; // 0x20(0x10)
};

// ScriptStruct FSD.SchematicBankItem
// Size: 0x20 (Inherited: 0x00)
struct FSchematicBankItem {
	struct USchematicPricingTier* PricingTier; // 0x00(0x08)
	struct USchematicRarity* Rarity; // 0x08(0x08)
	struct TArray<struct USchematic*> Schematics; // 0x10(0x10)
};

// ScriptStruct FSD.SchematicType
// Size: 0x70 (Inherited: 0x00)
struct FSchematicType {
	struct TSoftObjectPtr<struct UTexture2D> Icon; // 0x00(0x28)
	struct FLinearColor IconTint; // 0x28(0x10)
	struct TSoftObjectPtr<struct UTexture2D> Frame; // 0x38(0x28)
	struct FLinearColor FrameTint; // 0x60(0x10)
};

// ScriptStruct FSD.UnassignedReward
// Size: 0x10 (Inherited: 0x00)
struct FUnassignedReward {
	struct UReward* Reward; // 0x00(0x08)
	int32_t Index; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct FSD.SeasonLevel
// Size: 0x10 (Inherited: 0x00)
struct FSeasonLevel {
	struct UReward* Reward; // 0x00(0x08)
	struct UReward* specialReward; // 0x08(0x08)
};

// ScriptStruct FSD.TrackedStatInfo
// Size: 0x50 (Inherited: 0x00)
struct FTrackedStatInfo {
	struct UMissionStat* Stat; // 0x00(0x08)
	struct FText Name; // 0x08(0x18)
	struct TSoftObjectPtr<struct UTexture2D> Image; // 0x20(0x28)
	struct UDataAsset* assetReference; // 0x48(0x08)
};

// ScriptStruct FSD.ChallengeInfo
// Size: 0xa0 (Inherited: 0x00)
struct FChallengeInfo {
	struct FText Text; // 0x00(0x18)
	struct UTexture2D* Icon; // 0x18(0x08)
	struct UTexture2D* IconOutlined; // 0x20(0x08)
	struct FLinearColor Color; // 0x28(0x10)
	int32_t CurrentWins; // 0x38(0x04)
	int32_t NumberOfWins; // 0x3c(0x04)
	int32_t XPCompleteGain; // 0x40(0x04)
	int32_t TokenGain; // 0x44(0x04)
	struct TSoftObjectPtr<struct UTexture2D> Stat1Image; // 0x48(0x28)
	struct TSoftObjectPtr<struct UTexture2D> Stat2Image; // 0x70(0x28)
	bool bIsSpecial; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
};

// ScriptStruct FSD.ChallengeVariation
// Size: 0x0c (Inherited: 0x00)
struct FChallengeVariation {
	int32_t NumberOfWins; // 0x00(0x04)
	int32_t XPCompleteGain; // 0x04(0x04)
	int32_t TokenGain; // 0x08(0x04)
};

// ScriptStruct FSD.SeasonalEventEntry
// Size: 0x18 (Inherited: 0x00)
struct FSeasonalEventEntry {
	struct USpecialEvent* SpecialEvent; // 0x00(0x08)
	struct TArray<struct UMissionTemplate*> BannedMissions; // 0x08(0x10)
};

// ScriptStruct FSD.SeasonMissionResult
// Size: 0x30 (Inherited: 0x00)
struct FSeasonMissionResult {
	int32_t XPFromMission; // 0x00(0x04)
	int32_t XPFromChallenges; // 0x04(0x04)
	int32_t TokenGain; // 0x08(0x04)
	bool LevelIncreased; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct TArray<struct FChallengeInfo> UpdatedChallenges; // 0x10(0x10)
	struct TArray<struct FSeasonEvent> CompletedEvents; // 0x20(0x10)
};

// ScriptStruct FSD.SeasonEvent
// Size: 0x20 (Inherited: 0x00)
struct FSeasonEvent {
	struct USeasonEventData* Event; // 0x00(0x08)
	int32_t count; // 0x08(0x04)
	char pad_C[0x14]; // 0x0c(0x14)
};

// ScriptStruct FSD.FSDServerListResponse
// Size: 0x10 (Inherited: 0x00)
struct FFSDServerListResponse {
	struct TArray<struct FFSDServerListEntryModel> Lobbies; // 0x00(0x10)
};

// ScriptStruct FSD.FSDServerListEntryModel
// Size: 0xd8 (Inherited: 0x00)
struct FFSDServerListEntryModel {
	struct FString ID; // 0x00(0x10)
	struct FString DRG_SERVERNAME; // 0x10(0x10)
	struct FString DRG_SERVERNAME_SAN; // 0x20(0x10)
	int32_t DRG_GLOBALMISSION_SEED; // 0x30(0x04)
	int32_t DRG_MISSION_SEED; // 0x34(0x04)
	int32_t DRG_DIFF; // 0x38(0x04)
	int32_t DRG_GAMESTATE; // 0x3c(0x04)
	int32_t DRG_PWREQUIRED; // 0x40(0x04)
	int32_t DRG_PRIVATE; // 0x44(0x04)
	int32_t DRG_NUMPLAYERS; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct FString DRG_CLASSES; // 0x50(0x10)
	int32_t DRG_CLASSLOCK; // 0x60(0x04)
	int32_t DRG_FULL; // 0x64(0x04)
	struct FString DRG_REGION; // 0x68(0x10)
	struct FString DRG_START; // 0x78(0x10)
	int32_t DRG_VERSION; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
	struct FString HostUserID; // 0x90(0x10)
	struct FString DRG_MISSIONSTRUCTURE; // 0xa0(0x10)
	struct FString P2PAddr; // 0xb0(0x10)
	int32_t P2PPORT; // 0xc0(0x04)
	float Distance; // 0xc4(0x04)
	struct TArray<struct FFSDServerListEntryModModel> Mods; // 0xc8(0x10)
};

// ScriptStruct FSD.FSDServerListEntryModModel
// Size: 0x28 (Inherited: 0x00)
struct FFSDServerListEntryModModel {
	struct FString Name; // 0x00(0x10)
	int32_t Category; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString Version; // 0x18(0x10)
};

// ScriptStruct FSD.FSDServerListRequest
// Size: 0x78 (Inherited: 0x00)
struct FFSDServerListRequest {
	char pad_0[0x8]; // 0x00(0x08)
	struct FString AuthenticationTicket; // 0x08(0x10)
	struct FString IgnoreId; // 0x18(0x10)
	int32_t Distance; // 0x28(0x04)
	int32_t DRG_PWREQUIRED; // 0x2c(0x04)
	struct FString DRG_REGION; // 0x30(0x10)
	int32_t DRG_VERSION; // 0x40(0x04)
	int32_t DifficultyBitset; // 0x44(0x04)
	int32_t MissionSeed; // 0x48(0x04)
	int32_t GlobalMissionSeed; // 0x4c(0x04)
	struct FString SearchString; // 0x50(0x10)
	bool DeepDive; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	struct FString Platform; // 0x68(0x10)
};

// ScriptStruct FSD.FSDSteamServerListRequest
// Size: 0xa8 (Inherited: 0x78)
struct FFSDSteamServerListRequest : FFSDServerListRequest {
	struct FString SteamTicket; // 0x78(0x10)
	struct FString SteamPingLoc; // 0x88(0x10)
	struct TArray<int32_t> GameTypes; // 0x98(0x10)
};

// ScriptStruct FSD.FriendInfo
// Size: 0x50 (Inherited: 0x00)
struct FFriendInfo {
	struct FString DisplayName; // 0x00(0x10)
	struct FString RealName; // 0x10(0x10)
	bool IsOnline; // 0x20(0x01)
	bool IsPlaying; // 0x21(0x01)
	bool IsPlayingThisGame; // 0x22(0x01)
	bool IsJoinable; // 0x23(0x01)
	char pad_24[0x4]; // 0x24(0x04)
	struct FString sessionId; // 0x28(0x10)
	bool HasVoiceSupport; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FString PresenceStatus; // 0x40(0x10)
};

// ScriptStruct FSD.LookupSessionResponse
// Size: 0x30 (Inherited: 0x00)
struct FLookupSessionResponse {
	bool Valid; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString LobbyId; // 0x08(0x10)
	struct FString P2PAddr; // 0x18(0x10)
	int32_t P2PPORT; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct FSD.LookupSessionRequest
// Size: 0x10 (Inherited: 0x00)
struct FLookupSessionRequest {
	struct FString SessionKey; // 0x00(0x10)
};

// ScriptStruct FSD.StopSessionResponse
// Size: 0x01 (Inherited: 0x00)
struct FStopSessionResponse {
	bool success; // 0x00(0x01)
};

// ScriptStruct FSD.StopSessionRequest
// Size: 0x10 (Inherited: 0x00)
struct FStopSessionRequest {
	struct FString SessionKey; // 0x00(0x10)
};

// ScriptStruct FSD.SessionUpdateResponse
// Size: 0x01 (Inherited: 0x00)
struct FSessionUpdateResponse {
	bool success; // 0x00(0x01)
};

// ScriptStruct FSD.SessionUpdateRequest
// Size: 0x18 (Inherited: 0x00)
struct FSessionUpdateRequest {
	struct FString SessionKey; // 0x00(0x10)
	int32_t NumPlayers; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct FSD.RegisterSessionResponse
// Size: 0x10 (Inherited: 0x00)
struct FRegisterSessionResponse {
	struct FString SessionKey; // 0x00(0x10)
};

// ScriptStruct FSD.RegisterSessionRequest
// Size: 0x40 (Inherited: 0x00)
struct FRegisterSessionRequest {
	struct FString serverName; // 0x00(0x10)
	int32_t NumPlayers; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString LobbyId; // 0x18(0x10)
	struct FString P2PAddr; // 0x28(0x10)
	int32_t P2PPORT; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct FSD.SoundClassManagerItem
// Size: 0x0c (Inherited: 0x00)
struct FSoundClassManagerItem {
	char pad_0[0xc]; // 0x00(0x0c)
};

// ScriptStruct FSD.SoundMixManagerItem
// Size: 0x10 (Inherited: 0x00)
struct FSoundMixManagerItem {
	struct USoundMix* mix; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct FSD.SpiderAnimInstanceProxy
// Size: 0x6e0 (Inherited: 0x6e0)
struct FSpiderAnimInstanceProxy : FAnimInstanceProxy {
};

// ScriptStruct FSD.RandomWalkCycleEntry
// Size: 0x14 (Inherited: 0x00)
struct FRandomWalkCycleEntry {
	float RandomSelectionWeight; // 0x00(0x04)
	struct FRandRange Duration; // 0x04(0x08)
	float CoolDown; // 0x0c(0x04)
	float LastTimePlayed; // 0x10(0x04)
};

// ScriptStruct FSD.ActiveStatusEffectBank
// Size: 0x48 (Inherited: 0x00)
struct FActiveStatusEffectBank {
	struct UStatusEffect* Key; // 0x00(0x08)
	struct UStatusEffect* ActiveEffect; // 0x08(0x08)
	char pad_10[0x28]; // 0x10(0x28)
	struct TArray<struct FActiveStatusEffect> Effects; // 0x38(0x10)
};

// ScriptStruct FSD.ActiveStatusEffect
// Size: 0x08 (Inherited: 0x00)
struct FActiveStatusEffect {
	struct TWeakObjectPtr<struct AActor> Owner; // 0x00(0x08)
};

// ScriptStruct FSD.HeatSource
// Size: 0x08 (Inherited: 0x00)
struct FHeatSource {
	float Temperature; // 0x00(0x04)
	int32_t Intensity; // 0x04(0x04)
};

// ScriptStruct FSD.TentacleAnimInstanceProxy
// Size: 0x7d0 (Inherited: 0x6e0)
struct FTentacleAnimInstanceProxy : FAnimInstanceProxy {
	char pad_6E0[0xf0]; // 0x6e0(0xf0)
};

// ScriptStruct FSD.AnimNode_Tentacle
// Size: 0x1d0 (Inherited: 0xc8)
struct FAnimNode_Tentacle : FAnimNode_SkeletalControlBase {
	struct TArray<struct FBoneReference> BonesToModify; // 0xc8(0x10)
	char pad_D8[0xf8]; // 0xd8(0xf8)
};

// ScriptStruct FSD.TentacleTarget
// Size: 0x20 (Inherited: 0x00)
struct FTentacleTarget {
	struct FVector_NetQuantize Location; // 0x00(0x0c)
	struct FRotator Rotation; // 0x0c(0x0c)
	float MovementDuration; // 0x18(0x04)
	bool UseSpring; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct FSD.TetherMessageSettings
// Size: 0x10 (Inherited: 0x00)
struct FTetherMessageSettings {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct FSD.TrackMovement
// Size: 0x0c (Inherited: 0x00)
struct FTrackMovement {
	int32_t Direction; // 0x00(0x04)
	float Distance; // 0x04(0x04)
	float Speed; // 0x08(0x04)
};

// ScriptStruct FSD.PipelineMovementData
// Size: 0x1c (Inherited: 0x00)
struct FPipelineMovementData {
	int32_t Direction; // 0x00(0x04)
	float Distance; // 0x04(0x04)
	float Speed; // 0x08(0x04)
	bool UpToSpeed; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float Acceleration; // 0x10(0x04)
	struct TWeakObjectPtr<struct APipelineSegment> PipelineSegment; // 0x14(0x08)
};

// ScriptStruct FSD.TreasureWeight
// Size: 0x10 (Inherited: 0x00)
struct FTreasureWeight {
	float Weight; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UTreasureRewarder* RewarderClass; // 0x08(0x08)
};

// ScriptStruct FSD.VanityNode
// Size: 0x30 (Inherited: 0x00)
struct FVanityNode {
	struct UReward* Reward; // 0x00(0x08)
	int32_t NodeID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<int32_t> ConnectedNodes; // 0x10(0x10)
	bool bIsBig; // 0x20(0x01)
	bool bIsStartingNode; // 0x21(0x01)
	char pad_22[0x2]; // 0x22(0x02)
	struct FVector2D Position; // 0x24(0x08)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct FSD.TunnelSettingItem
// Size: 0x10 (Inherited: 0x00)
struct FTunnelSettingItem {
	struct UTunnelSegmentSetting* SegmentSetting; // 0x00(0x08)
	struct FInt32Interval SegmentSize; // 0x08(0x08)
};

// ScriptStruct FSD.TutorialHint
// Size: 0x70 (Inherited: 0x00)
struct FTutorialHint {
	struct FText Text; // 0x00(0x18)
	struct FText TaskText; // 0x18(0x18)
	struct FText Title; // 0x30(0x18)
	struct TSoftObjectPtr<struct UTexture2D> Image; // 0x48(0x28)
};

// ScriptStruct FSD.HeightenedSenseTracker
// Size: 0x20 (Inherited: 0x00)
struct FHeightenedSenseTracker {
	struct TWeakObjectPtr<struct AActor> Actor; // 0x00(0x08)
	struct TWeakObjectPtr<struct UHealthComponentBase> HealthComponent; // 0x08(0x08)
	struct TScriptInterface<None> AttackingPoint; // 0x10(0x10)
};

// ScriptStruct FSD.MasteryItem
// Size: 0x18 (Inherited: 0x00)
struct FMasteryItem {
	int32_t NeededMastery; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct UUnlockReward*> Unlocks; // 0x08(0x10)
};

// ScriptStruct FSD.UpgradeTier
// Size: 0x18 (Inherited: 0x00)
struct FUpgradeTier {
	struct TArray<struct UItemUpgrade*> upgrades; // 0x00(0x10)
	int32_t RequiredCharacterLevel; // 0x10(0x04)
	int32_t RequiredPlayerRank; // 0x14(0x04)
};

// ScriptStruct FSD.VanityTestCharacterItem
// Size: 0x10 (Inherited: 0x00)
struct FVanityTestCharacterItem {
	struct USkeletalMesh* Mesh; // 0x00(0x08)
	struct UVanityAnimInstance* AnimBP; // 0x08(0x08)
};

// ScriptStruct FSD.TattooArmorItem
// Size: 0x10 (Inherited: 0x00)
struct FTattooArmorItem {
	struct UVanityTattoo* Tattoo; // 0x00(0x08)
	bool IsLeftArm; // 0x08(0x01)
	bool FlipTexture; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
};

// ScriptStruct FSD.WeakpointChannel
// Size: 0x30 (Inherited: 0x00)
struct FWeakpointChannel {
	char pad_0[0x10]; // 0x00(0x10)
	struct UFSDPhysicalMaterial* WeakPointMaterial; // 0x10(0x08)
	struct FName Bone; // 0x18(0x08)
	struct UMaterialInstanceDynamic* Mid; // 0x20(0x08)
	char pad_28[0x8]; // 0x28(0x08)
};

// ScriptStruct FSD.WeakpointTask
// Size: 0x110 (Inherited: 0x00)
struct FWeakpointTask {
	struct FRichCurve GrowCurve; // 0x00(0x80)
	struct FRichCurve FadeCurve; // 0x80(0x80)
	char pad_100[0x10]; // 0x100(0x10)
};

// ScriptStruct FSD.WeaponHitCounterEffectItem
// Size: 0x08 (Inherited: 0x00)
struct FWeaponHitCounterEffectItem {
	struct TWeakObjectPtr<struct AActor> Target; // 0x00(0x08)
};

// ScriptStruct FSD.WeightedRoomSelector
// Size: 0x10 (Inherited: 0x00)
struct FWeightedRoomSelector {
	struct TArray<struct FWeightedRoomSelectorItem> Items; // 0x00(0x10)
};

// ScriptStruct FSD.WeightedRoomSelectorItem
// Size: 0x10 (Inherited: 0x00)
struct FWeightedRoomSelectorItem {
	struct URoomGenerator* Room; // 0x00(0x08)
	float Weight; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct FSD.XPSettings
// Size: 0x0c (Inherited: 0x00)
struct FXPSettings {
	float XP_PerGold; // 0x00(0x04)
	float XP_PerKill; // 0x04(0x04)
	float XP_OnSurvivedLevel; // 0x08(0x04)
};

// ScriptStruct FSD.ZipLineConnectorHandler
// Size: 0x30 (Inherited: 0x00)
struct FZipLineConnectorHandler {
	SoftClassProperty ConnectorClass; // 0x00(0x28)
	struct AZipLineConnector* Connector; // 0x28(0x08)
};

// ScriptStruct FSD.ZipLine
// Size: 0x38 (Inherited: 0x00)
struct FZipLine {
	struct FVector Start; // 0x00(0x0c)
	struct FVector End; // 0x0c(0x0c)
	char pad_18[0x20]; // 0x18(0x20)
};

