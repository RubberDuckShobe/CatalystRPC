//
// Generated with FrostbiteGen by Chod
// File: SDK\UpdateRibbonTextureData.h
// Created: Wed Mar 10 18:59:36 2021
//

#ifndef FBGEN_UpdateRibbonTextureData_H
#define FBGEN_UpdateRibbonTextureData_H

#include "ProcessorData.h"

class UpdateRibbonTextureData :
	public ProcessorData // size = 0x30
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427DB5A0;
	}
	int m_TextureParticleCount; // 0x30
	bool m_MirrorTexture; // 0x34
	bool m_BeamLikeCoords; // 0x35
	unsigned char _0x36[0x2];
}; // size = 0x38

#endif // FBGEN_UpdateRibbonTextureData_H
