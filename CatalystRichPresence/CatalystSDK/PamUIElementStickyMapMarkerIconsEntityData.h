//
// Generated with FrostbiteGen by Chod
// File: SDK\PamUIElementStickyMapMarkerIconsEntityData.h
// Created: Wed Mar 10 19:03:32 2021
//

#ifndef FBGEN_PamUIElementStickyMapMarkerIconsEntityData_H
#define FBGEN_PamUIElementStickyMapMarkerIconsEntityData_H

#include "PamUIMapMarkerStickyIconStyle.h"
#include "DiceUIVectorShapeAsset.h"
#include "Vec2.h"
#include "PamUIBlendMode.h"
#include "PamUIDynamicElementEntityData.h"

class PamUIElementStickyMapMarkerIconsEntityData :
	public PamUIDynamicElementEntityData // size = 0x110
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142888D80;
	}
	PamUIMapMarkerStickyIconStyle* m_RunnersVisionIconStyle; // 0x110
	DiceUIVectorShapeAsset* m_RunnersVisionArrow; // 0x118
	DiceUIVectorShapeAsset* m_DefaultArrow; // 0x120
	Vec2 m_DefaultArrowSize; // 0x128
	float m_ArrowDeadZone; // 0x130
	float m_Border; // 0x134
	float m_BackwardCompensation; // 0x138
	unsigned char _0x13c[0x4];
	PamUIBlendMode* m_BlendMode; // 0x140
	unsigned char _0x148[0x8];
}; // size = 0x150

#endif // FBGEN_PamUIElementStickyMapMarkerIconsEntityData_H
