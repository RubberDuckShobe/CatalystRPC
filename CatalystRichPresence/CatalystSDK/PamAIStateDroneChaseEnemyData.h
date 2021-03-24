//
// Generated with FrostbiteGen by Chod
// File: SDK\PamAIStateDroneChaseEnemyData.h
// Created: Wed Mar 10 19:05:15 2021
//

#ifndef FBGEN_PamAIStateDroneChaseEnemyData_H
#define FBGEN_PamAIStateDroneChaseEnemyData_H

#include "PamAIStateBaseData.h"

class PamAIStateDroneChaseEnemyData :
	public PamAIStateBaseData // size = 0x28
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286D4B0;
	}
	bool m_IsDisrupted; // 0x28
	unsigned char _0x29[0x7];
}; // size = 0x30

#endif // FBGEN_PamAIStateDroneChaseEnemyData_H
