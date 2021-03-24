//
// Generated with FrostbiteGen by Chod
// File: SDK\UIElementFontDefinition.h
// Created: Wed Mar 10 18:59:59 2021
//

#ifndef FBGEN_UIElementFontDefinition_H
#define FBGEN_UIElementFontDefinition_H

#include "Array.h"
#include "DataContainer.h"

class UIElementFontDefinition :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014281F0B0;
	}
	Array<UIImmediateModeFontLookup> m_FontLookup; // 0x10
	float m_PointSize; // 0x18
	float m_LetterSpacing; // 0x1c
	int m_RowSpacing; // 0x20
	unsigned char _0x24[0x4];
}; // size = 0x28

#endif // FBGEN_UIElementFontDefinition_H
