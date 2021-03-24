//
// Generated with FrostbiteGen by Chod
// File: SDK\ShadowExtrusionLevelData.h
// Created: Wed Mar 10 19:01:28 2021
//

#ifndef FBGEN_ShadowExtrusionLevelData_H
#define FBGEN_ShadowExtrusionLevelData_H

#include "Array.h"
#include "Vec3.h"
#include "GameObjectData.h"

class ShadowExtrusionLevelData :
	public GameObjectData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428925D0;
	}
	Array<float> m_ExtrusionDirDeltas; // 0x18
	Vec3 m_RefExtrusionDir; // 0x20
}; // size = 0x30

#endif // FBGEN_ShadowExtrusionLevelData_H
