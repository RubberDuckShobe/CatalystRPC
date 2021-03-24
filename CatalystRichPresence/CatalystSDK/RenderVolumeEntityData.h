//
// Generated with FrostbiteGen by Chod
// File: SDK\RenderVolumeEntityData.h
// Created: Wed Mar 10 19:02:37 2021
//

#ifndef FBGEN_RenderVolumeEntityData_H
#define FBGEN_RenderVolumeEntityData_H

#include "Vec4.h"
#include "SurfaceShaderInstanceDataStruct.h"
#include "RenderVolumeTransformType.h"
#include "SpatialEntityData.h"

class RenderVolumeEntityData :
	public SpatialEntityData // size = 0x60
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428426D0;
	}
	Vec4 m_UserMasks; // 0x60
	SurfaceShaderInstanceDataStruct m_Shader; // 0x70
	RenderVolumeTransformType m_TransformType; // 0x98
	bool m_Enabled; // 0x9c
	unsigned char _0x9d[0x3];
}; // size = 0xa0

#endif // FBGEN_RenderVolumeEntityData_H
