//
// Generated with FrostbiteGen by Chod
// File: SDK\WaveSwitcherNodeConfigData.h
// Created: Wed Mar 10 18:58:53 2021
//

#ifndef FBGEN_WaveSwitcherNodeConfigData_H
#define FBGEN_WaveSwitcherNodeConfigData_H

#include "Array.h"
#include "AudioGraphNodeConfigData.h"

class WaveSwitcherNodeConfigData :
	public AudioGraphNodeConfigData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C87C0;
	}
	Array<SoundWaveAsset*> m_Waves; // 0x18
}; // size = 0x20

#endif // FBGEN_WaveSwitcherNodeConfigData_H
