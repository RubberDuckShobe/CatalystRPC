//
// Generated with FrostbiteGen by Chod
// File: SDK\SoundTestSpec.h
// Created: Wed Mar 10 19:01:09 2021
//

#ifndef FBGEN_SoundTestSpec_H
#define FBGEN_SoundTestSpec_H

#include "SoundTestTask.h"
#include "Array.h"
#include "DataContainer.h"

class SoundTestSpec :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D0B90;
	}
	const char* m_Name; // 0x10
	const char* m_Description; // 0x18
	SoundTestTask* m_MainStartTask; // 0x20
	SoundTestTask* m_MainStopTask; // 0x28
	float m_Duration; // 0x30
	unsigned char _0x34[0x4];
	Array<SoundTestTask*> m_Tasks; // 0x38
}; // size = 0x40

#endif // FBGEN_SoundTestSpec_H
