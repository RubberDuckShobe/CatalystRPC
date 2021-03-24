//
// Generated with FrostbiteGen by Chod
// File: SDK\TerrainFillDecalData.h
// Created: Wed Mar 10 19:00:29 2021
//

#ifndef FBGEN_TerrainFillDecalData_H
#define FBGEN_TerrainFillDecalData_H

#include "SurfaceShaderBaseAsset.h"
#include "VisualVectorShapeData.h"

class TerrainFillDecalData :
	public VisualVectorShapeData // size = 0x40
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014283A870;
	}
	SurfaceShaderBaseAsset* m_Shader2d; // 0x40
	SurfaceShaderBaseAsset* m_Shader2dMeshScatteringMask; // 0x48
	SurfaceShaderBaseAsset* m_Shader3dZOnly; // 0x50
}; // size = 0x58

#endif // FBGEN_TerrainFillDecalData_H
