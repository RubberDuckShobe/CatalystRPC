//
// Generated with FrostbiteGen by Chod
// File: SDK\PrototypeProperty.h
// Created: Wed Mar 10 19:02:49 2021
//

#ifndef FBGEN_PrototypeProperty_H
#define FBGEN_PrototypeProperty_H

#include "Realm.h"
#include "PrototypePropertyType.h"
struct PrototypeProperty
{
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142880350;
	}
	Realm m_Realm; // 0x0
	unsigned char _0x4[0x4];
	const char* m_Name; // 0x8
	PrototypePropertyType m_PropertyType; // 0x10
	unsigned char _0x14[0x4];
}; // size = 0x18

#endif // FBGEN_PrototypeProperty_H
