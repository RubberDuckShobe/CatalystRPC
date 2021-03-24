//
// Generated with FrostbiteGen by Chod
// File: SDK\AudioEnvelopeNodeData.h
// Created: Wed Mar 10 19:08:37 2021
//

#ifndef FBGEN_AudioEnvelopeNodeData_H
#define FBGEN_AudioEnvelopeNodeData_H

#include "AudioGraphNodePort.h"
#include "AudioEnvelope.h"
#include "AudioEnvelopeAsset.h"
#include "AudioGraphNodeData.h"

class AudioEnvelopeNodeData :
	public AudioGraphNodeData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C0870;
	}
	AudioGraphNodePort m_X; // 0x10
	AudioGraphNodePort m_EnvelopeIn; // 0x18
	AudioGraphNodePort m_Y; // 0x20
	AudioGraphNodePort m_Region; // 0x28
	AudioEnvelope m_Envelope; // 0x30
	AudioEnvelopeAsset* m_EnvelopeAsset; // 0x40
}; // size = 0x48

#endif // FBGEN_AudioEnvelopeNodeData_H
