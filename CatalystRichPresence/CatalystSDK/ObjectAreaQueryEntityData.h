//
// Generated with FrostbiteGen by Chod
// File: SDK\ObjectAreaQueryEntityData.h
// Created: Wed Mar 10 19:05:31 2021
//

#ifndef FBGEN_ObjectAreaQueryEntityData_H
#define FBGEN_ObjectAreaQueryEntityData_H

#include "Realm.h"
#include "LinearTransform.h"
#include "EntityData.h"

class ObjectAreaQueryEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014280AD90;
	}
	Realm m_Realm; // 0x18
	unsigned char _0x1c[0x4];
	LinearTransform m_GeometryTransform; // 0x20
	float m_Radius; // 0x60
	unsigned char _0x64[0xc];
}; // size = 0x70

#endif // FBGEN_ObjectAreaQueryEntityData_H
