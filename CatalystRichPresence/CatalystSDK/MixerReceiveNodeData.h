//
// Generated with FrostbiteGen by Chod
// File: SDK\MixerReceiveNodeData.h
// Created: Wed Mar 10 19:05:50 2021
//

#ifndef FBGEN_MixerReceiveNodeData_H
#define FBGEN_MixerReceiveNodeData_H

#include "Array.h"
#include "AudioGraphNodeData.h"

class MixerReceiveNodeData :
	public AudioGraphNodeData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D1850;
	}
	Array<MixerReceiveEntry*> m_Entries; // 0x10
}; // size = 0x18

#endif // FBGEN_MixerReceiveNodeData_H
