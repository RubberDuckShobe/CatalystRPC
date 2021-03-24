//
// Generated with FrostbiteGen by Chod
// File: SDK\MinMaxValueSelectorEntry.h
// Created: Wed Mar 10 19:05:53 2021
//

#ifndef FBGEN_MinMaxValueSelectorEntry_H
#define FBGEN_MinMaxValueSelectorEntry_H

#include "AudioGraphNodePort.h"
#include "AudioGraphNodePortGroup.h"

class MinMaxValueSelectorEntry :
	public AudioGraphNodePortGroup // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D2AB0;
	}
	AudioGraphNodePort m_Input; // 0x10
}; // size = 0x18

#endif // FBGEN_MinMaxValueSelectorEntry_H
