//
// Generated with FrostbiteGen by Chod
// File: SDK\VisualVectorShapeData.h
// Created: Wed Mar 10 18:59:11 2021
//

#ifndef FBGEN_VisualVectorShapeData_H
#define FBGEN_VisualVectorShapeData_H

#include "SurfaceShaderBaseAsset.h"
#include "VectorShapeData.h"

class VisualVectorShapeData :
	public VectorShapeData // size = 0x28
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014283AA50;
	}
	float m_ErrorTolerance; // 0x28
	unsigned char _0x2c[0x4];
	SurfaceShaderBaseAsset* m_Shader3d; // 0x30
	unsigned int m_DrawOrderIndex; // 0x38
	float m_TessellationTriangleSize; // 0x3c
}; // size = 0x40

#endif // FBGEN_VisualVectorShapeData_H
