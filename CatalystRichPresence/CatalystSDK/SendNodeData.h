//
// Generated with FrostbiteGen by Chod
// File: SDK\SendNodeData.h
// Created: Wed Mar 10 19:02:29 2021
//

#ifndef FBGEN_SendNodeData_H
#define FBGEN_SendNodeData_H

#include "Array.h"
#include "AudioGraphNodeData.h"

class SendNodeData :
	public AudioGraphNodeData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D2630;
	}
	Array<SendEntry*> m_Entries; // 0x10
}; // size = 0x18

#endif // FBGEN_SendNodeData_H
