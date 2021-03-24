//
// Generated with FrostbiteGen by Chod
// File: SDK\TextureAsset.h
// Created: Wed Mar 10 19:00:23 2021
//

#ifndef FBGEN_TextureAsset_H
#define FBGEN_TextureAsset_H

#include "GenerateMipmapsFilterType.h"
#include "TextureBaseAsset.h"

class TextureAsset :
	public TextureBaseAsset // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142834B50;
	}
	GenerateMipmapsFilterType m_GenerateMipmapsFilter; // 0x20
	unsigned char _0x24[0x4];
}; // size = 0x28

#endif // FBGEN_TextureAsset_H
