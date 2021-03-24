//
// Generated with FrostbiteGen by Chod
// File: SDK\SyncedGameSettings.h
// Created: Wed Mar 10 19:00:37 2021
//

#ifndef FBGEN_SyncedGameSettings_H
#define FBGEN_SyncedGameSettings_H

#include "SystemSettings.h"

class SyncedGameSettings :
	public SystemSettings // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142810980;
	}
	unsigned int m_DifficultyIndex; // 0x20
	float m_ManDownTimeModifier; // 0x24
	float m_BulletDamageModifier; // 0x28
	float m_MaxAllowedLatency; // 0x2c
	bool m_DisableToggleEntryCamera; // 0x30
	bool m_DisableRegenerateHealth; // 0x31
	bool m_EnableFriendlyFire; // 0x32
	bool m_AllowClientSideDamageArbitration; // 0x33
	bool m_ForceReloadWholeMags; // 0x34
	unsigned char _0x35[0x3];
}; // size = 0x38

#endif // FBGEN_SyncedGameSettings_H
