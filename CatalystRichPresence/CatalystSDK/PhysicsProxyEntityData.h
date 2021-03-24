//
// Generated with FrostbiteGen by Chod
// File: SDK\PhysicsProxyEntityData.h
// Created: Wed Mar 10 19:03:08 2021
//

#ifndef FBGEN_PhysicsProxyEntityData_H
#define FBGEN_PhysicsProxyEntityData_H

#include "Realm.h"
#include "PhysicsEntityData.h"
#include "ComponentEntityData.h"

class PhysicsProxyEntityData :
	public ComponentEntityData // size = 0x70
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014282F7D0;
	}
	Realm m_Realm; // 0x70
	unsigned char _0x74[0x4];
	PhysicsEntityData* m_PhysicsData; // 0x78
}; // size = 0x80

#endif // FBGEN_PhysicsProxyEntityData_H
