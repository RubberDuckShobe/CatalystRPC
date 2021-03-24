//
// Generated with FrostbiteGen by Chod
// File: SDK\SpawnReferenceObjectData.h
// Created: Wed Mar 10 19:01:04 2021
//

#ifndef FBGEN_SpawnReferenceObjectData_H
#define FBGEN_SpawnReferenceObjectData_H

#include "LinearTransform.h"
#include "Array.h"
#include "TeamId.h"
#include "SpatialReferenceObjectData.h"

class SpawnReferenceObjectData :
	public SpatialReferenceObjectData // size = 0xa0
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142820D90;
	}
	LinearTransform m_ControllableTransform; // 0xa0
	LinearTransform m_ControllableInput; // 0xe0
	Array<ExtraSpawnData*> m_ExtraSpawnData; // 0x120
	const char* m_LocationNameSid; // 0x128
	const char* m_LocationTextSid; // 0x130
	TeamId m_Team; // 0x138
	float m_InitialSpawnDelay; // 0x13c
	float m_SpawnDelay; // 0x140
	int m_MaxCount; // 0x144
	int m_MaxCountSimultaneously; // 0x148
	int m_TotalCountSimultaneouslyOfType; // 0x14c
	int m_TotalCountSimultaneouslyOfTypeTeam1; // 0x150
	int m_TotalCountSimultaneouslyOfTypeTeam2; // 0x154
	float m_SpawnAreaRadius; // 0x158
	float m_SpawnProtectionRadius; // 0x15c
	unsigned int m_SpawnProtectionFriendlyKilledCount; // 0x160
	float m_SpawnProtectionFriendlyKilledTime; // 0x164
	int m_TakeControlEntryIndex; // 0x168
	float m_RotationYaw; // 0x16c
	float m_RotationPitch; // 0x170
	float m_RotationRoll; // 0x174
	float m_Throttle; // 0x178
	bool m_Enabled; // 0x17c
	bool m_LockedTeam; // 0x17d
	bool m_InitialAutoSpawn; // 0x17e
	bool m_AutoSpawn; // 0x17f
	bool m_QueueSpawnEvent; // 0x180
	bool m_UseAsSpawnPoint; // 0x181
	bool m_SpawnProtectionCheckAllTeams; // 0x182
	bool m_ClearBangersOnSpawn; // 0x183
	bool m_OnlySendEventForHumanPlayers; // 0x184
	bool m_SendWeaponEvents; // 0x185
	bool m_TryToSpawnOutOfSight; // 0x186
	bool m_TakeControlOnTransformChange; // 0x187
	bool m_ReturnControlOnIdle; // 0x188
	bool m_IgnoreBelowTerrainTest; // 0x189
	unsigned char _0x18a[0x6];
}; // size = 0x190

#endif // FBGEN_SpawnReferenceObjectData_H
