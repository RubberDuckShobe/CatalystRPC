//
// Generated with FrostbiteGen by Chod
// File: SDK\PamAIStateDefendAreaData.h
// Created: Wed Mar 10 19:05:16 2021
//

#ifndef FBGEN_PamAIStateDefendAreaData_H
#define FBGEN_PamAIStateDefendAreaData_H

#include "AISpecialization.h"
#include "PamAIStateBaseData.h"

class PamAIStateDefendAreaData :
	public PamAIStateBaseData // size = 0x28
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286D570;
	}
	AISpecialization* m_CommanderType; // 0x28
	float m_BackupDist; // 0x30
	unsigned char _0x34[0x4];
}; // size = 0x38

#endif // FBGEN_PamAIStateDefendAreaData_H
