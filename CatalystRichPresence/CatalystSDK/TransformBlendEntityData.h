//
// Generated with FrostbiteGen by Chod
// File: SDK\TransformBlendEntityData.h
// Created: Wed Mar 10 19:00:10 2021
//

#ifndef FBGEN_TransformBlendEntityData_H
#define FBGEN_TransformBlendEntityData_H

#include "Realm.h"
#include "LinearTransform.h"
#include "EntityData.h"

class TransformBlendEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427E6830;
	}
	Realm m_Realm; // 0x18
	unsigned char _0x1c[0x4];
	LinearTransform m_In1; // 0x20
	LinearTransform m_In2; // 0x60
	float m_BlendValue; // 0xa0
	float m_BlendValue2; // 0xa4
	unsigned char _0xa8[0x8];
}; // size = 0xb0

#endif // FBGEN_TransformBlendEntityData_H
