//
// Generated with FrostbiteGen by Chod
// File: SDK\PropertyCastEntityData.h
// Created: Wed Mar 10 19:02:51 2021
//

#ifndef FBGEN_PropertyCastEntityData_H
#define FBGEN_PropertyCastEntityData_H

#include "Realm.h"
#include "EntityData.h"

class PropertyCastEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427E5FF0;
	}
	Realm m_Realm; // 0x18
	int m_Precision; // 0x1c
	float m_FloatValue; // 0x20
	int m_IntValue; // 0x24
	const char* m_StringValue; // 0x28
	bool m_BoolValue; // 0x30
	unsigned char _0x31[0x7];
}; // size = 0x38

#endif // FBGEN_PropertyCastEntityData_H
