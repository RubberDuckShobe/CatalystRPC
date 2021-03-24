//
// Generated with FrostbiteGen by Chod
// File: SDK\RoadData.h
// Created: Wed Mar 10 19:02:35 2021
//

#ifndef FBGEN_RoadData_H
#define FBGEN_RoadData_H

#include "SurfaceShaderBaseAsset.h"
#include "RibbonData.h"

class RoadData :
	public RibbonData // size = 0x48
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014283A990;
	}
	SurfaceShaderBaseAsset* m_Shader2d; // 0x48
	SurfaceShaderBaseAsset* m_Shader2dMeshScatteringMask; // 0x50
	SurfaceShaderBaseAsset* m_Shader3dZOnly; // 0x58
	SurfaceShaderBaseAsset* m_Shader2dDisplacement; // 0x60
	float m_UvTileFactor; // 0x68
	bool m_StickToTerrain; // 0x6c
	bool m_TangentSpaceEnable; // 0x6d
	unsigned char _0x6e[0x2];
}; // size = 0x70

#endif // FBGEN_RoadData_H
