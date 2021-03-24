//
// Generated with FrostbiteGen by Chod
// File: SDK\MultiCrossfaderGroup.h
// Created: Wed Mar 10 19:05:43 2021
//

#ifndef FBGEN_MultiCrossfaderGroup_H
#define FBGEN_MultiCrossfaderGroup_H

#include "AudioGraphNodePort.h"
#include "FaderType.h"
#include "AudioGraphNodePortGroup.h"

class MultiCrossfaderGroup :
	public AudioGraphNodePortGroup // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D29F0;
	}
	AudioGraphNodePort m_Amplitude; // 0x10
	AudioGraphNodePort m_Start; // 0x18
	AudioGraphNodePort m_Stop; // 0x20
	float m_FadeAmplitude; // 0x28
	float m_FadeBegin; // 0x2c
	float m_FadeEnd; // 0x30
	FaderType m_FadeType; // 0x34
}; // size = 0x38

#endif // FBGEN_MultiCrossfaderGroup_H
