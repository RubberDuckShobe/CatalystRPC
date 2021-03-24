//
// Generated with FrostbiteGen by Chod
// File: SDK\ZoneStreamerVistaEntityData.h
// Created: Wed Mar 10 18:58:39 2021
//

#ifndef FBGEN_ZoneStreamerVistaEntityData_H
#define FBGEN_ZoneStreamerVistaEntityData_H

#include "Array.h"
#include "Guid.h"
#include "EntityData.h"

class ZoneStreamerVistaEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014289F960;
	}
	Array<VistaZoneInfo> m_ZoneInfos; // 0x18
	Guid m_ControlEntity; // 0x20
}; // size = 0x30

#endif // FBGEN_ZoneStreamerVistaEntityData_H
