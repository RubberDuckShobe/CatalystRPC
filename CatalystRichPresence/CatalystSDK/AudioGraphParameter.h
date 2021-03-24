//
// Generated with FrostbiteGen by Chod
// File: SDK\AudioGraphParameter.h
// Created: Wed Mar 10 19:08:36 2021
//

#ifndef FBGEN_AudioGraphParameter_H
#define FBGEN_AudioGraphParameter_H

#include "DataContainer.h"

class AudioGraphParameter :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D1F10;
	}
	float m_DefaultValue; // 0x10
	unsigned int m_NameHash; // 0x14
	unsigned short m_ValueIndex; // 0x18
	unsigned char _0x1a[0x6];
}; // size = 0x20

#endif // FBGEN_AudioGraphParameter_H
