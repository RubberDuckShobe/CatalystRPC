//
// Generated with FrostbiteGen by Chod
// File: SDK\NormalizeSettings.h
// Created: Wed Mar 10 19:05:33 2021
//

#ifndef FBGEN_NormalizeSettings_H
#define FBGEN_NormalizeSettings_H

struct NormalizeSettings
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014281D768;
	}
	float m_Minimum; // 0x0
	float m_Maximum; // 0x4
	float m_Lower; // 0x8
	float m_Upper; // 0xc
	float m_Velocity; // 0x10
	bool m_Normalize; // 0x14
	unsigned char _0x15[0x3];
}; // size = 0x18

#endif // FBGEN_NormalizeSettings_H
