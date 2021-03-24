//
// Generated with FrostbiteGen by Chod
// File: SDK\TerrainDynamicDecalTemplateData.h
// Created: Wed Mar 10 19:00:29 2021
//

#ifndef FBGEN_TerrainDynamicDecalTemplateData_H
#define FBGEN_TerrainDynamicDecalTemplateData_H

#include "HeightfieldDecalAsset.h"
#include "SurfaceShaderInstanceDataStruct.h"
#include "Asset.h"

class TerrainDynamicDecalTemplateData :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014283AAB0;
	}
	float m_Width; // 0x18
	float m_RelativeWidthDeviation; // 0x1c
	float m_Depth; // 0x20
	float m_RelativeDepthDeviation; // 0x24
	float m_RotationRandomAmount; // 0x28
	float m_SlopeMax; // 0x2c
	HeightfieldDecalAsset* m_DepthMask; // 0x30
	SurfaceShaderInstanceDataStruct m_MaskShader; // 0x38
	SurfaceShaderInstanceDataStruct m_DisplacementShader; // 0x60
	bool m_TangentSpaceEnable; // 0x88
	unsigned char _0x89[0x7];
}; // size = 0x90

#endif // FBGEN_TerrainDynamicDecalTemplateData_H
