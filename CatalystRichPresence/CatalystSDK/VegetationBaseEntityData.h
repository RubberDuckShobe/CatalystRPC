//
// Generated with FrostbiteGen by Chod
// File: SDK\VegetationBaseEntityData.h
// Created: Wed Mar 10 18:59:24 2021
//

#ifndef FBGEN_VegetationBaseEntityData_H
#define FBGEN_VegetationBaseEntityData_H

#include "Array.h"
#include "MeshAsset.h"
#include "SkinnedMeshAsset.h"
#include "PhysicsEntityData.h"
#include "GameComponentEntityData.h"

class VegetationBaseEntityData :
	public GameComponentEntityData // size = 0x80
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014283FCC0;
	}
	Array<LinearTransform> m_BasePoseTransforms; // 0x80
	Array<int> m_Hierarchy; // 0x88
	Array<int> m_PartIndirection; // 0x90
	Array<int> m_PartHierarchy; // 0x98
	Array<float> m_PartInitialHealths; // 0xa0
	Array<bool> m_BoneIsStem; // 0xa8
	MeshAsset* m_Mesh; // 0xb0
	SkinnedMeshAsset* m_ShadowMesh; // 0xb8
	PhysicsEntityData* m_PhysicsData; // 0xc0
	unsigned char _0xc8[0x8];
}; // size = 0xd0

#endif // FBGEN_VegetationBaseEntityData_H
