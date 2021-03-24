//
// Generated with FrostbiteGen by Chod
// File: SDK\MeshVariationDatabaseEntry.h
// Created: Wed Mar 10 19:05:53 2021
//

#ifndef FBGEN_MeshVariationDatabaseEntry_H
#define FBGEN_MeshVariationDatabaseEntry_H

#include "MeshAsset.h"
#include "Array.h"
struct MeshVariationDatabaseEntry
{
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142834070;
	}
	MeshAsset* m_Mesh; // 0x0
	unsigned int m_VariationAssetNameHash; // 0x8
	unsigned char _0xc[0x4];
	Array<MeshVariationDatabaseMaterial> m_Materials; // 0x10
}; // size = 0x18

#endif // FBGEN_MeshVariationDatabaseEntry_H
