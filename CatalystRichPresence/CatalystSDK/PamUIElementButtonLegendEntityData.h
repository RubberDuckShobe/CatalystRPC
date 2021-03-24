//
// Generated with FrostbiteGen by Chod
// File: SDK\PamUIElementButtonLegendEntityData.h
// Created: Wed Mar 10 19:03:36 2021
//

#ifndef FBGEN_PamUIElementButtonLegendEntityData_H
#define FBGEN_PamUIElementButtonLegendEntityData_H

#include "Vec3.h"
#include "UIElementAlignment.h"
#include "PamUIListOrientation.h"
#include "UIElementFontStyle.h"
#include "UIElementFontEffect.h"
#include "PamUIBlendMode.h"
#include "PamUIDynamicElementEntityData.h"

class PamUIElementButtonLegendEntityData :
	public PamUIDynamicElementEntityData // size = 0x110
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142889260;
	}
	Vec3 m_DisabledColor; // 0x110
	UIElementAlignment m_VerticalAlignment; // 0x120
	UIElementAlignment m_HorizontalAlignment; // 0x124
	UIElementAlignment m_TextAlignment; // 0x128
	PamUIListOrientation m_Orientation; // 0x12c
	float m_AutoAdjustLeftPadding; // 0x130
	float m_AutoAdjustRightPadding; // 0x134
	float m_AutoAdjustTopPadding; // 0x138
	float m_AutoAdjustBottomPadding; // 0x13c
	UIElementFontStyle* m_FontStyle; // 0x140
	UIElementFontStyle* m_SuperSampleFontStyle; // 0x148
	float m_SuperSampleFactor; // 0x150
	unsigned char _0x154[0x4];
	UIElementFontEffect* m_FontEffect; // 0x158
	float m_ElementSpacing; // 0x160
	float m_DisabledAlpha; // 0x164
	PamUIBlendMode* m_BlendMode; // 0x168
	float m_MaxFeatherWidth; // 0x170
	float m_FeatherTop; // 0x174
	float m_FeatherRight; // 0x178
	float m_FeatherBottom; // 0x17c
	float m_FeatherLeft; // 0x180
	bool m_IconOnLeft; // 0x184
	bool m_ReverseOrder; // 0x185
	bool m_AutoAdjustWidth; // 0x186
	bool m_AutoAdjustHeight; // 0x187
	bool m_SuperSample; // 0x188
	bool m_SnapToPixel; // 0x189
	bool m_UsingMouseAndKeyboard; // 0x18a
	bool m_ScanInputTriggers; // 0x18b
	bool m_ScanSpatialInputTriggers; // 0x18c
	unsigned char _0x18d[0x3];
}; // size = 0x190

#endif // FBGEN_PamUIElementButtonLegendEntityData_H
