// Enum  CoreUObject.EInterpCurveMode
enum class EInterpCurveMode : uint8_t
{
    CIM_Linear                                     = 0,
    CIM_CurveAuto                                  = 1,
    CIM_Constant                                   = 2,
    CIM_CurveUser                                  = 3,
    CIM_CurveBreak                                 = 4,
    CIM_CurveAutoClamped                           = 5,
    CIM_MAX                                        = 6

};


// Enum  CoreUObject.Default__Enum
enum class Default__Enum : uint8_t
{

};


// Enum  CoreUObject.ERangeBoundTypes
enum class ERangeBoundTypes : uint8_t
{
    Exclusive                                      = 0,
    Inclusive                                      = 1,
    Open                                           = 2,
    ERangeBoundTypes_MAX                           = 3

};


// Enum  CoreUObject.ELocalizedTextSourceCategory
enum class ELocalizedTextSourceCategory : uint8_t
{
    Game                                           = 0,
    Engine                                         = 1,
    Editor                                         = 2,
    ELocalizedTextSourceCategory_MAX               = 3

};


// Enum  CoreUObject.EAutomationEventType
enum class EAutomationEventType : uint8_t
{
    Info                                           = 0,
    Warning                                        = 1,
    Error                                          = 2,
    EAutomationEventType_MAX                       = 3

};


// Enum  Landmass.EBrushFalloffMode
enum class EBrushFalloffMode : uint8_t
{
    Angle                                          = 0,
    Width                                          = 1,
    EBrushFalloffMode_MAX                          = 2

};


// Enum  Landmass.EBrushBlendType
enum class EBrushBlendType : uint8_t
{
    AlphaBlend                                     = 0,
    Min                                            = 1,
    Max                                            = 2,
    Additive                                       = 3

};


// Enum  AnimationBudgetAllocator.ESkeletalMeshAnimDetailMode
enum class ESkeletalMeshAnimDetailMode : uint8_t
{
    SMADM_Low                                      = 0,
    SMADM_Medium                                   = 1,
    SMADM_High                                     = 2,
    SMADM_MAX                                      = 3

};


// Enum  Engine.ETextGender
enum class ETextGender : uint8_t
{
    Masculine                                      = 0,
    Feminine                                       = 1,
    Neuter                                         = 2,
    ETextGender_MAX                                = 3

};


// Enum  Engine.EFormatArgumentType
enum class EFormatArgumentType : uint8_t
{
    Int                                            = 0,
    UInt                                           = 1,
    Float                                          = 2,
    Double                                         = 3,
    Text                                           = 4,
    Gender                                         = 5,
    EFormatArgumentType_MAX                        = 6

};


// Enum  InputCore.ETouchIndex
enum class ETouchIndex : uint8_t
{
    Touch1                                         = 0,
    Touch2                                         = 1,
    Touch3                                         = 2,
    Touch4                                         = 3,
    Touch5                                         = 4,
    Touch6                                         = 5,
    Touch7                                         = 6,
    Touch8                                         = 7,
    Touch9                                         = 8,
    Touch10                                        = 9,
    CursorPointerIndex                             = 10,
    MAX_TOUCHES                                    = 11,
    ETouchIndex_MAX                                = 12

};


// Enum  Engine.EEndPlayReason
enum class EEndPlayReason : uint8_t
{
    Destroyed                                      = 0,
    LevelTransition                                = 1,
    EndPlayInEditor                                = 2,
    RemovedFromWorld                               = 3,
    Quit                                           = 4,
    EEndPlayReason_MAX                             = 5

};


// Enum  Engine.ETickingGroup
enum class ETickingGroup : uint8_t
{
    TG_PrePhysics                                  = 0,
    TG_StartPhysics                                = 1,
    TG_DuringPhysics                               = 2,
    TG_EndPhysics                                  = 3,
    TG_PostPhysics                                 = 4,
    TG_PostUpdateWork                              = 5,
    TG_LastDemotable                               = 6,
    TG_NewlySpawned                                = 7,
    TG_MAX                                         = 8

};


// Enum  Engine.EComponentCreationMethod
enum class EComponentCreationMethod : uint8_t
{
    Native                                         = 0,
    SimpleConstructionScript                       = 1,
    UserConstructionScript                         = 2,
    Instance                                       = 3,
    EComponentCreationMethod_MAX                   = 4

};


// Enum  Engine.ETemperatureSeverityType
enum class ETemperatureSeverityType : uint8_t
{
    Unknown                                        = 0,
    Good                                           = 1,
    Bad                                            = 2,
    Serious                                        = 3,
    Critical                                       = 4,
    NumSeverities                                  = 5,
    ETemperatureSeverityType_MAX                   = 6

};


// Enum  Engine.EPlaneConstraintAxisSetting
enum class EPlaneConstraintAxisSetting : uint8_t
{
    Custom                                         = 0,
    X                                              = 1,
    Y                                              = 2,
    Z                                              = 3,
    UseGlobalPhysicsSetting                        = 4,
    EPlaneConstraintAxisSetting_MAX                = 5

};


// Enum  Engine.EInterpToBehaviourType
enum class EInterpToBehaviourType : uint8_t
{
    OneShot                                        = 0,
    OneShot_Reverse                                = 1,
    Loop_Reset                                     = 2,
    PingPong                                       = 3,
    EInterpToBehaviourType_MAX                     = 4

};


// Enum  Engine.ETeleportType
enum class ETeleportType : uint8_t
{
    None                                           = 0,
    TeleportPhysics                                = 1,
    ResetPhysics                                   = 2,
    ETeleportType_MAX                              = 3

};


// Enum  Engine.EPlatformInterfaceDataType
enum class EPlatformInterfaceDataType : uint8_t
{
    PIDT_None                                      = 0,
    PIDT_Int                                       = 1,
    PIDT_Float                                     = 2,
    PIDT_String                                    = 3,
    PIDT_Object                                    = 4,
    PIDT_Custom                                    = 5,
    PIDT_MAX                                       = 6

};


// Enum  Engine.EMovementMode
enum class EMovementMode : uint8_t
{
    MOVE_None                                      = 0,
    MOVE_Walking                                   = 1,
    MOVE_NavWalking                                = 2,
    MOVE_Falling                                   = 3,
    MOVE_Swimming                                  = 4,
    MOVE_Flying                                    = 5,
    MOVE_Custom                                    = 6,
    MOVE_MAX                                       = 7

};


// Enum  Engine.ENetworkFailure
enum class ENetworkFailure : uint8_t
{
    NetDriverAlreadyExists                         = 0,
    NetDriverCreateFailure                         = 1,
    NetDriverListenFailure                         = 2,
    ConnectionLost                                 = 3,
    ConnectionTimeout                              = 4,
    FailureReceived                                = 5,
    OutdatedClient                                 = 6,
    OutdatedServer                                 = 7,
    PendingConnectionFailure                       = 8,
    NetGuidMismatch                                = 9,
    NetChecksumMismatch                            = 10,
    ENetworkFailure_MAX                            = 11

};


// Enum  Engine.ETravelFailure
enum class ETravelFailure : uint8_t
{
    NoLevel                                        = 0,
    LoadMapFailure                                 = 1,
    InvalidURL                                     = 2,
    PackageMissing                                 = 3,
    PackageVersion                                 = 4,
    NoDownload                                     = 5,
    TravelFailure                                  = 6,
    CheatCommands                                  = 7,
    PendingNetGameCreateFailure                    = 8,
    CloudSaveFailure                               = 9,
    ServerTravelFailure                            = 10,
    ClientTravelFailure                            = 11,
    ETravelFailure_MAX                             = 12

};


// Enum  Engine.EScreenOrientation
enum class EScreenOrientation : uint8_t
{
    Unknown                                        = 0,
    Portrait                                       = 1,
    PortraitUpsideDown                             = 2,
    LandscapeLeft                                  = 3,
    LandscapeRight                                 = 4,
    FaceUp                                         = 5,
    FaceDown                                       = 6,
    EScreenOrientation_MAX                         = 7

};


// Enum  Engine.EApplicationState
enum class EApplicationState : uint8_t
{
    Unknown                                        = 0,
    Inactive                                       = 1,
    Background                                     = 2,
    Active                                         = 3,
    EApplicationState_MAX                          = 4

};


// Enum  Engine.EObjectTypeQuery
enum class EObjectTypeQuery : uint8_t
{
    ObjectTypeQuery1                               = 0,
    ObjectTypeQuery2                               = 1,
    ObjectTypeQuery3                               = 2,
    ObjectTypeQuery4                               = 3,
    ObjectTypeQuery5                               = 4,
    ObjectTypeQuery6                               = 5,
    ObjectTypeQuery7                               = 6,
    ObjectTypeQuery8                               = 7,
    ObjectTypeQuery9                               = 8,
    ObjectTypeQuery10                              = 9,
    ObjectTypeQuery11                              = 10,
    ObjectTypeQuery12                              = 11,
    ObjectTypeQuery13                              = 12,
    ObjectTypeQuery14                              = 13,
    ObjectTypeQuery15                              = 14,
    ObjectTypeQuery16                              = 15,
    ObjectTypeQuery17                              = 16,
    ObjectTypeQuery18                              = 17,
    ObjectTypeQuery19                              = 18,
    ObjectTypeQuery20                              = 19,
    ObjectTypeQuery21                              = 20,
    ObjectTypeQuery22                              = 21,
    ObjectTypeQuery23                              = 22,
    ObjectTypeQuery24                              = 23,
    ObjectTypeQuery25                              = 24,
    ObjectTypeQuery26                              = 25,
    ObjectTypeQuery27                              = 26,
    ObjectTypeQuery28                              = 27,
    ObjectTypeQuery29                              = 28,
    ObjectTypeQuery30                              = 29,
    ObjectTypeQuery31                              = 30,
    ObjectTypeQuery32                              = 31,
    ObjectTypeQuery_MAX                            = 32,
    EObjectTypeQuery_MAX                           = 33

};


// Enum  Engine.EDrawDebugTrace
enum class EDrawDebugTrace : uint8_t
{
    None                                           = 0,
    ForOneFrame                                    = 1,
    ForDuration                                    = 2,
    Persistent                                     = 3,
    EDrawDebugTrace_MAX                            = 4

};


// Enum  Engine.ETraceTypeQuery
enum class ETraceTypeQuery : uint8_t
{
    TraceTypeQuery1                                = 0,
    TraceTypeQuery2                                = 1,
    TraceTypeQuery3                                = 2,
    TraceTypeQuery4                                = 3,
    TraceTypeQuery5                                = 4,
    TraceTypeQuery6                                = 5,
    TraceTypeQuery7                                = 6,
    TraceTypeQuery8                                = 7,
    TraceTypeQuery9                                = 8,
    TraceTypeQuery10                               = 9,
    TraceTypeQuery11                               = 10,
    TraceTypeQuery12                               = 11,
    TraceTypeQuery13                               = 12,
    TraceTypeQuery14                               = 13,
    TraceTypeQuery15                               = 14,
    TraceTypeQuery16                               = 15,
    TraceTypeQuery17                               = 16,
    TraceTypeQuery18                               = 17,
    TraceTypeQuery19                               = 18,
    TraceTypeQuery20                               = 19,
    TraceTypeQuery21                               = 20,
    TraceTypeQuery22                               = 21,
    TraceTypeQuery23                               = 22,
    TraceTypeQuery24                               = 23,
    TraceTypeQuery25                               = 24,
    TraceTypeQuery26                               = 25,
    TraceTypeQuery27                               = 26,
    TraceTypeQuery28                               = 27,
    TraceTypeQuery29                               = 28,
    TraceTypeQuery30                               = 29,
    TraceTypeQuery31                               = 30,
    TraceTypeQuery32                               = 31,
    TraceTypeQuery_MAX                             = 32,
    ETraceTypeQuery_MAX                            = 33

};


// Enum  Engine.EMoveComponentAction
enum class EMoveComponentAction : uint8_t
{
    Move                                           = 0,
    Stop                                           = 1,
    Return                                         = 2,
    EMoveComponentAction_MAX                       = 3

};


// Enum  Engine.EQuitPreference
enum class EQuitPreference : uint8_t
{
    Quit                                           = 0,
    Background                                     = 1,
    EQuitPreference_MAX                            = 2

};


// Enum  GameplayAbilities.EGameplayEffectGrantedAbilityRemovePolicy
enum class EGameplayEffectGrantedAbilityRemovePolicy : uint8_t
{
    CancelAbilityImmediately                       = 0,
    RemoveAbilityOnEnd                             = 1,
    DoNothing                                      = 2,
    EGameplayEffectGrantedAbilityRemovePolicy_MAX  = 3

};


// Enum  GameplayAbilities.EGameplayEffectAttributeCaptureSource
enum class EGameplayEffectAttributeCaptureSource : uint8_t
{
    Source                                         = 0,
    Target                                         = 1,
    EGameplayEffectAttributeCaptureSource_MAX      = 2

};


// Enum  GameplayTasks.ETaskResourceOverlapPolicy
enum class ETaskResourceOverlapPolicy : uint8_t
{
    StartOnTop                                     = 0,
    StartAtEnd                                     = 1,
    ETaskResourceOverlapPolicy_MAX                 = 2

};


// Enum  GameplayTasks.EGameplayTaskRunResult
enum class EGameplayTaskRunResult : uint8_t
{
    Error                                          = 0,
    Failed                                         = 1,
    Success_Paused                                 = 2,
    Success_Active                                 = 3,
    Success_Finished                               = 4,
    EGameplayTaskRunResult_MAX                     = 5

};


// Enum  GameplayAbilities.EGameplayAbilityActivationMode
enum class EGameplayAbilityActivationMode : uint8_t
{
    Authority                                      = 0,
    NonAuthority                                   = 1,
    Predicting                                     = 2,
    Confirmed                                      = 3,
    Rejected                                       = 4,
    EGameplayAbilityActivationMode_MAX             = 5

};


// Enum  GameplayAbilities.EAbilityGenericReplicatedEvent
enum class EAbilityGenericReplicatedEvent : uint8_t
{
    GenericConfirm                                 = 0,
    GenericCancel                                  = 1,
    InputPressed                                   = 2,
    InputReleased                                  = 3,
    GenericSignalFromClient                        = 4,
    GenericSignalFromServer                        = 5,
    GameCustom1                                    = 6,
    GameCustom2                                    = 7,
    GameCustom3                                    = 8,
    GameCustom4                                    = 9,
    GameCustom5                                    = 10,
    GameCustom6                                    = 11,
    MAX                                            = 12

};


// Enum  Engine.EFastArraySerializerDeltaFlags
enum class EFastArraySerializerDeltaFlags : uint8_t
{
    None                                           = 0,
    HasBeenSerialized                              = 1,
    HasDeltaBeenRequested                          = 2,
    IsUsingDeltaSerialization                      = 4,
    EFastArraySerializerDeltaFlags_MAX             = 5

};


// Enum  GameplayAbilities.EGameplayEffectReplicationMode
enum class EGameplayEffectReplicationMode : uint8_t
{
    Minimal                                        = 0,
    Mixed                                          = 1,
    Full                                           = 2,
    EGameplayEffectReplicationMode_MAX             = 3

};


// Enum  GameplayAbilities.EAbilityTaskWaitState
enum class EAbilityTaskWaitState : uint8_t
{
    WaitingOnGame                                  = 1,
    WaitingOnUser                                  = 2,
    WaitingOnAvatar                                = 4,
    EAbilityTaskWaitState_MAX                      = 5

};


// Enum  GameplayAbilities.ERootMotionMoveToActorTargetOffsetType
enum class ERootMotionMoveToActorTargetOffsetType : uint8_t
{
    AlignFromTargetToSource                        = 0,
    AlignToTargetForward                           = 1,
    AlignToWorldSpace                              = 2,
    ERootMotionMoveToActorTargetOffsetType_MAX     = 3

};


// Enum  GameplayAbilities.EAbilityTaskNetSyncType
enum class EAbilityTaskNetSyncType : uint8_t
{
    BothWait                                       = 0,
    OnlyServerWait                                 = 1,
    OnlyClientWait                                 = 2,
    EAbilityTaskNetSyncType_MAX                    = 3

};


// Enum  GameplayAbilities.EWaitAttributeChangeComparison
enum class EWaitAttributeChangeComparison : uint8_t
{
    None                                           = 0,
    GreaterThan                                    = 1,
    LessThan                                       = 2,
    GreaterThanOrEqualTo                           = 3,
    LessThanOrEqualTo                              = 4,
    NotEqualTo                                     = 5,
    ExactlyEqualTo                                 = 6,
    MAX                                            = 7

};


// Enum  GameplayAbilities.EGameplayAbilityInputBinds
enum class EGameplayAbilityInputBinds : uint8_t
{
    Ability1                                       = 0,
    Ability2                                       = 1,
    Ability3                                       = 2,
    Ability4                                       = 3,
    Ability5                                       = 4,
    Ability6                                       = 5,
    Ability7                                       = 6,
    Ability8                                       = 7,
    Ability9                                       = 8,
    EGameplayAbilityInputBinds_MAX                 = 9

};


// Enum  GameplayAbilities.ETargetDataFilterSelf
enum class ETargetDataFilterSelf : uint8_t
{
    TDFS_Any                                       = 0,
    TDFS_NoSelf                                    = 1,
    TDFS_NoOthers                                  = 2,
    TDFS_MAX                                       = 3

};


// Enum  GameplayAbilities.EGameplayAbilityTargetingLocationType
enum class EGameplayAbilityTargetingLocationType : uint8_t
{
    LiteralTransform                               = 0,
    ActorTransform                                 = 1,
    SocketTransform                                = 2,
    EGameplayAbilityTargetingLocationType_MAX      = 3

};


// Enum  GameplayAbilities.EGameplayTargetingConfirmation
enum class EGameplayTargetingConfirmation : uint8_t
{
    Instant                                        = 0,
    UserConfirmed                                  = 1,
    Custom                                         = 2,
    CustomMulti                                    = 3,
    EGameplayTargetingConfirmation_MAX             = 4

};


// Enum  GameplayAbilities.ERepAnimPositionMethod
enum class ERepAnimPositionMethod : uint8_t
{
    Position                                       = 0,
    CurrentSectionId                               = 1,
    ERepAnimPositionMethod_MAX                     = 2

};


// Enum  GameplayAbilities.EGameplayAbilityTriggerSource
enum class EGameplayAbilityTriggerSource : uint8_t
{
    GameplayEvent                                  = 0,
    OwnedTagAdded                                  = 1,
    OwnedTagPresent                                = 2,
    EGameplayAbilityTriggerSource_MAX              = 3

};


// Enum  GameplayAbilities.EGameplayAbilityReplicationPolicy
enum class EGameplayAbilityReplicationPolicy : uint8_t
{
    ReplicateNo                                    = 0,
    ReplicateYes                                   = 1,
    EGameplayAbilityReplicationPolicy_MAX          = 2

};


// Enum  GameplayAbilities.EGameplayAbilityNetSecurityPolicy
enum class EGameplayAbilityNetSecurityPolicy : uint8_t
{
    ClientOrServer                                 = 0,
    ServerOnlyExecution                            = 1,
    ServerOnlyTermination                          = 2,
    ServerOnly                                     = 3,
    EGameplayAbilityNetSecurityPolicy_MAX          = 4

};


// Enum  GameplayAbilities.EGameplayAbilityNetExecutionPolicy
enum class EGameplayAbilityNetExecutionPolicy : uint8_t
{
    LocalPredicted                                 = 0,
    LocalOnly                                      = 1,
    ServerInitiated                                = 2,
    ServerOnly                                     = 3,
    EGameplayAbilityNetExecutionPolicy_MAX         = 4

};


// Enum  GameplayAbilities.EGameplayAbilityInstancingPolicy
enum class EGameplayAbilityInstancingPolicy : uint8_t
{
    NonInstanced                                   = 0,
    InstancedPerActor                              = 1,
    InstancedPerExecution                          = 2,
    EGameplayAbilityInstancingPolicy_MAX           = 3

};


// Enum  GameplayAbilities.EGameplayCuePayloadType
enum class EGameplayCuePayloadType : uint8_t
{
    CueParameters                                  = 0,
    FromSpec                                       = 1,
    EGameplayCuePayloadType_MAX                    = 2

};


// Enum  GameplayAbilities.EGameplayEffectPeriodInhibitionRemovedPolicy
enum class EGameplayEffectPeriodInhibitionRemovedPolicy : uint8_t
{
    NeverReset                                     = 0,
    ResetPeriod                                    = 1,
    ExecuteAndResetPeriod                          = 2,
    EGameplayEffectPeriodInhibitionRemovedPolicy_MAX = 3

};


// Enum  GameplayAbilities.EGameplayEffectStackingExpirationPolicy
enum class EGameplayEffectStackingExpirationPolicy : uint8_t
{
    ClearEntireStack                               = 0,
    RemoveSingleStackAndRefreshDuration            = 1,
    RefreshDuration                                = 2,
    EGameplayEffectStackingExpirationPolicy_MAX    = 3

};


// Enum  GameplayAbilities.EGameplayEffectStackingPeriodPolicy
enum class EGameplayEffectStackingPeriodPolicy : uint8_t
{
    ResetOnSuccessfulApplication                   = 0,
    NeverReset                                     = 1,
    EGameplayEffectStackingPeriodPolicy_MAX        = 2

};


// Enum  GameplayAbilities.EGameplayEffectStackingDurationPolicy
enum class EGameplayEffectStackingDurationPolicy : uint8_t
{
    RefreshOnSuccessfulApplication                 = 0,
    NeverRefresh                                   = 1,
    UpdateDurationAndKeepRemainTime                = 2,
    EGameplayEffectStackingDurationPolicy_MAX      = 3

};


// Enum  GameplayAbilities.EGameplayEffectDurationType
enum class EGameplayEffectDurationType : uint8_t
{
    Instant                                        = 0,
    Infinite                                       = 1,
    HasDuration                                    = 2,
    EGameplayEffectDurationType_MAX                = 3

};


// Enum  GameplayAbilities.EGameplayEffectScopedModifierAggregatorType
enum class EGameplayEffectScopedModifierAggregatorType : uint8_t
{
    CapturedAttributeBacked                        = 0,
    Transient                                      = 1,
    EGameplayEffectScopedModifierAggregatorType_MAX = 2

};


// Enum  GameplayAbilities.EAttributeBasedFloatCalculationType
enum class EAttributeBasedFloatCalculationType : uint8_t
{
    AttributeMagnitude                             = 0,
    AttributeBaseValue                             = 1,
    AttributeBonusMagnitude                        = 2,
    AttributeMagnitudeEvaluatedUpToChannel         = 3,
    EAttributeBasedFloatCalculationType_MAX        = 4

};


// Enum  GameplayAbilities.EGameplayEffectMagnitudeCalculation
enum class EGameplayEffectMagnitudeCalculation : uint8_t
{
    ScalableFloat                                  = 0,
    AttributeBased                                 = 1,
    CustomCalculationClass                         = 2,
    SetByCaller                                    = 3,
    EGameplayEffectMagnitudeCalculation_MAX        = 4

};


// Enum  GameplayAbilities.ETagRequirementCheckRule
enum class ETagRequirementCheckRule : uint8_t
{
    HasAll                                         = 0,
    HasAny                                         = 1,
    ETagRequirementCheckRule_MAX                   = 2

};


// Enum  GameplayAbilities.EGameplayTagEventType
enum class EGameplayTagEventType : uint8_t
{
    NewOrRemoved                                   = 0,
    AnyCountChange                                 = 1,
    EGameplayTagEventType_MAX                      = 2

};


// Enum  GameplayAbilities.EGameplayCueEvent
enum class EGameplayCueEvent : uint8_t
{
    OnActive                                       = 0,
    WhileActive                                    = 1,
    Executed                                       = 2,
    Removed                                        = 3,
    EGameplayCueEvent_MAX                          = 4

};


// Enum  GameplayAbilities.EGameplayEffectStackingType
enum class EGameplayEffectStackingType : uint8_t
{
    None                                           = 0,
    AggregateBySource                              = 1,
    AggregateByTarget                              = 2,
    EGameplayEffectStackingType_MAX                = 3

};


// Enum  GameplayAbilities.EGameplayModOp
enum class EGameplayModOp : uint8_t
{
    Additive                                       = 0,
    Multiplicitive                                 = 1,
    Division                                       = 2,
    Override                                       = 3,
    Max                                            = 4

};


// Enum  GameplayAbilities.EGameplayModEvaluationChannel
enum class EGameplayModEvaluationChannel : uint8_t
{
    Channel0                                       = 0,
    Channel1                                       = 1,
    Channel2                                       = 2,
    Channel3                                       = 3,
    Channel4                                       = 4,
    Channel5                                       = 5,
    Channel6                                       = 6,
    Channel7                                       = 7,
    Channel8                                       = 8,
    Channel9                                       = 9,
    Channel_MAX                                    = 10,
    EGameplayModEvaluationChannel_MAX              = 11

};


// Enum  HoudiniEngineRuntime.EHoudiniStaticMeshMethod
enum class EHoudiniStaticMeshMethod : uint8_t
{
    RawMesh                                        = 0,
    FMeshDescription                               = 1,
    UHoudiniStaticMesh                             = 2,
    EHoudiniStaticMeshMethod_MAX                   = 3

};


// Enum  HoudiniEngineRuntime.EHoudiniAssetStateResult
enum class EHoudiniAssetStateResult : uint8_t
{
    None                                           = 0,
    Working                                        = 1,
    Success                                        = 2,
    FinishedWithError                              = 3,
    FinishedWithFatalError                         = 4,
    Aborted                                        = 5,
    EHoudiniAssetStateResult_MAX                   = 6

};


// Enum  HoudiniEngineRuntime.EHoudiniAssetState
enum class EHoudiniAssetState : uint8_t
{
    NeedInstantiation                              = 0,
    NewHDA                                         = 1,
    PreInstantiation                               = 2,
    Instantiating                                  = 3,
    PreCook                                        = 4,
    Cooking                                        = 5,
    PostCook                                       = 6,
    PreProcess                                     = 7,
    Processing                                     = 8,
    None                                           = 9,
    NeedRebuild                                    = 10,
    NeedDelete                                     = 11,
    Deleting                                       = 12,
    ProcessTemplate                                = 13,
    EHoudiniAssetState_MAX                         = 14

};


// Enum  HoudiniEngineRuntime.EHoudiniProxyRefineRequestResult
enum class EHoudiniProxyRefineRequestResult : uint8_t
{
    Invalid                                        = 0,
    None                                           = 1,
    PendingCooks                                   = 2,
    Refined                                        = 3,
    EHoudiniProxyRefineRequestResult_MAX           = 4

};


// Enum  HoudiniEngineRuntime.EHoudiniProxyRefineResult
enum class EHoudiniProxyRefineResult : uint8_t
{
    Invalid                                        = 0,
    Failed                                         = 1,
    Success                                        = 2,
    Skipped                                        = 3,
    EHoudiniProxyRefineResult_MAX                  = 4

};


// Enum  HoudiniEngineRuntime.EHoudiniLandscapeExportType
enum class EHoudiniLandscapeExportType : uint8_t
{
    Heightfield                                    = 0,
    Mesh                                           = 1,
    Points                                         = 2,
    EHoudiniLandscapeExportType_MAX                = 3

};


// Enum  HoudiniEngineRuntime.EHoudiniCurveBreakpointParameterization
enum class EHoudiniCurveBreakpointParameterization : uint32_t
{
    Invalid                                        = 4294967295,
    Uniform                                        = 0,
    Chord                                          = 1,
    Centripetal                                    = 2,
    EHoudiniCurveBreakpointParameterization_MAX    = 3

};


// Enum  HoudiniEngineRuntime.EHoudiniCurveMethod
enum class EHoudiniCurveMethod : uint32_t
{
    Invalid                                        = 4294967295,
    CVs                                            = 0,
    Breakpoints                                    = 1,
    Freehand                                       = 2,
    EHoudiniCurveMethod_MAX                        = 3

};


// Enum  HoudiniEngineRuntime.EHoudiniCurveType
enum class EHoudiniCurveType : uint32_t
{
    Invalid                                        = 4294967295,
    Polygon                                        = 0,
    Nurbs                                          = 1,
    Bezier                                         = 2,
    Points                                         = 3,
    EHoudiniCurveType_MAX                          = 4

};


// Enum  HoudiniEngineRuntime.EHoudiniOutputType
enum class EHoudiniOutputType : uint8_t
{
    Invalid                                        = 0,
    Mesh                                           = 1,
    Instancer                                      = 2,
    Landscape                                      = 3,
    Curve                                          = 4,
    Skeletal                                       = 5,
    GeometryCollection                             = 6,
    DataTable                                      = 7,
    Texture                                        = 8,
    EHoudiniOutputType_MAX                         = 9

};


// Enum  HoudiniEngineRuntime.EHoudiniInputType
enum class EHoudiniInputType : uint8_t
{
    Invalid                                        = 0,
    Geometry                                       = 1,
    Curve                                          = 2,
    Asset                                          = 3,
    Landscape                                      = 4,
    World                                          = 5,
    Skeletal                                       = 6,
    GeometryCollection                             = 7,
    Foliage                                        = 8,
    WorldStaticMeshComponents                      = 9,
    PointCloud                                     = 10,
    LandscapeSplines                               = 11,
    Texture                                        = 12,
    EHoudiniInputType_MAX                          = 13

};


// Enum  HoudiniEngineRuntime.EHoudiniLandscapeOutputBakeType
enum class EHoudiniLandscapeOutputBakeType : uint8_t
{
    Detachment                                     = 0,
    BakeToImage                                    = 1,
    BakeToWorld                                    = 2,
    InValid                                        = 3,
    EHoudiniLandscapeOutputBakeType_MAX            = 4

};


// Enum  HoudiniEngineRuntime.EHoudiniRampInterpolationType
enum class EHoudiniRampInterpolationType : uint32_t
{
    InValid                                        = 4294967295,
    CONSTANT                                       = 0,
    LINEAR                                         = 1,
    CATMULL_ROM                                    = 2,
    MONOTONE_CUBIC                                 = 3,
    BEZIER                                         = 4,
    BSPLINE                                        = 5,
    HERMITE                                        = 6,
    EHoudiniRampInterpolationType_MAX              = 7

};


// Enum  HoudiniEngineRuntime.EAttribOwner
enum class EAttribOwner : uint32_t
{
    Invalid                                        = 4294967295,
    Vertex                                         = 0,
    Point                                          = 1,
    Prim                                           = 2,
    Detail                                         = 3,
    EAttribOwner_MAX                               = 4

};


// Enum  HoudiniEngineRuntime.EAttribStorageType
enum class EAttribStorageType : uint32_t
{
    Invalid                                        = 4294967295,
    INT                                            = 0,
    INT64                                          = 1,
    FLOAT                                          = 2,
    FLOAT64                                        = 3,
    STRING                                         = 4,
    EAttribStorageType_MAX                         = 5

};


// Enum  HoudiniEngineRuntime.EHoudiniInstancerType
enum class EHoudiniInstancerType : uint8_t
{
    Invalid                                        = 0,
    ObjectInstancer                                = 1,
    PackedPrimitive                                = 2,
    AttributeInstancer                             = 3,
    OldSchoolAttributeInstancer                    = 4,
    GeometryCollection                             = 5,
    EHoudiniInstancerType_MAX                      = 6

};


// Enum  HoudiniEngineRuntime.EHoudiniPartType
enum class EHoudiniPartType : uint8_t
{
    Invalid                                        = 0,
    Mesh                                           = 1,
    Instancer                                      = 2,
    Curve                                          = 3,
    Volume                                         = 4,
    DataTable                                      = 5,
    Texture                                        = 6,
    EHoudiniPartType_MAX                           = 7

};


// Enum  HoudiniEngineRuntime.EHoudiniGeoType
enum class EHoudiniGeoType : uint8_t
{
    Invalid                                        = 0,
    Default                                        = 1,
    Intermediate                                   = 2,
    Input                                          = 3,
    Curve                                          = 4,
    EHoudiniGeoType_MAX                            = 5

};


// Enum  HoudiniEngineRuntime.EHoudiniHandleType
enum class EHoudiniHandleType : uint8_t
{
    Xform                                          = 0,
    Bounder                                        = 1,
    Unsupported                                    = 2,
    EHoudiniHandleType_MAX                         = 3

};


// Enum  HoudiniEngineRuntime.EXformParameter
enum class EXformParameter : uint8_t
{
    TX                                             = 0,
    TY                                             = 1,
    TZ                                             = 2,
    RX                                             = 3,
    RY                                             = 4,
    RZ                                             = 5,
    SX                                             = 6,
    SY                                             = 7,
    SZ                                             = 8,
    COUNT                                          = 9,
    EXformParameter_MAX                            = 10

};


// Enum  HoudiniEngineRuntime.ETransferLayerMode
enum class ETransferLayerMode : uint8_t
{
    Default                                        = 0,
    NoneLayer                                      = 1,
    SpecifiedLayer                                 = 2,
    UnderSpecifiedLayer                            = 3,
    ETransferLayerMode_MAX                         = 4

};


// Enum  HoudiniEngineRuntime.ETransferHeightMode
enum class ETransferHeightMode : uint8_t
{
    Default                                        = 0,
    AllLayer                                       = 1,
    SpecifiedLayer                                 = 2,
    UnderSpecifiedLayer                            = 3,
    ETransferHeightMode_MAX                        = 4

};


// Enum  HoudiniEngineRuntime.EHoudiniInputObjectType
enum class EHoudiniInputObjectType : uint8_t
{
    Invalid                                        = 0,
    Object                                         = 1,
    StaticMesh                                     = 2,
    SkeletalMesh                                   = 3,
    SceneComponent                                 = 4,
    StaticMeshComponent                            = 5,
    InstancedStaticMeshComponent                   = 6,
    SplineComponent                                = 7,
    HoudiniSplineComponent                         = 8,
    HoudiniAssetComponent                          = 9,
    Actor                                          = 10,
    Landscape                                      = 11,
    Brush                                          = 12,
    CameraComponent                                = 13,
    DataTable                                      = 14,
    HoudiniAssetActor                              = 15,
    FoliageType_InstancedStaticMesh                = 16,
    GeometryCollection                             = 17,
    GeometryCollectionComponent                    = 18,
    GeometryCollectionActor_Deprecated             = 19,
    SkeletalMeshComponent                          = 20,
    Blueprint                                      = 21,
    InstancedFoliageActor                          = 22,
    LandscapeSplinesComponent                      = 23,
    Texture                                        = 24,
    EHoudiniInputObjectType_MAX                    = 25

};


// Enum  HoudiniEngineRuntime.EHoudiniXformType
enum class EHoudiniXformType : uint8_t
{
    None                                           = 0,
    IntoThisObject                                 = 1,
    Auto                                           = 2,
    EHoudiniXformType_MAX                          = 3

};


// Enum  HoudiniEngineRuntime.EHoudiniCurveOutputType
enum class EHoudiniCurveOutputType : uint8_t
{
    UnrealSpline                                   = 0,
    HoudiniSpline                                  = 1,
    EHoudiniCurveOutputType_MAX                    = 2

};


// Enum  HoudiniEngineRuntime.EHoudiniParameterType
enum class EHoudiniParameterType : uint8_t
{
    Invalid                                        = 0,
    Button                                         = 1,
    ButtonStrip                                    = 2,
    Color                                          = 3,
    ColorRamp                                      = 4,
    File                                           = 5,
    FileDir                                        = 6,
    FileGeo                                        = 7,
    FileImage                                      = 8,
    Float                                          = 9,
    FloatRamp                                      = 10,
    Folder                                         = 11,
    FolderList                                     = 12,
    Input                                          = 13,
    Int                                            = 14,
    IntChoice                                      = 15,
    Label                                          = 16,
    MultiParm                                      = 17,
    Separator                                      = 18,
    String                                         = 19,
    StringChoice                                   = 20,
    StringAssetRef                                 = 21,
    Toggle                                         = 22,
    EHoudiniParameterType_MAX                      = 23

};


// Enum  HoudiniEngineRuntime.EHoudiniFolderParameterType
enum class EHoudiniFolderParameterType : uint8_t
{
    Invalid                                        = 0,
    Collapsible                                    = 1,
    Simple                                         = 2,
    Tabs                                           = 3,
    Radio                                          = 4,
    Other                                          = 5,
    EHoudiniFolderParameterType_MAX                = 6

};


// Enum  HoudiniEngineRuntime.EHoudiniMultiParmModificationType
enum class EHoudiniMultiParmModificationType : uint8_t
{
    None                                           = 0,
    Inserted                                       = 1,
    Removed                                        = 2,
    Modified                                       = 3,
    EHoudiniMultiParmModificationType_MAX          = 4

};


// Enum  HoudiniEngineRuntime.EHoudiniRampPointConstructStatus
enum class EHoudiniRampPointConstructStatus : uint8_t
{
    None                                           = 0,
    INITIALIZED                                    = 1,
    POSITION_INSERTED                              = 2,
    VALUE_INSERTED                                 = 3,
    INTERPTYPE_INSERTED                            = 4,
    EHoudiniRampPointConstructStatus_MAX           = 5

};


// Enum  HoudiniEngineRuntime.EPDGWorkResultState
enum class EPDGWorkResultState : uint8_t
{
    None                                           = 0,
    ToLoad                                         = 1,
    Loading                                        = 2,
    Loaded                                         = 3,
    ToDelete                                       = 4,
    Deleting                                       = 5,
    Deleted                                        = 6,
    NotLoaded                                      = 7,
    EPDGWorkResultState_MAX                        = 8

};


// Enum  HoudiniEngineRuntime.EPDGNodeState
enum class EPDGNodeState : uint8_t
{
    None                                           = 0,
    Dirtied                                        = 1,
    Dirtying                                       = 2,
    Cooking                                        = 3,
    Cook_Complete                                  = 4,
    Cook_Failed                                    = 5,
    EPDGNodeState_MAX                              = 6

};


// Enum  HoudiniEngineRuntime.EPDGLinkState
enum class EPDGLinkState : uint8_t
{
    Inactive                                       = 0,
    Linking                                        = 1,
    Linked                                         = 2,
    Error_Not_Linked                               = 3,
    EPDGLinkState_MAX                              = 4

};


// Enum  HoudiniEngineRuntime.EHoudiniExecutableType
enum class EHoudiniExecutableType : uint8_t
{
    HRSHE_Houdini                                  = 0,
    HRSHE_HoudiniFX                                = 1,
    HRSHE_HoudiniCore                              = 2,
    HRSHE_HoudiniIndie                             = 3,
    HRSHE_MAX                                      = 4

};


// Enum  HoudiniEngineRuntime.EHoudiniRuntimeSettingsRecomputeFlag
enum class EHoudiniRuntimeSettingsRecomputeFlag : uint8_t
{
    HRSRF_Always                                   = 0,
    HRSRF_OnlyIfMissing                            = 1,
    HRSRF_Never                                    = 2,
    HRSRF_MAX                                      = 3

};


// Enum  HoudiniEngineRuntime.EHoudiniRuntimeSettingsSessionType
enum class EHoudiniRuntimeSettingsSessionType : uint8_t
{
    HRSST_InProcess                                = 0,
    HRSST_Socket                                   = 1,
    HRSST_NamedPipe                                = 2,
    HRSST_None                                     = 3,
    HRSST_MAX                                      = 4

};


// Enum  MotionWarping.EWarpPointAnimProvider
enum class EWarpPointAnimProvider : uint8_t
{
    None                                           = 0,
    Static                                         = 1,
    Bone                                           = 2,
    EWarpPointAnimProvider_MAX                     = 3

};


// Enum  MotionWarping.EMotionWarpRotationType
enum class EMotionWarpRotationType : uint8_t
{
    Default                                        = 0,
    Facing                                         = 1,
    EMotionWarpRotationType_MAX                    = 2

};


// Enum  MotionWarping.ERootMotionModifierState
enum class ERootMotionModifierState : uint8_t
{
    Waiting                                        = 0,
    Active                                         = 1,
    MarkedForRemoval                               = 2,
    Disabled                                       = 3,
    ERootMotionModifierState_MAX                   = 4

};


// Enum  EditableMesh.ETriangleTessellationMode
enum class ETriangleTessellationMode : uint8_t
{
    ThreeTriangles                                 = 0,
    FourTriangles                                  = 1,
    ETriangleTessellationMode_MAX                  = 2

};


// Enum  EditableMesh.EInsetPolygonsMode
enum class EInsetPolygonsMode : uint8_t
{
    All                                            = 0,
    CenterPolygonOnly                              = 1,
    SidePolygonsOnly                               = 2,
    EInsetPolygonsMode_MAX                         = 3

};


// Enum  EditableMesh.EPolygonEdgeHardness
enum class EPolygonEdgeHardness : uint8_t
{
    NewEdgesSoft                                   = 0,
    NewEdgesHard                                   = 1,
    AllEdgesSoft                                   = 2,
    AllEdgesHard                                   = 3,
    EPolygonEdgeHardness_MAX                       = 4

};


// Enum  EditableMesh.EMeshElementAttributeType
enum class EMeshElementAttributeType : uint8_t
{
    None                                           = 0,
    FVector4                                       = 1,
    FVector                                        = 2,
    FVector2D                                      = 3,
    Float                                          = 4,
    Int                                            = 5,
    Bool                                           = 6,
    FName                                          = 7,
    EMeshElementAttributeType_MAX                  = 8

};


// Enum  EditableMesh.EMeshTopologyChange
enum class EMeshTopologyChange : uint8_t
{
    NoTopologyChange                               = 0,
    TopologyChange                                 = 1,
    EMeshTopologyChange_MAX                        = 2

};


// Enum  EditableMesh.EMeshModificationType
enum class EMeshModificationType : uint8_t
{
    FirstInterim                                   = 0,
    Interim                                        = 1,
    Final                                          = 2,
    EMeshModificationType_MAX                      = 3

};


// Enum  ProceduralMeshComponent.EProcMeshSliceCapOption
enum class EProcMeshSliceCapOption : uint8_t
{
    NoCap                                          = 0,
    CreateNewSectionForCap                         = 1,
    UseLastSectionForCap                           = 2,
    EProcMeshSliceCapOption_MAX                    = 3

};


// Enum  DatasmithContent.EDatasmithAreaLightActorType
enum class EDatasmithAreaLightActorType : uint8_t
{
    Point                                          = 0,
    Spot                                           = 1,
    Rect                                           = 2,
    EDatasmithAreaLightActorType_MAX               = 3

};


// Enum  DatasmithContent.EDatasmithAreaLightActorShape
enum class EDatasmithAreaLightActorShape : uint8_t
{
    Rectangle                                      = 0,
    Disc                                           = 1,
    Sphere                                         = 2,
    Cylinder                                       = 3,
    None                                           = 4,
    EDatasmithAreaLightActorShape_MAX              = 5

};


// Enum  DatasmithContent.EDatasmithCADStitchingTechnique
enum class EDatasmithCADStitchingTechnique : uint8_t
{
    StitchingNone                                  = 0,
    StitchingHeal                                  = 1,
    StitchingSew                                   = 2,
    EDatasmithCADStitchingTechnique_MAX            = 3

};


// Enum  DatasmithContent.EDatasmithImportHierarchy
enum class EDatasmithImportHierarchy : uint8_t
{
    UseMultipleActors                              = 0,
    UseSingleActor                                 = 1,
    UseOneBlueprint                                = 2,
    EDatasmithImportHierarchy_MAX                  = 3

};


// Enum  DatasmithContent.EDatasmithImportScene
enum class EDatasmithImportScene : uint8_t
{
    NewLevel                                       = 0,
    CurrentLevel                                   = 1,
    AssetsOnly                                     = 2,
    EDatasmithImportScene_MAX                      = 3

};


// Enum  DatasmithContent.EDatasmithImportLightmapMax
enum class EDatasmithImportLightmapMax : uint8_t
{
    LIGHTMAP                                       = 0,
    LIGHTMAP                                       = 1,
    LIGHTMAP                                       = 2,
    LIGHTMAP                                       = 3,
    LIGHTMAP                                       = 4,
    LIGHTMAP                                       = 5,
    LIGHTMAP                                       = 6,
    LIGHTMAP_MAX                                   = 7

};


// Enum  DatasmithContent.EDatasmithImportLightmapMin
enum class EDatasmithImportLightmapMin : uint8_t
{
    LIGHTMAP                                       = 0,
    LIGHTMAP                                       = 1,
    LIGHTMAP                                       = 2,
    LIGHTMAP                                       = 3,
    LIGHTMAP                                       = 4,
    LIGHTMAP                                       = 5,
    LIGHTMAP_MAX                                   = 6

};


// Enum  DatasmithContent.EDatasmithImportMaterialQuality
enum class EDatasmithImportMaterialQuality : uint8_t
{
    UseNoFresnelCurves                             = 0,
    UseSimplifierFresnelCurves                     = 1,
    UseRealFresnelCurves                           = 2,
    EDatasmithImportMaterialQuality_MAX            = 3

};


// Enum  DatasmithContent.EDatasmithImportActorPolicy
enum class EDatasmithImportActorPolicy : uint8_t
{
    Update                                         = 0,
    Full                                           = 1,
    Ignore                                         = 2,
    EDatasmithImportActorPolicy_MAX                = 3

};


// Enum  DatasmithContent.EDatasmithImportAssetConflictPolicy
enum class EDatasmithImportAssetConflictPolicy : uint8_t
{
    Replace                                        = 0,
    Update                                         = 1,
    Use                                            = 2,
    Ignore                                         = 3,
    EDatasmithImportAssetConflictPolicy_MAX        = 4

};


// Enum  DatasmithContent.EDatasmithImportSearchPackagePolicy
enum class EDatasmithImportSearchPackagePolicy : uint8_t
{
    Current                                        = 0,
    All                                            = 1,
    EDatasmithImportSearchPackagePolicy_MAX        = 2

};


// Enum  VariantManagerContent.EPropertyValueCategory
enum class EPropertyValueCategory : uint8_t
{
    Undefined                                      = 0,
    Generic                                        = 1,
    RelativeLocation                               = 2,
    RelativeRotation                               = 4,
    RelativeScale3D                                = 8,
    Visibility                                     = 16,
    Material                                       = 32,
    Color                                          = 64,
    Option                                         = 128,
    EPropertyValueCategory_MAX                     = 129

};


// Enum  LimNativeWidget.EAgoraGameSubscribeOption
enum class EAgoraGameSubscribeOption : uint8_t
{
    None                                           = 0,
    Room                                           = 1,
    Team                                           = 2,
    RoomAndTeam                                    = 3,
    EAgoraGameSubscribeOption_MAX                  = 4

};


// Enum  LimNativeWidget.EAgoraGamePublishOption
enum class EAgoraGamePublishOption : uint8_t
{
    None                                           = 0,
    Room                                           = 1,
    Team                                           = 2,
    EAgoraGamePublishOption_MAX                    = 3

};


// Enum  LimNativeWidget.EChatGMERoomType
enum class EChatGMERoomType : uint8_t
{
    Fluency                                        = 0,
    Standard                                       = 1,
    HighQuality                                    = 2,
    EChatGMERoomType_MAX                           = 3

};


// Enum  LimNativeWidget.EChatGMERoomTypeSubEvent
enum class EChatGMERoomTypeSubEvent : uint8_t
{
    EnterRoom                                      = 0,
    Start                                          = 1,
    Complete                                       = 2,
    Request                                        = 3,
    EChatGMERoomTypeSubEvent_MAX                   = 4

};


// Enum  LimNative.ELimNativeConvType
enum class ELimNativeConvType : uint8_t
{
    Group                                          = 0,
    Peer                                           = 1,
    Room                                           = 2,
    CustomGroup                                    = 3,
    Robot                                          = 4,
    System                                         = 5,
    TempGroup                                      = 6,
    ELimNativeConvType_MAX                         = 7

};


// Enum  LimNative.ELimNativeMsgDirType
enum class ELimNativeMsgDirType : uint8_t
{
    After                                          = 0,
    Around                                         = 1,
    Before                                         = 2,
    ELimNativeMsgDirType_MAX                       = 3

};


// Enum  LimNative.ELimNativeSupportedLanguage
enum class ELimNativeSupportedLanguage : uint8_t
{
    DefaultLanguage                                = 0,
    SimplifiedChinese                              = 1,
    TraditionalChinese                             = 2,
    Arabic                                         = 3,
    German                                         = 4,
    English                                        = 5,
    Spanish                                        = 6,
    French                                         = 7,
    Hindi                                          = 8,
    Indonesian                                     = 9,
    Italian                                        = 10,
    Japanese                                       = 11,
    Korean                                         = 12,
    Malay                                          = 13,
    Polish                                         = 14,
    Portuguese                                     = 15,
    Russian                                        = 16,
    Thai                                           = 17,
    Turkish                                        = 18,
    Vietnamese                                     = 19,
    Tagalog                                        = 20,
    PO                                             = 21,
    OP                                             = 22,
    ELimNativeSupportedLanguage_MAX                = 23

};


// Enum  LimNative.ELimNativeErrorType
enum class ELimNativeErrorType : uint8_t
{
    OK                                             = 0,
    ApiNotFound                                    = 1,
    ParameterInvalid                               = 2,
    NetworkError                                   = 3,
    InitializeError                                = 4,
    ResourceNotFound                               = 5,
    ApiTimeout                                     = 6,
    LoginFailed                                    = 7,
    MsgSendFailed                                  = 8,
    MsgSendTimeout                                 = 9,
    MsgBuildFailed                                 = 10,
    MsgSetStateFailed                              = 11,
    ConvsGetFailed                                 = 12,
    ConvDiscardFailed                              = 13,
    UnImplemented                                  = 14,
    Exception                                      = 15,
    UserInfoGetFailed                              = 16,
    JsonDecodeFailed                               = 17,
    Unknown                                        = 18,
    ELimNativeErrorType_MAX                        = 19

};


// Enum  LimNative.ELimNativeMsgContentType
enum class ELimNativeMsgContentType : uint8_t
{
    Unknown                                        = 0,
    Text                                           = 1,
    Voice                                          = 2,
    Image                                          = 3,
    Notification                                   = 4,
    ShareGameCard                                  = 5,
    CustomEmotion                                  = 6,
    Recalled                                       = 7,
    ELimNativeMsgContentType_MAX                   = 8

};


// Enum  LimNative.ELimNativeFriendStateType
enum class ELimNativeFriendStateType : uint8_t
{
    InIdle                                         = 0,
    InTeam                                         = 1,
    InMatching                                     = 2,
    InGaming                                       = 3,
    Offline                                        = 4,
    ELimNativeFriendStateType_MAX                  = 5

};


// Enum  LimNative.ELimNativeUserSexType
enum class ELimNativeUserSexType : uint8_t
{
    Unknow                                         = 0,
    Male                                           = 1,
    FeMale                                         = 2,
    ELimNativeUserSexType_MAX                      = 3

};


// Enum  LimNative.ELimNativeMsgState
enum class ELimNativeMsgState : uint8_t
{
    Created                                        = 0,
    Sending                                        = 1,
    Sent                                           = 2,
    Failed                                         = 3,
    Unread                                         = 4,
    Read                                           = 5,
    ReadAll                                        = 6,
    Played                                         = 7,
    Revoked                                        = 8,
    ELimNativeMsgState_MAX                         = 9

};


// Enum  LimNative.ELimNativePackType
enum class ELimNativePackType : uint8_t
{
    StaticPicture                                  = 0,
    DynamicPicture                                 = 1,
    ELimNativePackType_MAX                         = 2

};


// Enum  LimNativeWidget.EChatGMERoomManagementOp
enum class EChatGMERoomManagementOp : uint8_t
{
    Capture                                        = 0,
    Play                                           = 1,
    AudioSend                                      = 2,
    AudioREC                                       = 3,
    Mic                                            = 4,
    Speaker                                        = 5,
    GetMicState                                    = 6,
    GetSpeakerState                                = 7,
    Fobin                                          = 8,
    EChatGMERoomManagementOp_MAX                   = 9

};


// Enum  LimNativeWidget.EChatGMEEventIDUserUpdate
enum class EChatGMEEventIDUserUpdate : uint8_t
{
    Enter                                          = 0,
    Exit                                           = 1,
    HasCameraVideo                                 = 2,
    NoCameraVideo                                  = 3,
    HasAudio                                       = 4,
    NoAudio                                        = 5,
    HasOpenMic                                     = 6,
    HasCloseMic                                    = 7,
    EChatGMEEventIDUserUpdate_MAX                  = 8

};


// Enum  LimNativeWidget.EChatGMEAudioRouteRecvType
enum class EChatGMEAudioRouteRecvType : uint8_t
{
    RecvInquireError                               = 0,
    NotRecvFromAnyone                              = 1,
    RecvFromAll                                    = 2,
    RecvBlacklist                                  = 3,
    RecvWhitelist                                  = 4,
    EChatGMEAudioRouteRecvType_MAX                 = 5

};


// Enum  LimNativeWidget.EChatGMEAudioRouteSendType
enum class EChatGMEAudioRouteSendType : uint8_t
{
    InquireError                                   = 0,
    NotSendToAnyone                                = 1,
    SendToAll                                      = 2,
    SendBlacklist                                  = 3,
    SendWhitelist                                  = 4,
    EChatGMEAudioRouteSendType_MAX                 = 5

};


// Enum  LimNativeWidget.EChatGMERangeAudioMode
enum class EChatGMERangeAudioMode : uint8_t
{
    World                                          = 0,
    Team                                           = 1,
    EChatGMERangeAudioMode_MAX                     = 2

};


// Enum  LimNativeWidget.EIOSAudioPermissionState
enum class EIOSAudioPermissionState : uint8_t
{
    AudioPermission_Unknown                        = 0,
    AudioPermission_Undetermined                   = 1,
    AudioPermission_Denied                         = 2,
    AudioPermission_Granted                        = 3,
    AudioPermission_MAX                            = 4

};


// Enum  LimNativeWidget.EChatGMEAudioRouteType
enum class EChatGMEAudioRouteType : uint8_t
{
    Others                                         = 0,
    BuildInreciever                                = 1,
    Speaker                                        = 2,
    Headphone                                      = 3,
    Bluetooth                                      = 4,
    EChatGMEAudioRouteType_MAX                     = 5

};


// Enum  LimNativeWidget.EChatGMEKaraokeType
enum class EChatGMEKaraokeType : uint8_t
{
    Original                                       = 0,
    Pop                                            = 1,
    Rock                                           = 2,
    RB                                             = 3,
    Dance                                          = 4,
    Heaven                                         = 5,
    TTS                                            = 6,
    Vigorous                                       = 7,
    Limpid                                         = 8,
    Count                                          = 9,
    EChatGMEKaraokeType_MAX                        = 10

};


// Enum  LimNativeWidget.EChatGMEVoiceType
enum class EChatGMEVoiceType : uint8_t
{
    OriginalSound                                  = 0,
    Lotita                                         = 1,
    Uncle                                          = 2,
    Intangible                                     = 3,
    DeadFatboy                                     = 4,
    HeavyMental                                    = 5,
    Dialect                                        = 6,
    Influenza                                      = 7,
    CagedAnimal                                    = 8,
    HeavyMachine                                   = 9,
    StrongCurrent                                  = 10,
    Kindergarten                                   = 11,
    Huang                                          = 12,
    Count                                          = 13,
    EChatGMEVoiceType_MAX                          = 14

};


// Enum  LimNativeWidget.EChatGMELogLevel
enum class EChatGMELogLevel : uint8_t
{
    None                                           = 0,
    Error                                          = 1,
    Info                                           = 2,
    Debug                                          = 3,
    Verbose                                        = 4,
    EChatGMELogLevel_MAX                           = 5

};


// Enum  LimNativeWidget.EChatGMEAudioRouteSubEventType
enum class EChatGMEAudioRouteSubEventType : uint8_t
{
    Update                                         = 0,
    EChatGMEAudioRouteSubEventType_MAX             = 1

};


// Enum  LimNativeWidget.EChatGMECustomDataSubEvent
enum class EChatGMECustomDataSubEvent : uint8_t
{
    Update                                         = 0,
    EChatGMECustomDataSubEvent_MAX                 = 1

};


// Enum  LimNativeWidget.EChatGMEChorusSubEvent
enum class EChatGMEChorusSubEvent : uint8_t
{
    HasNoCMDPack                                   = 0,
    HadCMDPack                                     = 1,
    Start                                          = 2,
    Stop                                           = 3,
    AccompanierOption                              = 4,
    StatusRefuse                                   = 5,
    StopByPeer                                     = 6,
    EChatGMEChorusSubEvent_MAX                     = 7

};


// Enum  LimNativeWidget.EChatGMEEventType
enum class EChatGMEEventType : uint8_t
{
    None                                           = 0,
    EnterRoom                                      = 1,
    ExitRoom                                       = 2,
    RoomDisconnect                                 = 3,
    UserUpdate                                     = 4,
    NumberOfUsersUpdate                            = 5,
    NumberOfAudioStreamsUpdate                     = 6,
    ReconnectStart                                 = 7,
    ReconnectSuccess                               = 8,
    SwitchRoom                                     = 9,
    ChangeRoomType                                 = 10,
    AudioDataEmpty                                 = 11,
    RoomSharingStart                               = 12,
    RoomSharingStop                                = 13,
    RecordCompleted                                = 14,
    RecordPreviewCompleted                         = 15,
    RecordMixCompleted                             = 16,
    AudioRouteUpdate                               = 17,
    SpeakerDefaultDeviceChanged                    = 18,
    SpeakerNewDevice                               = 19,
    SpeakerLostDevice                              = 20,
    MicNewDevice                                   = 21,
    MicLostDevice                                  = 22,
    MicDefaultDeviceChanged                        = 23,
    AudioRouteChanged                              = 24,
    UserVolumes                                    = 25,
    ChangeRoomQuality                              = 26,
    AccompanyFinish                                = 27,
    ServerAudioRouteEvent                          = 28,
    CustomDataUpdate                               = 29,
    RealtimeASR                                    = 30,
    ChorusEvent                                    = 31,
    ChangeTeamId                                   = 32,
    AudioReady                                     = 33,
    HardwareTestRecordFinish                       = 34,
    HardwareTestPreviewFinish                      = 35,
    PTTRecordComplete                              = 36,
    PTTUploadComplete                              = 37,
    PTTDownloadComplete                            = 38,
    PTTPlayComplete                                = 39,
    PTTSpeech2TextComplete                         = 40,
    PTTStreamingRecognitionComplete                = 41,
    PTTStreamingRecognitionIsRunning               = 42,
    RoomManagementOperator                         = 43,
    EChatGMEEventType_MAX                          = 44

};


// Enum  LimNativeWidget.EChatGMEASRSubEvent
enum class EChatGMEASRSubEvent : uint8_t
{
    Start                                          = 0,
    Content                                        = 1,
    End                                            = 2,
    EChatGMEASRSubEvent_MAX                        = 3

};


// Enum  LimNativeWidget.EChatGMERecordPermission
enum class EChatGMERecordPermission : uint8_t
{
    Granted                                        = 0,
    Denied                                         = 1,
    NotDetermined                                  = 2,
    Error                                          = 3,
    EChatGMERecordPermission_MAX                   = 4

};


// Enum  LimNative.ELimNativeOSType
enum class ELimNativeOSType : uint8_t
{
    Android                                        = 0,
    iOS                                            = 1,
    Windows                                        = 2,
    ELimNativeOSType_MAX                           = 3

};


// Enum  LimNative.ELimNativeUserPeerStatus
enum class ELimNativeUserPeerStatus : uint8_t
{
    Online                                         = 0,
    Blocking                                       = 1,
    Blocked                                        = 2,
    ELimNativeUserPeerStatus_MAX                   = 3

};


// Enum  LimNative.ELimNativeUserAllowType
enum class ELimNativeUserAllowType : uint8_t
{
    Any                                            = 0,
    Confirm                                        = 1,
    None                                           = 2,
    ELimNativeUserAllowType_MAX                    = 3

};


// Enum  LimNative.ELimNativeProtType
enum class ELimNativeProtType : uint8_t
{
    Game                                           = 0,
    App                                            = 1,
    ELimNativeProtType_MAX                         = 2

};


// Enum  LimNative.ELimNativeGroupRoleType
enum class ELimNativeGroupRoleType : uint8_t
{
    Owner                                          = 0,
    Admin                                          = 1,
    Member                                         = 2,
    ELimNativeGroupRoleType_MAX                    = 3

};


// Enum  LimNative.ELimNativeGroupJoinType
enum class ELimNativeGroupJoinType : uint8_t
{
    Free                                           = 0,
    Verify                                         = 1,
    Forbidden                                      = 2,
    ELimNativeGroupJoinType_MAX                    = 3

};


// Enum  LimNative.ELimNativeGroupType
enum class ELimNativeGroupType : uint8_t
{
    Normal                                         = 0,
    Temp                                           = 1,
    Room                                           = 2,
    Custom                                         = 3,
    ELimNativeGroupType_MAX                        = 4

};


// Enum  LimNative.ELimNativeEventType
enum class ELimNativeEventType : uint8_t
{
    SDKReady                                       = 0,
    SDKError                                       = 1,
    NetDisconnected                                = 2,
    NetConnecting                                  = 3,
    NetConnected                                   = 4,
    NetReconnected                                 = 5,
    NetReconnecting                                = 6,
    NetInterrupt                                   = 7,
    TokenRenewed                                   = 8,
    TokenExpired                                   = 9,
    KickedOut                                      = 10,
    LoginFreqLimit                                 = 11,
    Logining                                       = 12,
    Logined                                        = 13,
    MsgReceived                                    = 14,
    MsgRevoked                                     = 15,
    MsgRead                                        = 16,
    MsgEdited                                      = 17,
    MsgLogicReceived                               = 18,
    MsgCaptTriggerred                              = 19,
    MsgCaptDispose                                 = 20,
    ConvsUpdated                                   = 21,
    FriendChanged                                  = 22,
    FriendRequestChanged                           = 23,
    BlockeeChanged                                 = 24,
    BadgesChanged                                  = 25,
    UnkownEvent                                    = 26,
    ELimNativeEventType_MAX                        = 27

};


// Enum  LimNative.ELimNativeConvMentionType
enum class ELimNativeConvMentionType : uint8_t
{
    AtMe                                           = 0,
    AtAll                                          = 1,
    AtAllMe                                        = 2,
    ELimNativeConvMentionType_MAX                  = 3

};


// Enum  LLHSDK.ELLHSDKNetworkType
enum class ELLHSDKNetworkType : uint8_t
{
    Unknown                                        = 0,
    NotConnected                                   = 1,
    Type_WiFi                                      = 2,
    Type_Unknown_Cell                              = 3,
    Type_2G                                        = 4,
    Type_3G                                        = 5,
    Type_4G                                        = 6,
    Type_5G                                        = 7,
    ELLHSDKNetworkType_MAX                         = 8

};


// Enum  LLHSDK.ELLHSDKLoginType
enum class ELLHSDKLoginType : uint8_t
{
    TYPE_NONE                                      = 0,
    TYPE_QUICK_LOGIN                               = 1,
    TYPE_LILITH_LOGIN                              = 2,
    TYPE_MOBILE_LOGIN                              = 2,
    TYPE_FACEBOOK_LOGIN                            = 3,
    TYPE_GAME_CENTER_LOGIN                         = 4,
    TYPE_GOOGLE_PLUS_OR_GAMES_LOGIN                = 5,
    TYPE_WECHAT_LOGIN                              = 6,
    TYPE_QQ_LOGIN                                  = 7,
    TYPE_AUTO_LOGIN                                = 8,
    TYPE_VK_LOGIN                                  = 9,
    TYPE_GOOGLE_LOGIN                              = 10,
    TYPE_LINE_LOGIN                                = 11,
    TYPE_TWITTER_LOGIN                             = 12,
    TYPE_APPLE_LOGIN                               = 13,
    TYPE_WEIBO_LOGIN                               = 14,
    TYPE_PGS_LOGIN                                 = 15,
    TYPE_TIKTOK_LOGIN                              = 16,
    TYPE_STEAM_LOGIN                               = 17,
    TYPE_NINTENDO_LOGIN                            = 18,
    TYPE_MAX                                       = 19

};


// Enum  LLHSDK.ELLHSDKScreenOrientation
enum class ELLHSDKScreenOrientation : uint8_t
{
    Portrait                                       = 0,
    ReversePortrait                                = 1,
    SensorPortrait                                 = 2,
    Landscape                                      = 3,
    ReverseLandscape                               = 4,
    SensorLandscape                                = 5,
    Sensor                                         = 6,
    FullSensor                                     = 7,
    ELLHSDKScreenOrientation_MAX                   = 8

};


// Enum  LLHSDK.ELLHSDKPayType
enum class ELLHSDKPayType : uint8_t
{
    None                                           = 0,
    Apple                                          = 1,
    Google                                         = 2,
    Ali                                            = 3,
    Wechat                                         = 4,
    Union                                          = 5,
    PlayPhone                                      = 6,
    MyCard                                         = 7,
    Payssion                                       = 8,
    HuaweiAbroad                                   = 9,
    Paypal                                         = 10,
    Voucher                                        = 11,
    Samsung                                        = 12,
    Switch                                         = 13,
    ELLHSDKPayType_MAX                             = 14

};


// Enum  LLHSDK.ELLHSDKPayGenericSkuItemType
enum class ELLHSDKPayGenericSkuItemType : uint8_t
{
    Normal                                         = 0,
    Subscription                                   = 1,
    ELLHSDKPayGenericSkuItemType_MAX               = 2

};


// Enum  LLHSDK.ELLHSDKCustomerServiceRateAction
enum class ELLHSDKCustomerServiceRateAction : uint8_t
{
    Success                                        = 0,
    FeedBack                                       = 1,
    Close                                          = 2,
    Fail                                           = 3,
    ELLHSDKCustomerServiceRateAction_MAX           = 4

};


// Enum  LLHSDK.ELLHSDKSupportedLanguage
enum class ELLHSDKSupportedLanguage : uint8_t
{
    DefaultLanguage                                = 0,
    Arabic                                         = 1,
    English                                        = 2,
    French                                         = 3,
    German                                         = 4,
    Indonesian                                     = 5,
    Italian                                        = 6,
    Japanese                                       = 7,
    Korean                                         = 8,
    Malay                                          = 9,
    Polish                                         = 10,
    Portuguese                                     = 11,
    Russian                                        = 12,
    Spanish                                        = 13,
    Thai                                           = 14,
    Turkish                                        = 15,
    Vietnamese                                     = 16,
    Hindi                                          = 17,
    SimplifiedChinese                              = 18,
    TraditionalChinese                             = 19,
    ELLHSDKSupportedLanguage_MAX                   = 20

};


// Enum  LLHSDK.ELLHSDKReportCurrencyType
enum class ELLHSDKReportCurrencyType : uint8_t
{
    USA_Dollar                                     = 0,
    China_Yuan                                     = 1,
    Taiwan_Dollar                                  = 2,
    ELLHSDKReportCurrencyType_MAX                  = 3

};


// Enum  LLHSDK.ELLHSDKOpenAlbumErrorCode
enum class ELLHSDKOpenAlbumErrorCode : uint8_t
{
    None                                           = 0,
    Cancel                                         = 1,
    NoPermission                                   = 2,
    ELLHSDKOpenAlbumErrorCode_MAX                  = 3

};


// Enum  LLHSDK.EReleaseType
enum class EReleaseType : uint8_t
{
    GrayRelease                                    = 0,
    Release                                        = 1,
    EReleaseType_MAX                               = 2

};


// Enum  LLHSDK.EDistributionRegion
enum class EDistributionRegion : uint8_t
{
    International                                  = 0,
    Domestic                                       = 1,
    EDistributionRegion_MAX                        = 2

};


// Enum  LLHSDK.ELLHSDKLoginUIStyle
enum class ELLHSDKLoginUIStyle : uint8_t
{
    NormalStyle                                    = 0,
    SoulHunterStyle                                = 1,
    GameCenterStyle                                = 2,
    DomesticStyle                                  = 3,
    GameCenterDomesticStyle                        = 4,
    ELLHSDKLoginUIStyle_MAX                        = 5

};


// Enum  LLHSDK.ELLHSDKGravity
enum class ELLHSDKGravity : uint8_t
{
    NO_GRAVITY                                     = 0,
    LeftTop                                        = 1,
    LeftCenter                                     = 2,
    LeftBottom                                     = 3,
    MidTop                                         = 4,
    MidBottom                                      = 5,
    RightTop                                       = 6,
    RightCenter                                    = 7,
    RightBottom                                    = 8,
    ELLHSDKGravity_MAX                             = 9

};


// Enum  OnlineSubsystem.EInAppPurchaseState
enum class EInAppPurchaseState : uint8_t
{
    Unknown                                        = 0,
    Success                                        = 1,
    Failed                                         = 2,
    Cancelled                                      = 3,
    Invalid                                        = 4,
    NotAllowed                                     = 5,
    Restored                                       = 6,
    AlreadyOwned                                   = 7,
    EInAppPurchaseState_MAX                        = 8

};


// Enum  OnlineSubsystem.EMPMatchOutcome
enum class EMPMatchOutcome : uint8_t
{
    None                                           = 0,
    Quit                                           = 1,
    Won                                            = 2,
    Lost                                           = 3,
    Tied                                           = 4,
    TimeExpired                                    = 5,
    First                                          = 6,
    Second                                         = 7,
    Third                                          = 8,
    Fourth                                         = 9,
    EMPMatchOutcome_MAX                            = 10

};


// Enum  OnlineSubsystemUtils.EInAppPurchaseStatus
enum class EInAppPurchaseStatus : uint8_t
{
    Invalid                                        = 0,
    Failed                                         = 1,
    Deferred                                       = 2,
    Canceled                                       = 3,
    Purchased                                      = 4,
    Restored                                       = 5,
    EInAppPurchaseStatus_MAX                       = 6

};


// Enum  OnlineSubsystemUtils.EOnlineProxyStoreOfferDiscountType
enum class EOnlineProxyStoreOfferDiscountType : uint8_t
{
    NotOnSale                                      = 0,
    Percentage                                     = 1,
    DiscountAmount                                 = 2,
    PayAmount                                      = 3,
    EOnlineProxyStoreOfferDiscountType_MAX         = 4

};


// Enum  OnlineSubsystemUtils.EBeaconConnectionState
enum class EBeaconConnectionState : uint8_t
{
    Invalid                                        = 0,
    Closed                                         = 1,
    Pending                                        = 2,
    Open                                           = 3,
    EBeaconConnectionState_MAX                     = 4

};


// Enum  OnlineSubsystemUtils.EClientRequestType
enum class EClientRequestType : uint8_t
{
    NonePending                                    = 0,
    ExistingSessionReservation                     = 1,
    ReservationUpdate                              = 2,
    EmptyServerReservation                         = 3,
    Reconnect                                      = 4,
    Abandon                                        = 5,
    ReservationRemoveMembers                       = 6,
    EClientRequestType_MAX                         = 7

};


// Enum  OnlineSubsystemUtils.EPartyReservationResult
enum class EPartyReservationResult : uint8_t
{
    NoResult                                       = 0,
    RequestPending                                 = 1,
    GeneralError                                   = 2,
    PartyLimitReached                              = 3,
    IncorrectPlayerCount                           = 4,
    RequestTimedOut                                = 5,
    ReservationDuplicate                           = 6,
    ReservationNotFound                            = 7,
    ReservationAccepted                            = 8,
    ReservationDenied                              = 9,
    ReservationDenied_CrossPlayRestriction         = 10,
    ReservationDenied_Banned                       = 11,
    ReservationRequestCanceled                     = 12,
    ReservationInvalid                             = 13,
    BadSessionId                                   = 14,
    ReservationDenied_ContainsExistingPlayers      = 15,
    EPartyReservationResult_MAX                    = 16

};


// Enum  OnlineSubsystemUtils.ESpectatorClientRequestType
enum class ESpectatorClientRequestType : uint8_t
{
    NonePending                                    = 0,
    ExistingSessionReservation                     = 1,
    ReservationUpdate                              = 2,
    EmptyServerReservation                         = 3,
    Reconnect                                      = 4,
    Abandon                                        = 5,
    ESpectatorClientRequestType_MAX                = 6

};


// Enum  OnlineSubsystemUtils.ESpectatorReservationResult
enum class ESpectatorReservationResult : uint8_t
{
    NoResult                                       = 0,
    RequestPending                                 = 1,
    GeneralError                                   = 2,
    SpectatorLimitReached                          = 3,
    IncorrectPlayerCount                           = 4,
    RequestTimedOut                                = 5,
    ReservationDuplicate                           = 6,
    ReservationNotFound                            = 7,
    ReservationAccepted                            = 8,
    ReservationDenied                              = 9,
    ReservationDenied_CrossPlayRestriction         = 10,
    ReservationDenied_Banned                       = 11,
    ReservationRequestCanceled                     = 12,
    ReservationInvalid                             = 13,
    BadSessionId                                   = 14,
    ReservationDenied_ContainsExistingPlayers      = 15,
    ESpectatorReservationResult_MAX                = 16

};


// Enum  RichtapToolsLib.ERichtapPrebakeId
enum class ERichtapPrebakeId : uint8_t
{
    RT_CLICK                                       = 0,
    RT_DOUBLE_CLICK                                = 1,
    RT_SOFT_CLICK                                  = 2,
    RT_TICK                                        = 3,
    RT_THUD                                        = 4,
    RT_FAILURE                                     = 5,
    RT_SUCCESS                                     = 6,
    RT_RAMP_UP                                     = 7,
    RT_TOGGLE_SWITCH                               = 8,
    RT_LONG_PRESS                                  = 9,
    RT_VIRTUAL_KEY                                 = 10,
    RT_KEYBOARD_TAP                                = 11,
    RT_CLOCK_TICK                                  = 12,
    RT_CALENDAR_DATE                               = 13,
    RT_CONTEXT_CLICK                               = 14,
    RT_KEYBOARD_RELEASE                            = 15,
    RT_VIRTUAL_KEY_RELEASE                         = 16,
    RT_TEXT_HANDLE_MOVE                            = 17,
    RT_ENTRY_BUMP                                  = 18,
    RT_DRAG_CROSSING                               = 19,
    RT_GESTURE                                     = 20,
    RT_CONFIRM                                     = 21,
    RT_REJECT                                      = 22,
    RT_BOMB                                        = 23,
    RT_SWORD                                       = 24,
    RT_GUNSHOT                                     = 25,
    RT_SPEED_UP                                    = 26,
    RT_JUMP                                        = 27,
    RT_DRUM                                        = 28,
    RT_COIN_DROP                                   = 29,
    RT_HEARTBEAT                                   = 30,
    RT_PLUCKING                                    = 31,
    RT_DRAWING_ARROW                               = 32,
    RT_CAMERA_SHUTTER                              = 33,
    RT_FIREWORKS                                   = 34,
    RT_SNIPER_RIFLE                                = 35,
    RT_ASSAULT_RIFLE                               = 36,
    RT_CYMBAL                                      = 37,
    RT_TAMBOURINE                                  = 38,
    RT_FAST_MOVING                                 = 39,
    RT_FLY                                         = 40,
    RT_FOOTSTEP                                    = 41,
    RT_ICE                                         = 42,
    RT_LIGHTNING                                   = 43,
    RT_SPRING                                      = 44,
    RT_SWING                                       = 45,
    RT_WIND                                        = 46,
    RT_VICTORY                                     = 47,
    RT_AWARD                                       = 48,
    RT_GAMEOVER                                    = 49,
    RT_MAX                                         = 50

};


// Enum  UMG.ESlateAccessibleBehavior
enum class ESlateAccessibleBehavior : uint8_t
{
    NotAccessible                                  = 0,
    Auto                                           = 1,
    Summary                                        = 2,
    Custom                                         = 3,
    ToolTip                                        = 4,
    ESlateAccessibleBehavior_MAX                   = 5

};


// Enum  SlateCore.EUINavigation
enum class EUINavigation : uint8_t
{
    Left                                           = 0,
    Right                                          = 1,
    Up                                             = 2,
    Down                                           = 3,
    Next                                           = 4,
    Previous                                       = 5,
    Num                                            = 6,
    Invalid                                        = 7,
    EUINavigation_MAX                              = 8

};


// Enum  SlateCore.ECheckBoxState
enum class ECheckBoxState : uint8_t
{
    Unchecked                                      = 0,
    Checked                                        = 1,
    Undetermined                                   = 2,
    ECheckBoxState_MAX                             = 3

};


// Enum  SlateCore.EWidgetClipping
enum class EWidgetClipping : uint8_t
{
    Inherit                                        = 0,
    ClipToBounds                                   = 1,
    ClipToBoundsWithoutIntersecting                = 2,
    ClipToBoundsAlways                             = 3,
    OnDemand                                       = 4,
    EWidgetClipping_MAX                            = 5

};


// Enum  CoreUObject.EMouseCursor
enum class EMouseCursor : uint8_t
{
    None                                           = 0,
    Default                                        = 1,
    TextEditBeam                                   = 2,
    ResizeLeftRight                                = 3,
    ResizeUpDown                                   = 4,
    ResizeSouthEast                                = 5,
    ResizeSouthWest                                = 6,
    CardinalCross                                  = 7,
    Crosshairs                                     = 8,
    Hand                                           = 9,
    GrabHand                                       = 10,
    GrabHandClosed                                 = 11,
    SlashedCircle                                  = 12,
    EyeDropper                                     = 13,
    EMouseCursor_MAX                               = 14

};


// Enum  SlateCore.ESlateBrushImageType
enum class ESlateBrushImageType : uint8_t
{
    NoImage                                        = 0,
    FullColor                                      = 1,
    Linear                                         = 2,
    Vector                                         = 3,
    ESlateBrushImageType_MAX                       = 4

};


// Enum  SlateCore.ESlateBrushMirrorType
enum class ESlateBrushMirrorType : uint8_t
{
    NoMirror                                       = 0,
    Horizontal                                     = 1,
    Vertical                                       = 2,
    Both                                           = 3,
    ESlateBrushMirrorType_MAX                      = 4

};


// Enum  SlateCore.ESlateBrushTileType
enum class ESlateBrushTileType : uint8_t
{
    NoTile                                         = 0,
    Horizontal                                     = 1,
    Vertical                                       = 2,
    Both                                           = 3,
    ESlateBrushTileType_MAX                        = 4

};


// Enum  SlateCore.ESlateBrushDrawType
enum class ESlateBrushDrawType : uint8_t
{
    NoDrawType                                     = 0,
    Box                                            = 1,
    Border                                         = 2,
    Image                                          = 3,
    RoundedBox                                     = 4,
    ESlateBrushDrawType_MAX                        = 5

};


// Enum  SlateCore.ESlateBrushRoundingType
enum class ESlateBrushRoundingType : uint8_t
{
    FixedRadius                                    = 0,
    HalfHeightRadius                               = 1,
    ESlateBrushRoundingType_MAX                    = 2

};


// Enum  SlateCore.ESlateColorStylingMode
enum class ESlateColorStylingMode : uint8_t
{
    UseColor_Specified                             = 0,
    UseColor_Specified_Link                        = 1,
    UseColor_Foreground                            = 2,
    UseColor_Foreground_Subdued                    = 3,
    UseColor_MAX                                   = 4

};


// Enum  UMG.ESlateVisibility
enum class ESlateVisibility : uint8_t
{
    Visible                                        = 0,
    Collapsed                                      = 1,
    Hidden                                         = 2,
    HitTestInvisible                               = 3,
    SelfHitTestInvisible                           = 4,
    ESlateVisibility_MAX                           = 5

};


// Enum  SlateCore.EUINavigationRule
enum class EUINavigationRule : uint8_t
{
    Escape                                         = 0,
    Explicit                                       = 1,
    Wrap                                           = 2,
    Stop                                           = 3,
    Custom                                         = 4,
    CustomBoundary                                 = 5,
    Invalid                                        = 6,
    EUINavigationRule_MAX                          = 7

};


// Enum  SlateCore.ESlateDetailMode
enum class ESlateDetailMode : uint8_t
{
    Stale_Low                                      = 0,
    Stale_Medium                                   = 1,
    Stale_High                                     = 2,
    Stale_MAX                                      = 3

};


// Enum  SlateCore.EFlowDirectionPreference
enum class EFlowDirectionPreference : uint8_t
{
    Inherit                                        = 0,
    Culture                                        = 1,
    LeftToRight                                    = 2,
    RightToLeft                                    = 3,
    EFlowDirectionPreference_MAX                   = 4

};


// Enum  SlateCore.EColorVisionDeficiency
enum class EColorVisionDeficiency : uint8_t
{
    NormalVision                                   = 0,
    Deuteranope                                    = 1,
    Protanope                                      = 2,
    Tritanope                                      = 3,
    EColorVisionDeficiency_MAX                     = 4

};


// Enum  Engine.EMouseLockMode
enum class EMouseLockMode : uint8_t
{
    DoNotLock                                      = 0,
    LockOnCapture                                  = 1,
    LockAlways                                     = 2,
    LockInFullscreen                               = 3,
    EMouseLockMode_MAX                             = 4

};


// Enum  Engine.EWindowTitleBarMode
enum class EWindowTitleBarMode : uint8_t
{
    Overlay                                        = 0,
    VerticalBox                                    = 1,
    EWindowTitleBarMode_MAX                        = 2

};


// Enum  SlateCore.ESelectInfo
enum class ESelectInfo : uint8_t
{
    OnKeyPress                                     = 0,
    OnNavigation                                   = 1,
    OnMouseClick                                   = 2,
    Direct                                         = 3,
    ESelectInfo_MAX                                = 4

};


// Enum  SlateCore.ETextCommit
enum class ETextCommit : uint8_t
{
    Default                                        = 0,
    OnEnter                                        = 1,
    OnUserMovedFocus                               = 2,
    OnCleared                                      = 3,
    ETextCommit_MAX                                = 4

};


// Enum  Slate.ETextJustify
enum class ETextJustify : uint8_t
{
    Left                                           = 0,
    Center                                         = 1,
    Right                                          = 2,
    ETextJustify_MAX                               = 3

};


// Enum  Slate.ETextFlowDirection
enum class ETextFlowDirection : uint8_t
{
    Auto                                           = 0,
    LeftToRight                                    = 1,
    RightToLeft                                    = 2,
    ETextFlowDirection_MAX                         = 3

};


// Enum  SlateCore.ETextShapingMethod
enum class ETextShapingMethod : uint8_t
{
    Auto                                           = 0,
    KerningOnly                                    = 1,
    FullShaping                                    = 2,
    ETextShapingMethod_MAX                         = 3

};


// Enum  Slate.EVirtualKeyboardDismissAction
enum class EVirtualKeyboardDismissAction : uint8_t
{
    TextChangeOnDismiss                            = 0,
    TextCommitOnAccept                             = 1,
    TextCommitOnDismiss                            = 2,
    EVirtualKeyboardDismissAction_MAX              = 3

};


// Enum  Slate.EVirtualKeyboardTrigger
enum class EVirtualKeyboardTrigger : uint8_t
{
    OnFocusByPointer                               = 0,
    OnAllFocusEvents                               = 1,
    EVirtualKeyboardTrigger_MAX                    = 2

};


// Enum  UMG.EVirtualKeyboardType
enum class EVirtualKeyboardType : uint8_t
{
    Default                                        = 0,
    Number                                         = 1,
    Web                                            = 2,
    Email                                          = 3,
    Password                                       = 4,
    AlphaNumeric                                   = 5,
    EVirtualKeyboardType_MAX                       = 6

};


// Enum  Slate.ETextWrappingPolicy
enum class ETextWrappingPolicy : uint8_t
{
    DefaultWrapping                                = 0,
    AllowPerCharacterWrapping                      = 1,
    ETextWrappingPolicy_MAX                        = 2

};


// Enum  SlateCore.EHorizontalAlignment
enum class EHorizontalAlignment : uint8_t
{
    HAlign_Fill                                    = 0,
    HAlign_Left                                    = 1,
    HAlign_Center                                  = 2,
    HAlign_Right                                   = 3,
    HAlign_MAX                                     = 4

};


// Enum  SlateCore.EVerticalAlignment
enum class EVerticalAlignment : uint8_t
{
    VAlign_Fill                                    = 0,
    VAlign_Top                                     = 1,
    VAlign_Center                                  = 2,
    VAlign_Bottom                                  = 3,
    VAlign_MAX                                     = 4

};


// Enum  Slate.ETextTransformPolicy
enum class ETextTransformPolicy : uint8_t
{
    None                                           = 0,
    ToLower                                        = 1,
    ToUpper                                        = 2,
    ETextTransformPolicy_MAX                       = 3

};


// Enum  CommonUI.ECommonNumericType
enum class ECommonNumericType : uint8_t
{
    Number                                         = 0,
    Percentage                                     = 1,
    Seconds                                        = 2,
    Distance                                       = 3,
    ECommonNumericType_MAX                         = 4

};


// Enum  Engine.ERoundingMode
enum class ERoundingMode : uint8_t
{
    HalfToEven                                     = 0,
    HalfFromZero                                   = 1,
    HalfToZero                                     = 2,
    FromZero                                       = 3,
    ToZero                                         = 4,
    ToNegativeInfinity                             = 5,
    ToPositiveInfinity                             = 6,
    ERoundingMode_MAX                              = 7

};


// Enum  UMG.EWidgetAnimationEvent
enum class EWidgetAnimationEvent : uint8_t
{
    Started                                        = 0,
    Finished                                       = 1,
    EWidgetAnimationEvent_MAX                      = 2

};


// Enum  Engine.EInputEvent
enum class EInputEvent : uint8_t
{
    IE_Pressed                                     = 0,
    IE_Released                                    = 1,
    IE_Repeat                                      = 2,
    IE_DoubleClick                                 = 3,
    IE_Axis                                        = 4,
    IE_MAX                                         = 5

};


// Enum  UMG.EUMGSequencePlayMode
enum class EUMGSequencePlayMode : uint8_t
{
    Forward                                        = 0,
    Reverse                                        = 1,
    PingPong                                       = 2,
    EUMGSequencePlayMode_MAX                       = 3

};


// Enum  UMG.EWidgetTickFrequency
enum class EWidgetTickFrequency : uint8_t
{
    Never                                          = 0,
    Auto                                           = 1,
    EWidgetTickFrequency_MAX                       = 2

};


// Enum  CommonUI.ECommonInputMode
enum class ECommonInputMode : uint8_t
{
    Menu                                           = 0,
    Game                                           = 1,
    All                                            = 2,
    MAX                                            = 3

};


// Enum  CommonUI.ERichTextInlineIconDisplayMode
enum class ERichTextInlineIconDisplayMode : uint8_t
{
    IconOnly                                       = 0,
    TextOnly                                       = 1,
    IconAndText                                    = 2,
    MAX                                            = 3

};


// Enum  CommonUI.EInputActionState
enum class EInputActionState : uint8_t
{
    Enabled                                        = 0,
    Disabled                                       = 1,
    Hidden                                         = 2,
    HiddenAndDisabled                              = 3,
    EInputActionState_MAX                          = 4

};


// Enum  CommonUI.ETransitionCurve
enum class ETransitionCurve : uint8_t
{
    Linear                                         = 0,
    QuadIn                                         = 1,
    QuadOut                                        = 2,
    QuadInOut                                      = 3,
    CubicIn                                        = 4,
    CubicOut                                       = 5,
    CubicInOut                                     = 6,
    ETransitionCurve_MAX                           = 7

};


// Enum  CommonUI.ECommonSwitcherTransition
enum class ECommonSwitcherTransition : uint8_t
{
    FadeOnly                                       = 0,
    Horizontal                                     = 1,
    Vertical                                       = 2,
    Zoom                                           = 3,
    ECommonSwitcherTransition_MAX                  = 4

};


// Enum  CommonInput.ECommonInputType
enum class ECommonInputType : uint8_t
{
    MouseAndKeyboard                               = 0,
    Gamepad                                        = 1,
    Touch                                          = 2,
    Count                                          = 3,
    ECommonInputType_MAX                           = 4

};


// Enum  ControlRig.ERigExecutionType
enum class ERigExecutionType : uint8_t
{
    Runtime                                        = 0,
    Editing                                        = 1,
    Max                                            = 2

};


// Enum  ControlRig.EBoneGetterSetterMode
enum class EBoneGetterSetterMode : uint8_t
{
    LocalSpace                                     = 0,
    GlobalSpace                                    = 1,
    Max                                            = 2

};


// Enum  ControlRig.ETransformGetterType
enum class ETransformGetterType : uint8_t
{
    Initial                                        = 0,
    Current                                        = 1,
    Max                                            = 2

};


// Enum  ControlRig.EControlRigClampSpatialMode
enum class EControlRigClampSpatialMode : uint8_t
{
    Plane                                          = 0,
    Cylinder                                       = 1,
    Sphere                                         = 2,
    EControlRigClampSpatialMode_MAX                = 3

};


// Enum  ControlRig.ETransformSpaceMode
enum class ETransformSpaceMode : uint8_t
{
    LocalSpace                                     = 0,
    GlobalSpace                                    = 1,
    BaseSpace                                      = 2,
    BaseJoint                                      = 3,
    Max                                            = 4

};


// Enum  ControlRig.EControlRigDrawSettings
enum class EControlRigDrawSettings : uint8_t
{
    Points                                         = 0,
    Lines                                          = 1,
    LineStrip                                      = 2,
    EControlRigDrawSettings_MAX                    = 3

};


// Enum  ControlRig.EControlRigDrawHierarchyMode
enum class EControlRigDrawHierarchyMode : uint8_t
{
    Axes                                           = 0,
    Max                                            = 1

};


// Enum  ControlRig.EControlRigAnimEasingType
enum class EControlRigAnimEasingType : uint8_t
{
    Linear                                         = 0,
    QuadraticEaseIn                                = 1,
    QuadraticEaseOut                               = 2,
    QuadraticEaseInOut                             = 3,
    CubicEaseIn                                    = 4,
    CubicEaseOut                                   = 5,
    CubicEaseInOut                                 = 6,
    QuarticEaseIn                                  = 7,
    QuarticEaseOut                                 = 8,
    QuarticEaseInOut                               = 9,
    QuinticEaseIn                                  = 10,
    QuinticEaseOut                                 = 11,
    QuinticEaseInOut                               = 12,
    SineEaseIn                                     = 13,
    SineEaseOut                                    = 14,
    SineEaseInOut                                  = 15,
    CircularEaseIn                                 = 16,
    CircularEaseOut                                = 17,
    CircularEaseInOut                              = 18,
    ExponentialEaseIn                              = 19,
    ExponentialEaseOut                             = 20,
    ExponentialEaseInOut                           = 21,
    ElasticEaseIn                                  = 22,
    ElasticEaseOut                                 = 23,
    ElasticEaseInOut                               = 24,
    BackEaseIn                                     = 25,
    BackEaseOut                                    = 26,
    BackEaseInOut                                  = 27,
    BounceEaseIn                                   = 28,
    BounceEaseOut                                  = 29,
    BounceEaseInOut                                = 30,
    EControlRigAnimEasingType_MAX                  = 31

};


// Enum  ControlRig.EControlRigRotationOrder
enum class EControlRigRotationOrder : uint8_t
{
    XYZ                                            = 0,
    XZY                                            = 1,
    YXZ                                            = 2,
    YZX                                            = 3,
    ZXY                                            = 4,
    ZYX                                            = 5,
    EControlRigRotationOrder_MAX                   = 6

};


// Enum  ControlRig.ECRSimPointIntegrateType
enum class ECRSimPointIntegrateType : uint8_t
{
    Verlet                                         = 0,
    SemiExplicitEuler                              = 1,
    ECRSimPointIntegrateType_MAX                   = 2

};


// Enum  ControlRig.ECRSimConstraintType
enum class ECRSimConstraintType : uint8_t
{
    Distance                                       = 0,
    DistanceFromA                                  = 1,
    DistanceFromB                                  = 2,
    Plane                                          = 3,
    ECRSimConstraintType_MAX                       = 4

};


// Enum  ControlRig.ECRSimPointForceType
enum class ECRSimPointForceType : uint8_t
{
    Direction                                      = 0,
    ECRSimPointForceType_MAX                       = 1

};


// Enum  ControlRig.ECRSimSoftCollisionType
enum class ECRSimSoftCollisionType : uint8_t
{
    Plane                                          = 0,
    Sphere                                         = 1,
    Cone                                           = 2,
    ECRSimSoftCollisionType_MAX                    = 3

};


// Enum  ControlRig.ERigBoneType
enum class ERigBoneType : uint8_t
{
    Imported                                       = 0,
    User                                           = 1,
    ERigBoneType_MAX                               = 2

};


// Enum  ControlRig.ERigControlAxis
enum class ERigControlAxis : uint8_t
{
    X                                              = 0,
    Y                                              = 1,
    Z                                              = 2,
    ERigControlAxis_MAX                            = 3

};


// Enum  ControlRig.ERigControlValueType
enum class ERigControlValueType : uint8_t
{
    Initial                                        = 0,
    Current                                        = 1,
    Minimum                                        = 2,
    Maximum                                        = 3,
    ERigControlValueType_MAX                       = 4

};


// Enum  ControlRig.ERigControlType
enum class ERigControlType : uint8_t
{
    Bool                                           = 0,
    Float                                          = 1,
    Vector2D                                       = 2,
    Position                                       = 3,
    Scale                                          = 4,
    Rotator                                        = 5,
    Transform                                      = 6,
    TransformNoScale                               = 7,
    ERigControlType_MAX                            = 8

};


// Enum  ControlRig.ERigHierarchyImportMode
enum class ERigHierarchyImportMode : uint8_t
{
    Append                                         = 0,
    Replace                                        = 1,
    ReplaceLocalTransform                          = 2,
    ReplaceGlobalTransform                         = 3,
    Max                                            = 4

};


// Enum  ControlRig.ERigElementType
enum class ERigElementType : uint8_t
{
    None                                           = 0,
    Bone                                           = 1,
    Space                                          = 2,
    Control                                        = 4,
    Curve                                          = 8,
    All                                            = 15,
    ERigElementType_MAX                            = 16

};


// Enum  ControlRig.ERigSpaceType
enum class ERigSpaceType : uint8_t
{
    Global                                         = 0,
    Bone                                           = 1,
    Control                                        = 2,
    Space                                          = 3,
    ERigSpaceType_MAX                              = 4

};


// Enum  ControlRig.EAimMode
enum class EAimMode : uint8_t
{
    AimAtTarget                                    = 0,
    OrientToTarget                                 = 1,
    MAX                                            = 2

};


// Enum  ControlRig.EApplyTransformMode
enum class EApplyTransformMode : uint8_t
{
    Override                                       = 0,
    Additive                                       = 1,
    Max                                            = 2

};


// Enum  ControlRig.ERigUnitDebugPointMode
enum class ERigUnitDebugPointMode : uint8_t
{
    Point                                          = 0,
    Vector                                         = 1,
    Max                                            = 2

};


// Enum  ControlRig.ERigUnitDebugTransformMode
enum class ERigUnitDebugTransformMode : uint8_t
{
    Point                                          = 0,
    Axes                                           = 1,
    Box                                            = 2,
    Max                                            = 3

};


// Enum  ControlRig.EControlRigCurveAlignment
enum class EControlRigCurveAlignment : uint8_t
{
    Front                                          = 0,
    Stretched                                      = 1,
    EControlRigCurveAlignment_MAX                  = 2

};


// Enum  ControlRig.EControlRigVectorKind
enum class EControlRigVectorKind : uint8_t
{
    Direction                                      = 0,
    Location                                       = 1,
    EControlRigVectorKind_MAX                      = 2

};


// Enum  ControlRig.EControlRigModifyBoneMode
enum class EControlRigModifyBoneMode : uint8_t
{
    OverrideLocal                                  = 0,
    OverrideGlobal                                 = 1,
    AdditiveLocal                                  = 2,
    AdditiveGlobal                                 = 3,
    Max                                            = 4

};


// Enum  ControlRig.ERigUnitVisualDebugPointMode
enum class ERigUnitVisualDebugPointMode : uint8_t
{
    Point                                          = 0,
    Vector                                         = 1,
    Max                                            = 2

};


// Enum  ControlRig.EControlRigState
enum class EControlRigState : uint8_t
{
    Init                                           = 0,
    Update                                         = 1,
    Invalid                                        = 2,
    EControlRigState_MAX                           = 3

};


// Enum  EnhancedInput.EInputActionValueType
enum class EInputActionValueType : uint8_t
{
    Boolean                                        = 0,
    Axis1D                                         = 1,
    Axis2D                                         = 2,
    Axis3D                                         = 3,
    EInputActionValueType_MAX                      = 4

};


// Enum  EnhancedInput.EMappingQueryIssue
enum class EMappingQueryIssue : uint8_t
{
    NoIssue                                        = 0,
    ReservedByAction                               = 1,
    HidesExistingMapping                           = 2,
    HiddenByExistingMapping                        = 4,
    CollisionWithMappingInSameContext              = 8,
    ForcesTypePromotion                            = 16,
    ForcesTypeDemotion                             = 32,
    EMappingQueryIssue_MAX                         = 33

};


// Enum  EnhancedInput.EMappingQueryResult
enum class EMappingQueryResult : uint8_t
{
    Error_EnhancedInputNotEnabled                  = 0,
    Error_InputContextNotInActiveContexts          = 1,
    Error_InvalidAction                            = 2,
    NotMappable                                    = 3,
    MappingAvailable                               = 4,
    EMappingQueryResult_MAX                        = 5

};


// Enum  EnhancedInput.EInputAxisSwizzle
enum class EInputAxisSwizzle : uint8_t
{
    YXZ                                            = 0,
    ZYX                                            = 1,
    XZY                                            = 2,
    YZX                                            = 3,
    ZXY                                            = 4,
    EInputAxisSwizzle_MAX                          = 5

};


// Enum  EnhancedInput.EFOVScalingType
enum class EFOVScalingType : uint8_t
{
    Standard                                       = 0,
    UE4_BackCompat                                 = 1,
    EFOVScalingType_MAX                            = 2

};


// Enum  EnhancedInput.EDeadZoneType
enum class EDeadZoneType : uint8_t
{
    Axial                                          = 0,
    Radial                                         = 1,
    EDeadZoneType_MAX                              = 2

};


// Enum  EnhancedInput.EModifierExecutionPhase
enum class EModifierExecutionPhase : uint8_t
{
    PerInput                                       = 0,
    FinalValue                                     = 1,
    NumPhases                                      = 2,
    EModifierExecutionPhase_MAX                    = 3

};


// Enum  EnhancedInput.ETriggerTypeEx
enum class ETriggerTypeEx : uint8_t
{
    Explicit                                       = 0,
    Implicit                                       = 1,
    Blocker                                        = 2,
    ETriggerTypeEx_MAX                             = 3

};


// Enum  EnhancedInput.ETriggerEvent
enum class ETriggerEvent : uint8_t
{
    None                                           = 0,
    Started                                        = 1,
    Ongoing                                        = 2,
    Canceled                                       = 3,
    Triggered                                      = 4,
    Completed                                      = 5,
    ETriggerEvent_MAX                              = 6

};


// Enum  EnhancedInput.ETriggerState
enum class ETriggerState : uint8_t
{
    None                                           = 0,
    Ongoing                                        = 1,
    Triggered                                      = 2,
    ETriggerState_MAX                              = 3

};


// Enum  CascadeExtensionPlugin.EDistanceWeight
enum class EDistanceWeight : uint8_t
{
    LINEAR                                         = 0,
    INVERSE_LINEAR                                 = 1,
    QUADRATIC                                      = 2,
    INVERSE_QUAD                                   = 3,
    W_Max                                          = 4,
    EDistanceWeight_MAX                            = 5

};


// Enum  CascadeExtensionPlugin.ESpaceAxis
enum class ESpaceAxis : uint8_t
{
    X                                              = 0,
    Y                                              = 1,
    Z                                              = 2,
    Ax_Max                                         = 3,
    ESpaceAxis_MAX                                 = 4

};


// Enum  DownloaderTool.EDTFailedType
enum class EDTFailedType : uint8_t
{
    Default                                        = 0,
    RequestHeadFailed                              = 1,
    CreateFileFailed                               = 2,
    HttpError                                      = 3,
    WriteFailed                                    = 4,
    MoveFailed                                     = 5,
    RequestTimeOut                                 = 6,
    RequestInvalid                                 = 7,
    ResponseInvalid                                = 8,
    SubTaskSizeInvalid                             = 9,
    CreateUrlTaskDirFailed                         = 10,
    CreateUrlDownSizeTaskFailed                    = 11,
    CreateUrlFullDownTaskFailed                    = 12,
    CreateUrlChunkDownTaskFailed                   = 13,
    UpdateUrlTaskInfoJsonFailed                    = 14,
    MergeSubTasksFailed                            = 15,
    DecodeJsonRequestFailed                        = 16,
    HttpTaskContentInvalid                         = 17,
    LaunchSubTaskFailed                            = 18,
    HashCheckFailed                                = 19,
    SubTasksTotalSizeError                         = 20,
    SubTaskCacheSortFailed                         = 21,
    UrlTaskReadMergedFileFailed                    = 22,
    InitRequestFullUrlFailed                       = 23,
    HttpTaskUrlIndexError                          = 24,
    GetWrongJsonFormat                             = 25,
    CreateDownloadTaskFail                         = 26,
    EDTFailedType_MAX                              = 27

};


// Enum  DownloaderTool.EServerInfoState
enum class EServerInfoState : uint8_t
{
    ESIS_NotReady                                  = 0,
    ESIS_Downloading                               = 1,
    ESIS_Ready                                     = 2,
    ESIS_Failed                                    = 3,
    ESIS_OutOfDate                                 = 4,
    ESIS_MAX                                       = 5

};


// Enum  DownloaderTool.EDownloaderStatus
enum class EDownloaderStatus : uint8_t
{
    Default                                        = 0,
    NotReady                                       = 1,
    ReadyLaunch                                    = 2,
    Downloading                                    = 3,
    Pausing                                        = 4,
    Completed                                      = 5,
    EDownloaderStatus_MAX                          = 6

};


// Enum  DownloaderTool.EDownloaderHttpMethod
enum class EDownloaderHttpMethod : uint8_t
{
    Get                                            = 0,
    Post                                           = 1,
    Head                                           = 2,
    Put                                            = 3,
    Delete                                         = 4,
    EDownloaderHttpMethod_MAX                      = 5

};


// Enum  SGSRSpatialUpscaling.ESGSRTarget
enum class ESGSRTarget : uint8_t
{
    SGSR_TARGET_MOBILE                             = 0,
    SGSR_TARGET_HIGH_QUALITY                       = 1,
    SGSR_TARGET_VR                                 = 2,
    SGSR_MAX                                       = 3

};


// Enum  KawaiiPhysics.ECollisionLimitType
enum class ECollisionLimitType : uint8_t
{
    None                                           = 0,
    Spherical                                      = 1,
    Capsule                                        = 2,
    Planar                                         = 3,
    ECollisionLimitType_MAX                        = 4

};


// Enum  KawaiiPhysics.EBoneForwardAxis
enum class EBoneForwardAxis : uint8_t
{
    X_Positive                                     = 0,
    X_Negative                                     = 1,
    Y_Positive                                     = 2,
    Y_Negative                                     = 3,
    Z_Positive                                     = 4,
    Z_Negative                                     = 5,
    EBoneForwardAxis_MAX                           = 6

};


// Enum  KawaiiPhysics.EPlanarConstraint
enum class EPlanarConstraint : uint8_t
{
    None                                           = 0,
    X                                              = 1,
    Y                                              = 2,
    Z                                              = 3,
    EPlanarConstraint_MAX                          = 4

};


// Enum  AkAudio.EAkCallbackType
enum class EAkCallbackType : uint8_t
{
    EndOfEvent                                     = 0,
    Marker                                         = 2,
    Duration                                       = 3,
    Starvation                                     = 5,
    MusicPlayStarted                               = 7,
    MusicSyncBeat                                  = 8,
    MusicSyncBar                                   = 9,
    MusicSyncEntry                                 = 10,
    MusicSyncExit                                  = 11,
    MusicSyncGrid                                  = 12,
    MusicSyncUserCue                               = 13,
    MusicSyncPoint                                 = 14,
    MIDIEvent                                      = 16,
    EAkCallbackType_MAX                            = 17

};


// Enum  AkAudio.EAkResult
enum class EAkResult : uint8_t
{
    NotImplemented                                 = 0,
    Success                                        = 1,
    Fail                                           = 2,
    PartialSuccess                                 = 3,
    NotCompatible                                  = 4,
    AlreadyConnected                               = 5,
    InvalidFile                                    = 7,
    AudioFileHeaderTooLarge                        = 8,
    MaxReached                                     = 9,
    InvalidID                                      = 14,
    IDNotFound                                     = 15,
    InvalidInstanceID                              = 16,
    NoMoreData                                     = 17,
    InvalidStateGroup                              = 20,
    ChildAlreadyHasAParent                         = 21,
    InvalidLanguage                                = 22,
    CannotAddItseflAsAChild                        = 23,
    InvalidParameter                               = 31,
    ElementAlreadyInList                           = 35,
    PathNotFound                                   = 36,
    PathNoVertices                                 = 37,
    PathNotRunning                                 = 38,
    PathNotPaused                                  = 39,
    PathNodeAlreadyInList                          = 40,
    PathNodeNotInList                              = 41,
    DataNeeded                                     = 43,
    NoDataNeeded                                   = 44,
    DataReady                                      = 45,
    NoDataReady                                    = 46,
    InsufficientMemory                             = 52,
    Cancelled                                      = 53,
    UnknownBankID                                  = 54,
    BankReadError                                  = 56,
    InvalidSwitchType                              = 57,
    FormatNotReady                                 = 63,
    WrongBankVersion                               = 64,
    FileNotFound                                   = 66,
    DeviceNotReady                                 = 67,
    BankAlreadyLoaded                              = 69,
    RenderedFX                                     = 71,
    ProcessNeeded                                  = 72,
    ProcessDone                                    = 73,
    MemManagerNotInitialized                       = 74,
    StreamMgrNotInitialized                        = 75,
    SSEInstructionsNotSupported                    = 76,
    Busy                                           = 77,
    UnsupportedChannelConfig                       = 78,
    PluginMediaNotAvailable                        = 79,
    MustBeVirtualized                              = 80,
    CommandTooLarge                                = 81,
    RejectedByFilter                               = 82,
    InvalidCustomPlatformName                      = 83,
    DLLCannotLoad                                  = 84,
    DLLPathNotFound                                = 85,
    NoJavaVM                                       = 86,
    OpenSLError                                    = 87,
    PluginNotRegistered                            = 88,
    DataAlignmentError                             = 89,
    EAkResult_MAX                                  = 90

};


// Enum  AkAudio.EAkAndroidAudioAPI
enum class EAkAndroidAudioAPI : uint8_t
{
    AAudio                                         = 0,
    OpenSL_ES                                      = 1,
    EAkAndroidAudioAPI_MAX                         = 2

};


// Enum  AkAudio.EAkAudioSessionMode
enum class EAkAudioSessionMode : uint8_t
{
    Default                                        = 0,
    VoiceChat                                      = 1,
    GameChat                                       = 2,
    VideoRecording                                 = 3,
    Measurement                                    = 4,
    MoviePlayback                                  = 5,
    VideoChat                                      = 6,
    EAkAudioSessionMode_MAX                        = 7

};


// Enum  AkAudio.EAkAudioSessionCategoryOptions
enum class EAkAudioSessionCategoryOptions : uint8_t
{
    MixWithOthers                                  = 0,
    DuckOthers                                     = 1,
    AllowBluetooth                                 = 2,
    DefaultToSpeaker                               = 3,
    EAkAudioSessionCategoryOptions_MAX             = 4

};


// Enum  AkAudio.EAkAudioSessionCategory
enum class EAkAudioSessionCategory : uint8_t
{
    Ambient                                        = 0,
    SoloAmbient                                    = 1,
    PlayAndRecord                                  = 2,
    EAkAudioSessionCategory_MAX                    = 3

};


// Enum  AkAudio.EReflectionFilterBits
enum class EReflectionFilterBits : uint8_t
{
    Wall                                           = 0,
    Ceiling                                        = 1,
    Floor                                          = 2,
    EReflectionFilterBits_MAX                      = 3

};


// Enum  AkAudio.EAudioAction
enum class EAudioAction : uint8_t
{
    Stop                                           = 0,
    Pause                                          = 1,
    Resume                                         = 2,
    Break                                          = 3,
    Play                                           = 4,
    Load                                           = 5,
    Unload                                         = 6,
    Reload                                         = 7,
    SetValue                                       = 8,
    Tick                                           = 9,
    Register                                       = 10,
    Unregister                                     = 11,
    EAudioAction_MAX                               = 12

};


// Enum  AkAudio.EAudioObjectType
enum class EAudioObjectType : uint8_t
{
    Event                                          = 0,
    Switch                                         = 1,
    State                                          = 2,
    RTPC                                           = 3,
    SoundBank                                      = 4,
    LowLevelInfo                                   = 5,
    EAudioObjectType_MAX                           = 6

};


// Enum  AkAudio.AkCodecId
enum class AkCodecId : uint8_t
{
    None                                           = 0,
    PCM                                            = 1,
    ADPCM                                          = 2,
    XMA                                            = 3,
    Vorbis                                         = 4,
    AAC                                            = 10,
    ATRAC9                                         = 12,
    OpusNX                                         = 17,
    AkOpus                                         = 19,
    AkOpusWEM                                      = 20,
    AkCodecId_MAX                                  = 21

};


// Enum  AkAudio.EAkMidiCcValues
enum class EAkMidiCcValues : uint8_t
{
    AkMidiCcBankSelectCoarse                       = 0,
    AkMidiCcModWheelCoarse                         = 1,
    AkMidiCcBreathCtrlCoarse                       = 2,
    AkMidiCcCtrl3Coarse                            = 3,
    AkMidiCcFootPedalCoarse                        = 4,
    AkMidiCcPortamentoCoarse                       = 5,
    AkMidiCcDataEntryCoarse                        = 6,
    AkMidiCcVolumeCoarse                           = 7,
    AkMidiCcBalanceCoarse                          = 8,
    AkMidiCcCtrl9Coarse                            = 9,
    AkMidiCcPanPositionCoarse                      = 10,
    AkMidiCcExpressionCoarse                       = 11,
    AkMidiCcEffectCtrl1Coarse                      = 12,
    AkMidiCcEffectCtrl2Coarse                      = 13,
    AkMidiCcCtrl14Coarse                           = 14,
    AkMidiCcCtrl15Coarse                           = 15,
    AkMidiCcGenSlider1                             = 16,
    AkMidiCcGenSlider2                             = 17,
    AkMidiCcGenSlider3                             = 18,
    AkMidiCcGenSlider4                             = 19,
    AkMidiCcCtrl20Coarse                           = 20,
    AkMidiCcCtrl21Coarse                           = 21,
    AkMidiCcCtrl22Coarse                           = 22,
    AkMidiCcCtrl23Coarse                           = 23,
    AkMidiCcCtrl24Coarse                           = 24,
    AkMidiCcCtrl25Coarse                           = 25,
    AkMidiCcCtrl26Coarse                           = 26,
    AkMidiCcCtrl27Coarse                           = 27,
    AkMidiCcCtrl28Coarse                           = 28,
    AkMidiCcCtrl29Coarse                           = 29,
    AkMidiCcCtrl30Coarse                           = 30,
    AkMidiCcCtrl31Coarse                           = 31,
    AkMidiCcBankSelectFine                         = 32,
    AkMidiCcModWheelFine                           = 33,
    AkMidiCcBreathCtrlFine                         = 34,
    AkMidiCcCtrl3Fine                              = 35,
    AkMidiCcFootPedalFine                          = 36,
    AkMidiCcPortamentoFine                         = 37,
    AkMidiCcDataEntryFine                          = 38,
    AkMidiCcVolumeFine                             = 39,
    AkMidiCcBalanceFine                            = 40,
    AkMidiCcCtrl9Fine                              = 41,
    AkMidiCcPanPositionFine                        = 42,
    AkMidiCcExpressionFine                         = 43,
    AkMidiCcEffectCtrl1Fine                        = 44,
    AkMidiCcEffectCtrl2Fine                        = 45,
    AkMidiCcCtrl14Fine                             = 46,
    AkMidiCcCtrl15Fine                             = 47,
    AkMidiCcCtrl20Fine                             = 52,
    AkMidiCcCtrl21Fine                             = 53,
    AkMidiCcCtrl22Fine                             = 54,
    AkMidiCcCtrl23Fine                             = 55,
    AkMidiCcCtrl24Fine                             = 56,
    AkMidiCcCtrl25Fine                             = 57,
    AkMidiCcCtrl26Fine                             = 58,
    AkMidiCcCtrl27Fine                             = 59,
    AkMidiCcCtrl28Fine                             = 60,
    AkMidiCcCtrl29Fine                             = 61,
    AkMidiCcCtrl30Fine                             = 62,
    AkMidiCcCtrl31Fine                             = 63,
    AkMidiCcHoldPedal                              = 64,
    AkMidiCcPortamentoOnOff                        = 65,
    AkMidiCcSustenutoPedal                         = 66,
    AkMidiCcSoftPedal                              = 67,
    AkMidiCcLegatoPedal                            = 68,
    AkMidiCcHoldPedal2                             = 69,
    AkMidiCcSoundVariation                         = 70,
    AkMidiCcSoundTimbre                            = 71,
    AkMidiCcSoundReleaseTime                       = 72,
    AkMidiCcSoundAttackTime                        = 73,
    AkMidiCcSoundBrightness                        = 74,
    AkMidiCcSoundCtrl6                             = 75,
    AkMidiCcSoundCtrl7                             = 76,
    AkMidiCcSoundCtrl8                             = 77,
    AkMidiCcSoundCtrl9                             = 78,
    AkMidiCcSoundCtrl10                            = 79,
    AkMidiCcGeneralButton1                         = 80,
    AkMidiCcGeneralButton2                         = 81,
    AkMidiCcGeneralButton3                         = 82,
    AkMidiCcGeneralButton4                         = 83,
    AkMidiCcReverbLevel                            = 91,
    AkMidiCcTremoloLevel                           = 92,
    AkMidiCcChorusLevel                            = 93,
    AkMidiCcCelesteLevel                           = 94,
    AkMidiCcPhaserLevel                            = 95,
    AkMidiCcDataButtonP1                           = 96,
    AkMidiCcDataButtonM1                           = 97,
    AkMidiCcNonRegisterCoarse                      = 98,
    AkMidiCcNonRegisterFine                        = 99,
    AkMidiCcAllSoundOff                            = 120,
    AkMidiCcAllControllersOff                      = 121,
    AkMidiCcLocalKeyboard                          = 122,
    AkMidiCcAllNotesOff                            = 123,
    AkMidiCcOmniModeOff                            = 124,
    AkMidiCcOmniModeOn                             = 125,
    AkMidiCcOmniMonophonicOn                       = 126,
    AkMidiCcOmniPolyphonicOn                       = 127,
    EAkMidiCcValues_MAX                            = 128

};


// Enum  AkAudio.EAkMidiEventType
enum class EAkMidiEventType : uint8_t
{
    AkMidiEventTypeInvalid                         = 0,
    AkMidiEventTypeNoteOff                         = 128,
    AkMidiEventTypeNoteOn                          = 144,
    AkMidiEventTypeNoteAftertouch                  = 160,
    AkMidiEventTypeController                      = 176,
    AkMidiEventTypeProgramChange                   = 192,
    AkMidiEventTypeChannelAftertouch               = 208,
    AkMidiEventTypePitchBend                       = 224,
    AkMidiEventTypeSysex                           = 240,
    AkMidiEventTypeEscape                          = 247,
    AkMidiEventTypeMeta                            = 255,
    EAkMidiEventType_MAX                           = 256

};


// Enum  AkAudio.ERTPCValueType
enum class ERTPCValueType : uint8_t
{
    Default                                        = 0,
    Global                                         = 1,
    GameObject                                     = 2,
    PlayingID                                      = 3,
    Unavailable                                    = 4,
    ERTPCValueType_MAX                             = 5

};


// Enum  AkAudio.EAkCurveInterpolation
enum class EAkCurveInterpolation : uint8_t
{
    Log3                                           = 0,
    Sine                                           = 1,
    Log1                                           = 2,
    InvSCurve                                      = 3,
    Linear                                         = 4,
    SCurve                                         = 5,
    Exp1                                           = 6,
    SineRecip                                      = 7,
    Exp3                                           = 8,
    LastFadeCurve                                  = 8,
    Constant                                       = 9,
    EAkCurveInterpolation_MAX                      = 10

};


// Enum  AkAudio.AkActionOnEventType
enum class AkActionOnEventType : uint8_t
{
    Stop                                           = 0,
    Pause                                          = 1,
    Resume                                         = 2,
    Break                                          = 3,
    ReleaseEnvelope                                = 4,
    AkActionOnEventType_MAX                        = 5

};


// Enum  AkAudio.AkMultiPositionType
enum class AkMultiPositionType : uint8_t
{
    SingleSource                                   = 0,
    MultiSources                                   = 1,
    MultiDirections                                = 2,
    AkMultiPositionType_MAX                        = 3

};


// Enum  AkAudio.AkSpeakerConfiguration
enum class AkSpeakerConfiguration : uint32_t
{
    Ak_Speaker_Front_Left                          = 1,
    Ak_Speaker_Front_Right                         = 2,
    Ak_Speaker_Front_Center                        = 4,
    Ak_Speaker_Low_Frequency                       = 8,
    Ak_Speaker_Back_Left                           = 16,
    Ak_Speaker_Back_Right                          = 32,
    Ak_Speaker_Back_Center                         = 256,
    Ak_Speaker_Side_Left                           = 512,
    Ak_Speaker_Side_Right                          = 1024,
    Ak_Speaker_Top                                 = 2048,
    Ak_Speaker_Height_Front_Left                   = 4096,
    Ak_Speaker_Height_Front_Center                 = 8192,
    Ak_Speaker_Height_Front_Right                  = 16384,
    Ak_Speaker_Height_Back_Left                    = 32768,
    Ak_Speaker_Height_Back_Center                  = 65536,
    Ak_Speaker_Height_Back_Right                   = 131072,
    Ak_Speaker_MAX                                 = 131073

};


// Enum  AkAudio.AkChannelConfiguration
enum class AkChannelConfiguration : uint8_t
{
    Ak_Parent                                      = 0,
    Ak_MainMix                                     = 1,
    Ak_Passthrough                                 = 2,
    Ak_LFE                                         = 3,
    AK_Audio_Objects                               = 4,
    Ak_1                                           = 5,
    Ak_2                                           = 6,
    Ak_2                                           = 7,
    Ak_3                                           = 8,
    Ak_3                                           = 9,
    Ak_4                                           = 10,
    Ak_4                                           = 11,
    Ak_5                                           = 12,
    Ak_5                                           = 13,
    Ak_7                                           = 14,
    Ak_5_1                                         = 15,
    Ak_7_1                                         = 16,
    Ak_7_1                                         = 17,
    Ak_Auro_9                                      = 18,
    Ak_Auro_10                                     = 19,
    Ak_Auro_11                                     = 20,
    Ak_Auro_13                                     = 21,
    Ak_Ambisonics_1st_order                        = 22,
    Ak_Ambisonics_2nd_order                        = 23,
    Ak_Ambisonics_3rd_order                        = 24,
    Ak_Ambisonics_4th_order                        = 25,
    Ak_Ambisonics_5th_order                        = 26,
    AkChannelConfiguration_MAX                     = 27

};


// Enum  AkAudio.AkAcousticPortalState
enum class AkAcousticPortalState : uint8_t
{
    Closed                                         = 0,
    Open                                           = 1,
    AkAcousticPortalState_MAX                      = 2

};


// Enum  AkAudio.PanningRule
enum class PanningRule : uint8_t
{
    PanningRule_Speakers                           = 0,
    PanningRule_Headphones                         = 1,
    PanningRule_MAX                                = 2

};


// Enum  AkAudio.AkMeshType
enum class AkMeshType : uint8_t
{
    StaticMesh                                     = 0,
    CollisionMesh                                  = 1,
    AkMeshType_MAX                                 = 2

};


// Enum  AkAudio.EAkCommSystem
enum class EAkCommSystem : uint8_t
{
    Socket                                         = 0,
    HTCS                                           = 1,
    EAkCommSystem_MAX                              = 2

};


// Enum  AkAudio.EAkChannelMask
enum class EAkChannelMask : uint8_t
{
    FrontLeft                                      = 0,
    FrontRight                                     = 1,
    FrontCenter                                    = 2,
    LowFrequency                                   = 3,
    BackLeft                                       = 4,
    BackRight                                      = 5,
    BackCenter                                     = 8,
    SideLeft                                       = 9,
    SideRight                                      = 10,
    Top                                            = 11,
    HeightFrontLeft                                = 12,
    HeightFrontCenter                              = 13,
    HeightFrontRight                               = 14,
    HeightBackLeft                                 = 15,
    HeightBackCenter                               = 16,
    HeightBackRight                                = 17,
    EAkChannelMask_MAX                             = 18

};


// Enum  AkAudio.EAkChannelConfigType
enum class EAkChannelConfigType : uint8_t
{
    Anonymous                                      = 0,
    Standard                                       = 1,
    Ambisonic                                      = 2,
    EAkChannelConfigType_MAX                       = 3

};


// Enum  AkAudio.EAkPanningRule
enum class EAkPanningRule : uint8_t
{
    Speakers                                       = 0,
    Headphones                                     = 1,
    EAkPanningRule_MAX                             = 2

};


// Enum  AkAudio.EAkFitToGeometryMode
enum class EAkFitToGeometryMode : uint8_t
{
    OrientedBox                                    = 0,
    AlignedBox                                     = 1,
    ConvexPolyhedron                               = 2,
    EAkFitToGeometryMode_MAX                       = 3

};


// Enum  AkAudio.EBankLoadStatus
enum class EBankLoadStatus : uint8_t
{
    Unloaded                                       = 0,
    InQueue                                        = 1,
    AsyncLoading                                   = 2,
    AsyncUnloading                                 = 3,
    Loaded                                         = 4,
    Error                                          = 5,
    EBankLoadStatus_MAX                            = 6

};


// Enum  AkAudio.EHRTFMode
enum class EHRTFMode : uint8_t
{
    Auro                                           = 0,
    Resonance                                      = 1,
    None                                           = 2,
    EHRTFMode_MAX                                  = 3

};


// Enum  AkAudio.EPortalType
enum class EPortalType : uint8_t
{
    Door                                           = 0,
    Window                                         = 1,
    Entrance                                       = 2,
    All                                            = 3,
    EPortalType_MAX                                = 4

};


// Enum  Paper2D.EFlipbookCollisionMode
enum class EFlipbookCollisionMode : uint8_t
{
    NoCollision                                    = 0,
    FirstFrameCollision                            = 1,
    EachFrameCollision                             = 2,
    EFlipbookCollisionMode_MAX                     = 3

};


// Enum  Paper2D.EPaperSpriteAtlasPadding
enum class EPaperSpriteAtlasPadding : uint8_t
{
    DilateBorder                                   = 0,
    PadWithZero                                    = 1,
    EPaperSpriteAtlasPadding_MAX                   = 2

};


// Enum  Paper2D.ETileMapProjectionMode
enum class ETileMapProjectionMode : uint8_t
{
    Orthogonal                                     = 0,
    IsometricDiamond                               = 1,
    IsometricStaggered                             = 2,
    HexagonalStaggered                             = 3,
    ETileMapProjectionMode_MAX                     = 4

};


// Enum  Paper2D.ESpritePivotMode
enum class ESpritePivotMode : uint8_t
{
    Top_Left                                       = 0,
    Top_Center                                     = 1,
    Top_Right                                      = 2,
    Center_Left                                    = 3,
    Center_Center                                  = 4,
    Center_Right                                   = 5,
    Bottom_Left                                    = 6,
    Bottom_Center                                  = 7,
    Bottom_Right                                   = 8,
    Custom                                         = 9,
    ESpritePivotMode_MAX                           = 10

};


// Enum  Paper2D.ESpritePolygonMode
enum class ESpritePolygonMode : uint8_t
{
    SourceBoundingBox                              = 0,
    TightBoundingBox                               = 1,
    ShrinkWrapped                                  = 2,
    FullyCustom                                    = 3,
    Diced                                          = 4,
    ESpritePolygonMode_MAX                         = 5

};


// Enum  Paper2D.ESpriteShapeType
enum class ESpriteShapeType : uint8_t
{
    Box                                            = 0,
    Circle                                         = 1,
    Polygon                                        = 2,
    ESpriteShapeType_MAX                           = 3

};


// Enum  Paper2D.ESpriteCollisionMode
enum class ESpriteCollisionMode : uint8_t
{
    None                                           = 0,
    Use2DPhysics                                   = 1,
    Use3DPhysics                                   = 2,
    ESpriteCollisionMode_MAX                       = 3

};


// Enum  SolarUI.EWidgetOverrideParamType
enum class EWidgetOverrideParamType : uint8_t
{
    None                                           = 0,
    Text                                           = 1,
    Image                                          = 2,
    Custom                                         = 3,
    GameplayTag                                    = 4,
    EWidgetOverrideParamType_MAX                   = 5

};


// Enum  SolarUI.EUseDesktopWidgetType
enum class EUseDesktopWidgetType : uint8_t
{
    DesktopOverrideMobile                          = 0,
    OnlyDesktop                                    = 1,
    OnlyMobile                                     = 2,
    DesktopAndMobile                               = 3,
    EUseDesktopWidgetType_MAX                      = 4

};


// Enum  SolarUI.EWidgetLoadType
enum class EWidgetLoadType : uint8_t
{
    Start                                          = 0,
    Delay                                          = 1,
    EWidgetLoadType_MAX                            = 2

};


// Enum  SolarUI.USolarWidgetLayoutType
enum class USolarWidgetLayoutType : uint8_t
{
    Default                                        = 0,
    Mobile                                         = 1,
    DesktopCommon                                  = 2,
    Count                                          = 3,
    USolarWidgetLayoutType_MAX                     = 4

};


// Enum  SolarUI.ELayoutPreviewType
enum class ELayoutPreviewType : uint8_t
{
    Mobile                                         = 0,
    Desktop                                        = 1,
    Deprecated                                     = 2,
    ELayoutPreviewType_MAX                         = 3

};


// Enum  Engine.TextureFilter
enum class TextureFilter : uint8_t
{
    TF_Nearest                                     = 0,
    TF_Bilinear                                    = 1,
    TF_Trilinear                                   = 2,
    TF_Default                                     = 3,
    TF_MAX                                         = 4

};


// Enum  MeshWidget.EUIMeshTransform
enum class EUIMeshTransform : uint8_t
{
    Perspective                                    = 0,
    Orthographic                                   = 1,
    EUIMeshTransform_MAX                           = 2

};


// Enum  ACLPlugin.ACLCompressionLevel
enum class ACLCompressionLevel : uint8_t
{
    ACLCL_Lowest                                   = 0,
    ACLCL_Low                                      = 1,
    ACLCL_Medium                                   = 2,
    ACLCL_High                                     = 3,
    ACLCL_Highest                                  = 4,
    ACLCL_MAX                                      = 5

};


// Enum  ACLPlugin.ACLVectorFormat
enum class ACLVectorFormat : uint8_t
{
    ACLVF_Vector3                                  = 0,
    ACLVF_Vector3_Variable                         = 1,
    ACLVF_Vector3_MAX                              = 2

};


// Enum  ACLPlugin.ACLRotationFormat
enum class ACLRotationFormat : uint8_t
{
    ACLRF_Quat                                     = 0,
    ACLRF_QuatDropW                                = 1,
    ACLRF_QuatDropW_Variable                       = 2,
    ACLRF_MAX                                      = 3

};


// Enum  ACLPlugin.ACLVisualFidelityChangeResult
enum class ACLVisualFidelityChangeResult : uint8_t
{
    Dispatched                                     = 0,
    Completed                                      = 1,
    Failed                                         = 2,
    ACLVisualFidelityChangeResult_MAX              = 3

};


// Enum  ACLPlugin.ACLVisualFidelity
enum class ACLVisualFidelity : uint8_t
{
    Highest                                        = 0,
    Medium                                         = 1,
    Lowest                                         = 2,
    ACLVisualFidelity_MAX                          = 3

};


// Enum  HotPatcherRuntime.ETargetPlatform
enum class ETargetPlatform : uint8_t
{
    None                                           = 0,
    AllPlatforms                                   = 1,
    ETargetPlatform_MAX                            = 2

};


// Enum  HotPatcherRuntime.EMatchOperator
enum class EMatchOperator : uint8_t
{
    None                                           = 0,
    GREAT_THAN                                     = 1,
    LESS_THAN                                      = 2,
    EQUAL                                          = 3,
    EMatchOperator_MAX                             = 4

};


// Enum  HotPatcherRuntime.EMatchRule
enum class EMatchRule : uint8_t
{
    None                                           = 0,
    MATCH                                          = 1,
    IGNORE                                         = 2,
    EMatchRule_MAX                                 = 3

};


// Enum  HotPatcherRuntime.EMonolithicPathMode
enum class EMonolithicPathMode : uint8_t
{
    MountPath                                      = 0,
    PackagePath                                    = 1,
    EMonolithicPathMode_MAX                        = 2

};


// Enum  HotPatcherRuntime.EAssetRegistryRule
enum class EAssetRegistryRule : uint8_t
{
    PATCH                                          = 0,
    PER_CHUNK                                      = 1,
    CUSTOM                                         = 2,
    EAssetRegistryRule_MAX                         = 3

};


// Enum  HotPatcherRuntime.EShaderLibNameRule
enum class EShaderLibNameRule : uint8_t
{
    VERSION_ID                                     = 0,
    PROJECT_NAME                                   = 1,
    CUSTOM                                         = 2,
    EShaderLibNameRule_MAX                         = 3

};


// Enum  HotPatcherRuntime.EAssetRegistryDependencyTypeEx
enum class EAssetRegistryDependencyTypeEx : uint8_t
{
    None                                           = 0,
    Soft                                           = 1,
    Hard                                           = 2,
    SearchableName                                 = 4,
    SoftManage                                     = 8,
    HardManage                                     = 16,
    Packages                                       = 3,
    Manage                                         = 24,
    All                                            = 31,
    EAssetRegistryDependencyTypeEx_MAX             = 32

};


// Enum  HotPatcherRuntime.EPSOSaveMode
enum class EPSOSaveMode : uint8_t
{
    Incremental                                    = 0,
    BoundPSOsOnly                                  = 1,
    SortedBoundPSOs                                = 2,
    EPSOSaveMode_MAX                               = 3

};


// Enum  HotPatcherRuntime.ESearchCaseMode
enum class ESearchCaseMode : uint8_t
{
    CaseSensitive                                  = 0,
    IgnoreCase                                     = 1,
    ESearchCaseMode_MAX                            = 2

};


// Enum  BinariesPatchFeature.EBinariesPatchFeature
enum class EBinariesPatchFeature : uint8_t
{
    None                                           = 0,
    Count                                          = 1,
    EBinariesPatchFeature_MAX                      = 2

};


// Enum  FoliageNetRuntime.EInputState
enum class EInputState : uint8_t
{
    STATE_WAIT                                     = 0,
    STATE_COMPLETED                                = 1,
    STATE_MAX                                      = 2

};


// Enum  LM_LandscapeRuntime.ELMCopyTextureType
enum class ELMCopyTextureType : uint8_t
{
    Normal                                         = 0,
    Float16ToR8G8                                  = 1,
    R8G8ToFloat16                                  = 2,
    ELMCopyTextureType_MAX                         = 3

};


// Enum  LM_LandscapeRuntime.ELMSampleMode
enum class ELMSampleMode : uint8_t
{
    Normal                                         = 0,
    Point                                          = 1,
    Bilinear                                       = 2,
    ELMSampleMode_MAX                              = 3

};


// Enum  LM_LandscapeRuntime.ELMBlendMode
enum class ELMBlendMode : uint8_t
{
    Blend                                          = 0,
    Override                                       = 1,
    ELMBlendMode_MAX                               = 2

};


// Enum  LM_LandscapeRuntime.ELMLayerMixMethod
enum class ELMLayerMixMethod : uint8_t
{
    Type_Add                                       = 0,
    Type_Subtract                                  = 1,
    Type_Multiply                                  = 2,
    Type_Copy                                      = 3,
    Type_Clamp                                     = 4,
    Type_Blend                                     = 5,
    Type_Min                                       = 6,
    Type_Max                                       = 7,
    Type_None                                      = 8

};


// Enum  LunarMariaArea.EAreaResolutionRatio
enum class EAreaResolutionRatio : uint8_t
{
    X1                                             = 1,
    X2                                             = 2,
    X3                                             = 3,
    X4                                             = 4,
    X5                                             = 5,
    X6                                             = 6,
    X7                                             = 7,
    X8                                             = 8,
    X9                                             = 9,
    X10                                            = 10,
    X                                              = 11,
    X                                              = 12,
    X                                              = 13,
    EAreaResolutionRatio_MAX                       = 14

};


// Enum  UdiniInputActor.EUdiniTableType
enum class EUdiniTableType : uint8_t
{
    TYPE_Mat                                       = 0,
    TYPE_Staticmesh                                = 1,
    TYPE_StaticmeshPicMix                          = 2,
    TYPE_FoliageType                               = 3,
    TYPE_Pic                                       = 4,
    TYPE_Heigfield                                 = 5,
    TYPE_OtherUobject                              = 6,
    TYPE_Other                                     = 7,
    TYPE_MAX                                       = 8

};


// Enum  UdiniInputActor.EUdiniPart
enum class EUdiniPart : uint8_t
{
    Part_Mesh                                      = 0,
    Part_Curve                                     = 1,
    Part_Point                                     = 2,
    Part_Curve_ReadOnly                            = 3,
    Part_Point_ReadOnly                            = 4,
    Part_MAX                                       = 5

};


// Enum  UdiniInputActor.EUdiniAttributeClass
enum class EUdiniAttributeClass : uint8_t
{
    Class_None                                     = 0,
    Class_Core                                     = 1,
    Class_CurvePrimAtt                             = 2,
    Class_MeshPrimAtt                              = 3,
    Class_MeshPointAtt                             = 4,
    Class_MeshDetailAtt                            = 5,
    Class_MeshControlAtt                           = 6,
    Class_PolyLinePrimAtt                          = 7,
    Class_PolyLinePointAtt                         = 8,
    Class_PointAtt                                 = 9,
    Class_HeightfieldPrimAtt                       = 10,
    Class_MAX                                      = 11

};


// Enum  UdiniInputActor.EUdiniAttributeType
enum class EUdiniAttributeType : uint8_t
{
    TYPE_STRING                                    = 0,
    TYPE_INT                                       = 1,
    TYPE_FLOAT                                     = 2,
    TYPE_VECTOR3                                   = 3,
    TYPE_VECTOR4                                   = 4,
    TYPE_VECTOR2                                   = 5,
    TYPE_StringList                                = 6,
    TYPE_IntList                                   = 7,
    TYPE_Tog                                       = 8,
    TYPE_Button                                    = 9,
    TYPE_CheckBox                                  = 10,
    TYPE_UOBJECT                                   = 11,
    TYPE_MAX                                       = 12

};


// Enum  UdiniInputActor.EUdiniDataPartType
enum class EUdiniDataPartType : uint8_t
{
    Part_Point                                     = 0,
    Part_Mesh                                      = 1,
    Part_Polyline                                  = 2,
    Part_Splineline                                = 3,
    Part_Volum                                     = 4,
    Part_Max                                       = 5

};


// Enum  UdiniInputActor.EUdiniPartType
enum class EUdiniPartType : uint8_t
{
    Part_StaticmeshMesh                            = 0,
    Part_ProceduareMesh                            = 1,
    Part_Instance                                  = 2,
    Part_InstanceForlage                           = 3,
    Part_HRISInstance                              = 4,
    Part_DecalActor                                = 5,
    Part_UobjectInstance                           = 6,
    Part_Image                                     = 7,
    Part_LMLayer                                   = 8,
    Part_Landscape                                 = 9,
    Part_HLOD                                      = 10,
    Part_MAX                                       = 11

};


// Enum  OodleHandlerComponent.EOodleEnableMode
enum class EOodleEnableMode : uint8_t
{
    AlwaysEnabled                                  = 0,
    WhenCompressedPacketReceived                   = 1,
    EOodleEnableMode_MAX                           = 2

};


// Enum  UdpMessaging.EUdpMessageFormat
enum class EUdpMessageFormat : uint8_t
{
    None                                           = 0,
    Json                                           = 1,
    TaggedProperty                                 = 2,
    CborPlatformEndianness                         = 3,
    CborStandardEndianness                         = 4,
    EUdpMessageFormat_MAX                          = 5

};


// Enum  ActorSequence.EActorSequenceObjectReferenceType
enum class EActorSequenceObjectReferenceType : uint8_t
{
    ContextActor                                   = 0,
    ExternalActor                                  = 1,
    Component                                      = 2,
    EActorSequenceObjectReferenceType_MAX          = 3

};


// Enum  AppleImageUtils.EAppleTextureType
enum class EAppleTextureType : uint8_t
{
    Unknown                                        = 0,
    Image                                          = 1,
    PixelBuffer                                    = 2,
    Surface                                        = 3,
    MetalTexture                                   = 4,
    EAppleTextureType_MAX                          = 5

};


// Enum  AppleImageUtils.ETextureRotationDirection
enum class ETextureRotationDirection : uint8_t
{
    None                                           = 0,
    Left                                           = 1,
    Right                                          = 2,
    Down                                           = 3,
    ETextureRotationDirection_MAX                  = 4

};


// Enum  AssetTags.ECollectionScriptingShareType
enum class ECollectionScriptingShareType : uint8_t
{
    Local                                          = 0,
    Private                                        = 1,
    Shared                                         = 2,
    ECollectionScriptingShareType_MAX              = 3

};


// Enum  GooglePAD.EGooglePADCellularDataConfirmStatus
enum class EGooglePADCellularDataConfirmStatus : uint8_t
{
    AssetPack_CONFIRM_UNKNOWN                      = 0,
    AssetPack_CONFIRM_PENDING                      = 1,
    AssetPack_CONFIRM_USER_APPROVED                = 2,
    AssetPack_CONFIRM_USER_CANCELED                = 3,
    AssetPack_CONFIRM_MAX                          = 4

};


// Enum  GooglePAD.EGooglePADStorageMethod
enum class EGooglePADStorageMethod : uint8_t
{
    AssetPack_STORAGE_FILES                        = 0,
    AssetPack_STORAGE_APK                          = 1,
    AssetPack_STORAGE_UNKNOWN                      = 2,
    AssetPack_STORAGE_NOT_INSTALLED                = 3,
    AssetPack_STORAGE_MAX                          = 4

};


// Enum  GooglePAD.EGooglePADDownloadStatus
enum class EGooglePADDownloadStatus : uint8_t
{
    AssetPack_UNKNOWN                              = 0,
    AssetPack_DOWNLOAD_PENDING                     = 1,
    AssetPack_DOWNLOADING                          = 2,
    AssetPack_TRANSFERRING                         = 3,
    AssetPack_DOWNLOAD_COMPLETED                   = 4,
    AssetPack_DOWNLOAD_FAILED                      = 5,
    AssetPack_DOWNLOAD_CANCELED                    = 6,
    AssetPack_WAITING_FOR_WIFI                     = 7,
    AssetPack_NOT_INSTALLED                        = 8,
    AssetPack_INFO_PENDING                         = 9,
    AssetPack_INFO_FAILED                          = 10,
    AssetPack_REMOVAL_PENDING                      = 11,
    AssetPack_REMOVAL_FAILED                       = 12,
    AssetPack_MAX                                  = 13

};


// Enum  GooglePAD.EGooglePADErrorCode
enum class EGooglePADErrorCode : uint8_t
{
    AssetPack_NO_ERROR                             = 0,
    AssetPack_APP_UNAVAILABLE                      = 1,
    AssetPack_UNAVAILABLE                          = 2,
    AssetPack_INVALID_REQUEST                      = 3,
    AssetPack_DOWNLOAD_NOT_FOUND                   = 4,
    AssetPack_API_NOT_AVAILABLE                    = 5,
    AssetPack_NETWORK_ERROR                        = 6,
    AssetPack_ACCESS_DENIED                        = 7,
    AssetPack_INSUFFICIENT_STORAGE                 = 8,
    AssetPack_PLAY_STORE_NOT_FOUND                 = 9,
    AssetPack_NETWORK_UNRESTRICTED                 = 10,
    AssetPack_INTERNAL_ERROR                       = 11,
    AssetPack_INITIALIZATION_NEEDED                = 12,
    AssetPack_INITIALIZATION_FAILED                = 13,
    AssetPack_MAX                                  = 14

};


// Enum  LocationServicesBPLibrary.ELocationAccuracy
enum class ELocationAccuracy : uint8_t
{
    LA_ThreeKilometers                             = 0,
    LA_OneKilometer                                = 1,
    LA_HundredMeters                               = 2,
    LA_TenMeters                                   = 3,
    LA_Best                                        = 4,
    LA_Navigation                                  = 5,
    LA_MAX                                         = 6

};


// Enum  Synthesis.ESynth1PatchDestination
enum class ESynth1PatchDestination : uint8_t
{
    Osc1Gain                                       = 0,
    Osc1Frequency                                  = 1,
    Osc1Pulsewidth                                 = 2,
    Osc2Gain                                       = 3,
    Osc2Frequency                                  = 4,
    Osc2Pulsewidth                                 = 5,
    FilterFrequency                                = 6,
    FilterQ                                        = 7,
    Gain                                           = 8,
    Pan                                            = 9,
    LFO1Frequency                                  = 10,
    LFO1Gain                                       = 11,
    LFO2Frequency                                  = 12,
    LFO2Gain                                       = 13,
    Count                                          = 14,
    ESynth1PatchDestination_MAX                    = 15

};


// Enum  Synthesis.ESynth1PatchSource
enum class ESynth1PatchSource : uint8_t
{
    LFO1                                           = 0,
    LFO2                                           = 1,
    Envelope                                       = 2,
    BiasEnvelope                                   = 3,
    Count                                          = 4,
    ESynth1PatchSource_MAX                         = 5

};


// Enum  Synthesis.ESynthStereoDelayMode
enum class ESynthStereoDelayMode : uint8_t
{
    Normal                                         = 0,
    Cross                                          = 1,
    PingPong                                       = 2,
    Count                                          = 3,
    ESynthStereoDelayMode_MAX                      = 4

};


// Enum  Synthesis.ESynthFilterAlgorithm
enum class ESynthFilterAlgorithm : uint8_t
{
    OnePole                                        = 0,
    StateVariable                                  = 1,
    Ladder                                         = 2,
    Count                                          = 3,
    ESynthFilterAlgorithm_MAX                      = 4

};


// Enum  Synthesis.ESynthFilterType
enum class ESynthFilterType : uint8_t
{
    LowPass                                        = 0,
    HighPass                                       = 1,
    BandPass                                       = 2,
    BandStop                                       = 3,
    Count                                          = 4,
    ESynthFilterType_MAX                           = 5

};


// Enum  Synthesis.ESynthModEnvBiasPatch
enum class ESynthModEnvBiasPatch : uint8_t
{
    PatchToNone                                    = 0,
    PatchToOscFreq                                 = 1,
    PatchToFilterFreq                              = 2,
    PatchToFilterQ                                 = 3,
    PatchToLFO1Gain                                = 4,
    PatchToLFO2Gain                                = 5,
    PatchToLFO1Freq                                = 6,
    PatchToLFO2Freq                                = 7,
    Count                                          = 8,
    ESynthModEnvBiasPatch_MAX                      = 9

};


// Enum  Synthesis.ESynthModEnvPatch
enum class ESynthModEnvPatch : uint8_t
{
    PatchToNone                                    = 0,
    PatchToOscFreq                                 = 1,
    PatchToFilterFreq                              = 2,
    PatchToFilterQ                                 = 3,
    PatchToLFO1Gain                                = 4,
    PatchToLFO2Gain                                = 5,
    PatchToLFO1Freq                                = 6,
    PatchToLFO2Freq                                = 7,
    Count                                          = 8,
    ESynthModEnvPatch_MAX                          = 9

};


// Enum  Synthesis.ESynthLFOPatchType
enum class ESynthLFOPatchType : uint8_t
{
    PatchToNone                                    = 0,
    PatchToGain                                    = 1,
    PatchToOscFreq                                 = 2,
    PatchToFilterFreq                              = 3,
    PatchToFilterQ                                 = 4,
    PatchToOscPulseWidth                           = 5,
    PatchToOscPan                                  = 6,
    PatchLFO1ToLFO2Frequency                       = 7,
    PatchLFO1ToLFO2Gain                            = 8,
    Count                                          = 9,
    ESynthLFOPatchType_MAX                         = 10

};


// Enum  Synthesis.ESynthLFOMode
enum class ESynthLFOMode : uint8_t
{
    Sync                                           = 0,
    OneShot                                        = 1,
    Free                                           = 2,
    Count                                          = 3,
    ESynthLFOMode_MAX                              = 4

};


// Enum  Synthesis.ESynthLFOType
enum class ESynthLFOType : uint8_t
{
    Sine                                           = 0,
    UpSaw                                          = 1,
    DownSaw                                        = 2,
    Square                                         = 3,
    Triangle                                       = 4,
    Exponential                                    = 5,
    RandomSampleHold                               = 6,
    Count                                          = 7,
    ESynthLFOType_MAX                              = 8

};


// Enum  Synthesis.ESynth1OscType
enum class ESynth1OscType : uint8_t
{
    Sine                                           = 0,
    Saw                                            = 1,
    Triangle                                       = 2,
    Square                                         = 3,
    Noise                                          = 4,
    Count                                          = 5,
    ESynth1OscType_MAX                             = 6

};


// Enum  Synthesis.ESourceEffectDynamicsPeakMode
enum class ESourceEffectDynamicsPeakMode : uint8_t
{
    MeanSquared                                    = 0,
    RootMeanSquared                                = 1,
    Peak                                           = 2,
    Count                                          = 3,
    ESourceEffectDynamicsPeakMode_MAX              = 4

};


// Enum  Synthesis.ESourceEffectDynamicsProcessorType
enum class ESourceEffectDynamicsProcessorType : uint8_t
{
    Compressor                                     = 0,
    Limiter                                        = 1,
    Expander                                       = 2,
    Gate                                           = 3,
    Count                                          = 4,
    ESourceEffectDynamicsProcessorType_MAX         = 5

};


// Enum  Synthesis.EEnvelopeFollowerPeakMode
enum class EEnvelopeFollowerPeakMode : uint8_t
{
    MeanSquared                                    = 0,
    RootMeanSquared                                = 1,
    Peak                                           = 2,
    Count                                          = 3,
    EEnvelopeFollowerPeakMode_MAX                  = 4

};


// Enum  Synthesis.ESourceEffectFilterType
enum class ESourceEffectFilterType : uint8_t
{
    LowPass                                        = 0,
    HighPass                                       = 1,
    BandPass                                       = 2,
    BandStop                                       = 3,
    Count                                          = 4,
    ESourceEffectFilterType_MAX                    = 5

};


// Enum  Synthesis.ESourceEffectFilterCircuit
enum class ESourceEffectFilterCircuit : uint8_t
{
    OnePole                                        = 0,
    StateVariable                                  = 1,
    Ladder                                         = 2,
    Count                                          = 3,
    ESourceEffectFilterCircuit_MAX                 = 4

};


// Enum  Synthesis.EStereoChannelMode
enum class EStereoChannelMode : uint8_t
{
    MidSide                                        = 0,
    LeftRight                                      = 1,
    count                                          = 2,
    EStereoChannelMode_MAX                         = 3

};


// Enum  Synthesis.EPhaserLFOType
enum class EPhaserLFOType : uint8_t
{
    Sine                                           = 0,
    UpSaw                                          = 1,
    DownSaw                                        = 2,
    Square                                         = 3,
    Triangle                                       = 4,
    Exponential                                    = 5,
    RandomSampleHold                               = 6,
    Count                                          = 7,
    EPhaserLFOType_MAX                             = 8

};


// Enum  Synthesis.ERingModulatorTypeSourceEffect
enum class ERingModulatorTypeSourceEffect : uint8_t
{
    Sine                                           = 0,
    Saw                                            = 1,
    Triangle                                       = 2,
    Square                                         = 3,
    Count                                          = 4,
    ERingModulatorTypeSourceEffect_MAX             = 5

};


// Enum  Synthesis.EStereoDelaySourceEffect
enum class EStereoDelaySourceEffect : uint8_t
{
    Normal                                         = 0,
    Cross                                          = 1,
    PingPong                                       = 2,
    Count                                          = 3,
    EStereoDelaySourceEffect_MAX                   = 4

};


// Enum  Synthesis.ESubmixEffectConvolutionReverbBlockSize
enum class ESubmixEffectConvolutionReverbBlockSize : uint8_t
{
    BlockSize256                                   = 0,
    BlockSize512                                   = 1,
    BlockSize1024                                  = 2,
    ESubmixEffectConvolutionReverbBlockSize_MAX    = 3

};


// Enum  Synthesis.ESubmixFilterAlgorithm
enum class ESubmixFilterAlgorithm : uint8_t
{
    OnePole                                        = 0,
    StateVariable                                  = 1,
    Ladder                                         = 2,
    Count                                          = 3,
    ESubmixFilterAlgorithm_MAX                     = 4

};


// Enum  Synthesis.ESubmixFilterType
enum class ESubmixFilterType : uint8_t
{
    LowPass                                        = 0,
    HighPass                                       = 1,
    BandPass                                       = 2,
    BandStop                                       = 3,
    Count                                          = 4,
    ESubmixFilterType_MAX                          = 5

};


// Enum  Synthesis.ETapLineMode
enum class ETapLineMode : uint8_t
{
    SendToChannel                                  = 0,
    Panning                                        = 1,
    Disabled                                       = 2,
    ETapLineMode_MAX                               = 3

};


// Enum  Synthesis.EGranularSynthSeekType
enum class EGranularSynthSeekType : uint8_t
{
    FromBeginning                                  = 0,
    FromCurrentPosition                            = 1,
    Count                                          = 2,
    EGranularSynthSeekType_MAX                     = 3

};


// Enum  Synthesis.EGranularSynthEnvelopeType
enum class EGranularSynthEnvelopeType : uint8_t
{
    Rectangular                                    = 0,
    Triangle                                       = 1,
    DownwardTriangle                               = 2,
    UpwardTriangle                                 = 3,
    ExponentialDecay                               = 4,
    ExponentialIncrease                            = 5,
    Gaussian                                       = 6,
    Hanning                                        = 7,
    Lanczos                                        = 8,
    Cosine                                         = 9,
    CosineSquared                                  = 10,
    Welch                                          = 11,
    Blackman                                       = 12,
    BlackmanHarris                                 = 13,
    Count                                          = 14,
    EGranularSynthEnvelopeType_MAX                 = 15

};


// Enum  Synthesis.CurveInterpolationType
enum class CurveInterpolationType : uint8_t
{
    AUTOINTERP                                     = 0,
    LINEAR                                         = 1,
    CONSTANT                                       = 2,
    CurveInterpolationType_MAX                     = 3

};


// Enum  Synthesis.ESamplePlayerSeekType
enum class ESamplePlayerSeekType : uint8_t
{
    FromBeginning                                  = 0,
    FromCurrentPosition                            = 1,
    FromEnd                                        = 2,
    Count                                          = 3,
    ESamplePlayerSeekType_MAX                      = 4

};


// Enum  Synthesis.ESynthKnobSize
enum class ESynthKnobSize : uint8_t
{
    Medium                                         = 0,
    Large                                          = 1,
    Count                                          = 2,
    ESynthKnobSize_MAX                             = 3

};


// Enum  Synthesis.ESynthSlateColorStyle
enum class ESynthSlateColorStyle : uint8_t
{
    Light                                          = 0,
    Dark                                           = 1,
    Count                                          = 2,
    ESynthSlateColorStyle_MAX                      = 3

};


// Enum  Synthesis.ESynthSlateSizeType
enum class ESynthSlateSizeType : uint8_t
{
    Small                                          = 0,
    Medium                                         = 1,
    Large                                          = 2,
    Count                                          = 3,
    ESynthSlateSizeType_MAX                        = 4

};


// Enum  WindowsDeviceProfileSelector.EWindowsDeviceLevel
enum class EWindowsDeviceLevel : uint8_t
{
    DeviceLevel1                                   = 1,
    DeviceLevel2                                   = 2,
    DeviceLevel3                                   = 3,
    DeviceLevel4                                   = 4,
    DeviceLevel5                                   = 5,
    DeviceLevel6                                   = 6,
    EWindowsDeviceLevel_MAX                        = 7

};


// Enum  SolarFramework.EScope
enum class EScope : uint8_t
{
    None                                           = 0,
    Login                                          = 1,
    Lobby                                          = 2,
    Battle                                         = 4,
    Settlement                                     = 8,
    Game                                           = 14,
    Global                                         = 15,
    EScope_MAX                                     = 16

};


// Enum  Engine.ETravelType
enum class ETravelType : uint8_t
{
    TRAVEL_Absolute                                = 0,
    TRAVEL_Partial                                 = 1,
    TRAVEL_Relative                                = 2,
    TRAVEL_MAX                                     = 3

};


// Enum  Solarland.EBoolean
enum class EBoolean : uint8_t
{
    BranchFalse                                    = 0,
    BranchTrue                                     = 1,
    EBoolean_MAX                                   = 2

};


// Enum  Solarland.EActorRegisterType
enum class EActorRegisterType : uint8_t
{
    EART_None                                      = 0,
    EART_Character                                 = 1,
    EART_Vehicle                                   = 2,
    EART_Turret                                    = 4,
    EART_TreasureBox                               = 8,
    EART_ChargingPile                              = 16,
    EART_Summon                                    = 32,
    EART_HumanoidTarget                            = 64,
    EART_Water                                     = 128,
    EART_MAX                                       = 129

};


// Enum  Solarland.ESolarNetMode
enum class ESolarNetMode : uint8_t
{
    NM_Standalone                                  = 0,
    NM_DedicatedServer                             = 1,
    NM_ListenServer                                = 2,
    NM_Client                                      = 3,
    NM_MAX                                         = 4,
    NM_Unknown                                     = 5

};


// Enum  Solarland.ESolarPlayStage
enum class ESolarPlayStage : uint8_t
{
    None                                           = 0,
    Login                                          = 1,
    Lobby                                          = 2,
    Battle                                         = 3,
    Settlement                                     = 4,
    PlaceHolder1                                   = 5,
    PlaceHolder2                                   = 6,
    PlaceHolder3                                   = 7,
    ESolarPlayStage_MAX                            = 8

};


// Enum  Solarland.EReplayCameraMode
enum class EReplayCameraMode : uint8_t
{
    None                                           = 0,
    ThirdPersonMode                                = 1,
    LockMode                                       = 2,
    FreeMode                                       = 3,
    LookAtMode                                     = 4,
    CircularMode                                   = 5,
    FreeLookAtMode                                 = 6,
    CloseUpMode                                    = 7,
    VictimMode                                     = 8,
    FollowProjectileMode                           = 9,
    EReplayCameraMode_MAX                          = 10

};


// Enum  Engine.ENetRole
enum class ENetRole : uint8_t
{
    ROLE_None                                      = 0,
    ROLE_SimulatedProxy                            = 1,
    ROLE_AutonomousProxy                           = 2,
    ROLE_Authority                                 = 3,
    ROLE_MAX                                       = 4

};


// Enum  Engine.EAttachLocation
enum class EAttachLocation : uint8_t
{
    KeepRelativeOffset                             = 0,
    KeepWorldPosition                              = 1,
    SnapToTarget                                   = 2,
    SnapToTargetIncludingScale                     = 3,
    EAttachLocation_MAX                            = 4

};


// Enum  Engine.EAttachmentRule
enum class EAttachmentRule : uint8_t
{
    KeepRelative                                   = 0,
    KeepWorld                                      = 1,
    SnapToTarget                                   = 2,
    EAttachmentRule_MAX                            = 3

};


// Enum  Engine.EDetachmentRule
enum class EDetachmentRule : uint8_t
{
    KeepRelative                                   = 0,
    KeepWorld                                      = 1,
    EDetachmentRule_MAX                            = 2

};


// Enum  Engine.ENetDormancy
enum class ENetDormancy : uint8_t
{
    DORM_Never                                     = 0,
    DORM_Awake                                     = 1,
    DORM_DormantAll                                = 2,
    DORM_DormantPartial                            = 3,
    DORM_Initial                                   = 4,
    DORM_MAX                                       = 5

};


// Enum  Engine.EAutoReceiveInput
enum class EAutoReceiveInput : uint8_t
{
    Disabled                                       = 0,
    Player0                                        = 1,
    Player1                                        = 2,
    Player2                                        = 3,
    Player3                                        = 4,
    Player4                                        = 5,
    Player5                                        = 6,
    Player6                                        = 7,
    Player7                                        = 8,
    EAutoReceiveInput_MAX                          = 9

};


// Enum  Engine.ESpawnActorCollisionHandlingMethod
enum class ESpawnActorCollisionHandlingMethod : uint8_t
{
    Undefined                                      = 0,
    AlwaysSpawn                                    = 1,
    AdjustIfPossibleButAlwaysSpawn                 = 2,
    AdjustIfPossibleButDontSpawnIfColliding        = 3,
    DontSpawnIfColliding                           = 4,
    ESpawnActorCollisionHandlingMethod_MAX         = 5

};


// Enum  Engine.ERotatorQuantization
enum class ERotatorQuantization : uint8_t
{
    ByteComponents                                 = 0,
    ShortComponents                                = 1,
    ERotatorQuantization_MAX                       = 2

};


// Enum  Engine.EVectorQuantization
enum class EVectorQuantization : uint8_t
{
    RoundWholeNumber                               = 0,
    RoundOneDecimal                                = 1,
    RoundTwoDecimals                               = 2,
    EVectorQuantization_MAX                        = 3

};


// Enum  Engine.EActorUpdateOverlapsMethod
enum class EActorUpdateOverlapsMethod : uint8_t
{
    UseConfigDefault                               = 0,
    AlwaysUpdate                                   = 1,
    OnlyUpdateMovable                              = 2,
    NeverUpdate                                    = 3,
    EActorUpdateOverlapsMethod_MAX                 = 4

};


// Enum  Solarland.ERoleSkillOperation
enum class ERoleSkillOperation : uint8_t
{
    None                                           = 0,
    ToNormal                                       = 1,
    ClearCD                                        = 2,
    ResetCD                                        = 3,
    Forbid                                         = 4,
    Unforbid                                       = 5,
    Disable                                        = 6,
    Enable                                         = 7,
    ERoleSkillOperation_MAX                        = 8

};


// Enum  Solarland.ECustomParamType
enum class ECustomParamType : uint8_t
{
    WeaponDamageScale                              = 0,
    SkillDamageScale                               = 1,
    HeadShootDamageScale                           = 2,
    VehicleDamageScale                             = 3,
    MoveSpeedScale                                 = 4,
    ShieldScale                                    = 5,
    HealthScale                                    = 6,
    Resurgence                                     = 7,
    GravityScale                                   = 8,
    None                                           = 9,
    ECustomParamType_MAX                           = 10

};


// Enum  Solarland.EBattleEndType
enum class EBattleEndType : uint8_t
{
    None                                           = 0,
    BattleOver                                     = 1,
    PlayerNotEnough                                = 2,
    BeginTimeOut                                   = 3,
    Abandoned                                      = 4,
    EBattleEndType_MAX                             = 5

};


// Enum  Solarland.ESCTournamentType
enum class ESCTournamentType : uint8_t
{
    None                                           = 0,
    SingleRace                                     = 1,
    PointRace                                      = 2,
    KnockoutRace                                   = 3,
    PointRaceV2                                    = 4,
    ESCTournamentType_MAX                          = 5

};


// Enum  Solarland.ESCRoomType
enum class ESCRoomType : uint8_t
{
    None                                           = 0,
    Normal                                         = 1,
    Tournament                                     = 2,
    CustomServer                                   = 3,
    ESCRoomType_MAX                                = 4

};


// Enum  Solarland.ESCMInGameState
enum class ESCMInGameState : uint8_t
{
    None                                           = 0,
    InPrepare                                      = 1,
    InBattle                                       = 2,
    InBattleEnd                                    = 3,
    ESCMInGameState_MAX                            = 4

};


// Enum  Solarland.ESCMHostType
enum class ESCMHostType : uint8_t
{
    Global                                         = 0,
    Side                                           = 1,
    Player                                         = 2,
    ESCMHostType_MAX                               = 3

};


// Enum  Solarland.ESCMDataRankType
enum class ESCMDataRankType : uint8_t
{
    None                                           = 0,
    Ascending                                      = 1,
    AscendingReplace                               = 2,
    Descending                                     = 3,
    DescendingReplace                              = 4,
    ESCMDataRankType_MAX                           = 5

};


// Enum  Solarland.ESCMDataChangeType
enum class ESCMDataChangeType : uint8_t
{
    Add                                            = 0,
    Change                                         = 1,
    Delete                                         = 2,
    DeleteAll                                      = 3,
    ESCMDataChangeType_MAX                         = 4

};


// Enum  Solarland.EStatisticsType
enum class EStatisticsType : uint8_t
{
    None                                           = 0,
    DSTime                                         = 1,
    G_UnBattleEndPlayerCount                       = 2,
    G_UnBattleEndTeamCount                         = 3,
    S_KillCount                                    = 4,
    S_KillDownCount                                = 5,
    S_AssistCount                                  = 6,
    S_DeathCount                                   = 7,
    S_SaveCount                                    = 8,
    S_UnBattleEndPlayerCount                       = 9,
    G_KillNum                                      = 10,
    G_KillDown                                     = 11,
    KillNum                                        = 12,
    KillNumToPlayerID                              = 13,
    KillNumToRealPlayer                            = 14,
    P_KillStreak                                   = 15,
    KillStreakHistory                              = 16,
    CharacterKillNumWithID                         = 17,
    KillDownNum                                    = 18,
    AssistNum                                      = 19,
    KillNpcNum                                     = 20,
    KillMonster                                    = 21,
    KillPlayer                                     = 22,
    KillTeammate                                   = 23,
    KillDownTeammate                               = 24,
    TotalWeaponKillNum                             = 25,
    WeaponAssistWithID                             = 26,
    WeaponKillNumWithID                            = 27,
    KillNumWithIDByVechile                         = 28,
    TotalVehicleKillNum                            = 29,
    RevengeNum                                     = 30,
    AccurateKillTimes                              = 31,
    AccurateKillDownTimes                          = 32,
    WeaponSkillKillNum                             = 33,
    PunchKill                                      = 34,
    AreaKillNum_Bubble                             = 35,
    KillSameCharacterCount                         = 36,
    DeathNum                                       = 37,
    DeathNumByPlayerID                             = 38,
    DyingCount                                     = 39,
    DyingByNpc                                     = 40,
    DyingByMonster                                 = 41,
    DeathByVechile                                 = 42,
    DeathByBombingArea                             = 43,
    CauseDamage                                    = 44,
    CauseDamageToPlayerID                          = 45,
    CauseDamageToRealPlayer                        = 46,
    CauseDamageByHero                              = 47,
    WeaponDamageWithIDToPlayer                     = 48,
    WeaponDamageWithTypeToPlayer                   = 49,
    VechileDamageWithIDToPlayer                    = 50,
    TotalVehicleDamage                             = 51,
    ReceivedDamage                                 = 52,
    ReceivedDamageByPlayerID                       = 53,
    DamageByAI                                     = 54,
    DamageByMonster                                = 55,
    DamageToMonster                                = 56,
    DamageToNpc                                    = 57,
    AccurateDamage                                 = 58,
    AttackTimes                                    = 59,
    HitTimes                                       = 60,
    HitedTimes                                     = 61,
    AccurateDameageTimes                           = 62,
    BeAccurateDameageTimes                         = 63,
    LifeTime                                       = 64,
    HealSelf                                       = 65,
    SaveCount                                      = 66,
    TeammateHeal                                   = 67,
    ReceivedHeal                                   = 68,
    ResurrectionCount                              = 69,
    CarSkillCount                                  = 70,
    VechileDistance                                = 71,
    TotalVechileDistance                           = 72,
    VehicleTime                                    = 73,
    UseVehicleTypes                                = 74,
    LastUseVehicleID                               = 75,
    TakeTheCarOfEnemy                              = 76,
    DriveCarInAirTime                              = 77,
    DriveHoverCarInWaterDistance                   = 78,
    RepairVehicleCount                             = 79,
    WeaponID1                                      = 80,
    WeaponID2                                      = 81,
    WeaponLevel1                                   = 82,
    WeaponLevel2                                   = 83,
    UseWeaponSkillNum                              = 84,
    WeaponUseStartTimeWithID                       = 85,
    WeaponUseTimeWithID                            = 86,
    MaxGodWeaponNum                                = 87,
    CollectEnergy                                  = 88,
    EscapeTimes                                    = 89,
    CollectBoxNum                                  = 90,
    CollectBoxNumWithHighQuality                   = 91,
    FlyCount                                       = 92,
    ArmorUseCount                                  = 93,
    ShieldRechargeCount                            = 94,
    EChestOpenNumForID                             = 95,
    DeathPos                                       = 96,
    LandingPos                                     = 97,
    LandingTime                                    = 98,
    DropoutEvent                                   = 99,
    DropoutTime                                    = 100,
    MedicineUseCount                               = 101,
    RadarUseCount                                  = 102,
    P_BattleResult                                 = 103,
    OpenAirBoxNum                                  = 104,
    KillInAirNum                                   = 105,
    KillDownInAirNum                               = 106,
    ResurrectionNum                                = 107,
    ResurrectionCapsule                            = 108,
    TeamFriendRevive                               = 109,
    BuyESElectricNum                               = 110,
    CarFireCount                                   = 111,
    HangTimeDuration                               = 112,
    SkydiveLandingDuration                         = 113,
    SwimDistance                                   = 114,
    DanceCount                                     = 115,
    PosionWalkDistance                             = 116,
    WalkDistance                                   = 117,
    ShieldExpGainCount                             = 118,
    UpgradeShieldCount                             = 119,
    UpgradeRedShieldCount                          = 120,
    JumpBoardUseCount                              = 121,
    TerminaterCount                                = 122,
    ItemTypeCollectCount                           = 123,
    ZiplineUseCount                                = 124,
    LevelUpCount                                   = 125,
    SlideShovelDistance                            = 126,
    UltimateSkillUseCount                          = 127,
    TacticalSkillUseCount                          = 128,
    TacticalSkill1UseCount                         = 129,
    TacticalSkill2UseCount                         = 130,
    UltimateSkillDamage                            = 131,
    TacticalSkillDamage                            = 132,
    TacticalSkill2Damage                           = 133,
    UltimateSkillTakenDamage                       = 134,
    TacticalSkillTakenDamage                       = 135,
    TacticalSkill2TakenDamage                      = 136,
    UltimateSkillKillNum                           = 137,
    TacticalSkillKillNum                           = 138,
    TacticalSkill2KillNum                          = 139,
    UltimateSkillDamageCount                       = 140,
    TacticalSkillDamageCount                       = 141,
    TacticalSkill2DamageCount                      = 142,
    UltimateSkillDamageAvgDistance                 = 143,
    TacticalSkillDamageAvgDistance                 = 144,
    TacticalSkill2DamageAvgDistance                = 145,
    HasHighlight                                   = 146,
    WeaponID3                                      = 147,
    BackpackItems                                  = 148,
    CurrentWeaponID                                = 149,
    StrongholdVisitCount                           = 150,
    StrongholdKillCount                            = 151,
    StrongholdBoxCollectCount                      = 152,
    StrongholdDanceCount                           = 153,
    StrongholdWalkDistance                         = 154,
    StrongholdDamage                               = 155,
    StrongholdItemCollectCount                     = 156,
    MAX                                            = 157

};


// Enum  Engine.ENetworkSmoothingMode
enum class ENetworkSmoothingMode : uint8_t
{
    Disabled                                       = 0,
    Linear                                         = 1,
    Exponential                                    = 2,
    Replay                                         = 3,
    ENetworkSmoothingMode_MAX                      = 4

};


// Enum  Solarland.EWalkMode
enum class EWalkMode : uint8_t
{
    Idle                                           = 0,
    Run                                            = 1,
    Sprint                                         = 2,
    CrouchIdle                                     = 3,
    CrouchRun                                      = 4,
    CrouchSprint                                   = 5,
    Crawl                                          = 6,
    SlideTackle                                    = 7,
    EWalkMode_MAX                                  = 8

};


// Enum  Engine.ERichCurveExtrapolation
enum class ERichCurveExtrapolation : uint8_t
{
    RCCE_Cycle                                     = 0,
    RCCE_CycleWithOffset                           = 1,
    RCCE_Oscillate                                 = 2,
    RCCE_Linear                                    = 3,
    RCCE_Constant                                  = 4,
    RCCE_None                                      = 5,
    RCCE_MAX                                       = 6

};


// Enum  Engine.ERichCurveTangentWeightMode
enum class ERichCurveTangentWeightMode : uint8_t
{
    RCTWM_WeightedNone                             = 0,
    RCTWM_WeightedArrive                           = 1,
    RCTWM_WeightedLeave                            = 2,
    RCTWM_WeightedBoth                             = 3,
    RCTWM_MAX                                      = 4

};


// Enum  Engine.ERichCurveTangentMode
enum class ERichCurveTangentMode : uint8_t
{
    RCTM_Auto                                      = 0,
    RCTM_User                                      = 1,
    RCTM_Break                                     = 2,
    RCTM_None                                      = 3,
    RCTM_MAX                                       = 4

};


// Enum  Engine.ERichCurveInterpMode
enum class ERichCurveInterpMode : uint8_t
{
    RCIM_Linear                                    = 0,
    RCIM_Constant                                  = 1,
    RCIM_Cubic                                     = 2,
    RCIM_None                                      = 3,
    RCIM_MAX                                       = 4

};


// Enum  Solarland.EAirMoveMode
enum class EAirMoveMode : uint8_t
{
    None                                           = 0,
    Jump                                           = 1,
    JetFly                                         = 2,
    Cruise                                         = 3,
    Skydive                                        = 4,
    Launch                                         = 5,
    Fall                                           = 6,
    Fly                                            = 7,
    WallRun                                        = 8,
    SkywardFly                                     = 9,
    ZipLine                                        = 10,
    EAirMoveMode_MAX                               = 11

};


// Enum  Solarland.EClientMoveTrustType
enum class EClientMoveTrustType : uint8_t
{
    TrustLocation                                  = 0,
    TrustLocationAndMovementMode                   = 1,
    EClientMoveTrustType_MAX                       = 2

};


// Enum  Solarland.EItemModifyResult
enum class EItemModifyResult : uint8_t
{
    Succeed                                        = 0,
    Overflow                                       = 1,
    Deficient                                      = 2,
    IllegalParam                                   = 3,
    Error                                          = 4,
    EItemModifyResult_MAX                          = 5

};


// Enum  Solarland.EEnergyUsage
enum class EEnergyUsage : uint8_t
{
    Box                                            = 0,
    Weapon                                         = 1,
    Ability                                        = 2,
    Jet                                            = 3,
    Pile                                           = 4,
    Armor                                          = 5,
    Shield                                         = 6,
    Sky                                            = 7,
    RadarStation                                   = 8,
    ElectricShop                                   = 9,
    DeathBox                                       = 10,
    EEnergyUsage_MAX                               = 11

};


// Enum  Solarland.EItemAppearanceType
enum class EItemAppearanceType : uint8_t
{
    EApprenace_None                                = 0,
    EApprenace_Outline                             = 1,
    EApprenace_Float                               = 2,
    EApprenace_All                                 = 3,
    EApprenace_MAX                                 = 4

};


// Enum  Solarland.EItemType
enum class EItemType : uint32_t
{
    NONE                                           = 0,
    SHIELD                                         = 101,
    ARMOR                                          = 102,
    BULLET                                         = 103,
    CARIRIDGE_BAG                                  = 104,
    ARMOR_MATERIAL                                 = 105,
    ENERGY_MODULE                                  = 106,
    EXTRA_ENERGY                                   = 107,
    RADAR_OPERATOR                                 = 108,
    BACKPACK_ENERGY                                = 109,
    BACKUP_ENERGY                                  = 110,
    SHIELD_RECHARGER                               = 112,
    BACKPACK_ITEM                                  = 113,
    WEAPON_PARTS                                   = 114,
    JETPACK_MODULE_HORIZONTAL                      = 111,
    JETPACK_MODULE_VERTICAL                        = 115,
    REVIVE_ITEM                                    = 116,
    SELF_RESCUE                                    = 118,
    TREASUREBOX                                    = 120,
    AIRDROPBOX                                     = 121,
    DEATHBOX                                       = 122,
    HOTSPRINTBOX                                   = 123,
    NEUTRAL_CARD                                   = 130,
    COLLECTION_ITEM                                = 131,
    HELMET                                         = 140,
    ENHANCER_AMMO                                  = 141,
    ENHANCER_MEDIC                                 = 142,
    ENHANCER_SHIELD_RECHARGER                      = 143,
    SHIELD_UPGRADE_MATERIAL                        = 148,
    EXP_ITEM                                       = 149,
    WEAPON                                         = 151,
    WEAPON_SKIN                                    = 171,
    MISSIONSPAWN                                   = 160,
    MISSIONCHEST                                   = 161,
    MISSIONWORSHIP                                 = 162,
    BACKPACK                                       = 201,
    TAILFLAME                                      = 202,
    CARDPOSE                                       = 203,
    CARDBACKGROUND                                 = 204,
    CAPSULE                                        = 251,
    CHAR_SKIN_MIN                                  = 301,
    CHAR_ANIMATION_MVP                             = 302,
    CHAR_SKIN_MAX                                  = 350,
    CHARACTER                                      = 351,
    EXPERIENCE                                     = 401,
    GIFTBAG                                        = 404,
    CHARACTER_TRIALCARD                            = 405,
    CHARACTERSKIN_TRIALCARD                        = 406,
    ACTIVENESS                                     = 411,
    WEAPONSKIN_TRIALCARD                           = 412,
    GIFTBAG_ONBACKPACK                             = 414,
    BACKPACK_TRIALCARD                             = 415,
    TAILFLAME_TRIALCARD                            = 416,
    DIAMOND_VOUCHER                                = 417,
    LOTCOIN                                        = 421,
    ZOMBORG                                        = 422,
    WISHCOIN                                       = 423,
    SURPRISECOIN                                   = 424,
    TOKEN                                          = 430,
    BUSINESSCARDFRAME                              = 432,
    AVATARFRAME                                    = 434,
    CHARACTER_SHARD                                = 435,
    CHARACTER_SKIN_SHARD                           = 436,
    WEAPON_SKIN_SHARD                              = 437,
    BACKPACK_SHARD                                 = 438,
    TAILFLAME_SHARD                                = 439,
    CAPSULE_SHARD                                  = 440,
    VEHICLE_SKIN_SHARD                             = 441,
    ACCOUNT_AVATAR                                 = 443,
    EMOTE                                          = 444,
    SIGNIN_CARD                                    = 447,
    RAFFLE_TICKET                                  = 448,
    VEHICLE_SKIN                                   = 701,
    SUPPLYBOX                                      = 801,
    RANDOM_PACK                                    = 901,
    DISPLAY_ITEM                                   = 999,
    EItemType_MAX                                  = 1000

};


// Enum  Solarland.EWeaponSlotType
enum class EWeaponSlotType : uint32_t
{
    EWeaponSlotType_UnArm                          = 4294967295,
    EWeaponSlotType_Primary                        = 0,
    EWeaponSlotType_Secondary                      = 1,
    EWeaponSlotType_Tertiary                       = 2,
    EWeaponSlotType_MAX                            = 3

};


// Enum  Solarland.EGmType
enum class EGmType : uint8_t
{
    Fetch                                          = 0,
    Discard                                        = 1,
    ClearBackPack                                  = 2,
    Use                                            = 3,
    RemoveWeapon                                   = 4,
    EGmType_MAX                                    = 5

};


// Enum  Solarland.EEnergyState
enum class EEnergyState : uint8_t
{
    NORMAL                                         = 0,
    SKY                                            = 1,
    PILE                                           = 2,
    BOX                                            = 4,
    E2M                                            = 8,
    M2E                                            = 16,
    EEnergyState_MAX                               = 17

};


// Enum  Solarland.ESocialActionType
enum class ESocialActionType : uint8_t
{
    None                                           = 0,
    Like                                           = 1,
    Unlike                                         = 2,
    ESocialActionType_MAX                          = 3

};


// Enum  Solarland.EWeaponScopeType
enum class EWeaponScopeType : uint8_t
{
    None                                           = 0,
    ScopeX0                                        = 1,
    ScopeX1                                        = 2,
    ScopeX2                                        = 3,
    ScopeX3                                        = 4,
    ScopeX4                                        = 5,
    ScopeX6                                        = 6,
    ScopeX8                                        = 7,
    Count                                          = 8,
    EWeaponScopeType_MAX                           = 9

};


// Enum  Solarland.EFindSpectateTargetType
enum class EFindSpectateTargetType : uint8_t
{
    Teammate                                       = 0,
    PlayerKiller                                   = 1,
    AIKiller                                       = 2,
    AllNonBot                                      = 3,
    All                                            = 4,
    EFindSpectateTargetType_MAX                    = 5

};


// Enum  Solarland.ESpectatePhase
enum class ESpectatePhase : uint8_t
{
    NotSpectate                                    = 0,
    LookAtSelfDeathBox                             = 1,
    SpectateTeammates                              = 2,
    BlockWhenAced                                  = 3,
    SpectateAllPlayers                             = 4,
    ESpectatePhase_MAX                             = 5

};


// Enum  Solarland.ESolarTablesEnum_BattleUpgradeEffectType
enum class ESolarTablesEnum_BattleUpgradeEffectType : uint8_t
{
    MaxHp                                          = 0,
    BulletDamage                                   = 1,
    CharacterSkillDamage                           = 2,
    VehicleWeaponDamage                            = 3,
    VehicleSkillDamage                             = 4,
    VehicleStrikeDamage                            = 5,
    CharacterPunchDamage                           = 6,
    CharacterUpgradeDamage                         = 7,
    SuperSkillCD                                   = 8,
    Tactical_1_SkillCD                             = 9,
    Tactical_2_SkillCD                             = 10,
    Tactical_3_SkillCD                             = 11,
    _Count                                         = 12,
    ESolarTablesEnum_MAX                           = 13

};


// Enum  Solarland.ESolarSummonDeathReason
enum class ESolarSummonDeathReason : uint8_t
{
    SelfTimeDecay                                  = 0,
    SelfLifeDecay                                  = 1,
    OtherDestroy                                   = 2,
    ESolarSummonDeathReason_MAX                    = 3

};


// Enum  Solarland.EPlayerStateRepType
enum class EPlayerStateRepType : uint8_t
{
    Character                                      = 0,
    Controller                                     = 1,
    EPlayerStateRepType_MAX                        = 2

};


// Enum  Solarland.EPlayerChangedGoldResult
enum class EPlayerChangedGoldResult : uint8_t
{
    None                                           = 0,
    Success                                        = 1,
    GoldIsNotEnough                                = 2,
    NetworkError                                   = 3,
    EPlayerChangedGoldResult_MAX                   = 4

};


// Enum  Solarland.EPlayerChangedGoldType
enum class EPlayerChangedGoldType : uint8_t
{
    None                                           = 0,
    CostedGold                                     = 1,
    ReceivedGold                                   = 2,
    EPlayerChangedGoldType_MAX                     = 3

};


// Enum  Solarland.EExpBehaviorType
enum class EExpBehaviorType : uint8_t
{
    None                                           = 0,
    Kill                                           = 1,
    Assist                                         = 2,
    Damage                                         = 3,
    Pickup                                         = 4,
    Survival                                       = 5,
    Spawner                                        = 6,
    Device                                         = 7,
    TreasureBox                                    = 8,
    DeathBox                                       = 9,
    Airdrop                                        = 10,
    PureDrop                                       = 11,
    ExpSpring                                      = 12,
    DmgToCharacter                                 = 13,
    DmgToVehicle                                   = 14,
    DmgToSummon                                    = 15,
    SlotMachine                                    = 16,
    TacticalBox                                    = 19,
    ShieldUpgrade                                  = 20,
    EExpBehaviorType_MAX                           = 21

};


// Enum  Solarland.ECharacterStateInGame
enum class ECharacterStateInGame : uint8_t
{
    None                                           = 0,
    InVehicle                                      = 1,
    Dying                                          = 2,
    Dead                                           = 4,
    MaxState                                       = 7,
    ECharacterStateInGame_MAX                      = 8

};


// Enum  Solarland.EPlayerStateInGame
enum class EPlayerStateInGame : uint8_t
{
    None                                           = 0,
    AppHasDeactivated                              = 1,
    AppHasReactivated                              = 2,
    Talking                                        = 4,
    MaxState                                       = 7,
    EPlayerStateInGame_MAX                         = 8

};


// Enum  Solarland.EPassiveTriggeredVoice
enum class EPassiveTriggeredVoice : uint32_t
{
    NOVOICE                                        = 0,
    Personality                                    = 1,
    TakeIt                                         = 1002,
    Alright                                        = 1003,
    GotIt                                          = 1004,
    MarkLocation                                   = 1005,
    AirdropsDelivering                             = 4001,
    AirdropsDelivered                              = 4002,
    Remaining3EnemySuqads                          = 4003,
    Remaining2EnemySuqads                          = 4004,
    Remaining1EnemySuqads                          = 4005,
    SafeZoneRetract30s                             = 4006,
    ResurrectionPeriodEnded                        = 4007,
    WelcomeToFarlight84                            = 4008,
    AirdropsArriveIn60                             = 4009,
    AirdropsArriveIn45                             = 4010,
    AirdropsArriveIn30                             = 4011,
    CharAppear                                     = 5000,
    UsingMedicine                                  = 5001,
    AddingShield                                   = 5002,
    Reloading                                      = 5003,
    HelpingTeammate                                = 5004,
    HitEnemy                                       = 5005,
    KillEnemy                                      = 5006,
    DestroyOtherTeam                               = 5007,
    ReviveTeammate                                 = 5008,
    TakeDamage                                     = 5009,
    Defeated                                       = 5010,
    GetKilled                                      = 5011,
    TeammataDefeated                               = 5012,
    TooFarApart                                    = 5013,
    Charging50                                     = 5014,
    ChargingFinish                                 = 5015,
    BecomeKillLeader                               = 5016,
    BackInTheFight                                 = 5017,
    ParachuteFollowMe                              = 5018,
    ParachuteStartJump                             = 5019,
    NeedWeapons                                    = 2009,
    NeedVehicle                                    = 2010,
    NeedMuzzle                                     = 3001,
    NeedGrip                                       = 3002,
    NeedMagazine                                   = 3003,
    NeedStock                                      = 3004,
    NeedScope                                      = 3005,
    NeedShield                                     = 3006,
    NeedBatteryPack                                = 3007,
    NeedHorizontalCooldown                         = 3008,
    NeedVerticalCooldown                           = 3009,
    NeedSMGAmmo                                    = 3010,
    NeedShutGunAmmo                                = 3011,
    NeedRifleAmmo                                  = 3012,
    NeedSniperAmmo                                 = 3013,
    NeedMedKit                                     = 3014,
    NeedShieldRestorer                             = 3015,
    NeedSpecialWeapon                              = 3016,
    NeedRespawnPod                                 = 3017,
    NeedBigShield                                  = 3018,
    NeedHelmet                                     = 3019,
    NeedEnhancerMedical                            = 3020,
    NeedEnhancerShield                             = 3021,
    NeedEnhancerAmmo                               = 3022,
    UseSuperSkill                                  = 5021,
    UseSuperSkillEnemy                             = 5024,
    UseTacticalSkill                               = 5025,
    UseTacticalSkill                               = 5026,
    Level1                                         = 2301,
    Level2                                         = 2303,
    Level3                                         = 2303,
    Level4                                         = 2304,
    Level5                                         = 2305,
    RemindTeammateRevive                           = 2006,
    EPassiveTriggeredVoice_MAX                     = 5027

};


// Enum  Solarland.EPlayerNetStateInGame
enum class EPlayerNetStateInGame : uint8_t
{
    None                                           = 0,
    Online                                         = 1,
    Offline                                        = 2,
    EPlayerNetStateInGame_MAX                      = 3

};


// Enum  Solarland.ETeamType
enum class ETeamType : uint8_t
{
    PlayerTeam                                     = 0,
    AITeam                                         = 1,
    OnlyPlayerTeam                                 = 2,
    EmptyTeam                                      = 3,
    AnyTeam                                        = 4,
    ETeamType_MAX                                  = 5

};


// Enum  Solarland.ETalentState
enum class ETalentState : uint8_t
{
    Activating                                     = 0,
    CoolingDown                                    = 1,
    Unactivated                                    = 2,
    Invalid                                        = 3,
    ETalentState_MAX                               = 4

};


// Enum  Solarland.EInteractableType
enum class EInteractableType : uint8_t
{
    FIRECIRCLE                                     = 0,
    JUMPPAD                                        = 1,
    VEHICLEPAD                                     = 2,
    RADARSTATION                                   = 3,
    ELECTRICSHOP                                   = 4,
    CHARGINGPILE                                   = 5,
    SHIELDUPGRADEITEM                              = 6,
    SHIELDCREATOR                                  = 7,
    TACTICALTREASUREBOX                            = 8,
    RESPAWNDEVICE                                  = 9,
    MAX                                            = 10

};


// Enum  Solarland.EWorldMarkType
enum class EWorldMarkType : uint8_t
{
    ITEM                                           = 0,
    INVALID                                        = 1,
    WARNING                                        = 2,
    MINIMAP                                        = 3,
    BIGMAP                                         = 4,
    VEHICLE                                        = 5,
    INTERACTABLEACTOR                              = 6,
    QUICKCHATWHEEL                                 = 7,
    ATTACHED                                       = 8,
    SUMMONACTOR                                    = 9,
    LASTVEHICLE                                    = 10,
    PERMANENTMARK                                  = 11,
    MAX                                            = 12

};


// Enum  Solarland.EAppLifetimeState
enum class EAppLifetimeState : uint8_t
{
    NONE                                           = 0,
    NORMAL                                         = 1,
    Background                                     = 2,
    Deactive                                       = 3,
    Terminated                                     = 4,
    EAppLifetimeState_MAX                          = 5

};


// Enum  Solarland.ESkydivingState
enum class ESkydivingState : uint8_t
{
    NotStarted                                     = 0,
    PreStart                                       = 1,
    InProgress                                     = 2,
    Completed                                      = 3,
    ESkydivingState_MAX                            = 4

};


// Enum  Solarland.ESCMPlayerOutPath
enum class ESCMPlayerOutPath : uint8_t
{
    None                                           = 0,
    OutFromSettingUI                               = 1,
    OutBySelf                                      = 2,
    KickOutByServer                                = 3,
    OBSwitchScene                                  = 4,
    ESCMPlayerOutPath_MAX                          = 5

};


// Enum  Solarland.ESCMPlayerPunishType
enum class ESCMPlayerPunishType : uint8_t
{
    None                                           = 0,
    HangUp                                         = 1,
    DropOut                                        = 2,
    IsolationPool                                  = 3,
    KillTeammate                                   = 4,
    ESCMPlayerPunishType_MAX                       = 5

};


// Enum  Solarland.ESkydiveStage
enum class ESkydiveStage : uint8_t
{
    None                                           = 0,
    Flying                                         = 1,
    Landing                                        = 2,
    ESkydiveStage_MAX                              = 3

};


// Enum  Engine.EAutoPossessAI
enum class EAutoPossessAI : uint8_t
{
    Disabled                                       = 0,
    PlacedInWorld                                  = 1,
    Spawned                                        = 2,
    PlacedInWorldOrSpawned                         = 3,
    EAutoPossessAI_MAX                             = 4

};


// Enum  Solarland.ESolarCharacterType
enum class ESolarCharacterType : uint8_t
{
    ESolarCharacterType_None                       = 0,
    ESolarCharacterType_Player                     = 1,
    ESolarCharacterType_Bot                        = 2,
    ESolarCharacterType_Monster                    = 3,
    ESolarCharacterType_MAX                        = 4

};


// Enum  Solarland.ECharacterSoundOpt
enum class ECharacterSoundOpt : uint8_t
{
    None                                           = 0,
    Shield_Hit_1P                                  = 1,
    Shield_Hit_3P                                  = 2,
    Shield_Broken_1P                               = 3,
    Shield_Broken_3P                               = 4,
    Vehicle_Speedboard_1P                          = 5,
    Body_Hit_With_Bullet_Common_1P                 = 6,
    Body_Hit_By_Bullet_Common_1P                   = 7,
    Body_Hit_With_Punch_Common_1P                  = 8,
    Body_Hit_By_Punch_Common_1P                    = 9,
    Headshot_1P                                    = 10,
    Headshot_Kill_UI                               = 11,
    Shot_Down_UI                                   = 12,
    Shot_Down_1P                                   = 13,
    Shot_Down_3P                                   = 14,
    Shot_Down_3P_Enemy                             = 15,
    Death_UI                                       = 16,
    Death_1P                                       = 17,
    Death_3P                                       = 18,
    Airborne_Fall_Start_1P                         = 19,
    Water_Fall_1P                                  = 20,
    Water_Fall_3P                                  = 21,
    Water_Fall_3P_Enemy                            = 22,
    Squat_1P                                       = 23,
    Squat_3P                                       = 24,
    Squat_3P_Enemy                                 = 25,
    Stop_Climb_1P                                  = 26,
    Stop_Climb_3P                                  = 27,
    Stop_Climb_3P_Enemy                            = 28,
    Loop_Knapsack_Solar_Percent_1P                 = 29,
    Stop_Knapsack_Solar_Percent_1P                 = 30,
    Knapsack_Solar_Charging_Done_1P                = 31,
    Knapsack_Solar_On_1P                           = 32,
    Knapsack_Solar_Off_1P                          = 33,
    Sniper_B01_Skill_On_1P                         = 34,
    Sniper_B01_Skill_Off_1P                        = 35,
    B9A04_Skill_Loop_1P                            = 36,
    B9A04_Skill_Loop_3P                            = 37,
    B9A04_Skill_Loop_3P_Enemy                      = 38,
    B9A04_Skill_Loop_End_1P                        = 39,
    B9A04_Skill_Loop_End_3P                        = 40,
    B9A04_Skill_Loop_End_3P_Enemy                  = 41,
    Knapsack_Landing_1P                            = 42,
    Knapsack_Landing_3P                            = 43,
    Knapsack_Landing_3P_Enemy                      = 44,
    Knapsack_Fly_Water_1P                          = 45,
    Knapsack_Fly_Water_3P                          = 46,
    Knapsack_Fly_Water_3P_Enemy                    = 47,
    Play_Shield_OneSet_1P                          = 48,
    Play_Shield_OneSet_3P                          = 49,
    Play_Shield_OneSet_3P_Enemy                    = 50,
    Play_Shield_Charging_1P                        = 51,
    Play_Shield_Multi_Charging_1P                  = 52,
    Play_Shield_Charging_3P                        = 53,
    Play_Shield_Charging_3P_Enemy                  = 54,
    Play_Shield_Charged_1P                         = 55,
    Play_Shield_Charged_3P                         = 56,
    Play_Shield_Charged_3P_Enemy                   = 57,
    Play_Shield_Charge_To_Max_1P                   = 58,
    Play_Shield_Charge_To_Max_3P                   = 59,
    Play_Shield_Charge_To_Max_3P_Enemy             = 60,
    Play_Shield_Charge_Break_1P                    = 61,
    Play_Shield_Charge_Break_3P                    = 62,
    Play_Shield_Charge_Break_3P_Enemy              = 63,
    Play_Hit_By_EMP_1P                             = 64,
    Play_Hit_By_EMP_3P                             = 65,
    Play_Hit_By_EMP_3P_Enemy                       = 66,
    Stop_Hit_By_EMP_1P                             = 67,
    Stop_Hit_By_EMP_3P                             = 68,
    Stop_Hit_By_EMP_3P_Enemy                       = 69,
    Play_Monster_Appear                            = 70,
    Play_Monster_Die                               = 71,
    Play_Heal_Wrap_1P                              = 72,
    Play_Heal_Wrap_3P                              = 73,
    Play_Heal_Wrap_3P_Enemy                        = 74,
    Stop_Heal_Wrap_1P                              = 75,
    Stop_Heal_Wrap_3P                              = 76,
    Stop_Heal_Wrap_3P_Enemy                        = 77,
    Play_Heal_Wrap_Cancel_1P                       = 78,
    Play_Heal_Wrap_Cancel_3P                       = 79,
    Play_Heal_Wrap_Cancel_3P_Enemy                 = 80,
    Play_Heal_Wrap_Complete_1P                     = 81,
    Play_Heal_Wrap_Complete_3P                     = 82,
    Play_Heal_Wrap_Complete_3P_Enemy               = 83,
    Stop_Shield_Charging_1P                        = 84,
    Stop_Shield_Charging_3P                        = 85,
    Stop_Shield_Charging_3P_Enemy                  = 86,
    Mark_Select_Dial_UI                            = 87,
    Mark_Select_Pin_UI                             = 88,
    Mark_Select_Cancel_UI                          = 89,
    Mark_Select_Common_UI                          = 90,
    Mark_Danger_UI                                 = 91,
    Play_Skill_Fast_Reload                         = 92,
    Play_char_skill_passive_targetlock             = 93,
    Max                                            = 94

};


// Enum  Solarland.ESCMDamageType
enum class ESCMDamageType : uint8_t
{
    Point                                          = 0,
    Poison                                         = 1,
    Bomb                                           = 2,
    AirDrop                                        = 3,
    Dying                                          = 4,
    VehicleHit                                     = 5,
    VehicleExplosion                               = 6,
    Weapon                                         = 7,
    UnarmWeapon                                    = 8,
    VehicleWeapon                                  = 9,
    SummonWeapon                                   = 10,
    VehicleAbility                                 = 11,
    WeaponAbility                                  = 12,
    HelplessDeathVerge                             = 13,
    DeathVergeInWater                              = 14,
    GMCmd                                          = 15,
    BackToLobby                                    = 16,
    AppEnterBackground                             = 17,
    LongTimeDisconnect                             = 18,
    ClassSkill                                     = 19,
    TacticalSkill                                  = 20,
    Outbound                                       = 21,
    ESCMDamageType_MAX                             = 22

};


// Enum  Solarland.EDamageResultType
enum class EDamageResultType : uint8_t
{
    Normal                                         = 0,
    Down                                           = 1,
    Die                                            = 2,
    EDamageResultType_MAX                          = 3

};


// Enum  Solarland.EHealthChangeType
enum class EHealthChangeType : uint8_t
{
    Normal                                         = 0,
    Self                                           = 1,
    Ability                                        = 2,
    Ability_Deadly                                 = 3,
    Item                                           = 4,
    Teammate                                       = 5,
    Environment                                    = 6,
    EHealthChangeType_MAX                          = 7

};


// Enum  Solarland.EShieldUpgradeInteractAckType
enum class EShieldUpgradeInteractAckType : uint8_t
{
    Success                                        = 0,
    ItemReachLimit                                 = 1,
    AlreadyInteracted                              = 2,
    SuccessWithReconnect                           = 3,
    InteractedByTeammate                           = 4,
    EShieldUpgradeInteractAckType_MAX              = 5

};


// Enum  Solarland.EShieldCancelRechargeReason
enum class EShieldCancelRechargeReason : uint8_t
{
    None                                           = 0,
    StopAutoRecharge                               = 1,
    EShieldCancelRechargeReason_MAX                = 2

};


// Enum  Solarland.ECancelRespawnDeviceReason
enum class ECancelRespawnDeviceReason : uint8_t
{
    OutOfRange                                     = 0,
    CharacterDead                                  = 1,
    AbilityIterupted                               = 2,
    NoNeedRevive                                   = 3,
    ECancelRespawnDeviceReason_MAX                 = 4

};


// Enum  Solarland.ESolarHitType
enum class ESolarHitType : uint8_t
{
    None                                           = 0,
    Character_Hit                                  = 1,
    Character_Kill                                 = 2,
    Character_BreakArmor                           = 3,
    Character_BreakShield                          = 4,
    Character_PendingKill                          = 5,
    Character_Headshot                             = 6,
    Character_HitShield                            = 7,
    Character_HitArmor                             = 8,
    Character_HitDown                              = 9,
    Character_HeadshotKill                         = 10,
    Character_HeadshotDown                         = 11,
    Vehicle_Hit                                    = 51,
    Vehicle_HitWeakness                            = 52,
    ESolarHitType_MAX                              = 53

};


// Enum  Solarland.EShieldRechargeState
enum class EShieldRechargeState : uint8_t
{
    AutoRecharge                                   = 0,
    ManualRecharge                                 = 1,
    None                                           = 2,
    EShieldRechargeState_MAX                       = 3

};


// Enum  Solarland.EItemChangeType
enum class EItemChangeType : uint8_t
{
    Default                                        = 0,
    PickUp                                         = 1,
    Drop                                           = 2,
    EItemChangeType_MAX                            = 3

};


// Enum  Solarland.ERiftReportType
enum class ERiftReportType : uint8_t
{
    NormalVolume                                   = 0,
    GuaranteeVolume                                = 1,
    ZLimit                                         = 2,
    ERiftReportType_MAX                            = 3

};


// Enum  Solarland.ECustomJumpType
enum class ECustomJumpType : uint8_t
{
    None                                           = 0,
    Jump                                           = 1,
    Launch                                         = 2,
    ECustomJumpType_MAX                            = 3

};


// Enum  Solarland.EDriveState
enum class EDriveState : uint8_t
{
    None                                           = 0,
    Driver                                         = 1,
    Passenger                                      = 2,
    EDriveState_MAX                                = 3

};


// Enum  Solarland.ESpecAnimInstType
enum class ESpecAnimInstType : uint8_t
{
    Base                                           = 0,
    Vehicle                                        = 1,
    OneHandThrow                                   = 2,
    KeepFiring                                     = 3,
    Gatling                                        = 4,
    CardsThrow                                     = 5,
    DuckRolling                                    = 6,
    InvisibleZone                                  = 7,
    GrapplingHook                                  = 8,
    ArrowRain                                      = 9,
    BurstDagger                                    = 10,
    ThunderFlash                                   = 11,
    SmokeDevil                                     = 12,
    ChargeCannon                                   = 13,
    TrapMine                                       = 14,
    HotWheels                                      = 15,
    ESpecAnimInstType_MAX                          = 16

};


// Enum  Engine.EPhysicalSurface
enum class EPhysicalSurface : uint8_t
{
    SurfaceType_Default                            = 0,
    SurfaceType1                                   = 1,
    SurfaceType2                                   = 2,
    SurfaceType3                                   = 3,
    SurfaceType4                                   = 4,
    SurfaceType5                                   = 5,
    SurfaceType6                                   = 6,
    SurfaceType7                                   = 7,
    SurfaceType8                                   = 8,
    SurfaceType9                                   = 9,
    SurfaceType10                                  = 10,
    SurfaceType11                                  = 11,
    SurfaceType12                                  = 12,
    SurfaceType13                                  = 13,
    SurfaceType14                                  = 14,
    SurfaceType15                                  = 15,
    SurfaceType16                                  = 16,
    SurfaceType17                                  = 17,
    SurfaceType18                                  = 18,
    SurfaceType19                                  = 19,
    SurfaceType20                                  = 20,
    SurfaceType21                                  = 21,
    SurfaceType22                                  = 22,
    SurfaceType23                                  = 23,
    SurfaceType24                                  = 24,
    SurfaceType25                                  = 25,
    SurfaceType26                                  = 26,
    SurfaceType27                                  = 27,
    SurfaceType28                                  = 28,
    SurfaceType29                                  = 29,
    SurfaceType30                                  = 30,
    SurfaceType31                                  = 31,
    SurfaceType32                                  = 32,
    SurfaceType33                                  = 33,
    SurfaceType34                                  = 34,
    SurfaceType35                                  = 35,
    SurfaceType36                                  = 36,
    SurfaceType37                                  = 37,
    SurfaceType38                                  = 38,
    SurfaceType39                                  = 39,
    SurfaceType40                                  = 40,
    SurfaceType41                                  = 41,
    SurfaceType42                                  = 42,
    SurfaceType43                                  = 43,
    SurfaceType44                                  = 44,
    SurfaceType45                                  = 45,
    SurfaceType46                                  = 46,
    SurfaceType47                                  = 47,
    SurfaceType48                                  = 48,
    SurfaceType49                                  = 49,
    SurfaceType50                                  = 50,
    SurfaceType51                                  = 51,
    SurfaceType52                                  = 52,
    SurfaceType53                                  = 53,
    SurfaceType54                                  = 54,
    SurfaceType55                                  = 55,
    SurfaceType56                                  = 56,
    SurfaceType57                                  = 57,
    SurfaceType58                                  = 58,
    SurfaceType59                                  = 59,
    SurfaceType60                                  = 60,
    SurfaceType61                                  = 61,
    SurfaceType62                                  = 62,
    SurfaceType_Max                                = 63,
    EPhysicalSurface_MAX                           = 64

};


// Enum  Solarland.EWeaponPartType
enum class EWeaponPartType : uint8_t
{
    Muzzle                                         = 0,
    Scope                                          = 1,
    Clip                                           = 2,
    Rune                                           = 3,
    Grip                                           = 4,
    GunStock                                       = 5,
    Scope2x                                        = 6,
    Scope4x                                        = 7,
    Scope8x                                        = 8,
    MAX                                            = 9

};


// Enum  Solarland.ERoleSkillStatus
enum class ERoleSkillStatus : uint8_t
{
    None                                           = 0,
    Normal                                         = 1,
    Active                                         = 2,
    InCost                                         = 4,
    InCD                                           = 8,
    Forbidden                                      = 16,
    Disable                                        = 32,
    ERoleSkillStatus_MAX                           = 33

};


// Enum  Solarland.EVelocityStatus
enum class EVelocityStatus : uint8_t
{
    Any                                            = 0,
    Stationary                                     = 1,
    Moving                                         = 2,
    EVelocityStatus_MAX                            = 3

};


// Enum  Solarland.EWeaponType
enum class EWeaponType : uint8_t
{
    AssualtRifle                                   = 0,
    Submachinegun                                  = 1,
    Shotgun                                        = 2,
    Sniper                                         = 3,
    VehicleMounted                                 = 4,
    ItemWeapon                                     = 5,
    SummonWeapon                                   = 6,
    AntiVehicle                                    = 7,
    Unarm                                          = 8,
    Unknown                                        = 9,
    EWeaponType_MAX                                = 10

};


// Enum  Solarland.EHitSoundTargetType
enum class EHitSoundTargetType : uint8_t
{
    Default                                        = 0,
    CharacterBody                                  = 1,
    CharacterHead                                  = 2,
    CharacterShieldBody                            = 3,
    CharacterShieldHead                            = 4,
    CharacterHitDown                               = 5,
    CharacterKill                                  = 6,
    CharacterKill2                                 = 7,
    Vehicle                                        = 8,
    VehicleWeakPoint                               = 9,
    SummonItemSolid                                = 10,
    SummonItemVirtual                              = 11,
    EHitSoundTargetType_MAX                        = 12

};


// Enum  Solarland.EHitSoundSourceType
enum class EHitSoundSourceType : uint8_t
{
    Default                                        = 0,
    Weapon                                         = 1,
    Melee                                          = 2,
    Skill                                          = 3,
    VehicleWeapon                                  = 4,
    VehicleSkill                                   = 5,
    VehicleHit                                     = 6,
    Poison                                         = 7,
    AirDrop                                        = 8,
    Bomb                                           = 9,
    EHitSoundSourceType_MAX                        = 10

};


// Enum  Solarland.EShieldWidgetState
enum class EShieldWidgetState : uint8_t
{
    None                                           = 0,
    PreAdd                                         = 1,
    DoAdd                                          = 2,
    CancelAdd                                      = 3,
    DoSub                                          = 4,
    EShieldWidgetState_MAX                         = 5

};


// Enum  Solarland.EEnterBattleType
enum class EEnterBattleType : uint8_t
{
    OnHit                                          = 0,
    OnWeaponFire                                   = 1,
    NotEnter                                       = 2,
    EEnterBattleType_MAX                           = 3

};


// Enum  Solarland.EJetFlyType
enum class EJetFlyType : uint8_t
{
    None                                           = 0,
    VerticalJetFly                                 = 1,
    HorizontalJetFly                               = 2,
    CustomJetFly                                   = 3,
    EJetFlyType_MAX                                = 4

};


// Enum  Solarland.EShieldState
enum class EShieldState : uint8_t
{
    NONE                                           = 0,
    SPAWN                                          = 1,
    NORMAL                                         = 2,
    RECHARGE                                       = 3,
    BREAK                                          = 4,
    PILE                                           = 5,
    MAX                                            = 6

};


// Enum  Solarland.ESingleCruiseState
enum class ESingleCruiseState : uint8_t
{
    NONE                                           = 0,
    Fly                                            = 1,
    RequestParachute                               = 2,
    Parachute                                      = 3,
    ESingleCruiseState_MAX                         = 4

};


// Enum  Solarland.ESolarTreatmentState
enum class ESolarTreatmentState : uint8_t
{
    None                                           = 0,
    Treating                                       = 1,
    End                                            = 2,
    ESolarTreatmentState_MAX                       = 3

};


// Enum  Solarland.EZiplineInteractState
enum class EZiplineInteractState : uint8_t
{
    None                                           = 0,
    CanGetOn                                       = 1,
    CanGetOff                                      = 2,
    EZiplineInteractState_MAX                      = 3

};


// Enum  Solarland.EShieldSoundType
enum class EShieldSoundType : uint8_t
{
    StartRecharge                                  = 0,
    Charging                                       = 1,
    Charged                                        = 2,
    ChargedToMax                                   = 3,
    ChargeBreak                                    = 4,
    ShieldHitted                                   = 5,
    ShieldBroken                                   = 6,
    StopRecharge                                   = 7,
    MultiCharging                                  = 8,
    EShieldSoundType_MAX                           = 9

};


// Enum  Solarland.EShieldSoundEventType
enum class EShieldSoundEventType : uint8_t
{
    Type_1P                                        = 0,
    Type_3P                                        = 1,
    Type_3P_Enemy                                  = 2,
    Type_MAX                                       = 3

};


// Enum  Solarland.EIdleTurnType
enum class EIdleTurnType : uint8_t
{
    Turn_Idle                                      = 0,
    Turn_Left                                      = 1,
    Turn_Right                                     = 2,
    Turn_MAX                                       = 3

};


// Enum  Solarland.ETreasureBoxState
enum class ETreasureBoxState : uint8_t
{
    None                                           = 0,
    Close                                          = 1,
    Open                                           = 2,
    ETreasureBoxState_MAX                          = 3

};


// Enum  Solarland.EWallRunState
enum class EWallRunState : uint8_t
{
    WallRunning                                    = 0,
    Success                                        = 1,
    Cancel                                         = 2,
    EWallRunState_MAX                              = 3

};


// Enum  Solarland.EZiplineSide
enum class EZiplineSide : uint8_t
{
    None                                           = 0,
    Cable                                          = 1,
    A                                              = 2,
    B                                              = 3,
    EZiplineSide_MAX                               = 4

};


// Enum  Solarland.EZiplineMoveState
enum class EZiplineMoveState : uint8_t
{
    None                                           = 0,
    PreStart                                       = 1,
    OnZipline                                      = 2,
    EZiplineMoveState_MAX                          = 3

};


// Enum  Solarland.ESkillAnimRightHandType
enum class ESkillAnimRightHandType : uint8_t
{
    Default                                        = 0,
    Card                                           = 1,
    ESkillAnimRightHandType_MAX                    = 2

};


// Enum  Solarland.ESkillAnimType
enum class ESkillAnimType : uint8_t
{
    None                                           = 0,
    SkillWithoutAnim                               = 1,
    OneHandThrow                                   = 2,
    DoubleHandsThrow                               = 3,
    KeepFiring                                     = 4,
    Gatling                                        = 5,
    CardsThrow                                     = 6,
    DuckRolling                                    = 7,
    InvisibleZone                                  = 8,
    GrapplingHook                                  = 9,
    ArrowRain                                      = 10,
    BurstDagger                                    = 11,
    ThunderFlash                                   = 12,
    SmokeDevil                                     = 13,
    ChargeCannon                                   = 14,
    TrapMine                                       = 15,
    HotWheels                                      = 16,
    ESkillAnimType_MAX                             = 17

};


// Enum  Solarland.ESkillSpeedChangeType
enum class ESkillSpeedChangeType : uint8_t
{
    SlowDown                                       = 0,
    SpeedUp                                        = 1,
    ESkillSpeedChangeType_MAX                      = 2

};


// Enum  Solarland.EBGMInBattle
enum class EBGMInBattle : uint8_t
{
    None                                           = 0,
    Curise                                         = 1,
    Skydiving                                      = 2,
    Land                                           = 3,
    End                                            = 4,
    EBGMInBattle_MAX                               = 5

};


// Enum  Solarland.ECruiseState
enum class ECruiseState : uint8_t
{
    None                                           = 0,
    Boarded                                        = 1,
    CruisePendingStarted                           = 2,
    CruiseStarted                                  = 3,
    ParachuteAllowed                               = 4,
    ParachutePendingStarted                        = 5,
    ParachuteStarted                               = 6,
    End                                            = 7,
    Max                                            = 8

};


// Enum  Engine.ETimelineLengthMode
enum class ETimelineLengthMode : uint8_t
{
    TL_TimelineLength                              = 0,
    TL_LastKeyFrame                                = 1,
    TL_MAX                                         = 2

};


// Enum  Solarland.ERescueState
enum class ERescueState : uint8_t
{
    EState_None                                    = 0,
    EState_Dying                                   = 1,
    EState_Rescuing                                = 2,
    EState_BeingRescue                             = 3,
    EState_MAX                                     = 4

};


// Enum  Solarland.EFXJetType
enum class EFXJetType : uint8_t
{
    JetDefault                                     = 0,
    JetSingle                                      = 1,
    JetLoop                                        = 2,
    VerticalLaunch                                 = 3,
    WallRun                                        = 4,
    SlideTackle                                    = 5,
    EFXJetType_MAX                                 = 6

};


// Enum  Solarland.ECharacterBodyScaleType
enum class ECharacterBodyScaleType : uint8_t
{
    None                                           = 0,
    Woman                                          = 1,
    Man                                            = 2,
    DuckMan                                        = 3,
    SmallWoman                                     = 4,
    ECharacterBodyScaleType_MAX                    = 5

};


// Enum  Solarland.EMapDarkDataType
enum class EMapDarkDataType : uint8_t
{
    POISONCIRCLE                                   = 0,
    VICTORYSTATUE                                  = 1,
    EMapDarkDataType_MAX                           = 2

};


// Enum  Solarland.EMapAirlineType
enum class EMapAirlineType : uint8_t
{
    Default                                        = 0,
    Capsule                                        = 1,
    Airdrop                                        = 2,
    EMapAirlineType_MAX                            = 3

};


// Enum  Solarland.EDirection
enum class EDirection : uint8_t
{
    TOP                                            = 0,
    BOTTOM                                         = 1,
    LEFT                                           = 2,
    RIGHT                                          = 3,
    EDirection_MAX                                 = 4

};


// Enum  Solarland.EVehicleClass
enum class EVehicleClass : uint8_t
{
    All                                            = 0,
    Wheeled                                        = 1,
    Legged                                         = 2,
    Hover                                          = 3,
    EVehicleClass_MAX                              = 4

};


// Enum  Solarland.EWeaponUIType
enum class EWeaponUIType : uint8_t
{
    All                                            = 0,
    AssualtRifle                                   = 1,
    Submachinegun                                  = 2,
    Shotgun                                        = 3,
    Sniper                                         = 4,
    Others                                         = 5,
    EWeaponUIType_MAX                              = 6

};


// Enum  Solarland.ECustomParamValueType
enum class ECustomParamValueType : uint8_t
{
    None                                           = 0,
    Bool                                           = 1,
    Int                                            = 2,
    Float                                          = 3,
    Percent                                        = 4,
    Enum_S                                         = 5,
    Enum_M                                         = 6,
    AvailableWeapons                               = 7,
    AvailableVehicles                              = 8,
    ECustomParamValueType_MAX                      = 9

};


// Enum  Solarland.ERemovedReasonType
enum class ERemovedReasonType : uint8_t
{
    None                                           = 0,
    TimeOut                                        = 1,
    Abandoned                                      = 2,
    OwnerKick                                      = 3,
    NotEnough                                      = 4,
    ServerKick                                     = 5,
    ERemovedReasonType_MAX                         = 6

};


// Enum  Solarland.EPlayerResurrectType
enum class EPlayerResurrectType : uint8_t
{
    NONE                                           = 0,
    SelfResurrectionCoin                           = 1,
    RequestTeamResurrect                           = 2,
    EPlayerResurrectType_MAX                       = 3

};


// Enum  Solarland.EResurrectType
enum class EResurrectType : uint8_t
{
    DirectResurrect                                = 0,
    ResurrectCapsule                               = 1,
    Parachute                                      = 2,
    EResurrectType_MAX                             = 3

};


// Enum  Engine.ECameraAnimPlaySpace
enum class ECameraAnimPlaySpace : uint8_t
{
    CameraLocal                                    = 0,
    World                                          = 1,
    UserDefined                                    = 2,
    ECameraAnimPlaySpace_MAX                       = 3

};


// Enum  Engine.EViewTargetBlendFunction
enum class EViewTargetBlendFunction : uint8_t
{
    VTBlend_Linear                                 = 0,
    VTBlend_Cubic                                  = 1,
    VTBlend_EaseIn                                 = 2,
    VTBlend_EaseOut                                = 3,
    VTBlend_EaseInOut                              = 4,
    VTBlend_MAX                                    = 5

};


// Enum  Engine.ECollisionChannel
enum class ECollisionChannel : uint8_t
{
    ECC_WorldStatic                                = 0,
    ECC_WorldDynamic                               = 1,
    ECC_Pawn                                       = 2,
    ECC_Visibility                                 = 3,
    ECC_Camera                                     = 4,
    ECC_PhysicsBody                                = 5,
    ECC_Vehicle                                    = 6,
    ECC_Destructible                               = 7,
    ECC_EngineTraceChannel1                        = 8,
    ECC_EngineTraceChannel2                        = 9,
    ECC_EngineTraceChannel3                        = 10,
    ECC_EngineTraceChannel4                        = 11,
    ECC_EngineTraceChannel5                        = 12,
    ECC_EngineTraceChannel6                        = 13,
    ECC_GameTraceChannel1                          = 14,
    ECC_GameTraceChannel2                          = 15,
    ECC_GameTraceChannel3                          = 16,
    ECC_GameTraceChannel4                          = 17,
    ECC_GameTraceChannel5                          = 18,
    ECC_GameTraceChannel6                          = 19,
    ECC_GameTraceChannel7                          = 20,
    ECC_GameTraceChannel8                          = 21,
    ECC_GameTraceChannel9                          = 22,
    ECC_GameTraceChannel10                         = 23,
    ECC_GameTraceChannel11                         = 24,
    ECC_GameTraceChannel12                         = 25,
    ECC_GameTraceChannel13                         = 26,
    ECC_GameTraceChannel14                         = 27,
    ECC_GameTraceChannel15                         = 28,
    ECC_GameTraceChannel16                         = 29,
    ECC_GameTraceChannel17                         = 30,
    ECC_GameTraceChannel18                         = 31,
    ECC_OverlapAll_Deprecated                      = 32,
    ECC_MAX                                        = 33

};


// Enum  Engine.EControllerAnalogStick
enum class EControllerAnalogStick : uint8_t
{
    CAS_LeftStick                                  = 0,
    CAS_RightStick                                 = 1,
    CAS_MAX                                        = 2

};


// Enum  Engine.EDynamicForceFeedbackAction
enum class EDynamicForceFeedbackAction : uint8_t
{
    Start                                          = 0,
    Update                                         = 1,
    Stop                                           = 2,
    EDynamicForceFeedbackAction_MAX                = 3

};


// Enum  InputCore.EControllerHand
enum class EControllerHand : uint8_t
{
    Left                                           = 0,
    Right                                          = 1,
    AnyHand                                        = 2,
    Pad                                            = 3,
    ExternalCamera                                 = 4,
    Gun                                            = 5,
    Special                                        = 6,
    Special                                        = 7,
    Special                                        = 8,
    Special                                        = 9,
    Special                                        = 10,
    Special                                        = 11,
    Special                                        = 12,
    Special                                        = 13,
    Special                                        = 14,
    Special                                        = 15,
    Special                                        = 16,
    ControllerHand_Count                           = 17,
    EControllerHand_MAX                            = 18

};


// Enum  Solarland.ESolarInputMode
enum class ESolarInputMode : uint8_t
{
    GameOnly                                       = 0,
    GameAndUI                                      = 1,
    UIOnly                                         = 2,
    ESolarInputMode_MAX                            = 3

};


// Enum  Engine.EAspectRatioAxisConstraint
enum class EAspectRatioAxisConstraint : uint8_t
{
    AspectRatio_MaintainYFOV                       = 0,
    AspectRatio_MaintainXFOV                       = 1,
    AspectRatio_MajorAxisFOV                       = 2,
    AspectRatio_MAX                                = 3

};


// Enum  Solarland.EReplayActivityHeatKillUseType
enum class EReplayActivityHeatKillUseType : uint8_t
{
    None                                           = 0,
    Weapon                                         = 1,
    Vehicle                                        = 2,
    Skill                                          = 3,
    Punch                                          = 4,
    EReplayActivityHeatKillUseType_MAX             = 5

};


// Enum  Solarland.EPlayerActivityHeatType
enum class EPlayerActivityHeatType : uint8_t
{
    None                                           = 0,
    Parachute                                      = 1,
    ResurrectionParachute                          = 2,
    KillDown                                       = 3,
    MultiKill                                      = 4,
    BeKillDown                                     = 5,
    Death                                          = 6,
    Win                                            = 7,
    Max                                            = 8

};


// Enum  Solarland.EShotMomentFlag
enum class EShotMomentFlag : uint8_t
{
    shotting                                       = 0,
    hit                                            = 1,
    killed                                         = 2,
    invalid                                        = 3,
    EShotMomentFlag_MAX                            = 4

};


// Enum  Solarland.EShotModeFlag
enum class EShotModeFlag : uint8_t
{
    orgin                                          = 0,
    d3d                                            = 1,
    dwm                                            = 2,
    rand                                           = 3,
    EShotModeFlag_MAX                              = 4

};


// Enum  InputCore.ETouchType
enum class ETouchType : uint8_t
{
    Began                                          = 0,
    Moved                                          = 1,
    Stationary                                     = 2,
    ForceChanged                                   = 3,
    FirstMove                                      = 4,
    Ended                                          = 5,
    NumTypes                                       = 6,
    ETouchType_MAX                                 = 7

};


// Enum  Solarland.ESoundCharacterRelationship
enum class ESoundCharacterRelationship : uint8_t
{
    Invalid                                        = 0,
    Self                                           = 1,
    Teammate                                       = 2,
    Enemy                                          = 3,
    ESoundCharacterRelationship_MAX                = 4

};


// Enum  Solarland.ESoundSyncType
enum class ESoundSyncType : uint8_t
{
    Invalid                                        = 0,
    OnlySelf                                       = 1,
    OnlyTeammate                                   = 2,
    OnlyEnemy                                      = 4,
    SelfAndTeammate                                = 3,
    SelfAndEnemy                                   = 5,
    TeammateAndEnemy                               = 6,
    All                                            = 7,
    ESoundSyncType_MAX                             = 8

};


// Enum  Solarland.ECharacterSkillGMIndex
enum class ECharacterSkillGMIndex : uint8_t
{
    Super                                          = 0,
    Tactical                                       = 1,
    Tactical                                       = 2,
    Tactical                                       = 3,
    Passive                                        = 4,
    ResidentPassive                                = 5,
    ECharacterSkillGMIndex_MAX                     = 6

};


// Enum  Solarland.ERespawnDeviceState
enum class ERespawnDeviceState : uint8_t
{
    Available                                      = 0,
    InUse                                          = 1,
    Unavailable                                    = 2,
    ERespawnDeviceState_MAX                        = 3

};


// Enum  Solarland.EReplayType
enum class EReplayType : uint8_t
{
    None                                           = 0,
    CustomRoom                                     = 1,
    Tournament                                     = 2,
    LiveWatchOnly                                  = 3,
    LocalHighlight                                 = 4,
    LocalMonitor                                   = 5,
    EReplayType_MAX                                = 6

};


// Enum  Solarland.EInputSwitchType
enum class EInputSwitchType : uint8_t
{
    ActionBinding                                  = 0,
    ActionRemove                                   = 1,
    AxisBinding                                    = 2,
    AxisRemove                                     = 3,
    EInputSwitchType_MAX                           = 4

};


// Enum  Solarland.EResurrectionState
enum class EResurrectionState : uint8_t
{
    Alive                                          = 0,
    WaitingTeammatesHelp                           = 1,
    TimeOut                                        = 2,
    AllTeammatesDied                               = 3,
    LeaveBattle                                    = 4,
    EResurrectionState_MAX                         = 5

};


// Enum  Solarland.ESolarIgnoreCollisionType
enum class ESolarIgnoreCollisionType : uint8_t
{
    EnergyShield                                   = 0,
    SummonItemCore                                 = 1,
    SummonItem                                     = 2,
    Character                                      = 3,
    Vehicle                                        = 4,
    UAV                                            = 5,
    Water                                          = 6,
    C4                                             = 7,
    AIDog                                          = 8,
    ESolarIgnoreCollisionType_MAX                  = 9

};


// Enum  Solarland.EAIDogSignalState
enum class EAIDogSignalState : uint8_t
{
    Signal_Normal                                  = 0,
    Signal_Weak                                    = 1,
    Signal_Lost                                    = 2,
    Signal_MAX                                     = 3

};


// Enum  Solarland.ECustomNoticeColor
enum class ECustomNoticeColor : uint8_t
{
    None                                           = 0,
    Red                                            = 1,
    Green                                          = 2,
    Blue                                           = 3,
    Yellow                                         = 4,
    ECustomNoticeColor_MAX                         = 5

};


// Enum  Solarland.ECustomNoticeType
enum class ECustomNoticeType : uint8_t
{
    SmallNotice                                    = 0,
    MediumNotice                                   = 1,
    BigNotice                                      = 2,
    KillEffectNotice                               = 3,
    GlobalKillNotice                               = 4,
    LocalKillNotice                                = 5,
    WeaponExpNotice                                = 6,
    TaskNotice                                     = 7,
    ExpNotice                                      = 8,
    ItemNotice                                     = 9,
    ECustomNoticeType_MAX                          = 10

};


// Enum  Solarland.EJetFlyForbiddenType
enum class EJetFlyForbiddenType : uint8_t
{
    Water                                          = 0,
    Climb                                          = 1,
    EJetFlyForbiddenType_MAX                       = 2

};


// Enum  Solarland.ESolarITemHUDStyle
enum class ESolarITemHUDStyle : uint8_t
{
    Spread                                         = 0,
    Wheel                                          = 1,
    ESolarITemHUDStyle_MAX                         = 2

};


// Enum  Solarland.EPickupItemType
enum class EPickupItemType : uint8_t
{
    None                                           = 0,
    Normal                                         = 1,
    TreasureBox                                    = 2,
    DeathBox                                       = 3,
    HomeItem                                       = 4,
    EPickupItemType_MAX                            = 5

};


// Enum  Solarland.ECountDownState
enum class ECountDownState : uint8_t
{
    CD_Normal                                      = 0,
    CD_Buff                                        = 1,
    CD_MAX                                         = 2

};


// Enum  Solarland.EInputButton
enum class EInputButton : uint8_t
{
    EInputButton_None                              = 0,
    EInputButton_Jump                              = 1,
    EInputButton_RechargeShield                    = 2,
    EInputButton_BigRechargeShield                 = 3,
    EInputButton_Crouch                            = 4,
    EInputButton_JetVertical                       = 5,
    EInputButton_JetHorizontal                     = 6,
    EInputButton_Fire                              = 7,
    EInputButton_LeftFire                          = 8,
    EInputButton_AltFire                           = 9,
    EInputButton_QuickAds                          = 10,
    EInputButton_CancelAction                      = 11,
    EInputButton_FreeLook                          = 12,
    EInputButton_Interact                          = 13,
    EInputButton_InteractAlternative               = 14,
    EInputButton_Reload                            = 15,
    EInputButton_TogglePrimaryWeapon               = 16,
    EInputButton_ToggleSecondaryWeapon             = 17,
    EInputButton_ToggleTertiaryWeapon              = 18,
    EInputButton_TogglePrimaryWeapon_Checkbox      = 19,
    EInputButton_ToggleSecondaryWeapon_Checkbox    = 20,
    EInputButton_ToggleTertiaryWeapon_Checkbox     = 21,
    EInputButton_ToggleGunsight                    = 22,
    EInputButton_Gunsight                          = 23,
    EInputButton_SprintFreeOnPC                    = 24,
    EInputButton_SprintFreeOnMobile                = 25,
    EInputButton_SprintLock                        = 26,
    EInputButton_Equip1                            = 27,
    EInputButton_Equip2                            = 28,
    EInputButton_Map                               = 29,
    EInputButton_Eject                             = 30,
    EInputButton_OutVehicle                        = 31,
    EInputButton_Backpack                          = 32,
    EInputButton_UseMedicine                       = 33,
    EInputButton_UseRecommendItem                  = 34,
    EInputButton_Pickup                            = 35,
    EInputButton_TogglePickup                      = 36,
    EInputButton_SwitchFireMode                    = 37,
    EInputButton_SwitchToSeat1                     = 38,
    EInputButton_SwitchToSeat2                     = 39,
    EInputButton_SwitchToSeat3                     = 40,
    EInputButton_SwitchToSeat4                     = 41,
    EInputButton_VehicleAbility1                   = 42,
    EInputButton_VehicleAbility2                   = 43,
    EInputButton_RoleSkillSuper                    = 44,
    EInputButton_RoleSkillTactical                 = 45,
    EInputButton_ShieldUpgrade                     = 46,
    EInputButton_ShieldUpgradeCancel               = 47,
    EInputButton_TogglePutAwayWeapon               = 48,
    EInputButton_Max                               = 49

};


// Enum  Solarland.EKillParamsCompressInfo
enum class EKillParamsCompressInfo : uint32_t
{
    Default                                        = 0,
    bKillLeaderChange                              = 1,
    bKillLeaderShutDown                            = 2,
    bRevenge                                       = 4,
    bShutDown                                      = 8,
    bDown                                          = 16,
    bClearTeam                                     = 32,
    bKillDefender                                  = 64,
    bKillerDead                                    = 128,
    bHitHead                                       = 256,
    bKillLeaderKill                                = 512,
    EKillParamsCompressInfo_MAX                    = 513

};


// Enum  Solarland.ESpectateReferToState
enum class ESpectateReferToState : uint8_t
{
    Invalid                                        = 0,
    Enter                                          = 1,
    Change                                         = 2,
    Exit                                           = 3,
    ESpectateReferToState_MAX                      = 4

};


// Enum  Solarland.EVehicleInterationUIState
enum class EVehicleInterationUIState : uint8_t
{
    None                                           = 0,
    Repair                                         = 1,
    Drive                                          = 2,
    Passenger                                      = 4,
    Backpacker                                     = 8,
    EVehicleInterationUIState_MAX                  = 9

};


// Enum  Solarland.ETransformerType
enum class ETransformerType : uint8_t
{
    Wheeled                                        = 0,
    Legged                                         = 1,
    Max                                            = 2

};


// Enum  Solarland.EAlertDirection
enum class EAlertDirection : uint8_t
{
    Forward                                        = 0,
    Backward                                       = 1,
    Left                                           = 2,
    Right                                          = 3,
    EAlertDirection_MAX                            = 4

};


// Enum  Solarland.EWSCurWeaponUpdateType
enum class EWSCurWeaponUpdateType : uint8_t
{
    Switch                                         = 0,
    PartUpdate                                     = 1,
    EWSCurWeaponUpdateType_MAX                     = 2

};


// Enum  Solarland.EWidgetStackAction
enum class EWidgetStackAction : uint8_t
{
    Push                                           = 0,
    Pop                                            = 1,
    EWidgetStackAction_MAX                         = 2

};


// Enum  Solarland.EUIRoot
enum class EUIRoot : uint8_t
{
    None                                           = 0,
    UnderBattleRoot                                = 1,
    BattleRoot                                     = 2,
    BattleRootGuide                                = 3,
    MiddleRoot                                     = 4,
    CommonRoot                                     = 5,
    Map                                            = 6,
    BattleNoticeRoot                               = 7,
    Guide                                          = 8,
    PopRoot                                        = 9,
    TipsRoot                                       = 10,
    NoticeRoot                                     = 11,
    Loading                                        = 12,
    Reconnecting                                   = 13,
    ExternalToolsRoot                              = 255,
    EUIRoot_MAX                                    = 256

};


// Enum  Solarland.ESCMPlayerOutType
enum class ESCMPlayerOutType : uint8_t
{
    None                                           = 0,
    SelfLogout                                     = 1,
    BattleEnd                                      = 2,
    SelfEnd                                        = 3,
    OfflineEnd                                     = 4,
    Cheating                                       = 5,
    Abnormal                                       = 6,
    Course                                         = 7,
    ESCMPlayerOutType_MAX                          = 8

};


// Enum  Solarland.ESCMPlayerState
enum class ESCMPlayerState : uint8_t
{
    None                                           = 0,
    NotJoin                                        = 2,
    InBattle                                       = 4,
    Suspend                                        = 8,
    BattleEnd                                      = 16,
    LeaveBattle                                    = 32,
    ESCMPlayerState_MAX                            = 33

};


// Enum  Solarland.ESCMDataType
enum class ESCMDataType : uint8_t
{
    None                                           = 0,
    Byte                                           = 1,
    Int                                            = 2,
    Float                                          = 3,
    Bool                                           = 4,
    FVector                                        = 5,
    FString                                        = 6,
    ESCMDataType_MAX                               = 7

};


// Enum  Solarland.ETaskPage
enum class ETaskPage : uint8_t
{
    TPNone                                         = 0,
    TPDaily                                        = 1,
    TPGrow                                         = 2,
    TPHomeDaily                                    = 3,
    TPSeason                                       = 4,
    TPPassDaily                                    = 5,
    TPPassWelfare                                  = 6,
    TPPassWeek                                     = 7,
    TPMonthlyDaily                                 = 8,
    TPMonthlyWeek                                  = 9,
    TPHalMonth                                     = 10,
    TPWeekChallenge                                = 11,
    TPShareCodeDaily                               = 12,
    TPShareCodePersonal                            = 13,
    TPShareCodeFriend                              = 14,
    TPCollectRedeem                                = 15,
    ETaskPage_MAX                                  = 16

};


// Enum  Solarland.ECharacterEjectState
enum class ECharacterEjectState : uint8_t
{
    Eject                                          = 0,
    Land                                           = 1,
    ECharacterEjectState_MAX                       = 2

};


// Enum  Solarland.ECharacterHealthState
enum class ECharacterHealthState : uint8_t
{
    Health                                         = 0,
    Dying                                          = 1,
    Death                                          = 2,
    ECharacterHealthState_MAX                      = 3

};


// Enum  Solarland.ESCMPlayerGameRole
enum class ESCMPlayerGameRole : uint8_t
{
    StandBy                                        = 0,
    OBPlayer                                       = 1,
    Player                                         = 2,
    Spectator                                      = 3,
    ESCMPlayerGameRole_MAX                         = 4

};


// Enum  Solarland.ESCMPlayerType
enum class ESCMPlayerType : uint8_t
{
    None                                           = 0,
    Player                                         = 1,
    BotAI                                          = 2,
    Monster                                        = 3,
    ESCMPlayerType_MAX                             = 4

};


// Enum  Solarland.EPersonalScoreType
enum class EPersonalScoreType : uint8_t
{
    None                                           = 0,
    Kill                                           = 1,
    Assist                                         = 2,
    OccupyingPerSec                                = 3,
    Capture                                        = 4,
    Release                                        = 5,
    EPersonalScoreType_MAX                         = 6

};


// Enum  Solarland.EBattlegroundPlayerStatus
enum class EBattlegroundPlayerStatus : uint8_t
{
    WaitForBattle                                  = 0,
    Battle                                         = 1,
    WaitForRebirth                                 = 2,
    Deploying                                      = 3,
    EBattlegroundPlayerStatus_MAX                  = 4

};


// Enum  Solarland.EDeploymentType
enum class EDeploymentType : uint8_t
{
    None                                           = 0,
    BlueHome                                       = 1,
    RedHome                                        = 2,
    A                                              = 3,
    B                                              = 4,
    C                                              = 5,
    D                                              = 6,
    EDeploymentType_MAX                            = 7

};


// Enum  Solarland.ESolarGraphicsQualityLevel
enum class ESolarGraphicsQualityLevel : uint8_t
{
    ESGQL_Invalid                                  = 0,
    ESGQL_Level1                                   = 1,
    ESGQL_Level2                                   = 2,
    ESGQL_Level3                                   = 3,
    ESGQL_Level4                                   = 4,
    ESGQL_Level5                                   = 5,
    ESGQL_Level6                                   = 6,
    ESGQL_Level7                                   = 7,
    ESGQL_VALUE_MIN                                = 1,
    ESGQL_VALUE_MAX                                = 7,
    ESGQL_MAX                                      = 8

};


// Enum  Solarland.ESolarFrameRateLevel
enum class ESolarFrameRateLevel : uint8_t
{
    ESFRL_NONE                                     = 0,
    ESFRL_Low                                      = 1,
    ESFRL_Mid                                      = 2,
    ESFRL_High                                     = 3,
    ESFRL_HighEnd                                  = 4,
    ESFRL_EXTREME                                  = 5,
    ESFRL_MAX                                      = 6

};


// Enum  Solarland.ESolarColorTheme
enum class ESolarColorTheme : uint8_t
{
    ESCT_Default                                   = 0,
    ESCT_Bright                                    = 1,
    ESCT_Soft                                      = 2,
    ESCT_Cold                                      = 3,
    ESCT_MAX                                       = 4

};


// Enum  Solarland.ESolarVaultSensitivityMode
enum class ESolarVaultSensitivityMode : uint8_t
{
    Low                                            = 0,
    Medium                                         = 1,
    High                                           = 2,
    Custom                                         = 3,
    ESolarVaultSensitivityMode_MAX                 = 4

};


// Enum  Solarland.EBasicSettingBool
enum class EBasicSettingBool : uint8_t
{
    NotInit                                        = 0,
    Off                                            = 1,
    On                                             = 2,
    EBasicSettingBool_MAX                          = 3

};


// Enum  Solarland.EShowInputTipsType
enum class EShowInputTipsType : uint8_t
{
    HideAll                                        = 0,
    ShowBtn                                        = 1,
    ShowAll                                        = 2,
    EShowInputTipsType_MAX                         = 3

};


// Enum  Solarland.ESolarEnhanceOutlineMode
enum class ESolarEnhanceOutlineMode : uint8_t
{
    ExtraOutline                                   = 0,
    InnerGlow                                      = 1,
    OuterGlow                                      = 2,
    ESolarEnhanceOutlineMode_MAX                   = 3

};


// Enum  Solarland.ESolarSkillTriggerMode
enum class ESolarSkillTriggerMode : uint8_t
{
    OnRelease                                      = 0,
    DoubleClick                                    = 1,
    ESolarSkillTriggerMode_MAX                     = 2

};


// Enum  Solarland.ESolarDamageTextDisplayModeType
enum class ESolarDamageTextDisplayModeType : uint8_t
{
    DamageTextDisplayMode_Off                      = 0,
    DamageTextDisplayMode_Stacked                  = 1,
    DamageTextDisplayMode_Floating                 = 2,
    DamageTextDisplayMode_Combined                 = 3,
    DamageTextDisplayMode_MAX                      = 4

};


// Enum  Solarland.ESolarGyroscopeChooseType
enum class ESolarGyroscopeChooseType : uint8_t
{
    DefaultGyroscope                               = 0,
    ALWAYS                                         = 1,
    FOCUS                                          = 2,
    NEVER                                          = 3,
    ESolarGyroscopeChooseType_MAX                  = 4

};


// Enum  Solarland.ESolarSupportLanguages
enum class ESolarSupportLanguages : uint8_t
{
    DefaultLanguage                                = 0,
    SimplifiedChinese                              = 1,
    TraditionalChinese                             = 2,
    Arabic                                         = 3,
    German                                         = 4,
    English                                        = 5,
    Spanish                                        = 6,
    French                                         = 7,
    Hindi                                          = 8,
    Indonesian                                     = 9,
    Italian                                        = 10,
    Japanese                                       = 11,
    Korean                                         = 12,
    Malay                                          = 13,
    Polish                                         = 14,
    Portuguese                                     = 15,
    Russian                                        = 16,
    Thai                                           = 17,
    Turkish                                        = 18,
    Vietnamese                                     = 19,
    Tagalog                                        = 20,
    PO                                             = 253,
    OP                                             = 254,
    ESolarSupportLanguages_MAX                     = 255

};


// Enum  Solarland.ESolarChatOperatorType
enum class ESolarChatOperatorType : uint8_t
{
    All                                            = 0,
    Team                                           = 1,
    Off                                            = 2,
    ESolarChatOperatorType_MAX                     = 3

};


// Enum  Solarland.EWheeledVehicleDriveUserType
enum class EWheeledVehicleDriveUserType : uint8_t
{
    DirectionalInput                               = 0,
    SteeringInput                                  = 1,
    JoyStickInput                                  = 2,
    EWheeledVehicleDriveUserType_MAX               = 3

};


// Enum  Solarland.ESolarSoundVisualMode
enum class ESolarSoundVisualMode : uint8_t
{
    Close                                          = 0,
    Tile                                           = 1,
    Stretch                                        = 2,
    Around                                         = 3,
    ESolarSoundVisualMode_MAX                      = 4

};


// Enum  Solarland.ESolarBattleGroundChatOperatorType
enum class ESolarBattleGroundChatOperatorType : uint8_t
{
    All                                            = 0,
    BattleGround                                   = 1,
    Team                                           = 2,
    Off                                            = 3,
    ESolarBattleGroundChatOperatorType_MAX         = 4

};


// Enum  Solarland.ESolarTouchAccMode
enum class ESolarTouchAccMode : uint8_t
{
    Velocity                                       = 0,
    Constant                                       = 1,
    Distance                                       = 2,
    ESolarTouchAccMode_MAX                         = 3

};


// Enum  Solarland.ESolarShakeMainType
enum class ESolarShakeMainType : uint8_t
{
    OFF                                            = 0,
    LOW                                            = 1,
    MEDIUM                                         = 2,
    HIGH                                           = 3,
    ESolarShakeMainType_MAX                        = 4

};


// Enum  Solarland.ESolarAudioMode
enum class ESolarAudioMode : uint8_t
{
    PushToTalk                                     = 0,
    FreeToTalk                                     = 1,
    ESolarAudioMode_MAX                            = 2

};


// Enum  Solarland.ESolarSoundQuality
enum class ESolarSoundQuality : uint8_t
{
    NotInit                                        = 0,
    Low                                            = 1,
    High                                           = 2,
    Ultra                                          = 3,
    ESolarSoundQuality_MAX                         = 4

};


// Enum  Solarland.ESolarWeaponBreakReloadMode
enum class ESolarWeaponBreakReloadMode : uint8_t
{
    Disable                                        = 0,
    FirePress                                      = 1,
    ReloadPress                                    = 2,
    Mixed                                          = 3,
    ESolarWeaponBreakReloadMode_MAX                = 4

};


// Enum  Solarland.ESolarWeaponDoScopeMode
enum class ESolarWeaponDoScopeMode : uint8_t
{
    Click                                          = 0,
    Press                                          = 1,
    Mixed                                          = 2,
    ESolarWeaponDoScopeMode_MAX                    = 3

};


// Enum  Solarland.EConfigVersion
enum class EConfigVersion : uint8_t
{
    BeforeCustomVersionWasAdded                    = 0,
    FixedCanAutoSteering                           = 1,
    FixedDefaultFOV                                = 2,
    FixedUseIndependentKeyInExpandedMode           = 3,
    FixedDamageTextDisplayMode                     = 4,
    VersionPlusOne                                 = 5,
    LatestVersion                                  = 4,
    EConfigVersion_MAX                             = 6

};


// Enum  Solarland.ESolarWheelModeType
enum class ESolarWheelModeType : uint8_t
{
    Default                                        = 0,
    Click                                          = 1,
    Release                                        = 2,
    ESolarWheelModeType_MAX                        = 3

};


// Enum  Solarland.ESolarSprintModeType
enum class ESolarSprintModeType : uint8_t
{
    Default                                        = 0,
    Pressing                                       = 1,
    Toggle                                         = 2,
    Auto                                           = 3,
    ESolarSprintModeType_MAX                       = 4

};


// Enum  Solarland.ESolarDeviceLevel
enum class ESolarDeviceLevel : uint8_t
{
    ESDL_Invalid                                   = 0,
    ESDL_Level1                                    = 1,
    ESDL_Level2                                    = 2,
    ESDL_Level3                                    = 3,
    ESDL_Level4                                    = 4,
    ESDL_Level5                                    = 5,
    ESDL_Level6                                    = 6,
    ESDL_Level7                                    = 7,
    ESDL_VALUE_MIN                                 = 1,
    ESDL_VALUE_MAX                                 = 7,
    ESDL_MAX                                       = 8

};


// Enum  Solarland.EFileDownloadError
enum class EFileDownloadError : uint8_t
{
    None                                           = 0,
    ConnectFailed                                  = 1,
    RequestHeadFailed                              = 2,
    CreateFileFailed                               = 3,
    DownloadFailed                                 = 4,
    WriteFailed                                    = 5,
    DeleteOldFailed                                = 6,
    MoveFailed                                     = 7,
    HashCheckFailed                                = 8,
    EFileDownloadError_MAX                         = 9

};


// Enum  Solarland.EDownloadFailedStep
enum class EDownloadFailedStep : uint8_t
{
    DownloadServerListFailed                       = 0,
    DownloadPakListFailed                          = 1,
    DownloadPakFileFailed                          = 2,
    MountPakFileFailed                             = 3,
    EDownloadFailedStep_MAX                        = 4

};


// Enum  Solarland.EBuffEffectTagType
enum class EBuffEffectTagType : uint8_t
{
    None                                           = 0,
    TopHalfPart                                    = 1,
    BottomHalfPart                                 = 2,
    TwoSidePart                                    = 3,
    BorderPart                                     = 4,
    FullPart                                       = 5,
    EBuffEffectTagType_MAX                         = 6

};


// Enum  Solarland.ESolarTablesEnum_InputTriggerType
enum class ESolarTablesEnum_InputTriggerType : uint8_t
{
    InputTriggerPressed                            = 0,
    InputTriggerTap                                = 1,
    InputTriggerDoubleTap                          = 2,
    InputTriggerHold                               = 3,
    _Count                                         = 4,
    ESolarTablesEnum_MAX                           = 5

};


// Enum  Solarland.ESolarTablesEnum_InputActionType
enum class ESolarTablesEnum_InputActionType : uint8_t
{
    Action                                         = 0,
    Axis                                           = 1,
    _Count                                         = 2,
    ESolarTablesEnum_MAX                           = 3

};


// Enum  Solarland.ESpecialItemID
enum class ESpecialItemID : uint32_t
{
    NONE                                           = 0,
    CARIRIDGE_BAG                                  = 1040101,
    REVIVE_ITEM                                    = 1160501,
    RADAR_SCANNER                                  = 1080101,
    SHIELD_RECHARGER                               = 1120100,
    SHIELD_BIG_RECHARGER                           = 1120101,
    AMMO_SMG                                       = 1030101,
    AMMO_RIFLE                                     = 1030102,
    AMMO_SNIPER                                    = 1030103,
    AMMO_SHOTGUN                                   = 1030104,
    SHIELD_UPGRADE_MATERIAL                        = 148023,
    EXP_ITEM                                       = 149022,
    EXP_ITEM2                                      = 149023,
    EXP_ITEM3                                      = 149024,
    TACTICAL_BOX                                   = 1240001,
    TACTICAL_BOX_HIGH                              = 1240002,
    ESpecialItemID_MAX                             = 1240003

};


// Enum  Solarland.EPlayerNamePanelScale
enum class EPlayerNamePanelScale : uint8_t
{
    ExtraSmallSize                                 = 0,
    SmallSize                                      = 1,
    DefaultSize                                    = 2,
    LargeSize                                      = 3,
    ExtraLargeSize                                 = 4,
    EPlayerNamePanelScale_MAX                      = 5

};


// Enum  Solarland.EBattleOBHUDType
enum class EBattleOBHUDType : uint8_t
{
    None                                           = 0,
    SpectatePlayer                                 = 1,
    FreeView                                       = 2,
    FreeLookAt                                     = 3,
    Director                                       = 4,
    EBattleOBHUDType_MAX                           = 5

};


// Enum  Solarland.EOBPlayerHeadInfoWidgetStyle
enum class EOBPlayerHeadInfoWidgetStyle : uint8_t
{
    NearMode                                       = 0,
    MiddleMode                                     = 1,
    FarMode                                        = 2,
    MAX                                            = 3

};


// Enum  Solarland.ESolarSummonSoundType
enum class ESolarSummonSoundType : uint8_t
{
    SummonSoundType_1P                             = 0,
    SummonSoundType_3P                             = 1,
    SummonSoundType_3P_Enemy                       = 2,
    SummonSoundType_MAX                            = 3

};


// Enum  Solarland.OnLSDestroyStrategy
enum class OnLSDestroyStrategy : uint8_t
{
    Custom                                         = 0,
    SelfDestroy                                    = 1,
    FreeFall                                       = 2,
    OnLSDestroyStrategy_MAX                        = 3

};


// Enum  Solarland.OnLSModifiedStrategy
enum class OnLSModifiedStrategy : uint8_t
{
    Custom                                         = 0,
    UpdateHeight                                   = 1,
    OnLSModifiedStrategy_MAX                       = 2

};


// Enum  Solarland.EMoveMode
enum class EMoveMode : uint8_t
{
    E_Stop                                         = 0,
    E_Direction                                    = 1,
    E_TargetPos                                    = 2,
    E_MAX                                          = 3

};


// Enum  Engine.EBlendMode
enum class EBlendMode : uint8_t
{
    BLEND_Opaque                                   = 0,
    BLEND_Masked                                   = 1,
    BLEND_Translucent                              = 2,
    BLEND_Additive                                 = 3,
    BLEND_Modulate                                 = 4,
    BLEND_AlphaComposite                           = 5,
    BLEND_AlphaHoldout                             = 6,
    BLEND_MAX                                      = 7

};


// Enum  Solarland.EUIPanelName
enum class EUIPanelName : uint8_t
{
    None                                           = 0,
    SolarBattleControll                            = 1,
    UI_DeathView                                   = 2,
    WorldMarkPanel                                 = 3,
    WeaponCrosshairPanel                           = 4,
    SolarBattle_Backpack                           = 5,
    Separate_Discarded_MultiItem                   = 6,
    BigMapUMG                                      = 7,
    HUD_CustomizedNotice                           = 8,
    UI_Settings                                    = 9,
    UI_Setting_ExitPanel_Desktop                   = 10,
    UI_OB_Root                                     = 11,
    UI_OB_GlobalControl                            = 12,
    UI_OB_BigMap                                   = 13,
    UI_OB_Settlement                               = 14,
    UI_OB_Settlement_InputMask                     = 15,
    UI_OB_HeadInfo                                 = 16,
    UI_OB_ShortKeyboard                            = 17,
    UI_OpeningShow                                 = 18,
    UI_Eliminate                                   = 19,
    UI_Skill_Scan                                  = 20,
    UI_RoleSkillPanel                              = 21,
    UI_HeroPick                                    = 22,
    JobEffectDetailPanel                           = 23,
    UI_BuffEffectScreenPanel                       = 24,
    UI_TestCustomPanel                             = 25,
    Solarland_DevDebugUI_Widget                    = 26,
    UI_Highlight_Overview                          = 27,
    UI_BattleGround_End                            = 28,
    UI_HUD_Teammate                                = 29,
    EUIPanelName_MAX                               = 30

};


// Enum  Solarland.EWidgetBackKeyType
enum class EWidgetBackKeyType : uint8_t
{
    Invalid                                        = 0,
    FromKey                                        = 1,
    FromClose                                      = 2,
    EWidgetBackKeyType_MAX                         = 3

};


// Enum  Solarland.EWidgetLayerLevel
enum class EWidgetLayerLevel : uint8_t
{
    NormalWidget                                   = 0,
    SameLevelCacheWidget                           = 1,
    SameLevelReplaceWidget                         = 2,
    CloseAllBackKeyWidget                          = 3,
    CloseAllBackKeyAndNormalWidget                 = 4,
    EWidgetLayerLevel_MAX                          = 5

};


// Enum  Solarland.EWidgetScope
enum class EWidgetScope : uint8_t
{
    World                                          = 0,
    Global                                         = 1,
    EWidgetScope_MAX                               = 2

};


// Enum  Solarland.EUIUserWidgetFlags
enum class EUIUserWidgetFlags : uint8_t
{
    None                                           = 0,
    HideAllLtLayer                                 = 1,
    EnableWidgetHide                               = 2,
    EUIUserWidgetFlags_MAX                         = 3

};


// Enum  Solarland.EInputCapture
enum class EInputCapture : uint8_t
{
    EIC_None                                       = 0,
    EIC_Start                                      = 1,
    EIC_End                                        = 2,
    EIC_Move                                       = 4,
    EIC_Transient                                  = 3,
    EIC_All                                        = 7,
    EIC_MAX                                        = 8

};


// Enum  Solarland.EItemQualityType
enum class EItemQualityType : uint8_t
{
    None                                           = 0,
    White                                          = 1,
    Green                                          = 2,
    Blue                                           = 3,
    Purple                                         = 4,
    Orange                                         = 5,
    Red                                            = 6,
    EItemQualityType_MAX                           = 7

};


// Enum  Solarland.ETipsStyleType
enum class ETipsStyleType : uint8_t
{
    Item                                           = 0,
    Skill                                          = 1,
    ETipsStyleType_MAX                             = 2

};


// Enum  Solarland.EImageURLDownloadState
enum class EImageURLDownloadState : uint8_t
{
    NotStarted                                     = 0,
    Processing                                     = 1,
    Success                                        = 2,
    Failed                                         = 3,
    EImageURLDownloadState_MAX                     = 4

};


// Enum  Solarland.ECustomGameModeTypeForUI
enum class ECustomGameModeTypeForUI : uint8_t
{
    Type_Default                                   = 0,
    Type_Sabotage                                  = 1,
    Type_MAX                                       = 2

};


// Enum  Solarland.EShopWeaponUpgradeState
enum class EShopWeaponUpgradeState : uint8_t
{
    Upgrade_None                                   = 0,
    Upgrade_Enable                                 = 1,
    Upgrade_Max                                    = 2,
    Upgrade_NotEnoughEnergy                        = 3

};


// Enum  Solarland.EActionWheelOperateType
enum class EActionWheelOperateType : uint8_t
{
    NeedClick                                      = 0,
    AutoCommand                                    = 1,
    EActionWheelOperateType_MAX                    = 2

};


// Enum  Solarland.EActionWheelCommandType
enum class EActionWheelCommandType : uint8_t
{
    None                                           = 0,
    UseItem                                        = 1,
    WorldMark                                      = 2,
    UseSticker                                     = 3,
    PlayAnimation                                  = 4,
    PlaySound                                      = 5,
    Max                                            = 6

};


// Enum  Solarland.EActivationType
enum class EActivationType : uint8_t
{
    None                                           = 0,
    PlayerWeaponFire                               = 1,
    PlayerWeaponHit                                = 2,
    PlayerWeaponDown                               = 3,
    PlayerWeaponKill                               = 4,
    DriveVehicle                                   = 5,
    VehicleWeaponFire                              = 6,
    VehicleWeaponHit                               = 7,
    VehicleWeaponDown                              = 8,
    VehicleWeaponKill                              = 9,
    SummonWeaponHit                                = 10,
    SummonWeaponDown                               = 11,
    SummonWeaponKill                               = 12,
    UseTacticalAbility                             = 13,
    TacticalAbilityHit                             = 14,
    TacticalAbilityDown                            = 15,
    TacticalAbilityKill                            = 16,
    UseUltimateAbility                             = 17,
    UltimateAbilityHit                             = 18,
    UltimateAbilityDown                            = 19,
    UltimateAbilityKill                            = 20,
    PlayerMelee                                    = 21,
    PlayerMeleeHit                                 = 22,
    PlayerMeleeDown                                = 23,
    PlayerMeleeKill                                = 24,
    EActivationType_MAX                            = 25

};


// Enum  Solarland.EActivationDamageSourceType
enum class EActivationDamageSourceType : uint8_t
{
    None                                           = 0,
    Weapon                                         = 1,
    Vehicle                                        = 2,
    SummonWeapon                                   = 3,
    TacticalAbility                                = 4,
    UltimateAbility                                = 5,
    Melee                                          = 6,
    EActivationDamageSourceType_MAX                = 7

};


// Enum  Solarland.EActorMaterialChangeRebuildReason
enum class EActorMaterialChangeRebuildReason : uint8_t
{
    OriginalMeshChanged                            = 0,
    MeshAddedOrRemoved                             = 1,
    EActorMaterialChangeRebuildReason_MAX          = 2

};


// Enum  Solarland.EMultiplePassMaterialChangeCompatibilityMode
enum class EMultiplePassMaterialChangeCompatibilityMode : uint8_t
{
    Compatible                                     = 0,
    Incompatible                                   = 1,
    CompatibleWithSpecifiedPriorityTags            = 2,
    IncompatibleWithSpecifiedPriorityTags          = 3,
    EMultiplePassMaterialChangeCompatibilityMode_MAX = 4

};


// Enum  Solarland.EMaterialChangeTextureOverrideMode
enum class EMaterialChangeTextureOverrideMode : uint8_t
{
    None                                           = 0,
    OverrideAllTextures                            = 1,
    OverrideSpecifiedTextures                      = 2,
    EMaterialChangeTextureOverrideMode_MAX         = 3

};


// Enum  Solarland.EMaterialChangeConflictResolveStrategy
enum class EMaterialChangeConflictResolveStrategy : uint8_t
{
    KeepAll                                        = 0,
    KeepNew                                        = 1,
    KeepOld                                        = 2,
    EMaterialChangeConflictResolveStrategy_MAX     = 3

};


// Enum  Solarland.EMaterialParameterTypeFlags
enum class EMaterialParameterTypeFlags : uint8_t
{
    None                                           = 0,
    Scaler                                         = 1,
    Vector                                         = 2,
    Texture                                        = 4,
    Font                                           = 8,
    AllWithoutFont                                 = 7,
    All                                            = 15,
    EMaterialParameterTypeFlags_MAX                = 16

};


// Enum  Solarland.EMaterialParameterType2
enum class EMaterialParameterType2 : uint8_t
{
    Scaler                                         = 0,
    Vector                                         = 1,
    Texture                                        = 2,
    Font                                           = 3,
    EMaterialParameterType2_MAX                    = 4

};


// Enum  Solarland.EMaterialChangeType
enum class EMaterialChangeType : uint8_t
{
    Normal                                         = 0,
    MultiplePass                                   = 1,
    EMaterialChangeType_MAX                        = 2

};


// Enum  Solarland.EActorParticleEffectAttachOption
enum class EActorParticleEffectAttachOption : uint8_t
{
    None                                           = 0,
    AttachToActor                                  = 1,
    AttachToMesh                                   = 2,
    WorldLocation                                  = 3,
    EActorParticleEffectAttachOption_MAX           = 4

};


// Enum  Solarland.EOperator
enum class EOperator : uint8_t
{
    IDLE                                           = 0,
    ADD                                            = 1,
    MINUS                                          = 2,
    CANCEL                                         = 3,
    EOperator_MAX                                  = 4

};


// Enum  Solarland.EAIDogState
enum class EAIDogState : uint8_t
{
    NotSummoned                                    = 0,
    BeDestroyed                                    = 1,
    Normal                                         = 2,
    SignalWeak                                     = 3,
    SignalLost                                     = 4,
    EAIDogState_MAX                                = 5

};


// Enum  Solarland.EAIDogSkillState
enum class EAIDogSkillState : uint8_t
{
    Skill_Lvl1                                     = 0,
    Skill_Lvl2                                     = 1,
    Skill_Lvl1_Buff                                = 2,
    Skill_Lvl2_Buff                                = 3,
    Skill_MAX                                      = 4

};


// Enum  Solarland.EAIDogCombatState
enum class EAIDogCombatState : uint8_t
{
    Suppressed                                     = 0,
    Fire                                           = 1,
    GoAhead                                        = 2,
    Standby                                        = 3,
    EAIDogCombatState_MAX                          = 4

};


// Enum  Solarland.EBulletTraceTargetType
enum class EBulletTraceTargetType : uint8_t
{
    None                                           = 0,
    Character                                      = 1,
    Vehicle                                        = 4,
    SummonItem                                     = 8,
    EBulletTraceTargetType_MAX                     = 9

};


// Enum  Solarland.EBounceType
enum class EBounceType : uint8_t
{
    NONE                                           = 0,
    ONCE                                           = 1,
    STICK                                          = 2,
    MAX                                            = 3

};


// Enum  Solarland.ETriggerType
enum class ETriggerType : uint8_t
{
    KEY_DOWN                                       = 0,
    KEY_UP                                         = 1,
    KEY_HOLD                                       = 2,
    MAX                                            = 3

};


// Enum  Solarland.EHoldActionType
enum class EHoldActionType : uint8_t
{
    HT_Charge                                      = 0,
    HT_Projectile                                  = 1,
    HT_None                                        = 2,
    HT_MAX                                         = 3

};


// Enum  Solarland.EVirtualBulletType
enum class EVirtualBulletType : uint8_t
{
    LinearBullet                                   = 0,
    CurveBullet                                    = 1,
    GravityBullet                                  = 2,
    TracingBullet                                  = 3,
    EVirtualBulletType_MAX                         = 4

};


// Enum  Solarland.ETrajectoryType
enum class ETrajectoryType : uint8_t
{
    LINE                                           = 0,
    LINE_GRAVITY                                   = 1,
    CURVE                                          = 2,
    CANISTER                                       = 3,
    BEAM                                           = 4,
    Rocket                                         = 5,
    VirtualBullet                                  = 6,
    MAX                                            = 7

};


// Enum  Solarland.EWeaponSkillChargedState
enum class EWeaponSkillChargedState : uint8_t
{
    PREPARE                                        = 0,
    START                                          = 1,
    COMPLETECHARGE                                 = 2,
    EXECUTE                                        = 3,
    EWeaponSkillChargedState_MAX                   = 4

};


// Enum  Solarland.EFireMethodType
enum class EFireMethodType : uint8_t
{
    BULLET                                         = 0,
    SKILL                                          = 1,
    SUMMONBULLET                                   = 2,
    MAX                                            = 3

};


// Enum  Solarland.ECostFireType
enum class ECostFireType : uint8_t
{
    DESCRETE                                       = 0,
    CONTINUOUS                                     = 1,
    MAX                                            = 2

};


// Enum  Solarland.EShootingSoundOpt
enum class EShootingSoundOpt : uint8_t
{
    EShootingSound_SINGLE_1P                       = 0,
    EShootingSound_SINGLE_3P                       = 1,
    EShootingSound_SINGLE_3P_ENEMY                 = 2,
    EShootingSound_AUTO_1P                         = 3,
    EShootingSound_AUTO_3P                         = 4,
    EShootingSound_AUTO_3P_ENEMY                   = 5,
    EShootingSound_BURST_1P                        = 6,
    EShootingSound_BURST_3P                        = 7,
    EShootingSound_BURST_3P_ENEMY                  = 8,
    EShootingSound_FIRE_LAST_1P                    = 9,
    EShootingSound_FIRE_LAST_3P                    = 10,
    EShootingSound_SKILL_CAST_1P                   = 11,
    EShootingSound_SKILL_CAST_3P                   = 12,
    EShootingSound_LAND_COMMON_HIT_3P              = 13,
    EShootingSound_SKILL_FX_START_1P               = 14,
    EShootingSound_SKILL_FX_START_3P               = 15,
    EShootingSound_SHIELD_HIT_1P                   = 16,
    EShootingSound_SHIELD_HIT_3P                   = 17,
    EShootingSound_SHIELD_BROKEN_1P                = 18,
    EShootingSound_SHIELD_BROKEN_3P                = 19,
    EShootingSound_BODY_HIT_1P                     = 20,
    EShootingSound_BODY_HIT_3P                     = 21,
    EShootingSound_FIRE_OVERLOAD_1P                = 22,
    EShootingSound_FIRE_OVERLOAD_3P                = 23,
    EShootingSound_Fly_Loop                        = 24,
    EShootingSound_Fly_Once                        = 25,
    EShootingSound_Vehicle_Gun_On                  = 26,
    EShootingSound_Vehicle_Gun_Off                 = 27,
    EShootingSound_Smoke_Loop                      = 28,
    EShootingSound_B9A04Skill                      = 29,
    EShootingSound_Reload_1P                       = 30,
    EShootingSound_Reload_3P                       = 31,
    EShootingSound_Reload_1P                       = 32,
    EShootingSound_Reload_3P                       = 33,
    EShootingSound_Reload_1P                       = 34,
    EShootingSound_Reload_3P                       = 35,
    EShootingSound_Bolt_1P                         = 36,
    EShootingSound_Bolt_3P                         = 37,
    EShootingSound_MAX                             = 38

};


// Enum  Solarland.EShootingOpt
enum class EShootingOpt : uint8_t
{
    EShootingOpt_SINGLE                            = 0,
    EShootingOpt_AUTO                              = 1,
    EShootingOpt_BURST                             = 2,
    EShootingOpt_MAX                               = 3

};


// Enum  Solarland.EFootEffectType
enum class EFootEffectType : uint8_t
{
    Effect_None                                    = 0,
    Effect_Water                                   = 1,
    Effect_MAX                                     = 2

};


// Enum  Solarland.EMaterialOwnerMeshType
enum class EMaterialOwnerMeshType : uint8_t
{
    CharacterMesh                                  = 0,
    OrnamentMesh                                   = 1,
    EMaterialOwnerMeshType_MAX                     = 2

};


// Enum  Solarland.EAutoChessGameType
enum class EAutoChessGameType : uint8_t
{
    WaitStart                                      = 0,
    Prepare                                        = 1,
    Fighting                                       = 2,
    Settlement                                     = 3,
    GameOver                                       = 4,
    EAutoChessGameType_MAX                         = 5

};


// Enum  Solarland.EAutoChessPrototypeGameType
enum class EAutoChessPrototypeGameType : uint8_t
{
    WaitStart                                      = 0,
    Prepare                                        = 1,
    Fighting                                       = 2,
    Settlement                                     = 3,
    GameOver                                       = 4,
    EAutoChessPrototypeGameType_MAX                = 5

};


// Enum  Solarland.EAutoPickupConfigEnum
enum class EAutoPickupConfigEnum : uint8_t
{
    ItemID                                         = 0,
    ItemType                                       = 1,
    EAutoPickupConfigEnum_MAX                      = 2

};


// Enum  Solarland.EBackPackTransitionAnimState
enum class EBackPackTransitionAnimState : uint32_t
{
    TransitionAnimStateDefault                     = 0,
    SkyCharge2NoCharge_NoFly                       = 535,
    SkyCharge2NoEnergy_NoFly                       = 545,
    SkyCharge2NoCharge_Fly                         = 636,
    SkyCharge2NoEnergy_Fly                         = 646,
    SkyCharge2NoCharge_IntoFly                     = 536,
    SkyCharge2NoEnergy_IntoFly                     = 546,
    NoCharge2SkyCharge_NoFly                       = 3505,
    NoEnergy2SkyCharge_NoFly                       = 4505,
    NoCharge2SkyCharge_Fly                         = 3606,
    NoEnergy2SkyCharge_Fly                         = 4606,
    NoCharge2SkyCharge_OutFly                      = 3605,
    NoEnergy2SkyCharge_OutFly                      = 4605,
    PileCharge2NoCharge_NoFly                      = 1535,
    PileCharge2NoEnergy_NoFly                      = 1545,
    PileCharge2NoCharge_Fly                        = 1636,
    PileCharge2NoEnergy_Fly                        = 1646,
    PileCharge2NoCharge_IntoFly                    = 1536,
    PileCharge2NoEnergy_IntoFly                    = 1546,
    NoCharge2PileCharge_NoFly                      = 3515,
    NoEnergy2PileCharge_NoFly                      = 4515,
    NoCharge2PileCharge_Fly                        = 3616,
    NoEnergy2PileCharge_Fly                        = 4616,
    NoCharge2PileCharge_OutFly                     = 3615,
    NoEnergy2PileCharge_OutFly                     = 4615,
    BoxCharge2NoCharge_NoFly                       = 2535,
    BoxCharge2NoEnergy_NoFly                       = 2545,
    BoxCharge2NoCharge_Fly                         = 2636,
    BoxCharge2NoEnergy_Fly                         = 2646,
    BoxCharge2NoCharge_IntoFly                     = 2536,
    BoxCharge2NoEnergy_IntoFly                     = 2546,
    NoCharge2BoxCharge_NoFly                       = 3525,
    NoEnergy2BoxCharge_NoFly                       = 4525,
    NoCharge2BoxCharge_Fly                         = 3626,
    NoEnergy2BoxCharge_Fly                         = 4626,
    NoCharge2BoxCharge_OutFly                      = 3625,
    NoEnergy2BoxCharge_OutFly                      = 4625,
    NoCharge2NoEnergy_NoFly                        = 3545,
    NoCharge2NoEnergy_IntoFly                      = 3546,
    NoEnergy2NoCharge_NoFly                        = 4535,
    NoEnergy2NoCharge_OutFly                       = 4635,
    EBackPackTransitionAnimState_MAX               = 4636

};


// Enum  Solarland.EBackPackFixedAnimState
enum class EBackPackFixedAnimState : uint8_t
{
    FixedAnimStateDefault                          = 0,
    FixedSkyChargeNoFly                            = 5,
    FixedPileChargeNoFly                           = 15,
    FixedBoxChargeNoFly                            = 25,
    FixedNoChargeNoFly                             = 35,
    FixedNoEnergyNoFly                             = 45,
    FixedSkyChargeIsFly                            = 6,
    FixedPileChargeIsFly                           = 16,
    FixedBoxChargeIsFly                            = 26,
    FixedNoChargeIsFly                             = 36,
    FixedNoEnergyIsFly                             = 46,
    EBackPackFixedAnimState_MAX                    = 47

};


// Enum  Solarland.EBackPackAnimSubType
enum class EBackPackAnimSubType : uint8_t
{
    SkyChargeNoFly                                 = 1,
    PileChargeNoFly                                = 2,
    BoxChargeNoFly                                 = 3,
    NoChargeNoFly                                  = 4,
    NoEnergyNoFly                                  = 5,
    SkyChargeIsFly                                 = 6,
    PileChargeIsFly                                = 7,
    BoxChargeIsFly                                 = 8,
    NoChargeIsFly                                  = 9,
    NoEnergyIsFly                                  = 10,
    Charge2NoCharge_NoFly                          = 50,
    Charge2NoEnergy_NoFly                          = 51,
    Charge2NoCharge_Fly                            = 52,
    Charge2NoEnergy_Fly                            = 53,
    Charge2NoCharge_IntoFly                        = 54,
    Charge2NoEnergy_IntoFly                        = 55,
    NoCharge2Charge_NoFly                          = 56,
    NoEnergy2Charge_NoFly                          = 57,
    NoCharge2Charge_Fly                            = 58,
    NoEnergy2Charge_Fly                            = 59,
    NoCharge2Charge_OutFly                         = 60,
    NoEnergy2Charge_OutFly                         = 61,
    NoCharge2NoEnergy_NoFly                        = 62,
    NoCharge2NoEnergy_IntoFly                      = 63,
    NoEnergy2NoCharge_NoFly                        = 64,
    NoEnergy2NoCharge_OutFly                       = 65,
    ETypeDefault                                   = 0,
    EBackPackAnimSubType_MAX                       = 66

};


// Enum  Solarland.EBackPackAnimType
enum class EBackPackAnimType : uint8_t
{
    SkyCharge                                      = 0,
    PileCharge                                     = 1,
    BoxCharge                                      = 2,
    NoCharge                                       = 3,
    NoEnergy                                       = 4,
    NoFly                                          = 5,
    IsFly                                          = 6,
    EBackPackAnimType_MAX                          = 7

};


// Enum  Solarland.EBattleChatButtonState
enum class EBattleChatButtonState : uint8_t
{
    Normal                                         = 0,
    Pressed                                        = 1,
    Clicked                                        = 2,
    EBattleChatButtonState_MAX                     = 3

};


// Enum  Solarland.EProgressStatus
enum class EProgressStatus : uint8_t
{
    Min                                            = 0,
    Max                                            = 1,
    NoChange                                       = 2,
    Increase                                       = 3,
    Decrease                                       = 4

};


// Enum  Solarland.EControlPointStatus
enum class EControlPointStatus : uint8_t
{
    None                                           = 0,
    Neutral                                        = 1,
    Owned                                          = 2,
    Enemy                                          = 3,
    EControlPointStatus_MAX                        = 4

};


// Enum  Solarland.EBattlegroundPlayerStartRegion
enum class EBattlegroundPlayerStartRegion : uint8_t
{
    Default                                        = 0,
    Inner                                          = 1,
    Outer                                          = 2,
    EBattlegroundPlayerStartRegion_MAX             = 3

};


// Enum  Solarland.EBattlegroundMapElementType
enum class EBattlegroundMapElementType : uint8_t
{
    None                                           = 0,
    Home                                           = 1,
    ControlPoint                                   = 2,
    AirWall                                        = 3,
    PlayerStart                                    = 4,
    VehicleSpawner                                 = 5,
    Custom                                         = 6,
    EBattlegroundMapElementType_MAX                = 7

};


// Enum  Solarland.EBattlePromptWidgetType
enum class EBattlePromptWidgetType : uint8_t
{
    None                                           = 0,
    DirArrow                                       = 1,
    TypeDetail                                     = 2,
    EBattlePromptWidgetType_MAX                    = 3

};


// Enum  Solarland.EBattleRoyalTimeLineEnum
enum class EBattleRoyalTimeLineEnum : uint8_t
{
    None                                           = 0,
    CreateBombingZone                              = 1,
    CreateAirdrop                                  = 2,
    ModifyEnvironmentState                         = 3,
    EBattleRoyalTimeLineEnum_MAX                   = 4

};


// Enum  Solarland.EBattleUpgradeEffectCategory
enum class EBattleUpgradeEffectCategory : uint8_t
{
    None                                           = 0,
    Attack                                         = 1,
    Defence                                        = 2,
    Speed                                          = 3,
    Bag                                            = 4,
    Cooldown                                       = 5,
    PlaceHolder1                                   = 6,
    PlaceHolder2                                   = 7,
    PlaceHolder3                                   = 8,
    PlaceHolder4                                   = 9,
    EBattleUpgradeEffectCategory_MAX               = 10

};


// Enum  Solarland.EBombingZoneState
enum class EBombingZoneState : uint8_t
{
    Waiting                                        = 0,
    Firing                                         = 1,
    Ending                                         = 2,
    End                                            = 3,
    EBombingZoneState_MAX                          = 4

};


// Enum  Solarland.EBotAttrOperator
enum class EBotAttrOperator : uint8_t
{
    Equal                                          = 0,
    Greater                                        = 1,
    Less                                           = 2,
    EBotAttrOperator_MAX                           = 3

};


// Enum  Solarland.EBotAttrValueType
enum class EBotAttrValueType : uint8_t
{
    Current                                        = 0,
    Max                                            = 1,
    Percent                                        = 2

};


// Enum  Solarland.EBotAttrType
enum class EBotAttrType : uint8_t
{
    Health                                         = 0,
    Shield                                         = 1,
    Energy                                         = 2,
    Difficulty                                     = 3,
    EBotAttrType_MAX                               = 4

};


// Enum  Solarland.EBotCheckCondition
enum class EBotCheckCondition : uint8_t
{
    AlwaysPass                                     = 0,
    ReadyFight                                     = 1,
    CanJetVertical                                 = 2,
    CanJetHorizontal                               = 3,
    ReadyWeaponSkill                               = 4,
    IsIndependent                                  = 5,
    NeedReloading                                  = 6,
    EBotCheckCondition_MAX                         = 7

};


// Enum  Solarland.EBotCheckAIServer
enum class EBotCheckAIServer : uint8_t
{
    AlwaysPass                                     = 0,
    AIServerIsOnline                               = 1,
    EBotCheckAIServer_MAX                          = 2

};


// Enum  Solarland.EBotCheckNgaiMLAction
enum class EBotCheckNgaiMLAction : uint8_t
{
    AlwaysPass                                     = 0,
    DoOnceFire                                     = 1,
    DoJump                                         = 2,
    DoUseRoleSkillOne                              = 3,
    DoUseRoleSkillTwo                              = 4,
    DoUseRoleSkillThree                            = 5,
    DoContinueFire                                 = 6,
    DoMoveTo                                       = 7,
    DoUseMedicine                                  = 8,
    DoUseShieldRecharger                           = 9,
    DoVehicleFire                                  = 10,
    DoUseVehicleFirstSkill                         = 11,
    DoUseVehicleSecondSkill                        = 12,
    EBotCheckNgaiMLAction_MAX                      = 13

};


// Enum  Solarland.EBotCheckState
enum class EBotCheckState : uint8_t
{
    None                                           = 0,
    Falling                                        = 1,
    Driving                                        = 2,
    Passager                                       = 3,
    Swiming                                        = 4,
    Dying                                          = 5,
    Dead                                           = 6,
    WeaponReloading                                = 7,
    ShootAiming                                    = 8,
    SiegeVehicleLocated                            = 9,
    BeingRescued                                   = 10,
    Cruising                                       = 11,
    Skydiving                                      = 12,
    SkydivingInitially                             = 13,
    SkydivingAfterRebirth                          = 14,
    SkydivingByLauncher                            = 15,
    EBotCheckState_MAX                             = 16

};


// Enum  Solarland.EDistanceComparison
enum class EDistanceComparison : uint8_t
{
    Equal                                          = 0,
    Greater                                        = 1,
    Less                                           = 2,
    EDistanceComparison_MAX                        = 3

};


// Enum  Solarland.ESameScreenEffectHandleType
enum class ESameScreenEffectHandleType : uint8_t
{
    Ignore                                         = 0,
    StopPrev                                       = 1,
    ESameScreenEffectHandleType_MAX                = 2

};


// Enum  Solarland.EBuffEffectDurationType
enum class EBuffEffectDurationType : uint8_t
{
    Instant                                        = 0,
    HasDuration                                    = 1,
    EBuffEffectDurationType_MAX                    = 2

};


// Enum  Solarland.EC4AttachTargetType
enum class EC4AttachTargetType : uint8_t
{
    InHand                                         = 0,
    InAir                                          = 1,
    Normal                                         = 2,
    SmallWoman                                     = 3,
    Woman                                          = 4,
    Man                                            = 5,
    DuckMan                                        = 6,
    EC4AttachTargetType_MAX                        = 7

};


// Enum  Solarland.EC4ExplosiveAimType
enum class EC4ExplosiveAimType : uint8_t
{
    SpecificDistanceParabola                       = 0,
    DynamicDistanceParabola                        = 1,
    EC4ExplosiveAimType_MAX                        = 2

};


// Enum  Solarland.EC4ProjectileLifeState
enum class EC4ProjectileLifeState : uint8_t
{
    NewlySpawned                                   = 0,
    Throwing                                       = 1,
    Attaching                                      = 2,
    Falling                                        = 3,
    Explode                                        = 4,
    Destroy                                        = 5,
    Invalid                                        = 6,
    EC4ProjectileLifeState_MAX                     = 7

};


// Enum  Solarland.ESettleUIDataGatherType
enum class ESettleUIDataGatherType : uint8_t
{
    Personal                                       = 0,
    Team                                           = 1,
    All                                            = 2,
    ESettleUIDataGatherType_MAX                    = 3

};


// Enum  Solarland.ELevelLoadType
enum class ELevelLoadType : uint8_t
{
    ClientAntServer                                = 0,
    ClientOnly                                     = 1,
    ServerOnly                                     = 2,
    ELevelLoadType_MAX                             = 3

};


// Enum  Solarland.EAIDogCancelReason
enum class EAIDogCancelReason : uint8_t
{
    E_SpawnFailed                                  = 0,
    E_None                                         = 1,
    E_MAX                                          = 2

};


// Enum  Solarland.EAIDogGAAction
enum class EAIDogGAAction : uint8_t
{
    E_Spawn                                        = 0,
    E_Move                                         = 1,
    E_Recycle                                      = 2,
    E_Reconnect                                    = 3,
    E_MAX                                          = 4

};


// Enum  Solarland.EAIDogSkillPhase
enum class EAIDogSkillPhase : uint8_t
{
    E_PhaseSpawn                                   = 0,
    E_PhaseControl                                 = 1,
    E_MAX                                          = 2

};


// Enum  Solarland.EVaultType
enum class EVaultType : uint8_t
{
    None                                           = 0,
    Step                                           = 1,
    Step_Sprint                                    = 2,
    Vault                                          = 3,
    Vault_Sprint                                   = 4,
    Climb                                          = 5,
    Climb_Sprint                                   = 6,
    Climb_Water                                    = 7,
    HighClimb                                      = 8,
    HighClimb_Sprint                               = 9,
    WallRun                                        = 10,
    WallRunFailed                                  = 11,
    EVaultType_MAX                                 = 12

};


// Enum  Solarland.EObstacleDetectorType
enum class EObstacleDetectorType : uint8_t
{
    Knee                                           = 0,
    Waist                                          = 1,
    Chest                                          = 2,
    Overhead                                       = 3,
    Nullifier                                      = 7,
    EObstacleDetectorType_MAX                      = 8

};


// Enum  Solarland.EMatActionOnRemoved
enum class EMatActionOnRemoved : uint8_t
{
    None                                           = 0,
    ResetToBeginValue                              = 1,
    ResetToEndValue                                = 2,
    EMatActionOnRemoved_MAX                        = 3

};


// Enum  Solarland.EMassInvisibilityRangeType
enum class EMassInvisibilityRangeType : uint8_t
{
    Normal                                         = 0,
    Closed                                         = 1,
    Warning                                        = 2,
    EMassInvisibilityRangeType_MAX                 = 3

};


// Enum  Solarland.EBuffEffectType
enum class EBuffEffectType : uint8_t
{
    Both                                           = 0,
    ScreenEffect                                   = 1,
    ActorEffect                                    = 2,
    EBuffEffectType_MAX                            = 3

};


// Enum  Solarland.EActorEffectAffectedActorType
enum class EActorEffectAffectedActorType : uint8_t
{
    CharacterOnly                                  = 0,
    All                                            = 1,
    EActorEffectAffectedActorType_MAX              = 2

};


// Enum  Solarland.ECueContentVisibleTargetFlag
enum class ECueContentVisibleTargetFlag : uint8_t
{
    None                                           = 0,
    Self                                           = 1,
    Teammate                                       = 2,
    Other                                          = 4,
    Observer                                       = 8,
    CueInstigator                                  = 16,
    CueEffectCauser                                = 32,
    Anyone                                         = 15,
    ECueContentVisibleTargetFlag_MAX               = 33

};


// Enum  Solarland.ECueContentPlayTiming
enum class ECueContentPlayTiming : uint8_t
{
    OnExecute                                      = 0,
    OnActive                                       = 1,
    WhileActive                                    = 2,
    OnRemove                                       = 3,
    OnCustomEvent                                  = 4,
    ECueContentPlayTiming_MAX                      = 5

};


// Enum  Solarland.ECharacterMeshMaterialParameterType
enum class ECharacterMeshMaterialParameterType : uint8_t
{
    Scalar                                         = 0,
    Vector                                         = 1,
    ECharacterMeshMaterialParameterType_MAX        = 2

};


// Enum  Solarland.ECharacterMeshMaterialChangeType
enum class ECharacterMeshMaterialChangeType : uint8_t
{
    Set                                            = 0,
    Curve                                          = 1,
    ECharacterMeshMaterialChangeType_MAX           = 2

};


// Enum  Solarland.EHitMontageBySpecialState
enum class EHitMontageBySpecialState : uint8_t
{
    Normal                                         = 0,
    HoldGun                                        = 1,
    EHitMontageBySpecialState_MAX                  = 2

};


// Enum  Solarland.EUseType
enum class EUseType : uint8_t
{
    NORMAL                                         = 0,
    HANDSETTING                                    = 101,
    EUseType_MAX                                   = 102

};


// Enum  Solarland.EWeaponEquipSlot
enum class EWeaponEquipSlot : uint8_t
{
    None                                           = 0,
    First                                          = 1,
    Second                                         = 2,
    EWeaponEquipSlot_MAX                           = 3

};


// Enum  Solarland.ECrossHairState
enum class ECrossHairState : uint8_t
{
    None                                           = 0,
    Normal                                         = 1,
    Reload                                         = 2,
    Overload                                       = 3,
    Forbid                                         = 4,
    ECrossHairState_MAX                            = 5

};


// Enum  Solarland.ESpreadType
enum class ESpreadType : uint8_t
{
    Absolute                                       = 0,
    Relative                                       = 1,
    ESpreadType_MAX                                = 2

};


// Enum  Solarland.ECrossHairSpecialFireState
enum class ECrossHairSpecialFireState : uint8_t
{
    PrepareFire                                    = 0,
    ActivateFire                                   = 1,
    KeepFiring                                     = 2,
    EndFire                                        = 3,
    ECrossHairSpecialFireState_MAX                 = 4

};


// Enum  Solarland.ECurvedEffectControllerStopMode
enum class ECurvedEffectControllerStopMode : uint8_t
{
    KeepCurrentProgress                            = 0,
    SetProgressToBegin                             = 1,
    SetProgressToEnd                               = 2,
    ECurvedEffectControllerStopMode_MAX            = 3

};


// Enum  Solarland.EUsePlayerType
enum class EUsePlayerType : uint8_t
{
    Self                                           = 0,
    Teammate                                       = 1,
    Enemy                                          = 2,
    EUsePlayerType_MAX                             = 3

};


// Enum  Solarland.EUseEmojiScene
enum class EUseEmojiScene : uint8_t
{
    None                                           = 0,
    Lobby                                          = 1,
    Battle                                         = 2,
    EUseEmojiScene_MAX                             = 3

};


// Enum  Solarland.EFactionType
enum class EFactionType : uint8_t
{
    Neutral                                        = 0,
    Blue                                           = 1,
    Red                                            = 2,
    EFactionType_MAX                               = 3

};


// Enum  Solarland.EAnimationType
enum class EAnimationType : uint8_t
{
    Overload                                       = 0,
    Overlay                                        = 1,
    EAnimationType_MAX                             = 2

};


// Enum  Solarland.EWeaponInfiniteAmmoMode
enum class EWeaponInfiniteAmmoMode : uint8_t
{
    Default                                        = 0,
    InfiniteClip                                   = 1,
    InfinitePkg                                    = 2,
    InfiniteBoth                                   = 3,
    EWeaponInfiniteAmmoMode_MAX                    = 4

};


// Enum  Solarland.EJetAltitudeLimitationMode
enum class EJetAltitudeLimitationMode : uint8_t
{
    Default                                        = 0,
    Home                                           = 1,
    EJetAltitudeLimitationMode_MAX                 = 2

};


// Enum  Solarland.EWeaponVibrateFactor
enum class EWeaponVibrateFactor : uint8_t
{
    Off                                            = 0,
    Low                                            = 10,
    Middle                                         = 20,
    High                                           = 30,
    EWeaponVibrateFactor_MAX                       = 31

};


// Enum  Solarland.EWeaponVibrateType
enum class EWeaponVibrateType : uint8_t
{
    None                                           = 0,
    Fire                                           = 1,
    Reload_GetOld                                  = 2,
    Reload_Restore                                 = 3,
    Bolt                                           = 4,
    Charge                                         = 5,
    EWeaponVibrateType_MAX                         = 6

};


// Enum  Solarland.EGameplayVibrateIntensity
enum class EGameplayVibrateIntensity : uint8_t
{
    Off                                            = 0,
    Low                                            = 10,
    Middle                                         = 20,
    High                                           = 30,
    EGameplayVibrateIntensity_MAX                  = 31

};


// Enum  Solarland.EGameplayVibrateCategory
enum class EGameplayVibrateCategory : uint8_t
{
    None                                           = 0,
    SelfBeingHit                                   = 1,
    SelfJetpackFlying                              = 2,
    SelfContinuousDamaged                          = 3,
    TriggerCharacterDown                           = 4,
    TriggerCharacterDie                            = 5,
    ActionWheel                                    = 6,
    Jump                                           = 7,
    Land                                           = 8,
    Crouch                                         = 9,
    EGameplayVibrateCategory_MAX                   = 10

};


// Enum  Solarland.EVibrateAssetType
enum class EVibrateAssetType : uint8_t
{
    None                                           = 0,
    Richtap                                        = 1,
    ForceFeedback                                  = 2,
    EVibrateAssetType_MAX                          = 3

};


// Enum  Solarland.EVibrateDeviceType
enum class EVibrateDeviceType : uint8_t
{
    Nonsupport                                     = 0,
    Mobile                                         = 1,
    Gamepad                                        = 2,
    EVibrateDeviceType_MAX                         = 3

};


// Enum  Solarland.ESCMDataGatherType_Settle
enum class ESCMDataGatherType_Settle : uint8_t
{
    None                                           = 0,
    Self                                           = 1,
    Side                                           = 2,
    All                                            = 3,
    ESCMDataGatherType_MAX                         = 4

};


// Enum  Solarland.ESCMDataReplicateType
enum class ESCMDataReplicateType : uint8_t
{
    None                                           = 0,
    RepOwner                                       = 1,
    RepSide                                        = 2,
    RepGlobal                                      = 3,
    ESCMDataReplicateType_MAX                      = 4

};


// Enum  Solarland.ESCMRankCheckType
enum class ESCMRankCheckType : uint8_t
{
    New                                            = 0,
    Change                                         = 1,
    Delete                                         = 2,
    ESCMRankCheckType_MAX                          = 3

};


// Enum  Solarland.ESCMDataSetType
enum class ESCMDataSetType : uint8_t
{
    None                                           = 0,
    Array                                          = 1,
    Map                                            = 2,
    ESCMDataSetType_MAX                            = 3

};


// Enum  Solarland.EGaugeType
enum class EGaugeType : uint8_t
{
    None                                           = 0,
    Degree                                         = 1,
    Degree                                         = 2,
    Degree                                         = 3,
    DownUp                                         = 4,
    LeftRight                                      = 5,
    EGaugeType_MAX                                 = 6

};


// Enum  Solarland.EAimOffsetAdjustType
enum class EAimOffsetAdjustType : uint8_t
{
    None                                           = 0,
    AdjustPitch                                    = 1,
    AdjustYaw                                      = 2,
    AdjustBoth                                     = 3,
    EAimOffsetAdjustType_MAX                       = 4

};


// Enum  Solarland.EMobileAALevel
enum class EMobileAALevel : uint8_t
{
    Off                                            = 0,
    Low                                            = 1,
    Medium                                         = 2,
    High                                           = 3,
    Invalid                                        = 255,
    EMobileAALevel_MAX                             = 256

};


// Enum  Solarland.ESolarDecalLayerLevel
enum class ESolarDecalLayerLevel : uint8_t
{
    Off                                            = 0,
    Low                                            = 1,
    Medium                                         = 2,
    High                                           = 3,
    Invalid                                        = 255,
    ESolarDecalLayerLevel_MAX                      = 256

};


// Enum  Solarland.ESolarScreenPercentageLevel
enum class ESolarScreenPercentageLevel : uint8_t
{
    Default                                        = 0,
    Percent25                                      = 1,
    Percent50                                      = 2,
    Percent75                                      = 3,
    Percent100                                     = 4,
    Invalid                                        = 255,
    ESolarScreenPercentageLevel_MAX                = 256

};


// Enum  Solarland.ESolarSSRQualityLevel
enum class ESolarSSRQualityLevel : uint8_t
{
    Off                                            = 0,
    Low                                            = 1,
    Medium                                         = 2,
    High                                           = 3,
    ExtraHigh                                      = 4,
    Invalid                                        = 255,
    ESolarSSRQualityLevel_MAX                      = 256

};


// Enum  Solarland.ESolarSSGIQualityLevel
enum class ESolarSSGIQualityLevel : uint8_t
{
    Off                                            = 0,
    Low                                            = 1,
    Medium                                         = 2,
    High                                           = 3,
    ExtraHigh                                      = 4,
    Invalid                                        = 255,
    ESolarSSGIQualityLevel_MAX                     = 256

};


// Enum  Solarland.ESolarAmbientOcclusionQualityLevel
enum class ESolarAmbientOcclusionQualityLevel : uint8_t
{
    Off                                            = 0,
    Low                                            = 1,
    Medium                                         = 2,
    High                                           = 3,
    Invalid                                        = 255,
    ESolarAmbientOcclusionQualityLevel_MAX         = 256

};


// Enum  Solarland.ESolarMaxCSMResolutionLevel
enum class ESolarMaxCSMResolutionLevel : uint8_t
{
    Off                                            = 0,
    Low                                            = 1,
    Medium                                         = 2,
    High                                           = 3,
    Invalid                                        = 255,
    ESolarMaxCSMResolutionLevel_MAX                = 256

};


// Enum  Solarland.ESolarShadowQualityLevel
enum class ESolarShadowQualityLevel : uint8_t
{
    Off                                            = 0,
    Low                                            = 1,
    Medium                                         = 2,
    High                                           = 3,
    Invalid                                        = 255,
    ESolarShadowQualityLevel_MAX                   = 256

};


// Enum  Solarland.ESolarAnisotropicFilterLevel
enum class ESolarAnisotropicFilterLevel : uint8_t
{
    Default                                        = 0,
    Level1X                                        = 1,
    Level2X                                        = 2,
    Level4X                                        = 3,
    Level8X                                        = 4,
    Level16X                                       = 5,
    Invalid                                        = 255,
    ESolarAnisotropicFilterLevel_MAX               = 256

};


// Enum  Solarland.ESolarFSRLevel
enum class ESolarFSRLevel : uint8_t
{
    Off                                            = 0,
    On                                             = 1,
    Invalid                                        = 255,
    ESolarFSRLevel_MAX                             = 256

};


// Enum  Solarland.ESolarAntiAliasingLevel
enum class ESolarAntiAliasingLevel : uint8_t
{
    Off                                            = 0,
    FXAA                                           = 1,
    TAA                                            = 2,
    MSAA                                           = 3,
    Invalid                                        = 255,
    ESolarAntiAliasingLevel_MAX                    = 256

};


// Enum  Solarland.ESolarMotionBlurLevel
enum class ESolarMotionBlurLevel : uint8_t
{
    Off                                            = 0,
    Low                                            = 1,
    Medium                                         = 2,
    High                                           = 3,
    Ultra                                          = 4,
    Invalid                                        = 255,
    ESolarMotionBlurLevel_MAX                      = 256

};


// Enum  Solarland.ESolarMonitor
enum class ESolarMonitor : uint8_t
{
    Default                                        = 0,
    Monitor1                                       = 1,
    Monitor2                                       = 2,
    Monitor3                                       = 3,
    ESolarMonitor_MAX                              = 4

};


// Enum  Solarland.ESolarResolution
enum class ESolarResolution : uint8_t
{
    Default                                        = 0,
    Resolution1                                    = 1,
    Resolution2                                    = 2,
    Resolution3                                    = 3,
    Resolution4                                    = 4,
    Resolution5                                    = 5,
    ESolarResolution_MAX                           = 6

};


// Enum  Solarland.EGraphicQualitySelect
enum class EGraphicQualitySelect : uint8_t
{
    Default                                        = 0,
    Lobby                                          = 1,
    InGame                                         = 2,
    EGraphicQualitySelect_MAX                      = 3

};


// Enum  Solarland.ESolarDeviceType
enum class ESolarDeviceType : uint8_t
{
    ESDT_Invalid                                   = 0,
    ESDT_Windows                                   = 1,
    ESDT_Android                                   = 2,
    ESDT_IOS                                       = 3,
    ESDT_Switch                                    = 4,
    ESDT_Other                                     = 5,
    ESDT_MAX                                       = 6

};


// Enum  Solarland.ESolarFeatureLevel
enum class ESolarFeatureLevel : uint8_t
{
    ESFL_Invalid                                   = 0,
    ESFL_Deferred                                  = 1,
    ESFL_MobileHDR                                 = 2,
    ESFL_MobileLDR                                 = 3,
    ESFL_MAX                                       = 4

};


// Enum  Solarland.EHellStrikeOverlapAreaDamageCalculateType
enum class EHellStrikeOverlapAreaDamageCalculateType : uint8_t
{
    Add                                            = 0,
    BasedOnFirstEntry                              = 1,
    EHellStrikeOverlapAreaDamageCalculateType_MAX  = 2

};


// Enum  Solarland.EUIHeroPickListCellState
enum class EUIHeroPickListCellState : uint8_t
{
    Show                                           = 0,
    Lock                                           = 1,
    Forbidden                                      = 2,
    EUIHeroPickListCellState_MAX                   = 3

};


// Enum  Solarland.EHeroPickType
enum class EHeroPickType : uint8_t
{
    AllSidePlayer                                  = 0,
    SpecificPlayer                                 = 1,
    AllPlayer                                      = 2,
    EHeroPickType_MAX                              = 3

};


// Enum  Solarland.EUIHeroPickPlayerState
enum class EUIHeroPickPlayerState : uint8_t
{
    Waiting                                        = 0,
    Selecting                                      = 1,
    Confirm                                        = 2,
    Done                                           = 3,
    EUIHeroPickPlayerState_MAX                     = 4

};


// Enum  Solarland.EHitEffectDirection
enum class EHitEffectDirection : uint8_t
{
    None                                           = 0,
    Top                                            = 1,
    Bottom                                         = 2,
    Left                                           = 3,
    Right                                          = 4,
    EHitEffectDirection_MAX                        = 5

};


// Enum  Solarland.ESkillStateType
enum class ESkillStateType : uint8_t
{
    Normal                                         = 0,
    CD                                             = 1,
    NoneSkill                                      = 2,
    ESkillStateType_MAX                            = 3

};


// Enum  Solarland.ETeamMateUIMode
enum class ETeamMateUIMode : uint8_t
{
    BattleRoyale                                   = 0,
    DeathMatch                                     = 1,
    ETeamMateUIMode_MAX                            = 2

};


// Enum  Solarland.EHUDPickupWidgetState
enum class EHUDPickupWidgetState : uint8_t
{
    Pickup_Weapon                                  = 0,
    Pickup_Normal                                  = 1,
    Replace_Weapon                                 = 2,
    Replace_Scope                                  = 3,
    Replace_Shield                                 = 4,
    CanNotPickup                                   = 5,
    CanNotPickup_Scope                             = 6,
    EHUDPickupWidgetState_MAX                      = 7

};


// Enum  Solarland.EHUDPickupReplaceSlotState
enum class EHUDPickupReplaceSlotState : uint8_t
{
    NormalWeapon                                   = 0,
    FullPartWeapon                                 = 1,
    NotWeapon                                      = 2,
    EHUDPickupReplaceSlotState_MAX                 = 3

};


// Enum  Solarland.EKeyMappingStatus
enum class EKeyMappingStatus : uint8_t
{
    EMPTY                                          = 0,
    BASE                                           = 1,
    OTHER                                          = 2,
    OTHERANDBASE                                   = 3,
    INVALID                                        = 4,
    DONE                                           = 5,
    EKeyMappingStatus_MAX                          = 6

};


// Enum  Solarland.EKillNoticeType
enum class EKillNoticeType : uint8_t
{
    BeKillLeader                                   = 0,
    ShutDownKillLeader                             = 1,
    Revenge                                        = 2,
    ShutDown                                       = 3,
    CumulativeKill                                 = 4,
    Down                                           = 5,
    ClearTeam                                      = 6,
    KillDefender                                   = 7,
    KillBoss                                       = 8,
    SelfKillNotify                                 = 9,
    KillLeaderChange                               = 10,
    KillLeaderShutDown                             = 11,
    GlobalKillNotify                               = 12,
    EKillNoticeType_MAX                            = 13

};


// Enum  Solarland.EMapObjectSpawnStyle
enum class EMapObjectSpawnStyle : uint8_t
{
    Normal                                         = 0,
    EMapObjectSpawnStyle_MAX                       = 1

};


// Enum  Solarland.EMapCellSelectionAccess
enum class EMapCellSelectionAccess : uint8_t
{
    Can                                            = 0,
    Cannot                                         = 1,
    EMapCellSelectionAccess_MAX                    = 2

};


// Enum  Solarland.EMassInvState
enum class EMassInvState : uint8_t
{
    Begin                                          = 0,
    Prepare                                        = 1,
    Normal                                         = 2,
    Sprint                                         = 3,
    End                                            = 4,
    EMassInvState_MAX                              = 5

};


// Enum  Solarland.EMechaBossProcessState
enum class EMechaBossProcessState : uint8_t
{
    None                                           = 0,
    WaitingToSpawn                                 = 1,
    Spawned                                        = 2,
    Destroyed                                      = 3,
    EMechaBossProcessState_MAX                     = 4

};


// Enum  Solarland.EMapState
enum class EMapState : uint8_t
{
    Idle                                           = 0,
    FOVScale                                       = 1,
    EMapState_MAX                                  = 2

};


// Enum  Solarland.EMapFOVParamType
enum class EMapFOVParamType : uint8_t
{
    VehicleSpeed                                   = 0,
    PoisonCircle                                   = 1,
    EMapFOVParamType_MAX                           = 2

};


// Enum  Solarland.EMapFOVState
enum class EMapFOVState : uint8_t
{
    Default                                        = 0,
    Fov1                                           = 1,
    Fov2                                           = 2,
    EMapFOVState_MAX                               = 3

};


// Enum  Solarland.EMissileSwarmDebugFlag
enum class EMissileSwarmDebugFlag : uint8_t
{
    Aim                                            = 0,
    Trail                                          = 1,
    Trace                                          = 2,
    Explode                                        = 3,
    Mesh                                           = 4,
    EMissileSwarmDebugFlag_MAX                     = 5

};


// Enum  Solarland.EMeshProgressType
enum class EMeshProgressType : uint8_t
{
    Normal                                         = 0,
    Damage                                         = 1,
    Background                                     = 2,
    EMeshProgressType_MAX                          = 3

};


// Enum  Solarland.E_Type_OB_Scoreboard
enum class E_Type_OB_Scoreboard : uint8_t
{
    OB_Settlement                                  = 0,
    OB_InGame                                      = 1,
    Lobby_League_Settlement                        = 2,
    Lobby_CreateRoom_Settlement                    = 3,
    E_Type_OB_MAX                                  = 4

};


// Enum  Solarland.EOBPithyPlayerState
enum class EOBPithyPlayerState : uint8_t
{
    Alive                                          = 0,
    Dying                                          = 1,
    Dead                                           = 2,
    EOBPithyPlayerState_MAX                        = 3

};


// Enum  Solarland.EOBTeamListTab
enum class EOBTeamListTab : uint8_t
{
    Pithy                                          = 0,
    All                                            = 1,
    Nearby                                         = 2,
    EOBTeamListTab_MAX                             = 3

};


// Enum  Solarland.EPickupListEntryType
enum class EPickupListEntryType : uint8_t
{
    PickupList                                     = 0,
    PickupTileView                                 = 1,
    BackpackItem                                   = 2,
    BackpackWeapon                                 = 3,
    BackpackPart                                   = 4,
    EPickupListEntryType_MAX                       = 5

};


// Enum  Solarland.ETeammateEffectTriggerType
enum class ETeammateEffectTriggerType : uint8_t
{
    AfterSkillActivate                             = 0,
    AfterSelfEffectTrigger                         = 1,
    ETeammateEffectTriggerType_MAX                 = 2

};


// Enum  Solarland.ERestrictSnarePhase
enum class ERestrictSnarePhase : uint8_t
{
    Idle                                           = 0,
    Move                                           = 1,
    Loop                                           = 2,
    End                                            = 3,
    ERestrictSnarePhase_MAX                        = 4

};


// Enum  Solarland.ESCMMapElementVisibilityType
enum class ESCMMapElementVisibilityType : uint8_t
{
    Visible                                        = 0,
    Hidden                                         = 1,
    ESCMMapElementVisibilityType_MAX               = 2

};


// Enum  Solarland.ESCMMapElementStateType
enum class ESCMMapElementStateType : uint8_t
{
    Normal                                         = 0,
    Suspend                                        = 1,
    ESCMMapElementStateType_MAX                    = 2

};


// Enum  Solarland.ESCMMapElementType
enum class ESCMMapElementType : uint8_t
{
    PlayerStart                                    = 0,
    ItemSpawner                                    = 1,
    AirDrop                                        = 2,
    ChargingPile                                   = 3,
    JumpPad                                        = 4,
    CarPad                                         = 5,
    Vehicle                                        = 6,
    Poison                                         = 7,
    Custom                                         = 8,
    ESCMMapElementType_MAX                         = 9

};


// Enum  Solarland.EPlayerPawnType
enum class EPlayerPawnType : uint8_t
{
    NONE                                           = 0,
    Character                                      = 1,
    Vehicle                                        = 2,
    Other                                          = 3,
    EPlayerPawnType_MAX                            = 4

};


// Enum  Solarland.ESCMGameSceneType
enum class ESCMGameSceneType : uint8_t
{
    None                                           = 0,
    InBattle                                       = 1,
    Settlement                                     = 2,
    ESCMGameSceneType_MAX                          = 3

};


// Enum  Solarland.EDownloadState
enum class EDownloadState : uint8_t
{
    None                                           = 0,
    Downloading                                    = 1,
    Successful                                     = 2,
    Failed                                         = 3,
    EDownloadState_MAX                             = 4

};


// Enum  Solarland.EShieldUpgradeItemShopOpenState
enum class EShieldUpgradeItemShopOpenState : uint8_t
{
    Closed                                         = 0,
    Opening                                        = 1,
    Open                                           = 2,
    Closing                                        = 3,
    EShieldUpgradeItemShopOpenState_MAX            = 4

};


// Enum  Solarland.ESolarWeaponBrand
enum class ESolarWeaponBrand : uint8_t
{
    WeaponBrand_None                               = 0,
    WeaponBrand_9A                                 = 1,
    WeaponBrand_Wasteland                          = 2,
    WeaponBrand_Murphy                             = 3,
    WeaponBrand_Prism                              = 4,
    WeaponBrand_MAX                                = 5

};


// Enum  Solarland.EVulnerableBuffEffectType
enum class EVulnerableBuffEffectType : uint8_t
{
    Individual                                     = 0,
    Team                                           = 1,
    EVulnerableBuffEffectType_MAX                  = 2

};


// Enum  Solarland.EDamageBuffType
enum class EDamageBuffType : uint8_t
{
    Mitigation                                     = 0,
    Vulnerable                                     = 1,
    EDamageBuffType_MAX                            = 2

};


// Enum  Solarland.EHealthBuffType
enum class EHealthBuffType : uint8_t
{
    Healing                                        = 0,
    Damage                                         = 1,
    EHealthBuffType_MAX                            = 2

};


// Enum  Solarland.ESkillBuffValueType
enum class ESkillBuffValueType : uint8_t
{
    Static                                         = 0,
    Curve                                          = 1,
    Dynamic                                        = 2,
    ESkillBuffValueType_MAX                        = 3

};


// Enum  Solarland.ERoleAbilityVoiceTriggerTiming
enum class ERoleAbilityVoiceTriggerTiming : uint8_t
{
    None                                           = 0,
    Activate                                       = 1,
    Commit                                         = 2,
    Custom                                         = 4,
    ERoleAbilityVoiceTriggerTiming_MAX             = 5

};


// Enum  Solarland.ESkillChangeStrategy
enum class ESkillChangeStrategy : uint8_t
{
    Replace                                        = 0,
    LevelUp                                        = 1,
    ESkillChangeStrategy_MAX                       = 2

};


// Enum  Solarland.ERoleSkillActiveStatus
enum class ERoleSkillActiveStatus : uint8_t
{
    NotActive                                      = 0,
    Active_Default                                 = 1,
    Active_Continuous                              = 2,
    Active_Holding                                 = 3,
    ERoleSkillActiveStatus_MAX                     = 4

};


// Enum  Solarland.ECharacterRoleAbilityType
enum class ECharacterRoleAbilityType : uint8_t
{
    Type_Super                                     = 0,
    Type_Tactical                                  = 1,
    Count                                          = 2,
    ECharacterRoleAbilityType_MAX                  = 3

};


// Enum  Solarland.ECharacterRoleAbilityIndex
enum class ECharacterRoleAbilityIndex : uint8_t
{
    Super                                          = 0,
    Tactical                                       = 1,
    Tactical                                       = 2,
    Tactical                                       = 3,
    Count                                          = 4,
    ECharacterRoleAbilityIndex_MAX                 = 5

};


// Enum  Solarland.EAchievementCondition
enum class EAchievementCondition : uint8_t
{
    None                                           = 0,
    AchTSubAchievement                             = 1,
    AchTMinuteKill                                 = 2,
    AchTUseVehicle                                 = 3,
    AchTHPKill                                     = 4,
    AchTLimitWin                                   = 5,
    AchTDyingWin                                   = 6,
    AchTAssistWin                                  = 7,
    AchTRescue                                     = 8,
    AchTLevel                                      = 9,
    AchTSkyKill                                    = 10,
    AchTOnlyLiveWin                                = 11,
    AchTFirstKill                                  = 12,
    AchTBlindSniper                                = 13,
    AchTFriendNum                                  = 14,
    AchTOpenBoxNum                                 = 15,
    AchTenemyVehicle                               = 16,
    AchTDie                                        = 17,
    AchTMarsWin                                    = 18,
    AchTFistKill                                   = 19,
    AchTAirUmbrella                                = 20,
    AchTAirTrapeze                                 = 21,
    AchTAirSpeed                                   = 22,
    AchTBubbleKill                                 = 23,
    AchTCharacterNum                               = 24,
    AchAdvancedWeapon                              = 25,
    AchTBombingDie                                 = 26,
    AchTRevengeKill                                = 27,
    EAchievementCondition_MAX                      = 28

};


// Enum  Solarland.EAchievementReportType
enum class EAchievementReportType : uint8_t
{
    None                                           = 0,
    SingleBattlle                                  = 1,
    MultiBattle                                    = 2,
    NoBattle                                       = 3,
    EAchievementReportType_MAX                     = 4

};


// Enum  Solarland.ESigninItemState
enum class ESigninItemState : uint8_t
{
    Got                                            = 0,
    UnGot                                          = 1,
    No                                             = 2,
    ESigninItemState_MAX                           = 3

};


// Enum  Solarland.EProgressEffectType
enum class EProgressEffectType : uint8_t
{
    Instantly                                      = 0,
    WholeGrid                                      = 1,
    EProgressEffectType_MAX                        = 2

};


// Enum  Solarland.EProgressBoardChannelState
enum class EProgressBoardChannelState : uint8_t
{
    None                                           = 0,
    Add                                            = 1,
    Minus                                          = 2,
    HoldOn                                         = 3,
    EProgressBoardChannelState_MAX                 = 4

};


// Enum  Solarland.ESolarAIValueCompareOp
enum class ESolarAIValueCompareOp : uint8_t
{
    Equal                                          = 0,
    Greater                                        = 1,
    Less                                           = 2,
    ESolarAIValueCompareOp_MAX                     = 3

};


// Enum  Solarland.ELowMemBankLoadStrategy
enum class ELowMemBankLoadStrategy : uint8_t
{
    SADM_Unchanged                                 = 0,
    SADM_OnDemand                                  = 1,
    SADM_NeverLoad                                 = 2,
    SADM_MAX                                       = 3

};


// Enum  Solarland.ESolarAudioDetailCatalog
enum class ESolarAudioDetailCatalog : uint8_t
{
    SADC_Common                                    = 0,
    SADC_Music                                     = 1,
    SADC_UI                                        = 2,
    SADC_Gun                                       = 3,
    SADC_Vehicle                                   = 4,
    SADC_Object                                    = 5,
    SADC_Character                                 = 6,
    SADC_Voice                                     = 7,
    SADC_VoiceEx                                   = 8,
    SADC_MAX                                       = 9

};


// Enum  Solarland.ESolarAudioDetailUnloadMode
enum class ESolarAudioDetailUnloadMode : uint8_t
{
    SADU_Manual                                    = 0,
    SADU_Timer                                     = 1,
    SADU_SwitchLevel                               = 2,
    SADU_LeaveLobby                                = 3,
    SADU_LeaveTutorial                             = 4,
    SADU_LeaveWaiting                              = 5,
    SADU_LeaveGame                                 = 6,
    SADU_LeaveGameState                            = 7,
    SADU_MAX                                       = 8

};


// Enum  Solarland.ESolarAudioDetailLoadMode
enum class ESolarAudioDetailLoadMode : uint8_t
{
    SADL_BeginPlay                                 = 0,
    SADL_OnDemand                                  = 1,
    SADL_Manual                                    = 2,
    SADL_EnterBindScene                            = 3,
    SADL_EnterLobby                                = 4,
    SADL_EnterTutorial                             = 5,
    SADL_EnterWaiting                              = 6,
    SADL_EnterGame                                 = 7,
    SADL_EnterGameState                            = 8,
    SADL_MAX                                       = 9

};


// Enum  Solarland.EMontageCustomFlags
enum class EMontageCustomFlags : uint32_t
{
    None                                           = 0,
    HasEndNotify                                   = 1,
    Initialized                                    = 2147483648,
    EMontageCustomFlags_MAX                        = 2147483649

};


// Enum  Solarland.EAnimBlendDirection
enum class EAnimBlendDirection : uint8_t
{
    Idle                                           = 0,
    Forward                                        = 1,
    Back                                           = 2,
    Right                                          = 3,
    Left                                           = 4,
    Max                                            = 5

};


// Enum  Solarland.EInVehicleState
enum class EInVehicleState : uint8_t
{
    None                                           = 0,
    Driving                                        = 1,
    Riding                                         = 2,
    StickingOut                                    = 3,
    EInVehicleState_MAX                            = 4

};


// Enum  Solarland.ECruiseAnimState
enum class ECruiseAnimState : uint8_t
{
    None                                           = 0,
    Looping                                        = 1,
    Leaving                                        = 2,
    End                                            = 3,
    ECruiseAnimState_MAX                           = 4

};


// Enum  Solarland.ECharacterMontage
enum class ECharacterMontage : uint8_t
{
    Invalid                                        = 0,
    Bolt                                           = 1,
    Equip                                          = 2,
    PreFire                                        = 3,
    Rechamber                                      = 4,
    Fire1                                          = 5,
    Reload                                         = 6,
    ReloadWithBolt                                 = 7,
    SummonPreview                                  = 8,
    SummonExecute                                  = 9,
    Max                                            = 10

};


// Enum  Solarland.EVehicleAnimationType
enum class EVehicleAnimationType : uint8_t
{
    None                                           = 0,
    Suv                                            = 1,
    Sports                                         = 2,
    MotorBike                                      = 3,
    Hover                                          = 4,
    Legged                                         = 5,
    IronMan                                        = 6,
    Backpacker                                     = 7,
    EVehicleAnimationType_MAX                      = 8

};


// Enum  Solarland.EDriveTurnType
enum class EDriveTurnType : uint8_t
{
    EDriveTurnType_Idle                            = 0,
    EDriveTurnType_Left                            = 1,
    EDriveTurnType_Right                           = 2,
    EDriveTurnType_MAX                             = 3

};


// Enum  Solarland.EWeaponStatus
enum class EWeaponStatus : uint8_t
{
    NoWeapon                                       = 0,
    Peace                                          = 1,
    Aiming                                         = 2,
    EWeaponStatus_MAX                              = 3

};


// Enum  Solarland.EAnoAntiDataType
enum class EAnoAntiDataType : uint8_t
{
    Unknown                                        = 0,
    SecAntiDataFlow                                = 1,
    SecAttackFlow                                  = 2,
    EAnoAntiDataType_MAX                           = 3

};


// Enum  Solarland.EMeerkatSubComponentType
enum class EMeerkatSubComponentType : uint8_t
{
    MB                                             = 0,
    Hp                                             = 1,
    AE                                             = 2,
    AR                                             = 3,
    EMeerkatSubComponentType_MAX                   = 4

};


// Enum  Solarland.EMeerkatGameDispatchEvents
enum class EMeerkatGameDispatchEvents : uint8_t
{
    ServerFire                                     = 0,
    ServerHit                                      = 1,
    ServerKill                                     = 2,
    ServerKilled                                   = 3,
    ClientFire                                     = 4,
    ClientHit                                      = 5,
    ClientKill                                     = 6,
    ClientKilled                                   = 7,
    ClientHitDown                                  = 8,
    ClientBeHitDown                                = 9,
    ClientTick                                     = 10,
    ServerTick                                     = 11,
    ClientBeginPlay                                = 12,
    ServerBeginPlay                                = 13,
    ClientEndPlay                                  = 14,
    ServerEndPlay                                  = 15,
    EventMax                                       = 16,
    EMeerkatGameDispatchEvents_MAX                 = 17

};


// Enum  Solarland.EItemLoadPriority
enum class EItemLoadPriority : uint32_t
{
    DEFAULT                                        = 0,
    ITEM_MIN                                       = 1,
    ITEM_MAX                                       = 99,
    WEAPON_MIN                                     = 100,
    WEAPON_MAX                                     = 199,
    VEHICLE_MIN                                    = 200,
    VEHICLE_MAX                                    = 299,
    CHARACTER_MIN                                  = 300,
    CHARACTER_MAX                                  = 399,
    CLASS_PRIORITY                                 = 4294967295,
    EItemLoadPriority_MAX                          = 0

};


// Enum  Solarland.EAutoSaveType
enum class EAutoSaveType : uint8_t
{
    Weapon                                         = 0,
    ItemActor                                      = 1,
    EAutoSaveType_MAX                              = 2

};


// Enum  Solarland.EBackpackPropellingMode
enum class EBackpackPropellingMode : uint8_t
{
    Default                                        = 0,
    Skydive                                        = 1,
    EBackpackPropellingMode_MAX                    = 2

};


// Enum  Solarland.ESolarBotMemberState
enum class ESolarBotMemberState : uint8_t
{
    None                                           = 0,
    Leader                                         = 1,
    OnCall                                         = 2,
    Separate                                       = 3,
    Leaving                                        = 4,
    Invalid                                        = 5,
    ESolarBotMemberState_MAX                       = 6

};


// Enum  Solarland.EBotTeleportReason
enum class EBotTeleportReason : uint8_t
{
    Unknown                                        = 0,
    SolveBlock                                     = 1,
    SolveOffMesh                                   = 2,
    BTTask                                         = 3,
    PreservePop                                    = 4,
    EBotTeleportReason_MAX                         = 5

};


// Enum  Solarland.ESolarAITagStateTimeType
enum class ESolarAITagStateTimeType : uint8_t
{
    DurationInCurrentState                         = 0,
    TimeSinceLastExitToState                       = 1,
    ESolarAITagStateTimeType_MAX                   = 2

};


// Enum  Solarland.EBotInteractCondition
enum class EBotInteractCondition : uint8_t
{
    Invalid                                        = 0,
    NeedToResponsePoison                           = 1,
    FoundEnemyActor                                = 2,
    TeammateKillEnemy                              = 3,
    WeAreTheChampion                               = 4,
    TeammateMarkTargetLocation                     = 5,
    TeammateMarkTargetDangerPoint                  = 6,
    TeammateMarkTargetItem                         = 7,
    TeammateMarkTargetFootstep                     = 8,
    TeammateMarkFollowHe                           = 9,
    TeammateMarkGetOnVehicle                       = 10,
    TeammateMarkNeedVehicle                        = 11,
    TeammateMarkNeedWeapon                         = 12,
    TeammateMarkNeedHelp                           = 13,
    TeammateMarkAttack                             = 14,
    TeammateMarkDefend                             = 15,
    MockEnemy                                      = 16,
    MockDyingEnemy                                 = 17,
    EnterDying                                     = 18,
    BoringEnough                                   = 19,
    EBotInteractCondition_MAX                      = 20

};


// Enum  Solarland.EBotFocusType
enum class EBotFocusType : uint8_t
{
    FocusToNothing                                 = 0,
    FocusToActor                                   = 1,
    FocusToPoint                                   = 2,
    FocusToDirection                               = 3,
    EBotFocusType_MAX                              = 4

};


// Enum  Solarland.ENgaiMLType
enum class ENgaiMLType : uint8_t
{
    None                                           = 0,
    OnlyImitationLearning                          = 1,
    OnlyReinforcementLearning                      = 2,
    Both                                           = 3,
    ENgaiMLType_MAX                                = 4

};


// Enum  Solarland.EBotAIType
enum class EBotAIType : uint8_t
{
    BehaviorTree                                   = 0,
    ImitationLearning                              = 1,
    ReinforcementLearning                          = 2,
    MAX                                            = 3

};


// Enum  Solarland.EPopLocationType
enum class EPopLocationType : uint8_t
{
    Default                                        = 0,
    ShowFight                                      = 1,
    Guarantee                                      = 2,
    EPopLocationType_MAX                           = 3

};


// Enum  Solarland.ESolarBotTimelineTriggerAction
enum class ESolarBotTimelineTriggerAction : uint8_t
{
    None                                           = 0,
    Add                                            = 1,
    Remove                                         = 2,
    Clear                                          = 3,
    ESolarBotTimelineTriggerAction_MAX             = 4

};


// Enum  Solarland.ESolarBotTimelineFilterParameterType
enum class ESolarBotTimelineFilterParameterType : uint8_t
{
    None                                           = 0,
    MoreThan                                       = 1,
    LessThan                                       = 2,
    Equal                                          = 3,
    NotEqual                                       = 4,
    Contain                                        = 5,
    NotContain                                     = 6,
    Radius                                         = 7,
    Target                                         = 8,
    ESolarBotTimelineFilterParameterType_MAX       = 9

};


// Enum  Solarland.ESolarBotTimelineFilterType
enum class ESolarBotTimelineFilterType : uint8_t
{
    None                                           = 0,
    RankPoint                                      = 1,
    Equipment                                      = 2,
    Disengagement                                  = 3,
    KillNum                                        = 4,
    DamageNum                                      = 5,
    ItemNum                                        = 6,
    SkillCoolingDown                               = 7,
    SurroundingTeammate                            = 8,
    SurroundingEnemy                               = 9,
    ESolarBotTimelineFilterType_MAX                = 10

};


// Enum  Solarland.ESolarBotTimelineAIDataSettingType
enum class ESolarBotTimelineAIDataSettingType : uint8_t
{
    None                                           = 0,
    Health                                         = 1,
    Shield                                         = 2,
    ESolarBotTimelineAIDataSettingType_MAX         = 3

};


// Enum  Solarland.ESolarBotTimelineWeaponPartType
enum class ESolarBotTimelineWeaponPartType : uint8_t
{
    None                                           = 0,
    Muzzle                                         = 1,
    Grip                                           = 2,
    Clip                                           = 3,
    Scope                                          = 4,
    GunStock                                       = 5,
    ESolarBotTimelineWeaponPartType_MAX            = 6

};


// Enum  Solarland.ESolarBotTimelineEquipmentSettingType
enum class ESolarBotTimelineEquipmentSettingType : uint8_t
{
    None                                           = 0,
    PrimaryWeapon                                  = 1,
    SecondaryWeapon                                = 2,
    Shield                                         = 3,
    VerticalJet                                    = 4,
    HorizontalJet                                  = 5,
    SummonGun                                      = 6,
    ESolarBotTimelineEquipmentSettingType_MAX      = 7

};


// Enum  Solarland.ESolarBotTimelineTriggerType
enum class ESolarBotTimelineTriggerType : uint8_t
{
    None                                           = 0,
    Timeline                                       = 1,
    Guarantee                                      = 2,
    ESolarBotTimelineTriggerType_MAX               = 3

};


// Enum  Solarland.ESolarBotWarmSystemType
enum class ESolarBotWarmSystemType : uint8_t
{
    Regular                                        = 0,
    Script                                         = 1,
    Unknown                                        = 2,
    ESolarBotWarmSystemType_MAX                    = 3

};


// Enum  Solarland.EBotShotTargetCtlType
enum class EBotShotTargetCtlType : uint8_t
{
    Player                                         = 0,
    Bot                                            = 1,
    Any                                            = 2,
    EBotShotTargetCtlType_MAX                      = 3

};


// Enum  Solarland.EBotShotTargetType
enum class EBotShotTargetType : uint8_t
{
    Character                                      = 0,
    Vehicle                                        = 1,
    SummonItem                                     = 2,
    Any                                            = 3,
    EBotShotTargetType_MAX                         = 4

};


// Enum  Solarland.EBotOnVehicleFireType
enum class EBotOnVehicleFireType : uint8_t
{
    EBotOnVehicleFireType_None                     = 0,
    EBotOnVehicleFireType_FireOn                   = 1,
    EBotOnVehicleFireType_FireOnDelayOff           = 2,
    EBotOnVehicleFireType_MAX                      = 3

};


// Enum  Solarland.EBotOnVehicleStopType
enum class EBotOnVehicleStopType : uint8_t
{
    EBotOnVehicleStopType_None                     = 0,
    EBotOnVehicleStopType_Delay                    = 1,
    EBotOnVehicleStopType_Stop                     = 2,
    EBotOnVehicleStopType_MAX                      = 3

};


// Enum  Solarland.EBotFirePolicy
enum class EBotFirePolicy : uint8_t
{
    AlwaysFire                                     = 0,
    FirstRoughMoveDone                             = 1,
    FirstPreciseMoveDone                           = 2,
    PreciseMoveOrGreater                           = 3,
    FollowMoveOrGreater                            = 4,
    OnlyWhenHitSimulatedTarget                     = 5,
    OnlyWhenHitLockedTarget                        = 6,
    EBotFirePolicy_MAX                             = 7

};


// Enum  Solarland.EBotStateDebugType
enum class EBotStateDebugType : uint8_t
{
    Idle                                           = 0,
    SearchSupplies                                 = 1,
    InBattle                                       = 2,
    MoveToWarmService                              = 3,
    EscapingPoison                                 = 4,
    Dying                                          = 5,
    Dead                                           = 6,
    EBotStateDebugType_MAX                         = 7

};


// Enum  Solarland.EBotActionState
enum class EBotActionState : uint8_t
{
    EBotActionState_Sprite                         = 0,
    EBotActionState_Crouch                         = 1,
    EBotActionState_GunAim                         = 2,
    EBotActionState_MAX                            = 3

};


// Enum  Solarland.EBotBunkerType
enum class EBotBunkerType : uint8_t
{
    Invalid                                        = 0,
    FullSize                                       = 1,
    HalfSize                                       = 2,
    EBotBunkerType_MAX                             = 3

};


// Enum  Solarland.EBotTeamVehicleDrivePolicy
enum class EBotTeamVehicleDrivePolicy : uint8_t
{
    DirectlyMove                                   = 0,
    HoldAndWaitPassenger                           = 1,
    MoveAndTakePassenger                           = 2,
    EBotTeamVehicleDrivePolicy_MAX                 = 3

};


// Enum  Solarland.EPoisonResponseType
enum class EPoisonResponseType : uint8_t
{
    NoResponse                                     = 0,
    LowPriority                                    = 1,
    HighPriority                                   = 2,
    Immediately                                    = 3,
    EPoisonResponseType_MAX                        = 4

};


// Enum  Solarland.ESolarTaskScoringItemType
enum class ESolarTaskScoringItemType : uint8_t
{
    None                                           = 0,
    CurrentHP                                      = 1,
    IfSelfInBattle                                 = 2,
    IfSelfInSafeArea                               = 3,
    IfSelfInPoisonCircle                           = 4,
    TimeToEnterSafeArea                            = 5,
    TimeToEnterPoisonCircleXPoisonDamage           = 6,
    IfRelativeActorInSafeArea                      = 7,
    IfRelativeActorInPoisonCircle                  = 8,
    IfRescueTargetIsPlayer                         = 9,
    TimeToMovetoRescueTarget                       = 10,
    DistanceFromRescueTargetToSafeArea             = 11,
    DistanceFromRescueTargetToPoisonCircleXPoisonDamage = 12,
    IfRescuingThisTarget                           = 13,
    IfRescuingOtherTarget                          = 14,
    TimePoisonToRescueTarget                       = 15,
    CurrentPoisonDamage                            = 16,
    ESolarTaskScoringItemType_MAX                  = 17

};


// Enum  Solarland.ESolarTeamTaskType
enum class ESolarTeamTaskType : uint8_t
{
    RescueTeammate                                 = 0,
    ESolarTeamTaskType_MAX                         = 1

};


// Enum  Solarland.EJetTaskFinishMode
enum class EJetTaskFinishMode : uint8_t
{
    AfterResponded                                 = 0,
    AfterDone                                      = 1,
    EJetTaskFinishMode_MAX                         = 2

};


// Enum  Solarland.EJetPackMode
enum class EJetPackMode : uint8_t
{
    Horizontal                                     = 0,
    Vertical                                       = 1,
    EJetPackMode_MAX                               = 2

};


// Enum  Solarland.EJumpTaskFinishMode
enum class EJumpTaskFinishMode : uint8_t
{
    AfterResponded                                 = 0,
    AfterApex                                      = 1,
    AfterDone                                      = 2,
    EJumpTaskFinishMode_MAX                        = 3

};


// Enum  Solarland.EBotShootTargetType
enum class EBotShootTargetType : uint8_t
{
    Player                                         = 0,
    Bot                                            = 1,
    Vehicle                                        = 2,
    Monster                                        = 3,
    EBotShootTargetType_MAX                        = 4

};


// Enum  Solarland.ERoleAbilityTargetType
enum class ERoleAbilityTargetType : uint8_t
{
    SingleTargetLocation                           = 0,
    SingleTargetActor                              = 1,
    MultipleTargets                                = 2,
    ERoleAbilityTargetType_MAX                     = 3

};


// Enum  Solarland.ECameraShakeDurationType
enum class ECameraShakeDurationType : uint8_t
{
    Fixed                                          = 0,
    Infinite                                       = 1,
    Custom                                         = 2,
    ECameraShakeDurationType_MAX                   = 3

};


// Enum  Solarland.ECameraShakeUpdateResultFlags
enum class ECameraShakeUpdateResultFlags : uint8_t
{
    ApplyAsAbsolute                                = 1,
    SkipAutoScale                                  = 2,
    SkipAutoPlaySpace                              = 4,
    Default                                        = 0,
    ECameraShakeUpdateResultFlags_MAX              = 5

};


// Enum  Solarland.ECameraShakePlaySpace
enum class ECameraShakePlaySpace : uint8_t
{
    CameraLocal                                    = 0,
    World                                          = 1,
    UserDefined                                    = 2,
    ECameraShakePlaySpace_MAX                      = 3

};


// Enum  Solarland.ECruiseStatePrivate
enum class ECruiseStatePrivate : uint8_t
{
    None                                           = 0,
    Start                                          = 1,
    CanParachute                                   = 2,
    ForceParachute                                 = 3,
    End                                            = 4,
    ECruiseStatePrivate_MAX                        = 5

};


// Enum  Solarland.ECatBodyStatus
enum class ECatBodyStatus : uint8_t
{
    None                                           = 0,
    FlyToHost                                      = 1,
    Hover                                          = 2,
    FlyToLand                                      = 3,
    ECatBodyStatus_MAX                             = 4

};


// Enum  Solarland.EAntiCheatType
enum class EAntiCheatType : uint8_t
{
    ShootingAtInvalidTime                          = 0,
    CheckLastShotWeapon                            = 1,
    ShootWhileNoAmmo                               = 2,
    ShootIntervalInvalid                           = 3,
    InvalidLaser                                   = 4,
    ShootWhileOverload                             = 5,
    CheckRealShot                                  = 6,
    VerifyHitInValid                               = 7,
    ReloadTooFast                                  = 8,
    CanisterShotAbnormal                           = 9,
    EAntiCheatType_MAX                             = 10

};


// Enum  Solarland.ERoleAbilityCancelPhase
enum class ERoleAbilityCancelPhase : uint8_t
{
    None                                           = 0,
    Pressing                                       = 1,
    Continuous                                     = 2,
    All                                            = 3,
    ERoleAbilityCancelPhase_MAX                    = 4

};


// Enum  Solarland.EMovementComponentEnableType
enum class EMovementComponentEnableType : uint8_t
{
    Default                                        = 0,
    Dying                                          = 1,
    OnLevelStreaming                               = 2,
    EMovementComponentEnableType_MAX               = 3

};


// Enum  Solarland.EHitTraceType
enum class EHitTraceType : uint8_t
{
    None                                           = 0,
    Sniper                                         = 1,
    Default                                        = 2,
    Bump                                           = 3,
    Vehicle                                        = 4,
    EHitTraceType_MAX                              = 5

};


// Enum  Solarland.EAntiCheatGameEvents
enum class EAntiCheatGameEvents : uint8_t
{
    ServerFire                                     = 0,
    ServerHit                                      = 1,
    ServerKill                                     = 2,
    ServerKilled                                   = 3,
    ClientFire                                     = 4,
    ClientHit                                      = 5,
    ClientKill                                     = 6,
    ClientKilled                                   = 7,
    ClientHitDown                                  = 8,
    ClientBeHitDown                                = 9,
    ClientTick                                     = 10,
    ServerTick                                     = 11,
    ClientBeginPlay                                = 12,
    ServerBeginPlay                                = 13,
    ClientEndPlay                                  = 14,
    ServerEndPlay                                  = 15,
    EventMax                                       = 16,
    EAntiCheatGameEvents_MAX                       = 17

};


// Enum  Solarland.EClipAttachType
enum class EClipAttachType : uint8_t
{
    Weapon                                         = 0,
    CharacterLeftHand                              = 1,
    CharacterRightHand                             = 2,
    EClipAttachType_MAX                            = 3

};


// Enum  Solarland.EAnimReloadNotifyType
enum class EAnimReloadNotifyType : uint8_t
{
    InHand                                         = 0,
    InHandAndDrop                                  = 1,
    GetOld                                         = 2,
    InPocket                                       = 3,
    Restore                                        = 4,
    SpawnFakeOldClip                               = 5,
    PhysicsDropOldClip                             = 6,
    SpawnFakeNewClip                               = 7,
    RestoreClip                                    = 8,
    EAnimReloadNotifyType_MAX                      = 9

};


// Enum  Solarland.EStopCamShakeFlags
enum class EStopCamShakeFlags : uint8_t
{
    None                                           = 0,
    All                                            = 1,
    CacheOnly                                      = 2,
    OnOpenScope                                    = 4,
    EStopCamShakeFlags_MAX                         = 5

};


// Enum  Solarland.ECamShakeType
enum class ECamShakeType : uint8_t
{
    Default                                        = 0,
    JumpBegin                                      = 1,
    JumpEndLight                                   = 2,
    JumpEndHeavy                                   = 3,
    FullBodyMeleeWithTarget                        = 4,
    FullBodyMeleeWithoutTarget                     = 5,
    TacticalDodgeForward                           = 6,
    TacticalDodgeBackward                          = 7,
    TacticalDodgeLeft                              = 8,
    TacticalDodgeRight                             = 9,
    GrapplingHook                                  = 10,
    ECamShakeType_MAX                              = 11

};


// Enum  Solarland.EGunsightCameraSwitchMode
enum class EGunsightCameraSwitchMode : uint8_t
{
    CloseScope                                     = 0,
    CloseShoulderShot                              = 1,
    OpenShoulderShot                               = 2,
    OpenScope                                      = 3,
    EGunsightCameraSwitchMode_MAX                  = 4

};


// Enum  Solarland.ESolarCameraSmoothType
enum class ESolarCameraSmoothType : uint8_t
{
    Default                                        = 0,
    Instant                                        = 1,
    Constant                                       = 2,
    EaseOut                                        = 3,
    EaseInEaseOut                                  = 4,
    FloatCurve                                     = 5,
    ESolarCameraSmoothType_MAX                     = 6

};


// Enum  Solarland.ESolarAbilityStage
enum class ESolarAbilityStage : uint8_t
{
    None                                           = 0,
    Startup                                        = 1,
    Action                                         = 2,
    Recovery                                       = 3,
    ESolarAbilityStage_MAX                         = 4

};


// Enum  Solarland.EReconnectionStatus
enum class EReconnectionStatus : uint8_t
{
    None                                           = 0,
    Reconnecting                                   = 1,
    Reconnected                                    = 2,
    EReconnectionStatus_MAX                        = 3

};


// Enum  Solarland.EAnimDirection
enum class EAnimDirection : uint8_t
{
    AnimNone                                       = 0,
    AnimForward                                    = 1,
    AnimBackward                                   = 2,
    AnimLeft                                       = 3,
    AnimRight                                      = 4,
    EAnimDirection_MAX                             = 5

};


// Enum  Solarland.ESkydiveEffectLifetime
enum class ESkydiveEffectLifetime : uint8_t
{
    DuringFlying                                   = 0,
    DuringLanding                                  = 1,
    DuringWholeSkydiving                           = 2,
    ESkydiveEffectLifetime_MAX                     = 3

};


// Enum  Solarland.ERoleAbilityParaType
enum class ERoleAbilityParaType : uint8_t
{
    StopAbility                                    = 0,
    ERoleAbilityParaType_MAX                       = 1

};


// Enum  Solarland.RoleAbilityCommitPhase
enum class RoleAbilityCommitPhase : uint8_t
{
    OnActive                                       = 0,
    Custom                                         = 1,
    RoleAbilityCommitPhase_MAX                     = 2

};


// Enum  Solarland.EZiplineType
enum class EZiplineType : uint8_t
{
    None                                           = 0,
    Horizontal                                     = 1,
    Vertical                                       = 2,
    EZiplineType_MAX                               = 3

};


// Enum  Solarland.EUpdateWarmServiceEventType
enum class EUpdateWarmServiceEventType : uint8_t
{
    None                                           = 0,
    CharacterUpgrade                               = 1,
    WeaponUpgrade                                  = 2,
    ShieldUpgrade                                  = 3,
    SuperAbilityReady                              = 4,
    TacticalAbilityReady                           = 5,
    BattleStation                                  = 6,
    EUpdateWarmServiceEventType_MAX                = 7

};


// Enum  Solarland.EMassInVisibilityWarningType
enum class EMassInVisibilityWarningType : uint8_t
{
    None                                           = 0,
    Character                                      = 1,
    Vehicle                                        = 2,
    EMassInVisibilityWarningType_MAX               = 3

};


// Enum  Solarland.EHitRecoverType
enum class EHitRecoverType : uint8_t
{
    EHRT_Normal                                    = 0,
    EHRT_DeathVerge                                = 1,
    EHRT_DuckDunk                                  = 2,
    EHRT_C4Explosive                               = 3,
    EHRT_MAX                                       = 4

};


// Enum  Solarland.EBResurrectionState
enum class EBResurrectionState : uint8_t
{
    NoneState                                      = 0,
    WaitForApply                                   = 1,
    NotApply                                       = 2,
    Resurrected                                    = 3,
    WaitForResurrect                               = 4,
    GiveUp                                         = 5,
    Timeout                                        = 6,
    AllTeammatesDied                               = 7,
    EBResurrectionState_MAX                        = 8

};


// Enum  Solarland.EDroppedItemType
enum class EDroppedItemType : uint8_t
{
    Weapons                                        = 0,
    WeaponParts                                    = 1,
    Consumables                                    = 2,
    Equipments                                     = 3,
    EDroppedItemType_MAX                           = 4

};


// Enum  Solarland.EBagScopeSlotType
enum class EBagScopeSlotType : uint8_t
{
    None                                           = 0,
    Primary                                        = 10,
    Second                                         = 11,
    Bag                                            = 12,
    EBagScopeSlotType_MAX                          = 13

};


// Enum  Solarland.ETreatmentSoundType
enum class ETreatmentSoundType : uint8_t
{
    Healing                                        = 0,
    Cancel                                         = 1,
    StopHealing                                    = 2,
    Completed                                      = 3,
    ETreatmentSoundType_MAX                        = 4

};


// Enum  Solarland.EShieldAutoRechargeStopReason
enum class EShieldAutoRechargeStopReason : uint8_t
{
    SwitchShield                                   = 0,
    OnWeaponFire                                   = 1,
    OnHit                                          = 2,
    Die                                            = 3,
    ShieldFull                                     = 4,
    ManualRecharge                                 = 5,
    EShieldAutoRechargeStopReason_MAX              = 6

};


// Enum  Solarland.EPoseMode
enum class EPoseMode : uint8_t
{
    Stand                                          = 0,
    Crouch                                         = 1,
    Crawl                                          = 2,
    Skydive                                        = 3,
    EPoseMode_MAX                                  = 4

};


// Enum  Solarland.EPickUpTargetType
enum class EPickUpTargetType : uint8_t
{
    Invalid                                        = 0,
    Item                                           = 1,
    Weapon                                         = 2,
    TreasureItem                                   = 3,
    HomeItem                                       = 4,
    BoxHomeItem                                    = 5,
    EPickUpTargetType_MAX                          = 6

};


// Enum  Solarland.ESolarExpBehaviorType
enum class ESolarExpBehaviorType : uint8_t
{
    SurvivalTime                                   = 1,
    Kills                                          = 2,
    Assists                                        = 3,
    Selfhealing                                    = 4,
    TeammateHealing                                = 5,
    Unpacking                                      = 6,
    CollectElectricity                             = 7,
    PickExpPack                                    = 8,
    EveryDamageDealt                               = 9,
    ESolarExpBehaviorType_MAX                      = 10

};


// Enum  Solarland.ESolarCheckButtonSelectType
enum class ESolarCheckButtonSelectType : uint8_t
{
    None                                           = 0,
    Next                                           = 1,
    Prev                                           = 2,
    ESolarCheckButtonSelectType_MAX                = 3

};


// Enum  Solarland.EClassLevelUpRewardType
enum class EClassLevelUpRewardType : uint8_t
{
    BattleUpgradeEffect                            = 0,
    UpgradeSkill1                                  = 1,
    UpgradeSkill2                                  = 2,
    UpgradeSkill3                                  = 3,
    UpgradeSkill4                                  = 4,
    ClassCommonPassiveSkill                        = 5,
    ClassSpecificPassiveSkill                      = 6,
    Max                                            = 7

};


// Enum  Solarland.EClassType
enum class EClassType : uint8_t
{
    None                                           = 0,
    Assault                                        = 1,
    Defence                                        = 2,
    Support                                        = 3,
    Scout                                          = 4,
    Control                                        = 5,
    EClassType_MAX                                 = 6

};


// Enum  Solarland.ESolarDamageTextType
enum class ESolarDamageTextType : uint8_t
{
    DamageTextType_None                            = 0,
    DamageTextType_Common                          = 1,
    DamageTextType_Headshot                        = 2,
    DamageTextType_HitShield                       = 3,
    DamageTextType_HeadshotWithShield              = 4,
    DamageTextType_HitVehicle                      = 5,
    DamageTextType_HitVehicleWeak                  = 6,
    DamageTextType_BrokenShiled                    = 7,
    DamageTextType_BrokenShieldWithHeadShot        = 8,
    DamageTextType_HitSummonItem                   = 9,
    DamageTextType_MAX                             = 10

};


// Enum  Solarland.EUIDragSourceType
enum class EUIDragSourceType : uint8_t
{
    Default                                        = 0,
    Weapon1                                        = 1,
    Weapon2                                        = 2,
    Weapon3                                        = 3,
    PickupList                                     = 4,
    BackpackConsumable                             = 5,
    BackpackEquip                                  = 6,
    BackpackWeaponPart                             = 7,
    DefaultPickupList                              = 8,
    BackpackPickupListItem                         = 9,
    BackpackPickupListWeapon                       = 10,
    BackpackPickupListWeaponPart                   = 11,
    EUIDragSourceType_MAX                          = 12

};


// Enum  Solarland.EShopStatisticType
enum class EShopStatisticType : uint8_t
{
    OnActivated                                    = 0,
    OnUpgradeWeapon                                = 1,
    OnPurchaseItem                                 = 2,
    OnItemRefresh                                  = 3,
    OnUpgradeShield                                = 4,
    EShopStatisticType_MAX                         = 5

};


// Enum  Solarland.EShopModelAnimType
enum class EShopModelAnimType : uint8_t
{
    Idle                                           = 0,
    Upgrade                                        = 1,
    Purchase                                       = 2,
    EShopModelAnimType_MAX                         = 3

};


// Enum  Solarland.ESpringRewardLimitType
enum class ESpringRewardLimitType : uint8_t
{
    NoLimit                                        = 0,
    ShieldLevel                                    = 1,
    CharacterLevel                                 = 2,
    GoldWeaponNum                                  = 3,
    EmptyPartSlotNum                               = 4,
    ESpringRewardLimitType_MAX                     = 5

};


// Enum  Solarland.EExpSpringPointState
enum class EExpSpringPointState : uint8_t
{
    PreOpen                                        = 0,
    Opening                                        = 1,
    Actived                                        = 2,
    Closed                                         = 3,
    EExpSpringPointState_MAX                       = 4

};


// Enum  Solarland.EExpSpringPointCloseResult
enum class EExpSpringPointCloseResult : uint8_t
{
    NobodyActive                                   = 0,
    NoActive                                       = 1,
    Actived                                        = 2,
    Force                                          = 3,
    EExpSpringPointCloseResult_MAX                 = 4

};


// Enum  Solarland.ESolarExpSpringChestLevel
enum class ESolarExpSpringChestLevel : uint8_t
{
    None                                           = 0,
    Level1                                         = 1,
    Level2                                         = 2,
    Level3                                         = 3,
    ESolarExpSpringChestLevel_MAX                  = 4

};


// Enum  Solarland.EFocusLockType
enum class EFocusLockType : uint8_t
{
    Enemy                                          = 0,
    Teammate                                       = 1,
    Custom                                         = 2,
    EFocusLockType_MAX                             = 3

};


// Enum  Solarland.AIVehicleState
enum class AIVehicleState : uint8_t
{
    AIVehicleState_Forward                         = 0,
    AIVehicleState_ReverseSolveBlock               = 1,
    AIVehicleState_SolveBlockFoward                = 2,
    AIVehicleState_ReverseToTarget                 = 3,
    AIVehicleState_MAX                             = 4

};


// Enum  Solarland.EAntiCheatReportType
enum class EAntiCheatReportType : uint8_t
{
    Player                                         = 0,
    Weapon                                         = 1,
    Vehicle                                        = 2,
    EAntiCheatReportType_MAX                       = 3

};


// Enum  Solarland.EActiveEffectDurationChangeProxy
enum class EActiveEffectDurationChangeProxy : uint8_t
{
    MaintainCurrent                                = 0,
    MaintainRemain                                 = 1,
    ScalingCurrent                                 = 2,
    EActiveEffectDurationChangeProxy_MAX           = 3

};


// Enum  Solarland.ESolarGAInputID
enum class ESolarGAInputID : uint8_t
{
    None                                           = 0,
    Jump                                           = 1,
    Crouch                                         = 2,
    Sprint                                         = 3,
    JetVertical                                    = 4,
    JetHorizontal                                  = 5,
    Parachute                                      = 6,
    SkydiveAccelerate                              = 7,
    Fire                                           = 8,
    OutVehicle                                     = 9,
    SkillTest                                      = 10,
    RoleSkillOne                                   = 11,
    RoleSkillTwo                                   = 12,
    ESolarGAInputID_MAX                            = 13

};


// Enum  Solarland.ELogChannel
enum class ELogChannel : uint8_t
{
    General                                        = 0,
    Mode                                           = 1,
    Hunt                                           = 2,
    BattleRoyal                                    = 3,
    Weapon                                         = 4,
    Character                                      = 5,
    Vehicle                                        = 6,
    Camera                                         = 7,
    Animation                                      = 8,
    Physics                                        = 9,
    Inventory                                      = 10,
    World                                          = 11,
    ELogChannel_MAX                                = 12

};


// Enum  Solarland.ESolarGameUserSettingPart
enum class ESolarGameUserSettingPart : uint8_t
{
    PickupSettings                                 = 0,
    GraphicsSettings                               = 1,
    WeaponSettings                                 = 2,
    LanguageSettings                               = 3,
    SoundSettings                                  = 4,
    BasicSettings                                  = 5,
    PersonalitySettings                            = 6,
    SensitivitySettings                            = 7,
    ShakeSettings                                  = 8,
    DriverSettings                                 = 9,
    ChatOperatorSettings                           = 10,
    SensitivitySettingsKeyboard                    = 11,
    SensitivitySettingsGamepad                     = 12,
    KeyboardControlSettings                        = 13,
    GamepadSettings                                = 14,
    GamepadAdvancedSettings                        = 15,
    RtcBattleGroundSettings                        = 16,
    PickupSettingsPC                               = 17,
    VaultSettings                                  = 18,
    All                                            = 19,
    ESolarGameUserSettingPart_MAX                  = 20

};


// Enum  Solarland.ESolarColorBlindMode
enum class ESolarColorBlindMode : uint8_t
{
    Default                                        = 0,
    RedGreen                                       = 1,
    RedBlue                                        = 2,
    YellowGreen                                    = 3,
    ESolarColorBlindMode_MAX                       = 4

};


// Enum  Solarland.ESolarPostProcessingEffectsLevel
enum class ESolarPostProcessingEffectsLevel : uint8_t
{
    Default                                        = 0,
    Low                                            = 1,
    Medium                                         = 2,
    High                                           = 3,
    ExtraHigh                                      = 4,
    ESolarPostProcessingEffectsLevel_MAX           = 5

};


// Enum  Solarland.ESolarPointLightShadowDetailsLevel
enum class ESolarPointLightShadowDetailsLevel : uint8_t
{
    Off                                            = 0,
    Low                                            = 1,
    Medium                                         = 2,
    High                                           = 3,
    VeryHigh                                       = 4,
    ExtraHigh                                      = 5,
    ESolarPointLightShadowDetailsLevel_MAX         = 6

};


// Enum  Solarland.ESolarRayTracingLevel
enum class ESolarRayTracingLevel : uint8_t
{
    Off                                            = 0,
    HighPerformance                                = 1,
    HighQuality                                    = 2,
    ESolarRayTracingLevel_MAX                      = 3

};


// Enum  Solarland.ESolarNvdiaReflexLevel
enum class ESolarNvdiaReflexLevel : uint8_t
{
    Off                                            = 0,
    On                                             = 1,
    High                                           = 2,
    ESolarNvdiaReflexLevel_MAX                     = 3

};


// Enum  Solarland.ESolarGraphicQuality
enum class ESolarGraphicQuality : uint8_t
{
    Default                                        = 0,
    Low                                            = 1,
    Medium                                         = 2,
    High                                           = 3,
    ESolarGraphicQuality_MAX                       = 4

};


// Enum  Solarland.ESolarFPS
enum class ESolarFPS : uint8_t
{
    Default                                        = 0,
    FPS30                                          = 1,
    FPS60                                          = 2,
    FPS90                                          = 3,
    FPS120                                         = 4,
    FPS144                                         = 5,
    FPS240                                         = 6,
    FPS360                                         = 7,
    FPS500                                         = 8,
    SameWithMonitor                                = 9,
    ESolarFPS_MAX                                  = 10

};


// Enum  Solarland.ESolarGraphicsMode
enum class ESolarGraphicsMode : uint8_t
{
    Default                                        = 0,
    HighPerformance                                = 1,
    HighQuality                                    = 2,
    ESolarGraphicsMode_MAX                         = 3

};


// Enum  Solarland.ESolarAimModeType
enum class ESolarAimModeType : uint8_t
{
    Default                                        = 0,
    Change                                         = 1,
    Press                                          = 2,
    ESolarAimModeType_MAX                          = 3

};


// Enum  Solarland.ESolarContentScaleFactorLevel
enum class ESolarContentScaleFactorLevel : uint8_t
{
    ESCSFL_NONE                                    = 0,
    ESCSFL_Low                                     = 1,
    ESCSFL_Mid                                     = 2,
    ESCSFL_High                                    = 3,
    ESCSFL_HighEnd                                 = 4,
    ESCSFL_MAX                                     = 5

};


// Enum  Solarland.EHoverCraftHitType
enum class EHoverCraftHitType : uint8_t
{
    Default                                        = 0,
    HoverCraftVehicle                              = 1,
    HoverVehicle                                   = 2,
    LeggedVehicle                                  = 3,
    WheeledVehicle                                 = 4,
    EHoverCraftHitType_MAX                         = 5

};


// Enum  Solarland.EInputKeyMappingType
enum class EInputKeyMappingType : uint8_t
{
    KeyAndMouse1                                   = 0,
    KeyAndMouse2                                   = 1,
    Gamepad                                        = 2,
    Count                                          = 3,
    EInputKeyMappingType_MAX                       = 4

};


// Enum  Solarland.EInputActionContextType
enum class EInputActionContextType : uint8_t
{
    Pawn                                           = 0,
    Controller                                     = 1,
    LevelScriptActor                               = 2,
    UserWidget                                     = 3,
    Count                                          = 4,
    EInputActionContextType_MAX                    = 5

};


// Enum  Solarland.EInputActionFlags
enum class EInputActionFlags : uint8_t
{
    None                                           = 0,
    FlagBigMap                                     = 1,
    FlagBackpack                                   = 2,
    FlagChatWheel                                  = 3,
    FlagParachute                                  = 4,
    FlagSpectate                                   = 5,
    FlagTeamDeath                                  = 6,
    FlagRelive                                     = 7,
    FlagBlockAll                                   = 31,
    FlagMax                                        = 32,
    EInputActionFlags_MAX                          = 33

};


// Enum  Solarland.ESolarInputContextType
enum class ESolarInputContextType : uint8_t
{
    MouseAndKeyboard                               = 0,
    Gamepad                                        = 1,
    Count                                          = 2,
    ESolarInputContextType_MAX                     = 3

};


// Enum  Solarland.ESolarInteractionType
enum class ESolarInteractionType : uint8_t
{
    Invalid                                        = 0,
    RescueTeammate                                 = 1,
    ReviveTeammate                                 = 2,
    OpenAirdrop                                    = 3,
    ESolarInteractionType_MAX                      = 4

};


// Enum  Solarland.EInteractiveKeyState
enum class EInteractiveKeyState : uint8_t
{
    None                                           = 0,
    UnArm                                          = 1,
    EquipGun                                       = 2,
    InVehicle                                      = 3,
    OpenScope                                      = 4,
    Holding                                        = 5,
    Swimming                                       = 6,
    FollowFly                                      = 7,
    SingleOrDirectFly                              = 8,
    Cruise                                         = 9,
    SupperSkillUI                                  = 10,
    LowHP                                          = 11,
    DeathVerge                                     = 12,
    Dead                                           = 13,
    Max                                            = 14

};


// Enum  Solarland.ESolarItemPrivilegeType
enum class ESolarItemPrivilegeType : uint8_t
{
    NONE                                           = 0,
    NETBAR                                         = 1,
    ESolarItemPrivilegeType_MAX                    = 2

};


// Enum  Solarland.ESolarItemShowType
enum class ESolarItemShowType : uint8_t
{
    NOTSHOW                                        = 0,
    SHOW                                           = 1,
    ESolarItemShowType_MAX                         = 2

};


// Enum  Solarland.ESolarRedHintType
enum class ESolarRedHintType : uint8_t
{
    ZERO                                           = 0,
    SHOW                                           = 1,
    HIDE                                           = 2,
    ESolarRedHintType_MAX                          = 3

};


// Enum  Solarland.ESolarItemOwnType
enum class ESolarItemOwnType : uint8_t
{
    ZERO                                           = 0,
    NOOWN                                          = 1,
    OWN                                            = 2,
    ESolarItemOwnType_MAX                          = 3

};


// Enum  Solarland.ESolarItemBuyType
enum class ESolarItemBuyType : uint8_t
{
    ZERO                                           = 0,
    NOBUY                                          = 1,
    BUY                                            = 2,
    CANTBUY                                        = 3,
    ESolarItemBuyType_MAX                          = 4

};


// Enum  Solarland.ESolarItemUseType
enum class ESolarItemUseType : uint8_t
{
    ZERO                                           = 0,
    NOUSE                                          = 1,
    USING                                          = 2,
    ESolarItemUseType_MAX                          = 3

};


// Enum  Solarland.ESolarItemLimitType
enum class ESolarItemLimitType : uint8_t
{
    ZERO                                           = 0,
    NOLIMIT                                        = 1,
    LIMITING                                       = 2,
    ESolarItemLimitType_MAX                        = 3

};


// Enum  Solarland.ESolarItemMarkType
enum class ESolarItemMarkType : uint8_t
{
    ZERO                                           = 0,
    NOMARK                                         = 1,
    MARKED                                         = 2,
    ESolarItemMarkType_MAX                         = 3

};


// Enum  Solarland.ESolarItemDownloadType
enum class ESolarItemDownloadType : uint8_t
{
    ZERO                                           = 0,
    NOTDOWNLOAD                                    = 1,
    DOWNLOADING                                    = 2,
    DOWNLOADED                                     = 3,
    PAUSING                                        = 4,
    ESolarItemDownloadType_MAX                     = 5

};


// Enum  Solarland.ESolarItemLockType
enum class ESolarItemLockType : uint8_t
{
    ZERO                                           = 0,
    NOLOCK                                         = 1,
    LOCKED                                         = 2,
    TEMPUNLOCK                                     = 3,
    ESolarItemLockType_MAX                         = 4

};


// Enum  Solarland.ESolarItemSelectType
enum class ESolarItemSelectType : uint8_t
{
    ZERO                                           = 0,
    NOTSELECT                                      = 1,
    SELECTED                                       = 2,
    ESolarItemSelectType_MAX                       = 3

};


// Enum  Solarland.ESolarItemQualityType
enum class ESolarItemQualityType : uint8_t
{
    ZERO                                           = 0,
    N                                              = 1,
    R                                              = 2,
    SR                                             = 3,
    SSR                                            = 4,
    SSRPLUS                                        = 5,
    MR                                             = 6,
    ESolarItemQualityType_MAX                      = 7

};


// Enum  Solarland.EBurstMethod
enum class EBurstMethod : uint8_t
{
    ParabCurveFitting                              = 0,
    GoldenSpiral                                   = 1,
    EBurstMethod_MAX                               = 2

};


// Enum  Solarland.EItemConfirmID
enum class EItemConfirmID : uint32_t
{
    DropExtraEnergyConfirmID                       = 110003,
    ReplaceExtraEnergyConfirmID                    = 110004,
    DropEnergyModuleConfirmID                      = 110007,
    ReplaceEnergyModuleConfirmID                   = 110008,
    EItemConfirmID_MAX                             = 110009

};


// Enum  Solarland.EItemLocalTextID
enum class EItemLocalTextID : uint8_t
{
    LevelNumTextID                                 = 40,
    EItemLocalTextID_MAX                           = 41

};


// Enum  Solarland.EItemNoticeID
enum class EItemNoticeID : uint32_t
{
    BoxBeUsing                                     = 900016,
    CantEquipThisScope                             = 900080,
    CantEquipThisPart                              = 900081,
    WillEquipLowLevelScope                         = 900082,
    WillEquipLowLevelPart                          = 900083,
    HasBetterPart                                  = 900084,
    HasBetterScope                                 = 900085,
    GetItem                                        = 900003,
    EquipReplace                                   = 900091,
    DropItemNotAutoPickup                          = 900094,
    ItemMaxPile                                    = 900095,
    ReviveItemMaxPile                              = 900104,
    CantPickupReviveItem                           = 900105,
    EItemNoticeID_MAX                              = 900106

};


// Enum  Solarland.ESpawnStage
enum class ESpawnStage : uint8_t
{
    STAGE_NONE                                     = 0,
    STAGE_READY                                    = 1,
    STAGE_BATTLE                                   = 2,
    STAGE_ALL                                      = 3,
    STAGE_MAX                                      = 4

};


// Enum  Solarland.EOutcomeType
enum class EOutcomeType : uint8_t
{
    None                                           = 0,
    Single                                         = 1,
    Pool                                           = 2,
    DynamicPool                                    = 3,
    EOutcomeType_MAX                               = 4

};


// Enum  Solarland.EItemSourceType
enum class EItemSourceType : uint8_t
{
    None                                           = 0,
    DeathTreasureBox                               = 1,
    TreasureBox                                    = 2,
    AirDropTreasureBox                             = 3,
    TacticalTreasureBox                            = 4,
    Max                                            = 5

};


// Enum  Solarland.EItemDiscardState
enum class EItemDiscardState : uint8_t
{
    EItemDiscardState_DEFAULT                      = 0,
    EItemDiscardState_DEATHBOX                     = 1,
    EItemDiscardState_MAX                          = 2

};


// Enum  Solarland.EItemState
enum class EItemState : uint8_t
{
    EItemState_NONE                                = 0,
    EItemState_POSSESS                             = 1,
    EItemState_DISCARD                             = 2,
    EItemState_MAX                                 = 3

};


// Enum  Solarland.ETreasureBoxSpawnType
enum class ETreasureBoxSpawnType : uint8_t
{
    SingleRandom                                   = 0,
    Group                                          = 1,
    ETreasureBoxSpawnType_MAX                      = 2

};


// Enum  Solarland.ESpawnerLevel
enum class ESpawnerLevel : uint8_t
{
    LEVEL                                          = 0,
    LEVEL                                          = 1,
    LEVEL                                          = 2,
    LEVEL                                          = 3,
    LEVEL_MAX                                      = 4

};


// Enum  Solarland.ESpawnerType
enum class ESpawnerType : uint8_t
{
    NONE                                           = 0,
    NORMAL                                         = 1,
    TREASUREBOX                                    = 2,
    AIRDROP                                        = 3,
    VEHICLE                                        = 4,
    TACTICALBOX                                    = 5,
    MISSIONSPAWNER                                 = 6,
    SLOTMACHINE                                    = 7,
    ESpawnerType_MAX                               = 8

};


// Enum  Solarland.ELayoutDataType
enum class ELayoutDataType : uint8_t
{
    Invalid                                        = 0,
    Mobile                                         = 1,
    Desktop                                        = 2,
    ELayoutDataType_MAX                            = 3

};


// Enum  Solarland.EWalkingDirection
enum class EWalkingDirection : uint8_t
{
    None                                           = 0,
    Forward                                        = 1,
    Backward                                       = 2,
    Left                                           = 4,
    Right                                          = 8,
    EWalkingDirection_MAX                          = 9

};


// Enum  Solarland.EVehicleShrinkCapsuleExtent
enum class EVehicleShrinkCapsuleExtent : uint8_t
{
    SHRINK_None                                    = 0,
    SHRINK_RadiusCustom                            = 1,
    SHRINK_HeightCustom                            = 2,
    SHRINK_AllCustom                               = 3,
    SHRINK_MAX                                     = 4

};


// Enum  Solarland.EVehicleLocomotionState
enum class EVehicleLocomotionState : uint8_t
{
    Walk                                           = 0,
    Run                                            = 1,
    Sprint                                         = 2,
    Max                                            = 3

};


// Enum  Solarland.ESolarBuildConfiguration
enum class ESolarBuildConfiguration : uint8_t
{
    Unknown                                        = 0,
    Debug                                          = 1,
    Development                                    = 2,
    Shipping                                       = 3,
    Test                                           = 4,
    ESolarBuildConfiguration_MAX                   = 5

};


// Enum  Solarland.EElementVisibilityType
enum class EElementVisibilityType : uint8_t
{
    Visible                                        = 0,
    Hidden                                         = 1,
    EElementVisibilityType_MAX                     = 2

};


// Enum  Solarland.EElementStateType
enum class EElementStateType : uint8_t
{
    Normal                                         = 0,
    Suspend                                        = 1,
    EElementStateType_MAX                          = 2

};


// Enum  Solarland.ESolarMapElementPropertyType
enum class ESolarMapElementPropertyType : uint8_t
{
    String                                         = 0,
    Float                                          = 1,
    Int                                            = 2,
    Bool                                           = 3,
    ESolarMapElementPropertyType_MAX               = 4

};


// Enum  Solarland.ESGameMode_ElementType
enum class ESGameMode_ElementType : uint8_t
{
    PlayerStart                                    = 0,
    ItemSpawner                                    = 1,
    AirDrop                                        = 2,
    ChargingPile                                   = 3,
    JumpPad                                        = 4,
    CarPad                                         = 5,
    Vehicle                                        = 6,
    Poison                                         = 7,
    Custom                                         = 8,
    ESGameMode_MAX                                 = 9

};


// Enum  Solarland.EMapType
enum class EMapType : uint8_t
{
    Default                                        = 0,
    Map01                                          = 1,
    Map02                                          = 2,
    Map03                                          = 3,
    TDM01                                          = 4,
    TDM02                                          = 5,
    Solo                                           = 6,
    TrainingCourse                                 = 7,
    Tutorial                                       = 8,
    EMapType_MAX                                   = 9

};


// Enum  Solarland.EBattlePromptType
enum class EBattlePromptType : uint8_t
{
    None                                           = 0,
    Player                                         = 1,
    Vehicle                                        = 4,
    Move                                           = 8,
    Fire                                           = 16,
    HeavyWeapon                                    = 32,
    Crouch                                         = 64,
    Skydive                                        = 128,
    PlayerStep                                     = 9,
    VehicleMove                                    = 12,
    PlayerCrouchMove                               = 73,
    PlayerSkydive                                  = 137,
    PlayerFire                                     = 17,
    VehicleFire                                    = 20,
    PlayerHeavyFire                                = 49,
    VehicleHeavyFire                               = 52,
    EBattlePromptType_MAX                          = 138

};


// Enum  Solarland.EMeshWidgetVisibilityOption
enum class EMeshWidgetVisibilityOption : uint8_t
{
    MiniMapOnly                                    = 0,
    BigMapOnly                                     = 1,
    All                                            = 2,
    EMeshWidgetVisibilityOption_MAX                = 3

};


// Enum  Solarland.EMeshWidgetDisplayType
enum class EMeshWidgetDisplayType : uint8_t
{
    Icon                                           = 0,
    Flash                                          = 1,
    Diffuse                                        = 2,
    EMeshWidgetDisplayType_MAX                     = 3

};


// Enum  Solarland.EReviveMarkStatus
enum class EReviveMarkStatus : uint8_t
{
    Normal                                         = 0,
    Playing                                        = 1,
    EReviveMarkStatus_MAX                          = 2

};


// Enum  Solarland.EAirdropMarkStatus
enum class EAirdropMarkStatus : uint8_t
{
    Default                                        = 0,
    Coming                                         = 1,
    Available                                      = 2,
    Opening                                        = 3,
    Opened                                         = 4,
    EAirdropMarkStatus_MAX                         = 5

};


// Enum  Solarland.EMarkerType
enum class EMarkerType : uint8_t
{
    None                                           = 0,
    AirDrop                                        = 1,
    RedZone                                        = 2,
    VehicleMark                                    = 3,
    ShieldUpgradeShop                              = 4,
    ReviveTeammate                                 = 5,
    BlueCircle                                     = 6,
    ExpSpring                                      = 7,
    EnemyFire                                      = 8,
    AIDog                                          = 9,
    SummonOwl                                      = 10,
    Doppelganger                                   = 11,
    SuperDoppelganger                              = 12,
    VehicleSpawn                                   = 13,
    SummonActorCircle                              = 14,
    WorldMarkIcon                                  = 15,
    HellStrikeCaster                               = 16,
    WorldMarkIconBG                                = 17,
    NeutralMonster                                 = 18,
    RespawnDevice                                  = 19,
    TacticalBox                                    = 20,
    TrapMine                                       = 21,
    EMarkerType_MAX                                = 22

};


// Enum  Solarland.EMapObjectPointType
enum class EMapObjectPointType : uint8_t
{
    None                                           = 0,
    ShieldShop                                     = 1,
    KongMingLantern                                = 2,
    EMapObjectPointType_MAX                        = 3

};


// Enum  Solarland.EMissionEndType
enum class EMissionEndType : uint8_t
{
    InProgress                                     = 0,
    Completed                                      = 1,
    Faild                                          = 2,
    PlayerAllDead                                  = 3,
    TimeOut                                        = 4,
    MissTarget                                     = 5,
    EMissionEndType_MAX                            = 6

};


// Enum  Solarland.EMissionSpawnType
enum class EMissionSpawnType : uint8_t
{
    AcceptForAll                                   = 0,
    AcceptForSelf                                  = 1,
    EMissionSpawnType_MAX                          = 2

};


// Enum  Solarland.EMissionContent
enum class EMissionContent : uint8_t
{
    Chest                                          = 0,
    Worship                                        = 1,
    MULTIPLE_TASK_MAX                              = 2,
    Pursuit                                        = 3,
    TASK_MAX                                       = 4,
    Escape                                         = 5,
    None                                           = 6,
    EMissionContent_MAX                            = 7

};


// Enum  Solarland.EMissionType
enum class EMissionType : uint8_t
{
    NonHUD                                         = 0,
    Explore                                        = 1,
    Battle                                         = 2,
    Survive                                        = 3,
    EMissionType_MAX                               = 4

};


// Enum  Solarland.EMissionOwner
enum class EMissionOwner : uint8_t
{
    Personal                                       = 0,
    Teams                                          = 1,
    None                                           = 2,
    EMissionOwner_MAX                              = 3

};


// Enum  Solarland.EMonsterVisualNotice
enum class EMonsterVisualNotice : uint8_t
{
    Suspicion                                      = 0,
    Alarm                                          = 1,
    EMonsterVisualNotice_MAX                       = 2

};


// Enum  Solarland.ESolarMonsterBehaviorState
enum class ESolarMonsterBehaviorState : uint8_t
{
    None                                           = 0,
    Patrol                                         = 1,
    Alert                                          = 2,
    Battle                                         = 3,
    BackToBase                                     = 4,
    ESolarMonsterBehaviorState_MAX                 = 5

};


// Enum  Solarland.ENavLinkType
enum class ENavLinkType : uint8_t
{
    Jet                                            = 0,
    Vault                                          = 1,
    Zipline                                        = 2,
    WallRun                                        = 3,
    None                                           = 4,
    ENavLinkType_MAX                               = 5

};


// Enum  Solarland.EOwnerType
enum class EOwnerType : uint8_t
{
    None                                           = 0,
    Vehicle                                        = 1,
    TreasureBox                                    = 2,
    EOwnerType_MAX                                 = 3

};


// Enum  Solarland.EWeedType
enum class EWeedType : uint8_t
{
    ValidMark                                      = 0,
    InvalidMark                                    = 1,
    AutoGenerateMark                               = 2,
    EWeedType_MAX                                  = 3

};


// Enum  Solarland.ERestState
enum class ERestState : uint8_t
{
    AT_REST                                        = 0,
    JUST_STARTED_MOVING                            = 1,
    MOVING                                         = 2,
    ERestState_MAX                                 = 3

};


// Enum  Solarland.EExtrapolationMode
enum class EExtrapolationMode : uint8_t
{
    UNLIMITED                                      = 0,
    LIMITED                                        = 1,
    NONE                                           = 2,
    EExtrapolationMode_MAX                         = 3

};


// Enum  Solarland.ESyncMode
enum class ESyncMode : uint8_t
{
    NONE                                           = 0,
    X                                              = 1,
    Y                                              = 2,
    Z                                              = 4,
    XY                                             = 3,
    XZ                                             = 5,
    YZ                                             = 6,
    XYZ                                            = 7,
    ESyncMode_MAX                                  = 8

};


// Enum  Solarland.ENightComesState
enum class ENightComesState : uint8_t
{
    None                                           = 0,
    Begin                                          = 1,
    Ongoing                                        = 2,
    End                                            = 3,
    ENightComesState_MAX                           = 4

};


// Enum  Solarland.EPerceivableEffectAreaTendency
enum class EPerceivableEffectAreaTendency : uint8_t
{
    Hostile                                        = 0,
    Neutral                                        = 1,
    Friendly                                       = 2,
    EPerceivableEffectAreaTendency_MAX             = 3

};


// Enum  Solarland.EPerceivableEffectAreaType
enum class EPerceivableEffectAreaType : uint8_t
{
    Unknow                                         = 0,
    SmokeGrenade                                   = 1,
    NightCome                                      = 2,
    AutomaticTurret                                = 3,
    AIDog                                          = 4,
    BlackHole                                      = 5,
    Incendiary                                     = 6,
    EnergyBubble                                   = 7,
    SummonWall                                     = 8,
    UAVShield                                      = 9,
    UAVRescue                                      = 10,
    HealPile                                       = 11,
    Doppelganger                                   = 12,
    EPerceivableEffectAreaType_MAX                 = 13

};


// Enum  Solarland.EPickupListItemType
enum class EPickupListItemType : uint8_t
{
    None                                           = 0,
    Single                                         = 1,
    Merge                                          = 2,
    Customize                                      = 3,
    EPickupListItemType_MAX                        = 4

};


// Enum  Solarland.EPickupListChangeReason
enum class EPickupListChangeReason : uint8_t
{
    Default                                        = 0,
    Backpack                                       = 1,
    Skill                                          = 2,
    Weapon                                         = 3,
    EPickupListChangeReason_MAX                    = 4

};


// Enum  Solarland.ESolarPileType
enum class ESolarPileType : uint8_t
{
    ChargingPile                                   = 0,
    HealPile                                       = 1,
    ESolarPileType_MAX                             = 2

};


// Enum  Solarland.EChargingChannel
enum class EChargingChannel : uint8_t
{
    MAIN                                           = 0,
    EXTRA                                          = 1,
    EChargingChannel_MAX                           = 2

};


// Enum  Solarland.EPileHealingType
enum class EPileHealingType : uint8_t
{
    None                                           = 0,
    Health                                         = 1,
    Armor                                          = 2,
    EPileHealingType_MAX                           = 3

};


// Enum  Solarland.ELevelTickType
enum class ELevelTickType : uint8_t
{
    LEVELTICK_TimeOnly                             = 0,
    LEVELTICK_ViewportsOnly                        = 1,
    LEVELTICK_All                                  = 2,
    LEVELTICK_PauseTick                            = 3,
    LEVELTICK_MAX                                  = 4

};


// Enum  Solarland.ESolarEigenvalueCollectorMode
enum class ESolarEigenvalueCollectorMode : uint8_t
{
    NoRecord                                       = 0,
    GlobalRecord                                   = 1,
    TargetRecord                                   = 2,
    ESolarEigenvalueCollectorMode_MAX              = 3

};


// Enum  Solarland.EEVDamageType
enum class EEVDamageType : uint8_t
{
    Unknown                                        = 0,
    Weapon                                         = 1,
    Skill                                          = 2,
    Vehicle                                        = 3,
    Punch                                          = 4,
    EEVDamageType_MAX                              = 5

};


// Enum  Solarland.EInteractiveFlag
enum class EInteractiveFlag : uint8_t
{
    None                                           = 0,
    DanceLearder                                   = 1,
    EInteractiveFlag_MAX                           = 2

};


// Enum  Solarland.ESolarPlayerSensitivitysType
enum class ESolarPlayerSensitivitysType : uint8_t
{
    None                                           = 0,
    HoldWeaponSensitivity                          = 1,
    WeaponShootSensitivity                         = 2,
    WeaponShoulderNoShotSensitivity                = 3,
    WeaponShoulderShotSensitivity                  = 4,
    WeaponSkillSensitivity                         = 5,
    SightSensitivity                               = 6,
    ScopeSensitivity                               = 7,
    ScopeShootSensitivity                          = 8,
    VehicleDriverSensitivity                       = 9,
    VehicleFireSensitivity                         = 10,
    SuperSkillSensitivity                          = 11,
    TacticalSkillSensitivity                       = 12,
    ESolarPlayerSensitivitysType_MAX               = 13

};


// Enum  Solarland.ECharacterOwnerType
enum class ECharacterOwnerType : uint8_t
{
    CSITNone                                       = 0,
    CSITOwn                                        = 1,
    CSITExperience                                 = 2,
    CSITLimit                                      = 4,
    CSITPrivilege                                  = 8,
    ECharacterOwnerType_MAX                        = 9

};


// Enum  Solarland.EGainEXPFromDmgType
enum class EGainEXPFromDmgType : uint8_t
{
    None                                           = 0,
    DmgToCharacter                                 = 1,
    DmgToVehicle                                   = 2,
    DmgToSummon                                    = 3,
    EGainEXPFromDmgType_MAX                        = 4

};


// Enum  Solarland.EWeaponAttributeParamType
enum class EWeaponAttributeParamType : uint8_t
{
    Base                                           = 0,
    BonusA                                         = 1,
    BonusB                                         = 2,
    EWeaponAttributeParamType_MAX                  = 3

};


// Enum  Solarland.EWeaponAttributeType
enum class EWeaponAttributeType : uint8_t
{
    HoriRecoilFixed                                = 0,
    HoriRecoilRandom                               = 1,
    VertRecoilFixed                                = 2,
    VertRecoilRandom                               = 3,
    HoriSpreadBase                                 = 4,
    HoriSpreadIncrement                            = 5,
    VertSpreadBase                                 = 6,
    VertSpreadIncrement                            = 7,
    ExtraClipAmmo                                  = 8,
    ReloadSpeed                                    = 9,
    AdsEnterSpeed                                  = 10,
    EWeaponAttributeType_MAX                       = 11

};


// Enum  Solarland.EPlayerWeaponEquipStatus
enum class EPlayerWeaponEquipStatus : uint8_t
{
    None                                           = 0,
    Holding                                        = 1,
    PendingToHang                                  = 2,
    Hanging                                        = 3,
    EPlayerWeaponEquipStatus_MAX                   = 4

};


// Enum  Solarland.EPreservedBotType
enum class EPreservedBotType : uint8_t
{
    PendingInit                                    = 0,
    OnCall                                         = 1,
    WaitingForSend                                 = 2,
    Killer                                         = 3,
    WaitingToDie                                   = 4,
    EPreservedBotType_MAX                          = 5

};


// Enum  Solarland.ESolarProjBulletCollisionType
enum class ESolarProjBulletCollisionType : uint8_t
{
    Shape                                          = 0,
    Box                                            = 1,
    ESolarProjBulletCollisionType_MAX              = 2

};


// Enum  Solarland.ESkillProjectileBounceType
enum class ESkillProjectileBounceType : uint8_t
{
    Default                                        = 0,
    AngleAndCount                                  = 1,
    StopOnActor                                    = 2,
    OnlyBounceOnActor                              = 3,
    ESkillProjectileBounceType_MAX                 = 4

};


// Enum  Solarland.ERadarShape
enum class ERadarShape : uint8_t
{
    Sphere                                         = 0,
    Box                                            = 1,
    Sphere3D                                       = 2,
    ERadarShape_MAX                                = 3

};


// Enum  Solarland.ERedHintPath
enum class ERedHintPath : uint8_t
{
    None                                           = 0,
    Root                                           = 1,
    Social                                         = 2,
    Arsenal                                        = 3,
    Arsenal_Weapon                                 = 4,
    Arsenal_Skin                                   = 5,
    Arsenal_Part                                   = 6,
    Shop                                           = 7,
    Mail                                           = 8,
    Capsulers                                      = 9,
    Capsulers_Detail                               = 10,
    Capsulers_Story                                = 11,
    Capsulers_Skin                                 = 12,
    Capsulers_LevelUp                              = 13,
    Capsulers_Pose                                 = 14,
    Capsulers_PoseTab                              = 15,
    Capsulers_BG                                   = 16,
    Capsulers_BGTab                                = 17,
    Capsulers_BGFrame                              = 18,
    Capsulers_BGFrameTab                           = 19,
    Capsulers_DeathBox                             = 20,
    Capsulers_DeathBoxTab                          = 21,
    Capsulers_Voice                                = 22,
    Capsulers_VoiceKillVoice                       = 23,
    Capsulers_VoiceTeamDie                         = 24,
    Capsulers_VoiceTopKill                         = 25,
    Capsulers_VoiceParachute                       = 26,
    Capsulers_VoiceBattleTab                       = 27,
    Capsulers_VoicePersonalityTab                  = 28,
    Capsulers_VoiceTab                             = 29,
    WareHouse                                      = 30,
    Task                                           = 31,
    Activity                                       = 32,
    RankFight                                      = 33,
    Achievement                                    = 34,
    EditBusinessCard                               = 35,
    PlayerInfo                                     = 36,
    GameMode                                       = 37,
    Raffle                                         = 38,
    Vehicle                                        = 39,
    Vehicle_Skin                                   = 40,
    Clan                                           = 41,
    ClanPermission                                 = 42,
    Collection                                     = 43,
    Tournament                                     = 44,
    VipCard                                        = 45,
    ClanMember                                     = 46,
    Max                                            = 47,
    BattlePass                                     = 48

};


// Enum  Solarland.ERedHintValueType
enum class ERedHintValueType : uint8_t
{
    Single                                         = 0,
    MultiValue                                     = 1,
    ERedHintValueType_MAX                          = 2

};


// Enum  Solarland.ECharacterSkydivingState
enum class ECharacterSkydivingState : uint8_t
{
    EveryBattle                                    = 0,
    Flying                                         = 1,
    Skydiving                                      = 2,
    Landing                                        = 3,
    Num                                            = 4,
    ECharacterSkydivingState_MAX                   = 5

};


// Enum  Solarland.EReplayDamageSourceType
enum class EReplayDamageSourceType : uint8_t
{
    None                                           = 0,
    Weapon                                         = 1,
    Vehicle                                        = 2,
    Skill                                          = 3,
    EReplayDamageSourceType_MAX                    = 4

};


// Enum  Solarland.EAutoDirectorActivityType
enum class EAutoDirectorActivityType : uint8_t
{
    None                                           = 0,
    PlayerWeaponHit                                = 1,
    PlayerWeaponDown                               = 2,
    PlayerWeaponKill                               = 3,
    PickupItem                                     = 4,
    DriveVehicle                                   = 5,
    VehicleWeaponHit                               = 6,
    VehicleWeaponDown                              = 7,
    VehicleWeaponKill                              = 8,
    BandagePlayer                                  = 9,
    RevivePlayer                                   = 10,
    UseTacticalAbility                             = 11,
    UseUltimateAbility                             = 12,
    AbilityDown                                    = 13,
    AbilityKill                                    = 14,
    StartSkydive                                   = 15,
    EAutoDirectorActivityType_MAX                  = 16

};


// Enum  Solarland.EAutoDirectorCameraMode
enum class EAutoDirectorCameraMode : uint8_t
{
    Free                                           = 0,
    Follow                                         = 1,
    EAutoDirectorCameraMode_MAX                    = 2

};


// Enum  Solarland.EReplayFindSpectateTargetApproach
enum class EReplayFindSpectateTargetApproach : uint8_t
{
    None                                           = 0,
    SuggestTarget                                  = 1,
    LastTarget                                     = 2,
    ClosestToCamera                                = 3,
    FirstInPlayerList                              = 4,
    EReplayFindSpectateTargetApproach_MAX          = 5

};


// Enum  Solarland.EPlayerHighlightMarkType
enum class EPlayerHighlightMarkType : uint8_t
{
    B                                              = 0,
    A                                              = 1,
    S                                              = 2,
    Ex                                             = 3,
    Max                                            = 4

};


// Enum  Solarland.EHighlightFileType
enum class EHighlightFileType : uint8_t
{
    Data                                           = 0,
    Flag                                           = 1,
    Keep                                           = 2,
    Playing                                        = 3,
    EHighlightFileType_MAX                         = 4

};


// Enum  Solarland.EPlayHighlightEntryType
enum class EPlayHighlightEntryType : uint8_t
{
    Settlement                                     = 0,
    HistoricalMatch                                = 1,
    TournamentList                                 = 2,
    CustomRoomList                                 = 3,
    EPlayHighlightEntryType_MAX                    = 4

};


// Enum  Solarland.EReplayPlayingFinishReason
enum class EReplayPlayingFinishReason : uint8_t
{
    Normal                                         = 0,
    GMForce                                        = 1,
    StreamerDownloadChunkTimeout                   = 2,
    StreamerServiceUnavailable                     = 3,
    EReplayPlayingFinishReason_MAX                 = 4

};


// Enum  Solarland.EReplayState
enum class EReplayState : uint8_t
{
    Idle                                           = 0,
    Recording                                      = 1,
    PlayingRequestAddress                          = 2,
    PlayingTryToStart                              = 3,
    PlayingStarted                                 = 4,
    PlayingLoadLevelsStarted                       = 5,
    PlayingLevelLoaded                             = 6,
    PlayingStreamReadied                           = 7,
    PlayingFirstScrubing                           = 8,
    Playing                                        = 9,
    PlayingAtEnd                                   = 10,
    EReplayState_MAX                               = 11

};


// Enum  Solarland.EClassRepNodeMapping
enum class EClassRepNodeMapping : uint8_t
{
    Missing                                        = 0,
    NotRouted                                      = 1,
    CustomRelevancy                                = 2,
    RelevantAllConnections                         = 3,
    RelevantAllConnections_Dormancy                = 4,
    RelevantAllConnections_FastShared              = 5,
    Spatialize_Static                              = 6,
    Spatialize_Dynamic                             = 7,
    Spatialize_Dormancy                            = 8,
    EClassRepNodeMapping_MAX                       = 9

};


// Enum  Solarland.EIncreaseAndDecreaseTransitionMode
enum class EIncreaseAndDecreaseTransitionMode : uint8_t
{
    Continuously                                   = 0,
    BreakAndKeepLast                               = 1,
    EIncreaseAndDecreaseTransitionMode_MAX         = 2

};


// Enum  Solarland.ESafeAreaNoticeType
enum class ESafeAreaNoticeType : uint8_t
{
    ThirtySecondsWarning                           = 0,
    TenSecondsWarning                              = 1,
    ESafeAreaNoticeType_MAX                        = 2

};


// Enum  Solarland.EActorInSafeAreaStatus
enum class EActorInSafeAreaStatus : uint8_t
{
    InSafeArea                                     = 0,
    NotInSafeArea                                  = 1,
    InTargetSafeArea                               = 2,
    EActorInSafeAreaStatus_MAX                     = 3

};


// Enum  Solarland.ESafeAreaStatus
enum class ESafeAreaStatus : uint8_t
{
    None                                           = 0,
    WaitingForStart                                = 1,
    WaitingForShrink                               = 2,
    Shrink                                         = 4,
    ShrinkEnd                                      = 8,
    Pause                                          = 16,
    End                                            = 32,
    Manual                                         = 64,
    NoEffect                                       = 33,
    ESafeAreaStatus_MAX                            = 65

};


// Enum  Solarland.ENeverShowDuration
enum class ENeverShowDuration : uint8_t
{
    Day                                            = 0,
    Week                                           = 1,
    Month                                          = 2,
    Year                                           = 3,
    Never                                          = 4,
    None                                           = 5,
    ENeverShowDuration_MAX                         = 6

};


// Enum  Solarland.ESettingSlotStyle
enum class ESettingSlotStyle : uint8_t
{
    Default                                        = 0,
    Toggle                                         = 1,
    CheckBox                                       = 2,
    Slider                                         = 3,
    JumpBtn                                        = 4,
    ESettingSlotStyle_MAX                          = 5

};


// Enum  Solarland.EShieldUpgradeItemShopState
enum class EShieldUpgradeItemShopState : uint8_t
{
    None                                           = 0,
    Upgrading                                      = 1,
    Done                                           = 2,
    EShieldUpgradeItemShopState_MAX                = 3

};


// Enum  Solarland.EParticleOptimization
enum class EParticleOptimization : uint8_t
{
    Origin                                         = 0,
    LowPriorityOptimization                        = 1,
    MidPriorityOptimization                        = 2,
    HighPriorityOptimization                       = 3,
    UltraHighPriorityOptimization                  = 4,
    EParticleOptimization_MAX                      = 5

};


// Enum  Solarland.EMovablePadLimitationFlag
enum class EMovablePadLimitationFlag : uint8_t
{
    None                                           = 0,
    NoPress                                        = 1,
    NoRelease                                      = 2,
    NoMove                                         = 4,
    NoPressAndRelease                              = 3,
    NoPressAndMove                                 = 5,
    NoReleaseAndMove                               = 6,
    EMovablePadLimitationFlag_MAX                  = 7

};


// Enum  Solarland.ESolarEMPParticleType
enum class ESolarEMPParticleType : uint8_t
{
    FadeIn                                         = 0,
    FadeOut                                        = 1,
    Loop                                           = 2,
    ESolarEMPParticleType_MAX                      = 3

};


// Enum  Solarland.ESolarEMPForceFieldState
enum class ESolarEMPForceFieldState : uint8_t
{
    None                                           = 0,
    Ready                                          = 1,
    Active                                         = 2,
    End                                            = 3,
    ESolarEMPForceFieldState_MAX                   = 4

};


// Enum  Solarland.EHookState
enum class EHookState : uint8_t
{
    None                                           = 0,
    Launching                                      = 1,
    Hooked                                         = 2,
    Retrieving                                     = 3,
    EHookState_MAX                                 = 4

};


// Enum  Solarland.ESolarDamageShapeType
enum class ESolarDamageShapeType : uint8_t
{
    Capsule                                        = 0,
    Sphere                                         = 1,
    Box                                            = 2,
    ESolarDamageShapeType_MAX                      = 3

};


// Enum  Solarland.ETempShieldFXTriggerType
enum class ETempShieldFXTriggerType : uint8_t
{
    None                                           = 0,
    OnGiveTempShield                               = 1,
    OnRecoverCharacterShield                       = 2,
    ETempShieldFXTriggerType_MAX                   = 3

};


// Enum  Solarland.ETempShieldOverflowType
enum class ETempShieldOverflowType : uint8_t
{
    ChargeTempShield                               = 0,
    ChargeShieldFirst                              = 1,
    ETempShieldOverflowType_MAX                    = 2

};


// Enum  Solarland.ESolarSurroundLightningApplyType
enum class ESolarSurroundLightningApplyType : uint8_t
{
    SurroundLightningApplyType_Character           = 0,
    SurroundLightningApplyType_Vehicle             = 1,
    SurroundLightningApplyType_Other               = 2,
    SurroundLightningApplyType_MAX                 = 3

};


// Enum  Solarland.ESlotMachineRewardQuality
enum class ESlotMachineRewardQuality : uint8_t
{
    None                                           = 0,
    Blue                                           = 1,
    Purple                                         = 2,
    Gold                                           = 3,
    ESlotMachineRewardQuality_MAX                  = 4

};


// Enum  Solarland.ESlotMachineState
enum class ESlotMachineState : uint8_t
{
    None                                           = 0,
    Idle                                           = 1,
    Tossing                                        = 2,
    Drawing                                        = 3,
    Resulting                                      = 4,
    Bursting                                       = 5,
    ESlotMachineState_MAX                          = 6

};


// Enum  Solarland.ESolarSmoothOption
enum class ESolarSmoothOption : uint8_t
{
    Linear                                         = 0,
    EaseInSine                                     = 1,
    EaseOutSine                                    = 2,
    EaseInOutSine                                  = 3,
    EaseInQuad                                     = 4,
    EaseOutQuad                                    = 5,
    EaseInOutQuad                                  = 6,
    EaseInCubic                                    = 7,
    EaseOutCubic                                   = 8,
    EaseInOutCubic                                 = 9,
    EaseInQuart                                    = 10,
    EaseOutQuart                                   = 11,
    EaseInOutQuart                                 = 12,
    EaseInQuint                                    = 13,
    EaseOutQuint                                   = 14,
    EaseInOutQuint                                 = 15,
    EaseInExpo                                     = 16,
    EaseOutExpo                                    = 17,
    EaseInOutExpo                                  = 18,
    EaseInCirc                                     = 19,
    EaseOutCirc                                    = 20,
    EaseInOutCirc                                  = 21,
    EaseInBack                                     = 22,
    EaseOutBack                                    = 23,
    EaseInOutBack                                  = 24,
    Custom                                         = 25,
    ESolarSmoothOption_MAX                         = 26

};


// Enum  Solarland.ESpectatorMode
enum class ESpectatorMode : uint8_t
{
    DeathWatch                                     = 0,
    Replay                                         = 1,
    ESpectatorMode_MAX                             = 2

};


// Enum  Solarland.EAIDogSoundGroup
enum class EAIDogSoundGroup : uint8_t
{
    None                                           = 0,
    SpawnSound                                     = 1,
    DestroySound                                   = 2,
    MoveMarkSound                                  = 3,
    CommandAcceptSound                             = 4,
    CommandDeniedSound                             = 5,
    MoveBlockSound                                 = 6,
    StartMoveLoopSound                             = 7,
    EndMoveLoopSound                               = 8,
    DestroyNoticeSound                             = 9,
    LevelUpSound                                   = 10,
    UpgradedSound                                  = 11,
    RecycleSound                                   = 12,
    AlertSound                                     = 13,
    EAIDogSoundGroup_MAX                           = 14

};


// Enum  Solarland.EAIDogTurretState
enum class EAIDogTurretState : uint8_t
{
    Fire                                           = 0,
    InReset                                        = 1,
    Idle                                           = 2,
    None                                           = 3,
    EAIDogTurretState_MAX                          = 4

};


// Enum  Solarland.EAIDogDeadReason
enum class EAIDogDeadReason : uint8_t
{
    HealthToZero                                   = 0,
    Recycle                                        = 1,
    AutoRecycle                                    = 2,
    None                                           = 3,
    EAIDogDeadReason_MAX                           = 4

};


// Enum  Solarland.EOrderMoveFeedback
enum class EOrderMoveFeedback : uint8_t
{
    SummonerTooFar                                 = 0,
    Failed                                         = 1,
    AlreadyAtGoal                                  = 2,
    NoPath                                         = 3,
    DetourTooFar                                   = 4,
    PartialPath                                    = 5,
    FullPath                                       = 6,
    Blocked                                        = 7,
    Abort_Paralyzed                                = 8,
    Abort_BlackHole                                = 9,
    ReachedGoal                                    = 10,
    EOrderMoveFeedback_MAX                         = 11

};


// Enum  Solarland.ESolarSummonItemType
enum class ESolarSummonItemType : uint8_t
{
    Default                                        = 0,
    Skill_Tower                                    = 1,
    ESolarSummonItemType_MAX                       = 2

};


// Enum  Solarland.ESolarSummonOwlMoveMode
enum class ESolarSummonOwlMoveMode : uint8_t
{
    E_Stop                                         = 0,
    E_ToPointStaright                              = 1,
    E_ToPointPath                                  = 2,
    E_TrackTarget                                  = 3,
    E_MAX                                          = 4

};


// Enum  Solarland.ETabControlListStyle
enum class ETabControlListStyle : uint8_t
{
    None                                           = 0,
    Text                                           = 1,
    Icon                                           = 2,
    ETabControlListStyle_MAX                       = 3

};


// Enum  Solarland.ETabControlListSlotType
enum class ETabControlListSlotType : uint8_t
{
    Leaf                                           = 0,
    Compound                                       = 1,
    ETabControlListSlotType_MAX                    = 2

};


// Enum  Solarland.ESolarTablesEnum_CalculatingSign
enum class ESolarTablesEnum_CalculatingSign : uint8_t
{
    Plus                                           = 0,
    Multiplication                                 = 1,
    Equal                                          = 2,
    _Count                                         = 3,
    ESolarTablesEnum_MAX                           = 4

};


// Enum  Solarland.ESolarTablesEnum_PartsType
enum class ESolarTablesEnum_PartsType : uint8_t
{
    Muzzle                                         = 0,
    Scope                                          = 1,
    Clip                                           = 2,
    Runes                                          = 3,
    Grip                                           = 4,
    GunStock                                       = 5,
    Scope2x                                        = 6,
    Scope4x                                        = 7,
    Scope8x                                        = 8,
    _Count                                         = 9,
    ESolarTablesEnum_MAX                           = 10

};


// Enum  Solarland.ESolarTablesEnum_AccessoryType
enum class ESolarTablesEnum_AccessoryType : uint8_t
{
    WeaponParts                                    = 0,
    WeaponAmmo                                     = 1,
    _Count                                         = 2,
    ESolarTablesEnum_MAX                           = 3

};


// Enum  Solarland.ESolarTablesEnum_FireCostType
enum class ESolarTablesEnum_FireCostType : uint8_t
{
    Descrete                                       = 0,
    Continuous                                     = 1,
    _Count                                         = 2,
    ESolarTablesEnum_MAX                           = 3

};


// Enum  Solarland.ESolarTablesEnum_TriggerType
enum class ESolarTablesEnum_TriggerType : uint8_t
{
    KeyDown                                        = 0,
    KeyUp                                          = 1,
    KeyHold                                        = 2,
    _Count                                         = 3,
    ESolarTablesEnum_MAX                           = 4

};


// Enum  Solarland.ESolarTablesEnum_TrajectoryType
enum class ESolarTablesEnum_TrajectoryType : uint8_t
{
    Line                                           = 0,
    LineGravity                                    = 1,
    Curve                                          = 2,
    Canister                                       = 3,
    Beam                                           = 4,
    Rocket                                         = 5,
    VirtualBullet                                  = 6,
    _Count                                         = 7,
    ESolarTablesEnum_MAX                           = 8

};


// Enum  Solarland.ESolarTablesEnum_FireMethodType
enum class ESolarTablesEnum_FireMethodType : uint8_t
{
    Bullet                                         = 0,
    Skill                                          = 1,
    SummonBullet                                   = 2,
    _Count                                         = 3,
    ESolarTablesEnum_MAX                           = 4

};


// Enum  Solarland.ESolarTablesEnum_WeaponType
enum class ESolarTablesEnum_WeaponType : uint8_t
{
    AssualtRifle                                   = 0,
    Submachinegun                                  = 1,
    Shotgun                                        = 2,
    Sniper                                         = 3,
    Vehicle                                        = 4,
    ItemWeapon                                     = 5,
    SummonWeapon                                   = 6,
    AntiVehicle                                    = 7,
    _Count                                         = 8,
    ESolarTablesEnum_MAX                           = 9

};


// Enum  Solarland.ESolarTablesEnum_TrigerType
enum class ESolarTablesEnum_TrigerType : uint8_t
{
    GameTime                                       = 0,
    AliveCount                                     = 1,
    RealTime                                       = 2,
    MatchRoundTime                                 = 3,
    GameWorldTime                                  = 4,
    _Count                                         = 5,
    ESolarTablesEnum_MAX                           = 6

};


// Enum  Solarland.ESolarTablesEnum_CategoryType
enum class ESolarTablesEnum_CategoryType : uint8_t
{
    CategoryType_None                              = 0,
    CategoryType_Reco                              = 1,
    CategoryType_Character                         = 2,
    CategoryType_CharacterSkin                     = 3,
    CategoryType_WeaponSkin                        = 4,
    CategoryType_Capsule                           = 5,
    CategoryType_Bag                               = 6,
    CategoryType_Tail                              = 7,
    CategoryType_Home                              = 8,
    CategoryType_Others                            = 9,
    _Count                                         = 10,
    ESolarTablesEnum_MAX                           = 11

};


// Enum  Solarland.ESolarTablesEnum_ShareType
enum class ESolarTablesEnum_ShareType : uint8_t
{
    ActionType_None                                = 0,
    ShareType_RankShare                            = 1,
    ShareType_BattlePassShare                      = 2,
    ShareType_AchieveItemShare                     = 3,
    ShareType_ScoreShare                           = 4,
    ShareType_LoginActivityShare                   = 5,
    ShareType_MedalShare                           = 6,
    ShareType_UserGrowthShare                      = 7,
    ShareType_FollowCommunity                      = 8,
    ShareType_PersonalHistory                      = 9,
    ShareType_IdolShare                            = 10,
    _Count                                         = 11,
    ESolarTablesEnum_MAX                           = 12

};


// Enum  Solarland.ESolarTablesEnum_ReplayShortcutCategory
enum class ESolarTablesEnum_ReplayShortcutCategory : uint8_t
{
    Camera                                         = 0,
    UI                                             = 1,
    Advance                                        = 2,
    _Count                                         = 3,
    ESolarTablesEnum_MAX                           = 4

};


// Enum  Solarland.ESolarTablesEnum_ReplayShortcutShowType
enum class ESolarTablesEnum_ReplayShortcutShowType : uint8_t
{
    Never                                          = 0,
    General                                        = 1,
    ViewControl                                    = 2,
    FreeView                                       = 3,
    Spectate                                       = 4,
    Lock                                           = 5,
    FreeLookAt                                     = 6,
    AutoDirector                                   = 7,
    AutoComment                                    = 8,
    _Count                                         = 9,
    ESolarTablesEnum_MAX                           = 10

};


// Enum  Solarland.ESolarTablesEnum_HighlightCameraEffect
enum class ESolarTablesEnum_HighlightCameraEffect : uint8_t
{
    None                                           = 0,
    ThirdPerson                                    = 1,
    CloseUp                                        = 2,
    VictimPerspective                              = 3,
    FollowProjectile                               = 4,
    _Count                                         = 5,
    ESolarTablesEnum_MAX                           = 6

};


// Enum  Solarland.ESolarTablesEnum_LobbyMatchEnterType
enum class ESolarTablesEnum_LobbyMatchEnterType : uint8_t
{
    CanClick                                       = 0,
    PartialClick                                   = 1,
    ForbidClick                                    = 2,
    _Count                                         = 3,
    ESolarTablesEnum_MAX                           = 4

};


// Enum  Solarland.ESolarTablesEnum_StackType
enum class ESolarTablesEnum_StackType : uint8_t
{
    StackByQTY                                     = 0,
    StackByTime                                    = 1,
    _Count                                         = 2,
    ESolarTablesEnum_MAX                           = 3

};


// Enum  Solarland.ESolarTablesEnum_InputRelatedType
enum class ESolarTablesEnum_InputRelatedType : uint8_t
{
    InputRelatedNone                               = 0,
    Input_F                                        = 1,
    InputRelated2                                  = 2,
    InputRelated3                                  = 3,
    InputRelated4                                  = 4,
    InputRelated5                                  = 5,
    InputRelated6                                  = 6,
    InputRelated7                                  = 7,
    InputRelated8                                  = 8,
    InputRelated9                                  = 9,
    InputRelated10                                 = 10,
    Input_J                                        = 11,
    _Count                                         = 12,
    ESolarTablesEnum_MAX                           = 13

};


// Enum  Solarland.ESolarTablesEnum_InputContextType
enum class ESolarTablesEnum_InputContextType : uint8_t
{
    InputCommon                                    = 0,
    InputPlayer                                    = 1,
    InputVehicle                                   = 2,
    InputOB                                        = 3,
    InputPlayerSkill                               = 4,
    InputActionWheel                               = 5,
    _Count                                         = 6,
    ESolarTablesEnum_MAX                           = 7

};


// Enum  Solarland.ESolarTablesEnum_InputTabType
enum class ESolarTablesEnum_InputTabType : uint8_t
{
    InputTabPlayer                                 = 0,
    InputTabVehicle                                = 1,
    InputTabOB                                     = 2,
    InputTabMisc                                   = 3,
    _Count                                         = 4,
    ESolarTablesEnum_MAX                           = 5

};


// Enum  Solarland.ESolarTablesEnum_InputCtrlType
enum class ESolarTablesEnum_InputCtrlType : uint8_t
{
    InputCtrlHide                                  = 0,
    InputCtrlShow                                  = 1,
    InputCtrlCustom                                = 2,
    InputCtrlCustomAndCom                          = 3,
    _Count                                         = 4,
    ESolarTablesEnum_MAX                           = 5

};


// Enum  Solarland.ESolarTablesEnum_GamepadCtrlType
enum class ESolarTablesEnum_GamepadCtrlType : uint8_t
{
    GamepadCtrlHide                                = 0,
    GamepadCtrlShowOnly                            = 1,
    GamepadCtrlCustom                              = 2,
    GamepadCtrlCustomAndCom                        = 3,
    _Count                                         = 4,
    ESolarTablesEnum_MAX                           = 5

};


// Enum  Solarland.ESolarTablesEnum_InputGamepadType
enum class ESolarTablesEnum_InputGamepadType : uint8_t
{
    InputGamepadOneKey                             = 0,
    InputGamepadComKey                             = 1,
    InputGamepadFreeComKey                         = 2,
    _Count                                         = 3,
    ESolarTablesEnum_MAX                           = 4

};


// Enum  Solarland.ESolarTablesEnum_ClassModeType
enum class ESolarTablesEnum_ClassModeType : uint8_t
{
    CLASS_MODE_NONE                                = 0,
    CLASS_MODE_V13                                 = 1,
    CLASS_MODE_UniqueSkill                         = 2,
    CLASS_MODE_RoleGrow                            = 3,
    CLASS_MODE_OFFLINE                             = 4,
    _Count                                         = 5,
    ESolarTablesEnum_MAX                           = 6

};


// Enum  Solarland.ESolarTablesEnum_ExcuterType
enum class ESolarTablesEnum_ExcuterType : uint8_t
{
    AirDrop                                        = 0,
    GasCircle                                      = 1,
    Bomb                                           = 2,
    _Count                                         = 3,
    ESolarTablesEnum_MAX                           = 4

};


// Enum  Solarland.ESolarTablesEnum_DisplayType
enum class ESolarTablesEnum_DisplayType : uint8_t
{
    None                                           = 0,
    Tips                                           = 1,
    Window                                         = 2,
    _Count                                         = 3,
    ESolarTablesEnum_MAX                           = 4

};


// Enum  Solarland.ESolarTablesEnum_ChestType
enum class ESolarTablesEnum_ChestType : uint8_t
{
    AirDrop                                        = 0,
    ElecChest                                      = 1,
    TacticalBox                                    = 2,
    SlotMachine                                    = 3,
    _Count                                         = 4,
    ESolarTablesEnum_MAX                           = 5

};


// Enum  Solarland.ESolarTablesEnum_Duration
enum class ESolarTablesEnum_Duration : uint8_t
{
    Day                                            = 0,
    Week                                           = 1,
    Month                                          = 2,
    Year                                           = 3,
    Never                                          = 4,
    None                                           = 5,
    _Count                                         = 6,
    ESolarTablesEnum_MAX                           = 7

};


// Enum  Solarland.ESolarTablesEnum_CharacterLevelUpType
enum class ESolarTablesEnum_CharacterLevelUpType : uint8_t
{
    Health                                         = 0,
    Damage                                         = 1,
    Movement                                       = 2,
    FlyCooldown                                    = 3,
    _Count                                         = 4,
    ESolarTablesEnum_MAX                           = 5

};


// Enum  Solarland.ESolarTablesEnum_CharacterType
enum class ESolarTablesEnum_CharacterType : uint8_t
{
    None                                           = 0,
    Assault                                        = 1,
    Defence                                        = 2,
    Support                                        = 3,
    Scout                                          = 4,
    _Count                                         = 5,
    ESolarTablesEnum_MAX                           = 6

};


// Enum  Solarland.ESolarTablesEnum_BehaviorType
enum class ESolarTablesEnum_BehaviorType : uint8_t
{
    SurvivalTime                                   = 0,
    Kills                                          = 1,
    Assists                                        = 2,
    Selfhealing                                    = 3,
    TeammateHealing                                = 4,
    Unpacking                                      = 5,
    CollectElectricity                             = 6,
    PickExpPack                                    = 7,
    EveryDamageDealt                               = 8,
    NpcKills                                       = 9,
    NpcAssists                                     = 10,
    TacticalBox                                    = 11,
    ShieldUpgradeShop                              = 12,
    _Count                                         = 13,
    ESolarTablesEnum_MAX                           = 14

};


// Enum  Solarland.ESolarTablesEnum_Enum_Behavior
enum class ESolarTablesEnum_Enum_Behavior : uint8_t
{
    Behavior1                                      = 0,
    Behavior2                                      = 1,
    Behavior3                                      = 2,
    Behavior4                                      = 3,
    Behavior5                                      = 4,
    Behavior6                                      = 5,
    Behavior7                                      = 6,
    Behavior8                                      = 7,
    Behavior9                                      = 8,
    Behavior10                                     = 9,
    Behavior11                                     = 10,
    Behavior12                                     = 11,
    Behavior13                                     = 12,
    _Count                                         = 13,
    ESolarTablesEnum_Enum_MAX                      = 14

};


// Enum  Solarland.ESolarTablesEnum_ActionType
enum class ESolarTablesEnum_ActionType : uint8_t
{
    ActionType_None                                = 0,
    ActionType_OpenGift                            = 1,
    ActionType_Charge                              = 2,
    ActionType_Battle                              = 3,
    ActionType_Mail                                = 4,
    ActionType_ShopBuy                             = 5,
    ActionType_DailyTask                           = 6,
    ActionType_Activity                            = 7,
    ActionType_Guid                                = 8,
    ActionType_GM                                  = 9,
    ActionType_BattleBag                           = 10,
    ActionType_ItemUse                             = 11,
    ActionType_Refund                              = 12,
    ActionType_BattleDouble                        = 13,
    ActionType_UnitProf                            = 14,
    ActionType_SanctuaryBuild                      = 15,
    ActionType_SanctuaryFacility                   = 16,
    ActionType_Weapon_Upgrade                      = 17,
    ActionType_Activereward                        = 18,
    ActionType_ComposeItem                         = 19,
    ActionType_LoginReward                         = 20,
    ActionType_NewUserLogin                        = 21,
    ActionType_HomeDailyTask                       = 22,
    ActionType_BattlePass                          = 23,
    ActionType_LevelReward                         = 24,
    ActionType_HomeUpgrade                         = 25,
    ActionType_BattlePassRepeat                    = 26,
    ActionType_TopUP                               = 27,
    ActionType_Achievement                         = 28,
    ActionType_LuckDraw                            = 29,
    ActionType_BattlePassShare                     = 30,
    ActionType_CDKey                               = 31,
    ActionType_HalfMonthLogin                      = 32,
    ActionType_MonthlyEvent                        = 33,
    ActionType_FriendEvent                         = 34,
    ActionType_WeekChanllenge                      = 35,
    ActionType_RoomCard                            = 36,
    ActionType_BindAccount                         = 37,
    ActionType_UserGrowthEvent                     = 38,
    ActionType_SendGift                            = 39,
    ActionType_SellItem                            = 40,
    ActionType_CollectRedeem                       = 41,
    ActionType_RandomPack                          = 42,
    ActionType_Clan                                = 43,
    ActionType_Bet                                 = 44,
    ActionType_BetBonus                            = 45,
    ActionType_BetReturn                           = 46,
    ActionType_CarouselDraw                        = 47,
    ActionType_WeekFree                            = 48,
    ActionType_TutorialLevelReward                 = 49,
    ActionType_TournamentMiss                      = 50,
    ActionType_TournamentReward                    = 51,
    ActionType_RankingCard                         = 52,
    ActionType_BattleSupplyBox                     = 53,
    ActionType_BattlePassMission                   = 54,
    ActionType_SupplyBox                           = 55,
    ActionType_VipcardReceive                      = 56,
    ActionType_VipcardSign                         = 57,
    ActionType_Vipcard                             = 58,
    ActionType_Signcard                            = 59,
    ActionType_ChangeName                          = 60,
    ActionType_ServerCard                          = 61,
    ActionType_ExResourceDownload                  = 62,
    ActionType_CustomServer_Renewal                = 63,
    ActionType_NewLuckDraw                         = 64,
    ActionType_SerialTask                          = 65,
    ActionType_Rank                                = 66,
    ActionType_NewBP                               = 67,
    ActionType_NewBPReward                         = 68,
    ActionType_PermanentReward                     = 69,
    ActionType_NewTaskRefresh                      = 70,
    ActionType_ExchangeShop                        = 71,
    _Count                                         = 72,
    ESolarTablesEnum_MAX                           = 73

};


// Enum  Solarland.ETaskStatus
enum class ETaskStatus : uint8_t
{
    Runing                                         = 0,
    Completed                                      = 1,
    ReceiveAward                                   = 2,
    ETaskStatus_MAX                                = 3

};


// Enum  Solarland.EMatchResult
enum class EMatchResult : uint8_t
{
    None                                           = 0,
    Victory                                        = 1,
    Fail                                           = 2,
    Draw                                           = 3,
    EMatchResult_MAX                               = 4

};


// Enum  Solarland.ETitanAIState
enum class ETitanAIState : uint8_t
{
    Idle                                           = 0,
    GoBackHome                                     = 1,
    ETitanAIState_MAX                              = 2

};


// Enum  Solarland.ECostType
enum class ECostType : uint8_t
{
    NONE                                           = 0,
    ELECTRONIC                                     = 1,
    ECostType_MAX                                  = 2

};


// Enum  Solarland.ETutorialMaskType
enum class ETutorialMaskType : uint8_t
{
    Rectangle                                      = 0,
    Circle                                         = 1,
    ETutorialMaskType_MAX                          = 2

};


// Enum  Solarland.ETutorialGestureHandType
enum class ETutorialGestureHandType : uint8_t
{
    Right                                          = 0,
    Left                                           = 1,
    ETutorialGestureHandType_MAX                   = 2

};


// Enum  Solarland.ETutorialGestureType
enum class ETutorialGestureType : uint8_t
{
    None                                           = 0,
    Click                                          = 1,
    SlideUp                                        = 2,
    ETutorialGestureType_MAX                       = 3

};


// Enum  Solarland.ETutorialUIType
enum class ETutorialUIType : uint8_t
{
    None                                           = 0,
    Common                                         = 1,
    Special                                        = 2,
    ETutorialUIType_MAX                            = 3

};


// Enum  Solarland.ELevelRewardStatus
enum class ELevelRewardStatus : uint8_t
{
    NotClaimed                                     = 0,
    Claimed                                        = 1,
    Disable                                        = 2,
    ELevelRewardStatus_MAX                         = 3

};


// Enum  Solarland.EWidgetPlayAnimationFlag
enum class EWidgetPlayAnimationFlag : uint8_t
{
    None                                           = 0,
    Finish                                         = 1,
    EWidgetPlayAnimationFlag_MAX                   = 2

};


// Enum  Solarland.EWidgetInteractionFlag
enum class EWidgetInteractionFlag : uint8_t
{
    None                                           = 0,
    Pressed                                        = 1,
    Released                                       = 2,
    Clicked                                        = 3,
    EWidgetInteractionFlag_MAX                     = 4

};


// Enum  Solarland.ETutorialStage
enum class ETutorialStage : uint8_t
{
    None                                           = 0,
    Lobby                                          = 1,
    BattleField                                    = 2,
    TutorialLevel                                  = 4,
    ETutorialStage_MAX                             = 5

};


// Enum  Solarland.ETutorialUIParent
enum class ETutorialUIParent : uint8_t
{
    Parent                                         = 0,
    UnderBattleRoot                                = 1,
    BattleRoot                                     = 2,
    BattleRootGuide                                = 3,
    MiddleRoot                                     = 4,
    CommonRoot                                     = 5,
    Map                                            = 6,
    BattleNoticeRoot                               = 7,
    Guide                                          = 8,
    PopRoot                                        = 9,
    TipsRoot                                       = 10,
    NoticeRoot                                     = 11,
    Loading                                        = 12,
    Reconnecting                                   = 13,
    ExternalToolsRoot                              = 255,
    ETutorialUIParent_MAX                          = 256

};


// Enum  Solarland.ETutorialConditionType
enum class ETutorialConditionType : uint8_t
{
    None                                           = 0,
    Trigger                                        = 1,
    Interrupt                                      = 2,
    Finish                                         = 3,
    ForeverClose                                   = 4,
    ETutorialConditionType_MAX                     = 5

};


// Enum  Solarland.ETutorialType
enum class ETutorialType : uint8_t
{
    TEvent                                         = 0,
    TTick                                          = 1,
    ETutorialType_MAX                              = 2

};


// Enum  Solarland.ETutorialTriggerType
enum class ETutorialTriggerType : uint8_t
{
    TickActivateTutorials                          = 0,
    AlreadyTriggeredMaxCount                       = 1,
    HasSpecifiedItem                               = 2,
    HasTakenDamage                                 = 3,
    PlayerAcountLevel                              = 4,
    SprintingContinuously                          = 5,
    JumpBegin                                      = 8,
    ShieldNotFull                                  = 17,
    WidgetClicked                                  = 19,
    CanUseSpecifiedVehicleAbility                  = 20,
    CanUseSpecifiedVehicleWeapon                   = 21,
    AirDropBoxLanded                               = 22,
    NearAirDropBox                                 = 23,
    OpenBigMapUMG                                  = 24,
    CanUseSpecifiedWeaponAbility                   = 25,
    CanOpenTreasureBox                             = 29,
    PlayerInTargetStage                            = 30,
    EquipSpecifiedWeapon                           = 34,
    FeatureUnlock                                  = 35,
    ApproachTreasureBox                            = 36,
    BotAIDying                                     = 38,
    RunningStep                                    = 39,
    HasSpecifiedEquipmentByType                    = 40,
    TutorialLevelDone                              = 42,
    WeaponSlotHasSpecifiedItem                     = 45,
    HasUIPanelOpened                               = 48,
    SpecifiedPlayerProficiency                     = 53,
    PlayerUpgradeBattleLevel                       = 54,
    PlayerAbilityTagChanged                        = 55,
    ETutorialTriggerType_MAX                       = 56

};


// Enum  Solarland.EPlayerProficiency
enum class EPlayerProficiency : uint8_t
{
    None                                           = 0,
    Rookie                                         = 1,
    FPS                                            = 2,
    Veteran                                        = 3,
    EPlayerProficiency_MAX                         = 4

};


// Enum  Solarland.EUAVRescueState
enum class EUAVRescueState : uint8_t
{
    None                                           = 0,
    Idle                                           = 1,
    Heal                                           = 2,
    Navigate                                       = 3,
    Rescue                                         = 4,
    EUAVRescueState_MAX                            = 5

};


// Enum  Solarland.EWidgetPassiveMode
enum class EWidgetPassiveMode : uint8_t
{
    Normal                                         = 0,
    Passive_Buff                                   = 1,
    Passive_Debuff                                 = 2,
    EWidgetPassiveMode_MAX                         = 3

};


// Enum  Solarland.EVehicleRotateAnimationType
enum class EVehicleRotateAnimationType : uint8_t
{
    None                                           = 0,
    Right                                          = 1,
    Right                                          = 2,
    Left                                           = 3,
    Left                                           = 4,
    Right                                          = 5,
    Left                                           = 6,
    EVehicleRotateAnimationType_MAX                = 7

};


// Enum  Solarland.EIronManHandPart
enum class EIronManHandPart : uint8_t
{
    LeftHand                                       = 0,
    RightHand                                      = 1,
    EIronManHandPart_MAX                           = 2

};


// Enum  Solarland.EIronManSoundEvent
enum class EIronManSoundEvent : uint8_t
{
    LaserHit                                       = 0,
    EIronManSoundEvent_MAX                         = 1

};


// Enum  Solarland.EPreloadVehicleUIType
enum class EPreloadVehicleUIType : uint8_t
{
    None                                           = 0,
    CrossHairUI                                    = 1,
    VehicleSpecialUI                               = 2,
    EPreloadVehicleUIType_MAX                      = 3

};


// Enum  Solarland.EPlayerInputMask
enum class EPlayerInputMask : uint8_t
{
    Invalidated                                    = 0,
    VehicleBraking                                 = 1,
    VehicleTrumpet                                 = 2,
    VehicleAutoMove                                = 4,
    All                                            = 7,
    EPlayerInputMask_MAX                           = 8

};


// Enum  Solarland.EAssistLockState
enum class EAssistLockState : uint8_t
{
    None                                           = 0,
    PreEnterAssistLock                             = 1,
    EnterAssistLock                                = 2,
    HoldAssistLock                                 = 3,
    LeaveAssistLock                                = 4,
    EAssistLockState_MAX                           = 5

};


// Enum  Solarland.EHoverVehicleVFXType
enum class EHoverVehicleVFXType : uint8_t
{
    Forward                                        = 0,
    Backward                                       = 1,
    Right                                          = 2,
    Left                                           = 3,
    Max                                            = 4

};


// Enum  Solarland.EEnterWaterVFX
enum class EEnterWaterVFX : uint8_t
{
    HorizontalLightEffect                          = 0,
    HorizontalHeavyEffect                          = 1,
    VerticalLightEffect                            = 2,
    VerticalHeavyEffect                            = 3,
    MAX                                            = 4

};


// Enum  Solarland.ECorrectionReason
enum class ECorrectionReason : uint8_t
{
    ClientTimeDiscrepancy                          = 0,
    InvalidSpeed                                   = 1,
    TooShortDeltaTime                              = 2,
    WaitingForClientConfirm                        = 3,
    InvalidCollision                               = 4,
    FloatingInAir                                  = 5,
    StandingOnUnwalkableVehicle                    = 6,
    ECorrectionReason_MAX                          = 7

};


// Enum  Solarland.EVehicleSpawnSourceType
enum class EVehicleSpawnSourceType : uint8_t
{
    CommonSpawn                                    = 0,
    VehicleSummonWeapon                            = 1,
    EVehicleSpawnSourceType_MAX                    = 2

};


// Enum  Solarland.EVehicleControlUIType
enum class EVehicleControlUIType : uint8_t
{
    Vehicle                                        = 0,
    Character                                      = 1,
    EVehicleControlUIType_MAX                      = 2

};


// Enum  Solarland.EVehicleRotateCondition
enum class EVehicleRotateCondition : uint8_t
{
    None                                           = 0,
    Forward                                        = 1,
    Backward                                       = 2,
    Right                                          = 4,
    Left                                           = 8,
    All                                            = 15,
    EVehicleRotateCondition_MAX                    = 16

};


// Enum  Solarland.EVehicleOpenTips
enum class EVehicleOpenTips : uint8_t
{
    FloorCanNotOpen                                = 0,
    SpeedCanNotOpen                                = 1,
    EVehicleOpenTips_MAX                           = 2

};


// Enum  Solarland.ESiegeVehicleAnimation
enum class ESiegeVehicleAnimation : uint8_t
{
    CloseIdle                                      = 0,
    OpenIdle                                       = 1,
    Fire                                           = 2,
    ESiegeVehicleAnimation_MAX                     = 3

};


// Enum  Solarland.EVehicleDamageStatus
enum class EVehicleDamageStatus : uint8_t
{
    Normal                                         = 0,
    Damaged                                        = 1,
    SeriouslyDamaged                               = 2,
    BrokenDanger                                   = 3,
    Broken                                         = 4,
    MAX                                            = 5

};


// Enum  Solarland.EVehicleAnimationState
enum class EVehicleAnimationState : uint8_t
{
    None                                           = 0,
    Jump                                           = 1,
    Dash                                           = 2,
    TakingOff                                      = 3,
    Cruising                                       = 4,
    PreJump                                        = 5,
    EVehicleAnimationState_MAX                     = 6

};


// Enum  Solarland.ERocketFireMode
enum class ERocketFireMode : uint8_t
{
    NomalFire                                      = 0,
    PrecisionFire                                  = 1,
    Max                                            = 2

};


// Enum  Solarland.EVehiclePageType
enum class EVehiclePageType : uint8_t
{
    Lobby                                          = 0,
    VehicleBag                                     = 1,
    BattlePass                                     = 2,
    LuckDraw                                       = 3,
    GetReward                                      = 4,
    GrowTask                                       = 5,
    Shop                                           = 6,
    CarouselDraw                                   = 7,
    SupplyBoxDetail                                = 8,
    SupplyBoxRaffle                                = 9,
    Max                                            = 10

};


// Enum  Solarland.EVehicleSpawnEffectType
enum class EVehicleSpawnEffectType : uint8_t
{
    None                                           = 0,
    RefreshingProgress                             = 1,
    PreVehicleSummon                               = 2,
    EVehicleSpawnEffectType_MAX                    = 3

};


// Enum  Solarland.EVehicleState
enum class EVehicleState : uint8_t
{
    None                                           = 0,
    Ground                                         = 1,
    Air                                            = 2,
    Sliding                                        = 3,
    EVehicleState_MAX                              = 4

};


// Enum  Solarland.EWaterWallSpawnState
enum class EWaterWallSpawnState : uint8_t
{
    E_NotSpawned                                   = 0,
    E_Spawning                                     = 1,
    E_Spawned                                      = 2,
    E_WaitingDestroy                               = 3,
    E_MAX                                          = 4

};


// Enum  Solarland.ESolarWeaponSpreadState
enum class ESolarWeaponSpreadState : uint8_t
{
    Standby                                        = 0,
    Approach                                       = 1,
    Recover                                        = 2,
    ESolarWeaponSpreadState_MAX                    = 3

};


// Enum  Solarland.ESolarBlackHoleParticle
enum class ESolarBlackHoleParticle : uint8_t
{
    ForceField                                     = 0,
    CoreFadeIn                                     = 1,
    CoreFadeOut                                    = 2,
    CoreLoop                                       = 3,
    CoreHit                                        = 4,
    Explode                                        = 5,
    CharacterDebuff                                = 6,
    ESolarBlackHoleParticle_MAX                    = 7

};


// Enum  Solarland.ESolarBlackHoleState
enum class ESolarBlackHoleState : uint8_t
{
    None                                           = 0,
    Startup                                        = 1,
    Ready                                          = 2,
    Active                                         = 3,
    End                                            = 4,
    ESolarBlackHoleState_MAX                       = 5

};


// Enum  Solarland.EWeaponOverloadState
enum class EWeaponOverloadState : uint8_t
{
    NormalDecrease                                 = 0,
    FireSuspend                                    = 1,
    ForceOverload                                  = 2,
    EWeaponOverloadState_MAX                       = 3

};


// Enum  Solarland.ESolarPlayerWeaponTagType
enum class ESolarPlayerWeaponTagType : uint8_t
{
    WeaponType                                     = 0,
    WeaponDifficulty                               = 1,
    WeaponProperties                               = 2,
    Max                                            = 3

};


// Enum  Solarland.EWeaponSpreadShape
enum class EWeaponSpreadShape : uint8_t
{
    Ellipse                                        = 0,
    Rectangle                                      = 1,
    EWeaponSpreadShape_MAX                         = 2

};


// Enum  Solarland.EGearState
enum class EGearState : uint8_t
{
    Reverse                                        = 0,
    Neutral                                        = 1,
    Forward                                        = 2,
    EGearState_MAX                                 = 3

};


// Enum  Solarland.EInputEventHandleType
enum class EInputEventHandleType : uint8_t
{
    Unhandle                                       = 0,
    SimulateKey                                    = 1,
    BroadcastEvent                                 = 2,
    SimulateTouch                                  = 4,
    NoKeyOnly                                      = 6,
    NoEventOnly                                    = 5,
    NoTouchOnly                                    = 3,
    HandleAll                                      = 7,
    EInputEventHandleType_MAX                      = 8

};


// Enum  Solarland.ETouchMovePriority
enum class ETouchMovePriority : uint8_t
{
    Highest                                        = 0,
    Higher                                         = 1,
    Normal                                         = 2,
    Lower                                          = 3,
    Lowest                                         = 4,
    ETouchMovePriority_MAX                         = 5

};


// Enum  Solarland.ESoundPoolSimpleRule
enum class ESoundPoolSimpleRule : uint8_t
{
    Random                                         = 0,
    RandomNoRepeat                                 = 1,
    Sequential                                     = 2,
    ESoundPoolSimpleRule_MAX                       = 3

};


// Enum  Solarland.ESoundGroupContextLabel
enum class ESoundGroupContextLabel : uint8_t
{
    None                                           = 0,
    IsSelf                                         = 1,
    IsTeammate                                     = 2,
    IsAttackingOther                               = 4,
    IsAttackedByOther                              = 8,
    HasSilencer                                    = 16,
    IsInRoom                                       = 32,
    ESoundGroupContextLabel_MAX                    = 33

};


// Enum  Solarland.ESolarImageProgressHalfCirclePrivotType
enum class ESolarImageProgressHalfCirclePrivotType : uint8_t
{
    MidLeft                                        = 0,
    MidRight                                       = 1,
    MidBottom                                      = 2,
    MidTop                                         = 4,
    ESolarImageProgressHalfCirclePrivotType_MAX    = 5

};


// Enum  Solarland.ESolarImageProgressQuaterCirclePrivotType
enum class ESolarImageProgressQuaterCirclePrivotType : uint8_t
{
    LeftBottom                                     = 0,
    RightBottom                                    = 1,
    LeftTop                                        = 16,
    RightTop                                       = 17,
    ESolarImageProgressQuaterCirclePrivotType_MAX  = 18

};


// Enum  Solarland.ESolarImageProgressLineDirType
enum class ESolarImageProgressLineDirType : uint8_t
{
    Horizantal                                     = 0,
    Vertical                                       = 1,
    ESolarImageProgressLineDirType_MAX             = 2

};


// Enum  Solarland.ESolarImageProgressType
enum class ESolarImageProgressType : uint8_t
{
    None                                           = 0,
    Line                                           = 1,
    QuarterCircle                                  = 2,
    HalfCircle                                     = 3,
    Circle                                         = 4,
    ESolarImageProgressType_MAX                    = 5

};


// Enum  Solarland.ESolarImageFillType
enum class ESolarImageFillType : uint8_t
{
    Normal                                         = 0,
    Mirror                                         = 1,
    Quarter                                        = 2,
    ESolarImageFillType_MAX                        = 3

};


// Enum  Solarland.ESummonItemTagChangedType
enum class ESummonItemTagChangedType : uint8_t
{
    Add                                            = 0,
    Remove                                         = 1,
    Changed                                        = 2,
    ESummonItemTagChangedType_MAX                  = 3

};


// Enum  Solarland.ERefreshCause
enum class ERefreshCause : uint8_t
{
    ECause_None                                    = 0,
    ECause_OutOrIntoScreen                         = 1,
    ECause_RescueStateChange                       = 2,
    ECause_MAX                                     = 3

};


// Enum  Solarland.EThunderFlashPhase
enum class EThunderFlashPhase : uint8_t
{
    None                                           = 0,
    Idle                                           = 1,
    Move                                           = 2,
    Start                                          = 3,
    Loop                                           = 4,
    End                                            = 5,
    Max                                            = 6

};


// Enum  Solarland.ETrapGrenadeState
enum class ETrapGrenadeState : uint8_t
{
    Flying                                         = 0,
    Standby                                        = 1,
    Jump                                           = 2,
    DamageVolume                                   = 3,
    BrokenDueToLifeTime                            = 4,
    BrokenDueToDamage                              = 5,
    BrokenDueToDamageVolumeLifeTime                = 6,
    ETrapGrenadeState_MAX                          = 7

};


// Enum  Solarland.EHotSpringLifeState
enum class EHotSpringLifeState : uint8_t
{
    None                                           = 0,
    Normal                                         = 1,
    Disappear                                      = 2,
    Destoryed                                      = 3,
    EHotSpringLifeState_MAX                        = 4

};


// Enum  Solarland.ECipherBoxOpenState
enum class ECipherBoxOpenState : uint8_t
{
    Closed                                         = 0,
    Opening                                        = 1,
    Opened                                         = 2,
    ECipherBoxOpenState_MAX                        = 3

};


// Enum  Solarland.ECipherBoxType
enum class ECipherBoxType : uint8_t
{
    None                                           = 0,
    AIRDROPBOX                                     = 1,
    HOTSPRINTBOX                                   = 2,
    ECipherBoxType_MAX                             = 3

};


// Enum  Solarland.EAirDropMovementState
enum class EAirDropMovementState : uint8_t
{
    None                                           = 0,
    Waiting                                        = 1,
    FreeFalling                                    = 2,
    UniformFalling                                 = 3,
    DecelerateFalling                              = 4,
    Landing                                        = 5,
    Landed                                         = 6,
    Removed                                        = 7,
    EAirDropMovementState_MAX                      = 8

};


// Enum  Solarland.ESplineMeshType
enum class ESplineMeshType : uint8_t
{
    DEFAULT                                        = 0,
    START                                          = 1,
    END                                            = 2,
    ESplineMeshType_MAX                            = 3

};


// Enum  Solarland.EHeroCellSelectedType
enum class EHeroCellSelectedType : uint8_t
{
    Default                                        = 0,
    Selecting                                      = 1,
    DisableSelectd                                 = 2,
    EHeroCellSelectedType_MAX                      = 3

};


// Enum  Solarland.EBackpackInfoPageType
enum class EBackpackInfoPageType : uint8_t
{
    Level                                          = 0,
    Skill                                          = 1,
    Max                                            = 2

};


// Enum  Solarland.ETweenInterpolationType
enum class ETweenInterpolationType : uint8_t
{
    Easing                                         = 0,
    Curve                                          = 1,
    ETweenInterpolationType_MAX                    = 2

};


// Enum  Solarland.EDefenderTeamType
enum class EDefenderTeamType : uint8_t
{
    None                                           = 0,
    MyTeam                                         = 1,
    DefenderTeam                                   = 2,
    EDefenderTeamType_MAX                          = 3

};


// Enum  Solarland.EActionWheelImageType
enum class EActionWheelImageType : uint8_t
{
    None                                           = 0,
    Action                                         = 1,
    Sticker                                        = 2,
    EActionWheelImageType_MAX                      = 3

};


// Enum  Solarland.EPlayerWidgetState
enum class EPlayerWidgetState : uint8_t
{
    NORMAL                                         = 0,
    DRIVER                                         = 1,
    PASSGNER                                       = 2,
    EQUIPVEHICLEWEAPON                             = 3,
    CRUISING                                       = 4,
    PATACHUTING                                    = 5,
    SWIMMING                                       = 6,
    MAX                                            = 7

};


// Enum  Solarland.ELocalNoticeType
enum class ELocalNoticeType : uint8_t
{
    Revenge                                        = 0,
    KillDown                                       = 1,
    ClearTeam                                      = 2,
    ShutDown                                       = 3,
    KillDefender                                   = 4,
    ELocalNoticeType_MAX                           = 5

};


// Enum  Solarland.EUIWidgetProxyName
enum class EUIWidgetProxyName : uint8_t
{
    None                                           = 0,
    UI_BuyResurrectionPanel                        = 1,
    OpenAirdrop                                    = 2,
    ExpSpring                                      = 3,
    RescueTeammate                                 = 4,
    RespawnDevice                                  = 5,
    GeneralTrigger                                 = 6,
    GeneralTrigger                                 = 7,
    GeneralTrigger                                 = 8,
    GeneralTrigger                                 = 9,
    EUIWidgetProxyName_MAX                         = 10

};


// Enum  Solarland.EUIWeaponPartState
enum class EUIWeaponPartState : uint8_t
{
    NotEquip                                       = 0,
    Equipped                                       = 1,
    CantEquip                                      = 2,
    EUIWeaponPartState_MAX                         = 3

};


// Enum  Solarland.EWidgetVisibilityFlags
enum class EWidgetVisibilityFlags : uint8_t
{
    None                                           = 0,
    ChatSwitch                                     = 1,
    ChatMsgSending                                 = 2,
    ConnectionState                                = 3,
    TalentState                                    = 4,
    TalentValidation                               = 5,
    EWidgetVisibilityFlags_MAX                     = 6

};


// Enum  Solarland.EVehicleWeaponScopeType
enum class EVehicleWeaponScopeType : uint8_t
{
    None                                           = 0,
    Magnifier_X2                                   = 1,
    Magnifier_X4                                   = 2,
    Magnifier_X8                                   = 3,
    Max                                            = 4

};


// Enum  Solarland.EVehicleSpawnAlternateType
enum class EVehicleSpawnAlternateType : uint8_t
{
    Hour                                           = 0,
    Day                                            = 1,
    Week                                           = 2,
    Month                                          = 3,
    Season                                         = 4,
    EVehicleSpawnAlternateType_MAX                 = 5

};


// Enum  Solarland.EVehicleSpawnType
enum class EVehicleSpawnType : uint8_t
{
    SingleRandom                                   = 0,
    Group                                          = 1,
    GroupWithSingleRandom                          = 2,
    EVehicleSpawnType_MAX                          = 3

};


// Enum  Solarland.EStealthParamType
enum class EStealthParamType : uint8_t
{
    None                                           = 0,
    Type_1P                                        = 1,
    Type_3P                                        = 2,
    Type_3P_Enemy                                  = 3,
    EStealthParamType_MAX                          = 4

};


// Enum  Solarland.EWholeShieldState
enum class EWholeShieldState : uint8_t
{
    Begin                                          = 0,
    InProgress                                     = 1,
    End                                            = 2,
    EWholeShieldState_MAX                          = 3

};


// Enum  Solarland.EVisualSoundCalculatePoint
enum class EVisualSoundCalculatePoint : uint8_t
{
    Camera                                         = 0,
    Character                                      = 1,
    EVisualSoundCalculatePoint_MAX                 = 2

};


// Enum  Solarland.EVisualSoundDetectionRule
enum class EVisualSoundDetectionRule : uint8_t
{
    XYZ                                            = 0,
    XY                                             = 1,
    XY_FiniteZ                                     = 2,
    EVisualSoundDetectionRule_MAX                  = 3

};


// Enum  Solarland.EWeaponAnimState
enum class EWeaponAnimState : uint8_t
{
    Idle                                           = 0,
    Fire                                           = 1,
    AltFire                                        = 2,
    Reload                                         = 3,
    Overload                                       = 4,
    OpenScope                                      = 5,
    CloseScope                                     = 6,
    Bolt                                           = 7,
    Preview                                        = 8,
    Summon                                         = 9,
    EWeaponAnimState_MAX                           = 10

};


// Enum  Solarland.EWeaponShootPattern
enum class EWeaponShootPattern : uint8_t
{
    Normal                                         = 0,
    Single                                         = 1,
    Burst                                          = 2,
    Bolt                                           = 3,
    EWeaponShootPattern_MAX                        = 4

};


// Enum  Solarland.EWeaponTrajectoryType
enum class EWeaponTrajectoryType : uint8_t
{
    VirtualBullet                                  = 0,
    Canister                                       = 1,
    EWeaponTrajectoryType_MAX                      = 2

};


// Enum  Solarland.EWeaponDamageDecayMode
enum class EWeaponDamageDecayMode : uint8_t
{
    Instant                                        = 0,
    Linear                                         = 1,
    EWeaponDamageDecayMode_MAX                     = 2

};


// Enum  Solarland.ESolarWeaponLODState
enum class ESolarWeaponLODState : uint8_t
{
    Hold                                           = 0,
    OpenScope                                      = 1,
    Discard                                        = 2,
    AttachedOnBackpack                             = 3,
    ESolarWeaponLODState_MAX                       = 4

};


// Enum  Solarland.EWeaponSkinType
enum class EWeaponSkinType : uint8_t
{
    Material                                       = 0,
    Mesh                                           = 1,
    EWeaponSkinType_MAX                            = 2

};


// Enum  Solarland.EWeaponMechanicalSideFlag
enum class EWeaponMechanicalSideFlag : uint32_t
{
    None                                           = 0,
    OnGround                                       = 2,
    Unequip                                        = 4,
    OpenScope                                      = 8,
    ForceFiring                                    = 16,
    ChargedFire                                    = 32,
    NeedBolt                                       = 64,
    GatlingRolling                                 = 128,
    DetectedWall                                   = 256,
    NeedRechamber                                  = 512,
    NoAmmoReserved                                 = 1024,
    EWeaponMechanicalSideFlag_MAX                  = 1025

};


// Enum  Solarland.EWeaponMechanicalUniqueState
enum class EWeaponMechanicalUniqueState : uint8_t
{
    None                                           = 0,
    Idle                                           = 1,
    PreFire                                        = 2,
    RealFire                                       = 3,
    Rechamber                                      = 4,
    Reloading                                      = 5,
    Bolting                                        = 6,
    Charging                                       = 7,
    Overloading                                    = 8,
    KeyUPHolding                                   = 9,
    EWeaponMechanicalUniqueState_MAX               = 10

};


// Enum  Solarland.EWeaponPartVisibilityChangeFlag
enum class EWeaponPartVisibilityChangeFlag : uint8_t
{
    Default                                        = 0,
    BySignificance                                 = 1,
    ByHold                                         = 2,
    ByOpenScope                                    = 3,
    ByPartsVisibility                              = 4,
    EWeaponPartVisibilityChangeFlag_MAX            = 5

};


// Enum  Solarland.EWeaponRecoilPatternType
enum class EWeaponRecoilPatternType : uint8_t
{
    Auto                                           = 0,
    Burst                                          = 1,
    EWeaponRecoilPatternType_MAX                   = 2

};


// Enum  Solarland.EFixedValueMode
enum class EFixedValueMode : uint8_t
{
    Raw                                            = 0,
    Increment                                      = 1,
    EFixedValueMode_MAX                            = 2

};


// Enum  Solarland.EWeaponSkewAdjustmentType
enum class EWeaponSkewAdjustmentType : uint8_t
{
    Pitch                                          = 0,
    Yaw                                            = 1,
    Roll                                           = 2,
    XOffset                                        = 3,
    YOffset                                        = 4,
    ZOffset                                        = 5,
    EWeaponSkewAdjustmentType_MAX                  = 6

};


// Enum  Solarland.EWeaponSkewInputType
enum class EWeaponSkewInputType : uint8_t
{
    PitchSpeed                                     = 0,
    YawSpeed                                       = 1,
    HorizontalSpeed                                = 2,
    VerticalSpeed                                  = 3,
    EWeaponSkewInputType_MAX                       = 4

};


// Enum  Solarland.ESprayingRecoveryMode
enum class ESprayingRecoveryMode : uint8_t
{
    SyncWithRecoil                                 = 0,
    RecoverByCurve                                 = 1,
    ESprayingRecoveryMode_MAX                      = 2

};


// Enum  Solarland.EWeaponSpreadDistributionRule
enum class EWeaponSpreadDistributionRule : uint8_t
{
    CentralLimitTheorem                            = 0,
    DistributionCurve                              = 1,
    Canister                                       = 2,
    EWeaponSpreadDistributionRule_MAX              = 3

};


// Enum  Solarland.ESolarWeaponFireInputButtonState
enum class ESolarWeaponFireInputButtonState : uint8_t
{
    FireWaiting                                    = 0,
    FirePressed                                    = 1,
    CancelWaiting                                  = 2,
    CancelPressed                                  = 3,
    Invalid                                        = 4,
    ESolarWeaponFireInputButtonState_MAX           = 5

};


// Enum  Solarland.ECheckFireResultType
enum class ECheckFireResultType : uint8_t
{
    None                                           = 0,
    Fire                                           = 1,
    Reload                                         = 2,
    OpenScope                                      = 3,
    CloseScope                                     = 4,
    Charge                                         = 5,
    EndCharge                                      = 6,
    ECheckFireResultType_MAX                       = 7

};


// Enum  Solarland.EOperateScopeStateReason
enum class EOperateScopeStateReason : uint8_t
{
    None                                           = 0,
    OpenScopeButton                                = 1,
    OpenQuickAds                                   = 2,
    Open                                           = 3,
    CloseReload                                    = 16,
    CloseBolt                                      = 32,
    Close                                          = 48,
    AllFlag                                        = 51,
    EOperateScopeStateReason_MAX                   = 52

};


// Enum  Solarland.EVehicleWeaponServerRecieveProto
enum class EVehicleWeaponServerRecieveProto : uint8_t
{
    Reload                                         = 0,
    StartReload                                    = 1,
    EVehicleWeaponServerRecieveProto_MAX           = 2

};


// Enum  Solarland.EWeaponSystemVehicleState
enum class EWeaponSystemVehicleState : uint8_t
{
    PreCharging                                    = 0,
    PreFire                                        = 1,
    PreReload                                      = 2,
    PreOpenScope                                   = 3,
    PreCloseScope                                  = 4,
    PreFireOverload                                = 5,
    EWeaponSystemVehicleState_MAX                  = 6

};


// Enum  Solarland.EWeaponSystemVehicleProto
enum class EWeaponSystemVehicleProto : uint8_t
{
    EWeaponSystemVehicleProto_Equip                = 0,
    EWeaponSystemVehicleProto_UnEquip              = 1,
    EWeaponSystemVehicleProto_StartReload          = 2,
    EWeaponSystemVehicleProto_MAX                  = 3

};


// Enum  Solarland.EHeroSubItemDeviceState
enum class EHeroSubItemDeviceState : uint8_t
{
    E_Normal                                       = 0,
    E_Warning                                      = 1,
    E_Trigger                                      = 2,
    E_Hit                                          = 3,
    E_Destroyed                                    = 4,
    E_MAX                                          = 5

};


// Enum  Solarland.EHeroSubItemType
enum class EHeroSubItemType : uint8_t
{
    E_Owl                                          = 0,
    E_AIDog                                        = 1,
    E_MAX                                          = 2

};


// Enum  Solarland.EMarkButtonState
enum class EMarkButtonState : uint8_t
{
    Normal                                         = 0,
    Pressed                                        = 1,
    Selecting                                      = 2,
    Canceled                                       = 3,
    Respond                                        = 4,
    EMarkButtonState_MAX                           = 5

};


// Enum  SolarlandResUpdate.EDownloadTaskError
enum class EDownloadTaskError : uint8_t
{
    ConnectFailed                                  = 0,
    RequestHeadFailed                              = 1,
    CreateFileFailed                               = 2,
    DownloadFailed                                 = 3,
    WriteFailed                                    = 4,
    DeleteOldFailed                                = 5,
    MoveFailed                                     = 6,
    CreateDownloadTaskFail                         = 7,
    GetPlatformFileFail                            = 8,
    GetWrongJsonFormat                             = 9,
    TempNotExist                                   = 10,
    WrongSize                                      = 11,
    HttpResponseInvalid                            = 12,
    EDownloadTaskError_MAX                         = 13

};


// Enum  CoreUObject.ELifetimeCondition
enum class ELifetimeCondition : uint8_t
{
    COND_None                                      = 0,
    COND_InitialOnly                               = 1,
    COND_OwnerOnly                                 = 2,
    COND_SkipOwner                                 = 3,
    COND_SimulatedOnly                             = 4,
    COND_AutonomousOnly                            = 5,
    COND_SimulatedOrPhysics                        = 6,
    COND_InitialOrOwner                            = 7,
    COND_Custom                                    = 8,
    COND_ReplayOrOwner                             = 9,
    COND_ReplayOnly                                = 10,
    COND_SimulatedOnlyNoReplay                     = 11,
    COND_SimulatedOrPhysicsNoReplay                = 12,
    COND_SkipReplay                                = 13,
    COND_Never                                     = 15,
    COND_Max                                       = 16

};


// Enum  CoreUObject.EDataValidationResult
enum class EDataValidationResult : uint8_t
{
    Invalid                                        = 0,
    Valid                                          = 1,
    NotValidated                                   = 2,
    EDataValidationResult_MAX                      = 3

};


// Enum  CoreUObject.EPropertyAccessChangeNotifyMode
enum class EPropertyAccessChangeNotifyMode : uint8_t
{
    Default                                        = 0,
    Never                                          = 1,
    Always                                         = 2,
    EPropertyAccessChangeNotifyMode_MAX            = 3

};


// Enum  CoreUObject.EUnit
enum class EUnit : uint8_t
{
    Micrometers                                    = 0,
    Millimeters                                    = 1,
    Centimeters                                    = 2,
    Meters                                         = 3,
    Kilometers                                     = 4,
    Inches                                         = 5,
    Feet                                           = 6,
    Yards                                          = 7,
    Miles                                          = 8,
    Lightyears                                     = 9,
    Degrees                                        = 10,
    Radians                                        = 11,
    MetersPerSecond                                = 12,
    KilometersPerHour                              = 13,
    MilesPerHour                                   = 14,
    Celsius                                        = 15,
    Farenheit                                      = 16,
    Kelvin                                         = 17,
    Micrograms                                     = 18,
    Milligrams                                     = 19,
    Grams                                          = 20,
    Kilograms                                      = 21,
    MetricTons                                     = 22,
    Ounces                                         = 23,
    Pounds                                         = 24,
    Stones                                         = 25,
    Newtons                                        = 26,
    PoundsForce                                    = 27,
    KilogramsForce                                 = 28,
    Hertz                                          = 29,
    Kilohertz                                      = 30,
    Megahertz                                      = 31,
    Gigahertz                                      = 32,
    RevolutionsPerMinute                           = 33,
    Bytes                                          = 34,
    Kilobytes                                      = 35,
    Megabytes                                      = 36,
    Gigabytes                                      = 37,
    Terabytes                                      = 38,
    Lumens                                         = 39,
    Milliseconds                                   = 43,
    Seconds                                        = 44,
    Minutes                                        = 45,
    Hours                                          = 46,
    Days                                           = 47,
    Months                                         = 48,
    Years                                          = 49,
    Multiplier                                     = 52,
    Percentage                                     = 51,
    Unspecified                                    = 53,
    EUnit_MAX                                      = 54

};


// Enum  CoreUObject.EPixelFormat
enum class EPixelFormat : uint8_t
{
    PF_Unknown                                     = 0,
    PF_A32B32G32R32F                               = 1,
    PF_B8G8R8A8                                    = 2,
    PF_G8                                          = 3,
    PF_G16                                         = 4,
    PF_DXT1                                        = 5,
    PF_DXT3                                        = 6,
    PF_DXT5                                        = 7,
    PF_UYVY                                        = 8,
    PF_FloatRGB                                    = 9,
    PF_FloatRGBA                                   = 10,
    PF_DepthStencil                                = 11,
    PF_ShadowDepth                                 = 12,
    PF_R32_FLOAT                                   = 13,
    PF_G16R16                                      = 14,
    PF_G16R16F                                     = 15,
    PF_G16R16F_FILTER                              = 16,
    PF_G32R32F                                     = 17,
    PF_A2B10G10R10                                 = 18,
    PF_A16B16G16R16                                = 19,
    PF_D24                                         = 20,
    PF_R16F                                        = 21,
    PF_R16F_FILTER                                 = 22,
    PF_BC5                                         = 23,
    PF_V8U8                                        = 24,
    PF_A1                                          = 25,
    PF_FloatR11G11B10                              = 26,
    PF_A8                                          = 27,
    PF_R32_UINT                                    = 28,
    PF_R32_SINT                                    = 29,
    PF_PVRTC2                                      = 30,
    PF_PVRTC4                                      = 31,
    PF_R16_UINT                                    = 32,
    PF_R16_SINT                                    = 33,
    PF_R16G16B16A16_UINT                           = 34,
    PF_R16G16B16A16_SINT                           = 35,
    PF_R5G6B5_UNORM                                = 36,
    PF_R8G8B8A8                                    = 37,
    PF_A8R8G8B8                                    = 38,
    PF_BC4                                         = 39,
    PF_R8G8                                        = 40,
    PF_ATC_RGB                                     = 41,
    PF_ATC_RGBA_E                                  = 42,
    PF_ATC_RGBA_I                                  = 43,
    PF_X24_G8                                      = 44,
    PF_ETC1                                        = 45,
    PF_ETC2_RGB                                    = 46,
    PF_ETC2_RGBA                                   = 47,
    PF_R32G32B32A32_UINT                           = 48,
    PF_R16G16_UINT                                 = 49,
    PF_ASTC_4x4                                    = 50,
    PF_ASTC_6x6                                    = 51,
    PF_ASTC_8x8                                    = 52,
    PF_ASTC_10x10                                  = 53,
    PF_ASTC_12x12                                  = 54,
    PF_BC6H                                        = 55,
    PF_BC7                                         = 56,
    PF_R8_UINT                                     = 57,
    PF_L8                                          = 58,
    PF_XGXR8                                       = 59,
    PF_R8G8B8A8_UINT                               = 60,
    PF_R8G8B8A8_SNORM                              = 61,
    PF_R16G16B16A16_UNORM                          = 62,
    PF_R16G16B16A16_SNORM                          = 63,
    PF_PLATFORM_HDR                                = 64,
    PF_PLATFORM_HDR                                = 65,
    PF_PLATFORM_HDR                                = 66,
    PF_NV12                                        = 67,
    PF_R32G32_UINT                                 = 68,
    PF_ETC2_R11_EAC                                = 69,
    PF_ETC2_RG11_EAC                               = 70,
    PF_MAX                                         = 71

};


// Enum  CoreUObject.EAxis
enum class EAxis : uint8_t
{
    None                                           = 0,
    X                                              = 1,
    Y                                              = 2,
    Z                                              = 3,
    EAxis_MAX                                      = 4

};


// Enum  CoreUObject.ELogTimes
enum class ELogTimes : uint8_t
{
    None                                           = 0,
    UTC                                            = 1,
    SinceGStartTime                                = 2,
    Local                                          = 3,
    ELogTimes_MAX                                  = 4

};


// Enum  CoreUObject.ESearchDir
enum class ESearchDir : uint8_t
{
    FromStart                                      = 0,
    FromEnd                                        = 1,
    ESearchDir_MAX                                 = 2

};


// Enum  CoreUObject.ESearchCase
enum class ESearchCase : uint8_t
{
    CaseSensitive                                  = 0,
    IgnoreCase                                     = 1,
    ESearchCase_MAX                                = 2

};


// Enum  CoreUObject.EPipelineSupportLevel
enum class EPipelineSupportLevel : uint8_t
{
    PSL_Mobile_Forward_LDR                         = 0,
    PSL_Mobile_Forward_HDR                         = 1,
    PSL_PC_Deferred                                = 2,
    PSL_MAX                                        = 3

};


// Enum  InputCore.EConsoleForGamepadLabels
enum class EConsoleForGamepadLabels : uint8_t
{
    None                                           = 0,
    XBoxOne                                        = 1,
    PS4                                            = 2,
    EConsoleForGamepadLabels_MAX                   = 3

};


// Enum  SlateCore.EFontLayoutMethod
enum class EFontLayoutMethod : uint8_t
{
    Metrics                                        = 0,
    BoundingBox                                    = 1,
    EFontLayoutMethod_MAX                          = 2

};


// Enum  SlateCore.EFontLoadingPolicy
enum class EFontLoadingPolicy : uint8_t
{
    LazyLoad                                       = 0,
    Stream                                         = 1,
    Inline                                         = 2,
    EFontLoadingPolicy_MAX                         = 3

};


// Enum  SlateCore.EFontHinting
enum class EFontHinting : uint8_t
{
    Default                                        = 0,
    Auto                                           = 1,
    AutoLight                                      = 2,
    Monochrome                                     = 3,
    None                                           = 4,
    EFontHinting_MAX                               = 5

};


// Enum  SlateCore.EFocusCause
enum class EFocusCause : uint8_t
{
    Mouse                                          = 0,
    Navigation                                     = 1,
    SetDirectly                                    = 2,
    Cleared                                        = 3,
    OtherWidgetLostFocus                           = 4,
    WindowActivate                                 = 5,
    EFocusCause_MAX                                = 6

};


// Enum  SlateCore.ESlateDebuggingFocusEvent
enum class ESlateDebuggingFocusEvent : uint8_t
{
    FocusChanging                                  = 0,
    FocusLost                                      = 1,
    FocusReceived                                  = 2,
    MAX                                            = 3

};


// Enum  SlateCore.ESlateDebuggingNavigationMethod
enum class ESlateDebuggingNavigationMethod : uint8_t
{
    Unknown                                        = 0,
    Explicit                                       = 1,
    CustomDelegateBound                            = 2,
    CustomDelegateUnbound                          = 3,
    NextOrPrevious                                 = 4,
    HitTestGrid                                    = 5,
    ESlateDebuggingNavigationMethod_MAX            = 6

};


// Enum  SlateCore.ESlateDebuggingStateChangeEvent
enum class ESlateDebuggingStateChangeEvent : uint8_t
{
    MouseCaptureGained                             = 0,
    MouseCaptureLost                               = 1,
    ESlateDebuggingStateChangeEvent_MAX            = 2

};


// Enum  SlateCore.ESlateDebuggingInputEvent
enum class ESlateDebuggingInputEvent : uint8_t
{
    MouseMove                                      = 0,
    MouseEnter                                     = 1,
    MouseLeave                                     = 2,
    PreviewMouseButtonDown                         = 3,
    MouseButtonDown                                = 4,
    MouseButtonUp                                  = 5,
    MouseButtonDoubleClick                         = 6,
    MouseWheel                                     = 7,
    TouchStart                                     = 8,
    TouchEnd                                       = 9,
    TouchForceChanged                              = 10,
    TouchFirstMove                                 = 11,
    TouchMoved                                     = 12,
    DragDetected                                   = 13,
    DragEnter                                      = 14,
    DragLeave                                      = 15,
    DragOver                                       = 16,
    DragDrop                                       = 17,
    DropMessage                                    = 18,
    PreviewKeyDown                                 = 19,
    KeyDown                                        = 20,
    KeyUp                                          = 21,
    KeyChar                                        = 22,
    AnalogInput                                    = 23,
    TouchGesture                                   = 24,
    MotionDetected                                 = 25,
    MAX                                            = 26

};


// Enum  SlateCore.EScrollDirection
enum class EScrollDirection : uint8_t
{
    Scroll_Down                                    = 0,
    Scroll_Up                                      = 1,
    Scroll_MAX                                     = 2

};


// Enum  SlateCore.EOrientation
enum class EOrientation : uint8_t
{
    Orient_Horizontal                              = 0,
    Orient_Vertical                                = 1,
    Orient_MAX                                     = 2

};


// Enum  SlateCore.EMenuPlacement
enum class EMenuPlacement : uint8_t
{
    MenuPlacement_BelowAnchor                      = 0,
    MenuPlacement_CenteredBelowAnchor              = 1,
    MenuPlacement_BelowRightAnchor                 = 2,
    MenuPlacement_ComboBox                         = 3,
    MenuPlacement_ComboBoxRight                    = 4,
    MenuPlacement_MenuRight                        = 5,
    MenuPlacement_AboveAnchor                      = 6,
    MenuPlacement_CenteredAboveAnchor              = 7,
    MenuPlacement_AboveRightAnchor                 = 8,
    MenuPlacement_MenuLeft                         = 9,
    MenuPlacement_Center                           = 10,
    MenuPlacement_RightLeftCenter                  = 11,
    MenuPlacement_MatchBottomLeft                  = 12,
    MenuPlacement_MAX                              = 13

};


// Enum  SlateCore.ENavigationGenesis
enum class ENavigationGenesis : uint8_t
{
    Keyboard                                       = 0,
    Controller                                     = 1,
    User                                           = 2,
    ENavigationGenesis_MAX                         = 3

};


// Enum  SlateCore.ENavigationSource
enum class ENavigationSource : uint8_t
{
    FocusedWidget                                  = 0,
    WidgetUnderCursor                              = 1,
    ENavigationSource_MAX                          = 2

};


// Enum  SlateCore.EUINavigationAction
enum class EUINavigationAction : uint8_t
{
    Accept                                         = 0,
    Back                                           = 1,
    Num                                            = 2,
    Invalid                                        = 3,
    EUINavigationAction_MAX                        = 4

};


// Enum  SlateCore.EButtonPressMethod
enum class EButtonPressMethod : uint8_t
{
    DownAndUp                                      = 0,
    ButtonPress                                    = 1,
    ButtonRelease                                  = 2,
    EButtonPressMethod_MAX                         = 3

};


// Enum  SlateCore.EButtonTouchMethod
enum class EButtonTouchMethod : uint8_t
{
    DownAndUp                                      = 0,
    Down                                           = 1,
    PreciseTap                                     = 2,
    EButtonTouchMethod_MAX                         = 3

};


// Enum  SlateCore.EButtonClickMethod
enum class EButtonClickMethod : uint8_t
{
    DownAndUp                                      = 0,
    MouseDown                                      = 1,
    MouseUp                                        = 2,
    PreciseClick                                   = 3,
    EButtonClickMethod_MAX                         = 4

};


// Enum  SlateCore.ESlateCheckBoxType
enum class ESlateCheckBoxType : uint8_t
{
    CheckBox                                       = 0,
    ToggleButton                                   = 1,
    ESlateCheckBoxType_MAX                         = 2

};


// Enum  SlateCore.ESlateParentWindowSearchMethod
enum class ESlateParentWindowSearchMethod : uint8_t
{
    ActiveWindow                                   = 0,
    MainWindow                                     = 1,
    ESlateParentWindowSearchMethod_MAX             = 2

};


// Enum  SlateCore.EConsumeMouseWheel
enum class EConsumeMouseWheel : uint8_t
{
    WhenScrollingPossible                          = 0,
    Always                                         = 1,
    Never                                          = 2,
    EConsumeMouseWheel_MAX                         = 3

};


// Enum  ImageWrapper.EBitmapCSType
enum class EBitmapCSType : uint32_t
{
    BCST_BLCS_CALIBRATED_RGB                       = 0,
    BCST_LCS_sRGB                                  = 1934772034,
    BCST_LCS_WINDOWS_COLOR_SPACE                   = 1466527264,
    BCST_PROFILE_LINKED                            = 1279872587,
    BCST_PROFILE_EMBEDDED                          = 1296188740,
    BCST_MAX                                       = 1934772035

};


// Enum  ImageWrapper.EBitmapHeaderVersion
enum class EBitmapHeaderVersion : uint8_t
{
    BHV_BITMAPINFOHEADER                           = 0,
    BHV_BITMAPV2INFOHEADER                         = 1,
    BHV_BITMAPV3INFOHEADER                         = 2,
    BHV_BITMAPV4HEADER                             = 3,
    BHV_BITMAPV5HEADER                             = 4,
    BHV_MAX                                        = 5

};


// Enum  Slate.ETableViewMode
enum class ETableViewMode : uint8_t
{
    List                                           = 0,
    Tile                                           = 1,
    Tree                                           = 2,
    ETableViewMode_MAX                             = 3

};


// Enum  Slate.ESelectionMode
enum class ESelectionMode : uint8_t
{
    None                                           = 0,
    Single                                         = 1,
    SingleToggle                                   = 2,
    Multi                                          = 3,
    ESelectionMode_MAX                             = 4

};


// Enum  Slate.EMultiBlockType
enum class EMultiBlockType : uint8_t
{
    None                                           = 0,
    ButtonRow                                      = 1,
    EditableText                                   = 2,
    Heading                                        = 3,
    MenuEntry                                      = 4,
    MenuSeparator                                  = 5,
    ToolBarButton                                  = 6,
    ToolBarComboButton                             = 7,
    ToolBarSeparator                               = 8,
    Widget                                         = 9,
    EMultiBlockType_MAX                            = 10

};


// Enum  Slate.EMultiBoxType
enum class EMultiBoxType : uint8_t
{
    MenuBar                                        = 0,
    ToolBar                                        = 1,
    VerticalToolBar                                = 2,
    UniformToolBar                                 = 3,
    Menu                                           = 4,
    ButtonRow                                      = 5,
    ToolMenuBar                                    = 6,
    EMultiBoxType_MAX                              = 7

};


// Enum  Slate.EProgressBarFillType
enum class EProgressBarFillType : uint8_t
{
    LeftToRight                                    = 0,
    RightToLeft                                    = 1,
    FillFromCenter                                 = 2,
    TopToBottom                                    = 3,
    BottomToTop                                    = 4,
    EProgressBarFillType_MAX                       = 5

};


// Enum  Slate.EStretch
enum class EStretch : uint8_t
{
    None                                           = 0,
    Fill                                           = 1,
    ScaleToFit                                     = 2,
    ScaleToFitX                                    = 3,
    ScaleToFitY                                    = 4,
    ScaleToFill                                    = 5,
    ScaleBySafeZone                                = 6,
    UserSpecified                                  = 7,
    EStretch_MAX                                   = 8

};


// Enum  Slate.EStretchDirection
enum class EStretchDirection : uint8_t
{
    Both                                           = 0,
    DownOnly                                       = 1,
    UpOnly                                         = 2,
    EStretchDirection_MAX                          = 3

};


// Enum  Slate.EScrollWhenFocusChanges
enum class EScrollWhenFocusChanges : uint8_t
{
    NoScroll                                       = 0,
    InstantScroll                                  = 1,
    AnimatedScroll                                 = 2,
    EScrollWhenFocusChanges_MAX                    = 3

};


// Enum  Slate.EDescendantScrollDestination
enum class EDescendantScrollDestination : uint8_t
{
    IntoView                                       = 0,
    TopOrLeft                                      = 1,
    Center                                         = 2,
    EDescendantScrollDestination_MAX               = 3

};


// Enum  Slate.EListItemAlignment
enum class EListItemAlignment : uint8_t
{
    EvenlyDistributed                              = 0,
    EvenlySize                                     = 1,
    EvenlyWide                                     = 2,
    LeftAligned                                    = 3,
    RightAligned                                   = 4,
    CenterAligned                                  = 5,
    Fill                                           = 6,
    EListItemAlignment_MAX                         = 7

};


// Enum  Slate.ECustomizedToolMenuVisibility
enum class ECustomizedToolMenuVisibility : uint8_t
{
    None                                           = 0,
    Visible                                        = 1,
    Hidden                                         = 2,
    ECustomizedToolMenuVisibility_MAX              = 3

};


// Enum  Slate.EMultipleKeyBindingIndex
enum class EMultipleKeyBindingIndex : uint8_t
{
    Primary                                        = 0,
    Secondary                                      = 1,
    NumChords                                      = 2,
    EMultipleKeyBindingIndex_MAX                   = 3

};


// Enum  Slate.EUserInterfaceActionType
enum class EUserInterfaceActionType : uint8_t
{
    None                                           = 0,
    Button                                         = 1,
    ToggleButton                                   = 2,
    RadioButton                                    = 3,
    Check                                          = 4,
    CollapsedButton                                = 5,
    EUserInterfaceActionType_MAX                   = 6

};


// Enum  ImageWriteQueue.EDesiredImageFormat
enum class EDesiredImageFormat : uint8_t
{
    PNG                                            = 0,
    JPG                                            = 1,
    BMP                                            = 2,
    EXR                                            = 3,
    EDesiredImageFormat_MAX                        = 4

};


// Enum  MaterialShaderQualitySettings.EMobileCSMQuality
enum class EMobileCSMQuality : uint8_t
{
    NoFiltering                                    = 0,
    PCF_1x1                                        = 1,
    PCF_2x2                                        = 2,
    PCF_3x3                                        = 3,
    EMobileCSMQuality_MAX                          = 4

};


// Enum  EyeTracker.EEyeTrackerStatus
enum class EEyeTrackerStatus : uint8_t
{
    NotConnected                                   = 0,
    NotTracking                                    = 1,
    Tracking                                       = 2,
    EEyeTrackerStatus_MAX                          = 3

};


// Enum  EngineSettings.ESubLevelStripMode
enum class ESubLevelStripMode : uint8_t
{
    ExactClass                                     = 0,
    IsChildOf                                      = 1,
    ESubLevelStripMode_MAX                         = 2

};


// Enum  EngineSettings.EFourPlayerSplitScreenType
enum class EFourPlayerSplitScreenType : uint8_t
{
    Grid                                           = 0,
    Vertical                                       = 1,
    Horizontal                                     = 2,
    EFourPlayerSplitScreenType_MAX                 = 3

};


// Enum  EngineSettings.EThreePlayerSplitScreenType
enum class EThreePlayerSplitScreenType : uint8_t
{
    FavorTop                                       = 0,
    FavorBottom                                    = 1,
    Vertical                                       = 2,
    Horizontal                                     = 3,
    EThreePlayerSplitScreenType_MAX                = 4

};


// Enum  EngineSettings.ETwoPlayerSplitScreenType
enum class ETwoPlayerSplitScreenType : uint8_t
{
    Horizontal                                     = 0,
    Vertical                                       = 1,
    ETwoPlayerSplitScreenType_MAX                  = 2

};


// Enum  FieldSystemCore.EFieldPhysicsDefaultFields
enum class EFieldPhysicsDefaultFields : uint8_t
{
    Field_RadialIntMask                            = 0,
    Field_RadialFalloff                            = 1,
    Field_UniformVector                            = 2,
    Field_RadialVector                             = 3,
    Field_RadialVectorFalloff                      = 4,
    Field_EFieldPhysicsDefaultFields_Max           = 5,
    Field_MAX                                      = 6

};


// Enum  FieldSystemCore.EFieldPhysicsType
enum class EFieldPhysicsType : uint8_t
{
    Field_None                                     = 0,
    Field_DynamicState                             = 1,
    Field_LinearForce                              = 2,
    Field_ExternalClusterStrain                    = 3,
    Field_Kill                                     = 4,
    Field_LinearVelocity                           = 5,
    Field_AngularVelociy                           = 6,
    Field_AngularTorque                            = 7,
    Field_InternalClusterStrain                    = 8,
    Field_DisableThreshold                         = 9,
    Field_SleepingThreshold                        = 10,
    Field_PositionStatic                           = 11,
    Field_PositionAnimated                         = 12,
    Field_PositionTarget                           = 13,
    Field_DynamicConstraint                        = 14,
    Field_CollisionGroup                           = 15,
    Field_ActivateDisabled                         = 16,
    Field_PhysicsType_Max                          = 17

};


// Enum  FieldSystemCore.EFieldFalloffType
enum class EFieldFalloffType : uint8_t
{
    Field_FallOff_None                             = 0,
    Field_Falloff_Linear                           = 1,
    Field_Falloff_Inverse                          = 2,
    Field_Falloff_Squared                          = 3,
    Field_Falloff_Logarithmic                      = 4,
    Field_Falloff_Max                              = 5

};


// Enum  FieldSystemCore.EFieldResolutionType
enum class EFieldResolutionType : uint8_t
{
    Field_Resolution_Minimal                       = 0,
    Field_Resolution_DisabledParents               = 1,
    Field_Resolution_Maximum                       = 2,
    Field_Resolution_Max                           = 3

};


// Enum  FieldSystemCore.EFieldCullingOperationType
enum class EFieldCullingOperationType : uint8_t
{
    Field_Culling_Inside                           = 0,
    Field_Culling_Outside                          = 1,
    Field_Culling_Operation_Max                    = 2,
    Field_Culling_MAX                              = 3

};


// Enum  FieldSystemCore.EFieldOperationType
enum class EFieldOperationType : uint8_t
{
    Field_Multiply                                 = 0,
    Field_Divide                                   = 1,
    Field_Add                                      = 2,
    Field_Substract                                = 3,
    Field_Operation_Max                            = 4

};


// Enum  FieldSystemCore.ESetMaskConditionType
enum class ESetMaskConditionType : uint8_t
{
    Field_Set_Always                               = 0,
    Field_Set_IFF_NOT_Interior                     = 1,
    Field_Set_IFF_NOT_Exterior                     = 2,
    Field_MaskCondition_Max                        = 3

};


// Enum  PhysicsCore.EChaosBufferMode
enum class EChaosBufferMode : uint8_t
{
    Double                                         = 0,
    Triple                                         = 1,
    Num                                            = 2,
    Invalid                                        = 3,
    EChaosBufferMode_MAX                           = 4

};


// Enum  PhysicsCore.EChaosThreadingMode
enum class EChaosThreadingMode : uint8_t
{
    DedicatedThread                                = 0,
    TaskGraph                                      = 1,
    SingleThread                                   = 2,
    Num                                            = 3,
    Invalid                                        = 4,
    EChaosThreadingMode_MAX                        = 5

};


// Enum  PhysicsCore.EChaosSolverTickMode
enum class EChaosSolverTickMode : uint8_t
{
    Fixed                                          = 0,
    Variable                                       = 1,
    VariableCapped                                 = 2,
    VariableCappedWithTarget                       = 3,
    EChaosSolverTickMode_MAX                       = 4

};


// Enum  Engine.ERelativeTransformSpace
enum class ERelativeTransformSpace : uint8_t
{
    RTS_World                                      = 0,
    RTS_Actor                                      = 1,
    RTS_Component                                  = 2,
    RTS_ParentBoneSpace                            = 3,
    RTS_MAX                                        = 4

};


// Enum  Engine.EComponentMobility
enum class EComponentMobility : uint8_t
{
    Static                                         = 0,
    Stationary                                     = 1,
    Movable                                        = 2,
    EComponentMobility_MAX                         = 3

};


// Enum  Engine.EDetailMode
enum class EDetailMode : uint8_t
{
    DM_Low                                         = 0,
    DM_Medium                                      = 1,
    DM_High                                        = 2,
    DM_MAX                                         = 5

};


// Enum  MRMesh.EMeshTrackerVertexColorMode
enum class EMeshTrackerVertexColorMode : uint8_t
{
    None                                           = 0,
    Confidence                                     = 1,
    Block                                          = 2,
    EMeshTrackerVertexColorMode_MAX                = 3

};


// Enum  AugmentedReality.EARTrackingState
enum class EARTrackingState : uint8_t
{
    Unknown                                        = 0,
    Tracking                                       = 1,
    NotTracking                                    = 2,
    StoppedTracking                                = 3,
    EARTrackingState_MAX                           = 4

};


// Enum  AugmentedReality.EARSessionTrackingFeature
enum class EARSessionTrackingFeature : uint8_t
{
    None                                           = 0,
    PoseDetection2D                                = 1,
    PersonSegmentation                             = 2,
    PersonSegmentationWithDepth                    = 3,
    EARSessionTrackingFeature_MAX                  = 4

};


// Enum  AugmentedReality.EARFaceTrackingUpdate
enum class EARFaceTrackingUpdate : uint8_t
{
    CurvesAndGeo                                   = 0,
    CurvesOnly                                     = 1,
    EARFaceTrackingUpdate_MAX                      = 2

};


// Enum  AugmentedReality.EAREnvironmentCaptureProbeType
enum class EAREnvironmentCaptureProbeType : uint8_t
{
    None                                           = 0,
    Manual                                         = 1,
    Automatic                                      = 2,
    EAREnvironmentCaptureProbeType_MAX             = 3

};


// Enum  AugmentedReality.EARFrameSyncMode
enum class EARFrameSyncMode : uint8_t
{
    SyncTickWithCameraImage                        = 0,
    SyncTickWithoutCameraImage                     = 1,
    EARFrameSyncMode_MAX                           = 2

};


// Enum  AugmentedReality.EARLightEstimationMode
enum class EARLightEstimationMode : uint8_t
{
    None                                           = 0,
    AmbientLightEstimate                           = 1,
    DirectionalLightEstimate                       = 2,
    EARLightEstimationMode_MAX                     = 3

};


// Enum  AugmentedReality.EARPlaneDetectionMode
enum class EARPlaneDetectionMode : uint8_t
{
    None                                           = 0,
    HorizontalPlaneDetection                       = 1,
    VerticalPlaneDetection                         = 2,
    EARPlaneDetectionMode_MAX                      = 3

};


// Enum  AugmentedReality.EARSessionType
enum class EARSessionType : uint8_t
{
    None                                           = 0,
    Orientation                                    = 1,
    World                                          = 2,
    Face                                           = 3,
    Image                                          = 4,
    ObjectScanning                                 = 5,
    PoseTracking                                   = 6,
    EARSessionType_MAX                             = 7

};


// Enum  AugmentedReality.EARWorldAlignment
enum class EARWorldAlignment : uint8_t
{
    Gravity                                        = 0,
    GravityAndHeading                              = 1,
    Camera                                         = 2,
    EARWorldAlignment_MAX                          = 3

};


// Enum  AugmentedReality.EARDepthAccuracy
enum class EARDepthAccuracy : uint8_t
{
    Unkown                                         = 0,
    Approximate                                    = 1,
    Accurate                                       = 2,
    EARDepthAccuracy_MAX                           = 3

};


// Enum  AugmentedReality.EARDepthQuality
enum class EARDepthQuality : uint8_t
{
    Unkown                                         = 0,
    Low                                            = 1,
    High                                           = 2,
    EARDepthQuality_MAX                            = 3

};


// Enum  AugmentedReality.EARTextureType
enum class EARTextureType : uint8_t
{
    CameraImage                                    = 0,
    CameraDepth                                    = 1,
    EnvironmentCapture                             = 2,
    EARTextureType_MAX                             = 3

};


// Enum  AugmentedReality.EAREye
enum class EAREye : uint8_t
{
    LeftEye                                        = 0,
    RightEye                                       = 1,
    EAREye_MAX                                     = 2

};


// Enum  AugmentedReality.EARFaceBlendShape
enum class EARFaceBlendShape : uint8_t
{
    EyeBlinkLeft                                   = 0,
    EyeLookDownLeft                                = 1,
    EyeLookInLeft                                  = 2,
    EyeLookOutLeft                                 = 3,
    EyeLookUpLeft                                  = 4,
    EyeSquintLeft                                  = 5,
    EyeWideLeft                                    = 6,
    EyeBlinkRight                                  = 7,
    EyeLookDownRight                               = 8,
    EyeLookInRight                                 = 9,
    EyeLookOutRight                                = 10,
    EyeLookUpRight                                 = 11,
    EyeSquintRight                                 = 12,
    EyeWideRight                                   = 13,
    JawForward                                     = 14,
    JawLeft                                        = 15,
    JawRight                                       = 16,
    JawOpen                                        = 17,
    MouthClose                                     = 18,
    MouthFunnel                                    = 19,
    MouthPucker                                    = 20,
    MouthLeft                                      = 21,
    MouthRight                                     = 22,
    MouthSmileLeft                                 = 23,
    MouthSmileRight                                = 24,
    MouthFrownLeft                                 = 25,
    MouthFrownRight                                = 26,
    MouthDimpleLeft                                = 27,
    MouthDimpleRight                               = 28,
    MouthStretchLeft                               = 29,
    MouthStretchRight                              = 30,
    MouthRollLower                                 = 31,
    MouthRollUpper                                 = 32,
    MouthShrugLower                                = 33,
    MouthShrugUpper                                = 34,
    MouthPressLeft                                 = 35,
    MouthPressRight                                = 36,
    MouthLowerDownLeft                             = 37,
    MouthLowerDownRight                            = 38,
    MouthUpperUpLeft                               = 39,
    MouthUpperUpRight                              = 40,
    BrowDownLeft                                   = 41,
    BrowDownRight                                  = 42,
    BrowInnerUp                                    = 43,
    BrowOuterUpLeft                                = 44,
    BrowOuterUpRight                               = 45,
    CheekPuff                                      = 46,
    CheekSquintLeft                                = 47,
    CheekSquintRight                               = 48,
    NoseSneerLeft                                  = 49,
    NoseSneerRight                                 = 50,
    TongueOut                                      = 51,
    HeadYaw                                        = 52,
    HeadPitch                                      = 53,
    HeadRoll                                       = 54,
    LeftEyeYaw                                     = 55,
    LeftEyePitch                                   = 56,
    LeftEyeRoll                                    = 57,
    RightEyeYaw                                    = 58,
    RightEyePitch                                  = 59,
    RightEyeRoll                                   = 60,
    MAX                                            = 61

};


// Enum  AugmentedReality.EARFaceTrackingDirection
enum class EARFaceTrackingDirection : uint8_t
{
    FaceRelative                                   = 0,
    FaceMirrored                                   = 1,
    EARFaceTrackingDirection_MAX                   = 2

};


// Enum  AugmentedReality.EARCandidateImageOrientation
enum class EARCandidateImageOrientation : uint8_t
{
    Landscape                                      = 0,
    Portrait                                       = 1,
    EARCandidateImageOrientation_MAX               = 2

};


// Enum  AugmentedReality.EARJointTransformSpace
enum class EARJointTransformSpace : uint8_t
{
    Model                                          = 0,
    ParentJoint                                    = 1,
    EARJointTransformSpace_MAX                     = 2

};


// Enum  AugmentedReality.EARObjectClassification
enum class EARObjectClassification : uint8_t
{
    NotApplicable                                  = 0,
    Unknown                                        = 1,
    Wall                                           = 2,
    Ceiling                                        = 3,
    Floor                                          = 4,
    Table                                          = 5,
    Seat                                           = 6,
    Face                                           = 7,
    Image                                          = 8,
    World                                          = 9,
    SceneObject                                    = 10,
    HandMesh                                       = 11,
    EARObjectClassification_MAX                    = 12

};


// Enum  AugmentedReality.EARPlaneOrientation
enum class EARPlaneOrientation : uint8_t
{
    Horizontal                                     = 0,
    Vertical                                       = 1,
    Diagonal                                       = 2,
    EARPlaneOrientation_MAX                        = 3

};


// Enum  AugmentedReality.EARWorldMappingState
enum class EARWorldMappingState : uint8_t
{
    NotAvailable                                   = 0,
    StillMappingNotRelocalizable                   = 1,
    StillMappingRelocalizable                      = 2,
    Mapped                                         = 3,
    EARWorldMappingState_MAX                       = 4

};


// Enum  AugmentedReality.EARSessionStatus
enum class EARSessionStatus : uint8_t
{
    NotStarted                                     = 0,
    Running                                        = 1,
    NotSupported                                   = 2,
    FatalError                                     = 3,
    PermissionNotGranted                           = 4,
    UnsupportedConfiguration                       = 5,
    Other                                          = 6,
    EARSessionStatus_MAX                           = 7

};


// Enum  AugmentedReality.EARTrackingQualityReason
enum class EARTrackingQualityReason : uint8_t
{
    None                                           = 0,
    Initializing                                   = 1,
    Relocalizing                                   = 2,
    ExcessiveMotion                                = 3,
    InsufficientFeatures                           = 4,
    EARTrackingQualityReason_MAX                   = 5

};


// Enum  AugmentedReality.EARTrackingQuality
enum class EARTrackingQuality : uint8_t
{
    NotTracking                                    = 0,
    OrientationOnly                                = 1,
    OrientationAndPosition                         = 2,
    EARTrackingQuality_MAX                         = 3

};


// Enum  AugmentedReality.EARLineTraceChannels
enum class EARLineTraceChannels : uint8_t
{
    None                                           = 0,
    FeaturePoint                                   = 1,
    GroundPlane                                    = 2,
    PlaneUsingExtent                               = 4,
    PlaneUsingBoundaryPolygon                      = 8,
    EARLineTraceChannels_MAX                       = 9

};


// Enum  HeadMountedDisplay.EXRTrackedDeviceType
enum class EXRTrackedDeviceType : uint8_t
{
    HeadMountedDisplay                             = 0,
    Controller                                     = 1,
    TrackingReference                              = 2,
    Other                                          = 3,
    Invalid                                        = 254,
    Any                                            = 255,
    EXRTrackedDeviceType_MAX                       = 256

};


// Enum  HeadMountedDisplay.ESpectatorScreenMode
enum class ESpectatorScreenMode : uint8_t
{
    Disabled                                       = 0,
    SingleEyeLetterboxed                           = 1,
    Undistorted                                    = 2,
    Distorted                                      = 3,
    SingleEye                                      = 4,
    SingleEyeCroppedToFill                         = 5,
    Texture                                        = 6,
    TexturePlusEye                                 = 7,
    ESpectatorScreenMode_MAX                       = 8

};


// Enum  HeadMountedDisplay.EHMDWornState
enum class EHMDWornState : uint8_t
{
    Unknown                                        = 0,
    Worn                                           = 1,
    NotWorn                                        = 2,
    EHMDWornState_MAX                              = 3

};


// Enum  HeadMountedDisplay.EHMDTrackingOrigin
enum class EHMDTrackingOrigin : uint8_t
{
    Floor                                          = 0,
    Eye                                            = 1,
    Stage                                          = 2,
    EHMDTrackingOrigin_MAX                         = 3

};


// Enum  HeadMountedDisplay.EOrientPositionSelector
enum class EOrientPositionSelector : uint8_t
{
    Orientation                                    = 0,
    Position                                       = 1,
    OrientationAndPosition                         = 2,
    EOrientPositionSelector_MAX                    = 3

};


// Enum  HeadMountedDisplay.ETrackingStatus
enum class ETrackingStatus : uint8_t
{
    NotTracked                                     = 0,
    InertialOnly                                   = 1,
    Tracked                                        = 2,
    ETrackingStatus_MAX                            = 3

};


// Enum  Foliage.EFoliageScaling
enum class EFoliageScaling : uint8_t
{
    Uniform                                        = 0,
    Free                                           = 1,
    LockXY                                         = 2,
    LockXZ                                         = 3,
    LockYZ                                         = 4,
    EFoliageScaling_MAX                            = 5

};


// Enum  Foliage.EVertexColorMaskChannel
enum class EVertexColorMaskChannel : uint8_t
{
    Red                                            = 0,
    Green                                          = 1,
    Blue                                           = 2,
    Alpha                                          = 3,
    MAX_None                                       = 4,
    EVertexColorMaskChannel_MAX                    = 5

};


// Enum  Foliage.FoliageVertexColorMask
enum class FoliageVertexColorMask : uint8_t
{
    FOLIAGEVERTEXCOLORMASK_Disabled                = 0,
    FOLIAGEVERTEXCOLORMASK_Red                     = 1,
    FOLIAGEVERTEXCOLORMASK_Green                   = 2,
    FOLIAGEVERTEXCOLORMASK_Blue                    = 3,
    FOLIAGEVERTEXCOLORMASK_Alpha                   = 4,
    FOLIAGEVERTEXCOLORMASK_MAX                     = 5

};


// Enum  Foliage.ESimulationQuery
enum class ESimulationQuery : uint8_t
{
    None                                           = 0,
    CollisionOverlap                               = 1,
    ShadeOverlap                                   = 2,
    AnyOverlap                                     = 3,
    ESimulationQuery_MAX                           = 4

};


// Enum  Foliage.ESimulationOverlap
enum class ESimulationOverlap : uint8_t
{
    CollisionOverlap                               = 0,
    ShadeOverlap                                   = 1,
    None                                           = 2,
    ESimulationOverlap_MAX                         = 3

};


// Enum  Landscape.ELandscapeBlendMode
enum class ELandscapeBlendMode : uint8_t
{
    LSBM_AdditiveBlend                             = 0,
    LSBM_AlphaBlend                                = 1,
    LSBM_MAX                                       = 2

};


// Enum  Landscape.ELandscapeSetupErrors
enum class ELandscapeSetupErrors : uint8_t
{
    LSE_None                                       = 0,
    LSE_NoLandscapeInfo                            = 1,
    LSE_CollsionXY                                 = 2,
    LSE_NoLayerInfo                                = 3,
    LSE_MAX                                        = 4

};


// Enum  Landscape.ELandscapeClearMode
enum class ELandscapeClearMode : uint8_t
{
    Clear_Weightmap                                = 1,
    Clear_Heightmap                                = 2,
    Clear_All                                      = 3,
    Clear_MAX                                      = 4

};


// Enum  Landscape.ELandscapeGizmoType
enum class ELandscapeGizmoType : uint8_t
{
    LGT_None                                       = 0,
    LGT_Height                                     = 1,
    LGT_Weight                                     = 2,
    LGT_MAX                                        = 3

};


// Enum  Landscape.EGrassScaling
enum class EGrassScaling : uint8_t
{
    Uniform                                        = 0,
    Free                                           = 1,
    LockXY                                         = 2,
    EGrassScaling_MAX                              = 3

};


// Enum  Landscape.ESplineModulationColorMask
enum class ESplineModulationColorMask : uint8_t
{
    Red                                            = 0,
    Green                                          = 1,
    Blue                                           = 2,
    Alpha                                          = 3,
    ESplineModulationColorMask_MAX                 = 4

};


// Enum  Landscape.ELandscapeLODFalloff
enum class ELandscapeLODFalloff : uint8_t
{
    Linear                                         = 0,
    SquareRoot                                     = 1,
    ELandscapeLODFalloff_MAX                       = 2

};


// Enum  Landscape.ELandscapeLayerDisplayMode
enum class ELandscapeLayerDisplayMode : uint8_t
{
    Default                                        = 0,
    Alphabetical                                   = 1,
    UserSpecific                                   = 2,
    ELandscapeLayerDisplayMode_MAX                 = 3

};


// Enum  Landscape.ELandscapeLayerPaintingRestriction
enum class ELandscapeLayerPaintingRestriction : uint8_t
{
    None                                           = 0,
    UseMaxLayers                                   = 1,
    ExistingOnly                                   = 2,
    UseComponentWhitelist                          = 3,
    ELandscapeLayerPaintingRestriction_MAX         = 4

};


// Enum  Landscape.ELandscapeImportAlphamapType
enum class ELandscapeImportAlphamapType : uint8_t
{
    Additive                                       = 0,
    Layered                                        = 1,
    ELandscapeImportAlphamapType_MAX               = 2

};


// Enum  Landscape.LandscapeSplineMeshOrientation
enum class LandscapeSplineMeshOrientation : uint8_t
{
    LSMO_XUp                                       = 0,
    LSMO_YUp                                       = 1,
    LSMO_MAX                                       = 2

};


// Enum  Landscape.ELandscapeLayerBlendType
enum class ELandscapeLayerBlendType : uint8_t
{
    LB_WeightBlend                                 = 0,
    LB_AlphaBlend                                  = 1,
    LB_HeightBlend                                 = 2,
    LB_MAX                                         = 3

};


// Enum  Landscape.ELandscapeCustomizedCoordType
enum class ELandscapeCustomizedCoordType : uint8_t
{
    LCCT_None                                      = 0,
    LCCT_CustomUV0                                 = 1,
    LCCT_CustomUV1                                 = 2,
    LCCT_CustomUV2                                 = 3,
    LCCT_WeightMapUV                               = 4,
    LCCT_MAX                                       = 5

};


// Enum  Landscape.ETerrainCoordMappingType
enum class ETerrainCoordMappingType : uint8_t
{
    TCMT_Auto                                      = 0,
    TCMT_XY                                        = 1,
    TCMT_XZ                                        = 2,
    TCMT_YZ                                        = 3,
    TCMT_MAX                                       = 4

};


// Enum  TimeManagement.EFrameNumberDisplayFormats
enum class EFrameNumberDisplayFormats : uint8_t
{
    NonDropFrameTimecode                           = 0,
    DropFrameTimecode                              = 1,
    Seconds                                        = 2,
    Frames                                         = 3,
    MAX_Count                                      = 4,
    EFrameNumberDisplayFormats_MAX                 = 5

};


// Enum  TimeManagement.ETimedDataInputState
enum class ETimedDataInputState : uint8_t
{
    Connected                                      = 0,
    Unresponsive                                   = 1,
    Disconnected                                   = 2,
    ETimedDataInputState_MAX                       = 3

};


// Enum  TimeManagement.ETimedDataInputEvaluationType
enum class ETimedDataInputEvaluationType : uint8_t
{
    None                                           = 0,
    Timecode                                       = 1,
    PlatformTime                                   = 2,
    ETimedDataInputEvaluationType_MAX              = 3

};


// Enum  MovieScene.EMovieSceneKeyInterpolation
enum class EMovieSceneKeyInterpolation : uint8_t
{
    Auto                                           = 0,
    User                                           = 1,
    Break                                          = 2,
    Linear                                         = 3,
    Constant                                       = 4,
    EMovieSceneKeyInterpolation_MAX                = 5

};


// Enum  MovieScene.EMovieSceneBlendType
enum class EMovieSceneBlendType : uint8_t
{
    Invalid                                        = 0,
    Absolute                                       = 1,
    Additive                                       = 2,
    Relative                                       = 4,
    EMovieSceneBlendType_MAX                       = 5

};


// Enum  MovieScene.EMovieSceneBuiltInEasing
enum class EMovieSceneBuiltInEasing : uint8_t
{
    Linear                                         = 0,
    SinIn                                          = 1,
    SinOut                                         = 2,
    SinInOut                                       = 3,
    QuadIn                                         = 4,
    QuadOut                                        = 5,
    QuadInOut                                      = 6,
    CubicIn                                        = 7,
    CubicOut                                       = 8,
    CubicInOut                                     = 9,
    QuartIn                                        = 10,
    QuartOut                                       = 11,
    QuartInOut                                     = 12,
    QuintIn                                        = 13,
    QuintOut                                       = 14,
    QuintInOut                                     = 15,
    ExpoIn                                         = 16,
    ExpoOut                                        = 17,
    ExpoInOut                                      = 18,
    CircIn                                         = 19,
    CircOut                                        = 20,
    CircInOut                                      = 21,
    EMovieSceneBuiltInEasing_MAX                   = 22

};


// Enum  MovieScene.EEvaluationMethod
enum class EEvaluationMethod : uint8_t
{
    Static                                         = 0,
    Swept                                          = 1,
    EEvaluationMethod_MAX                          = 2

};


// Enum  MovieScene.EUpdateClockSource
enum class EUpdateClockSource : uint8_t
{
    Tick                                           = 0,
    Platform                                       = 1,
    Audio                                          = 2,
    RelativeTimecode                               = 3,
    Timecode                                       = 4,
    Custom                                         = 5,
    EUpdateClockSource_MAX                         = 6

};


// Enum  MovieScene.EMovieSceneEvaluationType
enum class EMovieSceneEvaluationType : uint8_t
{
    FrameLocked                                    = 0,
    WithSubFrames                                  = 1,
    EMovieSceneEvaluationType_MAX                  = 2

};


// Enum  MovieScene.EMovieScenePlayerStatus
enum class EMovieScenePlayerStatus : uint8_t
{
    Stopped                                        = 0,
    Playing                                        = 1,
    Recording                                      = 2,
    Scrubbing                                      = 3,
    Jumping                                        = 4,
    Stepping                                       = 5,
    Paused                                         = 6,
    MAX                                            = 7

};


// Enum  MovieScene.EMovieSceneObjectBindingSpace
enum class EMovieSceneObjectBindingSpace : uint8_t
{
    Local                                          = 0,
    Root                                           = 1,
    EMovieSceneObjectBindingSpace_MAX              = 2

};


// Enum  MovieScene.EMovieSceneCompletionMode
enum class EMovieSceneCompletionMode : uint8_t
{
    KeepState                                      = 0,
    RestoreState                                   = 1,
    ProjectDefault                                 = 2,
    EMovieSceneCompletionMode_MAX                  = 3

};


// Enum  MovieScene.ESectionEvaluationFlags
enum class ESectionEvaluationFlags : uint8_t
{
    None                                           = 0,
    PreRoll                                        = 1,
    PostRoll                                       = 2,
    ESectionEvaluationFlags_MAX                    = 3

};


// Enum  MovieScene.EUpdatePositionMethod
enum class EUpdatePositionMethod : uint8_t
{
    Play                                           = 0,
    Jump                                           = 1,
    Scrub                                          = 2,
    EUpdatePositionMethod_MAX                      = 3

};


// Enum  MovieScene.ESpawnOwnership
enum class ESpawnOwnership : uint8_t
{
    InnerSequence                                  = 0,
    MasterSequence                                 = 1,
    External                                       = 2,
    ESpawnOwnership_MAX                            = 3

};


// Enum  AnimationCore.ETransformConstraintType
enum class ETransformConstraintType : uint8_t
{
    Translation                                    = 0,
    Rotation                                       = 1,
    Scale                                          = 2,
    Parent                                         = 3,
    ETransformConstraintType_MAX                   = 4

};


// Enum  AnimationCore.EConstraintType
enum class EConstraintType : uint8_t
{
    Transform                                      = 0,
    Aim                                            = 1,
    MAX                                            = 2

};


// Enum  AnimGraphRuntime.ESphericalLimitType
enum class ESphericalLimitType : uint8_t
{
    Inner                                          = 0,
    Outer                                          = 1,
    ESphericalLimitType_MAX                        = 2

};


// Enum  AnimGraphRuntime.AnimPhysSimSpaceType
enum class AnimPhysSimSpaceType : uint8_t
{
    Component                                      = 0,
    Actor                                          = 1,
    World                                          = 2,
    RootRelative                                   = 3,
    BoneRelative                                   = 4,
    AnimPhysSimSpaceType_MAX                       = 5

};


// Enum  AnimGraphRuntime.AnimPhysLinearConstraintType
enum class AnimPhysLinearConstraintType : uint8_t
{
    Free                                           = 0,
    Limited                                        = 1,
    AnimPhysLinearConstraintType_MAX               = 2

};


// Enum  AnimGraphRuntime.AnimPhysAngularConstraintType
enum class AnimPhysAngularConstraintType : uint8_t
{
    Angular                                        = 0,
    Cone                                           = 1,
    AnimPhysAngularConstraintType_MAX              = 2

};


// Enum  AnimGraphRuntime.EBlendListTransitionType
enum class EBlendListTransitionType : uint8_t
{
    StandardBlend                                  = 0,
    Inertialization                                = 1,
    EBlendListTransitionType_MAX                   = 2

};


// Enum  AnimGraphRuntime.EDrivenDestinationMode
enum class EDrivenDestinationMode : uint8_t
{
    Bone                                           = 0,
    MorphTarget                                    = 1,
    MaterialParameter                              = 2,
    EDrivenDestinationMode_MAX                     = 3

};


// Enum  AnimGraphRuntime.EDrivenBoneModificationMode
enum class EDrivenBoneModificationMode : uint8_t
{
    AddToInput                                     = 0,
    ReplaceComponent                               = 1,
    AddToRefPose                                   = 2,
    EDrivenBoneModificationMode_MAX                = 3

};


// Enum  AnimGraphRuntime.EConstraintOffsetOption
enum class EConstraintOffsetOption : uint8_t
{
    None                                           = 0,
    Offset_RefPose                                 = 1,
    EConstraintOffsetOption_MAX                    = 2

};


// Enum  AnimGraphRuntime.CopyBoneDeltaMode
enum class CopyBoneDeltaMode : uint8_t
{
    Accumulate                                     = 0,
    Copy                                           = 1,
    CopyBoneDeltaMode_MAX                          = 2

};


// Enum  AnimGraphRuntime.EInterpolationBlend
enum class EInterpolationBlend : uint8_t
{
    Linear                                         = 0,
    Cubic                                          = 1,
    Sinusoidal                                     = 2,
    EaseInOutExponent2                             = 3,
    EaseInOutExponent3                             = 4,
    EaseInOutExponent4                             = 5,
    EaseInOutExponent5                             = 6,
    MAX                                            = 7

};


// Enum  AnimGraphRuntime.EBoneModificationMode
enum class EBoneModificationMode : uint8_t
{
    BMM_Ignore                                     = 0,
    BMM_Replace                                    = 1,
    BMM_Additive                                   = 2,
    BMM_MAX                                        = 3

};


// Enum  AnimGraphRuntime.EModifyCurveApplyMode
enum class EModifyCurveApplyMode : uint8_t
{
    Add                                            = 0,
    Scale                                          = 1,
    Blend                                          = 2,
    WeightedMovingAverage                          = 3,
    RemapCurve                                     = 4,
    EModifyCurveApplyMode_MAX                      = 5

};


// Enum  AnimGraphRuntime.EPoseDriverOutput
enum class EPoseDriverOutput : uint8_t
{
    DrivePoses                                     = 0,
    DriveCurves                                    = 1,
    EPoseDriverOutput_MAX                          = 2

};


// Enum  AnimGraphRuntime.EPoseDriverSource
enum class EPoseDriverSource : uint8_t
{
    Rotation                                       = 0,
    Translation                                    = 1,
    EPoseDriverSource_MAX                          = 2

};


// Enum  AnimGraphRuntime.EPoseDriverType
enum class EPoseDriverType : uint8_t
{
    SwingAndTwist                                  = 0,
    SwingOnly                                      = 1,
    Translation                                    = 2,
    EPoseDriverType_MAX                            = 3

};


// Enum  AnimGraphRuntime.ESnapshotSourceMode
enum class ESnapshotSourceMode : uint8_t
{
    NamedSnapshot                                  = 0,
    SnapshotPin                                    = 1,
    ESnapshotSourceMode_MAX                        = 2

};


// Enum  AnimGraphRuntime.ERefPoseType
enum class ERefPoseType : uint8_t
{
    EIT_LocalSpace                                 = 0,
    EIT_Additive                                   = 1,
    EIT_MAX                                        = 2

};


// Enum  AnimGraphRuntime.ESimulationSpace
enum class ESimulationSpace : uint8_t
{
    ComponentSpace                                 = 0,
    WorldSpace                                     = 1,
    BaseBoneSpace                                  = 2,
    ESimulationSpace_MAX                           = 3

};


// Enum  AnimGraphRuntime.EScaleChainInitialLength
enum class EScaleChainInitialLength : uint8_t
{
    FixedDefaultLengthValue                        = 0,
    Distance                                       = 1,
    ChainLength                                    = 2,
    EScaleChainInitialLength_MAX                   = 3

};


// Enum  AnimGraphRuntime.ESequenceEvalReinit
enum class ESequenceEvalReinit : uint8_t
{
    NoReset                                        = 0,
    StartPosition                                  = 1,
    ExplicitTime                                   = 2,
    ESequenceEvalReinit_MAX                        = 3

};


// Enum  AnimGraphRuntime.ESplineBoneAxis
enum class ESplineBoneAxis : uint8_t
{
    None                                           = 0,
    X                                              = 1,
    Y                                              = 2,
    Z                                              = 3,
    ESplineBoneAxis_MAX                            = 4

};


// Enum  AnimGraphRuntime.ERotationComponent
enum class ERotationComponent : uint8_t
{
    EulerX                                         = 0,
    EulerY                                         = 1,
    EulerZ                                         = 2,
    QuaternionAngle                                = 3,
    SwingAngle                                     = 4,
    TwistAngle                                     = 5,
    ERotationComponent_MAX                         = 6

};


// Enum  AnimGraphRuntime.EEasingFuncType
enum class EEasingFuncType : uint8_t
{
    Linear                                         = 0,
    Sinusoidal                                     = 1,
    Cubic                                          = 2,
    QuadraticInOut                                 = 3,
    CubicInOut                                     = 4,
    HermiteCubic                                   = 5,
    QuarticInOut                                   = 6,
    QuinticInOut                                   = 7,
    CircularIn                                     = 8,
    CircularOut                                    = 9,
    CircularInOut                                  = 10,
    ExpIn                                          = 11,
    ExpOut                                         = 12,
    ExpInOut                                       = 13,
    CustomCurve                                    = 14,
    EEasingFuncType_MAX                            = 15

};


// Enum  AnimGraphRuntime.ERBFNormalizeMethod
enum class ERBFNormalizeMethod : uint8_t
{
    OnlyNormalizeAboveOne                          = 0,
    AlwaysNormalize                                = 1,
    NormalizeWithinMedian                          = 2,
    NoNormalization                                = 3,
    ERBFNormalizeMethod_MAX                        = 4

};


// Enum  AnimGraphRuntime.ERBFDistanceMethod
enum class ERBFDistanceMethod : uint8_t
{
    Euclidean                                      = 0,
    Quaternion                                     = 1,
    SwingAngle                                     = 2,
    TwistAngle                                     = 3,
    DefaultMethod                                  = 4,
    ERBFDistanceMethod_MAX                         = 5

};


// Enum  AnimGraphRuntime.ERBFFunctionType
enum class ERBFFunctionType : uint8_t
{
    Gaussian                                       = 0,
    Exponential                                    = 1,
    Linear                                         = 2,
    Cubic                                          = 3,
    Quintic                                        = 4,
    DefaultFunction                                = 5,
    ERBFFunctionType_MAX                           = 6

};


// Enum  AnimGraphRuntime.ERBFSolverType
enum class ERBFSolverType : uint8_t
{
    Additive                                       = 0,
    Interpolative                                  = 1,
    ERBFSolverType_MAX                             = 2

};


// Enum  MovieSceneTracks.MovieScene3DPathSection_Axis
enum class MovieScene3DPathSection_Axis : uint8_t
{
    X                                              = 0,
    Y                                              = 1,
    Z                                              = 2,
    NEG_X                                          = 3,
    NEG_Y                                          = 4,
    NEG_Z                                          = 5,
    MovieScene3DPathSection_MAX                    = 6

};


// Enum  MovieSceneTracks.EFireEventsAtPosition
enum class EFireEventsAtPosition : uint8_t
{
    AtStartOfEvaluation                            = 0,
    AtEndOfEvaluation                              = 1,
    AfterSpawn                                     = 2,
    EFireEventsAtPosition_MAX                      = 3

};


// Enum  MovieSceneTracks.ELevelVisibility
enum class ELevelVisibility : uint8_t
{
    Visible                                        = 0,
    Hidden                                         = 1,
    ELevelVisibility_MAX                           = 2

};


// Enum  MovieSceneTracks.EParticleKey
enum class EParticleKey : uint8_t
{
    Activate                                       = 0,
    Deactivate                                     = 1,
    Trigger                                        = 2,
    EParticleKey_MAX                               = 3

};


// Enum  UMG.EDragPivot
enum class EDragPivot : uint8_t
{
    MouseDown                                      = 0,
    TopLeft                                        = 1,
    TopCenter                                      = 2,
    TopRight                                       = 3,
    CenterLeft                                     = 4,
    CenterCenter                                   = 5,
    CenterRight                                    = 6,
    BottomLeft                                     = 7,
    BottomCenter                                   = 8,
    BottomRight                                    = 9,
    EDragPivot_MAX                                 = 10

};


// Enum  UMG.EDynamicBoxType
enum class EDynamicBoxType : uint8_t
{
    Horizontal                                     = 0,
    Vertical                                       = 1,
    Wrap                                           = 2,
    Overlay                                        = 3,
    EDynamicBoxType_MAX                            = 4

};


// Enum  UMG.ESlateSizeRule
enum class ESlateSizeRule : uint8_t
{
    Automatic                                      = 0,
    Fill                                           = 1,
    ESlateSizeRule_MAX                             = 2

};


// Enum  UMG.EWidgetDesignFlags
enum class EWidgetDesignFlags : uint8_t
{
    None                                           = 0,
    Designing                                      = 1,
    ShowOutline                                    = 2,
    ExecutePreConstruct                            = 4,
    EWidgetDesignFlags_MAX                         = 5

};


// Enum  UMG.EBindingKind
enum class EBindingKind : uint8_t
{
    Function                                       = 0,
    Property                                       = 1,
    EBindingKind_MAX                               = 2

};


// Enum  UMG.EWindowVisibility
enum class EWindowVisibility : uint8_t
{
    Visible                                        = 0,
    SelfHitTestInvisible                           = 1,
    EWindowVisibility_MAX                          = 2

};


// Enum  UMG.EWidgetGeometryMode
enum class EWidgetGeometryMode : uint8_t
{
    Plane                                          = 0,
    Cylinder                                       = 1,
    EWidgetGeometryMode_MAX                        = 2

};


// Enum  UMG.EWidgetBlendMode
enum class EWidgetBlendMode : uint8_t
{
    Opaque                                         = 0,
    Masked                                         = 1,
    Transparent                                    = 2,
    EWidgetBlendMode_MAX                           = 3

};


// Enum  UMG.EWidgetTimingPolicy
enum class EWidgetTimingPolicy : uint8_t
{
    RealTime                                       = 0,
    GameTime                                       = 1,
    EWidgetTimingPolicy_MAX                        = 2

};


// Enum  UMG.EWidgetSpace
enum class EWidgetSpace : uint8_t
{
    World                                          = 0,
    Screen                                         = 1,
    EWidgetSpace_MAX                               = 2

};


// Enum  UMG.EWidgetInteractionSource
enum class EWidgetInteractionSource : uint8_t
{
    World                                          = 0,
    Mouse                                          = 1,
    CenterScreen                                   = 2,
    Custom                                         = 3,
    EWidgetInteractionSource_MAX                   = 4

};


// Enum  CinematicCamera.ECameraFocusMethod
enum class ECameraFocusMethod : uint8_t
{
    DoNotOverride                                  = 0,
    Manual                                         = 1,
    Tracking                                       = 2,
    Disable                                        = 3,
    MAX                                            = 4

};


// Enum  AudioPlatformConfiguration.ESoundwaveSampleRateSettings
enum class ESoundwaveSampleRateSettings : uint8_t
{
    Max                                            = 0,
    High                                           = 1,
    Medium                                         = 2,
    Low                                            = 3,
    Min                                            = 4,
    MatchDevice                                    = 5

};


// Enum  AudioMixer.EAudioSpectrumType
enum class EAudioSpectrumType : uint8_t
{
    MagnitudeSpectrum                              = 0,
    PowerSpectrum                                  = 1,
    EAudioSpectrumType_MAX                         = 2

};


// Enum  AudioMixer.EFFTWindowType
enum class EFFTWindowType : uint8_t
{
    None                                           = 0,
    Hamming                                        = 1,
    Hann                                           = 2,
    Blackman                                       = 3,
    EFFTWindowType_MAX                             = 4

};


// Enum  AudioMixer.EFFTPeakInterpolationMethod
enum class EFFTPeakInterpolationMethod : uint8_t
{
    NearestNeighbor                                = 0,
    Linear                                         = 1,
    Quadratic                                      = 2,
    EFFTPeakInterpolationMethod_MAX                = 3

};


// Enum  AudioMixer.EFFTSize
enum class EFFTSize : uint8_t
{
    DefaultSize                                    = 0,
    Min                                            = 1,
    Small                                          = 2,
    Medium                                         = 3,
    Large                                          = 4,
    Max                                            = 5

};


// Enum  AudioMixer.ESubmixEffectDynamicsChannelLinkMode
enum class ESubmixEffectDynamicsChannelLinkMode : uint8_t
{
    Disabled                                       = 0,
    Average                                        = 1,
    Peak                                           = 2,
    Count                                          = 3,
    ESubmixEffectDynamicsChannelLinkMode_MAX       = 4

};


// Enum  AudioMixer.ESubmixEffectDynamicsPeakMode
enum class ESubmixEffectDynamicsPeakMode : uint8_t
{
    MeanSquared                                    = 0,
    RootMeanSquared                                = 1,
    Peak                                           = 2,
    Count                                          = 3,
    ESubmixEffectDynamicsPeakMode_MAX              = 4

};


// Enum  AudioMixer.ESubmixEffectDynamicsProcessorType
enum class ESubmixEffectDynamicsProcessorType : uint8_t
{
    Compressor                                     = 0,
    Limiter                                        = 1,
    Expander                                       = 2,
    Gate                                           = 3,
    Count                                          = 4,
    ESubmixEffectDynamicsProcessorType_MAX         = 5

};


// Enum  GameplayTags.EGameplayTagQueryExprType
enum class EGameplayTagQueryExprType : uint8_t
{
    Undefined                                      = 0,
    AnyTagsMatch                                   = 1,
    AllTagsMatch                                   = 2,
    NoTagsMatch                                    = 3,
    AnyExprMatch                                   = 4,
    AllExprMatch                                   = 5,
    NoExprMatch                                    = 6,
    EGameplayTagQueryExprType_MAX                  = 7

};


// Enum  GameplayTags.EGameplayContainerMatchType
enum class EGameplayContainerMatchType : uint8_t
{
    Any                                            = 0,
    All                                            = 1,
    EGameplayContainerMatchType_MAX                = 2

};


// Enum  GameplayTags.EGameplayTagMatchType
enum class EGameplayTagMatchType : uint8_t
{
    Explicit                                       = 0,
    IncludeParentTags                              = 1,
    EGameplayTagMatchType_MAX                      = 2

};


// Enum  GameplayTags.EGameplayTagSelectionType
enum class EGameplayTagSelectionType : uint8_t
{
    None                                           = 0,
    NonRestrictedOnly                              = 1,
    RestrictedOnly                                 = 2,
    All                                            = 3,
    EGameplayTagSelectionType_MAX                  = 4

};


// Enum  GameplayTags.EGameplayTagSourceType
enum class EGameplayTagSourceType : uint8_t
{
    Native                                         = 0,
    DefaultTagList                                 = 1,
    TagList                                        = 2,
    RestrictedTagList                              = 3,
    DataTable                                      = 4,
    Invalid                                        = 5,
    EGameplayTagSourceType_MAX                     = 6

};


// Enum  MeshDescription.EComputeNTBsOptions
enum class EComputeNTBsOptions : uint8_t
{
    None                                           = 0,
    Normals                                        = 1,
    Tangents                                       = 2,
    WeightedNTBs                                   = 4,
    EComputeNTBsOptions_MAX                        = 5

};


// Enum  GeometryCollectionCore.EGeometryCollectionCacheType
enum class EGeometryCollectionCacheType : uint8_t
{
    None                                           = 0,
    Record                                         = 1,
    Play                                           = 2,
    RecordAndPlay                                  = 3,
    EGeometryCollectionCacheType_MAX               = 4

};


// Enum  GeometryCollectionSimulationCore.EEmissionPatternTypeEnum
enum class EEmissionPatternTypeEnum : uint8_t
{
    Chaos_Emission_Pattern_First_Frame             = 0,
    Chaos_Emission_Pattern_On_Demand               = 1,
    Chaos_Max                                      = 2

};


// Enum  GeometryCollectionSimulationCore.EInitialVelocityTypeEnum
enum class EInitialVelocityTypeEnum : uint8_t
{
    Chaos_Initial_Velocity_User_Defined            = 0,
    Chaos_Initial_Velocity_None                    = 1,
    Chaos_Max                                      = 2

};


// Enum  GeometryCollectionSimulationCore.EGeometryCollectionPhysicsTypeEnum
enum class EGeometryCollectionPhysicsTypeEnum : uint8_t
{
    Chaos_AngularVelocity                          = 0,
    Chaos_DynamicState                             = 1,
    Chaos_LinearVelocity                           = 2,
    Chaos_InitialAngularVelocity                   = 3,
    Chaos_InitialLinearVelocity                    = 4,
    Chaos_CollisionGroup                           = 5,
    Chaos_LinearForce                              = 6,
    Chaos_AngularTorque                            = 7,
    Chaos_Max                                      = 8

};


// Enum  GeometryCollectionSimulationCore.EObjectStateTypeEnum
enum class EObjectStateTypeEnum : uint8_t
{
    Chaos_NONE                                     = 0,
    Chaos_Object_Sleeping                          = 1,
    Chaos_Object_Kinematic                         = 2,
    Chaos_Object_Static                            = 3,
    Chaos_Object_Dynamic                           = 4,
    Chaos_Object_UserDefined                       = 100,
    Chaos_Max                                      = 101

};


// Enum  GeometryCollectionSimulationCore.EImplicitTypeEnum
enum class EImplicitTypeEnum : uint8_t
{
    Chaos_Implicit_Box                             = 0,
    Chaos_Implicit_Sphere                          = 1,
    Chaos_Implicit_Capsule                         = 2,
    Chaos_Implicit_LevelSet                        = 3,
    Chaos_Implicit_None                            = 4,
    Chaos_Max                                      = 5

};


// Enum  GeometryCollectionSimulationCore.ECollisionTypeEnum
enum class ECollisionTypeEnum : uint8_t
{
    Chaos_Volumetric                               = 0,
    Chaos_Surface_Volumetric                       = 1,
    Chaos_Max                                      = 2

};


// Enum  MediaUtils.EMediaPlayerOptionBooleanOverride
enum class EMediaPlayerOptionBooleanOverride : uint8_t
{
    UseMediaPlayerSetting                          = 0,
    Enabled                                        = 1,
    Disabled                                       = 2,
    EMediaPlayerOptionBooleanOverride_MAX          = 3

};


// Enum  MediaAssets.EMediaWebcamCaptureDeviceFilter
enum class EMediaWebcamCaptureDeviceFilter : uint8_t
{
    None                                           = 0,
    DepthSensor                                    = 1,
    Front                                          = 2,
    Rear                                           = 4,
    Unknown                                        = 8,
    EMediaWebcamCaptureDeviceFilter_MAX            = 9

};


// Enum  MediaAssets.EMediaVideoCaptureDeviceFilter
enum class EMediaVideoCaptureDeviceFilter : uint8_t
{
    None                                           = 0,
    Card                                           = 1,
    Software                                       = 2,
    Unknown                                        = 4,
    Webcam                                         = 8,
    EMediaVideoCaptureDeviceFilter_MAX             = 9

};


// Enum  MediaAssets.EMediaAudioCaptureDeviceFilter
enum class EMediaAudioCaptureDeviceFilter : uint8_t
{
    None                                           = 0,
    Card                                           = 1,
    Microphone                                     = 2,
    Software                                       = 4,
    Unknown                                        = 8,
    EMediaAudioCaptureDeviceFilter_MAX             = 9

};


// Enum  MediaAssets.EMediaPlayerTrack
enum class EMediaPlayerTrack : uint8_t
{
    Audio                                          = 0,
    Caption                                        = 1,
    Metadata                                       = 2,
    Script                                         = 3,
    Subtitle                                       = 4,
    Text                                           = 5,
    Video                                          = 6,
    EMediaPlayerTrack_MAX                          = 7

};


// Enum  MediaAssets.EMediaSoundComponentFFTSize
enum class EMediaSoundComponentFFTSize : uint8_t
{
    Min                                            = 0,
    Small                                          = 1,
    Medium                                         = 2,
    Large                                          = 3,
    EMediaSoundComponentFFTSize_MAX                = 4

};


// Enum  MediaAssets.EMediaSoundChannels
enum class EMediaSoundChannels : uint8_t
{
    Mono                                           = 0,
    Stereo                                         = 1,
    Surround                                       = 2,
    EMediaSoundChannels_MAX                        = 3

};


// Enum  MovieSceneCapture.EHDRCaptureGamut
enum class EHDRCaptureGamut : uint8_t
{
    HCGM_Rec709                                    = 0,
    HCGM_P3DCI                                     = 1,
    HCGM_Rec2020                                   = 2,
    HCGM_ACES                                      = 3,
    HCGM_ACEScg                                    = 4,
    HCGM_Linear                                    = 5,
    HCGM_MAX                                       = 6

};


// Enum  MovieSceneCapture.EMovieSceneCaptureProtocolState
enum class EMovieSceneCaptureProtocolState : uint8_t
{
    Idle                                           = 0,
    Initialized                                    = 1,
    Capturing                                      = 2,
    Finalizing                                     = 3,
    EMovieSceneCaptureProtocolState_MAX            = 4

};


// Enum  MoviePlayer.EMoviePlaybackType
enum class EMoviePlaybackType : uint8_t
{
    MT_Normal                                      = 0,
    MT_Looped                                      = 1,
    MT_LoadingLoop                                 = 2,
    MT_MAX                                         = 3

};


// Enum  Engine.EAlphaBlendOption
enum class EAlphaBlendOption : uint8_t
{
    Linear                                         = 0,
    Cubic                                          = 1,
    HermiteCubic                                   = 2,
    Sinusoidal                                     = 3,
    QuadraticInOut                                 = 4,
    CubicInOut                                     = 5,
    QuarticInOut                                   = 6,
    QuinticInOut                                   = 7,
    CircularIn                                     = 8,
    CircularOut                                    = 9,
    CircularInOut                                  = 10,
    ExpIn                                          = 11,
    ExpOut                                         = 12,
    ExpInOut                                       = 13,
    Custom                                         = 14,
    EAlphaBlendOption_MAX                          = 15

};


// Enum  Engine.EAnimGroupRole
enum class EAnimGroupRole : uint8_t
{
    CanBeLeader                                    = 0,
    AlwaysFollower                                 = 1,
    AlwaysLeader                                   = 2,
    TransitionLeader                               = 3,
    TransitionFollower                             = 4,
    EAnimGroupRole_MAX                             = 5

};


// Enum  Engine.EPreviewAnimationBlueprintApplicationMethod
enum class EPreviewAnimationBlueprintApplicationMethod : uint8_t
{
    LinkedLayers                                   = 0,
    LinkedAnimGraph                                = 1,
    EPreviewAnimationBlueprintApplicationMethod_MAX = 2

};


// Enum  Engine.AnimationKeyFormat
enum class AnimationKeyFormat : uint8_t
{
    AKF_ConstantKeyLerp                            = 0,
    AKF_VariableKeyLerp                            = 1,
    AKF_PerTrackCompression                        = 2,
    AKF_MAX                                        = 3

};


// Enum  Engine.ERawCurveTrackTypes
enum class ERawCurveTrackTypes : uint8_t
{
    RCT_Float                                      = 0,
    RCT_Vector                                     = 1,
    RCT_Transform                                  = 2,
    RCT_MAX                                        = 3

};


// Enum  Engine.EAnimAssetCurveFlags
enum class EAnimAssetCurveFlags : uint8_t
{
    AACF_NONE                                      = 0,
    AACF_DriveMorphTarget_DEPRECATED               = 1,
    AACF_DriveAttribute_DEPRECATED                 = 2,
    AACF_Editable                                  = 4,
    AACF_DriveMaterial_DEPRECATED                  = 8,
    AACF_Metadata                                  = 16,
    AACF_DriveTrack                                = 32,
    AACF_Disabled                                  = 64,
    AACF_MAX                                       = 65

};


// Enum  Engine.AnimationCompressionFormat
enum class AnimationCompressionFormat : uint8_t
{
    ACF_None                                       = 0,
    ACF_Float96NoW                                 = 1,
    ACF_Fixed48NoW                                 = 2,
    ACF_IntervalFixed32NoW                         = 3,
    ACF_Fixed32NoW                                 = 4,
    ACF_Float32NoW                                 = 5,
    ACF_Identity                                   = 6,
    ACF_MAX                                        = 7

};


// Enum  Engine.EAdditiveBasePoseType
enum class EAdditiveBasePoseType : uint8_t
{
    ABPT_None                                      = 0,
    ABPT_RefPose                                   = 1,
    ABPT_AnimScaled                                = 2,
    ABPT_AnimFrame                                 = 3,
    ABPT_MAX                                       = 4

};


// Enum  Engine.ERootMotionMode
enum class ERootMotionMode : uint8_t
{
    NoRootMotionExtraction                         = 0,
    IgnoreRootMotion                               = 1,
    RootMotionFromEverything                       = 2,
    RootMotionFromMontagesOnly                     = 3,
    ERootMotionMode_MAX                            = 4

};


// Enum  Engine.ERootMotionRootLock
enum class ERootMotionRootLock : uint8_t
{
    RefPose                                        = 0,
    AnimFirstFrame                                 = 1,
    Zero                                           = 2,
    ERootMotionRootLock_MAX                        = 3

};


// Enum  Engine.EMontagePlayReturnType
enum class EMontagePlayReturnType : uint8_t
{
    MontageLength                                  = 0,
    Duration                                       = 1,
    EMontagePlayReturnType_MAX                     = 2

};


// Enum  Engine.EDrawDebugItemType
enum class EDrawDebugItemType : uint8_t
{
    DirectionalArrow                               = 0,
    Sphere                                         = 1,
    Line                                           = 2,
    OnScreenMessage                                = 3,
    CoordinateSystem                               = 4,
    EDrawDebugItemType_MAX                         = 5

};


// Enum  Engine.EAnimLinkMethod
enum class EAnimLinkMethod : uint8_t
{
    Absolute                                       = 0,
    Relative                                       = 1,
    Proportional                                   = 2,
    EAnimLinkMethod_MAX                            = 3

};


// Enum  Engine.EMontageSubStepResult
enum class EMontageSubStepResult : uint8_t
{
    Moved                                          = 0,
    NotMoved                                       = 1,
    InvalidSection                                 = 2,
    InvalidMontage                                 = 3,
    EMontageSubStepResult_MAX                      = 4

};


// Enum  Engine.EAnimNotifyEventType
enum class EAnimNotifyEventType : uint8_t
{
    Begin                                          = 0,
    End                                            = 1,
    EAnimNotifyEventType_MAX                       = 2

};


// Enum  Engine.EInertializationSpace
enum class EInertializationSpace : uint8_t
{
    Default                                        = 0,
    WorldSpace                                     = 1,
    WorldRotation                                  = 2,
    EInertializationSpace_MAX                      = 3

};


// Enum  Engine.EInertializationBoneState
enum class EInertializationBoneState : uint8_t
{
    Invalid                                        = 0,
    Valid                                          = 1,
    Excluded                                       = 2,
    EInertializationBoneState_MAX                  = 3

};


// Enum  Engine.EInertializationState
enum class EInertializationState : uint8_t
{
    Inactive                                       = 0,
    Pending                                        = 1,
    Active                                         = 2,
    EInertializationState_MAX                      = 3

};


// Enum  Engine.EEvaluatorMode
enum class EEvaluatorMode : uint8_t
{
    EM_Standard                                    = 0,
    EM_Freeze                                      = 1,
    EM_DelayedFreeze                               = 2,
    EM_MAX                                         = 3

};


// Enum  Engine.EEvaluatorDataSource
enum class EEvaluatorDataSource : uint8_t
{
    EDS_SourcePose                                 = 0,
    EDS_DestinationPose                            = 1,
    EDS_MAX                                        = 2

};


// Enum  Engine.ECopyType
enum class ECopyType : uint8_t
{
    PlainProperty                                  = 0,
    BoolProperty                                   = 1,
    StructProperty                                 = 2,
    ObjectProperty                                 = 3,
    NameProperty                                   = 4,
    ECopyType_MAX                                  = 5

};


// Enum  Engine.EPostCopyOperation
enum class EPostCopyOperation : uint8_t
{
    None                                           = 0,
    LogicalNegateBool                              = 1,
    EPostCopyOperation_MAX                         = 2

};


// Enum  Engine.EPinHidingMode
enum class EPinHidingMode : uint8_t
{
    NeverAsPin                                     = 0,
    PinHiddenByDefault                             = 1,
    PinShownByDefault                              = 2,
    AlwaysAsPin                                    = 3,
    EPinHidingMode_MAX                             = 4

};


// Enum  Engine.AnimPhysCollisionType
enum class AnimPhysCollisionType : uint8_t
{
    CoM                                            = 0,
    CustomSphere                                   = 1,
    InnerSphere                                    = 2,
    OuterSphere                                    = 3,
    AnimPhysCollisionType_MAX                      = 4

};


// Enum  Engine.AnimPhysTwistAxis
enum class AnimPhysTwistAxis : uint8_t
{
    AxisX                                          = 0,
    AxisY                                          = 1,
    AxisZ                                          = 2,
    AnimPhysTwistAxis_MAX                          = 3

};


// Enum  Engine.ETypeAdvanceAnim
enum class ETypeAdvanceAnim : uint8_t
{
    ETAA_Default                                   = 0,
    ETAA_Finished                                  = 1,
    ETAA_Looped                                    = 2,
    ETAA_MAX                                       = 3

};


// Enum  Engine.ETransitionLogicType
enum class ETransitionLogicType : uint8_t
{
    TLT_StandardBlend                              = 0,
    TLT_Inertialization                            = 1,
    TLT_Custom                                     = 2,
    TLT_MAX                                        = 3

};


// Enum  Engine.ETransitionBlendMode
enum class ETransitionBlendMode : uint8_t
{
    TBM_Linear                                     = 0,
    TBM_Cubic                                      = 1,
    TBM_MAX                                        = 2

};


// Enum  Engine.EComponentType
enum class EComponentType : uint8_t
{
    None                                           = 0,
    TranslationX                                   = 1,
    TranslationY                                   = 2,
    TranslationZ                                   = 3,
    RotationX                                      = 4,
    RotationY                                      = 5,
    RotationZ                                      = 6,
    Scale                                          = 7,
    ScaleX                                         = 8,
    ScaleY                                         = 9,
    ScaleZ                                         = 10,
    EComponentType_MAX                             = 11

};


// Enum  Engine.EAxisOption
enum class EAxisOption : uint8_t
{
    X                                              = 0,
    Y                                              = 1,
    Z                                              = 2,
    X_Neg                                          = 3,
    Y_Neg                                          = 4,
    Z_Neg                                          = 5,
    Custom                                         = 6,
    EAxisOption_MAX                                = 7

};


// Enum  Engine.EAnimInterpolationType
enum class EAnimInterpolationType : uint8_t
{
    Linear                                         = 0,
    Step                                           = 1,
    EAnimInterpolationType_MAX                     = 2

};


// Enum  Engine.ECurveBlendOption
enum class ECurveBlendOption : uint8_t
{
    Override                                       = 0,
    DoNotOverride                                  = 1,
    NormalizeByWeight                              = 2,
    BlendByWeight                                  = 3,
    UseBasePose                                    = 4,
    UseMaxValue                                    = 5,
    UseMinValue                                    = 6,
    ECurveBlendOption_MAX                          = 7

};


// Enum  Engine.EAdditiveAnimationType
enum class EAdditiveAnimationType : uint8_t
{
    AAT_None                                       = 0,
    AAT_LocalSpaceBase                             = 1,
    AAT_RotationOffsetMeshSpace                    = 2,
    AAT_MAX                                        = 3

};


// Enum  Engine.ENotifyFilterType
enum class ENotifyFilterType : uint8_t
{
    NoFiltering                                    = 0,
    LOD                                            = 1,
    SignificanceLevel                              = 2,
    ENotifyFilterType_MAX                          = 3

};


// Enum  Engine.EMontageNotifyTickType
enum class EMontageNotifyTickType : uint8_t
{
    Queued                                         = 0,
    BranchingPoint                                 = 1,
    EMontageNotifyTickType_MAX                     = 2

};


// Enum  Engine.EBoneRotationSource
enum class EBoneRotationSource : uint8_t
{
    BRS_KeepComponentSpaceRotation                 = 0,
    BRS_KeepLocalSpaceRotation                     = 1,
    BRS_CopyFromTarget                             = 2,
    BRS_MAX                                        = 3

};


// Enum  Engine.EBoneControlSpace
enum class EBoneControlSpace : uint8_t
{
    BCS_WorldSpace                                 = 0,
    BCS_ComponentSpace                             = 1,
    BCS_ParentBoneSpace                            = 2,
    BCS_BoneSpace                                  = 3,
    BCS_MAX                                        = 4

};


// Enum  Engine.EBoneAxis
enum class EBoneAxis : uint8_t
{
    BA_X                                           = 0,
    BA_Y                                           = 1,
    BA_Z                                           = 2,
    BA_MAX                                         = 3

};


// Enum  Engine.EPrimaryAssetCookRule
enum class EPrimaryAssetCookRule : uint8_t
{
    Unknown                                        = 0,
    NeverCook                                      = 1,
    DevelopmentCook                                = 2,
    DevelopmentAlwaysCook                          = 3,
    AlwaysCook                                     = 4,
    EPrimaryAssetCookRule_MAX                      = 5

};


// Enum  Engine.ENaturalSoundFalloffMode
enum class ENaturalSoundFalloffMode : uint8_t
{
    Continues                                      = 0,
    Silent                                         = 1,
    Hold                                           = 2,
    ENaturalSoundFalloffMode_MAX                   = 3

};


// Enum  Engine.EAttenuationShape
enum class EAttenuationShape : uint8_t
{
    Sphere                                         = 0,
    Capsule                                        = 1,
    Box                                            = 2,
    Cone                                           = 3,
    EAttenuationShape_MAX                          = 4

};


// Enum  Engine.EAttenuationDistanceModel
enum class EAttenuationDistanceModel : uint8_t
{
    Linear                                         = 0,
    Logarithmic                                    = 1,
    Inverse                                        = 2,
    LogReverse                                     = 3,
    NaturalSound                                   = 4,
    Custom                                         = 5,
    EAttenuationDistanceModel_MAX                  = 6

};


// Enum  Engine.EAudioFaderCurve
enum class EAudioFaderCurve : uint8_t
{
    Linear                                         = 0,
    Logarithmic                                    = 1,
    SCurve                                         = 2,
    Sin                                            = 3,
    Count                                          = 4,
    EAudioFaderCurve_MAX                           = 5

};


// Enum  Engine.EAudioComponentPlayState
enum class EAudioComponentPlayState : uint8_t
{
    Playing                                        = 0,
    Stopped                                        = 1,
    Paused                                         = 2,
    FadingIn                                       = 3,
    FadingOut                                      = 4,
    Count                                          = 5,
    EAudioComponentPlayState_MAX                   = 6

};


// Enum  Engine.EAudioOutputTarget
enum class EAudioOutputTarget : uint8_t
{
    Speaker                                        = 0,
    Controller                                     = 1,
    ControllerFallbackToSpeaker                    = 2,
    EAudioOutputTarget_MAX                         = 3

};


// Enum  Engine.EMonoChannelUpmixMethod
enum class EMonoChannelUpmixMethod : uint8_t
{
    Linear                                         = 0,
    EqualPower                                     = 1,
    FullVolume                                     = 2,
    EMonoChannelUpmixMethod_MAX                    = 3

};


// Enum  Engine.EPanningMethod
enum class EPanningMethod : uint8_t
{
    Linear                                         = 0,
    EqualPower                                     = 1,
    EPanningMethod_MAX                             = 2

};


// Enum  Engine.EVoiceSampleRate
enum class EVoiceSampleRate : uint32_t
{
    Low16000Hz                                     = 16000,
    Normal24000Hz                                  = 24000,
    EVoiceSampleRate_MAX                           = 24001

};


// Enum  Engine.EBlendableLocation
enum class EBlendableLocation : uint8_t
{
    BL_AfterTonemapping                            = 0,
    BL_BeforeTonemapping                           = 1,
    BL_BeforeTranslucency                          = 2,
    BL_ReplacingTonemapper                         = 3,
    BL_SSRInput                                    = 4,
    BL_MAX                                         = 5

};


// Enum  Engine.ENotifyTriggerMode
enum class ENotifyTriggerMode : uint8_t
{
    AllAnimations                                  = 0,
    HighestWeightedAnimation                       = 1,
    None                                           = 2,
    ENotifyTriggerMode_MAX                         = 3

};


// Enum  Engine.EBlendSpaceAxis
enum class EBlendSpaceAxis : uint8_t
{
    BSA_None                                       = 0,
    BSA_X                                          = 1,
    BSA_Y                                          = 2,
    BSA_Max                                        = 3

};


// Enum  Engine.EBlueprintNativizationFlag
enum class EBlueprintNativizationFlag : uint8_t
{
    Disabled                                       = 0,
    Dependency                                     = 1,
    ExplicitlyEnabled                              = 2,
    EBlueprintNativizationFlag_MAX                 = 3

};


// Enum  Engine.EBlueprintCompileMode
enum class EBlueprintCompileMode : uint8_t
{
    Default                                        = 0,
    Development                                    = 1,
    FinalRelease                                   = 2,
    EBlueprintCompileMode_MAX                      = 3

};


// Enum  Engine.EBlueprintType
enum class EBlueprintType : uint8_t
{
    BPTYPE_Normal                                  = 0,
    BPTYPE_Const                                   = 1,
    BPTYPE_MacroLibrary                            = 2,
    BPTYPE_Interface                               = 3,
    BPTYPE_LevelScript                             = 4,
    BPTYPE_FunctionLibrary                         = 5,
    BPTYPE_MAX                                     = 6

};


// Enum  Engine.EBlueprintStatus
enum class EBlueprintStatus : uint8_t
{
    BS_Unknown                                     = 0,
    BS_Dirty                                       = 1,
    BS_Error                                       = 2,
    BS_UpToDate                                    = 3,
    BS_BeingCreated                                = 4,
    BS_UpToDateWithWarnings                        = 5,
    BS_MAX                                         = 6

};


// Enum  Engine.EDOFMode
enum class EDOFMode : uint8_t
{
    Default                                        = 0,
    SixDOF                                         = 1,
    YZPlane                                        = 2,
    XZPlane                                        = 3,
    XYPlane                                        = 4,
    CustomPlane                                    = 5,
    None                                           = 6,
    EDOFMode_MAX                                   = 7

};


// Enum  Engine.EBodyCollisionResponse
enum class EBodyCollisionResponse : uint8_t
{
    BodyCollision_Enabled                          = 0,
    BodyCollision_Disabled                         = 1,
    BodyCollision_MAX                              = 2

};


// Enum  Engine.EPhysicsType
enum class EPhysicsType : uint8_t
{
    PhysType_Default                               = 0,
    PhysType_Kinematic                             = 1,
    PhysType_Simulated                             = 2,
    PhysType_MAX                                   = 3

};


// Enum  Engine.ECollisionTraceFlag
enum class ECollisionTraceFlag : uint8_t
{
    CTF_UseDefault                                 = 0,
    CTF_UseSimpleAndComplex                        = 1,
    CTF_UseSimpleAsComplex                         = 2,
    CTF_UseComplexAsSimple                         = 3,
    CTF_MAX                                        = 4

};


// Enum  Engine.EBrushType
enum class EBrushType : uint8_t
{
    Brush_Default                                  = 0,
    Brush_Add                                      = 1,
    Brush_Subtract                                 = 2,
    Brush_MAX                                      = 3

};


// Enum  Engine.ECsgOper
enum class ECsgOper : uint8_t
{
    CSG_Active                                     = 0,
    CSG_Add                                        = 1,
    CSG_Subtract                                   = 2,
    CSG_Intersect                                  = 3,
    CSG_Deintersect                                = 4,
    CSG_None                                       = 5,
    CSG_MAX                                        = 6

};


// Enum  Engine.EInitialOscillatorOffset
enum class EInitialOscillatorOffset : uint8_t
{
    EOO_OffsetRandom                               = 0,
    EOO_OffsetZero                                 = 1,
    EOO_MAX                                        = 2

};


// Enum  Engine.EOscillatorWaveform
enum class EOscillatorWaveform : uint8_t
{
    SineWave                                       = 0,
    PerlinNoise                                    = 1,
    EOscillatorWaveform_MAX                        = 2

};


// Enum  Engine.ECameraShakeAttenuation
enum class ECameraShakeAttenuation : uint8_t
{
    Linear                                         = 0,
    Quadratic                                      = 1,
    ECameraShakeAttenuation_MAX                    = 2

};


// Enum  Engine.ECameraAlphaBlendMode
enum class ECameraAlphaBlendMode : uint8_t
{
    CABM_Linear                                    = 0,
    CABM_Cubic                                     = 1,
    CABM_MAX                                       = 2

};


// Enum  Engine.ECameraProjectionMode
enum class ECameraProjectionMode : uint8_t
{
    Perspective                                    = 0,
    Orthographic                                   = 1,
    ECameraProjectionMode_MAX                      = 2

};


// Enum  Engine.ECloudStorageDelegate
enum class ECloudStorageDelegate : uint8_t
{
    CSD_KeyValueReadComplete                       = 0,
    CSD_KeyValueWriteComplete                      = 1,
    CSD_ValueChanged                               = 2,
    CSD_DocumentQueryComplete                      = 3,
    CSD_DocumentReadComplete                       = 4,
    CSD_DocumentWriteComplete                      = 5,
    CSD_DocumentConflictDetected                   = 6,
    CSD_MAX                                        = 7

};


// Enum  Engine.EAngularDriveMode
enum class EAngularDriveMode : uint8_t
{
    SLERP                                          = 0,
    TwistAndSwing                                  = 1,
    EAngularDriveMode_MAX                          = 2

};


// Enum  Engine.ELinearConstraintMotion
enum class ELinearConstraintMotion : uint8_t
{
    LCM_Free                                       = 0,
    LCM_Limited                                    = 1,
    LCM_Locked                                     = 2,
    LCM_MAX                                        = 3

};


// Enum  Engine.ECurveTableMode
enum class ECurveTableMode : uint8_t
{
    Empty                                          = 0,
    SimpleCurves                                   = 1,
    RichCurves                                     = 2,
    ECurveTableMode_MAX                            = 3

};


// Enum  Engine.EEvaluateCurveTableResult
enum class EEvaluateCurveTableResult : uint8_t
{
    RowFound                                       = 0,
    RowNotFound                                    = 1,
    EEvaluateCurveTableResult_MAX                  = 2

};


// Enum  Engine.EGrammaticalNumber
enum class EGrammaticalNumber : uint8_t
{
    Singular                                       = 0,
    Plural                                         = 1,
    EGrammaticalNumber_MAX                         = 2

};


// Enum  Engine.EGrammaticalGender
enum class EGrammaticalGender : uint8_t
{
    Neuter                                         = 0,
    Masculine                                      = 1,
    Feminine                                       = 2,
    Mixed                                          = 3,
    EGrammaticalGender_MAX                         = 4

};


// Enum  Engine.DistributionParamMode
enum class DistributionParamMode : uint8_t
{
    DPM_Normal                                     = 0,
    DPM_Abs                                        = 1,
    DPM_Direct                                     = 2,
    DPM_MAX                                        = 3

};


// Enum  Engine.EDistributionVectorMirrorFlags
enum class EDistributionVectorMirrorFlags : uint8_t
{
    EDVMF_Same                                     = 0,
    EDVMF_Different                                = 1,
    EDVMF_Mirror                                   = 2,
    EDVMF_MAX                                      = 3

};


// Enum  Engine.EDistributionVectorLockFlags
enum class EDistributionVectorLockFlags : uint8_t
{
    EDVLF_None                                     = 0,
    EDVLF_XY                                       = 1,
    EDVLF_XZ                                       = 2,
    EDVLF_YZ                                       = 3,
    EDVLF_XYZ                                      = 4,
    EDVLF_MAX                                      = 5

};


// Enum  Engine.ENodeEnabledState
enum class ENodeEnabledState : uint8_t
{
    Enabled                                        = 0,
    Disabled                                       = 1,
    DevelopmentOnly                                = 2,
    ENodeEnabledState_MAX                          = 3

};


// Enum  Engine.ENodeAdvancedPins
enum class ENodeAdvancedPins : uint8_t
{
    NoPins                                         = 0,
    Shown                                          = 1,
    Hidden                                         = 2,
    ENodeAdvancedPins_MAX                          = 3

};


// Enum  Engine.ENodeTitleType
enum class ENodeTitleType : uint8_t
{
    FullTitle                                      = 0,
    ListView                                       = 1,
    EditableTitle                                  = 2,
    MenuTitle                                      = 3,
    MAX_TitleTypes                                 = 4,
    ENodeTitleType_MAX                             = 5

};


// Enum  Engine.EPinContainerType
enum class EPinContainerType : uint8_t
{
    None                                           = 0,
    Array                                          = 1,
    Set                                            = 2,
    Map                                            = 3,
    EPinContainerType_MAX                          = 4

};


// Enum  Engine.EEdGraphPinDirection
enum class EEdGraphPinDirection : uint8_t
{
    EGPD_Input                                     = 0,
    EGPD_Output                                    = 1,
    EGPD_MAX                                       = 2

};


// Enum  Engine.EBlueprintPinStyleType
enum class EBlueprintPinStyleType : uint8_t
{
    BPST_Original                                  = 0,
    BPST_VariantA                                  = 1,
    BPST_MAX                                       = 2

};


// Enum  Engine.ECanCreateConnectionResponse
enum class ECanCreateConnectionResponse : uint8_t
{
    CONNECT_RESPONSE_MAKE                          = 0,
    CONNECT_RESPONSE_DISALLOW                      = 1,
    CONNECT_RESPONSE_BREAK_OTHERS_A                = 2,
    CONNECT_RESPONSE_BREAK_OTHERS_B                = 3,
    CONNECT_RESPONSE_BREAK_OTHERS_AB               = 4,
    CONNECT_RESPONSE_MAKE_WITH_CONVERSION_NODE     = 5,
    CONNECT_RESPONSE_MAX                           = 6

};


// Enum  Engine.EGraphType
enum class EGraphType : uint8_t
{
    GT_Function                                    = 0,
    GT_Ubergraph                                   = 1,
    GT_Macro                                       = 2,
    GT_Animation                                   = 3,
    GT_StateMachine                                = 4,
    GT_MAX                                         = 5

};


// Enum  Engine.ETransitionType
enum class ETransitionType : uint8_t
{
    None                                           = 0,
    Paused                                         = 1,
    Loading                                        = 2,
    Saving                                         = 3,
    Connecting                                     = 4,
    Precaching                                     = 5,
    WaitingToConnect                               = 6,
    MAX                                            = 7

};


// Enum  Engine.EFullyLoadPackageType
enum class EFullyLoadPackageType : uint8_t
{
    FULLYLOAD_Map                                  = 0,
    FULLYLOAD_Game_PreLoadClass                    = 1,
    FULLYLOAD_Game_PostLoadClass                   = 2,
    FULLYLOAD_Always                               = 3,
    FULLYLOAD_Mutator                              = 4,
    FULLYLOAD_MAX                                  = 5

};


// Enum  Engine.EViewModeIndex
enum class EViewModeIndex : uint8_t
{
    VMI_BrushWireframe                             = 0,
    VMI_Wireframe                                  = 1,
    VMI_Unlit                                      = 2,
    VMI_Lit                                        = 3,
    VMI_Lit_DetailLighting                         = 4,
    VMI_LightingOnly                               = 5,
    VMI_LightComplexity                            = 6,
    VMI_ShaderComplexity                           = 8,
    VMI_LightmapDensity                            = 9,
    VMI_LitLightmapDensity                         = 10,
    VMI_ReflectionOverride                         = 11,
    VMI_VisualizeBuffer                            = 12,
    VMI_StationaryLightOverlap                     = 14,
    VMI_CollisionPawn                              = 15,
    VMI_CollisionVisibility                        = 16,
    VMI_LODColoration                              = 18,
    VMI_QuadOverdraw                               = 19,
    VMI_PrimitiveDistanceAccuracy                  = 20,
    VMI_MeshUVDensityAccuracy                      = 21,
    VMI_ShaderComplexityWithQuadOverdraw           = 22,
    VMI_HLODColoration                             = 23,
    VMI_GroupLODColoration                         = 24,
    VMI_MaterialTextureScaleAccuracy               = 25,
    VMI_RequiredTextureResolution                  = 26,
    VMI_PathTracing                                = 27,
    VMI_RayTracingDebug                            = 28,
    VMI_TexelDensity                               = 30,
    VMI_Max                                        = 32,
    VMI_Unknown                                    = 255

};


// Enum  Engine.EDemoPlayFailure
enum class EDemoPlayFailure : uint8_t
{
    Generic                                        = 0,
    DemoNotFound                                   = 1,
    Corrupt                                        = 2,
    InvalidVersion                                 = 3,
    InitBase                                       = 4,
    GameSpecificHeader                             = 5,
    ReplayStreamerInternal                         = 6,
    LoadMap                                        = 7,
    Serialization                                  = 8,
    EDemoPlayFailure_MAX                           = 9

};


// Enum  Engine.ENetworkLagState
enum class ENetworkLagState : uint8_t
{
    NotLagging                                     = 0,
    Lagging                                        = 1,
    ENetworkLagState_MAX                           = 2

};


// Enum  Engine.EMouseCaptureMode
enum class EMouseCaptureMode : uint8_t
{
    NoCapture                                      = 0,
    CapturePermanently                             = 1,
    CapturePermanently_IncludingInitialMouseDown   = 2,
    CaptureDuringMouseDown                         = 3,
    CaptureDuringRightMouseDown                    = 4,
    EMouseCaptureMode_MAX                          = 5

};


// Enum  Engine.ECustomTimeStepSynchronizationState
enum class ECustomTimeStepSynchronizationState : uint8_t
{
    Closed                                         = 0,
    Error                                          = 1,
    Synchronized                                   = 2,
    Synchronizing                                  = 3,
    ECustomTimeStepSynchronizationState_MAX        = 4

};


// Enum  Engine.EMeshBufferAccess
enum class EMeshBufferAccess : uint8_t
{
    Default                                        = 0,
    ForceCPUAndGPU                                 = 1,
    EMeshBufferAccess_MAX                          = 2

};


// Enum  Engine.EConstraintFrame
enum class EConstraintFrame : uint8_t
{
    Frame1                                         = 0,
    Frame2                                         = 1,
    EConstraintFrame_MAX                           = 2

};


// Enum  Engine.EAngularConstraintMotion
enum class EAngularConstraintMotion : uint8_t
{
    ACM_Free                                       = 0,
    ACM_Limited                                    = 1,
    ACM_Locked                                     = 2,
    ACM_MAX                                        = 3

};


// Enum  Engine.EComponentSocketType
enum class EComponentSocketType : uint8_t
{
    Invalid                                        = 0,
    Bone                                           = 1,
    Socket                                         = 2,
    EComponentSocketType_MAX                       = 3

};


// Enum  Engine.EPhysicalMaterialMaskColor
enum class EPhysicalMaterialMaskColor : uint8_t
{
    Red                                            = 0,
    Green                                          = 1,
    Blue                                           = 2,
    Cyan                                           = 3,
    Magenta                                        = 4,
    Yellow                                         = 5,
    White                                          = 6,
    Black                                          = 7,
    MAX                                            = 8

};


// Enum  Engine.ELandscapeSplineSegmentSurface
enum class ELandscapeSplineSegmentSurface : uint8_t
{
    SegmentSurfaceType_Default                     = 0,
    SegmentSurfaceType1                            = 1,
    SegmentSurfaceType2                            = 2,
    SegmentSurfaceType3                            = 3,
    SegmentSurfaceType4                            = 4,
    SegmentSurfaceType5                            = 5,
    SegmentSurfaceType6                            = 6,
    SegmentSurfaceType7                            = 7,
    SegmentSurfaceType8                            = 8,
    SegmentSurfaceType_Max                         = 9,
    ELandscapeSplineSegmentSurface_MAX             = 10

};


// Enum  Engine.EWalkableSlopeBehavior
enum class EWalkableSlopeBehavior : uint8_t
{
    WalkableSlope_Default                          = 0,
    WalkableSlope_Increase                         = 1,
    WalkableSlope_Decrease                         = 2,
    WalkableSlope_Unwalkable                       = 3,
    WalkableSlope_Max                              = 4

};


// Enum  Engine.EUpdateRateShiftBucket
enum class EUpdateRateShiftBucket : uint8_t
{
    ShiftBucket0                                   = 0,
    ShiftBucket1                                   = 1,
    ShiftBucket2                                   = 2,
    ShiftBucket3                                   = 3,
    ShiftBucket4                                   = 4,
    ShiftBucket5                                   = 5,
    ShiftBucketMax                                 = 6,
    EUpdateRateShiftBucket_MAX                     = 7

};


// Enum  Engine.EShadowMapFlags
enum class EShadowMapFlags : uint8_t
{
    SMF_None                                       = 0,
    SMF_Streamed                                   = 1,
    SMF_MAX                                        = 2

};


// Enum  Engine.ELightMapPaddingType
enum class ELightMapPaddingType : uint8_t
{
    LMPT_NormalPadding                             = 0,
    LMPT_PrePadding                                = 1,
    LMPT_NoPadding                                 = 2,
    LMPT_MAX                                       = 3

};


// Enum  Engine.ECollisionEnabled
enum class ECollisionEnabled : uint8_t
{
    NoCollision                                    = 0,
    QueryOnly                                      = 1,
    PhysicsOnly                                    = 2,
    QueryAndPhysics                                = 3,
    ECollisionEnabled_MAX                          = 4

};


// Enum  Engine.ETimelineSigType
enum class ETimelineSigType : uint8_t
{
    ETS_EventSignature                             = 0,
    ETS_FloatSignature                             = 1,
    ETS_VectorSignature                            = 2,
    ETS_LinearColorSignature                       = 3,
    ETS_InvalidSignature                           = 4,
    ETS_MAX                                        = 5

};


// Enum  Engine.ESleepFamily
enum class ESleepFamily : uint8_t
{
    Normal                                         = 0,
    Sensitive                                      = 1,
    Custom                                         = 2,
    ESleepFamily_MAX                               = 3

};


// Enum  Engine.ERadialImpulseFalloff
enum class ERadialImpulseFalloff : uint8_t
{
    RIF_Constant                                   = 0,
    RIF_Linear                                     = 1,
    RIF_MAX                                        = 2

};


// Enum  Engine.EFilterInterpolationType
enum class EFilterInterpolationType : uint8_t
{
    BSIT_Average                                   = 0,
    BSIT_Linear                                    = 1,
    BSIT_Cubic                                     = 2,
    BSIT_MAX                                       = 3

};


// Enum  Engine.ECollisionResponse
enum class ECollisionResponse : uint8_t
{
    ECR_Ignore                                     = 0,
    ECR_Overlap                                    = 1,
    ECR_Block                                      = 2,
    ECR_MAX                                        = 3

};


// Enum  Engine.EOverlapFilterOption
enum class EOverlapFilterOption : uint8_t
{
    OverlapFilter_All                              = 0,
    OverlapFilter_DynamicOnly                      = 1,
    OverlapFilter_StaticOnly                       = 2,
    OverlapFilter_MAX                              = 3

};


// Enum  Engine.ELightingBuildQuality
enum class ELightingBuildQuality : uint8_t
{
    Quality_Preview                                = 0,
    Quality_Medium                                 = 1,
    Quality_High                                   = 2,
    Quality_Production                             = 3,
    Quality_MAX                                    = 4

};


// Enum  Engine.EMaterialDepthCompare
enum class EMaterialDepthCompare : uint8_t
{
    MDC_DepthNearOrEqual                           = 0,
    MDC_DepthNear                                  = 1,
    MDC_DepthFartherOrEqual                        = 2,
    MDC_DepthFarther                               = 3,
    MDC_Equal                                      = 4,
    MDC_NotEqual                                   = 5,
    MDC_Never                                      = 6,
    MDC_Always                                     = 7,
    MDC_Count                                      = 8,
    MDC_MAX                                        = 9

};


// Enum  Engine.EMainPassMaterialStencilCompare
enum class EMainPassMaterialStencilCompare : uint8_t
{
    MTSC_Equal                                     = 0,
    MTSC_NotEqual                                  = 1,
    MTSC_Count                                     = 2,
    MTSC_MAX                                       = 3

};


// Enum  Engine.EMaterialShadingRate
enum class EMaterialShadingRate : uint8_t
{
    MSR_1x1                                        = 0,
    MSR_2x1                                        = 1,
    MSR_1x2                                        = 2,
    MSR_2x2                                        = 3,
    MSR_4x2                                        = 4,
    MSR_2x4                                        = 5,
    MSR_4x4                                        = 6,
    MSR_Count                                      = 7,
    MSR_MAX                                        = 8

};


// Enum  Engine.EMaterialStencilCompare
enum class EMaterialStencilCompare : uint8_t
{
    MSC_Less                                       = 0,
    MSC_LessEqual                                  = 1,
    MSC_Greater                                    = 2,
    MSC_GreaterEqual                               = 3,
    MSC_Equal                                      = 4,
    MSC_NotEqual                                   = 5,
    MSC_Never                                      = 6,
    MSC_Always                                     = 7,
    MSC_Count                                      = 8,
    MSC_MAX                                        = 9

};


// Enum  Engine.EMaterialSamplerType
enum class EMaterialSamplerType : uint8_t
{
    SAMPLERTYPE_Color                              = 0,
    SAMPLERTYPE_Grayscale                          = 1,
    SAMPLERTYPE_Alpha                              = 2,
    SAMPLERTYPE_Normal                             = 3,
    SAMPLERTYPE_Masks                              = 4,
    SAMPLERTYPE_DistanceFieldFont                  = 5,
    SAMPLERTYPE_LinearColor                        = 6,
    SAMPLERTYPE_LinearGrayscale                    = 7,
    SAMPLERTYPE_Data                               = 8,
    SAMPLERTYPE_External                           = 9,
    SAMPLERTYPE_VirtualColor                       = 10,
    SAMPLERTYPE_VirtualGrayscale                   = 11,
    SAMPLERTYPE_VirtualAlpha                       = 12,
    SAMPLERTYPE_VirtualNormal                      = 13,
    SAMPLERTYPE_VirtualMasks                       = 14,
    SAMPLERTYPE_VirtualLinearColor                 = 15,
    SAMPLERTYPE_VirtualLinearGrayscale             = 16,
    SAMPLERTYPE_MAX                                = 17

};


// Enum  Engine.EMaterialTessellationMode
enum class EMaterialTessellationMode : uint8_t
{
    MTM_NoTessellation                             = 0,
    MTM_FlatTessellation                           = 1,
    MTM_PNTriangles                                = 2,
    MTM_MAX                                        = 3

};


// Enum  Engine.EMaterialShadingModel
enum class EMaterialShadingModel : uint8_t
{
    MSM_Unlit                                      = 0,
    MSM_DefaultLit                                 = 1,
    MSM_Subsurface                                 = 2,
    MSM_PreintegratedSkin                          = 3,
    MSM_ClearCoat                                  = 4,
    MSM_SubsurfaceProfile                          = 5,
    MSM_TwoSidedFoliage                            = 6,
    MSM_Hair                                       = 7,
    MSM_Cloth                                      = 8,
    MSM_Eye                                        = 9,
    MSM_SingleLayerWater                           = 10,
    MSM_ThinTranslucent                            = 11,
    MSM_DefaultLitLowQuality                       = 12,
    MSM_UnlitShadow                                = 13,
    MSM_VertexLight                                = 14,
    MSM_VertexLight_Foliage                        = 15,
    MSM_NUM                                        = 16,
    MSM_FromMaterialExpression                     = 17,
    MSM_MAX                                        = 18

};


// Enum  Engine.EParticleCollisionMode
enum class EParticleCollisionMode : uint8_t
{
    SceneDepth                                     = 0,
    DistanceField                                  = 1,
    EParticleCollisionMode_MAX                     = 2

};


// Enum  Engine.ETrailWidthMode
enum class ETrailWidthMode : uint8_t
{
    ETrailWidthMode_FromCentre                     = 0,
    ETrailWidthMode_FromFirst                      = 1,
    ETrailWidthMode_FromSecond                     = 2,
    ETrailWidthMode_MAX                            = 3

};


// Enum  Engine.EGBufferFormat
enum class EGBufferFormat : uint8_t
{
    Force8BitsPerChannel                           = 0,
    Default                                        = 1,
    HighPrecisionNormals                           = 3,
    Force16BitsPerChannel                          = 5,
    EGBufferFormat_MAX                             = 6

};


// Enum  Engine.ESceneCaptureCompositeMode
enum class ESceneCaptureCompositeMode : uint8_t
{
    SCCM_Overwrite                                 = 0,
    SCCM_Additive                                  = 1,
    SCCM_Composite                                 = 2,
    SCCM_MAX                                       = 3

};


// Enum  Engine.ESceneCaptureSource
enum class ESceneCaptureSource : uint8_t
{
    SCS_SceneColorHDR                              = 0,
    SCS_SceneColorHDRNoAlpha                       = 1,
    SCS_FinalColorLDR                              = 2,
    SCS_SceneColorSceneDepth                       = 3,
    SCS_SceneDepth                                 = 4,
    SCS_DeviceDepth                                = 5,
    SCS_Normal                                     = 6,
    SCS_BaseColor                                  = 7,
    SCS_BaseColrAndShadow                          = 8,
    SCS_FinalColorHDR                              = 9,
    SCS_FinalToneCurveHDR                          = 10,
    SCS_MAX                                        = 11

};


// Enum  Engine.ETranslucentSortPolicy
enum class ETranslucentSortPolicy : uint8_t
{
    SortByDistance                                 = 0,
    SortByProjectedZ                               = 1,
    SortAlongAxis                                  = 2,
    ETranslucentSortPolicy_MAX                     = 3

};


// Enum  Engine.ERefractionMode
enum class ERefractionMode : uint8_t
{
    RM_IndexOfRefraction                           = 0,
    RM_PixelNormalOffset                           = 1,
    RM_MAX                                         = 2

};


// Enum  Engine.ETranslucencyLightingMode
enum class ETranslucencyLightingMode : uint8_t
{
    TLM_VolumetricNonDirectional                   = 0,
    TLM_VolumetricDirectional                      = 1,
    TLM_VolumetricPerVertexNonDirectional          = 2,
    TLM_VolumetricPerVertexDirectional             = 3,
    TLM_Surface                                    = 4,
    TLM_SurfacePerPixelLighting                    = 5,
    TLM_MAX                                        = 6

};


// Enum  Engine.ESamplerSourceMode
enum class ESamplerSourceMode : uint8_t
{
    SSM_FromTextureAsset                           = 0,
    SSM_Wrap_WorldGroupSettings                    = 1,
    SSM_Clamp_WorldGroupSettings                   = 2,
    SSM_MAX                                        = 3

};


// Enum  Engine.EOcclusionCombineMode
enum class EOcclusionCombineMode : uint8_t
{
    OCM_Minimum                                    = 0,
    OCM_Multiply                                   = 1,
    OCM_MAX                                        = 2

};


// Enum  Engine.ELightmapType
enum class ELightmapType : uint8_t
{
    Default                                        = 0,
    ForceSurface                                   = 1,
    ForceVolumetric                                = 2,
    ELightmapType_MAX                              = 3

};


// Enum  Engine.EIndirectLightingCacheQuality
enum class EIndirectLightingCacheQuality : uint8_t
{
    ILCQ_Off                                       = 0,
    ILCQ_Point                                     = 1,
    ILCQ_Volume                                    = 2,
    ILCQ_MAX                                       = 3

};


// Enum  Engine.ESceneDepthPriorityGroup
enum class ESceneDepthPriorityGroup : uint8_t
{
    SDPG_World                                     = 0,
    SDPG_Foreground                                = 1,
    SDPG_MAX                                       = 2

};


// Enum  Engine.EFontCacheType
enum class EFontCacheType : uint8_t
{
    Offline                                        = 0,
    Runtime                                        = 1,
    EFontCacheType_MAX                             = 2

};


// Enum  Engine.EFontImportCharacterSet
enum class EFontImportCharacterSet : uint8_t
{
    FontICS_Default                                = 0,
    FontICS_Ansi                                   = 1,
    FontICS_Symbol                                 = 2,
    FontICS_MAX                                    = 3

};


// Enum  Engine.EStandbyType
enum class EStandbyType : uint8_t
{
    STDBY_Rx                                       = 0,
    STDBY_Tx                                       = 1,
    STDBY_BadPing                                  = 2,
    STDBY_MAX                                      = 3

};


// Enum  Engine.ESuggestProjVelocityTraceOption
enum class ESuggestProjVelocityTraceOption : uint8_t
{
    DoNotTrace                                     = 0,
    TraceFullPath                                  = 1,
    OnlyTraceWhileAscending                        = 2,
    ESuggestProjVelocityTraceOption_MAX            = 3

};


// Enum  Engine.EWindowMode
enum class EWindowMode : uint8_t
{
    Fullscreen                                     = 0,
    WindowedFullscreen                             = 1,
    Windowed                                       = 2,
    EWindowMode_MAX                                = 3

};


// Enum  Engine.EHitProxyPriority
enum class EHitProxyPriority : uint8_t
{
    HPP_World                                      = 0,
    HPP_Wireframe                                  = 1,
    HPP_Foreground                                 = 2,
    HPP_UI                                         = 3,
    HPP_MAX                                        = 4

};


// Enum  Engine.EImportanceWeight
enum class EImportanceWeight : uint8_t
{
    Luminance                                      = 0,
    Red                                            = 1,
    Green                                          = 2,
    Blue                                           = 3,
    Alpha                                          = 4,
    EImportanceWeight_MAX                          = 5

};


// Enum  Engine.EAdManagerDelegate
enum class EAdManagerDelegate : uint8_t
{
    AMD_ClickedBanner                              = 0,
    AMD_UserClosedAd                               = 1,
    AMD_MAX                                        = 2

};


// Enum  Engine.EAnimAlphaInputType
enum class EAnimAlphaInputType : uint8_t
{
    Float                                          = 0,
    Bool                                           = 1,
    Curve                                          = 2,
    EAnimAlphaInputType_MAX                        = 3

};


// Enum  Engine.ETrackActiveCondition
enum class ETrackActiveCondition : uint8_t
{
    ETAC_Always                                    = 0,
    ETAC_GoreEnabled                               = 1,
    ETAC_GoreDisabled                              = 2,
    ETAC_MAX                                       = 3

};


// Enum  Engine.EInterpTrackMoveRotMode
enum class EInterpTrackMoveRotMode : uint8_t
{
    IMR_Keyframed                                  = 0,
    IMR_LookAtGroup                                = 1,
    IMR_Ignore                                     = 2,
    IMR_MAX                                        = 3

};


// Enum  Engine.EInterpMoveAxis
enum class EInterpMoveAxis : uint8_t
{
    AXIS_TranslationX                              = 0,
    AXIS_TranslationY                              = 1,
    AXIS_TranslationZ                              = 2,
    AXIS_RotationX                                 = 3,
    AXIS_RotationY                                 = 4,
    AXIS_RotationZ                                 = 5,
    AXIS_MAX                                       = 6

};


// Enum  Engine.ETrackToggleAction
enum class ETrackToggleAction : uint8_t
{
    ETTA_Off                                       = 0,
    ETTA_On                                        = 1,
    ETTA_Toggle                                    = 2,
    ETTA_Trigger                                   = 3,
    ETTA_MAX                                       = 4

};


// Enum  Engine.EVisibilityTrackCondition
enum class EVisibilityTrackCondition : uint8_t
{
    EVTC_Always                                    = 0,
    EVTC_GoreEnabled                               = 1,
    EVTC_GoreDisabled                              = 2,
    EVTC_MAX                                       = 3

};


// Enum  Engine.EVisibilityTrackAction
enum class EVisibilityTrackAction : uint8_t
{
    EVTA_Hide                                      = 0,
    EVTA_Show                                      = 1,
    EVTA_Toggle                                    = 2,
    EVTA_MAX                                       = 3

};


// Enum  Engine.ESlateGesture
enum class ESlateGesture : uint8_t
{
    None                                           = 0,
    Scroll                                         = 1,
    Magnify                                        = 2,
    Swipe                                          = 3,
    Rotate                                         = 4,
    LongPress                                      = 5,
    ESlateGesture_MAX                              = 6

};


// Enum  Engine.EMatrixColumns
enum class EMatrixColumns : uint8_t
{
    First                                          = 0,
    Second                                         = 1,
    Third                                          = 2,
    Fourth                                         = 3,
    EMatrixColumns_MAX                             = 4

};


// Enum  Engine.ELerpInterpolationMode
enum class ELerpInterpolationMode : uint8_t
{
    QuatInterp                                     = 0,
    EulerInterp                                    = 1,
    DualQuatInterp                                 = 2,
    ELerpInterpolationMode_MAX                     = 3

};


// Enum  Engine.EEasingFunc
enum class EEasingFunc : uint8_t
{
    Linear                                         = 0,
    Step                                           = 1,
    SinusoidalIn                                   = 2,
    SinusoidalOut                                  = 3,
    SinusoidalInOut                                = 4,
    EaseIn                                         = 5,
    EaseOut                                        = 6,
    EaseInOut                                      = 7,
    ExpoIn                                         = 8,
    ExpoOut                                        = 9,
    ExpoInOut                                      = 10,
    CircularIn                                     = 11,
    CircularOut                                    = 12,
    CircularInOut                                  = 13,
    EEasingFunc_MAX                                = 14

};


// Enum  Engine.EStreamingVolumeUsage
enum class EStreamingVolumeUsage : uint8_t
{
    SVB_Loading                                    = 0,
    SVB_LoadingAndVisibility                       = 1,
    SVB_VisibilityBlockingOnLoad                   = 2,
    SVB_BlockingOnLoad                             = 3,
    SVB_LoadingNotVisible                          = 4,
    SVB_MAX                                        = 5

};


// Enum  Engine.EMaterialDecalResponse
enum class EMaterialDecalResponse : uint8_t
{
    MDR_None                                       = 0,
    MDR_ColorNormalRoughness                       = 1,
    MDR_Color                                      = 2,
    MDR_ColorNormal                                = 3,
    MDR_ColorRoughness                             = 4,
    MDR_Normal                                     = 5,
    MDR_NormalRoughness                            = 6,
    MDR_Roughness                                  = 7,
    MDR_MAX                                        = 8

};


// Enum  Engine.EDecalBlendMode
enum class EDecalBlendMode : uint8_t
{
    DBM_Translucent                                = 0,
    DBM_Stain                                      = 1,
    DBM_Normal                                     = 2,
    DBM_Emissive                                   = 3,
    DBM_DBuffer_ColorNormalRoughness               = 4,
    DBM_DBuffer_Color                              = 5,
    DBM_DBuffer_ColorNormal                        = 6,
    DBM_DBuffer_ColorRoughness                     = 7,
    DBM_DBuffer_Normal                             = 8,
    DBM_DBuffer_NormalRoughness                    = 9,
    DBM_DBuffer_Roughness                          = 10,
    DBM_DBuffer_Emissive                           = 11,
    DBM_DBuffer_AlphaComposite                     = 12,
    DBM_DBuffer_EmissiveAlphaComposite             = 13,
    DBM_Volumetric_DistanceFunction                = 14,
    DBM_AlphaComposite                             = 15,
    DBM_AmbientOcclusion                           = 16,
    DBM_MAX                                        = 17

};


// Enum  Engine.ETextureColorChannel
enum class ETextureColorChannel : uint8_t
{
    TCC_Red                                        = 0,
    TCC_Green                                      = 1,
    TCC_Blue                                       = 2,
    TCC_Alpha                                      = 3,
    TCC_MAX                                        = 4

};


// Enum  Engine.EMaterialAttributeBlend
enum class EMaterialAttributeBlend : uint8_t
{
    Blend                                          = 0,
    UseA                                           = 1,
    UseB                                           = 2,
    EMaterialAttributeBlend_MAX                    = 3

};


// Enum  Engine.EChannelMaskParameterColor
enum class EChannelMaskParameterColor : uint8_t
{
    Red                                            = 0,
    Green                                          = 1,
    Blue                                           = 2,
    Alpha                                          = 3,
    EChannelMaskParameterColor_MAX                 = 4

};


// Enum  Engine.EClampMode
enum class EClampMode : uint8_t
{
    CMODE_Clamp                                    = 0,
    CMODE_ClampMin                                 = 1,
    CMODE_ClampMax                                 = 2,
    CMODE_MAX                                      = 3

};


// Enum  Engine.ECustomMaterialOutputType
enum class ECustomMaterialOutputType : uint8_t
{
    CMOT_Float1                                    = 0,
    CMOT_Float2                                    = 1,
    CMOT_Float3                                    = 2,
    CMOT_Float4                                    = 3,
    CMOT_MAX                                       = 4

};


// Enum  Engine.EDepthOfFieldFunctionValue
enum class EDepthOfFieldFunctionValue : uint8_t
{
    TDOF_NearAndFarMask                            = 0,
    TDOF_NearMask                                  = 1,
    TDOF_FarMask                                   = 2,
    TDOF_CircleOfConfusionRadius                   = 3,
    TDOF_MAX                                       = 4

};


// Enum  Engine.EFunctionInputType
enum class EFunctionInputType : uint8_t
{
    FunctionInput_Scalar                           = 0,
    FunctionInput_Vector2                          = 1,
    FunctionInput_Vector3                          = 2,
    FunctionInput_Vector4                          = 3,
    FunctionInput_Texture2D                        = 4,
    FunctionInput_TextureCube                      = 5,
    FunctionInput_Texture2DArray                   = 6,
    FunctionInput_VolumeTexture                    = 7,
    FunctionInput_StaticBool                       = 8,
    FunctionInput_MaterialAttributes               = 9,
    FunctionInput_TextureExternal                  = 10,
    FunctionInput_MAX                              = 11

};


// Enum  Engine.ENoiseFunction
enum class ENoiseFunction : uint8_t
{
    NOISEFUNCTION_SimplexTex                       = 0,
    NOISEFUNCTION_GradientTex                      = 1,
    NOISEFUNCTION_GradientTex3D                    = 2,
    NOISEFUNCTION_GradientALU                      = 3,
    NOISEFUNCTION_ValueALU                         = 4,
    NOISEFUNCTION_VoronoiALU                       = 5,
    NOISEFUNCTION_MAX                              = 6

};


// Enum  Engine.ERuntimeVirtualTextureMipValueMode
enum class ERuntimeVirtualTextureMipValueMode : uint8_t
{
    RVTMVM_None                                    = 0,
    RVTMVM_MipLevel                                = 1,
    RVTMVM_MipBias                                 = 2,
    RVTMVM_MAX                                     = 3

};


// Enum  Engine.EMaterialSceneAttributeInputMode
enum class EMaterialSceneAttributeInputMode : uint8_t
{
    Coordinates                                    = 0,
    OffsetFraction                                 = 1,
    EMaterialSceneAttributeInputMode_MAX           = 2

};


// Enum  Engine.ESpeedTreeLODType
enum class ESpeedTreeLODType : uint8_t
{
    STLOD_Pop                                      = 0,
    STLOD_Smooth                                   = 1,
    STLOD_MAX                                      = 2

};


// Enum  Engine.ESpeedTreeWindType
enum class ESpeedTreeWindType : uint8_t
{
    STW_None                                       = 0,
    STW_Fastest                                    = 1,
    STW_Fast                                       = 2,
    STW_Better                                     = 3,
    STW_Best                                       = 4,
    STW_Palm                                       = 5,
    STW_BestPlus                                   = 6,
    STW_MAX                                        = 7

};


// Enum  Engine.ESpeedTreeGeometryType
enum class ESpeedTreeGeometryType : uint8_t
{
    STG_Branch                                     = 0,
    STG_Frond                                      = 1,
    STG_Leaf                                       = 2,
    STG_FacingLeaf                                 = 3,
    STG_Billboard                                  = 4,
    STG_MAX                                        = 5

};


// Enum  Engine.EMaterialExposedTextureProperty
enum class EMaterialExposedTextureProperty : uint8_t
{
    TMTM_TextureSize                               = 0,
    TMTM_TexelSize                                 = 1,
    TMTM_MAX                                       = 2

};


// Enum  Engine.ETextureMipValueMode
enum class ETextureMipValueMode : uint8_t
{
    TMVM_None                                      = 0,
    TMVM_MipLevel                                  = 1,
    TMVM_MipBias                                   = 2,
    TMVM_Derivative                                = 3,
    TMVM_MAX                                       = 4

};


// Enum  Engine.EMaterialVectorCoordTransform
enum class EMaterialVectorCoordTransform : uint8_t
{
    TRANSFORM_Tangent                              = 0,
    TRANSFORM_Local                                = 1,
    TRANSFORM_World                                = 2,
    TRANSFORM_View                                 = 3,
    TRANSFORM_Camera                               = 4,
    TRANSFORM_ParticleWorld                        = 5,
    TRANSFORM_MAX                                  = 6

};


// Enum  Engine.EMaterialVectorCoordTransformSource
enum class EMaterialVectorCoordTransformSource : uint8_t
{
    TRANSFORMSOURCE_Tangent                        = 0,
    TRANSFORMSOURCE_Local                          = 1,
    TRANSFORMSOURCE_World                          = 2,
    TRANSFORMSOURCE_View                           = 3,
    TRANSFORMSOURCE_Camera                         = 4,
    TRANSFORMSOURCE_ParticleWorld                  = 5,
    TRANSFORMSOURCE_MAX                            = 6

};


// Enum  Engine.EMaterialPositionTransformSource
enum class EMaterialPositionTransformSource : uint8_t
{
    TRANSFORMPOSSOURCE_Local                       = 0,
    TRANSFORMPOSSOURCE_World                       = 1,
    TRANSFORMPOSSOURCE_TranslatedWorld             = 2,
    TRANSFORMPOSSOURCE_View                        = 3,
    TRANSFORMPOSSOURCE_Camera                      = 4,
    TRANSFORMPOSSOURCE_Particle                    = 5,
    TRANSFORMPOSSOURCE_MAX                         = 6

};


// Enum  Engine.EVectorNoiseFunction
enum class EVectorNoiseFunction : uint8_t
{
    VNF_CellnoiseALU                               = 0,
    VNF_VectorALU                                  = 1,
    VNF_GradientALU                                = 2,
    VNF_CurlALU                                    = 3,
    VNF_VoronoiALU                                 = 4,
    VNF_MAX                                        = 5

};


// Enum  Engine.EMaterialExposedViewProperty
enum class EMaterialExposedViewProperty : uint8_t
{
    MEVP_BufferSize                                = 0,
    MEVP_FieldOfView                               = 1,
    MEVP_TanHalfFieldOfView                        = 2,
    MEVP_ViewSize                                  = 3,
    MEVP_WorldSpaceViewPosition                    = 4,
    MEVP_WorldSpaceCameraPosition                  = 5,
    MEVP_ViewportOffset                            = 6,
    MEVP_TemporalSampleCount                       = 7,
    MEVP_TemporalSampleIndex                       = 8,
    MEVP_TemporalSampleOffset                      = 9,
    MEVP_RuntimeVirtualTextureOutputLevel          = 10,
    MEVP_RuntimeVirtualTextureOutputDerivative     = 11,
    MEVP_PreExposure                               = 12,
    MEVP_MAX                                       = 13

};


// Enum  Engine.EWorldPositionIncludedOffsets
enum class EWorldPositionIncludedOffsets : uint8_t
{
    WPT_Default                                    = 0,
    WPT_ExcludeAllShaderOffsets                    = 1,
    WPT_CameraRelative                             = 2,
    WPT_CameraRelativeNoOffsets                    = 3,
    WPT_MAX                                        = 4

};


// Enum  Engine.EMaterialFunctionUsage
enum class EMaterialFunctionUsage : uint8_t
{
    Default                                        = 0,
    MaterialLayer                                  = 1,
    MaterialLayerBlend                             = 2,
    EMaterialFunctionUsage_MAX                     = 3

};


// Enum  Engine.EMaterialUsage
enum class EMaterialUsage : uint8_t
{
    MATUSAGE_SkeletalMesh                          = 0,
    MATUSAGE_ParticleSprites                       = 1,
    MATUSAGE_BeamTrails                            = 2,
    MATUSAGE_MeshParticles                         = 3,
    MATUSAGE_StaticLighting                        = 4,
    MATUSAGE_MorphTargets                          = 5,
    MATUSAGE_SplineMesh                            = 6,
    MATUSAGE_InstancedStaticMeshes                 = 7,
    MATUSAGE_GeometryCollections                   = 8,
    MATUSAGE_Clothing                              = 9,
    MATUSAGE_NiagaraSprites                        = 10,
    MATUSAGE_NiagaraRibbons                        = 11,
    MATUSAGE_NiagaraMeshParticles                  = 12,
    MATUSAGE_GeometryCache                         = 13,
    MATUSAGE_Water                                 = 14,
    MATUSAGE_HairStrands                           = 15,
    MATUSAGE_LidarPointCloud                       = 16,
    MATUSAGE_MAX                                   = 17

};


// Enum  Engine.EMaterialParameterAssociation
enum class EMaterialParameterAssociation : uint8_t
{
    LayerParameter                                 = 0,
    BlendParameter                                 = 1,
    GlobalParameter                                = 2,
    EMaterialParameterAssociation_MAX              = 3

};


// Enum  Engine.EMaterialMergeType
enum class EMaterialMergeType : uint8_t
{
    MaterialMergeType_Default                      = 0,
    MaterialMergeType_Simplygon                    = 1,
    MaterialMergeType_MAX                          = 2

};


// Enum  Engine.ETextureSizingType
enum class ETextureSizingType : uint8_t
{
    TextureSizingType_UseSingleTextureSize         = 0,
    TextureSizingType_UseAutomaticBiasedSizes      = 1,
    TextureSizingType_UseManualOverrideTextureSize = 2,
    TextureSizingType_UseSimplygonAutomaticSizing  = 3,
    TextureSizingType_MAX                          = 4

};


// Enum  Engine.ESceneTextureId
enum class ESceneTextureId : uint8_t
{
    PPI_SceneColor                                 = 0,
    PPI_SceneDepth                                 = 1,
    PPI_DiffuseColor                               = 2,
    PPI_SpecularColor                              = 3,
    PPI_SubsurfaceColor                            = 4,
    PPI_BaseColor                                  = 5,
    PPI_Specular                                   = 6,
    PPI_Metallic                                   = 7,
    PPI_WorldNormal                                = 8,
    PPI_SeparateTranslucency                       = 9,
    PPI_Opacity                                    = 10,
    PPI_Roughness                                  = 11,
    PPI_MaterialAO                                 = 12,
    PPI_CustomDepth                                = 13,
    PPI_PostProcessInput0                          = 14,
    PPI_PostProcessInput1                          = 15,
    PPI_PostProcessInput2                          = 16,
    PPI_PostProcessInput3                          = 17,
    PPI_PostProcessInput4                          = 18,
    PPI_PostProcessInput5                          = 19,
    PPI_PostProcessInput6                          = 20,
    PPI_DecalMask                                  = 21,
    PPI_ShadingModelColor                          = 22,
    PPI_ShadingModelID                             = 23,
    PPI_AmbientOcclusion                           = 24,
    PPI_CustomStencil                              = 25,
    PPI_StoredBaseColor                            = 26,
    PPI_StoredSpecular                             = 27,
    PPI_Velocity                                   = 28,
    PPI_WorldTangent                               = 29,
    PPI_Anisotropy                                 = 30,
    PPI_MAX                                        = 31

};


// Enum  Engine.EMaterialDomain
enum class EMaterialDomain : uint8_t
{
    MD_Surface                                     = 0,
    MD_DeferredDecal                               = 1,
    MD_LightFunction                               = 2,
    MD_Volume                                      = 3,
    MD_PostProcess                                 = 4,
    MD_UI                                          = 5,
    MD_RuntimeVirtualTexture                       = 6,
    MD_MAX                                         = 7

};


// Enum  Engine.EMeshInstancingReplacementMethod
enum class EMeshInstancingReplacementMethod : uint8_t
{
    RemoveOriginalActors                           = 0,
    KeepOriginalActorsAsEditorOnly                 = 1,
    EMeshInstancingReplacementMethod_MAX           = 2

};


// Enum  Engine.EUVOutput
enum class EUVOutput : uint8_t
{
    DoNotOutputChannel                             = 0,
    OutputChannel                                  = 1,
    EUVOutput_MAX                                  = 2

};


// Enum  Engine.EMeshMergeType
enum class EMeshMergeType : uint8_t
{
    MeshMergeType_Default                          = 0,
    MeshMergeType_MergeActor                       = 1,
    MeshMergeType_MAX                              = 2

};


// Enum  Engine.EMeshLODSelectionType
enum class EMeshLODSelectionType : uint8_t
{
    AllLODs                                        = 0,
    SpecificLOD                                    = 1,
    CalculateLOD                                   = 2,
    LowestDetailLOD                                = 3,
    EMeshLODSelectionType_MAX                      = 4

};


// Enum  Engine.EProxyNormalComputationMethod
enum class EProxyNormalComputationMethod : uint8_t
{
    AngleWeighted                                  = 0,
    AreaWeighted                                   = 1,
    EqualWeighted                                  = 2,
    EProxyNormalComputationMethod_MAX              = 3

};


// Enum  Engine.ELandscapeCullingPrecision
enum class ELandscapeCullingPrecision : uint8_t
{
    High                                           = 0,
    Medium                                         = 1,
    Low                                            = 2,
    ELandscapeCullingPrecision_MAX                 = 3

};


// Enum  Engine.EStaticMeshReductionTerimationCriterion
enum class EStaticMeshReductionTerimationCriterion : uint8_t
{
    Triangles                                      = 0,
    Vertices                                       = 1,
    Any                                            = 2,
    EStaticMeshReductionTerimationCriterion_MAX    = 3

};


// Enum  Engine.EMeshFeatureImportance
enum class EMeshFeatureImportance : uint8_t
{
    Off                                            = 0,
    Lowest                                         = 1,
    Low                                            = 2,
    Normal                                         = 3,
    High                                           = 4,
    Highest                                        = 5,
    EMeshFeatureImportance_MAX                     = 6

};


// Enum  Engine.EVertexPaintAxis
enum class EVertexPaintAxis : uint8_t
{
    X                                              = 0,
    Y                                              = 1,
    Z                                              = 2,
    EVertexPaintAxis_MAX                           = 3

};


// Enum  Engine.EMicroTransactionResult
enum class EMicroTransactionResult : uint8_t
{
    MTR_Succeeded                                  = 0,
    MTR_Failed                                     = 1,
    MTR_Canceled                                   = 2,
    MTR_RestoredFromServer                         = 3,
    MTR_MAX                                        = 4

};


// Enum  Engine.EMicroTransactionDelegate
enum class EMicroTransactionDelegate : uint8_t
{
    MTD_PurchaseQueryComplete                      = 0,
    MTD_PurchaseComplete                           = 1,
    MTD_MAX                                        = 2

};


// Enum  Engine.FNavigationSystemRunMode
enum class FNavigationSystemRunMode : uint8_t
{
    InvalidMode                                    = 0,
    GameMode                                       = 1,
    EditorMode                                     = 2,
    SimulationMode                                 = 3,
    PIEMode                                        = 4,
    FNavigationSystemRunMode_MAX                   = 5

};


// Enum  Engine.ENavigationQueryResult
enum class ENavigationQueryResult : uint8_t
{
    Invalid                                        = 0,
    Error                                          = 1,
    Fail                                           = 2,
    Success                                        = 3,
    ENavigationQueryResult_MAX                     = 4

};


// Enum  Engine.ENavPathEvent
enum class ENavPathEvent : uint8_t
{
    Cleared                                        = 0,
    NewPath                                        = 1,
    UpdatedDueToGoalMoved                          = 2,
    UpdatedDueToNavigationChanged                  = 3,
    Invalidated                                    = 4,
    RePathFailed                                   = 5,
    MetaPathUpdate                                 = 6,
    Custom                                         = 7,
    ENavPathEvent_MAX                              = 8

};


// Enum  Engine.ENavDataGatheringModeConfig
enum class ENavDataGatheringModeConfig : uint8_t
{
    Invalid                                        = 0,
    Instant                                        = 1,
    Lazy                                           = 2,
    ENavDataGatheringModeConfig_MAX                = 3

};


// Enum  Engine.ENavDataGatheringMode
enum class ENavDataGatheringMode : uint8_t
{
    Default                                        = 0,
    Instant                                        = 1,
    Lazy                                           = 2,
    ENavDataGatheringMode_MAX                      = 3

};


// Enum  Engine.ENavigationOptionFlag
enum class ENavigationOptionFlag : uint8_t
{
    Default                                        = 0,
    Enable                                         = 1,
    Disable                                        = 2,
    MAX                                            = 3

};


// Enum  Engine.ENavLinkDirection
enum class ENavLinkDirection : uint8_t
{
    BothWays                                       = 0,
    LeftToRight                                    = 1,
    RightToLeft                                    = 2,
    ENavLinkDirection_MAX                          = 3

};


// Enum  Engine.EEmitterRenderMode
enum class EEmitterRenderMode : uint8_t
{
    ERM_Normal                                     = 0,
    ERM_Point                                      = 1,
    ERM_Cross                                      = 2,
    ERM_LightsOnly                                 = 3,
    ERM_None                                       = 4,
    ERM_MAX                                        = 5

};


// Enum  Engine.EParticleSubUVInterpMethod
enum class EParticleSubUVInterpMethod : uint8_t
{
    PSUVIM_None                                    = 0,
    PSUVIM_Linear                                  = 1,
    PSUVIM_Linear_Blend                            = 2,
    PSUVIM_Random                                  = 3,
    PSUVIM_Random_Blend                            = 4,
    PSUVIM_MAX                                     = 5

};


// Enum  Engine.EParticleBurstMethod
enum class EParticleBurstMethod : uint8_t
{
    EPBM_Instant                                   = 0,
    EPBM_Interpolated                              = 1,
    EPBM_MAX                                       = 2

};


// Enum  Engine.EParticleSystemInsignificanceReaction
enum class EParticleSystemInsignificanceReaction : uint8_t
{
    Auto                                           = 0,
    Complete                                       = 1,
    DisableTick                                    = 2,
    DisableTickAndKill                             = 3,
    Num                                            = 4,
    EParticleSystemInsignificanceReaction_MAX      = 5

};


// Enum  Engine.EParticleSignificanceLevel
enum class EParticleSignificanceLevel : uint8_t
{
    Low                                            = 0,
    Medium                                         = 1,
    High                                           = 2,
    Critical                                       = 3,
    Num                                            = 4,
    EParticleSignificanceLevel_MAX                 = 5

};


// Enum  Engine.EParticleDetailMode
enum class EParticleDetailMode : uint8_t
{
    PDM_Low                                        = 0,
    PDM_Medium                                     = 1,
    PDM_High                                       = 2,
    PDM_Advanced                                   = 3,
    PDM_Ultimate                                   = 4,
    PDM_MAX                                        = 5

};


// Enum  Engine.EParticleSourceSelectionMethod
enum class EParticleSourceSelectionMethod : uint8_t
{
    EPSSM_Random                                   = 0,
    EPSSM_Sequential                               = 1,
    EPSSM_MAX                                      = 2

};


// Enum  Engine.EModuleType
enum class EModuleType : uint8_t
{
    EPMT_General                                   = 0,
    EPMT_TypeData                                  = 1,
    EPMT_Beam                                      = 2,
    EPMT_Trail                                     = 3,
    EPMT_Spawn                                     = 4,
    EPMT_Required                                  = 5,
    EPMT_Event                                     = 6,
    EPMT_Light                                     = 7,
    EPMT_SubUV                                     = 8,
    EPMT_MAX                                       = 9

};


// Enum  Engine.EAttractorParticleSelectionMethod
enum class EAttractorParticleSelectionMethod : uint8_t
{
    EAPSM_Random                                   = 0,
    EAPSM_Sequential                               = 1,
    EAPSM_MAX                                      = 2

};


// Enum  Engine.Beam2SourceTargetTangentMethod
enum class Beam2SourceTargetTangentMethod : uint8_t
{
    PEB2STTM_Direct                                = 0,
    PEB2STTM_UserSet                               = 1,
    PEB2STTM_Distribution                          = 2,
    PEB2STTM_Emitter                               = 3,
    PEB2STTM_MAX                                   = 4

};


// Enum  Engine.Beam2SourceTargetMethod
enum class Beam2SourceTargetMethod : uint8_t
{
    PEB2STM_Default                                = 0,
    PEB2STM_UserSet                                = 1,
    PEB2STM_Emitter                                = 2,
    PEB2STM_Particle                               = 3,
    PEB2STM_Actor                                  = 4,
    PEB2STM_MAX                                    = 5

};


// Enum  Engine.BeamModifierType
enum class BeamModifierType : uint8_t
{
    PEB2MT_Source                                  = 0,
    PEB2MT_Target                                  = 1,
    PEB2MT_MAX                                     = 2

};


// Enum  Engine.EParticleCameraOffsetUpdateMethod
enum class EParticleCameraOffsetUpdateMethod : uint8_t
{
    EPCOUM_DirectSet                               = 0,
    EPCOUM_Additive                                = 1,
    EPCOUM_Scalar                                  = 2,
    EPCOUM_MAX                                     = 3

};


// Enum  Engine.EParticleCollisionComplete
enum class EParticleCollisionComplete : uint8_t
{
    EPCC_Kill                                      = 0,
    EPCC_Freeze                                    = 1,
    EPCC_HaltCollisions                            = 2,
    EPCC_FreezeTranslation                         = 3,
    EPCC_FreezeRotation                            = 4,
    EPCC_FreezeMovement                            = 5,
    EPCC_MAX                                       = 6

};


// Enum  Engine.EParticleCollisionResponse
enum class EParticleCollisionResponse : uint8_t
{
    Bounce                                         = 0,
    Stop                                           = 1,
    Kill                                           = 2,
    EParticleCollisionResponse_MAX                 = 3

};


// Enum  Engine.ELocationBoneSocketSelectionMethod
enum class ELocationBoneSocketSelectionMethod : uint8_t
{
    BONESOCKETSEL_Sequential                       = 0,
    BONESOCKETSEL_Random                           = 1,
    BONESOCKETSEL_MAX                              = 2

};


// Enum  Engine.ELocationBoneSocketSource
enum class ELocationBoneSocketSource : uint8_t
{
    BONESOCKETSOURCE_Bones                         = 0,
    BONESOCKETSOURCE_Sockets                       = 1,
    BONESOCKETSOURCE_MAX                           = 2

};


// Enum  Engine.ELocationEmitterSelectionMethod
enum class ELocationEmitterSelectionMethod : uint8_t
{
    ELESM_Random                                   = 0,
    ELESM_Sequential                               = 1,
    ELESM_MAX                                      = 2

};


// Enum  Engine.CylinderHeightAxis
enum class CylinderHeightAxis : uint8_t
{
    PMLPC_HEIGHTAXIS_X                             = 0,
    PMLPC_HEIGHTAXIS_Y                             = 1,
    PMLPC_HEIGHTAXIS_Z                             = 2,
    PMLPC_HEIGHTAXIS_MAX                           = 3

};


// Enum  Engine.ELocationSkelVertSurfaceSource
enum class ELocationSkelVertSurfaceSource : uint8_t
{
    VERTSURFACESOURCE_Vert                         = 0,
    VERTSURFACESOURCE_Surface                      = 1,
    VERTSURFACESOURCE_MAX                          = 2

};


// Enum  Engine.EOrbitChainMode
enum class EOrbitChainMode : uint8_t
{
    EOChainMode_Add                                = 0,
    EOChainMode_Scale                              = 1,
    EOChainMode_Link                               = 2,
    EOChainMode_MAX                                = 3

};


// Enum  Engine.EParticleAxisLock
enum class EParticleAxisLock : uint8_t
{
    EPAL_NONE                                      = 0,
    EPAL_X                                         = 1,
    EPAL_Y                                         = 2,
    EPAL_Z                                         = 3,
    EPAL_NEGATIVE_X                                = 4,
    EPAL_NEGATIVE_Y                                = 5,
    EPAL_NEGATIVE_Z                                = 6,
    EPAL_ROTATE_X                                  = 7,
    EPAL_ROTATE_Y                                  = 8,
    EPAL_ROTATE_Z                                  = 9,
    EPAL_MAX                                       = 10

};


// Enum  Engine.EEmitterDynamicParameterValue
enum class EEmitterDynamicParameterValue : uint8_t
{
    EDPV_UserSet                                   = 0,
    EDPV_AutoSet                                   = 1,
    EDPV_VelocityX                                 = 2,
    EDPV_VelocityY                                 = 3,
    EDPV_VelocityZ                                 = 4,
    EDPV_VelocityMag                               = 5,
    EDPV_MAX                                       = 6

};


// Enum  Engine.EEmitterNormalsMode
enum class EEmitterNormalsMode : uint8_t
{
    ENM_CameraFacing                               = 0,
    ENM_Spherical                                  = 1,
    ENM_Cylindrical                                = 2,
    ENM_MAX                                        = 3

};


// Enum  Engine.EParticleSortMode
enum class EParticleSortMode : uint8_t
{
    PSORTMODE_None                                 = 0,
    PSORTMODE_ViewProjDepth                        = 1,
    PSORTMODE_DistanceToView                       = 2,
    PSORTMODE_Age_OldestFirst                      = 3,
    PSORTMODE_Age_NewestFirst                      = 4,
    PSORTMODE_MAX                                  = 5

};


// Enum  Engine.EParticleUVFlipMode
enum class EParticleUVFlipMode : uint8_t
{
    None                                           = 0,
    FlipUV                                         = 1,
    FlipUOnly                                      = 2,
    FlipVOnly                                      = 3,
    RandomFlipUV                                   = 4,
    RandomFlipUOnly                                = 5,
    RandomFlipVOnly                                = 6,
    RandomFlipUVIndependent                        = 7,
    EParticleUVFlipMode_MAX                        = 8

};


// Enum  Engine.ETrail2SourceMethod
enum class ETrail2SourceMethod : uint8_t
{
    PET2SRCM_Default                               = 0,
    PET2SRCM_Particle                              = 1,
    PET2SRCM_Actor                                 = 2,
    PET2SRCM_MAX                                   = 3

};


// Enum  Engine.EBeamTaperMethod
enum class EBeamTaperMethod : uint8_t
{
    PEBTM_None                                     = 0,
    PEBTM_Full                                     = 1,
    PEBTM_Partial                                  = 2,
    PEBTM_MAX                                      = 3

};


// Enum  Engine.EBeam2Method
enum class EBeam2Method : uint8_t
{
    PEB2M_Distance                                 = 0,
    PEB2M_Target                                   = 1,
    PEB2M_Branch                                   = 2,
    PEB2M_MAX                                      = 3

};


// Enum  Engine.EMeshCameraFacingOptions
enum class EMeshCameraFacingOptions : uint8_t
{
    XAxisFacing_NoUp                               = 0,
    XAxisFacing_ZUp                                = 1,
    XAxisFacing_NegativeZUp                        = 2,
    XAxisFacing_YUp                                = 3,
    XAxisFacing_NegativeYUp                        = 4,
    LockedAxis_ZAxisFacing                         = 5,
    LockedAxis_NegativeZAxisFacing                 = 6,
    LockedAxis_YAxisFacing                         = 7,
    LockedAxis_NegativeYAxisFacing                 = 8,
    VelocityAligned_ZAxisFacing                    = 9,
    VelocityAligned_NegativeZAxisFacing            = 10,
    VelocityAligned_YAxisFacing                    = 11,
    VelocityAligned_NegativeYAxisFacing            = 12,
    EMeshCameraFacingOptions_MAX                   = 13

};


// Enum  Engine.EMeshCameraFacingUpAxis
enum class EMeshCameraFacingUpAxis : uint8_t
{
    CameraFacing_NoneUP                            = 0,
    CameraFacing_ZUp                               = 1,
    CameraFacing_NegativeZUp                       = 2,
    CameraFacing_YUp                               = 3,
    CameraFacing_NegativeYUp                       = 4,
    CameraFacing_MAX                               = 5

};


// Enum  Engine.EMeshScreenAlignment
enum class EMeshScreenAlignment : uint8_t
{
    PSMA_MeshFaceCameraWithRoll                    = 0,
    PSMA_MeshFaceCameraWithSpin                    = 1,
    PSMA_MeshFaceCameraWithLockedAxis              = 2,
    PSMA_MAX                                       = 3

};


// Enum  Engine.ETrailsRenderAxisOption
enum class ETrailsRenderAxisOption : uint8_t
{
    Trails_CameraUp                                = 0,
    Trails_SourceUp                                = 1,
    Trails_WorldUp                                 = 2,
    Trails_MAX                                     = 3

};


// Enum  Engine.EParticleScreenAlignment
enum class EParticleScreenAlignment : uint8_t
{
    PSA_FacingCameraPosition                       = 0,
    PSA_Square                                     = 1,
    PSA_Rectangle                                  = 2,
    PSA_Velocity                                   = 3,
    PSA_AwayFromCenter                             = 4,
    PSA_TypeSpecific                               = 5,
    PSA_FacingCameraDistanceBlend                  = 6,
    PSA_MAX                                        = 7

};


// Enum  Engine.EParticleSystemOcclusionBoundsMethod
enum class EParticleSystemOcclusionBoundsMethod : uint8_t
{
    EPSOBM_None                                    = 0,
    EPSOBM_ParticleBounds                          = 1,
    EPSOBM_CustomBounds                            = 2,
    EPSOBM_MAX                                     = 3

};


// Enum  Engine.ParticleSystemLODMethod
enum class ParticleSystemLODMethod : uint8_t
{
    PARTICLESYSTEMLODMETHOD_Automatic              = 0,
    PARTICLESYSTEMLODMETHOD_DirectSet              = 1,
    PARTICLESYSTEMLODMETHOD_ActivateAutomatic      = 2,
    PARTICLESYSTEMLODMETHOD_MAX                    = 3

};


// Enum  Engine.EParticleSystemUpdateMode
enum class EParticleSystemUpdateMode : uint8_t
{
    EPSUM_RealTime                                 = 0,
    EPSUM_FixedTime                                = 1,
    EPSUM_MAX                                      = 2

};


// Enum  Engine.EParticleEventType
enum class EParticleEventType : uint8_t
{
    EPET_Any                                       = 0,
    EPET_Spawn                                     = 1,
    EPET_Death                                     = 2,
    EPET_Collision                                 = 3,
    EPET_Burst                                     = 4,
    EPET_Blueprint                                 = 5,
    EPET_MAX                                       = 6

};


// Enum  Engine.ParticleReplayState
enum class ParticleReplayState : uint8_t
{
    PRS_Disabled                                   = 0,
    PRS_Capturing                                  = 1,
    PRS_Replaying                                  = 2,
    PRS_MAX                                        = 3

};


// Enum  Engine.EParticleSysParamType
enum class EParticleSysParamType : uint8_t
{
    PSPT_None                                      = 0,
    PSPT_Scalar                                    = 1,
    PSPT_ScalarRand                                = 2,
    PSPT_Vector                                    = 3,
    PSPT_VectorRand                                = 4,
    PSPT_Color                                     = 5,
    PSPT_Actor                                     = 6,
    PSPT_Material                                  = 7,
    PSPT_VectorUnitRand                            = 8,
    PSPT_MAX                                       = 9

};


// Enum  Engine.ESettingsLockedAxis
enum class ESettingsLockedAxis : uint8_t
{
    None                                           = 0,
    X                                              = 1,
    Y                                              = 2,
    Z                                              = 3,
    Invalid                                        = 4,
    ESettingsLockedAxis_MAX                        = 5

};


// Enum  Engine.ESettingsDOF
enum class ESettingsDOF : uint8_t
{
    Full3D                                         = 0,
    YZPlane                                        = 1,
    XZPlane                                        = 2,
    XYPlane                                        = 3,
    ESettingsDOF_MAX                               = 4

};


// Enum  Engine.EFrictionCombineMode
enum class EFrictionCombineMode : uint8_t
{
    Average                                        = 0,
    Min                                            = 1,
    Multiply                                       = 2,
    Max                                            = 3

};


// Enum  Engine.ERendererStencilMask
enum class ERendererStencilMask : uint8_t
{
    ERSM_Default                                   = 0,
    ERSM                                           = 1,
    ERSM                                           = 2,
    ERSM                                           = 3,
    ERSM                                           = 4,
    ERSM                                           = 5,
    ERSM                                           = 6,
    ERSM                                           = 7,
    ERSM                                           = 8,
    ERSM                                           = 9,
    ERSM_MAX                                       = 10

};


// Enum  Engine.EHasCustomNavigableGeometry
enum class EHasCustomNavigableGeometry : uint8_t
{
    No                                             = 0,
    Yes                                            = 1,
    EvenIfNotCollidable                            = 2,
    DontExport                                     = 3,
    EHasCustomNavigableGeometry_MAX                = 4

};


// Enum  Engine.ECanBeCharacterBase
enum class ECanBeCharacterBase : uint8_t
{
    ECB_No                                         = 0,
    ECB_Yes                                        = 1,
    ECB_Owner                                      = 2,
    ECB_MAX                                        = 3

};


// Enum  Engine.EReflectionSourceType
enum class EReflectionSourceType : uint8_t
{
    CapturedScene                                  = 0,
    SpecifiedCubemap                               = 1,
    EReflectionSourceType_MAX                      = 2

};


// Enum  Engine.EDefaultBackBufferPixelFormat
enum class EDefaultBackBufferPixelFormat : uint8_t
{
    DBBPF_B8G8R8A8                                 = 0,
    DBBPF_A16B16G16R16_DEPRECATED                  = 1,
    DBBPF_FloatRGB_DEPRECATED                      = 2,
    DBBPF_FloatRGBA                                = 3,
    DBBPF_A2B10G10R10                              = 4,
    DBBPF_MAX                                      = 5

};


// Enum  Engine.EAutoExposureMethodUI
enum class EAutoExposureMethodUI : uint8_t
{
    AEM_Histogram                                  = 0,
    AEM_Basic                                      = 1,
    AEM_Manual                                     = 2,
    AEM_MAX                                        = 3

};


// Enum  Engine.EAlphaChannelMode
enum class EAlphaChannelMode : uint8_t
{
    Disabled                                       = 0,
    LinearColorSpaceOnly                           = 1,
    AllowThroughTonemapper                         = 2,
    EAlphaChannelMode_MAX                          = 3

};


// Enum  Engine.EEarlyZPass
enum class EEarlyZPass : uint8_t
{
    None                                           = 0,
    OpaqueOnly                                     = 1,
    OpaqueAndMasked                                = 2,
    Auto                                           = 3,
    EEarlyZPass_MAX                                = 4

};


// Enum  Engine.ECustomDepthStencil
enum class ECustomDepthStencil : uint8_t
{
    Disabled                                       = 0,
    Enabled                                        = 1,
    EnabledOnDemand                                = 2,
    EnabledWithStencil                             = 3,
    ECustomDepthStencil_MAX                        = 4

};


// Enum  Engine.EMobileMSAASampleCount
enum class EMobileMSAASampleCount : uint8_t
{
    One                                            = 1,
    Two                                            = 2,
    Four                                           = 4,
    Eight                                          = 8,
    EMobileMSAASampleCount_MAX                     = 9

};


// Enum  Engine.ECompositingSampleCount
enum class ECompositingSampleCount : uint8_t
{
    One                                            = 1,
    Two                                            = 2,
    Four                                           = 4,
    Eight                                          = 8,
    ECompositingSampleCount_MAX                    = 9

};


// Enum  Engine.EClearSceneOptions
enum class EClearSceneOptions : uint8_t
{
    NoClear                                        = 0,
    HardwareClear                                  = 1,
    QuadAtMaxZ                                     = 2,
    EClearSceneOptions_MAX                         = 3

};


// Enum  Engine.EReporterLineStyle
enum class EReporterLineStyle : uint8_t
{
    Line                                           = 0,
    Dash                                           = 1,
    EReporterLineStyle_MAX                         = 2

};


// Enum  Engine.ELegendPosition
enum class ELegendPosition : uint8_t
{
    Outside                                        = 0,
    Inside                                         = 1,
    ELegendPosition_MAX                            = 2

};


// Enum  Engine.EGraphDataStyle
enum class EGraphDataStyle : uint8_t
{
    Lines                                          = 0,
    Filled                                         = 1,
    EGraphDataStyle_MAX                            = 2

};


// Enum  Engine.EGraphAxisStyle
enum class EGraphAxisStyle : uint8_t
{
    Lines                                          = 0,
    Notches                                        = 1,
    Grid                                           = 2,
    EGraphAxisStyle_MAX                            = 3

};


// Enum  Engine.ReverbPreset
enum class ReverbPreset : uint8_t
{
    REVERB_Default                                 = 0,
    REVERB_Bathroom                                = 1,
    REVERB_StoneRoom                               = 2,
    REVERB_Auditorium                              = 3,
    REVERB_ConcertHall                             = 4,
    REVERB_Cave                                    = 5,
    REVERB_Hallway                                 = 6,
    REVERB_StoneCorridor                           = 7,
    REVERB_Alley                                   = 8,
    REVERB_Forest                                  = 9,
    REVERB_City                                    = 10,
    REVERB_Mountains                               = 11,
    REVERB_Quarry                                  = 12,
    REVERB_Plain                                   = 13,
    REVERB_ParkingLot                              = 14,
    REVERB_SewerPipe                               = 15,
    REVERB_Underwater                              = 16,
    REVERB_SmallRoom                               = 17,
    REVERB_MediumRoom                              = 18,
    REVERB_LargeRoom                               = 19,
    REVERB_MediumHall                              = 20,
    REVERB_LargeHall                               = 21,
    REVERB_Plate                                   = 22,
    REVERB_MAX                                     = 23

};


// Enum  Engine.ERichCurveKeyTimeCompressionFormat
enum class ERichCurveKeyTimeCompressionFormat : uint8_t
{
    RCKTCF_uint16                                  = 0,
    RCKTCF_float32                                 = 1,
    RCKTCF_MAX                                     = 2

};


// Enum  Engine.ERichCurveCompressionFormat
enum class ERichCurveCompressionFormat : uint8_t
{
    RCCF_Empty                                     = 0,
    RCCF_Constant                                  = 1,
    RCCF_Linear                                    = 2,
    RCCF_Cubic                                     = 3,
    RCCF_Mixed                                     = 4,
    RCCF_MAX                                       = 5

};


// Enum  Engine.EConstraintTransform
enum class EConstraintTransform : uint8_t
{
    Absolute                                       = 0,
    Relative                                       = 1,
    EConstraintTransform_MAX                       = 2

};


// Enum  Engine.EControlConstraint
enum class EControlConstraint : uint8_t
{
    Orientation                                    = 0,
    Translation                                    = 1,
    MAX                                            = 2

};


// Enum  Engine.ERootMotionFinishVelocityMode
enum class ERootMotionFinishVelocityMode : uint8_t
{
    MaintainLastRootMotionVelocity                 = 0,
    SetVelocity                                    = 1,
    ClampVelocity                                  = 2,
    ERootMotionFinishVelocityMode_MAX              = 3

};


// Enum  Engine.ERootMotionSourceSettingsFlags
enum class ERootMotionSourceSettingsFlags : uint8_t
{
    UseSensitiveLiftoffCheck                       = 1,
    DisablePartialEndTick                          = 2,
    IgnoreZAccumulate                              = 4,
    ERootMotionSourceSettingsFlags_MAX             = 5

};


// Enum  Engine.ERootMotionSourceStatusFlags
enum class ERootMotionSourceStatusFlags : uint8_t
{
    Prepared                                       = 1,
    Finished                                       = 2,
    MarkedForRemoval                               = 4,
    ERootMotionSourceStatusFlags_MAX               = 5

};


// Enum  Engine.ERootMotionAccumulateMode
enum class ERootMotionAccumulateMode : uint8_t
{
    Override                                       = 0,
    Additive                                       = 1,
    ERootMotionAccumulateMode_MAX                  = 2

};


// Enum  Engine.ERuntimeVirtualTextureMainPassType
enum class ERuntimeVirtualTextureMainPassType : uint8_t
{
    Never                                          = 0,
    Exclusive                                      = 1,
    Always                                         = 2,
    ERuntimeVirtualTextureMainPassType_MAX         = 3

};


// Enum  Engine.ERuntimeVirtualTextureMaterialType
enum class ERuntimeVirtualTextureMaterialType : uint8_t
{
    BaseColor                                      = 0,
    BaseColor_Normal_DEPRECATED                    = 1,
    BaseColor_Normal_Specular                      = 2,
    BaseColor_Normal_Specular_YCoCg                = 3,
    BaseColor_Normal_Specular_Mask_YCoCg           = 4,
    WorldHeight                                    = 5,
    Count                                          = 6,
    ERuntimeVirtualTextureMaterialType_MAX         = 7

};


// Enum  Engine.EReflectedAndRefractedRayTracedShadows
enum class EReflectedAndRefractedRayTracedShadows : uint8_t
{
    Disabled                                       = 0,
    Hard_shadows                                   = 1,
    Area_shadows                                   = 2,
    EReflectedAndRefractedRayTracedShadows_MAX     = 3

};


// Enum  Engine.ERayTracingGlobalIlluminationType
enum class ERayTracingGlobalIlluminationType : uint8_t
{
    Disabled                                       = 0,
    BruteForce                                     = 1,
    FinalGather                                    = 2,
    ERayTracingGlobalIlluminationType_MAX          = 3

};


// Enum  Engine.ETranslucencyType
enum class ETranslucencyType : uint8_t
{
    Raster                                         = 0,
    RayTracing                                     = 1,
    ETranslucencyType_MAX                          = 2

};


// Enum  Engine.EReflectionsType
enum class EReflectionsType : uint8_t
{
    ScreenSpace                                    = 0,
    RayTracing                                     = 1,
    EReflectionsType_MAX                           = 2

};


// Enum  Engine.ELightUnits
enum class ELightUnits : uint8_t
{
    Unitless                                       = 0,
    Candelas                                       = 1,
    Lumens                                         = 2,
    ELightUnits_MAX                                = 3

};


// Enum  Engine.EBloomMethod
enum class EBloomMethod : uint8_t
{
    BM_SOG                                         = 0,
    BM_FFT                                         = 1,
    BM_MAX                                         = 2

};


// Enum  Engine.EAutoExposureMethod
enum class EAutoExposureMethod : uint8_t
{
    AEM_Histogram                                  = 0,
    AEM_Basic                                      = 1,
    AEM_Manual                                     = 2,
    AEM_MAX                                        = 3

};


// Enum  Engine.EAntiAliasingMethod
enum class EAntiAliasingMethod : uint8_t
{
    AAM_None                                       = 0,
    AAM_FXAA                                       = 1,
    AAM_TemporalAA                                 = 2,
    AAM_MSAA                                       = 3,
    AAM_MAX                                        = 4

};


// Enum  Engine.EDepthOfFieldMethod
enum class EDepthOfFieldMethod : uint8_t
{
    DOFM_BokehDOF                                  = 0,
    DOFM_Gaussian                                  = 1,
    DOFM_CircleDOF                                 = 2,
    DOFM_MAX                                       = 3

};


// Enum  Engine.ESceneCapturePrimitiveRenderMode
enum class ESceneCapturePrimitiveRenderMode : uint8_t
{
    PRM_LegacySceneCapture                         = 0,
    PRM_RenderScenePrimitives                      = 1,
    PRM_UseShowOnlyList                            = 2,
    PRM_MAX                                        = 3

};


// Enum  Engine.EMaterialProperty
enum class EMaterialProperty : uint8_t
{
    MP_EmissiveColor                               = 0,
    MP_Opacity                                     = 1,
    MP_OpacityMask                                 = 2,
    MP_DiffuseColor                                = 3,
    MP_SpecularColor                               = 4,
    MP_BaseColor                                   = 5,
    MP_Metallic                                    = 6,
    MP_Specular                                    = 7,
    MP_Roughness                                   = 8,
    MP_Anisotropy                                  = 9,
    MP_Normal                                      = 10,
    MP_Tangent                                     = 11,
    MP_WorldPositionOffset                         = 12,
    MP_WorldDisplacement                           = 13,
    MP_TessellationMultiplier                      = 14,
    MP_SubsurfaceColor                             = 15,
    MP_CustomData0                                 = 16,
    MP_CustomData1                                 = 17,
    MP_AmbientOcclusion                            = 18,
    MP_Refraction                                  = 19,
    MP_CustomizedUVs0                              = 20,
    MP_CustomizedUVs1                              = 21,
    MP_CustomizedUVs2                              = 22,
    MP_CustomizedUVs3                              = 23,
    MP_CustomizedUVs4                              = 24,
    MP_CustomizedUVs5                              = 25,
    MP_CustomizedUVs6                              = 26,
    MP_CustomizedUVs7                              = 27,
    MP_PixelDepthOffset                            = 28,
    MP_ShadingModel                                = 29,
    MP_MaterialAttributes                          = 31,
    MP_CustomOutput                                = 32,
    MP_MAX                                         = 33

};


// Enum  Engine.ESkeletalMeshLODGroup
enum class ESkeletalMeshLODGroup : uint8_t
{
    SkeletalMeshLODGroup_None                      = 0,
    T1                                             = 1,
    T2                                             = 2,
    T3                                             = 3,
    T4                                             = 4,
    SkeletalMeshLODGroup_Max                       = 5,
    ESkeletalMeshLODGroup_MAX                      = 6

};


// Enum  Engine.ESkinCacheDefaultBehavior
enum class ESkinCacheDefaultBehavior : uint8_t
{
    Exclusive                                      = 0,
    Inclusive                                      = 1,
    ESkinCacheDefaultBehavior_MAX                  = 2

};


// Enum  Engine.ESkinCacheUsage
enum class ESkinCacheUsage : uint8_t
{
    Auto                                           = 0,
    Disabled                                       = 255,
    Enabled                                        = 1,
    ESkinCacheUsage_MAX                            = 256

};


// Enum  Engine.EPhysicsTransformUpdateMode
enum class EPhysicsTransformUpdateMode : uint8_t
{
    SimulationUpatesComponentTransform             = 0,
    ComponentTransformIsKinematic                  = 1,
    EPhysicsTransformUpdateMode_MAX                = 2

};


// Enum  Engine.EAnimationMode
enum class EAnimationMode : uint8_t
{
    AnimationBlueprint                             = 0,
    AnimationSingleNode                            = 1,
    AnimationCustomMode                            = 2,
    EAnimationMode_MAX                             = 3

};


// Enum  Engine.EKinematicBonesUpdateToPhysics
enum class EKinematicBonesUpdateToPhysics : uint8_t
{
    SkipSimulatingBones                            = 0,
    SkipAllBones                                   = 1,
    EKinematicBonesUpdateToPhysics_MAX             = 2

};


// Enum  Engine.EClothMassMode
enum class EClothMassMode : uint8_t
{
    UniformMass                                    = 0,
    TotalMass                                      = 1,
    Density                                        = 2,
    MaxClothMassMode                               = 3,
    EClothMassMode_MAX                             = 4

};


// Enum  Engine.EAnimCurveType
enum class EAnimCurveType : uint8_t
{
    AttributeCurve                                 = 0,
    MaterialCurve                                  = 1,
    MorphTargetCurve                               = 2,
    MaxAnimCurveType                               = 3,
    EAnimCurveType_MAX                             = 4

};


// Enum  Engine.ESkeletalMeshSkinningImportVersions
enum class ESkeletalMeshSkinningImportVersions : uint8_t
{
    Before_Versionning                             = 0,
    SkeletalMeshBuildRefactor                      = 1,
    VersionPlusOne                                 = 2,
    LatestVersion                                  = 1,
    ESkeletalMeshSkinningImportVersions_MAX        = 3

};


// Enum  Engine.ESkeletalMeshGeoImportVersions
enum class ESkeletalMeshGeoImportVersions : uint8_t
{
    Before_Versionning                             = 0,
    SkeletalMeshBuildRefactor                      = 1,
    VersionPlusOne                                 = 2,
    LatestVersion                                  = 1,
    ESkeletalMeshGeoImportVersions_MAX             = 3

};


// Enum  Engine.EBoneFilterActionOption
enum class EBoneFilterActionOption : uint8_t
{
    Remove                                         = 0,
    Keep                                           = 1,
    Invalid                                        = 2,
    EBoneFilterActionOption_MAX                    = 3

};


// Enum  Engine.SkeletalMeshOptimizationImportance
enum class SkeletalMeshOptimizationImportance : uint8_t
{
    SMOI_Off                                       = 0,
    SMOI_Lowest                                    = 1,
    SMOI_Low                                       = 2,
    SMOI_Normal                                    = 3,
    SMOI_High                                      = 4,
    SMOI_Highest                                   = 5,
    SMOI_MAX                                       = 6

};


// Enum  Engine.SkeletalMeshOptimizationType
enum class SkeletalMeshOptimizationType : uint8_t
{
    SMOT_NumOfTriangles                            = 0,
    SMOT_MaxDeviation                              = 1,
    SMOT_TriangleOrDeviation                       = 2,
    SMOT_MAX                                       = 3

};


// Enum  Engine.SkeletalMeshTerminationCriterion
enum class SkeletalMeshTerminationCriterion : uint8_t
{
    SMTC_NumOfTriangles                            = 0,
    SMTC_NumOfVerts                                = 1,
    SMTC_TriangleOrVert                            = 2,
    SMTC_AbsNumOfTriangles                         = 3,
    SMTC_AbsNumOfVerts                             = 4,
    SMTC_AbsTriangleOrVert                         = 5,
    SMTC_MAX                                       = 6

};


// Enum  Engine.EBoneTranslationRetargetingMode
enum class EBoneTranslationRetargetingMode : uint8_t
{
    Animation                                      = 0,
    Skeleton                                       = 1,
    AnimationScaled                                = 2,
    AnimationRelative                              = 3,
    OrientAndScale                                 = 4,
    EBoneTranslationRetargetingMode_MAX            = 5

};


// Enum  Engine.EBoneSpaces
enum class EBoneSpaces : uint8_t
{
    WorldSpace                                     = 0,
    ComponentSpace                                 = 1,
    EBoneSpaces_MAX                                = 2

};


// Enum  Engine.EVisibilityBasedAnimTickOption
enum class EVisibilityBasedAnimTickOption : uint8_t
{
    AlwaysTickPoseAndRefreshBones                  = 0,
    AlwaysTickPose                                 = 1,
    OnlyTickMontagesWhenNotRendered                = 2,
    OnlyTickPoseWhenRendered                       = 3,
    EVisibilityBasedAnimTickOption_MAX             = 4

};


// Enum  Engine.EPhysBodyOp
enum class EPhysBodyOp : uint8_t
{
    PBO_None                                       = 0,
    PBO_Term                                       = 1,
    PBO_MAX                                        = 2

};


// Enum  Engine.EBoneVisibilityStatus
enum class EBoneVisibilityStatus : uint8_t
{
    BVS_HiddenByParent                             = 0,
    BVS_Visible                                    = 1,
    BVS_ExplicitlyHidden                           = 2,
    BVS_MAX                                        = 3

};


// Enum  Engine.ESkyAtmosphereTransformMode
enum class ESkyAtmosphereTransformMode : uint8_t
{
    PlanetTopAtAbsoluteWorldOrigin                 = 0,
    PlanetTopAtComponentTransform                  = 1,
    PlanetCenterAtComponentTransform               = 2,
    ESkyAtmosphereTransformMode_MAX                = 3

};


// Enum  Engine.ESkyLightSourceType
enum class ESkyLightSourceType : uint8_t
{
    SLS_CapturedScene                              = 0,
    SLS_SpecifiedCubemap                           = 1,
    SLS_MAX                                        = 2

};


// Enum  Engine.EPriorityAttenuationMethod
enum class EPriorityAttenuationMethod : uint8_t
{
    Linear                                         = 0,
    CustomCurve                                    = 1,
    Manual                                         = 2,
    EPriorityAttenuationMethod_MAX                 = 3

};


// Enum  Engine.ESubmixSendMethod
enum class ESubmixSendMethod : uint8_t
{
    Linear                                         = 0,
    CustomCurve                                    = 1,
    Manual                                         = 2,
    ESubmixSendMethod_MAX                          = 3

};


// Enum  Engine.EReverbSendMethod
enum class EReverbSendMethod : uint8_t
{
    Linear                                         = 0,
    CustomCurve                                    = 1,
    Manual                                         = 2,
    EReverbSendMethod_MAX                          = 3

};


// Enum  Engine.EAirAbsorptionMethod
enum class EAirAbsorptionMethod : uint8_t
{
    Linear                                         = 0,
    CustomCurve                                    = 1,
    EAirAbsorptionMethod_MAX                       = 2

};


// Enum  Engine.ESoundSpatializationAlgorithm
enum class ESoundSpatializationAlgorithm : uint8_t
{
    SPATIALIZATION_Default                         = 0,
    SPATIALIZATION_HRTF                            = 1,
    SPATIALIZATION_MAX                             = 2

};


// Enum  Engine.ESoundDistanceCalc
enum class ESoundDistanceCalc : uint8_t
{
    SOUNDDISTANCE_Normal                           = 0,
    SOUNDDISTANCE_InfiniteXYPlane                  = 1,
    SOUNDDISTANCE_InfiniteXZPlane                  = 2,
    SOUNDDISTANCE_InfiniteYZPlane                  = 3,
    SOUNDDISTANCE_MAX                              = 4

};


// Enum  Engine.EVirtualizationMode
enum class EVirtualizationMode : uint8_t
{
    Disabled                                       = 0,
    PlayWhenSilent                                 = 1,
    Restart                                        = 2,
    EVirtualizationMode_MAX                        = 3

};


// Enum  Engine.EMaxConcurrentResolutionRule
enum class EMaxConcurrentResolutionRule : uint8_t
{
    PreventNew                                     = 0,
    StopOldest                                     = 1,
    StopFarthestThenPreventNew                     = 2,
    StopFarthestThenOldest                         = 3,
    StopLowestPriority                             = 4,
    StopQuietest                                   = 5,
    StopLowestPriorityThenPreventNew               = 6,
    Count                                          = 7,
    EMaxConcurrentResolutionRule_MAX               = 8

};


// Enum  Engine.ESoundGroup
enum class ESoundGroup : uint8_t
{
    SOUNDGROUP_Default                             = 0,
    SOUNDGROUP_Effects                             = 1,
    SOUNDGROUP_UI                                  = 2,
    SOUNDGROUP_Music                               = 3,
    SOUNDGROUP_Voice                               = 4,
    SOUNDGROUP_GameSoundGroup1                     = 5,
    SOUNDGROUP_GameSoundGroup2                     = 6,
    SOUNDGROUP_GameSoundGroup3                     = 7,
    SOUNDGROUP_GameSoundGroup4                     = 8,
    SOUNDGROUP_GameSoundGroup5                     = 9,
    SOUNDGROUP_GameSoundGroup6                     = 10,
    SOUNDGROUP_GameSoundGroup7                     = 11,
    SOUNDGROUP_GameSoundGroup8                     = 12,
    SOUNDGROUP_GameSoundGroup9                     = 13,
    SOUNDGROUP_GameSoundGroup10                    = 14,
    SOUNDGROUP_GameSoundGroup11                    = 15,
    SOUNDGROUP_GameSoundGroup12                    = 16,
    SOUNDGROUP_GameSoundGroup13                    = 17,
    SOUNDGROUP_GameSoundGroup14                    = 18,
    SOUNDGROUP_GameSoundGroup15                    = 19,
    SOUNDGROUP_GameSoundGroup16                    = 20,
    SOUNDGROUP_GameSoundGroup17                    = 21,
    SOUNDGROUP_GameSoundGroup18                    = 22,
    SOUNDGROUP_GameSoundGroup19                    = 23,
    SOUNDGROUP_GameSoundGroup20                    = 24,
    SOUNDGROUP_MAX                                 = 25

};


// Enum  Engine.ModulationParamMode
enum class ModulationParamMode : uint8_t
{
    MPM_Normal                                     = 0,
    MPM_Abs                                        = 1,
    MPM_Direct                                     = 2,
    MPM_MAX                                        = 3

};


// Enum  Engine.ESourceBusChannels
enum class ESourceBusChannels : uint8_t
{
    Mono                                           = 0,
    Stereo                                         = 1,
    ESourceBusChannels_MAX                         = 2

};


// Enum  Engine.ESourceBusSendLevelControlMethod
enum class ESourceBusSendLevelControlMethod : uint8_t
{
    Linear                                         = 0,
    CustomCurve                                    = 1,
    Manual                                         = 2,
    ESourceBusSendLevelControlMethod_MAX           = 3

};


// Enum  Engine.ESendLevelControlMethod
enum class ESendLevelControlMethod : uint8_t
{
    Linear                                         = 0,
    CustomCurve                                    = 1,
    Manual                                         = 2,
    ESendLevelControlMethod_MAX                    = 3

};


// Enum  Engine.EAudioRecordingExportType
enum class EAudioRecordingExportType : uint8_t
{
    SoundWave                                      = 0,
    WavFile                                        = 1,
    EAudioRecordingExportType_MAX                  = 2

};


// Enum  Engine.ESoundWaveFFTSize
enum class ESoundWaveFFTSize : uint8_t
{
    VerySmall                                      = 0,
    Small                                          = 1,
    Medium                                         = 2,
    Large                                          = 3,
    VeryLarge                                      = 4,
    ESoundWaveFFTSize_MAX                          = 5

};


// Enum  Engine.EDecompressionType
enum class EDecompressionType : uint8_t
{
    DTYPE_Setup                                    = 0,
    DTYPE_Invalid                                  = 1,
    DTYPE_Preview                                  = 2,
    DTYPE_Native                                   = 3,
    DTYPE_RealTime                                 = 4,
    DTYPE_Procedural                               = 5,
    DTYPE_Xenon                                    = 6,
    DTYPE_Streaming                                = 7,
    DTYPE_MAX                                      = 8

};


// Enum  Engine.ESoundWaveLoadingBehavior
enum class ESoundWaveLoadingBehavior : uint8_t
{
    Inherited                                      = 0,
    RetainOnLoad                                   = 1,
    PrimeOnLoad                                    = 2,
    LoadOnDemand                                   = 3,
    ForceInline                                    = 4,
    Uninitialized                                  = 255,
    ESoundWaveLoadingBehavior_MAX                  = 256

};


// Enum  Engine.ESplineCoordinateSpace
enum class ESplineCoordinateSpace : uint8_t
{
    Local                                          = 0,
    World                                          = 1,
    ESplineCoordinateSpace_MAX                     = 2

};


// Enum  Engine.ESplinePointType
enum class ESplinePointType : uint8_t
{
    Linear                                         = 0,
    Curve                                          = 1,
    Constant                                       = 2,
    CurveClamped                                   = 3,
    CurveCustomTangent                             = 4,
    ESplinePointType_MAX                           = 5

};


// Enum  Engine.ESplineMeshAxis
enum class ESplineMeshAxis : uint8_t
{
    X                                              = 0,
    Y                                              = 1,
    Z                                              = 2,
    ESplineMeshAxis_MAX                            = 3

};


// Enum  Engine.EStaticMeshLODGroup
enum class EStaticMeshLODGroup : uint8_t
{
    LevelArchitecture                              = 0,
    SmallProp                                      = 1,
    LargeProp                                      = 2,
    Deco                                           = 3,
    Vista                                          = 4,
    Foliage                                        = 5,
    HighDetail                                     = 6,
    StaticMeshLODGroup_Max                         = 7,
    EStaticMeshLODGroup_MAX                        = 8

};


// Enum  Engine.EOptimizationType
enum class EOptimizationType : uint8_t
{
    OT_NumOfTriangles                              = 0,
    OT_MaxDeviation                                = 1,
    OT_MAX                                         = 2

};


// Enum  Engine.EImportanceLevel
enum class EImportanceLevel : uint8_t
{
    IL_Off                                         = 0,
    IL_Lowest                                      = 1,
    IL_Low                                         = 2,
    IL_Normal                                      = 3,
    IL_High                                        = 4,
    IL_Highest                                     = 5,
    TEMP_BROKEN2                                   = 6,
    EImportanceLevel_MAX                           = 7

};


// Enum  Engine.ENormalMode
enum class ENormalMode : uint8_t
{
    NM_PreserveSmoothingGroups                     = 0,
    NM_RecalculateNormals                          = 1,
    NM_RecalculateNormalsSmooth                    = 2,
    NM_RecalculateNormalsHard                      = 3,
    TEMP_BROKEN                                    = 4,
    ENormalMode_MAX                                = 5

};


// Enum  Engine.EStereoLayerShape
enum class EStereoLayerShape : uint8_t
{
    SLSH_QuadLayer                                 = 0,
    SLSH_CylinderLayer                             = 1,
    SLSH_CubemapLayer                              = 2,
    SLSH_EquirectLayer                             = 3,
    SLSH_MAX                                       = 4

};


// Enum  Engine.EStereoLayerType
enum class EStereoLayerType : uint8_t
{
    SLT_WorldLocked                                = 0,
    SLT_TrackerLocked                              = 1,
    SLT_FaceLocked                                 = 2,
    SLT_MAX                                        = 3

};


// Enum  Engine.EOpacitySourceMode
enum class EOpacitySourceMode : uint8_t
{
    OSM_Alpha                                      = 0,
    OSM_ColorBrightness                            = 1,
    OSM_RedChannel                                 = 2,
    OSM_GreenChannel                               = 3,
    OSM_BlueChannel                                = 4,
    OSM_MAX                                        = 5

};


// Enum  Engine.ESubUVBoundingVertexCount
enum class ESubUVBoundingVertexCount : uint8_t
{
    BVC_FourVertices                               = 0,
    BVC_EightVertices                              = 1,
    BVC_MAX                                        = 2

};


// Enum  Engine.EVerticalTextAligment
enum class EVerticalTextAligment : uint8_t
{
    EVRTA_TextTop                                  = 0,
    EVRTA_TextCenter                               = 1,
    EVRTA_TextBottom                               = 2,
    EVRTA_QuadTop                                  = 3,
    EVRTA_MAX                                      = 4

};


// Enum  Engine.EHorizTextAligment
enum class EHorizTextAligment : uint8_t
{
    EHTA_Left                                      = 0,
    EHTA_Center                                    = 1,
    EHTA_Right                                     = 2,
    EHTA_MAX                                       = 3

};


// Enum  Engine.ETextureLossyCompressionAmount
enum class ETextureLossyCompressionAmount : uint8_t
{
    TLCA_Default                                   = 0,
    TLCA_None                                      = 1,
    TLCA_Lowest                                    = 2,
    TLCA_Low                                       = 3,
    TLCA_Medium                                    = 4,
    TLCA_High                                      = 5,
    TLCA_Highest                                   = 6,
    TLCA_MAX                                       = 7

};


// Enum  Engine.ETextureCompressionQuality
enum class ETextureCompressionQuality : uint8_t
{
    TCQ_Default                                    = 0,
    TCQ_Lowest                                     = 1,
    TCQ_Low                                        = 2,
    TCQ_Medium                                     = 3,
    TCQ_High                                       = 4,
    TCQ_Highest                                    = 5,
    TCQ_MAX                                        = 6

};


// Enum  Engine.ETextureSourceFormat
enum class ETextureSourceFormat : uint8_t
{
    TSF_Invalid                                    = 0,
    TSF_G8                                         = 1,
    TSF_BGRA8                                      = 2,
    TSF_BGRE8                                      = 3,
    TSF_RGBA16                                     = 4,
    TSF_RGBA16F                                    = 5,
    TSF_RGBA8                                      = 6,
    TSF_RGBE8                                      = 7,
    TSF_G16                                        = 8,
    TSF_MAX                                        = 9

};


// Enum  Engine.ETextureSourceArtType
enum class ETextureSourceArtType : uint8_t
{
    TSAT_Uncompressed                              = 0,
    TSAT_PNGCompressed                             = 1,
    TSAT_DDSFile                                   = 2,
    TSAT_MAX                                       = 3

};


// Enum  Engine.ETextureMipCount
enum class ETextureMipCount : uint8_t
{
    TMC_ResidentMips                               = 0,
    TMC_AllMips                                    = 1,
    TMC_AllMipsBiased                              = 2,
    TMC_MAX                                        = 3

};


// Enum  Engine.ECompositeTextureMode
enum class ECompositeTextureMode : uint8_t
{
    CTM_Disabled                                   = 0,
    CTM_NormalRoughnessToRed                       = 1,
    CTM_NormalRoughnessToGreen                     = 2,
    CTM_NormalRoughnessToBlue                      = 3,
    CTM_NormalRoughnessToAlpha                     = 4,
    CTM_MAX                                        = 5

};


// Enum  Engine.TextureAddress
enum class TextureAddress : uint8_t
{
    TA_Wrap                                        = 0,
    TA_Clamp                                       = 1,
    TA_Mirror                                      = 2,
    TA_MAX                                         = 3

};


// Enum  Engine.TextureCompressionSettings
enum class TextureCompressionSettings : uint8_t
{
    TC_Default                                     = 0,
    TC_Normalmap                                   = 1,
    TC_Masks                                       = 2,
    TC_Grayscale                                   = 3,
    TC_Displacementmap                             = 4,
    TC_VectorDisplacementmap                       = 5,
    TC_HDR                                         = 6,
    TC_EditorIcon                                  = 7,
    TC_Alpha                                       = 8,
    TC_DistanceFieldFont                           = 9,
    TC_HDR_Compressed                              = 10,
    TC_BC7                                         = 11,
    TC_MAX                                         = 12

};


// Enum  Engine.ETextureClass
enum class ETextureClass : uint8_t
{
    Invalid                                        = 0,
    TwoD                                           = 1,
    Cube                                           = 2,
    Array                                          = 3,
    CubeArray                                      = 4,
    Volume                                         = 5,
    TwoDDynamic                                    = 6,
    RenderTarget                                   = 7,
    Other2DNoSource                                = 8,
    OtherUnknown                                   = 9,
    ETextureClass_MAX                              = 10

};


// Enum  Engine.ETextureMipLoadOptions
enum class ETextureMipLoadOptions : uint8_t
{
    Default                                        = 0,
    AllMips                                        = 1,
    OnlyFirstMip                                   = 2,
    ETextureMipLoadOptions_MAX                     = 3

};


// Enum  Engine.ETextureSamplerFilter
enum class ETextureSamplerFilter : uint8_t
{
    Point                                          = 0,
    Bilinear                                       = 1,
    Trilinear                                      = 2,
    AnisotropicPoint                               = 3,
    AnisotropicLinear                              = 4,
    ETextureSamplerFilter_MAX                      = 5

};


// Enum  Engine.ETexturePowerOfTwoSetting
enum class ETexturePowerOfTwoSetting : uint8_t
{
    None                                           = 0,
    PadToPowerOfTwo                                = 1,
    PadToSquarePowerOfTwo                          = 2,
    ETexturePowerOfTwoSetting_MAX                  = 3

};


// Enum  Engine.TextureMipGenSettings
enum class TextureMipGenSettings : uint8_t
{
    TMGS_FromTextureGroup                          = 0,
    TMGS_SimpleAverage                             = 1,
    TMGS_Sharpen0                                  = 2,
    TMGS_Sharpen1                                  = 3,
    TMGS_Sharpen2                                  = 4,
    TMGS_Sharpen3                                  = 5,
    TMGS_Sharpen4                                  = 6,
    TMGS_Sharpen5                                  = 7,
    TMGS_Sharpen6                                  = 8,
    TMGS_Sharpen7                                  = 9,
    TMGS_Sharpen8                                  = 10,
    TMGS_Sharpen9                                  = 11,
    TMGS_Sharpen10                                 = 12,
    TMGS_NoMipmaps                                 = 13,
    TMGS_LeaveExistingMips                         = 14,
    TMGS_Blur1                                     = 15,
    TMGS_Blur2                                     = 16,
    TMGS_Blur3                                     = 17,
    TMGS_Blur4                                     = 18,
    TMGS_Blur5                                     = 19,
    TMGS_Unfiltered                                = 20,
    TMGS_MAX                                       = 21

};


// Enum  Engine.TextureGroup
enum class TextureGroup : uint8_t
{
    TEXTUREGROUP_World                             = 0,
    TEXTUREGROUP_WorldNormalMap                    = 1,
    TEXTUREGROUP_WorldSpecular                     = 2,
    TEXTUREGROUP_Character                         = 3,
    TEXTUREGROUP_CharacterNormalMap                = 4,
    TEXTUREGROUP_CharacterSpecular                 = 5,
    TEXTUREGROUP_Weapon                            = 6,
    TEXTUREGROUP_WeaponNormalMap                   = 7,
    TEXTUREGROUP_WeaponSpecular                    = 8,
    TEXTUREGROUP_Vehicle                           = 9,
    TEXTUREGROUP_VehicleNormalMap                  = 10,
    TEXTUREGROUP_VehicleSpecular                   = 11,
    TEXTUREGROUP_Cinematic                         = 12,
    TEXTUREGROUP_Effects                           = 13,
    TEXTUREGROUP_EffectsNotFiltered                = 14,
    TEXTUREGROUP_Skybox                            = 15,
    TEXTUREGROUP_UI                                = 16,
    TEXTUREGROUP_Lightmap                          = 17,
    TEXTUREGROUP_RenderTarget                      = 18,
    TEXTUREGROUP_MobileFlattened                   = 19,
    TEXTUREGROUP_ProcBuilding_Face                 = 20,
    TEXTUREGROUP_ProcBuilding_LightMap             = 21,
    TEXTUREGROUP_Shadowmap                         = 22,
    TEXTUREGROUP_ColorLookupTable                  = 23,
    TEXTUREGROUP_Terrain_Heightmap                 = 24,
    TEXTUREGROUP_Terrain_Weightmap                 = 25,
    TEXTUREGROUP_Bokeh                             = 26,
    TEXTUREGROUP_IESLightProfile                   = 27,
    TEXTUREGROUP_Pixels2D                          = 28,
    TEXTUREGROUP_HierarchicalLOD                   = 29,
    TEXTUREGROUP_Impostor                          = 30,
    TEXTUREGROUP_ImpostorNormalDepth               = 31,
    TEXTUREGROUP_8BitData                          = 32,
    TEXTUREGROUP_16BitData                         = 33,
    TEXTUREGROUP_Project01                         = 34,
    TEXTUREGROUP_Project02                         = 35,
    TEXTUREGROUP_Project03                         = 36,
    TEXTUREGROUP_Project04                         = 37,
    TEXTUREGROUP_Project05                         = 38,
    TEXTUREGROUP_Project06                         = 39,
    TEXTUREGROUP_Project07                         = 40,
    TEXTUREGROUP_Project08                         = 41,
    TEXTUREGROUP_Project09                         = 42,
    TEXTUREGROUP_Project10                         = 43,
    TEXTUREGROUP_Project11                         = 44,
    TEXTUREGROUP_Project12                         = 45,
    TEXTUREGROUP_Project13                         = 46,
    TEXTUREGROUP_Project14                         = 47,
    TEXTUREGROUP_Project15                         = 48,
    TEXTUREGROUP_MAX                               = 49

};


// Enum  Engine.ETextureRenderTargetFormat
enum class ETextureRenderTargetFormat : uint8_t
{
    RTF_R8                                         = 0,
    RTF_RG8                                        = 1,
    RTF_RGBA8                                      = 2,
    RTF_RGBA8_SRGB                                 = 3,
    RTF_R16f                                       = 4,
    RTF_RG16f                                      = 5,
    RTF_RGBA16f                                    = 6,
    RTF_R32f                                       = 7,
    RTF_RG32f                                      = 8,
    RTF_RGBA32f                                    = 9,
    RTF_RGB10A2                                    = 10,
    RTF_MAX                                        = 11

};


// Enum  Engine.ETimecodeProviderSynchronizationState
enum class ETimecodeProviderSynchronizationState : uint8_t
{
    Closed                                         = 0,
    Error                                          = 1,
    Synchronized                                   = 2,
    Synchronizing                                  = 3,
    ETimecodeProviderSynchronizationState_MAX      = 4

};


// Enum  Engine.ETimelineDirection
enum class ETimelineDirection : uint8_t
{
    Forward                                        = 0,
    Backward                                       = 1,
    ETimelineDirection_MAX                         = 2

};


// Enum  Engine.ETimeStretchCurveMapping
enum class ETimeStretchCurveMapping : uint8_t
{
    T_Original                                     = 0,
    T_TargetMin                                    = 1,
    T_TargetMax                                    = 2,
    MAX                                            = 3

};


// Enum  Engine.ETwitterIntegrationDelegate
enum class ETwitterIntegrationDelegate : uint8_t
{
    TID_AuthorizeComplete                          = 0,
    TID_TweetUIComplete                            = 1,
    TID_RequestComplete                            = 2,
    TID_MAX                                        = 3

};


// Enum  Engine.ETwitterRequestMethod
enum class ETwitterRequestMethod : uint8_t
{
    TRM_Get                                        = 0,
    TRM_Post                                       = 1,
    TRM_Delete                                     = 2,
    TRM_MAX                                        = 3

};


// Enum  Engine.EUserDefinedStructureStatus
enum class EUserDefinedStructureStatus : uint8_t
{
    UDSS_UpToDate                                  = 0,
    UDSS_Dirty                                     = 1,
    UDSS_Error                                     = 2,
    UDSS_Duplicate                                 = 3,
    UDSS_MAX                                       = 4

};


// Enum  Engine.EUIScalingRule
enum class EUIScalingRule : uint8_t
{
    ShortestSide                                   = 0,
    LongestSide                                    = 1,
    Horizontal                                     = 2,
    Vertical                                       = 3,
    AutoScale                                      = 4,
    Custom                                         = 5,
    EUIScalingRule_MAX                             = 6

};


// Enum  Engine.ERenderFocusRule
enum class ERenderFocusRule : uint8_t
{
    Always                                         = 0,
    NonPointer                                     = 1,
    NavigationOnly                                 = 2,
    Never                                          = 3,
    ERenderFocusRule_MAX                           = 4

};


// Enum  Engine.EVectorFieldConstructionOp
enum class EVectorFieldConstructionOp : uint8_t
{
    VFCO_Extrude                                   = 0,
    VFCO_Revolve                                   = 1,
    VFCO_MAX                                       = 2

};


// Enum  Engine.EWindSourceType
enum class EWindSourceType : uint8_t
{
    Directional                                    = 0,
    Point                                          = 1,
    EWindSourceType_MAX                            = 2

};


// Enum  Engine.EPSCPoolMethod
enum class EPSCPoolMethod : uint8_t
{
    None                                           = 0,
    AutoRelease                                    = 1,
    ManualRelease                                  = 2,
    ManualRelease_OnComplete                       = 3,
    FreeInPool                                     = 4,
    EPSCPoolMethod_MAX                             = 5

};


// Enum  Engine.EVolumeLightingMethod
enum class EVolumeLightingMethod : uint8_t
{
    VLM_VolumetricLightmap                         = 0,
    VLM_SparseVolumeLightingSamples                = 1,
    VLM_MAX                                        = 2

};


// Enum  Engine.EVisibilityAggressiveness
enum class EVisibilityAggressiveness : uint8_t
{
    VIS_LeastAggressive                            = 0,
    VIS_ModeratelyAggressive                       = 1,
    VIS_MostAggressive                             = 2,
    VIS_Max                                        = 3

};


// Enum  ClothingSystemRuntimeCommon.EClothingWindMethod_Legacy
enum class EClothingWindMethod_Legacy : uint8_t
{
    Legacy                                         = 0,
    Accurate                                       = 1,
    EClothingWindMethod_MAX                        = 2

};


// Enum  ClothingSystemRuntimeCommon.EWeightMapTargetCommon
enum class EWeightMapTargetCommon : uint8_t
{
    None                                           = 0,
    MaxDistance                                    = 1,
    BackstopDistance                               = 2,
    BackstopRadius                                 = 3,
    AnimDriveMultiplier                            = 4,
    EWeightMapTargetCommon_MAX                     = 5

};


// Enum  ClothingSystemRuntimeNv.EClothingWindMethodNv
enum class EClothingWindMethodNv : uint8_t
{
    Legacy                                         = 0,
    Accurate                                       = 1,
    EClothingWindMethodNv_MAX                      = 2

};


// Enum  GameplayTasks.EGameplayTaskState
enum class EGameplayTaskState : uint8_t
{
    Uninitialized                                  = 0,
    AwaitingActivation                             = 1,
    Paused                                         = 2,
    Active                                         = 3,
    Finished                                       = 4,
    EGameplayTaskState_MAX                         = 5

};


// Enum  ChaosSolverEngine.EClusterConnectionTypeEnum
enum class EClusterConnectionTypeEnum : uint8_t
{
    Chaos_PointImplicit                            = 0,
    Chaos_DelaunayTriangulation                    = 1,
    Chaos_MinimalSpanningSubsetDelaunayTriangulation = 2,
    Chaos_PointImplicitAugmentedWithMinimalDelaunay = 3,
    Chaos_None                                     = 4,
    Chaos_EClsuterCreationParameters_Max           = 5,
    Chaos_MAX                                      = 6

};


// Enum  GeometryCollectionEngine.EChaosBreakingSortMethod
enum class EChaosBreakingSortMethod : uint8_t
{
    SortNone                                       = 0,
    SortByHighestMass                              = 1,
    SortByHighestSpeed                             = 2,
    SortByNearestFirst                             = 3,
    Count                                          = 4,
    EChaosBreakingSortMethod_MAX                   = 5

};


// Enum  GeometryCollectionEngine.EChaosCollisionSortMethod
enum class EChaosCollisionSortMethod : uint8_t
{
    SortNone                                       = 0,
    SortByHighestMass                              = 1,
    SortByHighestSpeed                             = 2,
    SortByHighestImpulse                           = 3,
    SortByNearestFirst                             = 4,
    Count                                          = 5,
    EChaosCollisionSortMethod_MAX                  = 6

};


// Enum  GeometryCollectionEngine.EChaosTrailingSortMethod
enum class EChaosTrailingSortMethod : uint8_t
{
    SortNone                                       = 0,
    SortByHighestMass                              = 1,
    SortByHighestSpeed                             = 2,
    SortByNearestFirst                             = 3,
    Count                                          = 4,
    EChaosTrailingSortMethod_MAX                   = 5

};


// Enum  GeometryCollectionEngine.EGeometryCollectionDebugDrawActorHideGeometry
enum class EGeometryCollectionDebugDrawActorHideGeometry : uint8_t
{
    HideNone                                       = 0,
    HideWithCollision                              = 1,
    HideSelected                                   = 2,
    HideWholeCollection                            = 3,
    HideAll                                        = 4,
    EGeometryCollectionDebugDrawActorHideGeometry_MAX = 5

};


// Enum  GeometryCollectionEngine.ECollectionGroupEnum
enum class ECollectionGroupEnum : uint8_t
{
    Chaos_Traansform                               = 0,
    Chaos_Max                                      = 1

};


// Enum  GeometryCollectionEngine.ECollectionAttributeEnum
enum class ECollectionAttributeEnum : uint8_t
{
    Chaos_Active                                   = 0,
    Chaos_DynamicState                             = 1,
    Chaos_CollisionGroup                           = 2,
    Chaos_Max                                      = 3

};


// Enum  InteractiveToolsFramework.EInputCaptureState
enum class EInputCaptureState : uint8_t
{
    Begin                                          = 1,
    Continue                                       = 2,
    End                                            = 3,
    Ignore                                         = 4,
    EInputCaptureState_MAX                         = 5

};


// Enum  InteractiveToolsFramework.EInputCaptureRequestType
enum class EInputCaptureRequestType : uint8_t
{
    Begin                                          = 1,
    Ignore                                         = 2,
    EInputCaptureRequestType_MAX                   = 3

};


// Enum  InteractiveToolsFramework.EInputCaptureSide
enum class EInputCaptureSide : uint8_t
{
    None                                           = 0,
    Left                                           = 1,
    Right                                          = 2,
    Both                                           = 3,
    Any                                            = 99,
    EInputCaptureSide_MAX                          = 100

};


// Enum  InteractiveToolsFramework.EInputDevices
enum class EInputDevices : uint32_t
{
    None                                           = 0,
    Keyboard                                       = 1,
    Mouse                                          = 2,
    Gamepad                                        = 4,
    OculusTouch                                    = 8,
    HTCViveWands                                   = 16,
    AnySpatialDevice                               = 24,
    TabletFingers                                  = 1024,
    EInputDevices_MAX                              = 1025

};


// Enum  InteractiveToolsFramework.ETransformGizmoSubElements
enum class ETransformGizmoSubElements : uint32_t
{
    None                                           = 0,
    TranslateAxisX                                 = 2,
    TranslateAxisY                                 = 4,
    TranslateAxisZ                                 = 8,
    TranslateAllAxes                               = 14,
    TranslatePlaneXY                               = 16,
    TranslatePlaneXZ                               = 32,
    TranslatePlaneYZ                               = 64,
    TranslateAllPlanes                             = 112,
    RotateAxisX                                    = 128,
    RotateAxisY                                    = 256,
    RotateAxisZ                                    = 512,
    RotateAllAxes                                  = 896,
    ScaleAxisX                                     = 1024,
    ScaleAxisY                                     = 2048,
    ScaleAxisZ                                     = 4096,
    ScaleAllAxes                                   = 7168,
    ScalePlaneYZ                                   = 8192,
    ScalePlaneXZ                                   = 16384,
    ScalePlaneXY                                   = 32768,
    ScaleAllPlanes                                 = 57344,
    ScaleUniform                                   = 65536,
    StandardTranslateRotate                        = 1022,
    TranslateRotateUniformScale                    = 66558,
    FullTranslateRotateScale                       = 131070,
    ETransformGizmoSubElements_MAX                 = 131071

};


// Enum  InteractiveToolsFramework.EToolChangeTrackingMode
enum class EToolChangeTrackingMode : uint8_t
{
    NoChangeTracking                               = 1,
    UndoToExit                                     = 2,
    FullUndoRedo                                   = 3,
    EToolChangeTrackingMode_MAX                    = 4

};


// Enum  InteractiveToolsFramework.EToolSide
enum class EToolSide : uint8_t
{
    Left                                           = 1,
    Mouse                                          = 1,
    Right                                          = 2,
    EToolSide_MAX                                  = 3

};


// Enum  InteractiveToolsFramework.ESelectedObjectsModificationType
enum class ESelectedObjectsModificationType : uint8_t
{
    Replace                                        = 0,
    Add                                            = 1,
    Remove                                         = 2,
    Clear                                          = 3,
    ESelectedObjectsModificationType_MAX           = 4

};


// Enum  InteractiveToolsFramework.EToolMessageLevel
enum class EToolMessageLevel : uint8_t
{
    Internal                                       = 0,
    UserMessage                                    = 1,
    UserNotification                               = 2,
    UserWarning                                    = 3,
    UserError                                      = 4,
    EToolMessageLevel_MAX                          = 5

};


// Enum  InteractiveToolsFramework.EToolContextCoordinateSystem
enum class EToolContextCoordinateSystem : uint8_t
{
    World                                          = 0,
    Local                                          = 1,
    EToolContextCoordinateSystem_MAX               = 2

};


// Enum  InteractiveToolsFramework.EStandardToolContextMaterials
enum class EStandardToolContextMaterials : uint8_t
{
    VertexColorMaterial                            = 1,
    EStandardToolContextMaterials_MAX              = 2

};


// Enum  InteractiveToolsFramework.ESceneSnapQueryTargetType
enum class ESceneSnapQueryTargetType : uint8_t
{
    None                                           = 0,
    MeshVertex                                     = 1,
    MeshEdge                                       = 2,
    Grid                                           = 4,
    All                                            = 7,
    ESceneSnapQueryTargetType_MAX                  = 8

};


// Enum  InteractiveToolsFramework.ESceneSnapQueryType
enum class ESceneSnapQueryType : uint8_t
{
    Position                                       = 1,
    ESceneSnapQueryType_MAX                        = 2

};


// Enum  RigVM.ERigVMParameterType
enum class ERigVMParameterType : uint8_t
{
    Input                                          = 0,
    Output                                         = 1,
    Invalid                                        = 2,
    ERigVMParameterType_MAX                        = 3

};


// Enum  RigVM.ERigVMOpCode
enum class ERigVMOpCode : uint8_t
{
    Execute_0_Operands                             = 0,
    Execute_1_Operands                             = 1,
    Execute_2_Operands                             = 2,
    Execute_3_Operands                             = 3,
    Execute_4_Operands                             = 4,
    Execute_5_Operands                             = 5,
    Execute_6_Operands                             = 6,
    Execute_7_Operands                             = 7,
    Execute_8_Operands                             = 8,
    Execute_9_Operands                             = 9,
    Execute_10_Operands                            = 10,
    Execute_11_Operands                            = 11,
    Execute_12_Operands                            = 12,
    Execute_13_Operands                            = 13,
    Execute_14_Operands                            = 14,
    Execute_15_Operands                            = 15,
    Execute_16_Operands                            = 16,
    Execute_17_Operands                            = 17,
    Execute_18_Operands                            = 18,
    Execute_19_Operands                            = 19,
    Execute_20_Operands                            = 20,
    Execute_21_Operands                            = 21,
    Execute_22_Operands                            = 22,
    Execute_23_Operands                            = 23,
    Execute_24_Operands                            = 24,
    Execute_25_Operands                            = 25,
    Execute_26_Operands                            = 26,
    Execute_27_Operands                            = 27,
    Execute_28_Operands                            = 28,
    Execute_29_Operands                            = 29,
    Execute_30_Operands                            = 30,
    Execute_31_Operands                            = 31,
    Execute_32_Operands                            = 32,
    Execute_33_Operands                            = 33,
    Execute_34_Operands                            = 34,
    Execute_35_Operands                            = 35,
    Execute_36_Operands                            = 36,
    Execute_37_Operands                            = 37,
    Execute_38_Operands                            = 38,
    Execute_39_Operands                            = 39,
    Execute_40_Operands                            = 40,
    Execute_41_Operands                            = 41,
    Execute_42_Operands                            = 42,
    Execute_43_Operands                            = 43,
    Execute_44_Operands                            = 44,
    Execute_45_Operands                            = 45,
    Execute_46_Operands                            = 46,
    Execute_47_Operands                            = 47,
    Execute_48_Operands                            = 48,
    Execute_49_Operands                            = 49,
    Execute_50_Operands                            = 50,
    Execute_51_Operands                            = 51,
    Execute_52_Operands                            = 52,
    Execute_53_Operands                            = 53,
    Execute_54_Operands                            = 54,
    Execute_55_Operands                            = 55,
    Execute_56_Operands                            = 56,
    Execute_57_Operands                            = 57,
    Execute_58_Operands                            = 58,
    Execute_59_Operands                            = 59,
    Execute_60_Operands                            = 60,
    Execute_61_Operands                            = 61,
    Execute_62_Operands                            = 62,
    Execute_63_Operands                            = 63,
    Execute_64_Operands                            = 64,
    Zero                                           = 65,
    BoolFalse                                      = 66,
    BoolTrue                                       = 67,
    Copy                                           = 68,
    Increment                                      = 69,
    Decrement                                      = 70,
    Equals                                         = 71,
    NotEquals                                      = 72,
    JumpAbsolute                                   = 73,
    JumpForward                                    = 74,
    JumpBackward                                   = 75,
    JumpAbsoluteIf                                 = 76,
    JumpForwardIf                                  = 77,
    JumpBackwardIf                                 = 78,
    ChangeType                                     = 79,
    Exit                                           = 80,
    Invalid                                        = 81,
    ERigVMOpCode_MAX                               = 82

};


// Enum  RigVM.ERigVMRegisterType
enum class ERigVMRegisterType : uint8_t
{
    Plain                                          = 0,
    String                                         = 1,
    Name                                           = 2,
    Struct                                         = 3,
    Invalid                                        = 4,
    ERigVMRegisterType_MAX                         = 5

};


// Enum  RigVM.ERigVMMemoryType
enum class ERigVMMemoryType : uint8_t
{
    Work                                           = 0,
    Literal                                        = 1,
    Invalid                                        = 2,
    ERigVMMemoryType_MAX                           = 3

};


// Enum  NavigationSystem.ERuntimeGenerationType
enum class ERuntimeGenerationType : uint8_t
{
    Static                                         = 0,
    DynamicModifiersOnly                           = 1,
    Dynamic                                        = 2,
    LegacyGeneration                               = 3,
    ERuntimeGenerationType_MAX                     = 4

};


// Enum  NavigationSystem.ENavCostDisplay
enum class ENavCostDisplay : uint8_t
{
    TotalCost                                      = 0,
    HeuristicOnly                                  = 1,
    RealCostOnly                                   = 2,
    ENavCostDisplay_MAX                            = 3

};


// Enum  NavigationSystem.ENavSystemOverridePolicy
enum class ENavSystemOverridePolicy : uint8_t
{
    Override                                       = 0,
    Append                                         = 1,
    Skip                                           = 2,
    ENavSystemOverridePolicy_MAX                   = 3

};


// Enum  NavigationSystem.ERecastPartitioning
enum class ERecastPartitioning : uint8_t
{
    Monotone                                       = 0,
    Watershed                                      = 1,
    ChunkyMonotone                                 = 2,
    ERecastPartitioning_MAX                        = 3

};


// Enum  AIModule.EPathFollowingResult
enum class EPathFollowingResult : uint8_t
{
    Success                                        = 0,
    Blocked                                        = 1,
    OffPath                                        = 2,
    Aborted                                        = 3,
    Skipped_DEPRECATED                             = 4,
    Invalid                                        = 5,
    EPathFollowingResult_MAX                       = 6

};


// Enum  AIModule.EEnvQueryStatus
enum class EEnvQueryStatus : uint8_t
{
    Processing                                     = 0,
    Success                                        = 1,
    Failed                                         = 2,
    Aborted                                        = 3,
    OwnerLost                                      = 4,
    MissingParam                                   = 5,
    EEnvQueryStatus_MAX                            = 6

};


// Enum  AIModule.EAISenseNotifyType
enum class EAISenseNotifyType : uint8_t
{
    OnEveryPerception                              = 0,
    OnPerceptionChange                             = 1,
    EAISenseNotifyType_MAX                         = 2

};


// Enum  AIModule.EAITaskPriority
enum class EAITaskPriority : uint8_t
{
    Lowest                                         = 0,
    Low                                            = 64,
    AutonomousAI                                   = 127,
    High                                           = 192,
    Ultimate                                       = 254,
    EAITaskPriority_MAX                            = 255

};


// Enum  AIModule.EGenericAICheck
enum class EGenericAICheck : uint8_t
{
    Less                                           = 0,
    LessOrEqual                                    = 1,
    Equal                                          = 2,
    NotEqual                                       = 3,
    GreaterOrEqual                                 = 4,
    Greater                                        = 5,
    IsTrue                                         = 6,
    MAX                                            = 7

};


// Enum  AIModule.EAILockSource
enum class EAILockSource : uint8_t
{
    Animation                                      = 0,
    Logic                                          = 1,
    Script                                         = 2,
    Gameplay                                       = 3,
    MAX                                            = 4

};


// Enum  AIModule.EAIRequestPriority
enum class EAIRequestPriority : uint8_t
{
    SoftScript                                     = 0,
    Logic                                          = 1,
    HardScript                                     = 2,
    Reaction                                       = 3,
    Ultimate                                       = 4,
    MAX                                            = 5

};


// Enum  AIModule.EPawnActionEventType
enum class EPawnActionEventType : uint8_t
{
    Invalid                                        = 0,
    FailedToStart                                  = 1,
    InstantAbort                                   = 2,
    FinishedAborting                               = 3,
    FinishedExecution                              = 4,
    Push                                           = 5,
    EPawnActionEventType_MAX                       = 6

};


// Enum  AIModule.EPawnActionResult
enum class EPawnActionResult : uint8_t
{
    NotStarted                                     = 0,
    InProgress                                     = 1,
    Success                                        = 2,
    Failed                                         = 3,
    Aborted                                        = 4,
    EPawnActionResult_MAX                          = 5

};


// Enum  AIModule.EPawnActionAbortState
enum class EPawnActionAbortState : uint8_t
{
    NeverStarted                                   = 0,
    NotBeingAborted                                = 1,
    MarkPendingAbort                               = 2,
    LatentAbortInProgress                          = 3,
    AbortDone                                      = 4,
    MAX                                            = 5

};


// Enum  AIModule.FAIDistanceType
enum class FAIDistanceType : uint8_t
{
    Distance3D                                     = 0,
    Distance2D                                     = 1,
    DistanceZ                                      = 2,
    MAX                                            = 3

};


// Enum  AIModule.EAIOptionFlag
enum class EAIOptionFlag : uint8_t
{
    Default                                        = 0,
    Enable                                         = 1,
    Disable                                        = 2,
    MAX                                            = 3

};


// Enum  AIModule.EBTFlowAbortMode
enum class EBTFlowAbortMode : uint8_t
{
    None                                           = 0,
    LowerPriority                                  = 1,
    Self                                           = 2,
    Both                                           = 3,
    EBTFlowAbortMode_MAX                           = 4

};


// Enum  AIModule.EBTNodeResult
enum class EBTNodeResult : uint8_t
{
    Succeeded                                      = 0,
    Failed                                         = 1,
    Aborted                                        = 2,
    InProgress                                     = 3,
    EBTNodeResult_MAX                              = 4

};


// Enum  AIModule.ETextKeyOperation
enum class ETextKeyOperation : uint8_t
{
    Equal                                          = 0,
    NotEqual                                       = 1,
    Contain                                        = 2,
    NotContain                                     = 3,
    ETextKeyOperation_MAX                          = 4

};


// Enum  AIModule.EArithmeticKeyOperation
enum class EArithmeticKeyOperation : uint8_t
{
    Equal                                          = 0,
    NotEqual                                       = 1,
    Less                                           = 2,
    LessOrEqual                                    = 3,
    Greater                                        = 4,
    GreaterOrEqual                                 = 5,
    EArithmeticKeyOperation_MAX                    = 6

};


// Enum  AIModule.EBasicKeyOperation
enum class EBasicKeyOperation : uint8_t
{
    Set                                            = 0,
    NotSet                                         = 1,
    EBasicKeyOperation_MAX                         = 2

};


// Enum  AIModule.EBTParallelMode
enum class EBTParallelMode : uint8_t
{
    AbortBackground                                = 0,
    WaitForBackground                              = 1,
    EBTParallelMode_MAX                            = 2

};


// Enum  AIModule.EBTDecoratorLogic
enum class EBTDecoratorLogic : uint8_t
{
    Invalid                                        = 0,
    Test                                           = 1,
    And                                            = 2,
    Or                                             = 3,
    Not                                            = 4,
    EBTDecoratorLogic_MAX                          = 5

};


// Enum  AIModule.EBTChildIndex
enum class EBTChildIndex : uint8_t
{
    FirstNode                                      = 0,
    TaskNode                                       = 1,
    EBTChildIndex_MAX                              = 2

};


// Enum  AIModule.EBTBlackboardRestart
enum class EBTBlackboardRestart : uint8_t
{
    ValueChange                                    = 0,
    ResultChange                                   = 1,
    EBTBlackboardRestart_MAX                       = 2

};


// Enum  AIModule.EBlackBoardEntryComparison
enum class EBlackBoardEntryComparison : uint8_t
{
    Equal                                          = 0,
    NotEqual                                       = 1,
    EBlackBoardEntryComparison_MAX                 = 2

};


// Enum  AIModule.EPathExistanceQueryType
enum class EPathExistanceQueryType : uint8_t
{
    NavmeshRaycast2D                               = 0,
    HierarchicalQuery                              = 1,
    RegularPathFinding                             = 2,
    EPathExistanceQueryType_MAX                    = 3

};


// Enum  AIModule.EPointOnCircleSpacingMethod
enum class EPointOnCircleSpacingMethod : uint8_t
{
    BySpaceBetween                                 = 0,
    ByNumberOfPoints                               = 1,
    EPointOnCircleSpacingMethod_MAX                = 2

};


// Enum  AIModule.EEQSNormalizationType
enum class EEQSNormalizationType : uint8_t
{
    Absolute                                       = 0,
    RelativeToScores                               = 1,
    EEQSNormalizationType_MAX                      = 2

};


// Enum  AIModule.EEnvTestDistance
enum class EEnvTestDistance : uint8_t
{
    Distance3D                                     = 0,
    Distance2D                                     = 1,
    DistanceZ                                      = 2,
    DistanceAbsoluteZ                              = 3,
    EEnvTestDistance_MAX                           = 4

};


// Enum  AIModule.EEnvTestDot
enum class EEnvTestDot : uint8_t
{
    Dot3D                                          = 0,
    Dot2D                                          = 1,
    EEnvTestDot_MAX                                = 2

};


// Enum  AIModule.EEnvTestPathfinding
enum class EEnvTestPathfinding : uint8_t
{
    PathExist                                      = 0,
    PathCost                                       = 1,
    PathLength                                     = 2,
    EEnvTestPathfinding_MAX                        = 3

};


// Enum  AIModule.EEnvQueryTestClamping
enum class EEnvQueryTestClamping : uint8_t
{
    None                                           = 0,
    SpecifiedValue                                 = 1,
    FilterThreshold                                = 2,
    EEnvQueryTestClamping_MAX                      = 3

};


// Enum  AIModule.EEnvDirection
enum class EEnvDirection : uint8_t
{
    TwoPoints                                      = 0,
    Rotation                                       = 1,
    EEnvDirection_MAX                              = 2

};


// Enum  AIModule.EEnvOverlapShape
enum class EEnvOverlapShape : uint8_t
{
    Box                                            = 0,
    Sphere                                         = 1,
    Capsule                                        = 2,
    EEnvOverlapShape_MAX                           = 3

};


// Enum  AIModule.EEnvTraceShape
enum class EEnvTraceShape : uint8_t
{
    Line                                           = 0,
    Box                                            = 1,
    Sphere                                         = 2,
    Capsule                                        = 3,
    EEnvTraceShape_MAX                             = 4

};


// Enum  AIModule.EEnvQueryTrace
enum class EEnvQueryTrace : uint8_t
{
    None                                           = 0,
    Navigation                                     = 1,
    Geometry                                       = 2,
    NavigationOverLedges                           = 3,
    EEnvQueryTrace_MAX                             = 4

};


// Enum  AIModule.EAIParamType
enum class EAIParamType : uint8_t
{
    Float                                          = 0,
    Int                                            = 1,
    Bool                                           = 2,
    MAX                                            = 3

};


// Enum  AIModule.EEnvQueryParam
enum class EEnvQueryParam : uint8_t
{
    Float                                          = 0,
    Int                                            = 1,
    Bool                                           = 2,
    EEnvQueryParam_MAX                             = 3

};


// Enum  AIModule.EEnvQueryRunMode
enum class EEnvQueryRunMode : uint8_t
{
    SingleResult                                   = 0,
    RandomBest5Pct                                 = 1,
    RandomBest25Pct                                = 2,
    AllMatching                                    = 3,
    EEnvQueryRunMode_MAX                           = 4

};


// Enum  AIModule.EEnvTestScoreOperator
enum class EEnvTestScoreOperator : uint8_t
{
    AverageScore                                   = 0,
    MinScore                                       = 1,
    MaxScore                                       = 2,
    Multiply                                       = 3,
    EEnvTestScoreOperator_MAX                      = 4

};


// Enum  AIModule.EEnvTestFilterOperator
enum class EEnvTestFilterOperator : uint8_t
{
    AllPass                                        = 0,
    AnyPass                                        = 1,
    EEnvTestFilterOperator_MAX                     = 2

};


// Enum  AIModule.EEnvTestCost
enum class EEnvTestCost : uint8_t
{
    Low                                            = 0,
    Medium                                         = 1,
    High                                           = 2,
    EEnvTestCost_MAX                               = 3

};


// Enum  AIModule.EEnvTestWeight
enum class EEnvTestWeight : uint8_t
{
    None                                           = 0,
    Square                                         = 1,
    Inverse                                        = 2,
    Unused                                         = 3,
    Constant                                       = 4,
    Skip                                           = 5,
    EEnvTestWeight_MAX                             = 6

};


// Enum  AIModule.EEnvTestScoreEquation
enum class EEnvTestScoreEquation : uint8_t
{
    Linear                                         = 0,
    Square                                         = 1,
    InverseLinear                                  = 2,
    SquareRoot                                     = 3,
    Constant                                       = 4,
    EEnvTestScoreEquation_MAX                      = 5

};


// Enum  AIModule.EEnvTestFilterType
enum class EEnvTestFilterType : uint8_t
{
    Minimum                                        = 0,
    Maximum                                        = 1,
    Range                                          = 2,
    Match                                          = 3,
    EEnvTestFilterType_MAX                         = 4

};


// Enum  AIModule.EEnvTestPurpose
enum class EEnvTestPurpose : uint8_t
{
    Filter                                         = 0,
    Score                                          = 1,
    FilterAndScore                                 = 2,
    EEnvTestPurpose_MAX                            = 3

};


// Enum  AIModule.EEnvQueryHightlightMode
enum class EEnvQueryHightlightMode : uint8_t
{
    All                                            = 0,
    Best5Pct                                       = 1,
    Best25Pct                                      = 2,
    EEnvQueryHightlightMode_MAX                    = 3

};


// Enum  AIModule.ETeamAttitude
enum class ETeamAttitude : uint8_t
{
    Friendly                                       = 0,
    Neutral                                        = 1,
    Hostile                                        = 2,
    ETeamAttitude_MAX                              = 3

};


// Enum  AIModule.EPathFollowingRequestResult
enum class EPathFollowingRequestResult : uint8_t
{
    Failed                                         = 0,
    AlreadyAtGoal                                  = 1,
    RequestSuccessful                              = 2,
    EPathFollowingRequestResult_MAX                = 3

};


// Enum  AIModule.EPathFollowingAction
enum class EPathFollowingAction : uint8_t
{
    Error                                          = 0,
    NoMove                                         = 1,
    DirectMove                                     = 2,
    PartialPath                                    = 3,
    PathToGoal                                     = 4,
    EPathFollowingAction_MAX                       = 5

};


// Enum  AIModule.EPathFollowingStatus
enum class EPathFollowingStatus : uint8_t
{
    Idle                                           = 0,
    Waiting                                        = 1,
    Paused                                         = 2,
    Moving                                         = 3,
    EPathFollowingStatus_MAX                       = 4

};


// Enum  AIModule.EPawnActionFailHandling
enum class EPawnActionFailHandling : uint8_t
{
    RequireSuccess                                 = 0,
    IgnoreFailure                                  = 1,
    EPawnActionFailHandling_MAX                    = 2

};


// Enum  AIModule.EPawnSubActionTriggeringPolicy
enum class EPawnSubActionTriggeringPolicy : uint8_t
{
    CopyBeforeTriggering                           = 0,
    ReuseInstances                                 = 1,
    EPawnSubActionTriggeringPolicy_MAX             = 2

};


// Enum  AIModule.EPawnActionMoveMode
enum class EPawnActionMoveMode : uint8_t
{
    UsePathfinding                                 = 0,
    StraightLine                                   = 1,
    EPawnActionMoveMode_MAX                        = 2

};


// Enum  PhysXVehicles.EWheelSweepType
enum class EWheelSweepType : uint8_t
{
    SimpleAndComplex                               = 0,
    Simple                                         = 1,
    Complex                                        = 2,
    EWheelSweepType_MAX                            = 3

};


// Enum  PhysXVehicles.EVehicleDifferential4W
enum class EVehicleDifferential4W : uint8_t
{
    LimitedSlip_4W                                 = 0,
    LimitedSlip_FrontDrive                         = 1,
    LimitedSlip_RearDrive                          = 2,
    Open_4W                                        = 3,
    Open_FrontDrive                                = 4,
    Open_RearDrive                                 = 5,
    EVehicleDifferential4W_MAX                     = 6

};


// UserDefinedEnum  Engine.Default__UserDefinedEnum
enum class Default__UserDefinedEnum : uint8_t
{

};


// UserDefinedEnum  E_Interact_Type.E_Interact_Type
enum class E_Interact_Type : uint8_t
{
    NewEnumerator0                                 = 0,
    NewEnumerator1                                 = 1,
    NewEnumerator6                                 = 2,
    NewEnumerator2                                 = 3,
    NewEnumerator4                                 = 4,
    NewEnumerator3                                 = 5,
    NewEnumerator7                                 = 6,
    NewEnumerator8                                 = 7,
    NewEnumerator9                                 = 8,
    NewEnumerator10                                = 9,
    NewEnumerator11                                = 10,
    NewEnumerator12                                = 11,
    NewEnumerator13                                = 12,
    NewEnumerator17                                = 13,
    NewEnumerator16                                = 14,
    NewEnumerator18                                = 15,
    NewEnumerator19                                = 16,
    NewEnumerator20                                = 17,
    NewEnumerator21                                = 18,
    NewEnumerator22                                = 19,
    NewEnumerator23                                = 20,
    NewEnumerator24                                = 21,
    NewEnumerator25                                = 22,
    E_Interact_MAX                                 = 23

};


// UserDefinedEnum  E_Update_LoginNotice.E_Update_LoginNotice
enum class E_Update_LoginNotice : uint8_t
{
    NewEnumerator0                                 = 0,
    NewEnumerator1                                 = 1,
    E_Update_MAX                                   = 2

};


// UserDefinedEnum  E_UI_Bullet_Type.E_UI_Bullet_Type
enum class E_UI_Bullet_Type : uint8_t
{
    NewEnumerator0                                 = 0,
    NewEnumerator1                                 = 1,
    E_UI_Bullet_MAX                                = 2

};


// UserDefinedEnum  E_BattleLog_BattleRoyale.E_BattleLog_BattleRoyale
enum class E_BattleLog_BattleRoyale : uint8_t
{
    NewEnumerator0                                 = 0,
    NewEnumerator1                                 = 1,
    NewEnumerator2                                 = 2,
    NewEnumerator3                                 = 3,
    NewEnumerator5                                 = 4,
    NewEnumerator6                                 = 5,
    NewEnumerator7                                 = 6,
    NewEnumerator8                                 = 7,
    NewEnumerator9                                 = 8,
    E_BattleLog_MAX                                = 9

};


// UserDefinedEnum  ERoomModeType.ERoomModeType
enum class ERoomModeType : uint8_t
{
    NewEnumerator0                                 = 0,
    NewEnumerator1                                 = 1,
    NewEnumerator2                                 = 2,
    ERoomModeType_MAX                              = 3

};


// UserDefinedEnum  EModeRoomUIType.EModeRoomUIType
enum class EModeRoomUIType : uint8_t
{
    NewEnumerator0                                 = 0,
    NewEnumerator1                                 = 1,
    NewEnumerator2                                 = 2,
    EModeRoomUIType_MAX                            = 3

};


// UserDefinedEnum  E_Type_Team_Member.E_Type_Team_Member
enum class E_Type_Team_Member : uint8_t
{
    NewEnumerator0                                 = 0,
    NewEnumerator4                                 = 1,
    NewEnumerator1                                 = 2,
    NewEnumerator2                                 = 3,
    E_Type_Team_MAX                                = 4

};


// UserDefinedEnum  E_CountDownStyle.E_CountDownStyle
enum class E_CountDownStyle : uint8_t
{
    NewEnumerator0                                 = 0,
    NewEnumerator1                                 = 1,
    E_MAX                                          = 2

};


// UserDefinedEnum  E_CharacterSkillType.E_CharacterSkillType
enum class E_CharacterSkillType : uint8_t
{
    NewEnumerator0                                 = 0,
    NewEnumerator1                                 = 1,
    E_MAX                                          = 2

};


// Enum  E_CharacterAnimState.E_CharacterAnimState
enum class E_CharacterAnimState : uint8_t
{
    Default                                        = 0,
    SkillStart                                     = 1,
    SkillQuit                                      = 2,
    SkillFire                                      = 3,
    E MAX                                          = 4

};


// UserDefinedEnum  E_PlayerBattleState_BattleRoyale.E_PlayerBattleState_BattleRoyale
enum class E_PlayerBattleState_BattleRoyale : uint8_t
{
    NewEnumerator0                                 = 0,
    NewEnumerator1                                 = 1,
    NewEnumerator3                                 = 2,
    E_PlayerBattleState_MAX                        = 3

};


// UserDefinedEnum  E_NoticeLevel.E_NoticeLevel
enum class E_NoticeLevel : uint8_t
{
    NewEnumerator0                                 = 0,
    NewEnumerator1                                 = 1,
    NewEnumerator2                                 = 2,
    E_MAX                                          = 3

};


// UserDefinedEnum  E_NoticeType_Noya.E_NoticeType_Noya
enum class E_NoticeType_Noya : uint8_t
{
    NewEnumerator0                                 = 0,
    NewEnumerator1                                 = 1,
    E_NoticeType_MAX                               = 2

};


// UserDefinedEnum  E_ReviveItemSoundType.E_ReviveItemSoundType
enum class E_ReviveItemSoundType : uint8_t
{
    NewEnumerator0                                 = 0,
    NewEnumerator1                                 = 1,
    NewEnumerator2                                 = 2,
    E_MAX                                          = 3

};


// UserDefinedEnum  E_Type_Mouse.E_Type_Mouse
enum class E_Type_Mouse : uint8_t
{
    NewEnumerator5                                 = 0,
    NewEnumerator21                                = 1,
    NewEnumerator22                                = 2,
    NewEnumerator23                                = 3,
    NewEnumerator24                                = 4,
    NewEnumerator25                                = 5,
    NewEnumerator26                                = 6,
    E_Type_MAX                                     = 7

};


// UserDefinedEnum  E_KeyPromptStyle.E_KeyPromptStyle
enum class E_KeyPromptStyle : uint8_t
{
    NewEnumerator0                                 = 0,
    NewEnumerator1                                 = 1,
    NewEnumerator2                                 = 2,
    NewEnumerator3                                 = 3,
    NewEnumerator4                                 = 4,
    E_MAX                                          = 5

};


// UserDefinedEnum  E_InputOperationType.E_InputOperationType
enum class E_InputOperationType : uint8_t
{
    NewEnumerator0                                 = 0,
    NewEnumerator1                                 = 1,
    E_MAX                                          = 2

};


// UserDefinedEnum  E_DeathType.E_DeathType
enum class E_DeathType : uint8_t
{
    NewEnumerator0                                 = 0,
    NewEnumerator1                                 = 1,
    E_MAX                                          = 2

};


// UserDefinedEnum  E_PlayerListType.E_PlayerListType
enum class E_PlayerListType : uint8_t
{
    NewEnumerator0                                 = 0,
    NewEnumerator1                                 = 1,
    E_MAX                                          = 2

};


// UserDefinedEnum  E_RankingType.E_RankingType
enum class E_RankingType : uint8_t
{
    NewEnumerator0                                 = 0,
    NewEnumerator1                                 = 1,
    NewEnumerator2                                 = 2,
    NewEnumerator3                                 = 3,
    E_MAX                                          = 4

};


// UserDefinedEnum  E_FlagType.E_FlagType
enum class E_FlagType : uint8_t
{
    NewEnumerator0                                 = 0,
    NewEnumerator1                                 = 1,
    E_MAX                                          = 2

};


// UserDefinedEnum  E_State_DefenderManager.E_State_DefenderManager
enum class E_State_DefenderManager : uint8_t
{
    NewEnumerator0                                 = 0,
    NewEnumerator1                                 = 1,
    NewEnumerator2                                 = 2,
    NewEnumerator3                                 = 3,
    E_State_MAX                                    = 4

};


// UserDefinedEnum  E_DefenderPlayerType.E_DefenderPlayerType
enum class E_DefenderPlayerType : uint8_t
{
    NewEnumerator0                                 = 0,
    NewEnumerator1                                 = 1,
    NewEnumerator2                                 = 2,
    E_MAX                                          = 3

};


// UserDefinedEnum  E_BattleState_BattleRoyale.E_BattleState_BattleRoyale
enum class E_BattleState_BattleRoyale : uint8_t
{
    NewEnumerator3                                 = 0,
    NewEnumerator0                                 = 1,
    NewEnumerator5                                 = 2,
    NewEnumerator6                                 = 3,
    NewEnumerator7                                 = 4,
    NewEnumerator1                                 = 5,
    NewEnumerator2                                 = 6,
    NewEnumerator4                                 = 7,
    E_BattleState_MAX                              = 8

};


// UserDefinedEnum  E_BattleEvent_BattleRoyale.E_BattleEvent_BattleRoyale
enum class E_BattleEvent_BattleRoyale : uint8_t
{
    NewEnumerator0                                 = 0,
    NewEnumerator1                                 = 1,
    NewEnumerator2                                 = 2,
    NewEnumerator3                                 = 3,
    NewEnumerator4                                 = 4,
    NewEnumerator5                                 = 5,
    NewEnumerator6                                 = 6,
    NewEnumerator7                                 = 7,
    NewEnumerator8                                 = 8,
    NewEnumerator9                                 = 9,
    E_BattleEvent_MAX                              = 10

};


// UserDefinedEnum  ESkillStateNameEnum.ESkillStateNameEnum
enum class ESkillStateNameEnum : uint8_t
{
    NewEnumerator0                                 = 0,
    NewEnumerator1                                 = 1,
    NewEnumerator2                                 = 2,
    NewEnumerator3                                 = 3,
    NewEnumerator4                                 = 4,
    ESkillStateNameEnum_MAX                        = 5

};


// UserDefinedEnum  E_BattleControlWidgets.E_BattleControlWidgets
enum class E_BattleControlWidgets : uint8_t
{
    NewEnumerator0                                 = 0,
    NewEnumerator1                                 = 1,
    NewEnumerator2                                 = 2,
    NewEnumerator3                                 = 3,
    NewEnumerator4                                 = 4,
    NewEnumerator5                                 = 5,
    NewEnumerator6                                 = 6,
    NewEnumerator7                                 = 7,
    NewEnumerator8                                 = 8,
    NewEnumerator9                                 = 9,
    NewEnumerator10                                = 10,
    NewEnumerator11                                = 11,
    NewEnumerator12                                = 12,
    NewEnumerator13                                = 13,
    NewEnumerator14                                = 14,
    NewEnumerator15                                = 15,
    NewEnumerator16                                = 16,
    NewEnumerator17                                = 17,
    E_MAX                                          = 18

};


// UserDefinedEnum  E_UI_Root.E_UI_Root
enum class E_UI_Root : uint8_t
{
    NewEnumerator5                                 = 0,
    NewEnumerator0                                 = 1,
    NewEnumerator1                                 = 2,
    NewEnumerator3                                 = 3,
    NewEnumerator2                                 = 4,
    NewEnumerator6                                 = 5,
    NewEnumerator4                                 = 6,
    NewEnumerator7                                 = 7,
    E_UI_MAX                                       = 8

};


// UserDefinedEnum  E_PlayerType.E_PlayerType
enum class E_PlayerType : uint8_t
{
    NewEnumerator0                                 = 0,
    NewEnumerator1                                 = 1,
    NewEnumerator2                                 = 2,
    NewEnumerator3                                 = 3,
    E_MAX                                          = 4

};


// UserDefinedEnum  E_BigMapSlot.E_BigMapSlot
enum class E_BigMapSlot : uint8_t
{
    NewEnumerator0                                 = 0,
    E_MAX                                          = 1

};


// UserDefinedEnum  E_BattleControllerSlot.E_BattleControllerSlot
enum class E_BattleControllerSlot : uint8_t
{
    NewEnumerator0                                 = 0,
    NewEnumerator1                                 = 1,
    NewEnumerator2                                 = 2,
    NewEnumerator3                                 = 3,
    NewEnumerator4                                 = 4,
    E_MAX                                          = 5

};


// UserDefinedEnum  E_BackPackSlot.E_BackPackSlot
enum class E_BackPackSlot : uint8_t
{
    NewEnumerator0                                 = 0,
    E_MAX                                          = 1

};


// UserDefinedEnum  E_RedHintPath_New.E_RedHintPath_New
enum class E_RedHintPath_New : uint8_t
{
    NewEnumerator0                                 = 0,
    NewEnumerator1                                 = 1,
    NewEnumerator2                                 = 2,
    NewEnumerator3                                 = 3,
    NewEnumerator4                                 = 4,
    NewEnumerator5                                 = 5,
    NewEnumerator6                                 = 6,
    NewEnumerator7                                 = 7,
    NewEnumerator8                                 = 8,
    NewEnumerator9                                 = 9,
    NewEnumerator10                                = 10,
    NewEnumerator11                                = 11,
    NewEnumerator12                                = 12,
    NewEnumerator13                                = 13,
    NewEnumerator14                                = 14,
    NewEnumerator15                                = 15,
    NewEnumerator16                                = 16,
    NewEnumerator17                                = 17,
    NewEnumerator18                                = 18,
    NewEnumerator19                                = 19,
    NewEnumerator20                                = 20,
    NewEnumerator21                                = 21,
    NewEnumerator22                                = 22,
    NewEnumerator23                                = 23,
    NewEnumerator24                                = 24,
    NewEnumerator25                                = 25,
    NewEnumerator26                                = 26,
    NewEnumerator27                                = 27,
    NewEnumerator28                                = 28,
    NewEnumerator29                                = 29,
    NewEnumerator30                                = 30,
    NewEnumerator31                                = 31,
    NewEnumerator32                                = 32,
    NewEnumerator33                                = 33,
    NewEnumerator34                                = 34,
    NewEnumerator35                                = 35,
    NewEnumerator36                                = 36,
    NewEnumerator37                                = 37,
    NewEnumerator38                                = 38,
    NewEnumerator39                                = 39,
    NewEnumerator40                                = 40,
    NewEnumerator41                                = 41,
    NewEnumerator42                                = 42,
    NewEnumerator43                                = 43,
    NewEnumerator44                                = 44,
    NewEnumerator45                                = 45,
    NewEnumerator46                                = 46,
    NewEnumerator49                                = 47,
    NewEnumerator50                                = 48,
    NewEnumerator51                                = 49,
    NewEnumerator52                                = 50,
    NewEnumerator53                                = 51,
    NewEnumerator47                                = 52,
    NewEnumerator55                                = 53,
    E_RedHintPath_MAX                              = 54

};


// UserDefinedEnum  E_OffScreen_ArrowColorState.E_OffScreen_ArrowColorState
enum class E_OffScreen_ArrowColorState : uint8_t
{
    NewEnumerator0                                 = 0,
    NewEnumerator1                                 = 1,
    NewEnumerator2                                 = 2,
    E_OffScreen_MAX                                = 3

};


