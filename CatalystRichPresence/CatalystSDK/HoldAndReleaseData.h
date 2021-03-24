//
// Generated with FrostbiteGen by Chod
// File: SDK\HoldAndReleaseData.h
// Created: Wed Mar 10 19:06:34 2021
//

#ifndef FBGEN_HoldAndReleaseData_H
#define FBGEN_HoldAndReleaseData_H

struct HoldAndReleaseData
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014289D440;
	}
	float m_MaxHoldTime; // 0x0
	float m_MinPowerModifier; // 0x4
	float m_MaxPowerModifier; // 0x8
	float m_PowerIncreasePerSecond; // 0xc
	float m_Delay; // 0x10
	float m_KilledHoldingPowerModifier; // 0x14
	bool m_ForceFireWhenKilledHolding; // 0x18
	unsigned char _0x19[0x3];
}; // size = 0x1c

#endif // FBGEN_HoldAndReleaseData_H
