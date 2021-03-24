//
// Generated with FrostbiteGen by Chod
// File: SDK\MixerSendNodeConfigData.h
// Created: Wed Mar 10 19:05:50 2021
//

#ifndef FBGEN_MixerSendNodeConfigData_H
#define FBGEN_MixerSendNodeConfigData_H

#include "Array.h"
#include "AudioGraphNodeConfigData.h"

class MixerSendNodeConfigData :
	public AudioGraphNodeConfigData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D1670;
	}
	Array<MixerEntryConfig*> m_EntryConfigs; // 0x18
}; // size = 0x20

#endif // FBGEN_MixerSendNodeConfigData_H
