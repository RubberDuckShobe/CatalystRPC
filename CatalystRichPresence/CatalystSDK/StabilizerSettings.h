//
// Generated with FrostbiteGen by Chod
// File: SDK\StabilizerSettings.h
// Created: Wed Mar 10 19:00:58 2021
//

#ifndef FBGEN_StabilizerSettings_H
#define FBGEN_StabilizerSettings_H

#include "StabilizerProperty.h"
struct StabilizerSettings
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014282BF18;
	}
	StabilizerProperty m_Property; // 0x0
	float m_Strength; // 0x4
	float m_Radius; // 0x8
	bool m_Advanced; // 0xc
	bool m_Use2DRadiusTest; // 0xd
	bool m_UseInputOverride; // 0xe
	unsigned char _0xf[0x1];
}; // size = 0x10

#endif // FBGEN_StabilizerSettings_H
