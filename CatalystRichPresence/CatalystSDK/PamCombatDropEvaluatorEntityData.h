//
// Generated with FrostbiteGen by Chod
// File: SDK\PamCombatDropEvaluatorEntityData.h
// Created: Wed Mar 10 19:04:45 2021
//

#ifndef FBGEN_PamCombatDropEvaluatorEntityData_H
#define FBGEN_PamCombatDropEvaluatorEntityData_H

#include "Realm.h"
#include "EntityData.h"

class PamCombatDropEvaluatorEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014287D800;
	}
	Realm m_Realm; // 0x18
	float m_GlobalDropChance; // 0x1c
	int m_CurrentDropCount; // 0x20
	int m_MaxDropCount; // 0x24
}; // size = 0x28

#endif // FBGEN_PamCombatDropEvaluatorEntityData_H
