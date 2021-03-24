//
// Generated with FrostbiteGen by Chod
// File: SDK\PamMapDistrictTrackerEntityData.h
// Created: Wed Mar 10 19:04:24 2021
//

#ifndef FBGEN_PamMapDistrictTrackerEntityData_H
#define FBGEN_PamMapDistrictTrackerEntityData_H

#include "PamMapDistrictDefinitionAsset.h"
#include "Array.h"
#include "EntityData.h"

class PamMapDistrictTrackerEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142880A70;
	}
	PamMapDistrictDefinitionAsset* m_MapDistrictDefinitionAsset; // 0x18
	Array<int> m_EnterEventHashes; // 0x20
	Array<int> m_ExitEventHashes; // 0x28
	bool m_TrackPlayer; // 0x30
	unsigned char _0x31[0x7];
}; // size = 0x38

#endif // FBGEN_PamMapDistrictTrackerEntityData_H
