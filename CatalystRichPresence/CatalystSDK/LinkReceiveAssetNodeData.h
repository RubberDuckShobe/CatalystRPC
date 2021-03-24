//
// Generated with FrostbiteGen by Chod
// File: SDK\LinkReceiveAssetNodeData.h
// Created: Wed Mar 10 19:06:15 2021
//

#ifndef FBGEN_LinkReceiveAssetNodeData_H
#define FBGEN_LinkReceiveAssetNodeData_H

#include "Array.h"
#include "AudioGraphNodeData.h"

class LinkReceiveAssetNodeData :
	public AudioGraphNodeData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D2E70;
	}
	Array<LinkReceiveAssetNodeEntry*> m_AssetEntries; // 0x10
}; // size = 0x18

#endif // FBGEN_LinkReceiveAssetNodeData_H
