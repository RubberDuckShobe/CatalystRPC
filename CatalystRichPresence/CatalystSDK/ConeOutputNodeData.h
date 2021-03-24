//
// Generated with FrostbiteGen by Chod
// File: SDK\ConeOutputNodeData.h
// Created: Wed Mar 10 19:07:34 2021
//

#ifndef FBGEN_ConeOutputNodeData_H
#define FBGEN_ConeOutputNodeData_H

#include "Vec3.h"
#include "AudioGraphNodePort.h"
#include "AudioCurve.h"
#include "OutputReverbMode.h"
#include "SoundBusData.h"
#include "SoundGraphPluginRef.h"
#include "OutputNodeData.h"

class ConeOutputNodeData :
	public OutputNodeData // size = 0x80
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C7020;
	}
	AudioGraphNodePort m_PositionX; // 0x80
	unsigned char _0x88[0x8];
	Vec3 m_Direction; // 0x90
	AudioGraphNodePort m_PositionY; // 0xa0
	AudioGraphNodePort m_PositionZ; // 0xa8
	AudioGraphNodePort m_InnerAngle; // 0xb0
	AudioGraphNodePort m_OuterAngle; // 0xb8
	float m_OutsideGain; // 0xc0
	float m_PanSize; // 0xc4
	float m_BleedMinDistance; // 0xc8
	float m_BleedMaxDistance; // 0xcc
	AudioGraphNodePort m_CenterLevel; // 0xd0
	AudioGraphNodePort m_LfeLevel; // 0xd8
	float m_HFDampingAngle; // 0xe0
	unsigned char _0xe4[0x4];
	AudioCurve m_ReverbAttenuationCurve; // 0xe8
	float m_ReverbGain; // 0xf8
	OutputReverbMode m_ReverbMode; // 0xfc
	SoundBusData* m_ReverbSend; // 0x100
	SoundGraphPluginRef m_PanPlugin; // 0x108
	SoundGraphPluginRef m_ReverbSendPlugin; // 0x10b
	unsigned char _0x10e[0x2];
}; // size = 0x110

#endif // FBGEN_ConeOutputNodeData_H
