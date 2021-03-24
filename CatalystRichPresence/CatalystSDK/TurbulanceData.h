//
// Generated with FrostbiteGen by Chod
// File: SDK\TurbulanceData.h
// Created: Wed Mar 10 19:00:03 2021
//

#ifndef FBGEN_TurbulanceData_H
#define FBGEN_TurbulanceData_H

#include "TurbulenceNoiseType.h"
#include "Vec3.h"
#include "ProcessorData.h"

class TurbulanceData :
	public ProcessorData // size = 0x30
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427DBAE0;
	}
	float m_Intensity; // 0x30
	TurbulenceNoiseType m_NoiseType; // 0x34
	unsigned char _0x38[0x8];
	Vec3 m_Multiplier; // 0x40
	float m_PeriodSpace; // 0x50
	float m_TurbulenceForceAsInstantVelocity; // 0x54
	int m_Octaves; // 0x58
	float m_OctavePersistence; // 0x5c
	float m_PerParticleRandomness; // 0x60
	unsigned char _0x64[0xc];
}; // size = 0x70

#endif // FBGEN_TurbulanceData_H
