//
// Generated with FrostbiteGen by Chod
// File: SDK\SoundBusData.h
// Created: Wed Mar 10 19:01:19 2021
//

#ifndef FBGEN_SoundBusData_H
#define FBGEN_SoundBusData_H

#include "SoundGraphPluginRef.h"
#include "AudioGraphNodeData.h"

class SoundBusData :
	public AudioGraphNodeData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C85E0;
	}
	const char* m_BusName; // 0x10
	unsigned char m_ChannelCount; // 0x18
	SoundGraphPluginRef m_SubmixPlugin; // 0x19
	unsigned char _0x1c[0x4];
}; // size = 0x20

#endif // FBGEN_SoundBusData_H
