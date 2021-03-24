//
// Generated with FrostbiteGen by Chod
// File: SDK\TimerNodeData.h
// Created: Wed Mar 10 19:00:13 2021
//

#ifndef FBGEN_TimerNodeData_H
#define FBGEN_TimerNodeData_H

#include "AudioGraphNodePort.h"
#include "TimerMode.h"
#include "AudioGraphNodeData.h"

class TimerNodeData :
	public AudioGraphNodeData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D2330;
	}
	AudioGraphNodePort m_Start; // 0x10
	AudioGraphNodePort m_Stop; // 0x18
	AudioGraphNodePort m_Period; // 0x20
	AudioGraphNodePort m_Tick; // 0x28
	AudioGraphNodePort m_Progress; // 0x30
	TimerMode m_Mode; // 0x38
	unsigned char _0x3c[0x4];
}; // size = 0x40

#endif // FBGEN_TimerNodeData_H
