//
// Generated with FrostbiteGen by Chod
// File: SDK\ObjectVariationMultiSwitchEntityData.h
// Created: Wed Mar 10 19:05:30 2021
//

#ifndef FBGEN_ObjectVariationMultiSwitchEntityData_H
#define FBGEN_ObjectVariationMultiSwitchEntityData_H

#include "Array.h"
#include "EntityData.h"

class ObjectVariationMultiSwitchEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427E6CB0;
	}
	Array<ObjectVariation*> m_Variations; // 0x18
	int m_CurrentIndex; // 0x20
	bool m_SetOnInit; // 0x24
	unsigned char _0x25[0x3];
}; // size = 0x28

#endif // FBGEN_ObjectVariationMultiSwitchEntityData_H
