//
// Generated with FrostbiteGen by Chod
// File: SDK\PamPlayerTagImage.h
// Created: Wed Mar 10 19:04:14 2021
//

#ifndef FBGEN_PamPlayerTagImage_H
#define FBGEN_PamPlayerTagImage_H

#include "TextureAsset.h"
#include "DataContainer.h"

class PamPlayerTagImage :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142878540;
	}
	unsigned int m_Hash; // 0x10
	unsigned char _0x14[0x4];
	TextureAsset* m_Texture; // 0x18
	const char* m_TextureId; // 0x20
}; // size = 0x28

#endif // FBGEN_PamPlayerTagImage_H
