//
// Generated with FrostbiteGen by Chod
// File: SDK\EventGateNodeData.h
// Created: Wed Mar 10 19:06:53 2021
//

#ifndef FBGEN_EventGateNodeData_H
#define FBGEN_EventGateNodeData_H

#include "AudioGraphNodePort.h"
#include "AudioGraphNodeData.h"

class EventGateNodeData :
	public AudioGraphNodeData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D3410;
	}
	AudioGraphNodePort m_In; // 0x10
	AudioGraphNodePort m_Out; // 0x18
	AudioGraphNodePort m_CoolDownTime; // 0x20
	AudioGraphNodePort m_Enable; // 0x28
}; // size = 0x30

#endif // FBGEN_EventGateNodeData_H
