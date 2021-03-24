//
// Generated with FrostbiteGen by Chod
// File: SDK\MaterialParameters.h
// Created: Wed Mar 10 19:06:01 2021
//

#ifndef FBGEN_MaterialParameters_H
#define FBGEN_MaterialParameters_H

#include "SurfaceShaderInstanceDataStruct.h"
#include "Array.h"
struct MaterialParameters
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427B4E70;
	}
	const char* m_MaterialName; // 0x0
	Array<AppearanceShaderPreset*> m_AppearanceShaderPresets; // 0x8
	Array<const char*> m_WeakAppearanceShaderPresetRefs; // 0x10
	SurfaceShaderInstanceDataStruct m_ShaderParameters; // 0x18
	Array<WeakTextureRefParameter> m_WeakTextureRefParameters; // 0x40
}; // size = 0x48

#endif // FBGEN_MaterialParameters_H
