//
// Generated with FrostbiteGen by Chod
// File: SDK\MaterialRelationTerrainDestructionData.h
// Created: Wed Mar 10 19:06:00 2021
//

#ifndef FBGEN_MaterialRelationTerrainDestructionData_H
#define FBGEN_MaterialRelationTerrainDestructionData_H

#include "TerrainDynamicDecalTemplateData.h"
#include "PhysicsPropertyRelationPropertyData.h"

class MaterialRelationTerrainDestructionData :
	public PhysicsPropertyRelationPropertyData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014280A5B0;
	}
	TerrainDynamicDecalTemplateData* m_DynamicDecalTemplate; // 0x10
}; // size = 0x18

#endif // FBGEN_MaterialRelationTerrainDestructionData_H
