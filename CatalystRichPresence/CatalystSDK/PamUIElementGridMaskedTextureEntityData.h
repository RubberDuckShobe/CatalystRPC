//
// Generated with FrostbiteGen by Chod
// File: SDK\PamUIElementGridMaskedTextureEntityData.h
// Created: Wed Mar 10 19:03:35 2021
//

#ifndef FBGEN_PamUIElementGridMaskedTextureEntityData_H
#define FBGEN_PamUIElementGridMaskedTextureEntityData_H

#include "Vec4.h"
#include "PamUIElementGriddedRectangleEntityData.h"

class PamUIElementGridMaskedTextureEntityData :
	public PamUIElementGriddedRectangleEntityData // size = 0x1b0
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142888B40;
	}
	Vec4 m_UVRect; // 0x1b0
	const char* m_DynamicTextureId; // 0x1c0
	unsigned char _0x1c8[0x8];
}; // size = 0x1d0

#endif // FBGEN_PamUIElementGridMaskedTextureEntityData_H
