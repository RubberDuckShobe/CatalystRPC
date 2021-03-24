//
// Generated with FrostbiteGen by Chod
// File: SDK\PamKillVolumeEntityData.h
// Created: Wed Mar 10 19:04:26 2021
//

#ifndef FBGEN_PamKillVolumeEntityData_H
#define FBGEN_PamKillVolumeEntityData_H

#include "EntityData.h"

class PamKillVolumeEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142881430;
	}
	int m_DamageType; // 0x18
	bool m_Enabled; // 0x1c
	bool m_KillEnemies; // 0x1d
	bool m_KillPlayer; // 0x1e
	unsigned char _0x1f[0x1];
}; // size = 0x20

#endif // FBGEN_PamKillVolumeEntityData_H
