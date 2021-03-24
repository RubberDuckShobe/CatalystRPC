//
// Generated with FrostbiteGen by Chod
// File: SDK\SurfaceOrientTune.h
// Created: Wed Mar 10 19:00:40 2021
//

#ifndef FBGEN_SurfaceOrientTune_H
#define FBGEN_SurfaceOrientTune_H

#include "Asset.h"

class SurfaceOrientTune :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142829790;
	}
	float m_surfaceOrientThreshold; // 0x18
	float m_surfaceOrientSlerpTime; // 0x1c
	bool m_alwaysVerticalOnAutoGen; // 0x20
	unsigned char _0x21[0x7];
}; // size = 0x28

#endif // FBGEN_SurfaceOrientTune_H
