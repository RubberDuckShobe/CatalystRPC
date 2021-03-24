//
// Generated with FrostbiteGen by Chod
// File: SDK\ShaderParameter.h
// Created: Wed Mar 10 19:01:33 2021
//

#ifndef FBGEN_ShaderParameter_H
#define FBGEN_ShaderParameter_H

#include "DataContainer.h"

class ShaderParameter :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142825F70;
	}
	const char* m_ParameterName; // 0x10
}; // size = 0x18

#endif // FBGEN_ShaderParameter_H
