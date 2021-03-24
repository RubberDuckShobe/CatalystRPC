//
// Generated with FrostbiteGen by Chod
// File: SDK\PamAIHealthComponentData.h
// Created: Wed Mar 10 19:05:19 2021
//

#ifndef FBGEN_PamAIHealthComponentData_H
#define FBGEN_PamAIHealthComponentData_H

#include "PamAIHealthBinding.h"
#include "ManagerSettings.h"
#include "Array.h"
#include "AntRef.h"
#include "AISpecialization.h"
#include "PamHealthComponentData.h"

class PamAIHealthComponentData :
	public PamHealthComponentData // size = 0x90
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286E4D0;
	}
	PamAIHealthBinding m_AIHealthBinding; // 0x90
	float m_TimeSinceLastSeenToCleanup; // 0xe0
	unsigned char _0xe4[0x4];
	ManagerSettings* m_Settings; // 0xe8
	Array<HealthUnlock*> m_Unlocks; // 0xf0
	Array<PamAIAttackEvent> m_AttackEvents; // 0xf8
	AntRef m_AttackTypeEnumAsset; // 0x100
	AntRef m_AttackDirectionEnumAsset; // 0x114
	AntRef m_AttackMoveEnumAsset; // 0x128
	unsigned char _0x13c[0x4];
	AISpecialization* m_AITypeToNotify; // 0x140
	bool m_PositionalAdvantageUnlock; // 0x148
	unsigned char _0x149[0x7];
}; // size = 0x150

#endif // FBGEN_PamAIHealthComponentData_H
