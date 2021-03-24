//
// Generated with FrostbiteGen by Chod
// File: SDK\ZoneStreamerZoneInfo.h
// Created: Wed Mar 10 18:58:39 2021
//

#ifndef FBGEN_ZoneStreamerZoneInfo_H
#define FBGEN_ZoneStreamerZoneInfo_H

#include "Array.h"
struct ZoneStreamerZoneInfo
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014289F8D8;
	}
	Array<short> m_Neighbours; // 0x0
	bool m_HasBundle; // 0x8
	unsigned char _0x9[0x7];
}; // size = 0x10

#endif // FBGEN_ZoneStreamerZoneInfo_H
