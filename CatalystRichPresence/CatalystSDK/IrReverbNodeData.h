//
// Generated with FrostbiteGen by Chod
// File: SDK\IrReverbNodeData.h
// Created: Wed Mar 10 19:06:25 2021
//

#ifndef FBGEN_IrReverbNodeData_H
#define FBGEN_IrReverbNodeData_H

#include "AudioGraphNodePort.h"
#include "SoundGraphPluginRef.h"
#include "AudioGraphNodeData.h"

class IrReverbNodeData :
	public AudioGraphNodeData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C8B20;
	}
	AudioGraphNodePort m_In; // 0x10
	AudioGraphNodePort m_Out; // 0x18
	AudioGraphNodePort m_Reverb0; // 0x20
	AudioGraphNodePort m_Amplitude0; // 0x28
	AudioGraphNodePort m_Reverb1; // 0x30
	AudioGraphNodePort m_Amplitude1; // 0x38
	float m_MaxReverbLength; // 0x40
	SoundGraphPluginRef m_ReverbPlugin; // 0x44
	unsigned char _0x47[0x1];
}; // size = 0x48

#endif // FBGEN_IrReverbNodeData_H
