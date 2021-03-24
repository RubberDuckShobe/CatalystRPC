//
// Generated with FrostbiteGen by Chod
// File: SDK\BoolHubEntityData.h
// Created: Wed Mar 10 19:08:26 2021
//

#ifndef FBGEN_BoolHubEntityData_H
#define FBGEN_BoolHubEntityData_H

#include "Realm.h"
#include "EntityData.h"

class BoolHubEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427E6B90;
	}
	Realm m_Realm; // 0x18
	int m_InputCount; // 0x1c
	int m_InputSelect; // 0x20
	bool m_SelectOnEvent; // 0x24
	unsigned char _0x25[0x3];
}; // size = 0x28

#endif // FBGEN_BoolHubEntityData_H
