//
// Generated with FrostbiteGen by Chod
// File: SDK\PamUIMouseButtonUnicode.h
// Created: Wed Mar 10 19:03:26 2021
//

#ifndef FBGEN_PamUIMouseButtonUnicode_H
#define FBGEN_PamUIMouseButtonUnicode_H

#include "InputDeviceMouseButtons.h"
struct PamUIMouseButtonUnicode
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428779A0;
	}
	InputDeviceMouseButtons m_AtlasButton; // 0x0
	unsigned char _0x4[0x4];
	const char* m_Unicode; // 0x8
	bool m_DoubleClick; // 0x10
	unsigned char _0x11[0x7];
}; // size = 0x18

#endif // FBGEN_PamUIMouseButtonUnicode_H
