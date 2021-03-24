//
// Generated with FrostbiteGen by Chod
// File: SDK\PamMapDistrictProgressionFlagGroupEntityData.h
// Created: Wed Mar 10 19:04:24 2021
//

#ifndef FBGEN_PamMapDistrictProgressionFlagGroupEntityData_H
#define FBGEN_PamMapDistrictProgressionFlagGroupEntityData_H

#include "Array.h"
#include "EntityData.h"

class PamMapDistrictProgressionFlagGroupEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428809B0;
	}
	int m_DistrictIndex; // 0x18
	unsigned char _0x1c[0x4];
	Array<PamProgressionFlagGroup*> m_FlagGroups; // 0x20
}; // size = 0x28

#endif // FBGEN_PamMapDistrictProgressionFlagGroupEntityData_H
