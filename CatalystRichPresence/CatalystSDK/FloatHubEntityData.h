//
// Generated with FrostbiteGen by Chod
// File: SDK\FloatHubEntityData.h
// Created: Wed Mar 10 19:06:45 2021
//

#ifndef FBGEN_FloatHubEntityData_H
#define FBGEN_FloatHubEntityData_H

#include "Realm.h"
#include "EntityData.h"

class FloatHubEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427E6AD0;
	}
	Realm m_Realm; // 0x18
	int m_InputCount; // 0x1c
	int m_InputSelect; // 0x20
	bool m_SelectOnEvent; // 0x24
	unsigned char _0x25[0x3];
}; // size = 0x28

#endif // FBGEN_FloatHubEntityData_H
