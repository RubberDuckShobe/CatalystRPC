//
// Generated with FrostbiteGen by Chod
// File: SDK\LockingWeaponData.h
// Created: Wed Mar 10 19:06:07 2021
//

#ifndef FBGEN_LockingWeaponData_H
#define FBGEN_LockingWeaponData_H

#include "LockingControllerData.h"
#include "WarnTarget.h"
#include "WeaponData.h"

class LockingWeaponData :
	public WeaponData // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014289DD60;
	}
	LockingControllerData* m_LockingController; // 0x20
	LockingControllerData* m_SecondaryLockingController; // 0x28
	WarnTarget m_WarnLock; // 0x30
	bool m_OverrideLockingControllerSettings; // 0x34
	bool m_IsHoming; // 0x35
	bool m_IsGuided; // 0x36
	bool m_IsGuidedWhenZoomed; // 0x37
	bool m_IsGuidedHoming; // 0x38
	bool m_FireOnlyWhenLockedOn; // 0x39
	bool m_GuideOnlyWhenLockedOn; // 0x3a
	unsigned char _0x3b[0x5];
}; // size = 0x40

#endif // FBGEN_LockingWeaponData_H
