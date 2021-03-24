//
// Generated with FrostbiteGen by Chod
// File: SDK\VehicleEntryComponentData.h
// Created: Wed Mar 10 18:59:21 2021
//

#ifndef FBGEN_VehicleEntryComponentData_H
#define FBGEN_VehicleEntryComponentData_H

#include "EntryComponentSoundData.h"
#include "PlayerEntryComponentData.h"

class VehicleEntryComponentData :
	public PlayerEntryComponentData // size = 0x120
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014281E6F0;
	}
	int m_NumberOfStances; // 0x120
	unsigned char _0x124[0x4];
	EntryComponentSoundData* m_EntryComponentSound; // 0x128
	bool m_StancesEnabled; // 0x130
	unsigned char _0x131[0xf];
}; // size = 0x140

#endif // FBGEN_VehicleEntryComponentData_H
