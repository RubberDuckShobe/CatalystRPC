//
// Generated with FrostbiteGen by Chod
// File: SDK\TextureReferenceAppearanceShaderParameter.h
// Created: Wed Mar 10 19:00:21 2021
//

#ifndef FBGEN_TextureReferenceAppearanceShaderParameter_H
#define FBGEN_TextureReferenceAppearanceShaderParameter_H

#include "Array.h"
#include "AppearanceShaderParameter.h"

class TextureReferenceAppearanceShaderParameter :
	public AppearanceShaderParameter // size = 0x38
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427B50D0;
	}
	Array<TextureAsset*> m_Values; // 0x38
}; // size = 0x40

#endif // FBGEN_TextureReferenceAppearanceShaderParameter_H
