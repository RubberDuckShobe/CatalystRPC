//
// Generated with FrostbiteGen by Chod
// File: SDK\VehicleHealthZoneData.h
// Created: Wed Mar 10 18:59:20 2021
//

#ifndef FBGEN_VehicleHealthZoneData_H
#define FBGEN_VehicleHealthZoneData_H

#include "Curve2D.h"
struct VehicleHealthZoneData
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014281D7E8;
	}
	float m_MaxHealth; // 0x0
	float m_MaxShieldHealth; // 0x4
	float m_MinDamageAngle; // 0x8
	float m_DamageAngleMultiplier; // 0xc
	Curve2D* m_DamageAngleMultiplierCurve; // 0x10
	float m_VerticalFactor; // 0x18
	bool m_UseDamageAngleCalculation; // 0x1c
	unsigned char _0x1d[0x3];
}; // size = 0x20

#endif // FBGEN_VehicleHealthZoneData_H
