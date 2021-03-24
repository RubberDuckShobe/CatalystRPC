//
// Generated with FrostbiteGen by Chod
// File: SDK\LinkSendAssetNodeEntry.h
// Created: Wed Mar 10 19:06:14 2021
//

#ifndef FBGEN_LinkSendAssetNodeEntry_H
#define FBGEN_LinkSendAssetNodeEntry_H

#include "AudioGraphNodePort.h"
#include "AudioGraphNodePortGroup.h"

class LinkSendAssetNodeEntry :
	public AudioGraphNodePortGroup // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D2E10;
	}
	AudioGraphNodePort m_Input; // 0x10
	const char* m_SendAssetName; // 0x18
}; // size = 0x20

#endif // FBGEN_LinkSendAssetNodeEntry_H
