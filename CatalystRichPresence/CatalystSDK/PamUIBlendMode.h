//
// Generated with FrostbiteGen by Chod
// File: SDK\PamUIBlendMode.h
// Created: Wed Mar 10 19:03:40 2021
//

#ifndef FBGEN_PamUIBlendMode_H
#define FBGEN_PamUIBlendMode_H

#include "Asset.h"

class PamUIBlendMode :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142878960;
	}
	float m_AlphaBlendAmount; // 0x18
	float m_AdditiveBlendAmount; // 0x1c
	float m_RasterAmount; // 0x20
	bool m_BlurBackground; // 0x24
	unsigned char _0x25[0x3];
}; // size = 0x28

#endif // FBGEN_PamUIBlendMode_H
