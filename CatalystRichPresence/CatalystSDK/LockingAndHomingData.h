//
// Generated with FrostbiteGen by Chod
// File: SDK\LockingAndHomingData.h
// Created: Wed Mar 10 19:06:07 2021
//

#ifndef FBGEN_LockingAndHomingData_H
#define FBGEN_LockingAndHomingData_H

#include "WarnTarget.h"
struct LockingAndHomingData
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014289D4E0;
	}
	WarnTarget m_WarnLock; // 0x0
	bool m_IsHoming; // 0x4
	bool m_IsGuided; // 0x5
	bool m_IsGuidedWhenZoomed; // 0x6
	bool m_IsGuidedHoming; // 0x7
	bool m_FireOnlyWhenLockedOn; // 0x8
	unsigned char _0x9[0x3];
}; // size = 0xc

#endif // FBGEN_LockingAndHomingData_H
