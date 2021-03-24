//
// Generated with FrostbiteGen by Chod
// File: SDK\PamUIElementGriddedRectangleEntityData.h
// Created: Wed Mar 10 19:03:35 2021
//

#ifndef FBGEN_PamUIElementGriddedRectangleEntityData_H
#define FBGEN_PamUIElementGriddedRectangleEntityData_H

#include "Vec3.h"
#include "PamUIBlendMode.h"
#include "UIBlendMode.h"
#include "PamUIDynamicElementEntityData.h"

class PamUIElementGriddedRectangleEntityData :
	public PamUIDynamicElementEntityData // size = 0x110
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142888BA0;
	}
	Vec3 m_GridColor; // 0x110
	Vec3 m_NoiseColor; // 0x120
	PamUIBlendMode* m_BlendMode; // 0x130
	UIBlendMode m_CoreBlendMode; // 0x138
	float m_GridSize; // 0x13c
	float m_GridVerticalOffset; // 0x140
	float m_GridHorizontalOffset; // 0x144
	float m_GridFuzz; // 0x148
	float m_GridWidth; // 0x14c
	float m_GridFeatherTop; // 0x150
	float m_GridFeatherRight; // 0x154
	float m_GridFeatherBottom; // 0x158
	float m_GridFeatherLeft; // 0x15c
	float m_NoiseRotation; // 0x160
	float m_NoiseVerticalOffset; // 0x164
	float m_NoiseHorizontalOffset; // 0x168
	float m_NoiseSize; // 0x16c
	float m_NoiseBorder; // 0x170
	float m_NoiseFuzz; // 0x174
	float m_NoiseRadius; // 0x178
	float m_NoiseDecayScale; // 0x17c
	float m_NoiseFeatherTop; // 0x180
	float m_NoiseFeatherRight; // 0x184
	float m_NoiseFeatherBottom; // 0x188
	float m_NoiseFeatherLeft; // 0x18c
	float m_UpperLeftSkewX; // 0x190
	float m_UpperLeftSkewY; // 0x194
	float m_UpperRightSkewX; // 0x198
	float m_UpperRightSkewY; // 0x19c
	float m_LowerLeftSkewX; // 0x1a0
	float m_LowerLeftSkewY; // 0x1a4
	float m_LowerRightSkewX; // 0x1a8
	float m_LowerRightSkewY; // 0x1ac
}; // size = 0x1b0

#endif // FBGEN_PamUIElementGriddedRectangleEntityData_H
