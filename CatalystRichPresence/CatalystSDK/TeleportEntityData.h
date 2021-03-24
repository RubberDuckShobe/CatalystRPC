//
// Generated with FrostbiteGen by Chod
// File: SDK\TeleportEntityData.h
// Created: Wed Mar 10 19:00:31 2021
//

#ifndef FBGEN_TeleportEntityData_H
#define FBGEN_TeleportEntityData_H

#include "LinearTransform.h"
#include "EntityData.h"

class TeleportEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014280AAF0;
	}
	bool m_CheckBelowGround; // 0x18
	unsigned char _0x19[0x7];
	LinearTransform m_NewPositionTransform; // 0x20
}; // size = 0x60

#endif // FBGEN_TeleportEntityData_H
