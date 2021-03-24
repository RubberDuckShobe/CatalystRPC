//
// Generated with FrostbiteGen by Chod
// File: SDK\PamAIStateNullData.h
// Created: Wed Mar 10 19:05:11 2021
//

#ifndef FBGEN_PamAIStateNullData_H
#define FBGEN_PamAIStateNullData_H

#include "PamAIStateBaseData.h"

class PamAIStateNullData :
	public PamAIStateBaseData // size = 0x28
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286DF90;
	}
	float m_IdleTime; // 0x28
	unsigned char _0x2c[0x4];
}; // size = 0x30

#endif // FBGEN_PamAIStateNullData_H
