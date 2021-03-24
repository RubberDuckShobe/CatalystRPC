//
// Generated with FrostbiteGen by Chod
// File: SDK\SoundTestTaskSpec.h
// Created: Wed Mar 10 19:01:08 2021
//

#ifndef FBGEN_SoundTestTaskSpec_H
#define FBGEN_SoundTestTaskSpec_H

#include "DataContainer.h"

class SoundTestTaskSpec :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D0DD0;
	}
	const char* m_Description; // 0x10
	float m_Duration; // 0x18
	unsigned char _0x1c[0x4];
}; // size = 0x20

#endif // FBGEN_SoundTestTaskSpec_H
