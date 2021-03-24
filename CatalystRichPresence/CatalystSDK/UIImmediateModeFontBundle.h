//
// Generated with FrostbiteGen by Chod
// File: SDK\UIImmediateModeFontBundle.h
// Created: Wed Mar 10 18:59:55 2021
//

#ifndef FBGEN_UIImmediateModeFontBundle_H
#define FBGEN_UIImmediateModeFontBundle_H

#include "LanguageFormat.h"
#include "Array.h"
struct UIImmediateModeFontBundle
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014281DCA8;
	}
	LanguageFormat m_Language; // 0x0
	unsigned char _0x4[0x4];
	const char* m_BundlePath; // 0x8
	Array<UITtfAsset*> m_TtfAssets; // 0x10
}; // size = 0x18

#endif // FBGEN_UIImmediateModeFontBundle_H
