//
// Generated with FrostbiteGen by Chod
// File: SDK\Vec4ShaderParameter.h
// Created: Wed Mar 10 18:59:27 2021
//

#ifndef FBGEN_Vec4ShaderParameter_H
#define FBGEN_Vec4ShaderParameter_H

#include "Vec4.h"
#include "ShaderParameter.h"

class Vec4ShaderParameter :
	public ShaderParameter // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142825F10;
	}
	unsigned char _0x18[0x8];
	Vec4 m_Value; // 0x20
}; // size = 0x30

#endif // FBGEN_Vec4ShaderParameter_H
