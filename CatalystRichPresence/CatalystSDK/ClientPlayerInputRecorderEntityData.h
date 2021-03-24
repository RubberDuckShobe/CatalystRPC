//
// Generated with FrostbiteGen by Chod
// File: SDK\ClientPlayerInputRecorderEntityData.h
// Created: Wed Mar 10 19:07:53 2021
//

#ifndef FBGEN_ClientPlayerInputRecorderEntityData_H
#define FBGEN_ClientPlayerInputRecorderEntityData_H

#include "Realm.h"
#include "EntityData.h"

class ClientPlayerInputRecorderEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014281FBF0;
	}
	Realm m_Realm; // 0x18
	unsigned char _0x1c[0x4];
	const char* m_FileNameBase; // 0x20
	const char* m_TestName; // 0x28
}; // size = 0x30

#endif // FBGEN_ClientPlayerInputRecorderEntityData_H
