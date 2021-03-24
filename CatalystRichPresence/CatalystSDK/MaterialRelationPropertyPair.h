//
// Generated with FrostbiteGen by Chod
// File: SDK\MaterialRelationPropertyPair.h
// Created: Wed Mar 10 19:06:00 2021
//

#ifndef FBGEN_MaterialRelationPropertyPair_H
#define FBGEN_MaterialRelationPropertyPair_H

#include "Array.h"
struct MaterialRelationPropertyPair
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427EA118;
	}
	Array<PhysicsMaterialRelationPropertyData*> m_PhysicsMaterialProperties; // 0x0
	Array<PhysicsPropertyRelationPropertyData*> m_PhysicsPropertyProperties; // 0x8
}; // size = 0x10

#endif // FBGEN_MaterialRelationPropertyPair_H
