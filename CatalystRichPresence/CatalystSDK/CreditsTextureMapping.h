//
// Generated with FrostbiteGen by Chod
// File: SDK\CreditsTextureMapping.h
// Created: Wed Mar 10 19:07:28 2021
//

#ifndef FBGEN_CreditsTextureMapping_H
#define FBGEN_CreditsTextureMapping_H

#include "TextureAsset.h"
#include "Vec2.h"
struct CreditsTextureMapping
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428888E0;
	}
	const char* m_TextureName; // 0x0
	TextureAsset* m_Texture; // 0x8
	Vec2 m_TextureSize; // 0x10
}; // size = 0x18

#endif // FBGEN_CreditsTextureMapping_H
