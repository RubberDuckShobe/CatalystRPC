//
// Generated with FrostbiteGen by Chod
// File: SDK\SoundTestAsset.h
// Created: Wed Mar 10 19:01:09 2021
//

#ifndef FBGEN_SoundTestAsset_H
#define FBGEN_SoundTestAsset_H

#include "Array.h"
#include "Asset.h"

class SoundTestAsset :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D0AD0;
	}
	Array<SoundTestTaskSpec*> m_TaskSpecs; // 0x18
	Array<SoundTestSpec*> m_TestSpecs; // 0x20
	Array<SoundTestSuite*> m_Suites; // 0x28
}; // size = 0x30

#endif // FBGEN_SoundTestAsset_H
