//
// Generated with FrostbiteGen by Chod
// File: SDK\ShadowExtrusionControlEntityData.h
// Created: Wed Mar 10 19:01:28 2021
//

#ifndef FBGEN_ShadowExtrusionControlEntityData_H
#define FBGEN_ShadowExtrusionControlEntityData_H

#include "Array.h"
#include "Realm.h"
#include "EntityData.h"

class ShadowExtrusionControlEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428924B0;
	}
	Array<Vec3> m_ExtrusionDirections; // 0x18
	Realm m_Realm; // 0x20
	unsigned char _0x24[0x4];
}; // size = 0x28

#endif // FBGEN_ShadowExtrusionControlEntityData_H
