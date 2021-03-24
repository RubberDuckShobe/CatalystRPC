//
// Generated with FrostbiteGen by Chod
// File: SDK\RenderingOverrides.h
// Created: Wed Mar 10 19:02:37 2021
//

#ifndef FBGEN_RenderingOverrides_H
#define FBGEN_RenderingOverrides_H

#include "RenderingOverride.h"
struct RenderingOverrides
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427E4FB0;
	}
	RenderingOverride m_ShadowEnable; // 0x0
	RenderingOverride m_DynamicReflectionEnable; // 0x4
	RenderingOverride m_StaticReflectionEnable; // 0x8
}; // size = 0xc

#endif // FBGEN_RenderingOverrides_H
