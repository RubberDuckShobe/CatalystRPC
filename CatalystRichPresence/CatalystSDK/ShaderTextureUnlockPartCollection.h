//
// Generated with FrostbiteGen by Chod
// File: SDK\ShaderTextureUnlockPartCollection.h
// Created: Wed Mar 10 19:01:29 2021
//

#ifndef FBGEN_ShaderTextureUnlockPartCollection_H
#define FBGEN_ShaderTextureUnlockPartCollection_H

#include "TextureReference.h"
#include "Array.h"
#include "ShaderCustomizationUnlockPartCollection.h"

class ShaderTextureUnlockPartCollection :
	public ShaderCustomizationUnlockPartCollection // size = 0x28
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142811880;
	}
	TextureReference* m_DefaultTextureReference; // 0x28
	Array<TextureUnlockPartData*> m_UnlockParts; // 0x30
}; // size = 0x38

#endif // FBGEN_ShaderTextureUnlockPartCollection_H
