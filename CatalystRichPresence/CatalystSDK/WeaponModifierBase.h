//
// Generated with FrostbiteGen by Chod
// File: SDK\WeaponModifierBase.h
// Created: Wed Mar 10 18:58:49 2021
//

#ifndef FBGEN_WeaponModifierBase_H
#define FBGEN_WeaponModifierBase_H

#include "DataContainer.h"

class WeaponModifierBase :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014289DC40;
	}
	int m_ApplyOrder; // 0x10
	bool m_DynamicUpdateEnabled; // 0x14
	unsigned char _0x15[0x3];
}; // size = 0x18

#endif // FBGEN_WeaponModifierBase_H
