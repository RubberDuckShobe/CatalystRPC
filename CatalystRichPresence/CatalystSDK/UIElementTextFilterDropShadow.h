//
// Generated with FrostbiteGen by Chod
// File: SDK\UIElementTextFilterDropShadow.h
// Created: Wed Mar 10 18:59:57 2021
//

#ifndef FBGEN_UIElementTextFilterDropShadow_H
#define FBGEN_UIElementTextFilterDropShadow_H

#include "UIElementColor.h"
#include "UIElementTextFilter.h"

class UIElementTextFilterDropShadow :
	public UIElementTextFilter // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014281F170;
	}
	float m_X; // 0x10
	float m_Y; // 0x14
	unsigned char _0x18[0x8];
	UIElementColor m_Color; // 0x20
	float m_Strength; // 0x40
	float m_Angle; // 0x44
	float m_Distance; // 0x48
	bool m_KnockOut; // 0x4c
	bool m_HideObject; // 0x4d
	bool m_FineBlur; // 0x4e
	unsigned char _0x4f[0x1];
}; // size = 0x50

#endif // FBGEN_UIElementTextFilterDropShadow_H
