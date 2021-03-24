//
// Generated with FrostbiteGen by Chod
// File: SDK\PamUIARRenderWidgetData.h
// Created: Wed Mar 10 19:03:41 2021
//

#ifndef FBGEN_PamUIARRenderWidgetData_H
#define FBGEN_PamUIARRenderWidgetData_H

#include "PamUIBlendMode.h"
#include "PamUIMapMarkerStickyIconStyle.h"
#include "DiceUIVectorShapeAsset.h"
#include "Vec2.h"
#include "PamUIWidgetEntityData.h"

class PamUIARRenderWidgetData :
	public PamUIWidgetEntityData // size = 0x90
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014288D780;
	}
	int m_ScreenIndex; // 0x90
	float m_CullDistance; // 0x94
	float m_MagneticBorder; // 0x98
	float m_MagneticDeadZone; // 0x9c
	float m_MagneticBackwardCompensation; // 0xa0
	unsigned char _0xa4[0x4];
	PamUIBlendMode* m_BlendMode; // 0xa8
	PamUIMapMarkerStickyIconStyle* m_StickyIconsRunnersVisionIconStyle; // 0xb0
	DiceUIVectorShapeAsset* m_StickyIconsRunnersVisionArrow; // 0xb8
	DiceUIVectorShapeAsset* m_StickyIconsDefaultArrow; // 0xc0
	Vec2 m_StickyIconsDefaultArrowSize; // 0xc8
	float m_StickyIconsAlpha; // 0xd0
	bool m_StickyIconsVisible; // 0xd4
	unsigned char _0xd5[0x3];
}; // size = 0xd8

#endif // FBGEN_PamUIARRenderWidgetData_H
