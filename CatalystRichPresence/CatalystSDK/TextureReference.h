//
// Generated with FrostbiteGen by Chod
// File: SDK\TextureReference.h
// Created: Wed Mar 10 19:00:21 2021
//

#ifndef FBGEN_TextureReference_H
#define FBGEN_TextureReference_H

#include "TextureAsset.h"
#include "Asset.h"

class TextureReference :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142811C40;
	}
	TextureAsset* m_Texture; // 0x18
}; // size = 0x20

#endif // FBGEN_TextureReference_H
