//
// Generated with FrostbiteGen by Chod
// File: SDK\SoundGraphPluginInfo.h
// Created: Wed Mar 10 19:01:13 2021
//

#ifndef FBGEN_SoundGraphPluginInfo_H
#define FBGEN_SoundGraphPluginInfo_H

struct SoundGraphPluginInfo
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C6E80;
	}
	unsigned int m_Id; // 0x0
	unsigned int m_EnableAttributeReadMask; // 0x4
	unsigned char m_ConnectionIndex; // 0x8
	unsigned char m_OutputChannelCount; // 0x9
	unsigned char m_ConstructParamsIndex; // 0xa
	unsigned char m_ConstructParamCount; // 0xb
}; // size = 0xc

#endif // FBGEN_SoundGraphPluginInfo_H
