//
// Generated with FrostbiteGen by Chod
// File: SDK\MultiPropertyGateEntityData.h
// Created: Wed Mar 10 19:05:43 2021
//

#ifndef FBGEN_MultiPropertyGateEntityData_H
#define FBGEN_MultiPropertyGateEntityData_H

#include "Realm.h"
#include "Array.h"
#include "EntityData.h"

class MultiPropertyGateEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C2020;
	}
	Realm m_Realm; // 0x18
	unsigned char _0x1c[0x4];
	Array<MultiPropertyGatePropertyInfo> m_RuntimeProperties; // 0x20
	bool m_WritePropertiesOnOpenGate; // 0x28
	bool m_Open; // 0x29
	unsigned char _0x2a[0x6];
}; // size = 0x30

#endif // FBGEN_MultiPropertyGateEntityData_H
