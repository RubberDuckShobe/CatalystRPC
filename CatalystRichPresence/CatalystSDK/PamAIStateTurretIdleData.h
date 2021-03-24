//
// Generated with FrostbiteGen by Chod
// File: SDK\PamAIStateTurretIdleData.h
// Created: Wed Mar 10 19:05:09 2021
//

#ifndef FBGEN_PamAIStateTurretIdleData_H
#define FBGEN_PamAIStateTurretIdleData_H

#include "PamAIStateBaseData.h"

class PamAIStateTurretIdleData :
	public PamAIStateBaseData // size = 0x28
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286CAF0;
	}
	float m_IdleTime; // 0x28
	unsigned char _0x2c[0x4];
}; // size = 0x30

#endif // FBGEN_PamAIStateTurretIdleData_H
