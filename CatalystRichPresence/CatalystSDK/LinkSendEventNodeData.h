//
// Generated with FrostbiteGen by Chod
// File: SDK\LinkSendEventNodeData.h
// Created: Wed Mar 10 19:06:14 2021
//

#ifndef FBGEN_LinkSendEventNodeData_H
#define FBGEN_LinkSendEventNodeData_H

#include "Array.h"
#include "AudioGraphNodeData.h"

class LinkSendEventNodeData :
	public AudioGraphNodeData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D2F30;
	}
	Array<LinkSendEventNodeEntry*> m_EventEntries; // 0x10
}; // size = 0x18

#endif // FBGEN_LinkSendEventNodeData_H
