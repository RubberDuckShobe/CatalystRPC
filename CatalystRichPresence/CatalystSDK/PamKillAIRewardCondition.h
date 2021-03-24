//
// Generated with FrostbiteGen by Chod
// File: SDK\PamKillAIRewardCondition.h
// Created: Wed Mar 10 19:04:26 2021
//

#ifndef FBGEN_PamKillAIRewardCondition_H
#define FBGEN_PamKillAIRewardCondition_H

#include "PamAIKillCompareType.h"
#include "PamRewardCondition.h"

class PamKillAIRewardCondition :
	public PamRewardCondition // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142878F00;
	}
	int m_NumberOfKills; // 0x10
	PamAIKillCompareType m_AIKillCompareType; // 0x14
}; // size = 0x18

#endif // FBGEN_PamKillAIRewardCondition_H
