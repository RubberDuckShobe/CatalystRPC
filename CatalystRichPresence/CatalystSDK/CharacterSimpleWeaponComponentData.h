//
// Generated with FrostbiteGen by Chod
// File: SDK\CharacterSimpleWeaponComponentData.h
// Created: Wed Mar 10 19:08:15 2021
//

#ifndef FBGEN_CharacterSimpleWeaponComponentData_H
#define FBGEN_CharacterSimpleWeaponComponentData_H

#include "LinearTransform.h"
#include "Realm.h"
#include "WeaponFiringData.h"
#include "GameComponentData.h"

class CharacterSimpleWeaponComponentData :
	public GameComponentData // size = 0x70
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014289D6A0;
	}
	LinearTransform m_WeaponOffset; // 0x70
	LinearTransform m_FireTarget; // 0xb0
	Realm m_Realm; // 0xf0
	unsigned char _0xf4[0x4];
	const char* m_DamageGiverName; // 0xf8
	WeaponFiringData* m_WeaponFiring; // 0x100
	unsigned char _0x108[0x8];
}; // size = 0x110

#endif // FBGEN_CharacterSimpleWeaponComponentData_H
