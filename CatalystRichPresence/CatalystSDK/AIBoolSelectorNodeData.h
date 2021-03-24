//
// Generated with FrostbiteGen by Chod
// File: SDK\AIBoolSelectorNodeData.h
// Created: Wed Mar 10 19:09:00 2021
//

#ifndef FBGEN_AIBoolSelectorNodeData_H
#define FBGEN_AIBoolSelectorNodeData_H

#include "AISpecialization.h"
#include "AIBehaviourNodeBaseData.h"

class AIBoolSelectorNodeData :
	public AIBehaviourNodeBaseData // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427B81D0;
	}
	const char* m_ExtraName; // 0x20
	AISpecialization* m_AIType; // 0x28
	bool m_BoolValue; // 0x30
	unsigned char _0x31[0x7];
}; // size = 0x38

#endif // FBGEN_AIBoolSelectorNodeData_H
