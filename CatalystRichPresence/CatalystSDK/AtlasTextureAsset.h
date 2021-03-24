//
// Generated with FrostbiteGen by Chod
// File: SDK\AtlasTextureAsset.h
// Created: Wed Mar 10 19:08:38 2021
//

#ifndef FBGEN_AtlasTextureAsset_H
#define FBGEN_AtlasTextureAsset_H

#include "ResourceRef.h"
#include "Asset.h"

class AtlasTextureAsset :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142834A90;
	}
	int m_AnimationColumnCount; // 0x18
	unsigned char _0x1c[0x4];
	ResourceRef m_Resource; // 0x20
	int m_AnimationFrameCount; // 0x28
	unsigned char _0x2c[0x4];
}; // size = 0x30

#endif // FBGEN_AtlasTextureAsset_H
