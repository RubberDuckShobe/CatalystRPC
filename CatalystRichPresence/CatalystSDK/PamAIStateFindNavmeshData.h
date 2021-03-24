//
// Generated with FrostbiteGen by Chod
// File: SDK\PamAIStateFindNavmeshData.h
// Created: Wed Mar 10 19:05:14 2021
//

#ifndef FBGEN_PamAIStateFindNavmeshData_H
#define FBGEN_PamAIStateFindNavmeshData_H

#include "PamAIStateBaseData.h"

class PamAIStateFindNavmeshData :
	public PamAIStateBaseData // size = 0x28
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286D150;
	}
	float m_RetryInterval; // 0x28
	unsigned char _0x2c[0x4];
}; // size = 0x30

#endif // FBGEN_PamAIStateFindNavmeshData_H
