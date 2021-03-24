//
// Generated with FrostbiteGen by Chod
// File: SDK\UITextureMappingOutputEntry.h
// Created: Wed Mar 10 18:59:46 2021
//

#ifndef FBGEN_UITextureMappingOutputEntry_H
#define FBGEN_UITextureMappingOutputEntry_H

#include "TextureAsset.h"
#include "Vec2.h"
struct UITextureMappingOutputEntry
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014281DC68;
	}
	const char* m_Id; // 0x0
	TextureAsset* m_Texture; // 0x8
	Vec2 m_Min; // 0x10
	Vec2 m_Max; // 0x18
	bool m_Streaming; // 0x20
	unsigned char _0x21[0x7];
}; // size = 0x28

#endif // FBGEN_UITextureMappingOutputEntry_H
