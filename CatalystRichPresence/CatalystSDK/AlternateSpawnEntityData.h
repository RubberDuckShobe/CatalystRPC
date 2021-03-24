//
// Generated with FrostbiteGen by Chod
// File: SDK\AlternateSpawnEntityData.h
// Created: Wed Mar 10 19:08:46 2021
//

#ifndef FBGEN_AlternateSpawnEntityData_H
#define FBGEN_AlternateSpawnEntityData_H

#include "TeamId.h"
#include "SpatialEntityData.h"

class AlternateSpawnEntityData :
	public SpatialEntityData // size = 0x60
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142820C10;
	}
	TeamId m_Team; // 0x60
	float m_Priority; // 0x64
	bool m_Enabled; // 0x68
	unsigned char _0x69[0x7];
}; // size = 0x70

#endif // FBGEN_AlternateSpawnEntityData_H
