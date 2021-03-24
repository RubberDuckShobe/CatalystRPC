//
// Generated with FrostbiteGen by Chod
// File: SDK\ClothAsset.h
// Created: Wed Mar 10 19:07:42 2021
//

#ifndef FBGEN_ClothAsset_H
#define FBGEN_ClothAsset_H

#include "ResourceRef.h"
#include "ClothStatesSetup.h"
#include "Array.h"
#include "Asset.h"

class ClothAsset :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014282D340;
	}
	Array<ClothSectionMapping> m_MeshSectionMappings; // 0x18
	ResourceRef m_HavokClothResource; // 0x20
	ClothStatesSetup m_StatesSetup; // 0x28
	Array<unsigned int> m_DisplayBufferIndices; // 0x50
	Array<unsigned int> m_BoneIndexLookup; // 0x58
	Array<unsigned int> m_SimulatedAndParentBonesLookup; // 0x60
	Array<bool> m_UsedBySimulation; // 0x68
}; // size = 0x70

#endif // FBGEN_ClothAsset_H
