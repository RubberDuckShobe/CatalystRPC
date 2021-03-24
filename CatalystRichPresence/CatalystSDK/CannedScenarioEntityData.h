//
// Generated with FrostbiteGen by Chod
// File: SDK\CannedScenarioEntityData.h
// Created: Wed Mar 10 19:08:18 2021
//

#ifndef FBGEN_CannedScenarioEntityData_H
#define FBGEN_CannedScenarioEntityData_H

#include "CannedAnimationBinding.h"
#include "EntityData.h"

class CannedScenarioEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142821C00;
	}
	CannedAnimationBinding m_CannedAnimBinding; // 0x18
	int m_AnimationEntitySpacePriority; // 0xf4
	bool m_AlwaysClearEntitySpaceWhenInScenario; // 0xf8
	unsigned char _0xf9[0x7];
}; // size = 0x100

#endif // FBGEN_CannedScenarioEntityData_H
