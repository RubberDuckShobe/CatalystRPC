//
// Generated with FrostbiteGen by Chod
// File: SDK\SwitcherNodeData.h
// Created: Wed Mar 10 19:00:37 2021
//

#ifndef FBGEN_SwitcherNodeData_H
#define FBGEN_SwitcherNodeData_H

#include "Array.h"
#include "AudioGraphNodePort.h"
#include "AudioGraphNodeData.h"

class SwitcherNodeData :
	public AudioGraphNodeData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D2390;
	}
	Array<SwitcherEntry*> m_Outputs; // 0x10
	AudioGraphNodePort m_Trigger; // 0x18
	AudioGraphNodePort m_Value; // 0x20
	float m_DefaultCaseValue; // 0x28
	unsigned char _0x2c[0x4];
}; // size = 0x30

#endif // FBGEN_SwitcherNodeData_H
