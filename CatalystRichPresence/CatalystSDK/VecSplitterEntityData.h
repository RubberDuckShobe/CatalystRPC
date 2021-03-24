//
// Generated with FrostbiteGen by Chod
// File: SDK\VecSplitterEntityData.h
// Created: Wed Mar 10 18:59:25 2021
//

#ifndef FBGEN_VecSplitterEntityData_H
#define FBGEN_VecSplitterEntityData_H

#include "Realm.h"
#include "Vec3.h"
#include "Vec4.h"
#include "Vec2.h"
#include "EntityData.h"

class VecSplitterEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427E6590;
	}
	Realm m_Realm; // 0x18
	unsigned char _0x1c[0x4];
	Vec3 m_Vec3; // 0x20
	Vec4 m_Vec4; // 0x30
	Vec2 m_Vec2; // 0x40
	unsigned char _0x48[0x8];
}; // size = 0x50

#endif // FBGEN_VecSplitterEntityData_H
