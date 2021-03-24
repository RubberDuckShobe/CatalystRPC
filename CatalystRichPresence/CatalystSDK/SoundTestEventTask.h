//
// Generated with FrostbiteGen by Chod
// File: SDK\SoundTestEventTask.h
// Created: Wed Mar 10 19:01:09 2021
//

#ifndef FBGEN_SoundTestEventTask_H
#define FBGEN_SoundTestEventTask_H

#include "SoundTestTaskSpec.h"

class SoundTestEventTask :
	public SoundTestTaskSpec // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D0CB0;
	}
	const char* m_EventName; // 0x20
}; // size = 0x28

#endif // FBGEN_SoundTestEventTask_H
