//
// Generated with FrostbiteGen by Chod
// File: SDK\FiringFunctionData.h
// Created: Wed Mar 10 19:06:47 2021
//

#ifndef FBGEN_FiringFunctionData_H
#define FBGEN_FiringFunctionData_H

#include "WeaponDispersion.h"
#include "ShotConfigData.h"
#include "OverHeatData.h"
#include "Array.h"
#include "SoundAsset.h"
#include "FireLogicData.h"
#include "AmmoConfigData.h"
#include "GameDataContainer.h"

class FiringFunctionData :
	public GameDataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014289E000;
	}
	WeaponDispersion m_WeaponDispersion; // 0x10
	unsigned char _0x54[0x4];
	Array<FireEffectData> m_FireEffects1p; // 0x58
	ShotConfigData m_Shot; // 0x60
	OverHeatData m_OverHeat; // 0xf0
	Array<FireEffectData> m_FireEffects3p; // 0x160
	SoundAsset* m_Sound; // 0x168
	SoundAsset* m_SoundRemotePlayer; // 0x170
	FireLogicData m_FireLogic; // 0x178
	AmmoConfigData m_Ammo; // 0x230
	float m_SelfHealTimeWhenDeployed; // 0x258
	bool m_UsePrimaryAmmo; // 0x25c
	bool m_UnlimitedAmmoForAI; // 0x25d
	unsigned char _0x25e[0x2];
}; // size = 0x260

#endif // FBGEN_FiringFunctionData_H
