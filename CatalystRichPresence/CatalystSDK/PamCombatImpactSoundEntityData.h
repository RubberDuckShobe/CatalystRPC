//
// Generated with FrostbiteGen by Chod
// File: SDK\PamCombatImpactSoundEntityData.h
// Created: Wed Mar 10 19:04:45 2021
//

#ifndef FBGEN_PamCombatImpactSoundEntityData_H
#define FBGEN_PamCombatImpactSoundEntityData_H

#include "Array.h"
#include "EntityData.h"

class PamCombatImpactSoundEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286B3B0;
	}
	Array<PamImpactSoundEventData> m_OutputEvents; // 0x18
}; // size = 0x20

#endif // FBGEN_PamCombatImpactSoundEntityData_H
