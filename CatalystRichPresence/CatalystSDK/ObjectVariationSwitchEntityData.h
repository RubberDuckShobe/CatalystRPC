//
// Generated with FrostbiteGen by Chod
// File: SDK\ObjectVariationSwitchEntityData.h
// Created: Wed Mar 10 19:05:30 2021
//

#ifndef FBGEN_ObjectVariationSwitchEntityData_H
#define FBGEN_ObjectVariationSwitchEntityData_H

#include "ObjectVariation.h"
#include "EntityData.h"

class ObjectVariationSwitchEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427E6D10;
	}
	ObjectVariation* m_Variation1; // 0x18
	ObjectVariation* m_Variation2; // 0x20
}; // size = 0x28

#endif // FBGEN_ObjectVariationSwitchEntityData_H
