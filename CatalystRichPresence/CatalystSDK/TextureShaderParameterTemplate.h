//
// Generated with FrostbiteGen by Chod
// File: SDK\TextureShaderParameterTemplate.h
// Created: Wed Mar 10 19:00:20 2021
//

#ifndef FBGEN_TextureShaderParameterTemplate_H
#define FBGEN_TextureShaderParameterTemplate_H

#include "Array.h"
#include "ShaderParameterTemplate.h"

class TextureShaderParameterTemplate :
	public ShaderParameterTemplate // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142825FD0;
	}
	Array<TextureContainer> m_TextureList; // 0x20
	const char* m_PresentationName; // 0x28
}; // size = 0x30

#endif // FBGEN_TextureShaderParameterTemplate_H
