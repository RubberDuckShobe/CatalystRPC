//
// Generated with FrostbiteGen by Chod
// File: SDK\AIStateData.h
// Created: Wed Mar 10 19:08:54 2021
//

#ifndef FBGEN_AIStateData_H
#define FBGEN_AIStateData_H

#include "Array.h"
#include "AIBehaviourNodeBaseData.h"

class AIStateData :
	public AIBehaviourNodeBaseData // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427B8170;
	}
	Array<AISettingsBase*> m_Settings; // 0x20
}; // size = 0x28

#endif // FBGEN_AIStateData_H
