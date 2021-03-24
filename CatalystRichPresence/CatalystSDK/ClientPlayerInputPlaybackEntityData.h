//
// Generated with FrostbiteGen by Chod
// File: SDK\ClientPlayerInputPlaybackEntityData.h
// Created: Wed Mar 10 19:07:53 2021
//

#ifndef FBGEN_ClientPlayerInputPlaybackEntityData_H
#define FBGEN_ClientPlayerInputPlaybackEntityData_H

#include "Realm.h"
#include "EntityData.h"

class ClientPlayerInputPlaybackEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014281FB90;
	}
	Realm m_Realm; // 0x18
	unsigned char _0x1c[0x4];
	const char* m_FileName; // 0x20
	const char* m_TestName; // 0x28
}; // size = 0x30

#endif // FBGEN_ClientPlayerInputPlaybackEntityData_H
