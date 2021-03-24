//
// Generated with FrostbiteGen by Chod
// File: SDK\PamUIARWidgetReferenceEntityData.h
// Created: Wed Mar 10 19:03:41 2021
//

#ifndef FBGEN_PamUIARWidgetReferenceEntityData_H
#define FBGEN_PamUIARWidgetReferenceEntityData_H

#include "Vec2.h"
#include "PamUIARWidgetAnchor.h"
#include "PamUIMapMarkerStickyIconStyle.h"
#include "WidgetReferenceEntityData.h"

class PamUIARWidgetReferenceEntityData :
	public WidgetReferenceEntityData // size = 0xa0
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142889AA0;
	}
	int m_ScreenIndex; // 0xa0
	float m_FrustrumCullingSize; // 0xa4
	float m_OccludedAlpha; // 0xa8
	float m_StickToCameraDuration; // 0xac
	float m_InternalStickToCameraSpeed; // 0xb0
	float m_InternalMaxStickToCameraDuration; // 0xb4
	Vec2 m_StickToCameraOffset; // 0xb8
	Vec2 m_StickToCameraOffset_TopLeft; // 0xc0
	Vec2 m_StickToCameraOffset_TopCenter; // 0xc8
	Vec2 m_StickToCameraOffset_TopRight; // 0xd0
	Vec2 m_StickToCameraOffset_LeftMiddle; // 0xd8
	Vec2 m_StickToCameraOffset_Center; // 0xe0
	Vec2 m_StickToCameraOffset_RightMiddle; // 0xe8
	Vec2 m_StickToCameraOffset_BottomLeft; // 0xf0
	Vec2 m_StickToCameraOffset_BottomCenter; // 0xf8
	Vec2 m_StickToCameraOffset_BottomRight; // 0x100
	Vec2 m_StickToCameraOffset_MatchInWorld; // 0x108
	PamUIARWidgetAnchor m_StickToCameraAnchor; // 0x110
	float m_DepthSortingBias; // 0x114
	float m_ARElementSize; // 0x118
	PamUIARWidgetAnchor m_ARElementAnchor; // 0x11c
	float m_AutoScaleRadius; // 0x120
	float m_AutoScaleUpRadius; // 0x124
	float m_BillboardAcceleration; // 0x128
	float m_BillboardRadius; // 0x12c
	PamUIMapMarkerStickyIconStyle* m_InWorldStickToCameraStyle; // 0x130
	bool m_EnableDepthCulling; // 0x138
	bool m_StickToCameraFromStart; // 0x139
	bool m_StickToCameraMagnetic; // 0x13a
	bool m_MatchInWorldLinearScale; // 0x13b
	bool m_AutoScale; // 0x13c
	bool m_AutoScaleUp; // 0x13d
	bool m_BillboardOnInit; // 0x13e
	bool m_Billboarding; // 0x13f
}; // size = 0x140

#endif // FBGEN_PamUIARWidgetReferenceEntityData_H
