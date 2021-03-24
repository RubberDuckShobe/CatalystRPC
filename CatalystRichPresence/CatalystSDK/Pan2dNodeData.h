//
// Generated with FrostbiteGen by Chod
// File: SDK\Pan2dNodeData.h
// Created: Wed Mar 10 19:03:19 2021
//

#ifndef FBGEN_Pan2dNodeData_H
#define FBGEN_Pan2dNodeData_H

#include "Pan2dOutputChannelCount.h"
#include "AudioGraphNodePort.h"
#include "SoundGraphPluginRef.h"
#include "AudioGraphNodeData.h"

class Pan2dNodeData :
	public AudioGraphNodeData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C8BE0;
	}
	AudioGraphNodePort m_In; // 0x10
	AudioGraphNodePort m_Out; // 0x18
	Pan2dOutputChannelCount m_OutputChannelCount; // 0x20
	AudioGraphNodePort m_PanAngle; // 0x24
	AudioGraphNodePort m_PanDistance; // 0x2c
	AudioGraphNodePort m_PanSize; // 0x34
	AudioGraphNodePort m_PanTwist; // 0x3c
	AudioGraphNodePort m_CenterAmplitude; // 0x44
	AudioGraphNodePort m_MainAmplitude; // 0x4c
	AudioGraphNodePort m_LfeAmplitude; // 0x54
	SoundGraphPluginRef m_Plugin; // 0x5c
	unsigned char _0x5f[0x1];
}; // size = 0x60

#endif // FBGEN_Pan2dNodeData_H
