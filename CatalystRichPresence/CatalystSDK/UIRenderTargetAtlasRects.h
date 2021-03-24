//
// Generated with FrostbiteGen by Chod
// File: SDK\UIRenderTargetAtlasRects.h
// Created: Wed Mar 10 18:59:49 2021
//

#ifndef FBGEN_UIRenderTargetAtlasRects_H
#define FBGEN_UIRenderTargetAtlasRects_H

#include "Vec2.h"
#include "Array.h"
struct UIRenderTargetAtlasRects
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428994B8;
	}
	unsigned int m_AtlasId; // 0x0
	Vec2 m_Size; // 0x4
	unsigned char _0xc[0x4];
	Array<UIRenderTargetAtlasRect> m_Rects; // 0x10
}; // size = 0x18

#endif // FBGEN_UIRenderTargetAtlasRects_H
