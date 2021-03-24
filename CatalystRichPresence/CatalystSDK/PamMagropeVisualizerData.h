//
// Generated with FrostbiteGen by Chod
// File: SDK\PamMagropeVisualizerData.h
// Created: Wed Mar 10 19:04:25 2021
//

#ifndef FBGEN_PamMagropeVisualizerData_H
#define FBGEN_PamMagropeVisualizerData_H

#include "Vec3.h"
#include "ObjectBlueprint.h"
#include "EntityData.h"

class PamMagropeVisualizerData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014287D200;
	}
	ObjectBlueprint* m_MapSplineMeshEnter; // 0x18
	Vec3 m_Scale; // 0x20
	Vec3 m_PlayerHandPosition; // 0x30
	Vec3 m_ClosestMagRope; // 0x40
	ObjectBlueprint* m_MapSplineMeshExit; // 0x50
	bool m_IsPlayerSwinging; // 0x58
	bool m_isMagRopeInRange; // 0x59
	unsigned char _0x5a[0x6];
}; // size = 0x60

#endif // FBGEN_PamMagropeVisualizerData_H
