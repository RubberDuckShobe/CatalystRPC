//
// Generated with FrostbiteGen by Chod
// File: SDK\AISettings_PamAIStateBackOff.h
// Created: Wed Mar 10 19:08:56 2021
//

#ifndef FBGEN_AISettings_PamAIStateBackOff_H
#define FBGEN_AISettings_PamAIStateBackOff_H

#include "AISettingsBase.h"

class AISettings_PamAIStateBackOff :
	public AISettingsBase // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286DCF0;
	}
	float m_MinDistance; // 0x20
	float m_BackOffDistance; // 0x24
	bool m_UsePlanningPosition; // 0x28
	unsigned char _0x29[0x7];
}; // size = 0x30

#endif // FBGEN_AISettings_PamAIStateBackOff_H
