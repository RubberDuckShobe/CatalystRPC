//
// Generated with FrostbiteGen by Chod
// File: SDK\PathfindingSystemEntityData.h
// Created: Wed Mar 10 19:03:15 2021
//

#ifndef FBGEN_PathfindingSystemEntityData_H
#define FBGEN_PathfindingSystemEntityData_H

#include "Array.h"
#include "Realm.h"
#include "EntityData.h"

class PathfindingSystemEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014280BE70;
	}
	Array<unsigned int> m_PathfindingTypesOnLevel; // 0x18
	Realm m_Realm; // 0x20
	unsigned char _0x24[0x4];
}; // size = 0x28

#endif // FBGEN_PathfindingSystemEntityData_H
