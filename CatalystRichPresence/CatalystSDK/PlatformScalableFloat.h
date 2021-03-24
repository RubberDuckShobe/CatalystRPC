//
// Generated with FrostbiteGen by Chod
// File: SDK\PlatformScalableFloat.h
// Created: Wed Mar 10 19:03:06 2021
//

#ifndef FBGEN_PlatformScalableFloat_H
#define FBGEN_PlatformScalableFloat_H

struct PlatformScalableFloat
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427B3108;
	}
	float m_Default; // 0x0
	float m_Xenon; // 0x4
	float m_Ps3; // 0x8
	float m_Gen4a; // 0xc
	float m_Gen4b; // 0x10
	float m_Android; // 0x14
	float m_iOS; // 0x18
	float m_OSX; // 0x1c
	float m_Linux; // 0x20
}; // size = 0x24

#endif // FBGEN_PlatformScalableFloat_H
