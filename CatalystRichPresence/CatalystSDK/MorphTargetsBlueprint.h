//
// Generated with FrostbiteGen by Chod
// File: SDK\MorphTargetsBlueprint.h
// Created: Wed Mar 10 19:05:46 2021
//

#ifndef FBGEN_MorphTargetsBlueprint_H
#define FBGEN_MorphTargetsBlueprint_H

#include "MeshAsset.h"
#include "ModelAssetType.h"
#include "Blueprint.h"

class MorphTargetsBlueprint :
	public Blueprint // size = 0x40
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142825A90;
	}
	MeshAsset* m_Mesh; // 0x40
	ModelAssetType m_ModelAssetType; // 0x48
	unsigned char _0x4c[0x4];
}; // size = 0x50

#endif // FBGEN_MorphTargetsBlueprint_H
