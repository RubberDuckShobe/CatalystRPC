//
// Generated with FrostbiteGen by Chod
// File: SDK\ObjectOutputNodeData.h
// Created: Wed Mar 10 19:05:31 2021
//

#ifndef FBGEN_ObjectOutputNodeData_H
#define FBGEN_ObjectOutputNodeData_H

#include "Vec3.h"
#include "AudioGraphNodePort.h"
#include "SoundBusPatchAsset.h"
#include "AudioCurve.h"
#include "OutputReverbMode.h"
#include "SoundBusData.h"
#include "SoundGraphPluginRef.h"
#include "OutputNodeData.h"

class ObjectOutputNodeData :
	public OutputNodeData // size = 0x80
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C6FC0;
	}
	AudioGraphNodePort m_PositionX; // 0x80
	unsigned char _0x88[0x8];
	Vec3 m_Direction; // 0x90
	AudioGraphNodePort m_PositionY; // 0xa0
	AudioGraphNodePort m_PositionZ; // 0xa8
	AudioGraphNodePort m_InnerAngle; // 0xb0
	AudioGraphNodePort m_OuterAngle; // 0xb8
	AudioGraphNodePort m_Size; // 0xc0
	SoundBusPatchAsset* m_ObjectPatch; // 0xc8
	float m_OutsideGain; // 0xd0
	float m_BleedMinDistance; // 0xd4
	float m_BleedMaxDistance; // 0xd8
	float m_HFDampingAngle; // 0xdc
	AudioCurve m_ReverbAttenuationCurve; // 0xe0
	float m_ReverbGain; // 0xf0
	OutputReverbMode m_ReverbMode; // 0xf4
	SoundBusData* m_ReverbSend; // 0xf8
	SoundGraphPluginRef m_ReverbSendPlugin; // 0x100
	SoundGraphPluginRef m_PanPlugin; // 0x103
	SoundGraphPluginRef m_ObjectSendPlugin; // 0x106
	unsigned char _0x109[0x7];
}; // size = 0x110

#endif // FBGEN_ObjectOutputNodeData_H
