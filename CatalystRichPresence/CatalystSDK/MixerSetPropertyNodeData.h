//
// Generated with FrostbiteGen by Chod
// File: SDK\MixerSetPropertyNodeData.h
// Created: Wed Mar 10 19:05:50 2021
//

#ifndef FBGEN_MixerSetPropertyNodeData_H
#define FBGEN_MixerSetPropertyNodeData_H

#include "Array.h"
#include "AudioGraphNodeData.h"

class MixerSetPropertyNodeData :
	public AudioGraphNodeData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D1910;
	}
	Array<MixerSetPropertyEntry*> m_Entries; // 0x10
}; // size = 0x18

#endif // FBGEN_MixerSetPropertyNodeData_H
