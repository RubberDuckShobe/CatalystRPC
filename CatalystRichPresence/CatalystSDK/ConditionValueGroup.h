//
// Generated with FrostbiteGen by Chod
// File: SDK\ConditionValueGroup.h
// Created: Wed Mar 10 19:07:36 2021
//

#ifndef FBGEN_ConditionValueGroup_H
#define FBGEN_ConditionValueGroup_H

#include "AudioGraphNodePort.h"
#include "ConditionValueType.h"
#include "AudioGraphNodePortGroup.h"

class ConditionValueGroup :
	public AudioGraphNodePortGroup // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C0690;
	}
	AudioGraphNodePort m_X; // 0x10
	AudioGraphNodePort m_Y; // 0x18
	AudioGraphNodePort m_Out; // 0x20
	ConditionValueType m_Condition; // 0x28
	float m_ValueIfTrue; // 0x2c
	float m_ValueIfFalse; // 0x30
	unsigned char _0x34[0x4];
}; // size = 0x38

#endif // FBGEN_ConditionValueGroup_H
