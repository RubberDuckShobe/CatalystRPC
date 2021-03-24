//
// Generated with FrostbiteGen by Chod
// File: SDK\PamAIStateDynamicRiotAttackData.h
// Created: Wed Mar 10 19:05:15 2021
//

#ifndef FBGEN_PamAIStateDynamicRiotAttackData_H
#define FBGEN_PamAIStateDynamicRiotAttackData_H

#include "PamAIStateRiotAttackBaseData.h"

class PamAIStateDynamicRiotAttackData :
	public PamAIStateRiotAttackBaseData // size = 0x30
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286CD30;
	}
	float m_FallbackRadius; // 0x30
	float m_RandomFieldPlacementRadius; // 0x34
	bool m_RandomizeFieldPlacement; // 0x38
	unsigned char _0x39[0x7];
}; // size = 0x40

#endif // FBGEN_PamAIStateDynamicRiotAttackData_H
