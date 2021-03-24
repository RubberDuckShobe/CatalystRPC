//
// Generated with FrostbiteGen by Chod
// File: SDK\PamUIMapMarkerStickyIconStyle.h
// Created: Wed Mar 10 19:03:27 2021
//

#ifndef FBGEN_PamUIMapMarkerStickyIconStyle_H
#define FBGEN_PamUIMapMarkerStickyIconStyle_H

#include "Vec2.h"
#include "Asset.h"

class PamUIMapMarkerStickyIconStyle :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142881070;
	}
	float m_StartFadeDistance; // 0x18
	float m_StopFadeDistance; // 0x1c
	float m_StartScaleDistance; // 0x20
	float m_StopScaleDistance; // 0x24
	float m_StartFadeOutDistance; // 0x28
	float m_StopFadeOutDistance; // 0x2c
	float m_StartFadeOutOccludedDistance; // 0x30
	float m_StopFadeOutOccludedDistance; // 0x34
	float m_StartScale; // 0x38
	float m_StartAlpha; // 0x3c
	float m_InViewAlpha; // 0x40
	float m_OccludedAlpha; // 0x44
	Vec2 m_IconSize; // 0x48
	Vec2 m_ArrowSize; // 0x50
	bool m_ShowInViewIcon; // 0x58
	bool m_ShowStickyIcon; // 0x59
	unsigned char _0x5a[0x6];
}; // size = 0x60

#endif // FBGEN_PamUIMapMarkerStickyIconStyle_H
