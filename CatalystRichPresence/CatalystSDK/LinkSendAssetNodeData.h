//
// Generated with FrostbiteGen by Chod
// File: SDK\LinkSendAssetNodeData.h
// Created: Wed Mar 10 19:06:14 2021
//

#ifndef FBGEN_LinkSendAssetNodeData_H
#define FBGEN_LinkSendAssetNodeData_H

#include "Array.h"
#include "AudioGraphNodeData.h"

class LinkSendAssetNodeData :
	public AudioGraphNodeData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D2DB0;
	}
	Array<LinkSendAssetNodeEntry*> m_AssetEntries; // 0x10
}; // size = 0x18

#endif // FBGEN_LinkSendAssetNodeData_H
