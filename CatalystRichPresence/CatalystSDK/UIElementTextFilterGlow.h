//
// Generated with FrostbiteGen by Chod
// File: SDK\UIElementTextFilterGlow.h
// Created: Wed Mar 10 18:59:57 2021
//

#ifndef FBGEN_UIElementTextFilterGlow_H
#define FBGEN_UIElementTextFilterGlow_H

#include "UIElementColor.h"
#include "UIElementTextFilter.h"

class UIElementTextFilterGlow :
	public UIElementTextFilter // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014281F110;
	}
	float m_X; // 0x10
	float m_Y; // 0x14
	unsigned char _0x18[0x8];
	UIElementColor m_Color; // 0x20
	float m_Strength; // 0x40
	bool m_KnockOut; // 0x44
	bool m_HideObject; // 0x45
	bool m_FineBlur; // 0x46
	unsigned char _0x47[0x9];
}; // size = 0x50

#endif // FBGEN_UIElementTextFilterGlow_H
