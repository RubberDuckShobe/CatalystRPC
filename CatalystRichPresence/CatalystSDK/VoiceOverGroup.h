//
// Generated with FrostbiteGen by Chod
// File: SDK\VoiceOverGroup.h
// Created: Wed Mar 10 18:59:01 2021
//

#ifndef FBGEN_VoiceOverGroup_H
#define FBGEN_VoiceOverGroup_H

#include "DataContainer.h"

class VoiceOverGroup :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D3BF0;
	}
	const char* m_Name; // 0x10
	int m_Priority; // 0x18
	unsigned char _0x1c[0x4];
}; // size = 0x20

#endif // FBGEN_VoiceOverGroup_H
