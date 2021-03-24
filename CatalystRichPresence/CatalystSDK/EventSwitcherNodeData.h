//
// Generated with FrostbiteGen by Chod
// File: SDK\EventSwitcherNodeData.h
// Created: Wed Mar 10 19:06:52 2021
//

#ifndef FBGEN_EventSwitcherNodeData_H
#define FBGEN_EventSwitcherNodeData_H

#include "Array.h"
#include "AudioGraphNodePort.h"
#include "AudioGraphNodeData.h"

class EventSwitcherNodeData :
	public AudioGraphNodeData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D3350;
	}
	Array<EventSwitcherEntry*> m_Inputs; // 0x10
	AudioGraphNodePort m_Value; // 0x18
	float m_DefaultValue; // 0x20
	unsigned char _0x24[0x4];
}; // size = 0x28

#endif // FBGEN_EventSwitcherNodeData_H
