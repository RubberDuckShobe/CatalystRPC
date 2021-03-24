//
// Generated with FrostbiteGen by Chod
// File: SDK\PamSurgeLogicData.h
// Created: Wed Mar 10 19:03:44 2021
//

#ifndef FBGEN_PamSurgeLogicData_H
#define FBGEN_PamSurgeLogicData_H

#include "EntityData.h"

class PamSurgeLogicData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142881250;
	}
	float m_TakedownSurgeAmount; // 0x18
	float m_BuildupDecayDelay; // 0x1c
	float m_BuildupDecayMaxTime; // 0x20
	float m_SurgeDuration; // 0x24
	float m_SurgeIncrement; // 0x28
	unsigned char _0x2c[0x4];
}; // size = 0x30

#endif // FBGEN_PamSurgeLogicData_H
