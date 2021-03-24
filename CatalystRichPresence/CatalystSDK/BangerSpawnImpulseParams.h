//
// Generated with FrostbiteGen by Chod
// File: SDK\BangerSpawnImpulseParams.h
// Created: Wed Mar 10 19:08:32 2021
//

#ifndef FBGEN_BangerSpawnImpulseParams_H
#define FBGEN_BangerSpawnImpulseParams_H

#include "DataContainer.h"

class BangerSpawnImpulseParams :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142816C80;
	}
	float m_MinHorizontalAngle; // 0x10
	float m_MaxHorizontalAngle; // 0x14
	float m_MinVerticalAngle; // 0x18
	float m_MaxVerticalAngle; // 0x1c
	float m_MinStrength; // 0x20
	float m_MaxStrength; // 0x24
	float m_WaterStrengthModifier; // 0x28
	float m_LinearDamping; // 0x2c
	float m_AngularDamping; // 0x30
	unsigned char _0x34[0x4];
}; // size = 0x38

#endif // FBGEN_BangerSpawnImpulseParams_H
