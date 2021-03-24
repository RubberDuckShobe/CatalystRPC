//
// Generated with FrostbiteGen by Chod
// File: SDK\PamProgressionFlagGroupMapMarkersEntityData.h
// Created: Wed Mar 10 19:04:12 2021
//

#ifndef FBGEN_PamProgressionFlagGroupMapMarkersEntityData_H
#define FBGEN_PamProgressionFlagGroupMapMarkersEntityData_H

#include "PamUIMapMarkerDefinition.h"
#include "Array.h"
#include "EntityData.h"

class PamProgressionFlagGroupMapMarkersEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142880A10;
	}
	PamUIMapMarkerDefinition* m_SetFlagMapMarkerDefinition; // 0x18
	PamUIMapMarkerDefinition* m_UnsetFlagMapMarkerDefinition; // 0x20
	Array<PamProgressionFlagGroup*> m_FlagGroups; // 0x28
	bool m_SetFlagsVisible; // 0x30
	bool m_UnsetFlagsVisible; // 0x31
	unsigned char _0x32[0x6];
}; // size = 0x38

#endif // FBGEN_PamProgressionFlagGroupMapMarkersEntityData_H
