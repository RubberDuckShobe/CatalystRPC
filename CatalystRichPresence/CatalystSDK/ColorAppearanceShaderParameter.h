//
// Generated with FrostbiteGen by Chod
// File: SDK\ColorAppearanceShaderParameter.h
// Created: Wed Mar 10 19:07:40 2021
//

#ifndef FBGEN_ColorAppearanceShaderParameter_H
#define FBGEN_ColorAppearanceShaderParameter_H

#include "Array.h"
#include "AppearanceShaderParameter.h"

class ColorAppearanceShaderParameter :
	public AppearanceShaderParameter // size = 0x38
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427B5190;
	}
	Array<Vec4> m_Values; // 0x38
}; // size = 0x40

#endif // FBGEN_ColorAppearanceShaderParameter_H
