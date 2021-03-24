//
// Generated with FrostbiteGen by Chod
// File: SDK\PamUIKeysUnicodeGroup.h
// Created: Wed Mar 10 19:03:30 2021
//

#ifndef FBGEN_PamUIKeysUnicodeGroup_H
#define FBGEN_PamUIKeysUnicodeGroup_H

#include "Array.h"
struct PamUIKeysUnicodeGroup
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428779C0;
	}
	Array<PamUIKeyUnicode> m_Unicodes; // 0x0
	bool m_IsWin32; // 0x8
	bool m_IsGen4a; // 0x9
	bool m_IsGen4b; // 0xa
	unsigned char _0xb[0x5];
}; // size = 0x10

#endif // FBGEN_PamUIKeysUnicodeGroup_H
