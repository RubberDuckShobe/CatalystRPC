//
// Generated with FrostbiteGen by Chod
// File: SDK\ShaderParameterComponentData.h
// Created: Wed Mar 10 19:01:33 2021
//

#ifndef FBGEN_ShaderParameterComponentData_H
#define FBGEN_ShaderParameterComponentData_H

#include "Array.h"
#include "GameComponentData.h"

class ShaderParameterComponentData :
	public GameComponentData // size = 0x70
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428166E0;
	}
	Array<ShaderParameterVector> m_ShaderParameterVectors; // 0x70
	Array<ShaderParameterTexture> m_ShaderParameterTexture; // 0x78
}; // size = 0x80

#endif // FBGEN_ShaderParameterComponentData_H
