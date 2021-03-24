//
// Generated with FrostbiteGen by Chod
// File: SDK\CharacterEntryComponentData.h
// Created: Wed Mar 10 19:08:17 2021
//

#ifndef FBGEN_CharacterEntryComponentData_H
#define FBGEN_CharacterEntryComponentData_H

#include "AimingConstraintsData.h"
#include "EntryComponentData.h"

class CharacterEntryComponentData :
	public EntryComponentData // size = 0xf0
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428163E0;
	}
	AimingConstraintsData m_AimingConstraints; // 0xf0
}; // size = 0x100

#endif // FBGEN_CharacterEntryComponentData_H
