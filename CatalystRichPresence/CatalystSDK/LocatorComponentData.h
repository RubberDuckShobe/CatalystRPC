//
// Generated with FrostbiteGen by Chod
// File: SDK\LocatorComponentData.h
// Created: Wed Mar 10 19:06:08 2021
//

#ifndef FBGEN_LocatorComponentData_H
#define FBGEN_LocatorComponentData_H

#include "Realm.h"
#include "GameComponentData.h"

class LocatorComponentData :
	public GameComponentData // size = 0x70
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C1C00;
	}
	Realm m_Realm; // 0x70
	bool m_Enabled; // 0x74
	unsigned char _0x75[0xb];
}; // size = 0x80

#endif // FBGEN_LocatorComponentData_H
