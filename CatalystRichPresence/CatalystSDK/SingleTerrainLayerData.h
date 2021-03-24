//
// Generated with FrostbiteGen by Chod
// File: SDK\SingleTerrainLayerData.h
// Created: Wed Mar 10 19:01:24 2021
//

#ifndef FBGEN_SingleTerrainLayerData_H
#define FBGEN_SingleTerrainLayerData_H

#include "Array.h"
#include "TerrainLayerData.h"

class SingleTerrainLayerData :
	public TerrainLayerData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014283ACF0;
	}
	Array<TerrainMeshScatteringType*> m_MeshScatteringTypes; // 0x10
}; // size = 0x18

#endif // FBGEN_SingleTerrainLayerData_H
