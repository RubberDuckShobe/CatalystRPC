//
// Generated with FrostbiteGen by Chod
// File: SDK\UIImmediateModeFontConfigurationAsset.h
// Created: Wed Mar 10 18:59:55 2021
//

#ifndef FBGEN_UIImmediateModeFontConfigurationAsset_H
#define FBGEN_UIImmediateModeFontConfigurationAsset_H

#include "Array.h"
#include "Asset.h"

class UIImmediateModeFontConfigurationAsset :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014281F2F0;
	}
	Array<UIImmediateModeFontBundle> m_FontBundles; // 0x18
	int m_FontDpi; // 0x20
	int m_GlyphCachePadding; // 0x24
	float m_GlyphGeometryPadding; // 0x28
	bool m_GlyphCachePremultipliedAlpha; // 0x2c
	bool m_AutoHinting; // 0x2d
	unsigned char _0x2e[0x2];
}; // size = 0x30

#endif // FBGEN_UIImmediateModeFontConfigurationAsset_H
