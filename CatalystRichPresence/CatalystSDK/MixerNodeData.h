//
// Generated with FrostbiteGen by Chod
// File: SDK\MixerNodeData.h
// Created: Wed Mar 10 19:05:51 2021
//

#ifndef FBGEN_MixerNodeData_H
#define FBGEN_MixerNodeData_H

#include "Array.h"
#include "AudioGraphNodePort.h"
#include "AudioGraphNodeData.h"

class MixerNodeData :
	public AudioGraphNodeData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C9060;
	}
	Array<MixerEntry*> m_Entries; // 0x10
	AudioGraphNodePort m_Out; // 0x18
}; // size = 0x20

#endif // FBGEN_MixerNodeData_H
