//
// Generated with FrostbiteGen by Chod
// File: SDK\AudioCurve.h
// Created: Wed Mar 10 19:08:38 2021
//

#ifndef FBGEN_AudioCurve_H
#define FBGEN_AudioCurve_H

#include "Array.h"
#include "AudioCurveType.h"
struct AudioCurve
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427B2058;
	}
	Array<AudioCurvePoint> m_Points; // 0x0
	AudioCurveType m_CurveType; // 0x8
	unsigned char _0xc[0x4];
}; // size = 0x10

#endif // FBGEN_AudioCurve_H
