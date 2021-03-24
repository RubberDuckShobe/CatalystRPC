//
// Generated with FrostbiteGen by Chod
// File: SDK\ClientMeleeDebugInfo.h
// Created: Wed Mar 10 19:07:56 2021
//

#ifndef FBGEN_ClientMeleeDebugInfo_H
#define FBGEN_ClientMeleeDebugInfo_H

struct ClientMeleeDebugInfo
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286AFC8;
	}
	float m_FailureCooldown; // 0x0
	float m_WeaponCharge; // 0x4
	bool m_WaitingForLineOfEffect; // 0x8
	unsigned char _0x9[0x3];
}; // size = 0xc

#endif // FBGEN_ClientMeleeDebugInfo_H
