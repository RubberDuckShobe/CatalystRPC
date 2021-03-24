//
// Generated with FrostbiteGen by Chod
// File: SDK\AppearanceShaderPreset.h
// Created: Wed Mar 10 19:08:40 2021
//

#ifndef FBGEN_AppearanceShaderPreset_H
#define FBGEN_AppearanceShaderPreset_H

#include "Array.h"
#include "SurfaceShaderPreset.h"

class AppearanceShaderPreset :
	public SurfaceShaderPreset // size = 0x40
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427B5550;
	}
	Array<TextureBaseAsset*> m_TextureAssets; // 0x40
	Array<WeakTextureRefParameter> m_WeakTextureRefParameters; // 0x48
}; // size = 0x50

#endif // FBGEN_AppearanceShaderPreset_H
