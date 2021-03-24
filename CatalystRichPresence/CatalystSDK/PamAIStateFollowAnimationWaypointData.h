//
// Generated with FrostbiteGen by Chod
// File: SDK\PamAIStateFollowAnimationWaypointData.h
// Created: Wed Mar 10 19:05:14 2021
//

#ifndef FBGEN_PamAIStateFollowAnimationWaypointData_H
#define FBGEN_PamAIStateFollowAnimationWaypointData_H

#include "CreaturePlayAnimationWaypointData.h"
#include "PamAIStateBaseData.h"

class PamAIStateFollowAnimationWaypointData :
	public PamAIStateBaseData // size = 0x28
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286CDF0;
	}
	CreaturePlayAnimationWaypointData* m_PlayAnimationData; // 0x28
}; // size = 0x30

#endif // FBGEN_PamAIStateFollowAnimationWaypointData_H
