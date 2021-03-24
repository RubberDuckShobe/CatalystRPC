//
// Generated with FrostbiteGen by Chod
// File: SDK\ShaderParameterEntityData.h
// Created: Wed Mar 10 19:01:33 2021
//

#ifndef FBGEN_ShaderParameterEntityData_H
#define FBGEN_ShaderParameterEntityData_H

#include "Vec4.h"
#include "ShaderParameterDataType.h"
#include "EntityData.h"

class ShaderParameterEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142837E20;
	}
	unsigned int m_ParameterHandle; // 0x18
	unsigned char _0x1c[0x4];
	Vec4 m_VecParam; // 0x20
	ShaderParameterDataType m_ParameterType; // 0x30
	bool m_BoolParam; // 0x34
	unsigned char _0x35[0xb];
}; // size = 0x40

#endif // FBGEN_ShaderParameterEntityData_H
