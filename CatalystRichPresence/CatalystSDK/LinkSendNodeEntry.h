//
// Generated with FrostbiteGen by Chod
// File: SDK\LinkSendNodeEntry.h
// Created: Wed Mar 10 19:06:13 2021
//

#ifndef FBGEN_LinkSendNodeEntry_H
#define FBGEN_LinkSendNodeEntry_H

#include "AudioGraphNodePort.h"
#include "AudioGraphNodePortGroup.h"

class LinkSendNodeEntry :
	public AudioGraphNodePortGroup // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D3110;
	}
	AudioGraphNodePort m_Input; // 0x10
	const char* m_SendName; // 0x18
}; // size = 0x20

#endif // FBGEN_LinkSendNodeEntry_H
