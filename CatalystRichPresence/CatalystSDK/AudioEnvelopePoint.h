//
// Generated with FrostbiteGen by Chod
// File: SDK\AudioEnvelopePoint.h
// Created: Wed Mar 10 19:08:37 2021
//

#ifndef FBGEN_AudioEnvelopePoint_H
#define FBGEN_AudioEnvelopePoint_H

#include "Vec2.h"
#include "AudioEnvelopeLineType.h"
struct AudioEnvelopePoint
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C1940;
	}
	Vec2 m_Point; // 0x0
	AudioEnvelopeLineType m_LineType; // 0x8
	float m_CurveScale; // 0xc
	bool m_IsRegionBoundary; // 0x10
	unsigned char _0x11[0x3];
}; // size = 0x14

#endif // FBGEN_AudioEnvelopePoint_H
