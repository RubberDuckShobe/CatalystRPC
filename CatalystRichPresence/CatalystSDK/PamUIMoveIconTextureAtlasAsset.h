//
// Generated with FrostbiteGen by Chod
// File: SDK\PamUIMoveIconTextureAtlasAsset.h
// Created: Wed Mar 10 19:03:26 2021
//

#ifndef FBGEN_PamUIMoveIconTextureAtlasAsset_H
#define FBGEN_PamUIMoveIconTextureAtlasAsset_H

#include "AntRef.h"
#include "Array.h"
#include "TextureAsset.h"
#include "Asset.h"

class PamUIMoveIconTextureAtlasAsset :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428789C0;
	}
	AntRef m_MoveEnumAsset; // 0x18
	unsigned char _0x2c[0x4];
	Array<PamUIMoveIcon> m_Moves; // 0x30
	TextureAsset* m_TextureAtlas; // 0x38
	bool m_OnDemandEnable; // 0x40
	unsigned char _0x41[0x7];
}; // size = 0x48

#endif // FBGEN_PamUIMoveIconTextureAtlasAsset_H
