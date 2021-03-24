//
// Generated with FrostbiteGen by Chod
// File: SDK\MixGroupPropertyParameters.h
// Created: Wed Mar 10 19:05:52 2021
//

#ifndef FBGEN_MixGroupPropertyParameters_H
#define FBGEN_MixGroupPropertyParameters_H

struct MixGroupPropertyParameters
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D0688;
	}
	unsigned int m_Property; // 0x0
	float m_MinOffset; // 0x4
	float m_MaxOffset; // 0x8
	float m_DefaultValue; // 0xc
	bool m_EnableOffsetMinMax; // 0x10
	bool m_OverrideDefaultValue; // 0x11
	unsigned char _0x12[0x2];
}; // size = 0x14

#endif // FBGEN_MixGroupPropertyParameters_H
