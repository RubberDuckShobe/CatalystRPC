//
// Generated with FrostbiteGen by Chod
// File: SDK\PamAIMeleeManagerData.h
// Created: Wed Mar 10 19:05:18 2021
//

#ifndef FBGEN_PamAIMeleeManagerData_H
#define FBGEN_PamAIMeleeManagerData_H

#include "PamAIMeleeManagerAntBinding.h"
#include "AntRef.h"
#include "PamShotModeEnumBinding.h"
#include "AIManagerBaseData.h"

class PamAIMeleeManagerData :
	public AIManagerBaseData // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286EBF0;
	}
	PamAIMeleeManagerAntBinding m_AntMeleeGamestate; // 0x20
	AntRef m_PamplonaDamageGSAsset; // 0x160
	float m_WeaponCharge; // 0x174
	AntRef m_ShotModeEnumAsset; // 0x178
	PamShotModeEnumBinding m_RangedShotModeBinding; // 0x18c
	PamShotModeEnumBinding m_MeleeShotModeBinding; // 0x190
	unsigned char _0x194[0x4];
}; // size = 0x198

#endif // FBGEN_PamAIMeleeManagerData_H
