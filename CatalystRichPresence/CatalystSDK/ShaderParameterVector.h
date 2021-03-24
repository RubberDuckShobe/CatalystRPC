//
// Generated with FrostbiteGen by Chod
// File: SDK\ShaderParameterVector.h
// Created: Wed Mar 10 19:01:32 2021
//

#ifndef FBGEN_ShaderParameterVector_H
#define FBGEN_ShaderParameterVector_H

#include "Vec4.h"
struct ShaderParameterVector
{
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142815F60;
	}
	Vec4 m_Value; // 0x0
	const char* m_ParameterName; // 0x10
	unsigned char _0x18[0x8];
}; // size = 0x20

#endif // FBGEN_ShaderParameterVector_H
