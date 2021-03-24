//
// Generated with FrostbiteGen by Chod
// File: SDK\ZoneStreamerEntityData.h
// Created: Wed Mar 10 18:58:41 2021
//

#ifndef FBGEN_ZoneStreamerEntityData_H
#define FBGEN_ZoneStreamerEntityData_H

#include "ZoneStreamerInfo.h"
#include "SpatialEntityData.h"

class ZoneStreamerEntityData :
	public SpatialEntityData // size = 0x60
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014289FB40;
	}
	ZoneStreamerInfo m_Info; // 0x60
	bool m_ClientSideOnly; // 0x90
	bool m_EnableDefaultFocus; // 0x91
	unsigned char _0x92[0xe];
}; // size = 0xa0

#endif // FBGEN_ZoneStreamerEntityData_H
