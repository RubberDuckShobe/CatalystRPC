//
// Generated with FrostbiteGen by Chod
// File: SDK\AimingPenalty.h
// Created: Wed Mar 10 19:08:47 2021
//

#ifndef FBGEN_AimingPenalty_H
#define FBGEN_AimingPenalty_H

#include "FaithMove.h"
#include "FaithDamageType.h"
struct AimingPenalty
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286AE68;
	}
	FaithMove m_Move; // 0x0
	FaithDamageType m_DamageType; // 0x4
	float m_MinTimeBetweenUses; // 0x8
	float m_TimePenalty; // 0xc
}; // size = 0x10

#endif // FBGEN_AimingPenalty_H
