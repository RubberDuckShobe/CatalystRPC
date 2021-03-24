//
// Generated with FrostbiteGen by Chod
// File: SDK\CreaturePlayAnimationWaypointData.h
// Created: Wed Mar 10 19:07:29 2021
//

#ifndef FBGEN_CreaturePlayAnimationWaypointData_H
#define FBGEN_CreaturePlayAnimationWaypointData_H

#include "PlayAnimationData.h"
#include "LinearTransform.h"
#include "Vec3.h"
#include "CreatureMoveWaypointData.h"

class CreaturePlayAnimationWaypointData :
	public CreatureMoveWaypointData // size = 0x30
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427BBA60;
	}
	PlayAnimationData* m_PlayAnimation; // 0x30
	const char* m_AlignJoint; // 0x38
	bool m_StopAtWaypoint; // 0x40
	unsigned char _0x41[0xf];
	LinearTransform m_AlignTransform; // 0x50
	Vec3 m_EnterPosition; // 0x90
	Vec3 m_ExitPosition; // 0xa0
}; // size = 0xb0

#endif // FBGEN_CreaturePlayAnimationWaypointData_H
