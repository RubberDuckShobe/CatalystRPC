//
// Generated with FrostbiteGen by Chod
// File: SDK\AISettings_PamAIHealthComponent.h
// Created: Wed Mar 10 19:08:56 2021
//

#ifndef FBGEN_AISettings_PamAIHealthComponent_H
#define FBGEN_AISettings_PamAIHealthComponent_H

#include "AntRef.h"
#include "DamageMap.h"
#include "Array.h"
#include "AISettingsBase.h"

class AISettings_PamAIHealthComponent :
	public AISettingsBase // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286E650;
	}
	AntRef m_DamageEnumAsset; // 0x20
	AntRef m_StumbleEnumAsset; // 0x34
	float m_BaseHealth; // 0x48
	float m_UnlockHealth; // 0x4c
	Array<DamageMap*> m_PowerAttackAndFlowDamageMap; // 0x50
	Array<DamageMap*> m_PowerAttackDamageMap; // 0x58
	Array<DamageMap*> m_InFlowDamageMap; // 0x60
	Array<DamageMap*> m_DamageMap; // 0x68
	DamageMap* m_DefaultDamageMap; // 0x70
	int m_PositionalAdvantageUnlockDamageIncrease; // 0x78
	int m_MaxARepitions; // 0x7c
	int m_MaxBRepitions; // 0x80
	int m_MaxCRepitions; // 0x84
	int m_MaxDRepitions; // 0x88
	float m_RepititionCountResetInterval; // 0x8c
	Array<StumbleMap*> m_StumbleMap; // 0x90
	int m_DefaultStumbleType; // 0x98
	int m_DefaultBehindStumbleType; // 0x9c
	int m_FedUpStumbleType; // 0xa0
	unsigned char _0xa4[0x4];
	Array<WriteAntGameStateData*> m_AnimationSettings; // 0xa8
}; // size = 0xb0

#endif // FBGEN_AISettings_PamAIHealthComponent_H
