//
// Generated with FrostbiteGen by Chod
// File: SDK\TransformEntityData.h
// Created: Wed Mar 10 19:00:09 2021
//

#ifndef FBGEN_TransformEntityData_H
#define FBGEN_TransformEntityData_H

#include "Realm.h"
#include "LinearTransform.h"
#include "EntityData.h"

class TransformEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427E5390;
	}
	Realm m_Realm; // 0x18
	unsigned char _0x1c[0x4];
	LinearTransform m_DefaultTransform; // 0x20
}; // size = 0x60

#endif // FBGEN_TransformEntityData_H
