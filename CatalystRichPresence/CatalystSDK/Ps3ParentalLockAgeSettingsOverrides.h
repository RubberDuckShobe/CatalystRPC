//
// Generated with FrostbiteGen by Chod
// File: SDK\Ps3ParentalLockAgeSettingsOverrides.h
// Created: Wed Mar 10 19:02:48 2021
//

#ifndef FBGEN_Ps3ParentalLockAgeSettingsOverrides_H
#define FBGEN_Ps3ParentalLockAgeSettingsOverrides_H

#include "Array.h"
#include "DataContainer.h"

class Ps3ParentalLockAgeSettingsOverrides :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014284EA90;
	}
	Array<Ps3ParentalLockAgeSettingsForCountry> m_Overrides; // 0x10
}; // size = 0x18

#endif // FBGEN_Ps3ParentalLockAgeSettingsOverrides_H
