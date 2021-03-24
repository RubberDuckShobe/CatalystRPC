//
// Generated with FrostbiteGen by Chod
// File: SDK\OutputNodeData.h
// Created: Wed Mar 10 19:05:24 2021
//

#ifndef FBGEN_OutputNodeData_H
#define FBGEN_OutputNodeData_H

#include "AudioGraphNodePort.h"
#include "AudioCurve.h"
#include "SoundBusData.h"
#include "OutputTransformSource.h"
#include "MixGroup.h"
#include "SoundGraphPluginRef.h"
#include "AudioGraphNodeData.h"

class OutputNodeData :
	public AudioGraphNodeData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C8F40;
	}
	AudioGraphNodePort m_In; // 0x10
	AudioGraphNodePort m_BypassHeadroom; // 0x18
	float m_MinDistance; // 0x20
	unsigned char _0x24[0x4];
	AudioCurve m_AttenuationCurve; // 0x28
	float m_HFDampingDistance; // 0x38
	float m_HFDampingObstruction; // 0x3c
	float m_HFDampingOcclusion; // 0x40
	float m_Gain; // 0x44
	SoundBusData* m_MainSend; // 0x48
	float m_ExpectedPeakAmplitude; // 0x50
	OutputTransformSource m_TransformSource; // 0x54
	const char* m_OutputName; // 0x58
	unsigned int m_OutputNameHash; // 0x60
	unsigned char _0x64[0x4];
	MixGroup* m_MixGroup; // 0x68
	bool m_Solo; // 0x70
	bool m_EnableHdr; // 0x71
	SoundGraphPluginRef m_LowPassPlugin; // 0x72
	SoundGraphPluginRef m_VuPlugin; // 0x75
	SoundGraphPluginRef m_MainSendPlugin; // 0x78
	unsigned char _0x7b[0x5];
}; // size = 0x80

#endif // FBGEN_OutputNodeData_H
