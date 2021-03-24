//
// Generated with FrostbiteGen by Chod
// File: SDK\AppearanceCullTagEventHelperEntityData.h
// Created: Wed Mar 10 19:08:41 2021
//

#ifndef FBGEN_AppearanceCullTagEventHelperEntityData_H
#define FBGEN_AppearanceCullTagEventHelperEntityData_H

#include "Array.h"
#include "EntityData.h"

class AppearanceCullTagEventHelperEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427B5310;
	}
	Array<AppearanceCullTag*> m_CullTags; // 0x18
}; // size = 0x20

#endif // FBGEN_AppearanceCullTagEventHelperEntityData_H
