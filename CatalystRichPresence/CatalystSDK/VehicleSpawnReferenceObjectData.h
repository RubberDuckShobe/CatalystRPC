//
// Generated with FrostbiteGen by Chod
// File: SDK\VehicleSpawnReferenceObjectData.h
// Created: Wed Mar 10 18:59:18 2021
//

#ifndef FBGEN_VehicleSpawnReferenceObjectData_H
#define FBGEN_VehicleSpawnReferenceObjectData_H

#include "EntryEnterRestriction.h"
#include "SpawnReferenceObjectData.h"

class VehicleSpawnReferenceObjectData :
	public SpawnReferenceObjectData // size = 0x190
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142820AF0;
	}
	float m_WreckDuration; // 0x190
	EntryEnterRestriction m_EnterRestriction; // 0x194
	float m_BotBailWhenHealthBelow; // 0x198
	float m_BotBailOutDelay; // 0x19c
	float m_RespawnRange; // 0x1a0
	float m_TimeUntilAbandoned; // 0x1a4
	float m_TimeUntilAbandonedIsDestroyed; // 0x1a8
	float m_KeepAliveRadius; // 0x1ac
	int m_ActiveStanceEntryIndex; // 0x1b0
	int m_ActiveStance; // 0x1b4
	float m_VehicleIsNearDistance; // 0x1b8
	bool m_SetTeamOnSpawn; // 0x1bc
	bool m_AffectedByImpulse; // 0x1bd
	bool m_AIAllowedToFollowHumanInVehicle; // 0x1be
	bool m_AIUseExitPoints; // 0x1bf
	bool m_ApplyDamageToAbandonedVehicles; // 0x1c0
	bool m_EnableAvailableSeatOutput; // 0x1c1
	bool m_DisregardSpawnAllowedSetting; // 0x1c2
	unsigned char _0x1c3[0xd];
}; // size = 0x1d0

#endif // FBGEN_VehicleSpawnReferenceObjectData_H
