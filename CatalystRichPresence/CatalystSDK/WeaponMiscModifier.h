//
// Generated with FrostbiteGen by Chod
// File: SDK\WeaponMiscModifier.h
// Created: Wed Mar 10 18:58:49 2021
//

#ifndef FBGEN_WeaponMiscModifier_H
#define FBGEN_WeaponMiscModifier_H

#include "WeaponModifierBase.h"

class WeaponMiscModifier :
	public WeaponModifierBase // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014289DB80;
	}
	bool m_EnableBreathControl; // 0x18
	bool m_CanBeInSupportedShooting; // 0x19
	bool m_UnZoomOnBoltAction; // 0x1a
	bool m_HoldBoltActionUntilZoomRelease; // 0x1b
	bool m_IsSilenced; // 0x1c
	unsigned char _0x1d[0x3];
}; // size = 0x20

#endif // FBGEN_WeaponMiscModifier_H
