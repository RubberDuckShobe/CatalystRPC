//
// Generated with FrostbiteGen by Chod
// File: SDK\PamEnemyManagerData.h
// Created: Wed Mar 10 19:04:40 2021
//

#ifndef FBGEN_PamEnemyManagerData_H
#define FBGEN_PamEnemyManagerData_H

#include "AIEnemyManagerData.h"

class PamEnemyManagerData :
	public AIEnemyManagerData // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286EDD0;
	}
	float m_UnsensedEnemyTimeout; // 0x20
	unsigned char _0x24[0x4];
}; // size = 0x28

#endif // FBGEN_PamEnemyManagerData_H
