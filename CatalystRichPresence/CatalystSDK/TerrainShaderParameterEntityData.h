//
// Generated with FrostbiteGen by Chod
// File: SDK\TerrainShaderParameterEntityData.h
// Created: Wed Mar 10 19:00:25 2021
//

#ifndef FBGEN_TerrainShaderParameterEntityData_H
#define FBGEN_TerrainShaderParameterEntityData_H

#include "Array.h"
#include "EntityData.h"

class TerrainShaderParameterEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142837DC0;
	}
	Array<TerrainShaderParameter> m_ShaderParameters; // 0x18
}; // size = 0x20

#endif // FBGEN_TerrainShaderParameterEntityData_H
