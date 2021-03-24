//
// Generated with FrostbiteGen by Chod
// File: SDK\PamAIAutoSpawnGroupData.h
// Created: Wed Mar 10 19:05:21 2021
//

#ifndef FBGEN_PamAIAutoSpawnGroupData_H
#define FBGEN_PamAIAutoSpawnGroupData_H

#include "PamAIGroupData.h"

class PamAIAutoSpawnGroupData :
	public PamAIGroupData // size = 0x60
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286C550;
	}
	float m_MaxContextualDistance; // 0x60
	float m_MinContextualDistance; // 0x64
	float m_MaxContextualAngle; // 0x68
	bool m_Enabled; // 0x6c
	unsigned char _0x6d[0x3];
}; // size = 0x70

#endif // FBGEN_PamAIAutoSpawnGroupData_H
