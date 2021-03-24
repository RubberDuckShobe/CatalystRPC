//
// Generated with FrostbiteGen by Chod
// File: SDK\WeaponMiscModifierSettings.h
// Created: Wed Mar 10 18:58:49 2021
//

#ifndef FBGEN_WeaponMiscModifierSettings_H
#define FBGEN_WeaponMiscModifierSettings_H

struct WeaponMiscModifierSettings
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014289D540;
	}
	bool m_EnableBreathControl; // 0x0
	bool m_CanBeInSupportedShooting; // 0x1
	bool m_UnZoomOnBoltAction; // 0x2
	bool m_HoldBoltActionUntilZoomRelease; // 0x3
	bool m_IsSilenced; // 0x4
}; // size = 0x5

#endif // FBGEN_WeaponMiscModifierSettings_H
