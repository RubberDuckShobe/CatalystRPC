//
// Generated with FrostbiteGen by Chod
// File: SDK\WeaponSoundModifier.h
// Created: Wed Mar 10 18:58:48 2021
//

#ifndef FBGEN_WeaponSoundModifier_H
#define FBGEN_WeaponSoundModifier_H

#include "SoundAsset.h"
#include "WeaponModifierDynamicBase.h"

class WeaponSoundModifier :
	public WeaponModifierDynamicBase // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014289DA60;
	}
	SoundAsset* m_Sound; // 0x18
	SoundAsset* m_SoundRemotePlayer; // 0x20
	bool m_MutePrimarySoundWhenActive; // 0x28
	unsigned char _0x29[0x7];
}; // size = 0x30

#endif // FBGEN_WeaponSoundModifier_H
