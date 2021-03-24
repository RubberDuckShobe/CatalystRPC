//
// Generated with FrostbiteGen by Chod
// File: SDK\VoiceOverInterval.h
// Created: Wed Mar 10 18:59:01 2021
//

#ifndef FBGEN_VoiceOverInterval_H
#define FBGEN_VoiceOverInterval_H

#include "DataContainer.h"

class VoiceOverInterval :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D4F70;
	}
	const char* m_Name; // 0x10
	unsigned int m_NameHash; // 0x18
	unsigned char _0x1c[0x4];
}; // size = 0x20

#endif // FBGEN_VoiceOverInterval_H
