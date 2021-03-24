//
// Generated with FrostbiteGen by Chod
// File: SDK\PamUIMapMarkerIconStyle.h
// Created: Wed Mar 10 19:03:27 2021
//

#ifndef FBGEN_PamUIMapMarkerIconStyle_H
#define FBGEN_PamUIMapMarkerIconStyle_H

#include "UIElementFontStyle.h"
#include "Asset.h"

class PamUIMapMarkerIconStyle :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428810D0;
	}
	float m_Width; // 0x18
	float m_Height; // 0x1c
	float m_OffsetX; // 0x20
	float m_OffsetY; // 0x24
	UIElementFontStyle* m_FontStyle; // 0x28
}; // size = 0x30

#endif // FBGEN_PamUIMapMarkerIconStyle_H
