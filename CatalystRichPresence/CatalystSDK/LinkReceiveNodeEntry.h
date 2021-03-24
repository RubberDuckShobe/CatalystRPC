//
// Generated with FrostbiteGen by Chod
// File: SDK\LinkReceiveNodeEntry.h
// Created: Wed Mar 10 19:06:14 2021
//

#ifndef FBGEN_LinkReceiveNodeEntry_H
#define FBGEN_LinkReceiveNodeEntry_H

#include "AudioGraphNodePort.h"
#include "LinkSendNodeEntry.h"
#include "AudioGraphNodePortGroup.h"

class LinkReceiveNodeEntry :
	public AudioGraphNodePortGroup // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D31D0;
	}
	AudioGraphNodePort m_Output; // 0x10
	LinkSendNodeEntry* m_Sender; // 0x18
}; // size = 0x20

#endif // FBGEN_LinkReceiveNodeEntry_H
