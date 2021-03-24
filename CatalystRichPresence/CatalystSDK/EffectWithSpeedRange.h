//
// Generated with FrostbiteGen by Chod
// File: SDK\EffectWithSpeedRange.h
// Created: Wed Mar 10 19:07:02 2021
//

#ifndef FBGEN_EffectWithSpeedRange_H
#define FBGEN_EffectWithSpeedRange_H

#include "EffectBlueprint.h"
struct EffectWithSpeedRange
{
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142809488;
	}
	EffectBlueprint* m_Effect; // 0x0
	float m_MinSpeed; // 0x8
	float m_MaxSpeed; // 0xc
}; // size = 0x10

#endif // FBGEN_EffectWithSpeedRange_H
