//
// Generated with FrostbiteGen by Chod
// File: SDK\VisualTerrainEntityData.h
// Created: Wed Mar 10 18:59:11 2021
//

#ifndef FBGEN_VisualTerrainEntityData_H
#define FBGEN_VisualTerrainEntityData_H

#include "TerrainData.h"
#include "ResourceRef.h"
#include "VisualTerrainSettings.h"
#include "EntityData.h"

class VisualTerrainEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014283B7E0;
	}
	TerrainData* m_Terrain; // 0x18
	ResourceRef m_DecalsResource; // 0x20
	VisualTerrainSettings* m_Settings; // 0x28
}; // size = 0x30

#endif // FBGEN_VisualTerrainEntityData_H
