//
// Generated with FrostbiteGen by Chod
// File: SDK\PamServerAIFireManagerDebugInfo.h
// Created: Wed Mar 10 19:04:00 2021
//

#ifndef FBGEN_PamServerAIFireManagerDebugInfo_H
#define FBGEN_PamServerAIFireManagerDebugInfo_H

struct PamServerAIFireManagerDebugInfo
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286AF88;
	}
	float m_CriticalCooldown; // 0x0
	float m_AcquiredCooldown; // 0x4
	float m_NearFriendCooldown; // 0x8
	bool m_FriendInTheWay; // 0xc
	bool m_HasFireToken; // 0xd
	unsigned char _0xe[0x2];
}; // size = 0x10

#endif // FBGEN_PamServerAIFireManagerDebugInfo_H
