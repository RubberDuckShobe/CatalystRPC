//
// Generated with FrostbiteGen by Chod
// File: SDK\ArtilleryDispersionData.h
// Created: Wed Mar 10 19:08:39 2021
//

#ifndef FBGEN_ArtilleryDispersionData_H
#define FBGEN_ArtilleryDispersionData_H

struct ArtilleryDispersionData
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014289D300;
	}
	float m_MaxDispersion; // 0x0
	float m_DispersionAimMove; // 0x4
	float m_DispersionAimMoveThreshold; // 0x8
	float m_DispersionFiring; // 0xc
	float m_DispersionDeployment; // 0x10
	float m_DecreasePerSecond; // 0x14
	bool m_DispersionActive; // 0x18
	unsigned char _0x19[0x3];
}; // size = 0x1c

#endif // FBGEN_ArtilleryDispersionData_H
