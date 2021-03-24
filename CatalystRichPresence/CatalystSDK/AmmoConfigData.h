//
// Generated with FrostbiteGen by Chod
// File: SDK\AmmoConfigData.h
// Created: Wed Mar 10 19:08:46 2021
//

#ifndef FBGEN_AmmoConfigData_H
#define FBGEN_AmmoConfigData_H

struct AmmoConfigData
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014289D500;
	}
	int m_MagazineCapacity; // 0x0
	int m_NumberOfMagazines; // 0x4
	int m_StripperClipSize; // 0x8
	unsigned int m_TraceFrequency; // 0xc
	unsigned int m_AmmoPickupMinAmount; // 0x10
	unsigned int m_AmmoPickupMaxAmount; // 0x14
	float m_AutoReplenishDelay; // 0x18
	float m_AmmoBagPickupDelayMultiplier; // 0x1c
	int m_AmmoBagPickupAmount; // 0x20
	bool m_SpawnWithoutAmmo; // 0x24
	bool m_AutoReplenishMagazine; // 0x25
	unsigned char _0x26[0x2];
}; // size = 0x28

#endif // FBGEN_AmmoConfigData_H
