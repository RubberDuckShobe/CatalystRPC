//
// Generated with FrostbiteGen by Chod
// File: SDK\SyncedVec3EntityData.h
// Created: Wed Mar 10 19:00:36 2021
//

#ifndef FBGEN_SyncedVec3EntityData_H
#define FBGEN_SyncedVec3EntityData_H

#include "EntityData.h"

class SyncedVec3EntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428266A0;
	}
	bool m_Interpolate; // 0x18
	unsigned char _0x19[0x7];
}; // size = 0x20

#endif // FBGEN_SyncedVec3EntityData_H
