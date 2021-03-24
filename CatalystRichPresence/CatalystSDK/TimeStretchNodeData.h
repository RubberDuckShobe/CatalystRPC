//
// Generated with FrostbiteGen by Chod
// File: SDK\TimeStretchNodeData.h
// Created: Wed Mar 10 19:00:15 2021
//

#ifndef FBGEN_TimeStretchNodeData_H
#define FBGEN_TimeStretchNodeData_H

#include "TimeStretchMultiChannelMode.h"
#include "TimeStretchEfficiency.h"
#include "AudioGraphNodePort.h"
#include "SoundGraphPluginRef.h"
#include "AudioGraphNodeData.h"

class TimeStretchNodeData :
	public AudioGraphNodeData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C8940;
	}
	AudioGraphNodePort m_In; // 0x10
	AudioGraphNodePort m_Out; // 0x18
	float m_WindowSize; // 0x20
	TimeStretchMultiChannelMode m_MultiChannelMode; // 0x24
	TimeStretchEfficiency m_Efficiency; // 0x28
	AudioGraphNodePort m_StretchRatio; // 0x2c
	SoundGraphPluginRef m_Plugin; // 0x34
	unsigned char _0x37[0x1];
}; // size = 0x38

#endif // FBGEN_TimeStretchNodeData_H
