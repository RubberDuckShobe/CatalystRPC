//
// Generated with FrostbiteGen by Chod
// File: SDK\PamUIAxesUnicodeGroup.h
// Created: Wed Mar 10 19:03:40 2021
//

#ifndef FBGEN_PamUIAxesUnicodeGroup_H
#define FBGEN_PamUIAxesUnicodeGroup_H

#include "Array.h"
struct PamUIAxesUnicodeGroup
{
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142877A40;
	}
	Array<PamUIAxisUnicode> m_Unicodes; // 0x0
	bool m_IsWin32; // 0x8
	bool m_IsGen4a; // 0x9
	bool m_IsGen4b; // 0xa
	unsigned char _0xb[0x5];
}; // size = 0x10

#endif // FBGEN_PamUIAxesUnicodeGroup_H
