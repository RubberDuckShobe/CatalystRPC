//
// Generated with FrostbiteGen by Chod
// File: SDK\PamUIElementRectangleEntityData.h
// Created: Wed Mar 10 19:03:34 2021
//

#ifndef FBGEN_PamUIElementRectangleEntityData_H
#define FBGEN_PamUIElementRectangleEntityData_H

#include "PamUIElementCornerType.h"
#include "PamUIBlendMode.h"
#include "UIBlendMode.h"
#include "PamUIDynamicElementEntityData.h"

class PamUIElementRectangleEntityData :
	public PamUIDynamicElementEntityData // size = 0x110
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428891A0;
	}
	PamUIElementCornerType m_UpperLeftCornerType; // 0x110
	PamUIElementCornerType m_UpperRightCornerType; // 0x114
	PamUIElementCornerType m_LowerLeftCornerType; // 0x118
	PamUIElementCornerType m_LowerRightCornerType; // 0x11c
	float m_CornerRadius; // 0x120
	float m_InnerCornerRadius; // 0x124
	float m_RampWidth; // 0x128
	float m_ExtraGeometry; // 0x12c
	float m_UpperLeftSkewX; // 0x130
	float m_UpperLeftSkewY; // 0x134
	float m_UpperRightSkewX; // 0x138
	float m_UpperRightSkewY; // 0x13c
	float m_LowerLeftSkewX; // 0x140
	float m_LowerLeftSkewY; // 0x144
	float m_LowerRightSkewX; // 0x148
	float m_LowerRightSkewY; // 0x14c
	PamUIBlendMode* m_BlendMode; // 0x150
	UIBlendMode m_CoreBlendMode; // 0x158
	bool m_ScreenSpaceRampWidth; // 0x15c
	bool m_Fill; // 0x15d
	unsigned char _0x15e[0x2];
}; // size = 0x160

#endif // FBGEN_PamUIElementRectangleEntityData_H
