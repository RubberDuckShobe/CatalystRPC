//
// Generated with FrostbiteGen by Chod
// File: SDK\TransformToRotationEntityData.h
// Created: Wed Mar 10 19:00:05 2021
//

#ifndef FBGEN_TransformToRotationEntityData_H
#define FBGEN_TransformToRotationEntityData_H

#include "Realm.h"
#include "LinearTransform.h"
#include "EntityData.h"

class TransformToRotationEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427E6230;
	}
	Realm m_Realm; // 0x18
	unsigned char _0x1c[0x4];
	LinearTransform m_In; // 0x20
	bool m_Degrees; // 0x60
	unsigned char _0x61[0xf];
}; // size = 0x70

#endif // FBGEN_TransformToRotationEntityData_H
