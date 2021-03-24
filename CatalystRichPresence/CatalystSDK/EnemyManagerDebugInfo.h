//
// Generated with FrostbiteGen by Chod
// File: SDK\EnemyManagerDebugInfo.h
// Created: Wed Mar 10 19:07:00 2021
//

#ifndef FBGEN_EnemyManagerDebugInfo_H
#define FBGEN_EnemyManagerDebugInfo_H

#include "Vec3.h"
struct EnemyManagerDebugInfo
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427B7718;
	}
	Vec3 m_EnemyPos; // 0x0
	Vec3 m_AIPos; // 0x10
	unsigned int m_EnemyId; // 0x20
	float m_EnemyAggro; // 0x24
	bool m_HasEnemy; // 0x28
	unsigned char _0x29[0x7];
}; // size = 0x30

#endif // FBGEN_EnemyManagerDebugInfo_H
