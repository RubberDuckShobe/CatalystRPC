//
// Generated with FrostbiteGen by Chod
// File: SDK\PamFlowRewardCondition.h
// Created: Wed Mar 10 19:04:38 2021
//

#ifndef FBGEN_PamFlowRewardCondition_H
#define FBGEN_PamFlowRewardCondition_H

#include "PamRewardCondition.h"

class PamFlowRewardCondition :
	public PamRewardCondition // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142878F60;
	}
	float m_StayInFlowSeconds; // 0x10
	unsigned char _0x14[0x4];
}; // size = 0x18

#endif // FBGEN_PamFlowRewardCondition_H
