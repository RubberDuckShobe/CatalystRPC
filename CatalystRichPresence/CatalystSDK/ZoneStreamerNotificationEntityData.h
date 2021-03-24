//
// Generated with FrostbiteGen by Chod
// File: SDK\ZoneStreamerNotificationEntityData.h
// Created: Wed Mar 10 18:58:40 2021
//

#ifndef FBGEN_ZoneStreamerNotificationEntityData_H
#define FBGEN_ZoneStreamerNotificationEntityData_H

#include "Guid.h"
#include "EntityData.h"

class ZoneStreamerNotificationEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014289F900;
	}
	Guid m_ControlEntity; // 0x18
	const char* m_BundleName; // 0x28
}; // size = 0x30

#endif // FBGEN_ZoneStreamerNotificationEntityData_H
