//
// Generated with FrostbiteGen by Chod
// File: SDK\PamFlowAction.h
// Created: Wed Mar 10 19:04:38 2021
//

#ifndef FBGEN_PamFlowAction_H
#define FBGEN_PamFlowAction_H

#include "Array.h"
#include "EventSpec.h"
struct PamFlowAction
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286ABC8;
	}
	const char* m_Name; // 0x0
	Array<int> m_FlowValue; // 0x8
	EventSpec m_Event; // 0x10
	bool m_UseBonusChain; // 0x14
	bool m_AffectRegeneration; // 0x15
	bool m_UseMultiplierModeFalse; // 0x16
	bool m_UseMultiplierModeTrue; // 0x17
}; // size = 0x18

#endif // FBGEN_PamFlowAction_H
