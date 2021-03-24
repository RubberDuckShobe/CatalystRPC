//
// Generated with FrostbiteGen by Chod
// File: SDK\LinkSendAudioNodeEntry.h
// Created: Wed Mar 10 19:06:14 2021
//

#ifndef FBGEN_LinkSendAudioNodeEntry_H
#define FBGEN_LinkSendAudioNodeEntry_H

#include "AudioGraphNodePort.h"
#include "AudioGraphNodePortGroup.h"

class LinkSendAudioNodeEntry :
	public AudioGraphNodePortGroup // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D2C90;
	}
	AudioGraphNodePort m_Input; // 0x10
	const char* m_SendAudioName; // 0x18
}; // size = 0x20

#endif // FBGEN_LinkSendAudioNodeEntry_H
