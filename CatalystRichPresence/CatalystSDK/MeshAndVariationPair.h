//
// Generated with FrostbiteGen by Chod
// File: SDK\MeshAndVariationPair.h
// Created: Wed Mar 10 19:05:57 2021
//

#ifndef FBGEN_MeshAndVariationPair_H
#define FBGEN_MeshAndVariationPair_H

#include "MeshAsset.h"
#include "ObjectVariation.h"
#include "ObjectBlueprint.h"

class MeshAndVariationPair :
	public ObjectBlueprint // size = 0x48
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014281EBD0;
	}
	MeshAsset* m_MeshAsset; // 0x48
	ObjectVariation* m_Variation; // 0x50
}; // size = 0x58

#endif // FBGEN_MeshAndVariationPair_H
