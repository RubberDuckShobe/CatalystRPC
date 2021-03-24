//
// Generated with FrostbiteGen by Chod
// File: SDK\LinkReceiveAudioNodeData.h
// Created: Wed Mar 10 19:06:14 2021
//

#ifndef FBGEN_LinkReceiveAudioNodeData_H
#define FBGEN_LinkReceiveAudioNodeData_H

#include "Array.h"
#include "AudioGraphNodeData.h"

class LinkReceiveAudioNodeData :
	public AudioGraphNodeData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D2CF0;
	}
	Array<LinkReceiveAudioNodeEntry*> m_AudioEntries; // 0x10
}; // size = 0x18

#endif // FBGEN_LinkReceiveAudioNodeData_H
