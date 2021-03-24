//
// Generated with FrostbiteGen by Chod
// File: SDK\ArtilleryStrikeWeaponData.h
// Created: Wed Mar 10 19:08:39 2021
//

#ifndef FBGEN_ArtilleryStrikeWeaponData_H
#define FBGEN_ArtilleryStrikeWeaponData_H

#include "TargetCameraData.h"
#include "ArtilleryDispersionData.h"
#include "WeaponData.h"

class ArtilleryStrikeWeaponData :
	public WeaponData // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014289DDC0;
	}
	float m_MaxStrikeDistance; // 0x20
	float m_StrikeRadius; // 0x24
	float m_SpawnHeight; // 0x28
	float m_MaxRandomSpawnHeight; // 0x2c
	float m_SpawnHeightMultiplier; // 0x30
	unsigned char _0x34[0x4];
	TargetCameraData* m_Camera; // 0x38
	float m_AimingCameraHeight; // 0x40
	float m_StrikeCameraHeight; // 0x44
	float m_AimingCameraOffset; // 0x48
	float m_StrikeCameraOffset; // 0x4c
	float m_AimingCameraFov; // 0x50
	float m_DelayBeforeAimingCamera; // 0x54
	float m_StrikeCameraFov; // 0x58
	float m_FireCameraTime; // 0x5c
	float m_StrikeCameraTime; // 0x60
	float m_ValidMinDistance; // 0x64
	float m_ValidMaxDistance; // 0x68
	float m_ValidMaxAngle; // 0x6c
	ArtilleryDispersionData m_ArtilleryDispersion; // 0x70
	bool m_IncreaseSpawnHeightWithDistance; // 0x8c
	bool m_EnableProjectileTrails; // 0x8d
	bool m_EnableCameraRotation; // 0x8e
	unsigned char _0x8f[0x1];
}; // size = 0x90

#endif // FBGEN_ArtilleryStrikeWeaponData_H
