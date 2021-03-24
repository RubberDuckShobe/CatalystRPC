//
// Generated with FrostbiteGen by Chod
// File: SDK\PamProgressionMissionCompletedRewardCondition.h
// Created: Wed Mar 10 19:04:10 2021
//

#ifndef FBGEN_PamProgressionMissionCompletedRewardCondition_H
#define FBGEN_PamProgressionMissionCompletedRewardCondition_H

#include "Array.h"
#include "PamRewardCondition.h"

class PamProgressionMissionCompletedRewardCondition :
	public PamRewardCondition // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428790E0;
	}
	Array<PamProgressionMission*> m_Missions; // 0x10
}; // size = 0x18

#endif // FBGEN_PamProgressionMissionCompletedRewardCondition_H
