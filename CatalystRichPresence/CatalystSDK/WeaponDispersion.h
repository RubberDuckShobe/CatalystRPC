//
// Generated with FrostbiteGen by Chod
// File: SDK\WeaponDispersion.h
// Created: Wed Mar 10 18:58:50 2021
//

#ifndef FBGEN_WeaponDispersion_H
#define FBGEN_WeaponDispersion_H

#include "FiringDispersionData.h"
struct WeaponDispersion
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014289D360;
	}
	FiringDispersionData m_StandDispersion; // 0x0
	FiringDispersionData m_CrouchDispersion; // 0x10
	FiringDispersionData m_ProneDispersion; // 0x20
	float m_JumpDispersionAngle; // 0x30
	float m_ProneTransitionDispersionAngle; // 0x34
	float m_MoveDispersionAngle; // 0x38
	float m_MoveZoomedDispersionAngle; // 0x3c
	float m_DecreasePerSecond; // 0x40
}; // size = 0x44

#endif // FBGEN_WeaponDispersion_H
