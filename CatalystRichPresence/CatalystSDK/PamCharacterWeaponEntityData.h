//
// Generated with FrostbiteGen by Chod
// File: SDK\PamCharacterWeaponEntityData.h
// Created: Wed Mar 10 19:05:03 2021
//

#ifndef FBGEN_PamCharacterWeaponEntityData_H
#define FBGEN_PamCharacterWeaponEntityData_H

#include "DynamicModelEntityData.h"
#include "ActorEntityData.h"

class PamCharacterWeaponEntityData :
	public ActorEntityData // size = 0xa0
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142851FE0;
	}
	DynamicModelEntityData* m_WeaponDrop; // 0xa0
	unsigned char _0xa8[0x8];
}; // size = 0xb0

#endif // FBGEN_PamCharacterWeaponEntityData_H
