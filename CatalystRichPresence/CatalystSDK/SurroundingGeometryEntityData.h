//
// Generated with FrostbiteGen by Chod
// File: SDK\SurroundingGeometryEntityData.h
// Created: Wed Mar 10 19:00:39 2021
//

#ifndef FBGEN_SurroundingGeometryEntityData_H
#define FBGEN_SurroundingGeometryEntityData_H

#include "AllowedVehiclesData.h"
#include "CombatAreaTriggerEntityData.h"
#include "EntityData.h"

class SurroundingGeometryEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014280B870;
	}
	AllowedVehiclesData* m_AllowedVehicleList; // 0x18
	CombatAreaTriggerEntityData* m_CombatArea; // 0x20
	unsigned int m_CombatAreaIndex; // 0x28
	bool m_Enabled; // 0x2c
	unsigned char _0x2d[0x3];
}; // size = 0x30

#endif // FBGEN_SurroundingGeometryEntityData_H
