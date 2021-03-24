//
// Generated with FrostbiteGen by Chod
// File: SDK\ProberTune.h
// Created: Wed Mar 10 19:02:53 2021
//

#ifndef FBGEN_ProberTune_H
#define FBGEN_ProberTune_H

#include "Asset.h"

class ProberTune :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142829910;
	}
	float m_probeInterval; // 0x18
	bool m_probeForGround; // 0x1c
	unsigned char _0x1d[0x3];
}; // size = 0x20

#endif // FBGEN_ProberTune_H
