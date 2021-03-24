//
// Generated with FrostbiteGen by Chod
// File: SDK\LinkSendEventNodeEntry.h
// Created: Wed Mar 10 19:06:13 2021
//

#ifndef FBGEN_LinkSendEventNodeEntry_H
#define FBGEN_LinkSendEventNodeEntry_H

#include "AudioGraphNodePort.h"
#include "AudioGraphNodePortGroup.h"

class LinkSendEventNodeEntry :
	public AudioGraphNodePortGroup // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D2F90;
	}
	AudioGraphNodePort m_Input; // 0x10
	const char* m_SendEventName; // 0x18
}; // size = 0x20

#endif // FBGEN_LinkSendEventNodeEntry_H
