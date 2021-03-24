//
// Generated with FrostbiteGen by Chod
// File: SDK\LocatorEntityData.h
// Created: Wed Mar 10 19:06:08 2021
//

#ifndef FBGEN_LocatorEntityData_H
#define FBGEN_LocatorEntityData_H

#include "Realm.h"
#include "SpatialEntityData.h"

class LocatorEntityData :
	public SpatialEntityData // size = 0x60
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427E71F0;
	}
	Realm m_Realm; // 0x60
	unsigned char _0x64[0xc];
}; // size = 0x70

#endif // FBGEN_LocatorEntityData_H
