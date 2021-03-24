//
// Generated with FrostbiteGen by Chod
// File: SDK\SimpleRotationEntityData.h
// Created: Wed Mar 10 19:01:25 2021
//

#ifndef FBGEN_SimpleRotationEntityData_H
#define FBGEN_SimpleRotationEntityData_H

#include "Array.h"
#include "EntityData.h"

class SimpleRotationEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C1D80;
	}
	Array<TransformModifierData*> m_TransformModifiers; // 0x18
	bool m_AutoStart; // 0x20
	unsigned char _0x21[0x7];
}; // size = 0x28

#endif // FBGEN_SimpleRotationEntityData_H
