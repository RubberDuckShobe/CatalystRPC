//
// Generated with FrostbiteGen by Chod
// File: SDK\MusicOverlayVariation.h
// Created: Wed Mar 10 19:05:41 2021
//

#ifndef FBGEN_MusicOverlayVariation_H
#define FBGEN_MusicOverlayVariation_H

#include "SoundWaveAsset.h"
struct MusicOverlayVariation
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C6E00;
	}
	SoundWaveAsset* m_Wave; // 0x0
	float m_TransientPoint; // 0x8
	unsigned char _0xc[0x4];
}; // size = 0x10

#endif // FBGEN_MusicOverlayVariation_H
