//
// Generated with FrostbiteGen by Chod
// File: SDK\TerrainMeshScatteringType.h
// Created: Wed Mar 10 19:00:27 2021
//

#ifndef FBGEN_TerrainMeshScatteringType_H
#define FBGEN_TerrainMeshScatteringType_H

#include "Vec2.h"
#include "QualityScalableFloat.h"
#include "DataContainer.h"

class TerrainMeshScatteringType :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014283ADB0;
	}
	unsigned int m_Identifier; // 0x10
	Vec2 m_MinScale; // 0x14
	Vec2 m_MaxScale; // 0x1c
	float m_ScaleRandomness; // 0x24
	QualityScalableFloat m_Density; // 0x28
	unsigned int m_FirstSpawnLevel; // 0x38
	float m_WindScale; // 0x3c
	float m_Stiffness; // 0x40
	float m_Damping; // 0x44
	float m_Mass; // 0x48
	float m_WindWiggle; // 0x4c
	float m_DissolveRangeRatio; // 0x50
	bool m_UseVertexColorWeights; // 0x54
	unsigned char _0x55[0x3];
}; // size = 0x58

#endif // FBGEN_TerrainMeshScatteringType_H
