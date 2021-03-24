//
// Generated with FrostbiteGen by Chod
// File: SDK\PamUIWidgetEntityData.h
// Created: Wed Mar 10 19:03:21 2021
//

#ifndef FBGEN_PamUIWidgetEntityData_H
#define FBGEN_PamUIWidgetEntityData_H

#include "PamUIEdgeSnappings.h"
#include "UIWidgetEntityData.h"

class PamUIWidgetEntityData :
	public UIWidgetEntityData // size = 0x40
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014288DBA0;
	}
	float m_Width; // 0x40
	float m_Height; // 0x44
	float m_AutoWidthPadding; // 0x48
	float m_AutoWidthMinimumSize; // 0x4c
	float m_AutoWidthStride; // 0x50
	float m_AutoWidthStrideOffset; // 0x54
	float m_AutoHeightPadding; // 0x58
	float m_AutoHeightMinimumSize; // 0x5c
	float m_AutoHeightStride; // 0x60
	float m_AutoHeightStrideOffset; // 0x64
	PamUIEdgeSnappings m_EdgeSnapping; // 0x68
	float m_PaddingLeft; // 0x78
	float m_PaddingRight; // 0x7c
	float m_PaddingTop; // 0x80
	float m_PaddingBottom; // 0x84
	bool m_AutoWidth; // 0x88
	bool m_AutoHeight; // 0x89
	unsigned char _0x8a[0x6];
}; // size = 0x90

#endif // FBGEN_PamUIWidgetEntityData_H
