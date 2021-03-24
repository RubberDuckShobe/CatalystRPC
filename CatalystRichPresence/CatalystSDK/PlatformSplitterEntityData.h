//
// Generated with FrostbiteGen by Chod
// File: SDK\PlatformSplitterEntityData.h
// Created: Wed Mar 10 19:03:06 2021
//

#ifndef FBGEN_PlatformSplitterEntityData_H
#define FBGEN_PlatformSplitterEntityData_H

#include "Realm.h"
#include "EntityData.h"

class PlatformSplitterEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014280AFD0;
	}
	Realm m_Realm; // 0x18
	bool m_RunOnce; // 0x1c
	unsigned char _0x1d[0x3];
}; // size = 0x20

#endif // FBGEN_PlatformSplitterEntityData_H
