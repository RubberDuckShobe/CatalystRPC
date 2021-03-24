//
// Generated with FrostbiteGen by Chod
// File: SDK\PamAIAttackEvent.h
// Created: Wed Mar 10 19:05:21 2021
//

#ifndef FBGEN_PamAIAttackEvent_H
#define FBGEN_PamAIAttackEvent_H

#include "PamAIAttackEventFilter.h"
struct PamAIAttackEvent
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286AF08;
	}
	int m_EventHash; // 0x0
	PamAIAttackEventFilter m_Filter; // 0x4
}; // size = 0x18

#endif // FBGEN_PamAIAttackEvent_H
