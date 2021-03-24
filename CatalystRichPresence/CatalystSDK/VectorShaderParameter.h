//
// Generated with FrostbiteGen by Chod
// File: SDK\VectorShaderParameter.h
// Created: Wed Mar 10 18:59:24 2021
//

#ifndef FBGEN_VectorShaderParameter_H
#define FBGEN_VectorShaderParameter_H

#include "Vec4.h"
#include "ShaderParameterType.h"
struct VectorShaderParameter
{
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142837BC0;
	}
	Vec4 m_Value; // 0x0
	const char* m_ParameterName; // 0x10
	ShaderParameterType m_ParameterType; // 0x18
	unsigned char _0x1c[0x4];
}; // size = 0x20

#endif // FBGEN_VectorShaderParameter_H
