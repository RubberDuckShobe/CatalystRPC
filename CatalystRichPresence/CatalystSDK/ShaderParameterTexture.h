//
// Generated with FrostbiteGen by Chod
// File: SDK\ShaderParameterTexture.h
// Created: Wed Mar 10 19:01:33 2021
//

#ifndef FBGEN_ShaderParameterTexture_H
#define FBGEN_ShaderParameterTexture_H

#include "TextureAsset.h"
struct ShaderParameterTexture
{
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142815F40;
	}
	const char* m_ParameterName; // 0x0
	TextureAsset* m_Texture; // 0x8
}; // size = 0x10

#endif // FBGEN_ShaderParameterTexture_H
