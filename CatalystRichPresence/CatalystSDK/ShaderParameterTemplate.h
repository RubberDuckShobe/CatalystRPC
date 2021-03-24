//
// Generated with FrostbiteGen by Chod
// File: SDK\ShaderParameterTemplate.h
// Created: Wed Mar 10 19:01:33 2021
//

#ifndef FBGEN_ShaderParameterTemplate_H
#define FBGEN_ShaderParameterTemplate_H

#include "MorphSliderType.h"
#include "DataContainer.h"

class ShaderParameterTemplate :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142826150;
	}
	const char* m_ParameterName; // 0x10
	MorphSliderType m_Category; // 0x18
	unsigned char _0x1c[0x4];
}; // size = 0x20

#endif // FBGEN_ShaderParameterTemplate_H
