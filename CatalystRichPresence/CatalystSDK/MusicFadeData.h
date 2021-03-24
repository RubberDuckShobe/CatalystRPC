//
// Generated with FrostbiteGen by Chod
// File: SDK\MusicFadeData.h
// Created: Wed Mar 10 19:05:42 2021
//

#ifndef FBGEN_MusicFadeData_H
#define FBGEN_MusicFadeData_H

#include "MusicFadeType.h"
#include "DataContainer.h"

class MusicFadeData :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C7740;
	}
	float m_FadeOutLength; // 0x10
	MusicFadeType m_FadeOutType; // 0x14
	float m_FadeInLength; // 0x18
	MusicFadeType m_FadeInType; // 0x1c
	bool m_EqualPower; // 0x20
	unsigned char _0x21[0x7];
}; // size = 0x28

#endif // FBGEN_MusicFadeData_H
