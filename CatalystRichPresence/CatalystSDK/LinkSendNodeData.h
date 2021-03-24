//
// Generated with FrostbiteGen by Chod
// File: SDK\LinkSendNodeData.h
// Created: Wed Mar 10 19:06:13 2021
//

#ifndef FBGEN_LinkSendNodeData_H
#define FBGEN_LinkSendNodeData_H

#include "Array.h"
#include "AudioGraphNodeData.h"

class LinkSendNodeData :
	public AudioGraphNodeData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D30B0;
	}
	Array<LinkSendNodeEntry*> m_Entries; // 0x10
}; // size = 0x18

#endif // FBGEN_LinkSendNodeData_H
