//
// Generated with FrostbiteGen by Chod
// File: SDK\TerrainQuadDecalData.h
// Created: Wed Mar 10 19:00:26 2021
//

#ifndef FBGEN_TerrainQuadDecalData_H
#define FBGEN_TerrainQuadDecalData_H

#include "Vec4.h"
#include "SurfaceShaderBaseAsset.h"
#include "TerrainQuadDecalAtlasTileTemplateData.h"
#include "TerrainQuadDecalAtlasTile.h"
#include "VisualVectorShapeData.h"

class TerrainQuadDecalData :
	public VisualVectorShapeData // size = 0x40
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014283A7B0;
	}
	SurfaceShaderBaseAsset* m_Shader2d; // 0x40
	unsigned char _0x48[0x8];
	Vec4 m_UserMasks; // 0x50
	SurfaceShaderBaseAsset* m_Shader2dMeshScatteringMask; // 0x60
	SurfaceShaderBaseAsset* m_Shader3dZOnly; // 0x68
	SurfaceShaderBaseAsset* m_Shader2dDisplacement; // 0x70
	TerrainQuadDecalAtlasTileTemplateData* m_AtlasTileTemplate; // 0x78
	TerrainQuadDecalAtlasTile m_AtlasTile; // 0x80
	bool m_StickToTerrain; // 0x94
	bool m_TangentSpaceEnable; // 0x95
	unsigned char _0x96[0xa];
}; // size = 0xa0

#endif // FBGEN_TerrainQuadDecalData_H
