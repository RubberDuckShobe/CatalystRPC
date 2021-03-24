//
// Generated with FrostbiteGen by Chod
// File: SDK\ObstacleDat.h
// Created: Wed Mar 10 19:05:30 2021
//

#ifndef FBGEN_ObstacleDat_H
#define FBGEN_ObstacleDat_H

#include "CustomObstacleData.h"
#include "DataContainer.h"

class ObstacleDat :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142829010;
	}
	unsigned int m_LayerMask; // 0x10
	float m_PenaltyMult; // 0x14
	unsigned int m_ObstacleBlockageFlags; // 0x18
	unsigned char _0x1c[0x4];
	CustomObstacleData* m_UserData; // 0x20
	const char* m_ObstacleName; // 0x28
}; // size = 0x30

#endif // FBGEN_ObstacleDat_H
