//
// Generated with FrostbiteGen by Chod
// File: SDK\DestructionMaskVolumeEntityData.h
// Created: Wed Mar 10 19:07:14 2021
//

#ifndef FBGEN_DestructionMaskVolumeEntityData_H
#define FBGEN_DestructionMaskVolumeEntityData_H

#include "Vec4.h"
#include "SurfaceShaderInstanceDataStruct.h"
#include "SpatialEntityData.h"

class DestructionMaskVolumeEntityData :
	public SpatialEntityData // size = 0x60
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142810B60;
	}
	Vec4 m_DustAccumulationCurve; // 0x60
	Vec4 m_ShaderUserMasks; // 0x70
	float m_Radius; // 0x80
	float m_DustAccumulationLifeTime; // 0x84
	SurfaceShaderInstanceDataStruct m_Shader; // 0x88
}; // size = 0xb0

#endif // FBGEN_DestructionMaskVolumeEntityData_H
