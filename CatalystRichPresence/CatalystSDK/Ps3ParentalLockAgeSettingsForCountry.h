//
// Generated with FrostbiteGen by Chod
// File: SDK\Ps3ParentalLockAgeSettingsForCountry.h
// Created: Wed Mar 10 19:02:48 2021
//

#ifndef FBGEN_Ps3ParentalLockAgeSettingsForCountry_H
#define FBGEN_Ps3ParentalLockAgeSettingsForCountry_H

#include "Ps3AgeLevels.h"
struct Ps3ParentalLockAgeSettingsForCountry
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014284DD70;
	}
	const char* m_CountryCode; // 0x0
	Ps3AgeLevels m_AgeLevels; // 0x8
}; // size = 0x18

#endif // FBGEN_Ps3ParentalLockAgeSettingsForCountry_H
