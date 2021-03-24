//
// Generated with FrostbiteGen by Chod
// File: SDK\UIElementFontStyle.h
// Created: Wed Mar 10 18:59:58 2021
//

#ifndef FBGEN_UIElementFontStyle_H
#define FBGEN_UIElementFontStyle_H

#include "UIElementColor.h"
#include "UIElementFontDefinition.h"
#include "Array.h"
#include "Asset.h"

class UIElementFontStyle :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014281EFF0;
	}
	UIElementFontDefinition* m_Hd; // 0x18
	UIElementColor m_Color; // 0x20
	UIElementFontDefinition* m_Sd; // 0x40
	Array<UIElementFontDefinitionOverride> m_LanguageOverrides; // 0x48
}; // size = 0x50

#endif // FBGEN_UIElementFontStyle_H
