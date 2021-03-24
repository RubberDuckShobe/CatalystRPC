//
// Generated with FrostbiteGen by Chod
// File: SDK\ClothAssetInstance.h
// Created: Wed Mar 10 19:07:42 2021
//

#ifndef FBGEN_ClothAssetInstance_H
#define FBGEN_ClothAssetInstance_H

#include "ClothObjectBlueprint.h"
#include "DataContainerPolicyAsset.h"

class ClothAssetInstance :
	public DataContainerPolicyAsset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D6330;
	}
	ClothObjectBlueprint* m_Cloth; // 0x18
	bool m_WorldCollision; // 0x20
	unsigned char _0x21[0x7];
}; // size = 0x28

#endif // FBGEN_ClothAssetInstance_H
