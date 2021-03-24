//
// Generated with FrostbiteGen by Chod
// File: SDK\MixerSetPropertyEntry.h
// Created: Wed Mar 10 19:05:50 2021
//

#ifndef FBGEN_MixerSetPropertyEntry_H
#define FBGEN_MixerSetPropertyEntry_H

#include "AudioGraphNodePort.h"
#include "MixGroup.h"
#include "AudioGraphNodePortGroup.h"

class MixerSetPropertyEntry :
	public AudioGraphNodePortGroup // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D1970;
	}
	AudioGraphNodePort m_In; // 0x10
	unsigned int m_Target; // 0x18
	unsigned char _0x1c[0x4];
	MixGroup* m_Group; // 0x20
	float m_AttackTime; // 0x28
	float m_ReleaseTime; // 0x2c
}; // size = 0x30

#endif // FBGEN_MixerSetPropertyEntry_H
