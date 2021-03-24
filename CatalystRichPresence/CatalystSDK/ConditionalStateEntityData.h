//
// Generated with FrostbiteGen by Chod
// File: SDK\ConditionalStateEntityData.h
// Created: Wed Mar 10 19:07:35 2021
//

#ifndef FBGEN_ConditionalStateEntityData_H
#define FBGEN_ConditionalStateEntityData_H

#include "Realm.h"
#include "EntityData.h"

class ConditionalStateEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014289A160;
	}
	Realm m_Realm; // 0x18
	bool m_Condition; // 0x1c
	unsigned char _0x1d[0x3];
}; // size = 0x20

#endif // FBGEN_ConditionalStateEntityData_H
