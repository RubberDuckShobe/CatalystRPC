//
// Generated with FrostbiteGen by Chod
// File: SDK\Ps3ParentalLockAgeSettings.h
// Created: Wed Mar 10 19:02:48 2021
//

#ifndef FBGEN_Ps3ParentalLockAgeSettings_H
#define FBGEN_Ps3ParentalLockAgeSettings_H

#include "Ps3AgeLevels.h"
#include "Ps3ParentalLockAgeSettingsOverrides.h"
struct Ps3ParentalLockAgeSettings
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014284DD50;
	}
	const char* m_Region; // 0x0
	Ps3AgeLevels m_AgeLevels; // 0x8
	Ps3ParentalLockAgeSettingsOverrides* m_CountryOverrides; // 0x18
}; // size = 0x20

#endif // FBGEN_Ps3ParentalLockAgeSettings_H
