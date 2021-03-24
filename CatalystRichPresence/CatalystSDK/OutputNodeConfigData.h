//
// Generated with FrostbiteGen by Chod
// File: SDK\OutputNodeConfigData.h
// Created: Wed Mar 10 19:05:24 2021
//

#ifndef FBGEN_OutputNodeConfigData_H
#define FBGEN_OutputNodeConfigData_H

#include "AudioCurve.h"
#include "MixGroup.h"
#include "AudioGraphNodeConfigData.h"

class OutputNodeConfigData :
	public AudioGraphNodeConfigData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C8EE0;
	}
	float m_MinDistance; // 0x18
	unsigned char _0x1c[0x4];
	AudioCurve m_AttenuationCurve; // 0x20
	float m_HFDampingDistance; // 0x30
	float m_HFDampingObstruction; // 0x34
	float m_HFDampingOcclusion; // 0x38
	float m_Gain; // 0x3c
	float m_ExpectedPeakAmplitude; // 0x40
	unsigned char _0x44[0x4];
	MixGroup* m_MixGroup; // 0x48
	bool m_EnableHdr; // 0x50
	unsigned char _0x51[0x7];
}; // size = 0x58

#endif // FBGEN_OutputNodeConfigData_H
