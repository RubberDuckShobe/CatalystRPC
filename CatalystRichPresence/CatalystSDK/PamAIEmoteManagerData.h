//
// Generated with FrostbiteGen by Chod
// File: SDK\PamAIEmoteManagerData.h
// Created: Wed Mar 10 19:05:20 2021
//

#ifndef FBGEN_PamAIEmoteManagerData_H
#define FBGEN_PamAIEmoteManagerData_H

#include "AIManagerBaseData.h"

class PamAIEmoteManagerData :
	public AIManagerBaseData // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286E6B0;
	}
	float m_EnemyOnTheMoveDistanceThreshold; // 0x20
	float m_IdleTimeThreshold; // 0x24
	float m_CloseFriendMaxDistance; // 0x28
	bool m_EnableIdleEmotes; // 0x2c
	bool m_EnableEmotes; // 0x2d
	unsigned char _0x2e[0x2];
}; // size = 0x30

#endif // FBGEN_PamAIEmoteManagerData_H
