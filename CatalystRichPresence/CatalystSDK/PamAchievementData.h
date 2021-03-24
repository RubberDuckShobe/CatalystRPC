//
// Generated with FrostbiteGen by Chod
// File: SDK\PamAchievementData.h
// Created: Wed Mar 10 19:05:09 2021
//

#ifndef FBGEN_PamAchievementData_H
#define FBGEN_PamAchievementData_H

#include "DataContainer.h"

class PamAchievementData :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142879260;
	}
	const char* m_AchievementCode; // 0x10
	unsigned int m_AchievementId; // 0x18
	unsigned int m_TrophyId; // 0x1c
	unsigned int m_OriginId; // 0x20
	unsigned char _0x24[0x4];
}; // size = 0x28

#endif // FBGEN_PamAchievementData_H
