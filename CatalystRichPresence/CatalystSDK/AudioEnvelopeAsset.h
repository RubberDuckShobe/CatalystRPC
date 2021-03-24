//
// Generated with FrostbiteGen by Chod
// File: SDK\AudioEnvelopeAsset.h
// Created: Wed Mar 10 19:08:37 2021
//

#ifndef FBGEN_AudioEnvelopeAsset_H
#define FBGEN_AudioEnvelopeAsset_H

#include "AudioEnvelope.h"
#include "Asset.h"

class AudioEnvelopeAsset :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C08D0;
	}
	AudioEnvelope m_Envelope; // 0x18
}; // size = 0x28

#endif // FBGEN_AudioEnvelopeAsset_H
