//
// Generated with FrostbiteGen by Chod
// File: SDK\MorphTintPresetChannel.h
// Created: Wed Mar 10 19:05:46 2021
//

#ifndef FBGEN_MorphTintPresetChannel_H
#define FBGEN_MorphTintPresetChannel_H

#include "Vec3.h"
struct MorphTintPresetChannel
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428256F0;
	}
	Vec3 m_DiffuseColor; // 0x0
	Vec3 m_SpecularColor; // 0x10
	float m_DiffuseOpacity; // 0x20
	float m_DiffuseIntensity; // 0x24
	float m_SpecularOpacity; // 0x28
	float m_SpecularIntensity; // 0x2c
	bool m_PresetEnabled; // 0x30
	unsigned char _0x31[0xf];
}; // size = 0x40

#endif // FBGEN_MorphTintPresetChannel_H
