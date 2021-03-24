//
// Generated with FrostbiteGen by Chod
// File: SDK\ConfigurableRangeMapperEntry.h
// Created: Wed Mar 10 19:07:34 2021
//

#ifndef FBGEN_ConfigurableRangeMapperEntry_H
#define FBGEN_ConfigurableRangeMapperEntry_H

#include "AudioGraphNodePort.h"
#include "AudioGraphNodePortGroup.h"

class ConfigurableRangeMapperEntry :
	public AudioGraphNodePortGroup // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C0750;
	}
	AudioGraphNodePort m_RangeStart; // 0x10
	AudioGraphNodePort m_RangeEnd; // 0x18
	AudioGraphNodePort m_OutputValue; // 0x20
}; // size = 0x28

#endif // FBGEN_ConfigurableRangeMapperEntry_H
