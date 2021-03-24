//
// Generated with FrostbiteGen by Chod
// File: SDK\MixerInputNodeData.h
// Created: Wed Mar 10 19:05:51 2021
//

#ifndef FBGEN_MixerInputNodeData_H
#define FBGEN_MixerInputNodeData_H

#include "Array.h"
#include "AudioGraphNodeData.h"

class MixerInputNodeData :
	public AudioGraphNodeData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D1AF0;
	}
	Array<MixerInputEntry*> m_Entries; // 0x10
}; // size = 0x18

#endif // FBGEN_MixerInputNodeData_H
