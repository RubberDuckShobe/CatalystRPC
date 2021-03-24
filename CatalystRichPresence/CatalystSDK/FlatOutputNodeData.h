//
// Generated with FrostbiteGen by Chod
// File: SDK\FlatOutputNodeData.h
// Created: Wed Mar 10 19:06:46 2021
//

#ifndef FBGEN_FlatOutputNodeData_H
#define FBGEN_FlatOutputNodeData_H

#include "AudioCurve.h"
#include "OutputReverbMode.h"
#include "SoundBusData.h"
#include "AudioGraphNodePort.h"
#include "SoundGraphPluginRef.h"
#include "OutputNodeData.h"

class FlatOutputNodeData :
	public OutputNodeData // size = 0x80
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C7080;
	}
	float m_WorldAngle; // 0x80
	float m_Angle; // 0x84
	AudioCurve m_ReverbAttenuationCurve; // 0x88
	float m_ReverbGain; // 0x98
	OutputReverbMode m_ReverbMode; // 0x9c
	SoundBusData* m_ReverbSend; // 0xa0
	AudioGraphNodePort m_CenterLevel; // 0xa8
	AudioGraphNodePort m_LfeLevel; // 0xb0
	bool m_IsWorldAligned; // 0xb8
	SoundGraphPluginRef m_PanPlugin; // 0xb9
	SoundGraphPluginRef m_ReverbSendPlugin; // 0xbc
	unsigned char _0xbf[0x1];
}; // size = 0xc0

#endif // FBGEN_FlatOutputNodeData_H
