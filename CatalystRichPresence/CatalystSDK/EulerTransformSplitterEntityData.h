//
// Generated with FrostbiteGen by Chod
// File: SDK\EulerTransformSplitterEntityData.h
// Created: Wed Mar 10 19:06:54 2021
//

#ifndef FBGEN_EulerTransformSplitterEntityData_H
#define FBGEN_EulerTransformSplitterEntityData_H

#include "Realm.h"
#include "LinearTransform.h"
#include "EntityData.h"

class EulerTransformSplitterEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427E6770;
	}
	Realm m_Realm; // 0x18
	unsigned char _0x1c[0x4];
	LinearTransform m_Transform; // 0x20
}; // size = 0x60

#endif // FBGEN_EulerTransformSplitterEntityData_H
