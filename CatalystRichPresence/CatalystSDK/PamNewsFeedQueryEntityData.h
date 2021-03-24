//
// Generated with FrostbiteGen by Chod
// File: SDK\PamNewsFeedQueryEntityData.h
// Created: Wed Mar 10 19:04:18 2021
//

#ifndef FBGEN_PamNewsFeedQueryEntityData_H
#define FBGEN_PamNewsFeedQueryEntityData_H

#include "PamOnlineIdData.h"
#include "EntityData.h"

class PamNewsFeedQueryEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142852820;
	}
	PamOnlineIdData* m_PlayerOnlineId; // 0x18
	bool m_TriggerOnPropertyChange; // 0x20
	unsigned char _0x21[0x7];
}; // size = 0x28

#endif // FBGEN_PamNewsFeedQueryEntityData_H
