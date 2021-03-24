//
// Generated with FrostbiteGen by Chod
// File: SDK\RotorComponentData.h
// Created: Wed Mar 10 19:02:34 2021
//

#ifndef FBGEN_RotorComponentData_H
#define FBGEN_RotorComponentData_H

#include "RotorModelData.h"
#include "RotationAxis.h"
#include "EffectBlueprint.h"
#include "GameComponentData.h"

class RotorComponentData :
	public GameComponentData // size = 0x70
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014281E3F0;
	}
	RotorModelData m_LowRpmModel; // 0x70
	RotorModelData m_HighRpmModel; // 0x78
	RotationAxis m_RotationAxis; // 0x80
	float m_RotationMultiplier; // 0x84
	float m_ChangeModelRpm; // 0x88
	unsigned char _0x8c[0x4];
	EffectBlueprint* m_BlowEffect; // 0x90
	float m_TriggerGroundEffectHeight; // 0x98
	float m_CriticallyDamagedRotationForce; // 0x9c
	bool m_OnlyTriggerBlowEffectInWater; // 0xa0
	bool m_GroundEffectOnTerrainOnly; // 0xa1
	bool m_CriticalDamage; // 0xa2
	unsigned char _0xa3[0xd];
}; // size = 0xb0

#endif // FBGEN_RotorComponentData_H
