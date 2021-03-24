//
// Generated with FrostbiteGen by Chod
// File: SDK\TransformBuilderEntityData.h
// Created: Wed Mar 10 19:00:10 2021
//

#ifndef FBGEN_TransformBuilderEntityData_H
#define FBGEN_TransformBuilderEntityData_H

#include "Realm.h"
#include "Vec3.h"
#include "EntityData.h"

class TransformBuilderEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427E63B0;
	}
	Realm m_Realm; // 0x18
	unsigned char _0x1c[0x4];
	Vec3 m_Left; // 0x20
	Vec3 m_Up; // 0x30
	Vec3 m_Forward; // 0x40
	Vec3 m_Trans; // 0x50
	bool m_IsWorldSpace; // 0x60
	bool m_WaitForAll; // 0x61
	unsigned char _0x62[0xe];
}; // size = 0x70

#endif // FBGEN_TransformBuilderEntityData_H
