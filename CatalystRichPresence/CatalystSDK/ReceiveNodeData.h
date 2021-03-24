//
// Generated with FrostbiteGen by Chod
// File: SDK\ReceiveNodeData.h
// Created: Wed Mar 10 19:02:40 2021
//

#ifndef FBGEN_ReceiveNodeData_H
#define FBGEN_ReceiveNodeData_H

#include "Array.h"
#include "AudioGraphNodeData.h"

class ReceiveNodeData :
	public AudioGraphNodeData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D2750;
	}
	Array<ReceiveEntry*> m_Entries; // 0x10
}; // size = 0x18

#endif // FBGEN_ReceiveNodeData_H
