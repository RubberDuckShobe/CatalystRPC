//
// Generated with FrostbiteGen by Chod
// File: SDK\DynamicEnvmapComponentData.h
// Created: Wed Mar 10 19:07:05 2021
//

#ifndef FBGEN_DynamicEnvmapComponentData_H
#define FBGEN_DynamicEnvmapComponentData_H

#include "Vec3.h"
#include "Realm.h"
#include "VisualEnvironmentComponentData.h"

class DynamicEnvmapComponentData :
	public VisualEnvironmentComponentData // size = 0x80
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142846D60;
	}
	Vec3 m_KeyColorEnvmap; // 0x80
	Vec3 m_SkyColorEnvmap; // 0x90
	Vec3 m_GroundColorEnvmap; // 0xa0
	Realm m_Realm; // 0xb0
	bool m_Enable; // 0xb4
	bool m_TerrainReflectionsEnable; // 0xb5
	unsigned char _0xb6[0xa];
}; // size = 0xc0

#endif // FBGEN_DynamicEnvmapComponentData_H
