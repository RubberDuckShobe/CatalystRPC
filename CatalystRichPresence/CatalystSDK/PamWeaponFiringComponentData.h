//
// Generated with FrostbiteGen by Chod
// File: SDK\PamWeaponFiringComponentData.h
// Created: Wed Mar 10 19:03:20 2021
//

#ifndef FBGEN_PamWeaponFiringComponentData_H
#define FBGEN_PamWeaponFiringComponentData_H

#include "Realm.h"
#include "BulletEntityData.h"
#include "GameComponentData.h"

class PamWeaponFiringComponentData :
	public GameComponentData // size = 0x70
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142851EC0;
	}
	Realm m_Realm; // 0x70
	unsigned char _0x74[0x4];
	BulletEntityData* m_AIProjectile; // 0x78
}; // size = 0x80

#endif // FBGEN_PamWeaponFiringComponentData_H
