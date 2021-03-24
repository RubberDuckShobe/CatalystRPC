//
// Generated with FrostbiteGen by Chod
// File: SDK\ColorShaderParameterTemplate.h
// Created: Wed Mar 10 19:07:39 2021
//

#ifndef FBGEN_ColorShaderParameterTemplate_H
#define FBGEN_ColorShaderParameterTemplate_H

#include "ColorPalette.h"
#include "ShaderParameterTemplate.h"

class ColorShaderParameterTemplate :
	public ShaderParameterTemplate // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142826030;
	}
	ColorPalette* m_Colors; // 0x20
	int m_Default; // 0x28
	unsigned char _0x2c[0x4];
	const char* m_PresentationName; // 0x30
}; // size = 0x38

#endif // FBGEN_ColorShaderParameterTemplate_H
