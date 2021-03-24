//
// Generated with FrostbiteGen by Chod
// File: SDK\ConditionValueNodeData.h
// Created: Wed Mar 10 19:07:36 2021
//

#ifndef FBGEN_ConditionValueNodeData_H
#define FBGEN_ConditionValueNodeData_H

#include "Array.h"
#include "AudioGraphNodeData.h"

class ConditionValueNodeData :
	public AudioGraphNodeData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C0630;
	}
	Array<ConditionValueGroup*> m_Conditions; // 0x10
}; // size = 0x18

#endif // FBGEN_ConditionValueNodeData_H
