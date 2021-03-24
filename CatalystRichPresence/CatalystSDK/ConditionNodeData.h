//
// Generated with FrostbiteGen by Chod
// File: SDK\ConditionNodeData.h
// Created: Wed Mar 10 19:07:36 2021
//

#ifndef FBGEN_ConditionNodeData_H
#define FBGEN_ConditionNodeData_H

#include "Array.h"
#include "AudioGraphNodeData.h"

class ConditionNodeData :
	public AudioGraphNodeData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D37D0;
	}
	Array<ConditionGroup*> m_Conditions; // 0x10
}; // size = 0x18

#endif // FBGEN_ConditionNodeData_H
