//
// Generated with FrostbiteGen by Chod
// File: SDK\MeshMaterial.h
// Created: Wed Mar 10 19:05:55 2021
//

#ifndef FBGEN_MeshMaterial_H
#define FBGEN_MeshMaterial_H

#include "SurfaceShaderInstanceData.h"
#include "SurfaceShaderInstanceDataStruct.h"
#include "ShaderTessellationType.h"
#include "TextureBaseAsset.h"
#include "DataContainer.h"

class MeshMaterial :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142834310;
	}
	SurfaceShaderInstanceData* m_ShaderInstance; // 0x10
	SurfaceShaderInstanceDataStruct m_Shader; // 0x18
	ShaderTessellationType m_TessellationType; // 0x40
	float m_TessellationTriangleSize; // 0x44
	float m_TessellationMaxDistance; // 0x48
	float m_BackFaceCullEpsilon; // 0x4c
	float m_ShapeFactor; // 0x50
	unsigned char _0x54[0x4];
	TextureBaseAsset* m_DisplacementMap; // 0x58
	float m_DisplacementScale; // 0x60
	float m_DisplacementBias; // 0x64
	unsigned int m_DisplacementMapTexCoord; // 0x68
	bool m_CastShadow; // 0x6c
	bool m_SmoothEdgeVertices; // 0x6d
	bool m_DisplacementObjectScale; // 0x6e
	unsigned char _0x6f[0x1];
}; // size = 0x70

#endif // FBGEN_MeshMaterial_H
