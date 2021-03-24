//
// Generated with FrostbiteGen by Chod
// File: SDK\ZoneStreamerZoneProxyEntityData.h
// Created: Wed Mar 10 18:58:39 2021
//

#ifndef FBGEN_ZoneStreamerZoneProxyEntityData_H
#define FBGEN_ZoneStreamerZoneProxyEntityData_H

#include "Array.h"
#include "ZoneStreamerLogicEntityData.h"

class ZoneStreamerZoneProxyEntityData :
	public ZoneStreamerLogicEntityData // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014289FA80;
	}
	Array<const char*> m_ZoneAndRegionNames; // 0x20
}; // size = 0x28

#endif // FBGEN_ZoneStreamerZoneProxyEntityData_H
