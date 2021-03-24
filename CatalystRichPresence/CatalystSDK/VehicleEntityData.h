//
// Generated with FrostbiteGen by Chod
// File: SDK\VehicleEntityData.h
// Created: Wed Mar 10 18:59:21 2021
//

#ifndef FBGEN_VehicleEntityData_H
#define FBGEN_VehicleEntityData_H

#include "VehicleHudData.h"
#include "Vec3.h"
#include "Array.h"
#include "VehicleHealthZoneData.h"
#include "EffectBlueprint.h"
#include "ExplosionEntityData.h"
#include "CompositeMeshAsset.h"
#include "ObjectBlueprint.h"
#include "MPModeData.h"
#include "AngleOfImpactData.h"
#include "VehicleLockableInfoData.h"
#include "VehicleSoundData.h"
#include "EntityVoiceOverInfo.h"
#include "ControllableEntityData.h"

class VehicleEntityData :
	public ControllableEntityData // size = 0xb0
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014281DD90;
	}
	Vec3 m_CriticallyDamagedEffectPosition; // 0xb0
	Vec3 m_PreExplosionEffectPosition; // 0xc0
	VehicleHudData m_HudData; // 0xd0
	Vec3 m_FLIRKeyColor; // 0x110
	Vec3 m_InteractionOffset; // 0x120
	Array<PartLinkData*> m_PartLinks; // 0x130
	const char* m_ControllableType; // 0x138
	float m_DisabledDamageThreshold; // 0x140
	float m_ClearDisabledDamageThreshold; // 0x144
	float m_PreDestructionDamageThreshold; // 0x148
	unsigned char _0x14c[0x4];
	VehicleHealthZoneData m_FrontHealthZone; // 0x150
	VehicleHealthZoneData m_RearHealthZone; // 0x170
	VehicleHealthZoneData m_LeftHealthZone; // 0x190
	VehicleHealthZoneData m_RightHealthZone; // 0x1b0
	VehicleHealthZoneData m_TopHealthZone; // 0x1d0
	float m_TopHitHeight; // 0x1f0
	float m_TopHitAngle; // 0x1f4
	float m_RegenerationDelay; // 0x1f8
	float m_RegenerationRate; // 0x1fc
	float m_ArmorMultiplier; // 0x200
	float m_RegenerationDelayMultiplier; // 0x204
	float m_RegenerationRateMultiplier; // 0x208
	float m_EmergencyRepairHealth; // 0x20c
	float m_DecayDelay; // 0x210
	float m_DecayRate; // 0x214
	EffectBlueprint* m_CriticallyDamagedEffect; // 0x218
	float m_CriticalDamageTime; // 0x220
	unsigned char _0x224[0x4];
	EffectBlueprint* m_PreExplosionEffect; // 0x228
	float m_PreExplosionTime; // 0x230
	unsigned char _0x234[0x4];
	ExplosionEntityData* m_Explosion; // 0x238
	CompositeMeshAsset* m_Mesh; // 0x240
	ObjectBlueprint* m_CockpitMesh; // 0x248
	const char* m_NameSid; // 0x250
	int m_MaxPlayersInVehicle; // 0x258
	float m_MinSpeedForMineActivation; // 0x25c
	int m_DamageTypeIdentifier; // 0x260
	float m_UpsideDownDamage; // 0x264
	float m_UpsideDownDamageDelay; // 0x268
	float m_UpsideDownAngle; // 0x26c
	float m_WaterDamage; // 0x270
	float m_BelowWaterDamageDelay; // 0x274
	float m_WaterDamageOffset; // 0x278
	float m_VelocityDamageThreshold; // 0x27c
	float m_VelocityDamageMagnifier; // 0x280
	float m_RepairRateModifier; // 0x284
	float m_KillSoldierCollisionSpeedThreshold; // 0x288
	float m_ExitSpeedThreshold; // 0x28c
	float m_ExitDirectionSpeedThreshold; // 0x290
	float m_FLIRValue; // 0x294
	MPModeData m_MPMode; // 0x298
	float m_ExitCameraSwitchDelay; // 0x29c
	AngleOfImpactData m_AngleOfImpact; // 0x2a0
	float m_LockingTimeMultiplier; // 0x2b8
	VehicleLockableInfoData m_VehicleLockableInfo; // 0x2bc
	float m_HighAltitudeLockHeight; // 0x2cc
	VehicleSoundData* m_Sound; // 0x2d0
	EntityVoiceOverInfo* m_VoiceOverInfo; // 0x2d8
	float m_NametagHeightScale; // 0x2e0
	float m_SpottingFovScale; // 0x2e4
	bool m_AllowVehicleOutsideCombatAreas; // 0x2e8
	bool m_UseTopZone; // 0x2e9
	bool m_HealthZonesShareDamage; // 0x2ea
	bool m_UseProtectedShields; // 0x2eb
	bool m_ShowPlayerHealth; // 0x2ec
	bool m_DestroyAllComponentsOnDestroyed; // 0x2ed
	bool m_ForegroundRenderCockpitMesh; // 0x2ee
	bool m_MotionBlurMask; // 0x2ef
	bool m_SuppressDamageByPassengers; // 0x2f0
	bool m_TriggerVehicleDetonation; // 0x2f1
	bool m_IsAffectedByEMP; // 0x2f2
	bool m_CanTakeDynamicFireDamage; // 0x2f3
	bool m_HasExclusiveEntries; // 0x2f4
	bool m_ProhibitEntrySwitching; // 0x2f5
	bool m_ThrowOutSoldierInsideOnWaterDamage; // 0x2f6
	bool m_IgnoreSoldierCollisionNormal; // 0x2f7
	bool m_ChoseExitPointByDirection; // 0x2f8
	bool m_ExitAllowed; // 0x2f9
	bool m_EnableGroundmapLighting; // 0x2fa
	bool m_UseAsTeamSpawner; // 0x2fb
	bool m_IsLockable; // 0x2fc
	bool m_NeverReportVehicleAsEmpty; // 0x2fd
	bool m_UseLowAltitudeHeatSignature; // 0x2fe
	bool m_UseSpottingTargetComponentForRaycast; // 0x2ff
	bool m_EquipmentFakeVehicle; // 0x300
	bool m_ExplosionPacksAttachable; // 0x301
	bool m_DamageGiverOverrideOwnerVehicle; // 0x302
	unsigned char _0x303[0xd];
}; // size = 0x310

#endif // FBGEN_VehicleEntityData_H
