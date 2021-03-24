//
// Generated with FrostbiteGen by Chod
// File: SDK\RandomMultiEventEntityData.h
// Created: Wed Mar 10 19:02:44 2021
//

#ifndef FBGEN_RandomMultiEventEntityData_H
#define FBGEN_RandomMultiEventEntityData_H

#include "Realm.h"
#include "Array.h"
#include "EntityData.h"

class RandomMultiEventEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427E7130;
	}
	Realm m_Realm; // 0x18
	unsigned char _0x1c[0x4];
	Array<float> m_RandomEventWeight; // 0x20
	bool m_UniformDistribution; // 0x28
	bool m_DisableOutputOnTrigger; // 0x29
	bool m_ResetOutputsWhenAllHasTriggered; // 0x2a
	bool m_TrueRandom; // 0x2b
	unsigned char _0x2c[0x4];
}; // size = 0x30

#endif // FBGEN_RandomMultiEventEntityData_H
