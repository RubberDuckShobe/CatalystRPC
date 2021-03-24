//
// Generated with FrostbiteGen by Chod
// File: SDK\MixerSendNodeData.h
// Created: Wed Mar 10 19:05:50 2021
//

#ifndef FBGEN_MixerSendNodeData_H
#define FBGEN_MixerSendNodeData_H

#include "Array.h"
#include "AudioGraphNodeData.h"

class MixerSendNodeData :
	public AudioGraphNodeData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D1790;
	}
	Array<MixerSendEntry*> m_Entries; // 0x10
}; // size = 0x18

#endif // FBGEN_MixerSendNodeData_H
