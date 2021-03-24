//
// Generated with FrostbiteGen by Chod
// File: SDK\MeshVariationDatabaseRedirectEntry.h
// Created: Wed Mar 10 19:05:53 2021
//

#ifndef FBGEN_MeshVariationDatabaseRedirectEntry_H
#define FBGEN_MeshVariationDatabaseRedirectEntry_H

#include "MeshAsset.h"
struct MeshVariationDatabaseRedirectEntry
{
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142834050;
	}
	MeshAsset* m_Mesh; // 0x0
	unsigned int m_VariationAssetNameHash; // 0x8
	unsigned char _0xc[0x4];
}; // size = 0x10

#endif // FBGEN_MeshVariationDatabaseRedirectEntry_H
