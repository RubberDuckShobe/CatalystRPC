//
// Generated with FrostbiteGen by Chod
// File: SDK\BlueprintSpawnReferenceObjectData.h
// Created: Wed Mar 10 19:08:27 2021
//

#ifndef FBGEN_BlueprintSpawnReferenceObjectData_H
#define FBGEN_BlueprintSpawnReferenceObjectData_H

#include "Array.h"
#include "ReferenceObjectData.h"

class BlueprintSpawnReferenceObjectData :
	public ReferenceObjectData // size = 0x90
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C2140;
	}
	Array<ExtraSpawnData*> m_ExtraSpawnData; // 0x90
	float m_InitialSpawnDelay; // 0x98
	float m_SpawnDelay; // 0x9c
	int m_MaxCount; // 0xa0
	int m_MaxCountSimultaneously; // 0xa4
	bool m_SaveState; // 0xa8
	bool m_CacheLinkArray; // 0xa9
	bool m_InitialAutoSpawn; // 0xaa
	bool m_AutoSpawn; // 0xab
	bool m_QueueSpawnEvent; // 0xac
	bool m_UseAsSpawnPoint; // 0xad
	bool m_SpawnsOccupyLocations; // 0xae
	unsigned char _0xaf[0x1];
}; // size = 0xb0

#endif // FBGEN_BlueprintSpawnReferenceObjectData_H
