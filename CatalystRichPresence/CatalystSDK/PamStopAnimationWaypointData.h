//
// Generated with FrostbiteGen by Chod
// File: SDK\PamStopAnimationWaypointData.h
// Created: Wed Mar 10 19:03:45 2021
//

#ifndef FBGEN_PamStopAnimationWaypointData_H
#define FBGEN_PamStopAnimationWaypointData_H

#include "StopAnimationTypeBinding.h"
#include "CreatureMoveWaypointData.h"

class PamStopAnimationWaypointData :
	public CreatureMoveWaypointData // size = 0x30
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014287CA20;
	}
	StopAnimationTypeBinding* m_AnimationType; // 0x30
}; // size = 0x38

#endif // FBGEN_PamStopAnimationWaypointData_H
