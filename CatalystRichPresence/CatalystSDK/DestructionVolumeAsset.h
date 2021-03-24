//
// Generated with FrostbiteGen by Chod
// File: SDK\DestructionVolumeAsset.h
// Created: Wed Mar 10 19:07:13 2021
//

#ifndef FBGEN_DestructionVolumeAsset_H
#define FBGEN_DestructionVolumeAsset_H

#include "TextureAsset.h"
#include "Asset.h"

class DestructionVolumeAsset :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142842AF0;
	}
	TextureAsset* m_DiffuseAtlas; // 0x18
	TextureAsset* m_NormalmapAtlas; // 0x20
	float m_AtlasTextureScale; // 0x28
	unsigned char _0x2c[0x4];
}; // size = 0x30

#endif // FBGEN_DestructionVolumeAsset_H
