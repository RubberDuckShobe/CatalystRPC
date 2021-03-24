//
// Generated with FrostbiteGen by Chod
// File: SDK\TransformMultiplierEntityData.h
// Created: Wed Mar 10 19:00:08 2021
//

#ifndef FBGEN_TransformMultiplierEntityData_H
#define FBGEN_TransformMultiplierEntityData_H

#include "Realm.h"
#include "LinearTransform.h"
#include "EntityData.h"

class TransformMultiplierEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427E6890;
	}
	Realm m_Realm; // 0x18
	unsigned char _0x1c[0x4];
	LinearTransform m_In1; // 0x20
	LinearTransform m_In2; // 0x60
}; // size = 0xa0

#endif // FBGEN_TransformMultiplierEntityData_H
