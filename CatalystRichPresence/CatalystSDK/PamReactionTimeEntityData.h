//
// Generated with FrostbiteGen by Chod
// File: SDK\PamReactionTimeEntityData.h
// Created: Wed Mar 10 19:04:07 2021
//

#ifndef FBGEN_PamReactionTimeEntityData_H
#define FBGEN_PamReactionTimeEntityData_H

#include "Realm.h"
#include "EntityData.h"

class PamReactionTimeEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014287DFE0;
	}
	Realm m_Realm; // 0x18
	float m_GiveReactionTimeAmount; // 0x1c
	float m_ReactionTimeDuration; // 0x20
	unsigned char _0x24[0x4];
}; // size = 0x28

#endif // FBGEN_PamReactionTimeEntityData_H
