//
// Generated with FrostbiteGen by Chod
// File: SDK\LinkReceiveEventNodeData.h
// Created: Wed Mar 10 19:06:14 2021
//

#ifndef FBGEN_LinkReceiveEventNodeData_H
#define FBGEN_LinkReceiveEventNodeData_H

#include "Array.h"
#include "AudioGraphNodeData.h"

class LinkReceiveEventNodeData :
	public AudioGraphNodeData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D2FF0;
	}
	Array<LinkReceiveEventNodeEntry*> m_EventEntries; // 0x10
}; // size = 0x18

#endif // FBGEN_LinkReceiveEventNodeData_H
