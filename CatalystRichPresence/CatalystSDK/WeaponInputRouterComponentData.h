//
// Generated with FrostbiteGen by Chod
// File: SDK\WeaponInputRouterComponentData.h
// Created: Wed Mar 10 18:58:50 2021
//

#ifndef FBGEN_WeaponInputRouterComponentData_H
#define FBGEN_WeaponInputRouterComponentData_H

#include "GameComponentData.h"

class WeaponInputRouterComponentData :
	public GameComponentData // size = 0x70
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014289D700;
	}
	float m_MaxFireRate; // 0x70
	unsigned int m_RotationCount; // 0x74
	unsigned char _0x78[0x8];
}; // size = 0x80

#endif // FBGEN_WeaponInputRouterComponentData_H
