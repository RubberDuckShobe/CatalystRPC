//
// Generated with FrostbiteGen by Chod
// File: SDK\CustomShaderValueParameter.h
// Created: Wed Mar 10 19:07:22 2021
//

#ifndef FBGEN_CustomShaderValueParameter_H
#define FBGEN_CustomShaderValueParameter_H

#include "Vec4.h"
#include "ShaderValueType.h"
struct CustomShaderValueParameter
{
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142837B40;
	}
	Vec4 m_DefaultValue; // 0x0
	const char* m_Name; // 0x10
	ShaderValueType m_ValueType; // 0x18
	unsigned char _0x1c[0x4];
}; // size = 0x20

#endif // FBGEN_CustomShaderValueParameter_H
