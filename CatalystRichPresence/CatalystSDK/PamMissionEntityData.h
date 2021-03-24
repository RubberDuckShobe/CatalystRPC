//
// Generated with FrostbiteGen by Chod
// File: SDK\PamMissionEntityData.h
// Created: Wed Mar 10 19:04:23 2021
//

#ifndef FBGEN_PamMissionEntityData_H
#define FBGEN_PamMissionEntityData_H

#include "PamProgressionMission.h"
#include "Array.h"
#include "EntityData.h"

class PamMissionEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428733C0;
	}
	PamProgressionMission* m_Mission; // 0x18
	Array<DebugFlagValue*> m_FlagsSetWhenReplaying; // 0x20
	float m_ReenableOnAbortDelay; // 0x28
	float m_ReenableOnCompletedDelay; // 0x2c
	float m_StreamOutOnCompletedRadius; // 0x30
	float m_StreamOutOnCompletedDelay; // 0x34
	float m_StreamOutOnAbortedDelay; // 0x38
	int m_AvailableProbability; // 0x3c
	bool m_Enabled; // 0x40
	bool m_StreamInOnAvailable; // 0x41
	bool m_StreamOutOnCompleted; // 0x42
	bool m_StreamOutOnFail; // 0x43
	bool m_StreamOutOnAbort; // 0x44
	bool m_ReloadFromLastCheckpointOnFail; // 0x45
	bool m_EnableCityAlertDuringMission; // 0x46
	bool m_AllowStreamInWhenAlreadyInside; // 0x47
}; // size = 0x48

#endif // FBGEN_PamMissionEntityData_H
