//
// Generated with FrostbiteGen by Chod
// File: SDK\GainFaderNodeData.h
// Created: Wed Mar 10 19:06:42 2021
//

#ifndef FBGEN_GainFaderNodeData_H
#define FBGEN_GainFaderNodeData_H

#include "AudioGraphNodePort.h"
#include "GainFaderFadeType.h"
#include "SoundGraphPluginRef.h"
#include "AudioGraphNodeData.h"

class GainFaderNodeData :
	public AudioGraphNodeData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C95A0;
	}
	AudioGraphNodePort m_In; // 0x10
	AudioGraphNodePort m_Start; // 0x18
	AudioGraphNodePort m_StartTime; // 0x20
	AudioGraphNodePort m_FadeTime; // 0x28
	AudioGraphNodePort m_Amplitude; // 0x30
	AudioGraphNodePort m_Out; // 0x38
	GainFaderFadeType m_FadeType; // 0x40
	SoundGraphPluginRef m_Plugin; // 0x44
	unsigned char _0x47[0x1];
}; // size = 0x48

#endif // FBGEN_GainFaderNodeData_H
