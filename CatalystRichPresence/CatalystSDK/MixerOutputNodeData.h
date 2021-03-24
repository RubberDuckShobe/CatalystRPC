//
// Generated with FrostbiteGen by Chod
// File: SDK\MixerOutputNodeData.h
// Created: Wed Mar 10 19:05:51 2021
//

#ifndef FBGEN_MixerOutputNodeData_H
#define FBGEN_MixerOutputNodeData_H

#include "Array.h"
#include "AudioGraphNodeData.h"

class MixerOutputNodeData :
	public AudioGraphNodeData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D1A30;
	}
	Array<MixerOutputEntry*> m_Entries; // 0x10
}; // size = 0x18

#endif // FBGEN_MixerOutputNodeData_H
