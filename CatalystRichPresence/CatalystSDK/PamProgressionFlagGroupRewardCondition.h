//
// Generated with FrostbiteGen by Chod
// File: SDK\PamProgressionFlagGroupRewardCondition.h
// Created: Wed Mar 10 19:04:12 2021
//

#ifndef FBGEN_PamProgressionFlagGroupRewardCondition_H
#define FBGEN_PamProgressionFlagGroupRewardCondition_H

#include "PamProgressionFlagGroup.h"
#include "PamRewardCondition.h"

class PamProgressionFlagGroupRewardCondition :
	public PamRewardCondition // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142879080;
	}
	PamProgressionFlagGroup* m_FlagGroup; // 0x10
}; // size = 0x18

#endif // FBGEN_PamProgressionFlagGroupRewardCondition_H
