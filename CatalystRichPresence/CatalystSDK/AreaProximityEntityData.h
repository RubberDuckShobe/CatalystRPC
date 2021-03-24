//
// Generated with FrostbiteGen by Chod
// File: SDK\AreaProximityEntityData.h
// Created: Wed Mar 10 19:08:39 2021
//

#ifndef FBGEN_AreaProximityEntityData_H
#define FBGEN_AreaProximityEntityData_H

#include "Realm.h"
#include "UpdatePass.h"
#include "EntityData.h"

class AreaProximityEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014280AE50;
	}
	Realm m_Realm; // 0x18
	UpdatePass m_UpdatePass; // 0x1c
	float m_ProximityDistance; // 0x20
	bool m_AutoStart; // 0x24
	unsigned char _0x25[0x3];
}; // size = 0x28

#endif // FBGEN_AreaProximityEntityData_H
