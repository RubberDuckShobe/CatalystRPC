//
// Generated with FrostbiteGen by Chod
// File: SDK\MortarStrikeWeaponData.h
// Created: Wed Mar 10 19:05:45 2021
//

#ifndef FBGEN_MortarStrikeWeaponData_H
#define FBGEN_MortarStrikeWeaponData_H

#include "WeaponData.h"

class MortarStrikeWeaponData :
	public WeaponData // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014289DE20;
	}
	float m_HoldingTolerance; // 0x20
	float m_MaxStrikeDistance; // 0x24
	float m_StrikeRadius; // 0x28
	float m_MaxRandomSpawnHeight; // 0x2c
}; // size = 0x30

#endif // FBGEN_MortarStrikeWeaponData_H
