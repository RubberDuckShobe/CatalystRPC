//
// Generated with FrostbiteGen by Chod
// File: SDK\ZoneStreamerControlEntityData.h
// Created: Wed Mar 10 18:58:41 2021
//

#ifndef FBGEN_ZoneStreamerControlEntityData_H
#define FBGEN_ZoneStreamerControlEntityData_H

#include "ZoneStreamerLogicEntityData.h"

class ZoneStreamerControlEntityData :
	public ZoneStreamerLogicEntityData // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014289FC60;
	}
	bool m_StartPaused; // 0x20
	unsigned char _0x21[0x7];
}; // size = 0x28

#endif // FBGEN_ZoneStreamerControlEntityData_H
