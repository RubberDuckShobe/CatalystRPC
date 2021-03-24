//
// Generated with FrostbiteGen by Chod
// File: SDK\MusicPlayerEntry.h
// Created: Wed Mar 10 19:05:41 2021
//

#ifndef FBGEN_MusicPlayerEntry_H
#define FBGEN_MusicPlayerEntry_H

#include "AudioGraphNodePort.h"
#include "AudioGraphNodePortGroup.h"

class MusicPlayerEntry :
	public AudioGraphNodePortGroup // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D5330;
	}
	AudioGraphNodePort m_In; // 0x10
	unsigned int m_TargetNameHash; // 0x18
	bool m_IsEvent; // 0x1c
	unsigned char _0x1d[0x3];
}; // size = 0x20

#endif // FBGEN_MusicPlayerEntry_H
