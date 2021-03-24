//
// Generated with FrostbiteGen by Chod
// File: SDK\LinkReceiveEventNodeEntry.h
// Created: Wed Mar 10 19:06:14 2021
//

#ifndef FBGEN_LinkReceiveEventNodeEntry_H
#define FBGEN_LinkReceiveEventNodeEntry_H

#include "AudioGraphNodePort.h"
#include "LinkSendEventNodeEntry.h"
#include "AudioGraphNodePortGroup.h"

class LinkReceiveEventNodeEntry :
	public AudioGraphNodePortGroup // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D3050;
	}
	AudioGraphNodePort m_Output; // 0x10
	LinkSendEventNodeEntry* m_EventSender; // 0x18
}; // size = 0x20

#endif // FBGEN_LinkReceiveEventNodeEntry_H
