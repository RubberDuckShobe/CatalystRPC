//
// Generated with FrostbiteGen by Chod
// File: SDK\PamTextureListRow.h
// Created: Wed Mar 10 19:03:41 2021
//

#ifndef FBGEN_PamTextureListRow_H
#define FBGEN_PamTextureListRow_H

#include "PamListRow.h"

class PamTextureListRow :
	public PamListRow // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014288A880;
	}
	const char* m_TextureId; // 0x18
	float m_Width; // 0x20
	float m_Height; // 0x24
	float m_ElementWidth; // 0x28
	float m_ElementHeight; // 0x2c
}; // size = 0x30

#endif // FBGEN_PamTextureListRow_H
