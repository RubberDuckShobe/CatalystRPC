//
// Generated with FrostbiteGen by Chod
// File: SDK\PamAIPathfindingTesterData.h
// Created: Wed Mar 10 19:05:18 2021
//

#ifndef FBGEN_PamAIPathfindingTesterData_H
#define FBGEN_PamAIPathfindingTesterData_H

#include "Realm.h"
#include "Vec3.h"
#include "EntityData.h"

class PamAIPathfindingTesterData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286E3B0;
	}
	Realm m_Realm; // 0x18
	unsigned char _0x1c[0x4];
	Vec3 m_StartPosition; // 0x20
	Vec3 m_EndPosition; // 0x30
}; // size = 0x40

#endif // FBGEN_PamAIPathfindingTesterData_H
