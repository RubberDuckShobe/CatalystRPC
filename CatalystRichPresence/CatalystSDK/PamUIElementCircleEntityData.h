//
// Generated with FrostbiteGen by Chod
// File: SDK\PamUIElementCircleEntityData.h
// Created: Wed Mar 10 19:03:36 2021
//

#ifndef FBGEN_PamUIElementCircleEntityData_H
#define FBGEN_PamUIElementCircleEntityData_H

#include "PamUIBlendMode.h"
#include "UIBlendMode.h"
#include "PamUIDynamicElementEntityData.h"

class PamUIElementCircleEntityData :
	public PamUIDynamicElementEntityData // size = 0x110
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142888D20;
	}
	float m_BarWidth; // 0x110
	float m_BarRadius; // 0x114
	float m_ExtraGeometry; // 0x118
	float m_RampWidth; // 0x11c
	PamUIBlendMode* m_BlendMode; // 0x120
	UIBlendMode m_CoreBlendMode; // 0x128
	bool m_ScreenSpaceRampWidth; // 0x12c
	unsigned char _0x12d[0x3];
}; // size = 0x130

#endif // FBGEN_PamUIElementCircleEntityData_H
