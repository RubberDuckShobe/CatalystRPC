//
// Generated with FrostbiteGen by Chod
// File: SDK\AILogicSelectorNodeData.h
// Created: Wed Mar 10 19:08:59 2021
//

#ifndef FBGEN_AILogicSelectorNodeData_H
#define FBGEN_AILogicSelectorNodeData_H

#include "NodeGameLogic.h"
#include "AISpecialization.h"
#include "AIBehaviourNodeBaseData.h"

class AILogicSelectorNodeData :
	public AIBehaviourNodeBaseData // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427B8230;
	}
	NodeGameLogic m_Logic; // 0x20
	float m_X; // 0x24
	AISpecialization* m_AIType; // 0x28
}; // size = 0x30

#endif // FBGEN_AILogicSelectorNodeData_H
