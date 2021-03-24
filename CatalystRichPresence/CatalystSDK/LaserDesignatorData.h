//
// Generated with FrostbiteGen by Chod
// File: SDK\LaserDesignatorData.h
// Created: Wed Mar 10 19:06:21 2021
//

#ifndef FBGEN_LaserDesignatorData_H
#define FBGEN_LaserDesignatorData_H

#include "SoundAsset.h"
#include "LockingWeaponData.h"

class LaserDesignatorData :
	public LockingWeaponData // size = 0x40
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014289DD00;
	}
	float m_PostLockTime; // 0x40
	float m_BomberTime; // 0x44
	float m_BombWarnTime; // 0x48
	unsigned char _0x4c[0x4];
	SoundAsset* m_BomberSound; // 0x50
}; // size = 0x58

#endif // FBGEN_LaserDesignatorData_H
