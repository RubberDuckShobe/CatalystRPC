//
// Generated with FrostbiteGen by Chod
// File: SDK\VectorArrayShaderParameter.h
// Created: Wed Mar 10 18:59:25 2021
//

#ifndef FBGEN_VectorArrayShaderParameter_H
#define FBGEN_VectorArrayShaderParameter_H

#include "ShaderParameterType.h"
#include "Array.h"
struct VectorArrayShaderParameter
{
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142837B80;
	}
	const char* m_ParameterName; // 0x0
	ShaderParameterType m_ParameterType; // 0x8
	unsigned char _0xc[0x4];
	Array<Vec4> m_Values; // 0x10
}; // size = 0x18

#endif // FBGEN_VectorArrayShaderParameter_H
