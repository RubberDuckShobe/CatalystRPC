//
// Generated with FrostbiteGen by Chod
// File: SDK\ViewDefinition.h
// Created: Wed Mar 10 18:59:15 2021
//

#ifndef FBGEN_ViewDefinition_H
#define FBGEN_ViewDefinition_H

#include "LocalPlayerViewId.h"
#include "ViewDefinitionType.h"
struct ViewDefinition
{
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142816080;
	}
	LocalPlayerViewId m_ViewId; // 0x0
	ViewDefinitionType m_ViewType; // 0x4
	unsigned int m_ScreenIndex; // 0x8
	float m_OffsetX; // 0xc
	float m_OffsetY; // 0x10
	float m_Width; // 0x14
	float m_Height; // 0x18
	float m_FovScale; // 0x1c
	bool m_NormalizedSize; // 0x20
	unsigned char _0x21[0x3];
}; // size = 0x24

#endif // FBGEN_ViewDefinition_H
