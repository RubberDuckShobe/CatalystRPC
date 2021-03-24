//
// Generated with FrostbiteGen by Chod
// File: SDK\SurfaceShaderInstanceDataStruct.h
// Created: Wed Mar 10 19:00:39 2021
//

#ifndef FBGEN_SurfaceShaderInstanceDataStruct_H
#define FBGEN_SurfaceShaderInstanceDataStruct_H

#include "SurfaceShaderBaseAsset.h"
#include "Array.h"
struct SurfaceShaderInstanceDataStruct
{
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142837A80;
	}
	SurfaceShaderBaseAsset* m_Shader; // 0x0
	Array<BoolShaderParameter> m_BoolParameters; // 0x8
	Array<VectorShaderParameter> m_VectorParameters; // 0x10
	Array<VectorArrayShaderParameter> m_VectorArrayParameters; // 0x18
	Array<TextureShaderParameter> m_TextureParameters; // 0x20
}; // size = 0x28

#endif // FBGEN_SurfaceShaderInstanceDataStruct_H
