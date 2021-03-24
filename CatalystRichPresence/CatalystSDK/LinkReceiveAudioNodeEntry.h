//
// Generated with FrostbiteGen by Chod
// File: SDK\LinkReceiveAudioNodeEntry.h
// Created: Wed Mar 10 19:06:14 2021
//

#ifndef FBGEN_LinkReceiveAudioNodeEntry_H
#define FBGEN_LinkReceiveAudioNodeEntry_H

#include "AudioGraphNodePort.h"
#include "LinkSendAudioNodeEntry.h"
#include "AudioGraphNodePortGroup.h"

class LinkReceiveAudioNodeEntry :
	public AudioGraphNodePortGroup // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D2D50;
	}
	AudioGraphNodePort m_Output; // 0x10
	LinkSendAudioNodeEntry* m_AudioSender; // 0x18
}; // size = 0x20

#endif // FBGEN_LinkReceiveAudioNodeEntry_H
