//
// Generated with FrostbiteGen by Chod
// File: SDK\OverHeatData.h
// Created: Wed Mar 10 19:05:24 2021
//

#ifndef FBGEN_OverHeatData_H
#define FBGEN_OverHeatData_H

#include "FireEffectData.h"
struct OverHeatData
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014289D380;
	}
	FireEffectData m_OverHeatEffect; // 0x0
	float m_HeatPerBullet; // 0x50
	float m_HeatDropPerSecond; // 0x54
	float m_OverHeatDropDelay; // 0x58
	float m_OverHeatPenaltyTime; // 0x5c
	float m_OverHeatThreshold; // 0x60
	unsigned char _0x64[0xc];
}; // size = 0x70

#endif // FBGEN_OverHeatData_H
