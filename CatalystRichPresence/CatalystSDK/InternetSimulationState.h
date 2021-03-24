//
// Generated with FrostbiteGen by Chod
// File: SDK\InternetSimulationState.h
// Created: Wed Mar 10 19:06:26 2021
//

#ifndef FBGEN_InternetSimulationState_H
#define FBGEN_InternetSimulationState_H

struct InternetSimulationState
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427B2018;
	}
	float m_ReorderRatio; // 0x0
	float m_LatencyMin; // 0x4
	float m_LatencyMax; // 0x8
	float m_DuplicateRatio; // 0xc
	float m_DropRatio; // 0x10
	float m_CorruptRatio; // 0x14
	float m_SizeRatio; // 0x18
	float m_SpikeDurationMin; // 0x1c
	float m_SpikeDurationMax; // 0x20
	float m_SpikeCooldownMin; // 0x24
	float m_SpikeCooldownMax; // 0x28
	bool m_Enabled; // 0x2c
	unsigned char _0x2d[0x3];
}; // size = 0x30

#endif // FBGEN_InternetSimulationState_H
