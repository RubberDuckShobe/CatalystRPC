//
// Generated with FrostbiteGen by Chod
// File: SDK\WeaponSettings.h
// Created: Wed Mar 10 18:58:48 2021
//

#ifndef FBGEN_WeaponSettings_H
#define FBGEN_WeaponSettings_H

#include "SystemSettings.h"

class WeaponSettings :
	public SystemSettings // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014289D640;
	}
	float m_ProjectileCullingHeightPadding; // 0x20
	bool m_EnableProjectileCulling; // 0x24
	unsigned char _0x25[0x3];
}; // size = 0x28

#endif // FBGEN_WeaponSettings_H
