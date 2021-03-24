//
// Generated with FrostbiteGen by Chod
// File: SDK\AreaTriggerEntityData.h
// Created: Wed Mar 10 19:08:39 2021
//

#ifndef FBGEN_AreaTriggerEntityData_H
#define FBGEN_AreaTriggerEntityData_H

#include "LinearTransform.h"
#include "AreaTriggerInclude.h"
#include "TeamId.h"
#include "TriggerEntityData.h"

class AreaTriggerEntityData :
	public TriggerEntityData // size = 0x70
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014281F9B0;
	}
	LinearTransform m_GeometryTransform; // 0x70
	AreaTriggerInclude m_Include; // 0xb0
	float m_Radius; // 0xb4
	float m_InsideAreaEventRepeatTime; // 0xb8
	TeamId m_TeamOfAllies; // 0xbc
	bool m_UseCharacterEntity; // 0xc0
	bool m_UseRadiusWithGeometryTransform; // 0xc1
	bool m_GeometriesFollowObject; // 0xc2
	bool m_OneInsideAreaEventPerSoldier; // 0xc3
	bool m_TriggerOnlyOnLeave; // 0xc4
	bool m_ResetOnEnable; // 0xc5
	bool m_TriggerOnLeaveOnDeath; // 0xc6
	bool m_TriggerOnLeaveOnDisable; // 0xc7
	unsigned char _0xc8[0x8];
}; // size = 0xd0

#endif // FBGEN_AreaTriggerEntityData_H
