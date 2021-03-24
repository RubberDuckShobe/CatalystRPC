//
// Generated with FrostbiteGen by Chod
// File: SDK\RayCastEntityData.h
// Created: Wed Mar 10 19:02:42 2021
//

#ifndef FBGEN_RayCastEntityData_H
#define FBGEN_RayCastEntityData_H

#include "Realm.h"
#include "Vec3.h"
#include "EntityData.h"

class RayCastEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142878780;
	}
	Realm m_Realm; // 0x18
	unsigned char _0x1c[0x4];
	Vec3 m_Start; // 0x20
	Vec3 m_Stop; // 0x30
	float m_Radius; // 0x40
	bool m_SeeThrough; // 0x44
	bool m_Penetrable; // 0x45
	bool m_IncludeTerrain; // 0x46
	bool m_ContinuousUpdate; // 0x47
	unsigned char _0x48[0x8];
}; // size = 0x50

#endif // FBGEN_RayCastEntityData_H
