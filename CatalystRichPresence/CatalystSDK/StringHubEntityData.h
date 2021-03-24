//
// Generated with FrostbiteGen by Chod
// File: SDK\StringHubEntityData.h
// Created: Wed Mar 10 19:00:49 2021
//

#ifndef FBGEN_StringHubEntityData_H
#define FBGEN_StringHubEntityData_H

#include "Realm.h"
#include "EntityData.h"

class StringHubEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427E6950;
	}
	Realm m_Realm; // 0x18
	int m_InputCount; // 0x1c
	int m_InputSelect; // 0x20
	bool m_SelectOnEvent; // 0x24
	unsigned char _0x25[0x3];
}; // size = 0x28

#endif // FBGEN_StringHubEntityData_H
