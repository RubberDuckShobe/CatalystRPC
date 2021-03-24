//
// Generated with FrostbiteGen by Chod
// File: SDK\CharacterSprintData.h
// Created: Wed Mar 10 19:08:15 2021
//

#ifndef FBGEN_CharacterSprintData_H
#define FBGEN_CharacterSprintData_H

#include "DataContainer.h"

class CharacterSprintData :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014282C500;
	}
	float m_SprintPowerDecreasePerSecond; // 0x10
	float m_SprintPowerIncreasePerSecond; // 0x14
	float m_SprintMinimumPower; // 0x18
	bool m_AllowContinousSprinting; // 0x1c
	unsigned char _0x1d[0x3];
}; // size = 0x20

#endif // FBGEN_CharacterSprintData_H
