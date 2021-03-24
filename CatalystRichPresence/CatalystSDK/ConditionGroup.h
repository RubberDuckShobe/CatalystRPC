//
// Generated with FrostbiteGen by Chod
// File: SDK\ConditionGroup.h
// Created: Wed Mar 10 19:07:36 2021
//

#ifndef FBGEN_ConditionGroup_H
#define FBGEN_ConditionGroup_H

#include "AudioGraphNodePort.h"
#include "ConditionType.h"
#include "AudioGraphNodePortGroup.h"

class ConditionGroup :
	public AudioGraphNodePortGroup // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D3830;
	}
	AudioGraphNodePort m_X; // 0x10
	AudioGraphNodePort m_Y; // 0x18
	AudioGraphNodePort m_True; // 0x20
	ConditionType m_Condition; // 0x28
	unsigned char _0x2c[0x4];
}; // size = 0x30

#endif // FBGEN_ConditionGroup_H
