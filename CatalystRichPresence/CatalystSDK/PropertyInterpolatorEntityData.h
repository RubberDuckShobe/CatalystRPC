//
// Generated with FrostbiteGen by Chod
// File: SDK\PropertyInterpolatorEntityData.h
// Created: Wed Mar 10 19:02:50 2021
//

#ifndef FBGEN_PropertyInterpolatorEntityData_H
#define FBGEN_PropertyInterpolatorEntityData_H

#include "Realm.h"
#include "PropertyInterpolationType.h"
#include "PropertyInterpolationMode.h"
#include "EntityData.h"

class PropertyInterpolatorEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428999E0;
	}
	Realm m_Realm; // 0x18
	PropertyInterpolationType m_InterpolationType; // 0x1c
	PropertyInterpolationMode m_InterpolationMode; // 0x20
	float m_Duration; // 0x24
}; // size = 0x28

#endif // FBGEN_PropertyInterpolatorEntityData_H
