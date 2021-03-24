//
// Generated with FrostbiteGen by Chod
// File: SDK\AppearanceShaderParameter.h
// Created: Wed Mar 10 19:08:40 2021
//

#ifndef FBGEN_AppearanceShaderParameter_H
#define FBGEN_AppearanceShaderParameter_H

#include "DataContainer.h"

class AppearanceShaderParameter :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427B52B0;
	}
	const char* m_PropertyPrefix; // 0x10
	const char* m_PropertyName; // 0x18
	const char* m_MaterialName; // 0x20
	const char* m_ParameterName; // 0x28
	int m_ValueIndex; // 0x30
	unsigned char _0x34[0x4];
}; // size = 0x38

#endif // FBGEN_AppearanceShaderParameter_H
