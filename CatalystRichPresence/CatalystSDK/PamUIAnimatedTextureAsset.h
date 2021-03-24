//
// Generated with FrostbiteGen by Chod
// File: SDK\PamUIAnimatedTextureAsset.h
// Created: Wed Mar 10 19:03:40 2021
//

#ifndef FBGEN_PamUIAnimatedTextureAsset_H
#define FBGEN_PamUIAnimatedTextureAsset_H

#include "TextureAsset.h"
#include "Array.h"
#include "Asset.h"

class PamUIAnimatedTextureAsset :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142878900;
	}
	float m_FrameRate; // 0x18
	unsigned char _0x1c[0x4];
	TextureAsset* m_TextureAtlas; // 0x20
	Array<PamUITextureAtlasInfo> m_TextureInfos; // 0x28
}; // size = 0x30

#endif // FBGEN_PamUIAnimatedTextureAsset_H
