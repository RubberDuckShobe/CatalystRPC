//
// Generated with FrostbiteGen by Chod
// File: SDK\SliderShaderParameterTemplate.h
// Created: Wed Mar 10 19:01:21 2021
//

#ifndef FBGEN_SliderShaderParameterTemplate_H
#define FBGEN_SliderShaderParameterTemplate_H

#include "Vec4.h"
#include "VectorShaderNumValuesUsed.h"
#include "ShaderParameterTemplate.h"

class SliderShaderParameterTemplate :
	public ShaderParameterTemplate // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428260F0;
	}
	Vec4 m_Default; // 0x20
	float m_Min; // 0x30
	float m_Max; // 0x34
	float m_Step; // 0x38
	VectorShaderNumValuesUsed m_ValuesUsed; // 0x3c
	const char* m_PresentationNameX; // 0x40
	const char* m_PresentationNameY; // 0x48
	const char* m_PresentationNameZ; // 0x50
	const char* m_PresentationNameW; // 0x58
}; // size = 0x60

#endif // FBGEN_SliderShaderParameterTemplate_H
