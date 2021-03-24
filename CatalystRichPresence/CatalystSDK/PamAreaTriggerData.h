//
// Generated with FrostbiteGen by Chod
// File: SDK\PamAreaTriggerData.h
// Created: Wed Mar 10 19:05:08 2021
//

#ifndef FBGEN_PamAreaTriggerData_H
#define FBGEN_PamAreaTriggerData_H

#include "LinearTransform.h"
#include "AreaTriggerInclude.h"
#include "TeamId.h"
#include "TriggerEntityData.h"

class PamAreaTriggerData :
	public TriggerEntityData // size = 0x70
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014287DE00;
	}
	LinearTransform m_GeometryTransform; // 0x70
	AreaTriggerInclude m_Include; // 0xb0
	float m_InsideAreaEventRepeatTime; // 0xb4
	TeamId m_TeamOfAllies; // 0xb8
	bool m_UseBoundingBoxIntersectionCheck; // 0xbc
	bool m_GeometriesFollowObject; // 0xbd
	bool m_OneInsideAreaEventPerSoldier; // 0xbe
	bool m_TriggerOnlyOnLeave; // 0xbf
	bool m_ResetOnEnable; // 0xc0
	bool m_TriggerOnLeaveOnDeath; // 0xc1
	bool m_TriggerOnLeaveOnDisable; // 0xc2
	unsigned char _0xc3[0xd];
}; // size = 0xd0

#endif // FBGEN_PamAreaTriggerData_H
