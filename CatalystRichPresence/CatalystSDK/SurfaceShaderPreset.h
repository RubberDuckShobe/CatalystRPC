//
// Generated with FrostbiteGen by Chod
// File: SDK\SurfaceShaderPreset.h
// Created: Wed Mar 10 19:00:39 2021
//

#ifndef FBGEN_SurfaceShaderPreset_H
#define FBGEN_SurfaceShaderPreset_H

#include "SurfaceShaderInstanceDataStruct.h"
#include "SurfaceShaderBaseAsset.h"

class SurfaceShaderPreset :
	public SurfaceShaderBaseAsset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142837EE0;
	}
	SurfaceShaderInstanceDataStruct m_ShaderPreset; // 0x18
}; // size = 0x40

#endif // FBGEN_SurfaceShaderPreset_H
