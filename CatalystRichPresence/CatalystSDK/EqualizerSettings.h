//
// Generated with FrostbiteGen by Chod
// File: SDK\EqualizerSettings.h
// Created: Wed Mar 10 19:06:55 2021
//

#ifndef FBGEN_EqualizerSettings_H
#define FBGEN_EqualizerSettings_H

#include "DataContainer.h"

class EqualizerSettings :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C8400;
	}
	float m_LowShelfFrequency; // 0x10
	float m_LowShelfGain; // 0x14
	float m_HighShelfFrequency; // 0x18
	float m_HighShelfGain; // 0x1c
	float m_HpCutoffFrequency; // 0x20
	unsigned char _0x24[0x4];
}; // size = 0x28

#endif // FBGEN_EqualizerSettings_H
