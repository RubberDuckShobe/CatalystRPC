//
// Generated with FrostbiteGen by Chod
// File: SDK\EventDebugNodeData.h
// Created: Wed Mar 10 19:06:53 2021
//

#ifndef FBGEN_EventDebugNodeData_H
#define FBGEN_EventDebugNodeData_H

#include "Array.h"
#include "AudioGraphNodeData.h"

class EventDebugNodeData :
	public AudioGraphNodeData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D35F0;
	}
	Array<DebugEventInput*> m_Events; // 0x10
	bool m_Enabled; // 0x18
	unsigned char _0x19[0x7];
}; // size = 0x20

#endif // FBGEN_EventDebugNodeData_H
