//
// Generated with FrostbiteGen by Chod
// File: SDK\ColorShaderParameter.h
// Created: Wed Mar 10 19:07:39 2021
//

#ifndef FBGEN_ColorShaderParameter_H
#define FBGEN_ColorShaderParameter_H

#include "Vec4ShaderParameter.h"

class ColorShaderParameter :
	public Vec4ShaderParameter // size = 0x30
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142825EB0;
	}
	int m_PaletteIndex; // 0x30
	unsigned char _0x34[0xc];
}; // size = 0x40

#endif // FBGEN_ColorShaderParameter_H
