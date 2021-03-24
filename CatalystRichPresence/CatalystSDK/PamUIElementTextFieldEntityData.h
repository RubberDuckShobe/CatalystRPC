//
// Generated with FrostbiteGen by Chod
// File: SDK\PamUIElementTextFieldEntityData.h
// Created: Wed Mar 10 19:03:32 2021
//

#ifndef FBGEN_PamUIElementTextFieldEntityData_H
#define FBGEN_PamUIElementTextFieldEntityData_H

#include "UIElementAlignment.h"
#include "UIElementFontStyle.h"
#include "UIElementFontEffect.h"
#include "LocalizedString.h"
#include "PamUIBlendMode.h"
#include "PamUIDynamicElementEntityData.h"

class PamUIElementTextFieldEntityData :
	public PamUIDynamicElementEntityData // size = 0x110
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428893E0;
	}
	UIElementAlignment m_VerticalAlignment; // 0x110
	UIElementAlignment m_HorizonalAlignment; // 0x114
	UIElementFontStyle* m_FontStyle; // 0x118
	UIElementFontStyle* m_SuperSampleFontStyle; // 0x120
	UIElementFontEffect* m_FontEffect; // 0x128
	const char* m_Text; // 0x130
	LocalizedString* m_LocalizedText; // 0x138
	float m_SuperSampleFactor; // 0x140
	float m_TextOffset; // 0x144
	float m_AutoAdjustMaxWidth; // 0x148
	float m_AutoAdjustLeftPadding; // 0x14c
	float m_AutoAdjustRightPadding; // 0x150
	float m_AutoAdjustTopPadding; // 0x154
	float m_AutoAdjustBottomPadding; // 0x158
	unsigned char _0x15c[0x4];
	PamUIBlendMode* m_BlendMode; // 0x160
	float m_MaxFeatherWidth; // 0x168
	float m_FeatherTop; // 0x16c
	float m_FeatherRight; // 0x170
	float m_FeatherBottom; // 0x174
	float m_FeatherLeft; // 0x178
	bool m_Wordwrap; // 0x17c
	bool m_SuperSample; // 0x17d
	bool m_SnapToPixel; // 0x17e
	bool m_AutoAdjustHeight; // 0x17f
	bool m_AutoAdjustWidth; // 0x180
	bool m_AutoScroll; // 0x181
	unsigned char _0x182[0xe];
}; // size = 0x190

#endif // FBGEN_PamUIElementTextFieldEntityData_H
