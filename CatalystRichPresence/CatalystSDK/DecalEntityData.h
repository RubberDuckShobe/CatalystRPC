//
// Generated with FrostbiteGen by Chod
// File: SDK\DecalEntityData.h
// Created: Wed Mar 10 19:07:16 2021
//

#ifndef FBGEN_DecalEntityData_H
#define FBGEN_DecalEntityData_H

#include "DecalType.h"
#include "DecalAtlasTile.h"
#include "SurfaceShaderInstanceDataStruct.h"
#include "SpatialEntityData.h"

class DecalEntityData :
	public SpatialEntityData // size = 0x60
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142810AA0;
	}
	DecalType m_DecalType; // 0x60
	DecalAtlasTile m_AtlasTile; // 0x64
	SurfaceShaderInstanceDataStruct m_Shader; // 0x78
	float m_ClipAngle; // 0xa0
	unsigned char m_SortingPriority; // 0xa4
	bool m_Enabled; // 0xa5
	unsigned char _0xa6[0xa];
}; // size = 0xb0

#endif // FBGEN_DecalEntityData_H
