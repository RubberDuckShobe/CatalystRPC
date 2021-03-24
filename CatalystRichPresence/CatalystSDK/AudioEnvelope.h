//
// Generated with FrostbiteGen by Chod
// File: SDK\AudioEnvelope.h
// Created: Wed Mar 10 19:08:37 2021
//

#ifndef FBGEN_AudioEnvelope_H
#define FBGEN_AudioEnvelope_H

#include "Array.h"
#include "AudioEnvelopeLineType.h"
struct AudioEnvelope
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C1920;
	}
	Array<AudioEnvelopePoint> m_Points; // 0x0
	AudioEnvelopeLineType m_DefaultCurveType; // 0x8
	unsigned char _0xc[0x4];
}; // size = 0x10

#endif // FBGEN_AudioEnvelope_H
