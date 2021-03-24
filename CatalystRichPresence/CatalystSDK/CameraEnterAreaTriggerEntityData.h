//
// Generated with FrostbiteGen by Chod
// File: SDK\CameraEnterAreaTriggerEntityData.h
// Created: Wed Mar 10 19:08:20 2021
//

#ifndef FBGEN_CameraEnterAreaTriggerEntityData_H
#define FBGEN_CameraEnterAreaTriggerEntityData_H

#include "LocalPlayerId.h"
#include "UpdatePass.h"
#include "EntityData.h"

class CameraEnterAreaTriggerEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014281F530;
	}
	LocalPlayerId m_LocalPlayerId; // 0x18
	UpdatePass m_UpdatePass; // 0x1c
	float m_TimeTreshold; // 0x20
	bool m_TriggerForAllPlayers; // 0x24
	bool m_UsePlayerCharacterCamera; // 0x25
	bool m_FireOnLeaveWhenDisable; // 0x26
	bool m_AutoStart; // 0x27
}; // size = 0x28

#endif // FBGEN_CameraEnterAreaTriggerEntityData_H
