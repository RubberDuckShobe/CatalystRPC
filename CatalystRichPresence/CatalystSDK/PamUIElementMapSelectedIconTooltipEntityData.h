//
// Generated with FrostbiteGen by Chod
// File: SDK\PamUIElementMapSelectedIconTooltipEntityData.h
// Created: Wed Mar 10 19:03:34 2021
//

#ifndef FBGEN_PamUIElementMapSelectedIconTooltipEntityData_H
#define FBGEN_PamUIElementMapSelectedIconTooltipEntityData_H

#include "LinearTransform.h"
#include "Vec2.h"
#include "PamUIBlendMode.h"
#include "PamUIDynamicElementEntityData.h"

class PamUIElementMapSelectedIconTooltipEntityData :
	public PamUIDynamicElementEntityData // size = 0x110
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142888900;
	}
	LinearTransform m_CameraTransform; // 0x110
	float m_RampWidth; // 0x150
	float m_ExtraGeometry; // 0x154
	Vec2 m_TooltipOffset; // 0x158
	float m_FOV; // 0x160
	float m_NearPlane; // 0x164
	float m_FarPlane; // 0x168
	unsigned char _0x16c[0x4];
	PamUIBlendMode* m_BlendMode; // 0x170
	bool m_CityAlertActive; // 0x178
	unsigned char _0x179[0x7];
}; // size = 0x180

#endif // FBGEN_PamUIElementMapSelectedIconTooltipEntityData_H
