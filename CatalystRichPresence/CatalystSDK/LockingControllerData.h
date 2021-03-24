//
// Generated with FrostbiteGen by Chod
// File: SDK\LockingControllerData.h
// Created: Wed Mar 10 19:06:07 2021
//

#ifndef FBGEN_LockingControllerData_H
#define FBGEN_LockingControllerData_H

#include "Array.h"
#include "LockingAndHomingData.h"
#include "DataContainer.h"

class LockingControllerData :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014289E0C0;
	}
	Array<ZoomLevelLockData> m_ZoomLevelLock; // 0x10
	float m_LockTime; // 0x18
	float m_UnLockTime; // 0x1c
	float m_ReleaseTime; // 0x20
	float m_ReleaseOnNewTargetTime; // 0x24
	float m_SampleRate; // 0x28
	float m_HoldStillThreshold; // 0x2c
	float m_CheckVisibilityLength; // 0x30
	float m_RayLength; // 0x34
	float m_AcceptanceAngle; // 0x38
	float m_AngleConstant; // 0x3c
	float m_DistanceConstant; // 0x40
	float m_Sensitivity; // 0x44
	float m_MinimumLockTime; // 0x48
	LockingAndHomingData m_LockingWeaponData; // 0x4c
	bool m_LockOnVisibleTargetsOnly; // 0x58
	bool m_RequireAmmoToLock; // 0x59
	bool m_PositionOnly; // 0x5a
	bool m_LockOnWorldSpacePos; // 0x5b
	bool m_LockOnEmptyVehicles; // 0x5c
	bool m_LockOnCharacters; // 0x5d
	bool m_IgnoreHeigthLockDistance; // 0x5e
	bool m_LockInCombatAreaOnly; // 0x5f
}; // size = 0x60

#endif // FBGEN_LockingControllerData_H
