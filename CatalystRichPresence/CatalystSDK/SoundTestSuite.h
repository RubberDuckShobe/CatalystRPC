//
// Generated with FrostbiteGen by Chod
// File: SDK\SoundTestSuite.h
// Created: Wed Mar 10 19:01:09 2021
//

#ifndef FBGEN_SoundTestSuite_H
#define FBGEN_SoundTestSuite_H

#include "Array.h"
#include "DataContainer.h"

class SoundTestSuite :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D0B30;
	}
	const char* m_Name; // 0x10
	Array<SoundAsset*> m_Assets; // 0x18
	Array<SoundTestSpec*> m_Tests; // 0x20
	bool m_ProfileTests; // 0x28
	unsigned char _0x29[0x7];
}; // size = 0x30

#endif // FBGEN_SoundTestSuite_H
