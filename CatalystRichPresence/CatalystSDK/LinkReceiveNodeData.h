//
// Generated with FrostbiteGen by Chod
// File: SDK\LinkReceiveNodeData.h
// Created: Wed Mar 10 19:06:14 2021
//

#ifndef FBGEN_LinkReceiveNodeData_H
#define FBGEN_LinkReceiveNodeData_H

#include "Array.h"
#include "AudioGraphNodeData.h"

class LinkReceiveNodeData :
	public AudioGraphNodeData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D3170;
	}
	Array<LinkReceiveNodeEntry*> m_Entries; // 0x10
}; // size = 0x18

#endif // FBGEN_LinkReceiveNodeData_H
