//
// Generated with FrostbiteGen by Chod
// File: SDK\SoundGraphLinkedPluginAttribute.h
// Created: Wed Mar 10 19:01:14 2021
//

#ifndef FBGEN_SoundGraphLinkedPluginAttribute_H
#define FBGEN_SoundGraphLinkedPluginAttribute_H

struct SoundGraphLinkedPluginAttribute
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C6E60;
	}
	float m_UnconnectedValue; // 0x0
	unsigned short m_ValueIndex; // 0x4
	unsigned short m_NodeIndexAndFlags; // 0x6
	unsigned char m_VoiceIndex; // 0x8
	unsigned char m_PluginIndex; // 0x9
	unsigned char m_AttributeIndex; // 0xa
	unsigned char _0xb[0x1];
}; // size = 0xc

#endif // FBGEN_SoundGraphLinkedPluginAttribute_H
