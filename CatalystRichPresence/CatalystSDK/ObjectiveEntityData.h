//
// Generated with FrostbiteGen by Chod
// File: SDK\ObjectiveEntityData.h
// Created: Wed Mar 10 19:05:30 2021
//

#ifndef FBGEN_ObjectiveEntityData_H
#define FBGEN_ObjectiveEntityData_H

#include "MissionObjectiveHudData.h"
#include "ObjectiveType.h"
#include "MessageReciever.h"
#include "TeamId.h"
#include "SquadId.h"
#include "EntityData.h"

class ObjectiveEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014280B510;
	}
	MissionObjectiveHudData* m_HudData; // 0x18
	ObjectiveType m_ObjectiveType; // 0x20
	float m_DisplayTime; // 0x24
	float m_DelayTime; // 0x28
	unsigned char _0x2c[0x4];
	const char* m_ObjectiveSid; // 0x30
	const char* m_ObjectiveBriefSid; // 0x38
	const char* m_SuccessSid; // 0x40
	MessageReciever m_Reciever; // 0x48
	TeamId m_TeamId; // 0x4c
	SquadId m_SquadId; // 0x50
	bool m_Tutorial; // 0x54
	bool m_RetriggerSuccessOnShowObjective; // 0x55
	bool m_DisplaySuccess; // 0x56
	unsigned char _0x57[0x1];
}; // size = 0x58

#endif // FBGEN_ObjectiveEntityData_H
