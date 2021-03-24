//
// Generated with FrostbiteGen by Chod
// File: SDK\ChannelShaderParameterTemplate.h
// Created: Wed Mar 10 19:08:18 2021
//

#ifndef FBGEN_ChannelShaderParameterTemplate_H
#define FBGEN_ChannelShaderParameterTemplate_H

#include "Vec4.h"
#include "ShaderParameterTemplate.h"

class ChannelShaderParameterTemplate :
	public ShaderParameterTemplate // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142826090;
	}
	Vec4 m_Default; // 0x20
	const char* m_PresentationName; // 0x30
	bool m_AlphaEnabled; // 0x38
	unsigned char _0x39[0x7];
}; // size = 0x40

#endif // FBGEN_ChannelShaderParameterTemplate_H
