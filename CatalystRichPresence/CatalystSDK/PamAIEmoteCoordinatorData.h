//
// Generated with FrostbiteGen by Chod
// File: SDK\PamAIEmoteCoordinatorData.h
// Created: Wed Mar 10 19:05:20 2021
//

#ifndef FBGEN_PamAIEmoteCoordinatorData_H
#define FBGEN_PamAIEmoteCoordinatorData_H

#include "AISpecialization.h"
#include "EntityData.h"

class PamAIEmoteCoordinatorData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286C7F0;
	}
	AISpecialization* m_ValidAIType; // 0x18
	float m_ProximityThreshold; // 0x20
	unsigned char _0x24[0x4];
}; // size = 0x28

#endif // FBGEN_PamAIEmoteCoordinatorData_H
