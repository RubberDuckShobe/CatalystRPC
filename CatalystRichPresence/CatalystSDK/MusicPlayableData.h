//
// Generated with FrostbiteGen by Chod
// File: SDK\MusicPlayableData.h
// Created: Wed Mar 10 19:05:41 2021
//

#ifndef FBGEN_MusicPlayableData_H
#define FBGEN_MusicPlayableData_H

#include "DataContainer.h"

class MusicPlayableData :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C7800;
	}
	const char* m_Name; // 0x10
	unsigned int m_PlayCount; // 0x18
	float m_MinDelay; // 0x1c
	float m_MaxDelay; // 0x20
	float m_BeatsPerMinute; // 0x24
	float m_BeatsPerBar; // 0x28
	float m_Gain; // 0x2c
	float m_Pitch; // 0x30
	unsigned char _0x34[0x4];
}; // size = 0x38

#endif // FBGEN_MusicPlayableData_H
