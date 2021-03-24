//
// Generated with FrostbiteGen by Chod
// File: SDK\HudImpactData.h
// Created: Wed Mar 10 19:06:33 2021
//

#ifndef FBGEN_HudImpactData_H
#define FBGEN_HudImpactData_H

struct HudImpactData
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428160C0;
	}
	float m_MinHealth; // 0x0
	float m_MaxHealth; // 0x4
	float m_MinTimeVisible; // 0x8
	float m_MaxTimeVisible; // 0xc
	bool m_Enable; // 0x10
	unsigned char _0x11[0x3];
}; // size = 0x14

#endif // FBGEN_HudImpactData_H
