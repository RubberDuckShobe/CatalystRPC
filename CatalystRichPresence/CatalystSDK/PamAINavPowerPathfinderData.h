//
// Generated with FrostbiteGen by Chod
// File: SDK\PamAINavPowerPathfinderData.h
// Created: Wed Mar 10 19:05:18 2021
//

#ifndef FBGEN_PamAINavPowerPathfinderData_H
#define FBGEN_PamAINavPowerPathfinderData_H

#include "AINavPowerPathfinderData.h"

class PamAINavPowerPathfinderData :
	public AINavPowerPathfinderData // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286E410;
	}
	int m_BoxCastsPerFrame; // 0x20
	float m_MaxSampleDistance; // 0x24
	int m_SampleRingCount; // 0x28
	int m_SamplesPerRing; // 0x2c
	int m_SampleInterleavings; // 0x30
	unsigned char _0x34[0x4];
}; // size = 0x38

#endif // FBGEN_PamAINavPowerPathfinderData_H
