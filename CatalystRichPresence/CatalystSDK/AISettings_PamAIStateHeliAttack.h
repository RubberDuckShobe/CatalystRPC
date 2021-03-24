//
// Generated with FrostbiteGen by Chod
// File: SDK\AISettings_PamAIStateHeliAttack.h
// Created: Wed Mar 10 19:08:56 2021
//

#ifndef FBGEN_AISettings_PamAIStateHeliAttack_H
#define FBGEN_AISettings_PamAIStateHeliAttack_H

#include "AISettingsBase.h"

class AISettings_PamAIStateHeliAttack :
	public AISettingsBase // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286D870;
	}
	float m_MaxAllowedAttackDist; // 0x20
	float m_PreferredAttackDist; // 0x24
	float m_DistanceErrorMargin; // 0x28
	unsigned char _0x2c[0x4];
}; // size = 0x30

#endif // FBGEN_AISettings_PamAIStateHeliAttack_H
