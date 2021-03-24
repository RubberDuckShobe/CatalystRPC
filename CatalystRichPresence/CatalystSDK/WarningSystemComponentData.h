//
// Generated with FrostbiteGen by Chod
// File: SDK\WarningSystemComponentData.h
// Created: Wed Mar 10 18:58:54 2021
//

#ifndef FBGEN_WarningSystemComponentData_H
#define FBGEN_WarningSystemComponentData_H

#include "SoundAsset.h"
#include "WarningPlayerType.h"
#include "GameComponentData.h"

class WarningSystemComponentData :
	public GameComponentData // size = 0x70
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142821D20;
	}
	SoundAsset* m_AimWarnSoundEffect; // 0x70
	SoundAsset* m_MissileWarnSoundEffect; // 0x78
	SoundAsset* m_LowHealthWarnSoundEffect; // 0x80
	SoundAsset* m_LockingWarnSoundEffect; // 0x88
	SoundAsset* m_LockedWarnSoundEffect; // 0x90
	WarningPlayerType m_PlayerType; // 0x98
	unsigned char _0x9c[0x4];
}; // size = 0xa0

#endif // FBGEN_WarningSystemComponentData_H
