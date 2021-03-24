//
// Generated with FrostbiteGen by Chod
// File: SDK\PamReplayEntityData.h
// Created: Wed Mar 10 19:04:06 2021
//

#ifndef FBGEN_PamReplayEntityData_H
#define FBGEN_PamReplayEntityData_H

#include "LinearTransform.h"
#include "EntityData.h"

class PamReplayEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014287C600;
	}
	int m_StartTrim; // 0x18
	unsigned char _0x1c[0x4];
	LinearTransform m_OverrideTransform; // 0x20
	int m_EndTrim; // 0x60
	bool m_MapHack; // 0x64
	unsigned char _0x65[0xb];
}; // size = 0x70

#endif // FBGEN_PamReplayEntityData_H
