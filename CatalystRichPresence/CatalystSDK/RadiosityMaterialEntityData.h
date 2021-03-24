//
// Generated with FrostbiteGen by Chod
// File: SDK\RadiosityMaterialEntityData.h
// Created: Wed Mar 10 19:02:46 2021
//

#ifndef FBGEN_RadiosityMaterialEntityData_H
#define FBGEN_RadiosityMaterialEntityData_H

#include "ObjectBlueprint.h"
#include "Vec3.h"
#include "EntityData.h"

class RadiosityMaterialEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142842430;
	}
	ObjectBlueprint* m_Blueprint; // 0x18
	Vec3 m_Color; // 0x20
	unsigned long m_MaterialId; // 0x30
	float m_EmissiveIntensity; // 0x38
	float m_Opacity; // 0x3c
}; // size = 0x40

#endif // FBGEN_RadiosityMaterialEntityData_H
