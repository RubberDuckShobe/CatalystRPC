//
// Generated with FrostbiteGen by Chod
// File: SDK\PamMapBeaconPositionSelectorEntityData.h
// Created: Wed Mar 10 19:04:25 2021
//

#ifndef FBGEN_PamMapBeaconPositionSelectorEntityData_H
#define FBGEN_PamMapBeaconPositionSelectorEntityData_H

#include "Realm.h"
#include "Vec3.h"
#include "EntityData.h"

class PamMapBeaconPositionSelectorEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014287C780;
	}
	Realm m_Realm; // 0x18
	unsigned char _0x1c[0x4];
	Vec3 m_LookAtPosition; // 0x20
	Vec3 m_FromPosition; // 0x30
	bool m_IsUnderground; // 0x40
	unsigned char _0x41[0xf];
}; // size = 0x50

#endif // FBGEN_PamMapBeaconPositionSelectorEntityData_H
