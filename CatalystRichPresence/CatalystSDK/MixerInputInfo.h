//
// Generated with FrostbiteGen by Chod
// File: SDK\MixerInputInfo.h
// Created: Wed Mar 10 19:05:51 2021
//

#ifndef FBGEN_MixerInputInfo_H
#define FBGEN_MixerInputInfo_H

#include "MixerValueAccumulateMode.h"
struct MixerInputInfo
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D0608;
	}
	MixerValueAccumulateMode m_Mode; // 0x0
	bool m_KeepValue; // 0x4
	unsigned char _0x5[0x3];
}; // size = 0x8

#endif // FBGEN_MixerInputInfo_H
