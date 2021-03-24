//
// Generated with FrostbiteGen by Chod
// File: SDK\PamUIDynamicElementEntityData.h
// Created: Wed Mar 10 19:03:37 2021
//

#ifndef FBGEN_PamUIDynamicElementEntityData_H
#define FBGEN_PamUIDynamicElementEntityData_H

#include "PamUIEdgeSnappings.h"
#include "UIElementEntityData.h"

class PamUIDynamicElementEntityData :
	public UIElementEntityData // size = 0xe0
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142889440;
	}
	float m_Width; // 0xe0
	float m_Height; // 0xe4
	PamUIEdgeSnappings m_EdgeSnapping; // 0xe8
	float m_PaddingLeft; // 0xf8
	float m_PaddingRight; // 0xfc
	float m_PaddingTop; // 0x100
	float m_PaddingBottom; // 0x104
	unsigned char _0x108[0x8];
}; // size = 0x110

#endif // FBGEN_PamUIDynamicElementEntityData_H
