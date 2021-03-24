//
// Generated with FrostbiteGen by Chod
// File: SDK\MusicParameterData.h
// Created: Wed Mar 10 19:05:41 2021
//

#ifndef FBGEN_MusicParameterData_H
#define FBGEN_MusicParameterData_H

#include "MusicInputData.h"

class MusicParameterData :
	public MusicInputData // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C7860;
	}
	float m_DefaultValue; // 0x20
	unsigned char _0x24[0x4];
}; // size = 0x28

#endif // FBGEN_MusicParameterData_H
