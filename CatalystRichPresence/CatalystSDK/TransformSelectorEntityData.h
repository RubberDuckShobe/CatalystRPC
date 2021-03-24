//
// Generated with FrostbiteGen by Chod
// File: SDK\TransformSelectorEntityData.h
// Created: Wed Mar 10 19:00:06 2021
//

#ifndef FBGEN_TransformSelectorEntityData_H
#define FBGEN_TransformSelectorEntityData_H

#include "Realm.h"
#include "LinearTransform.h"
#include "EntityData.h"

class TransformSelectorEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427E5C90;
	}
	Realm m_Realm; // 0x18
	unsigned char _0x1c[0x4];
	LinearTransform m_In1; // 0x20
	LinearTransform m_In2; // 0x60
	bool m_Selection; // 0xa0
	unsigned char _0xa1[0xf];
}; // size = 0xb0

#endif // FBGEN_TransformSelectorEntityData_H
