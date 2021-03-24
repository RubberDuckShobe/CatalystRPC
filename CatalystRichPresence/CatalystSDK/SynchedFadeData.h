//
// Generated with FrostbiteGen by Chod
// File: SDK\SynchedFadeData.h
// Created: Wed Mar 10 19:00:35 2021
//

#ifndef FBGEN_SynchedFadeData_H
#define FBGEN_SynchedFadeData_H

#include "MusicSyncType.h"
#include "MusicFadeData.h"

class SynchedFadeData :
	public MusicFadeData // size = 0x28
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C7680;
	}
	MusicSyncType m_SyncType; // 0x28
	unsigned char _0x2c[0x4];
}; // size = 0x30

#endif // FBGEN_SynchedFadeData_H
