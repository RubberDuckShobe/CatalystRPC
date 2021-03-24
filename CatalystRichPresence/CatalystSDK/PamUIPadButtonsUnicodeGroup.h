//
// Generated with FrostbiteGen by Chod
// File: SDK\PamUIPadButtonsUnicodeGroup.h
// Created: Wed Mar 10 19:03:25 2021
//

#ifndef FBGEN_PamUIPadButtonsUnicodeGroup_H
#define FBGEN_PamUIPadButtonsUnicodeGroup_H

#include "Array.h"
struct PamUIPadButtonsUnicodeGroup
{
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142877A00;
	}
	Array<PamUIPadButtonUnicode> m_Unicodes; // 0x0
	bool m_IsWin32; // 0x8
	bool m_IsGen4a; // 0x9
	bool m_IsGen4b; // 0xa
	unsigned char _0xb[0x5];
}; // size = 0x10

#endif // FBGEN_PamUIPadButtonsUnicodeGroup_H
