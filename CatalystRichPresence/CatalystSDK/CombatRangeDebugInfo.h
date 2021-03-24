//
// Generated with FrostbiteGen by Chod
// File: SDK\CombatRangeDebugInfo.h
// Created: Wed Mar 10 19:07:39 2021
//

#ifndef FBGEN_CombatRangeDebugInfo_H
#define FBGEN_CombatRangeDebugInfo_H

struct CombatRangeDebugInfo
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286AE28;
	}
	float m_CQRange; // 0x0
	float m_NearRange; // 0x4
	bool m_IsInCQRange; // 0x8
	bool m_IsInNearRange; // 0x9
	unsigned char _0xa[0x2];
}; // size = 0xc

#endif // FBGEN_CombatRangeDebugInfo_H
