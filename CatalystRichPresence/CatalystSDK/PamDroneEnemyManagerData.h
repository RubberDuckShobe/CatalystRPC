//
// Generated with FrostbiteGen by Chod
// File: SDK\PamDroneEnemyManagerData.h
// Created: Wed Mar 10 19:04:42 2021
//

#ifndef FBGEN_PamDroneEnemyManagerData_H
#define FBGEN_PamDroneEnemyManagerData_H

#include "PamEnemyManagerData.h"

class PamDroneEnemyManagerData :
	public PamEnemyManagerData // size = 0x28
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286E710;
	}
	float m_AcquireSensedEnemyDelay; // 0x28
	float m_AcquireSensedEnemyDelayWhenInFov; // 0x2c
	float m_FieldOfViewForShortDelay; // 0x30
	bool m_ForceSenseLocalPlayer; // 0x34
	unsigned char _0x35[0x3];
}; // size = 0x38

#endif // FBGEN_PamDroneEnemyManagerData_H
