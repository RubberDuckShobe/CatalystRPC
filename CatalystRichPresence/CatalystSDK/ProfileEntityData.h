//
// Generated with FrostbiteGen by Chod
// File: SDK\ProfileEntityData.h
// Created: Wed Mar 10 19:02:52 2021
//

#ifndef FBGEN_ProfileEntityData_H
#define FBGEN_ProfileEntityData_H

#include "Realm.h"
#include "EntityData.h"

class ProfileEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427E5DB0;
	}
	Realm m_Realm; // 0x18
	unsigned char _0x1c[0x4];
	const char* m_ProfileName; // 0x20
}; // size = 0x28

#endif // FBGEN_ProfileEntityData_H
