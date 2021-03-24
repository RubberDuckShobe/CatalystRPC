//
// Generated with FrostbiteGen by Chod
// File: SDK\TerrainShaderParameter.h
// Created: Wed Mar 10 19:00:26 2021
//

#ifndef FBGEN_TerrainShaderParameter_H
#define FBGEN_TerrainShaderParameter_H

#include "TerrainShaderParameterDataType.h"
struct TerrainShaderParameter
{
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142837B20;
	}
	unsigned int m_ParameterHandle; // 0x0
	TerrainShaderParameterDataType m_ParameterType; // 0x4
	const char* m_ParameterName; // 0x8
}; // size = 0x10

#endif // FBGEN_TerrainShaderParameter_H
