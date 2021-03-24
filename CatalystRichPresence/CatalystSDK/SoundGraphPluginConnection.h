//
// Generated with FrostbiteGen by Chod
// File: SDK\SoundGraphPluginConnection.h
// Created: Wed Mar 10 19:01:13 2021
//

#ifndef FBGEN_SoundGraphPluginConnection_H
#define FBGEN_SoundGraphPluginConnection_H

#include "AudioGraphNodeData.h"
struct SoundGraphPluginConnection
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C6EC0;
	}
	AudioGraphNodeData* m_Context; // 0x0
	unsigned char m_VoiceIndex; // 0x8
	unsigned char m_PluginIndex; // 0x9
	unsigned char m_SignalIndexAndConnectionInfo; // 0xa
	unsigned char m_ConnectionParamBaseIndex; // 0xb
	unsigned char _0xc[0x4];
}; // size = 0x10

#endif // FBGEN_SoundGraphPluginConnection_H
