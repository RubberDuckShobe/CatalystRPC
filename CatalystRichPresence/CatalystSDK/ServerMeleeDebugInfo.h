//
// Generated with FrostbiteGen by Chod
// File: SDK\ServerMeleeDebugInfo.h
// Created: Wed Mar 10 19:02:03 2021
//

#ifndef FBGEN_ServerMeleeDebugInfo_H
#define FBGEN_ServerMeleeDebugInfo_H

#include "Vec3.h"
struct ServerMeleeDebugInfo
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286AFE8;
	}
	Vec3 m_PredictedEnemyPos; // 0x0
	Vec3 m_OffsetAttackPos; // 0x10
	Vec3 m_SnappedAttackPos; // 0x20
	Vec3 m_RaycastStart; // 0x30
	Vec3 m_RaycastEnd; // 0x40
	Vec3 m_AttackPos; // 0x50
	bool m_AttackPosReachable; // 0x60
	bool m_RaycastActive; // 0x61
	bool m_RaycastHit; // 0x62
	bool m_RaycastMiss; // 0x63
	bool m_AttackPosValid; // 0x64
	unsigned char _0x65[0xb];
}; // size = 0x70

#endif // FBGEN_ServerMeleeDebugInfo_H
