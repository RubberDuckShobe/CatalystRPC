//
// Generated with FrostbiteGen by Chod
// File: SDK\PlatformScalableBool.h
// Created: Wed Mar 10 19:03:06 2021
//

#ifndef FBGEN_PlatformScalableBool_H
#define FBGEN_PlatformScalableBool_H

struct PlatformScalableBool
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427B30E8;
	}
	bool m_Default; // 0x0
	bool m_Xenon; // 0x1
	bool m_Ps3; // 0x2
	bool m_Gen4a; // 0x3
	bool m_Gen4b; // 0x4
	bool m_Android; // 0x5
	bool m_iOS; // 0x6
	bool m_OSX; // 0x7
	bool m_Linux; // 0x8
}; // size = 0x9

#endif // FBGEN_PlatformScalableBool_H
