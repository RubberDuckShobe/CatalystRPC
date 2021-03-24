//
// Generated with FrostbiteGen by Chod
// File: SDK\PamUIMapIconsWidgetData.h
// Created: Wed Mar 10 19:03:28 2021
//

#ifndef FBGEN_PamUIMapIconsWidgetData_H
#define FBGEN_PamUIMapIconsWidgetData_H

#include "LinearTransform.h"
#include "Vec3.h"
#include "Vec2.h"
#include "PamUIBlendMode.h"
#include "PamUIWidgetEntityData.h"

class PamUIMapIconsWidgetData :
	public PamUIWidgetEntityData // size = 0x90
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014288D900;
	}
	Vec3 m_MarkerSelectionColor; // 0x90
	LinearTransform m_CameraTransform; // 0xa0
	Vec3 m_PivotPosition; // 0xe0
	float m_MagneticZoomedInRadius; // 0xf0
	float m_MagneticZoomedOutRadius; // 0xf4
	float m_MarkerRadius; // 0xf8
	float m_MinMoveDistance; // 0xfc
	float m_MaxPrimaryFOV; // 0x100
	float m_MaxSecondaryFOV; // 0x104
	float m_ZoomFadeRange; // 0x108
	float m_IconScale; // 0x10c
	float m_MinimumScale; // 0x110
	float m_MinimumTiltedScale; // 0x114
	float m_MaximumTiltedScale; // 0x118
	float m_TiltScaleStart; // 0x11c
	float m_TiltScaleStop; // 0x120
	float m_RampWidth; // 0x124
	float m_UndergroundLimit; // 0x128
	float m_ExtraGeometry; // 0x12c
	const char* m_MarkerSelectionTexture; // 0x130
	Vec2 m_MarkerSelectionSize; // 0x138
	Vec2 m_MarkerSelectionOffset; // 0x140
	Vec2 m_TooltipOffset; // 0x148
	float m_ZoomLevel; // 0x150
	float m_ImpulseX; // 0x154
	float m_ImpulseY; // 0x158
	Vec2 m_MousePosition; // 0x15c
	float m_FOV; // 0x164
	float m_IconBaseDistance; // 0x168
	float m_NearPlane; // 0x16c
	float m_FarPlane; // 0x170
	unsigned char _0x174[0x4];
	const char* m_VisibleTags; // 0x178
	const char* m_AlwaysVisibleTags; // 0x180
	PamUIBlendMode* m_BlendMode; // 0x188
	bool m_LockOnCreation; // 0x190
	bool m_IncludeRevealList; // 0x191
	bool m_UseMouseSelection; // 0x192
	bool m_CityAlertActive; // 0x193
	bool m_MustMatchAll; // 0x194
	bool m_IsUnderground; // 0x195
	bool m_ShowSelectedMapMarkerOnly; // 0x196
	unsigned char _0x197[0x9];
}; // size = 0x1a0

#endif // FBGEN_PamUIMapIconsWidgetData_H
