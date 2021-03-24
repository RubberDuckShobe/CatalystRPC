//
// Generated with FrostbiteGen by Chod
// File: SDK\BreakableModelEntityData.h
// Created: Wed Mar 10 19:08:24 2021
//

#ifndef FBGEN_BreakableModelEntityData_H
#define FBGEN_BreakableModelEntityData_H

#include "SurfaceShaderBaseAsset.h"
#include "MeshAsset.h"
#include "EdgeModelLightMapData.h"
#include "GamePhysicsEntityData.h"

class BreakableModelEntityData :
	public GamePhysicsEntityData // size = 0x90
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D7080;
	}
	SurfaceShaderBaseAsset* m_DecalVolumeShader; // 0x90
	float m_DecalVolumeScaleFactor; // 0x98
	unsigned char _0x9c[0x4];
	MeshAsset* m_Mesh; // 0xa0
	unsigned int m_BoneCount; // 0xa8
	unsigned char _0xac[0x4];
	EdgeModelLightMapData* m_EdgeModelLightMapData; // 0xb0
	unsigned char _0xb8[0x8];
}; // size = 0xc0

#endif // FBGEN_BreakableModelEntityData_H
