//
// Generated with FrostbiteGen by Chod
// File: SDK\SoundGraphInfo.h
// Created: Wed Mar 10 19:01:14 2021
//

#ifndef FBGEN_SoundGraphInfo_H
#define FBGEN_SoundGraphInfo_H

#include "Array.h"
struct SoundGraphInfo
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C6D40;
	}
	Array<SoundGraphVoiceInfo> m_Voices; // 0x0
	Array<SoundGraphLinkedPluginAttribute> m_LinkedPluginAttributes; // 0x8
	Array<SoundGraphPluginConnection> m_Connections; // 0x10
	Array<SoundGraphPluginConnectionParam> m_ConnectionParams; // 0x18
	Array<SoundGraphPluginConstructParam> m_ConstructParams; // 0x20
	unsigned int m_PluginsParamCount; // 0x28
	unsigned int m_PluginCount; // 0x2c
	unsigned int m_DynamicSendCount; // 0x30
	unsigned char _0x34[0x4];
}; // size = 0x38

#endif // FBGEN_SoundGraphInfo_H
