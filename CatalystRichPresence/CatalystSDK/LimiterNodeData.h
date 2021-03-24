//
// Generated with FrostbiteGen by Chod
// File: SDK\LimiterNodeData.h
// Created: Wed Mar 10 19:06:17 2021
//

#ifndef FBGEN_LimiterNodeData_H
#define FBGEN_LimiterNodeData_H

#include "AudioGraphNodePort.h"
#include "LimiterChannelMode.h"
#include "SoundGraphPluginRef.h"
#include "AudioGraphNodeData.h"

class LimiterNodeData :
	public AudioGraphNodeData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C9360;
	}
	AudioGraphNodePort m_In; // 0x10
	AudioGraphNodePort m_Sidechain; // 0x18
	AudioGraphNodePort m_Threshold; // 0x20
	AudioGraphNodePort m_ReleaseTime; // 0x28
	AudioGraphNodePort m_UseSidechain; // 0x30
	AudioGraphNodePort m_Out; // 0x38
	LimiterChannelMode m_ChannelMode; // 0x40
	SoundGraphPluginRef m_Plugin; // 0x44
	unsigned char _0x47[0x1];
}; // size = 0x48

#endif // FBGEN_LimiterNodeData_H
