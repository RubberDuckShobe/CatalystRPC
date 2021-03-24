//
// Generated with FrostbiteGen by Chod
// File: SDK\PamUIElementRadialBarEntityData.h
// Created: Wed Mar 10 19:03:34 2021
//

#ifndef FBGEN_PamUIElementRadialBarEntityData_H
#define FBGEN_PamUIElementRadialBarEntityData_H

#include "PamUIBlendMode.h"
#include "UIBlendMode.h"
#include "PamUIDynamicElementEntityData.h"

class PamUIElementRadialBarEntityData :
	public PamUIDynamicElementEntityData // size = 0x110
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142888CC0;
	}
	float m_BarWidth; // 0x110
	float m_BarRadius; // 0x114
	float m_StartAngle; // 0x118
	float m_EndAngle; // 0x11c
	float m_ExtraGeometry; // 0x120
	float m_RampWidth; // 0x124
	PamUIBlendMode* m_BlendMode; // 0x128
	UIBlendMode m_CoreBlendMode; // 0x130
	bool m_ScreenSpaceRampWidth; // 0x134
	unsigned char _0x135[0xb];
}; // size = 0x140

#endif // FBGEN_PamUIElementRadialBarEntityData_H
