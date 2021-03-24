//
// Generated with FrostbiteGen by Chod
// File: SDK\Vec4AppearanceShaderParameter.h
// Created: Wed Mar 10 18:59:28 2021
//

#ifndef FBGEN_Vec4AppearanceShaderParameter_H
#define FBGEN_Vec4AppearanceShaderParameter_H

#include "Array.h"
#include "AppearanceShaderParameter.h"

class Vec4AppearanceShaderParameter :
	public AppearanceShaderParameter // size = 0x38
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427B51F0;
	}
	Array<Vec4> m_Values; // 0x38
}; // size = 0x40

#endif // FBGEN_Vec4AppearanceShaderParameter_H
