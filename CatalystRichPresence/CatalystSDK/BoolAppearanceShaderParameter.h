//
// Generated with FrostbiteGen by Chod
// File: SDK\BoolAppearanceShaderParameter.h
// Created: Wed Mar 10 19:08:26 2021
//

#ifndef FBGEN_BoolAppearanceShaderParameter_H
#define FBGEN_BoolAppearanceShaderParameter_H

#include "Array.h"
#include "AppearanceShaderParameter.h"

class BoolAppearanceShaderParameter :
	public AppearanceShaderParameter // size = 0x38
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427B5250;
	}
	Array<bool> m_Values; // 0x38
}; // size = 0x40

#endif // FBGEN_BoolAppearanceShaderParameter_H
