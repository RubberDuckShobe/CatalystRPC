//
// Generated with FrostbiteGen by Chod
// File: SDK\LinkSendAudioNodeData.h
// Created: Wed Mar 10 19:06:14 2021
//

#ifndef FBGEN_LinkSendAudioNodeData_H
#define FBGEN_LinkSendAudioNodeData_H

#include "Array.h"
#include "AudioGraphNodeData.h"

class LinkSendAudioNodeData :
	public AudioGraphNodeData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D2C30;
	}
	Array<LinkSendAudioNodeEntry*> m_AudioEntries; // 0x10
}; // size = 0x18

#endif // FBGEN_LinkSendAudioNodeData_H
