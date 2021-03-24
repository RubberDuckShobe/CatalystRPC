//
// Generated with FrostbiteGen by Chod
// File: SDK\InputThrottle.h
// Created: Wed Mar 10 19:06:28 2021
//

#ifndef FBGEN_InputThrottle_H
#define FBGEN_InputThrottle_H

struct InputThrottle
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014282BDA0;
	}
	float m_ForwardSpeedSupressionAmount; // 0x0
	float m_BackwardSpeedSupressionAmount; // 0x4
	float m_SideSpeedSupressionAmount; // 0x8
	float m_IgnoreBrakeSpeedThreshold; // 0xc
	bool m_Enabled; // 0x10
	unsigned char _0x11[0x3];
}; // size = 0x14

#endif // FBGEN_InputThrottle_H
