//
// Generated with FrostbiteGen by Chod
// File: SDK\ClothEntityData.h
// Created: Wed Mar 10 19:07:41 2021
//

#ifndef FBGEN_ClothEntityData_H
#define FBGEN_ClothEntityData_H

#include "MeshAsset.h"
#include "ClothAsset.h"
#include "QualityScalableFloat.h"
#include "ComponentEntityData.h"

class ClothEntityData :
	public ComponentEntityData // size = 0x70
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D62D0;
	}
	MeshAsset* m_Mesh; // 0x70
	ClothAsset* m_Cloth; // 0x78
	float m_WindScale; // 0x80
	QualityScalableFloat m_ActivationRadius; // 0x84
	QualityScalableFloat m_SmoothBlendOutDistance; // 0x94
	bool m_CharacterLightingEnable; // 0xa4
	bool m_Enabled; // 0xa5
	bool m_WrapOnGPU; // 0xa6
	unsigned char _0xa7[0x9];
}; // size = 0xb0

#endif // FBGEN_ClothEntityData_H
