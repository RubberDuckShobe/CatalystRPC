//
// Generated with FrostbiteGen by Chod
// File: SDK\LinkReceiveAssetNodeEntry.h
// Created: Wed Mar 10 19:06:14 2021
//

#ifndef FBGEN_LinkReceiveAssetNodeEntry_H
#define FBGEN_LinkReceiveAssetNodeEntry_H

#include "AudioGraphNodePort.h"
#include "LinkSendAssetNodeEntry.h"
#include "AudioGraphNodePortGroup.h"

class LinkReceiveAssetNodeEntry :
	public AudioGraphNodePortGroup // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D2ED0;
	}
	AudioGraphNodePort m_Output; // 0x10
	LinkSendAssetNodeEntry* m_AssetSender; // 0x18
}; // size = 0x20

#endif // FBGEN_LinkReceiveAssetNodeEntry_H
