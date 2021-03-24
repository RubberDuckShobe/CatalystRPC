//
// Generated with FrostbiteGen by Chod
// File: SDK\AIPathLinkInhibitionEntityData.h
// Created: Wed Mar 10 19:08:57 2021
//

#ifndef FBGEN_AIPathLinkInhibitionEntityData_H
#define FBGEN_AIPathLinkInhibitionEntityData_H

#include "Realm.h"
#include "EntityData.h"

class AIPathLinkInhibitionEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427B83B0;
	}
	Realm m_Realm; // 0x18
	float m_PathLinkDeactivationRadius; // 0x1c
}; // size = 0x20

#endif // FBGEN_AIPathLinkInhibitionEntityData_H
