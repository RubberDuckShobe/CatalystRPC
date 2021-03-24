//
// Generated with FrostbiteGen by Chod
// File: SDK\PamPlayerUGCLimitsEntityData.h
// Created: Wed Mar 10 19:04:13 2021
//

#ifndef FBGEN_PamPlayerUGCLimitsEntityData_H
#define FBGEN_PamPlayerUGCLimitsEntityData_H

#include "Realm.h"
#include "EntityData.h"

class PamPlayerUGCLimitsEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142852760;
	}
	Realm m_Realm; // 0x18
	bool m_SyncOnInit; // 0x1c
	unsigned char _0x1d[0x3];
}; // size = 0x20

#endif // FBGEN_PamPlayerUGCLimitsEntityData_H
