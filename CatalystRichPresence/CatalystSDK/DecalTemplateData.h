//
// Generated with FrostbiteGen by Chod
// File: SDK\DecalTemplateData.h
// Created: Wed Mar 10 19:07:16 2021
//

#ifndef FBGEN_DecalTemplateData_H
#define FBGEN_DecalTemplateData_H

#include "DecalAtlasTile.h"
#include "SurfaceShaderInstanceDataStruct.h"
#include "DecalType.h"
#include "Asset.h"

class DecalTemplateData :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142834910;
	}
	float m_Size; // 0x18
	float m_RandomSize; // 0x1c
	float m_Rotation; // 0x20
	float m_RandomRotation; // 0x24
	float m_ClipAngle; // 0x28
	float m_ProximityRadiusFactor; // 0x2c
	float m_NormalOffset; // 0x30
	DecalAtlasTile m_AtlasTile; // 0x34
	SurfaceShaderInstanceDataStruct m_Shader; // 0x48
	DecalType m_DecalType; // 0x70
	int m_MeshUVIndex; // 0x74
	unsigned char m_SortingPriority; // 0x78
	bool m_ProjectMultiple; // 0x79
	unsigned char _0x7a[0x6];
}; // size = 0x80

#endif // FBGEN_DecalTemplateData_H
