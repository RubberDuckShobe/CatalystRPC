//
// Generated with FrostbiteGen by Chod
// File: SDK\TexShaderParameter.h
// Created: Wed Mar 10 19:00:24 2021
//

#ifndef FBGEN_TexShaderParameter_H
#define FBGEN_TexShaderParameter_H

#include "TextureAsset.h"
#include "ShaderParameter.h"

class TexShaderParameter :
	public ShaderParameter // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142825E50;
	}
	TextureAsset* m_Texture; // 0x18
}; // size = 0x20

#endif // FBGEN_TexShaderParameter_H
