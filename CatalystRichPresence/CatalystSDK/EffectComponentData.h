//
// Generated with FrostbiteGen by Chod
// File: SDK\EffectComponentData.h
// Created: Wed Mar 10 19:07:03 2021
//

#ifndef FBGEN_EffectComponentData_H
#define FBGEN_EffectComponentData_H

#include "EffectBlueprint.h"
#include "Array.h"
#include "GameComponentData.h"

class EffectComponentData :
	public GameComponentData // size = 0x70
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142816560;
	}
	EffectBlueprint* m_Effect; // 0x70
	float m_EmitterParameter1; // 0x78
	float m_EmitterParameter2; // 0x7c
	float m_EmitterParameter3; // 0x80
	float m_OverrideHeight; // 0x84
	int m_MaxInstances; // 0x88
	unsigned char _0x8c[0x4];
	Array<EffectParameter*> m_EffectParameters; // 0x90
	bool m_AutoStart; // 0x98
	bool m_SnapToWaterSurface; // 0x99
	bool m_IsFirstPerson; // 0x9a
	unsigned char _0x9b[0x5];
}; // size = 0xa0

#endif // FBGEN_EffectComponentData_H
