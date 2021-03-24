//
// Generated with FrostbiteGen by Chod
// File: SDK\Ps4AgeSettings.h
// Created: Wed Mar 10 19:02:47 2021
//

#ifndef FBGEN_Ps4AgeSettings_H
#define FBGEN_Ps4AgeSettings_H

#include "Array.h"
struct Ps4AgeSettings
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014284D810;
	}
	int m_DefaultAgeRequirement; // 0x0
	unsigned char _0x4[0x4];
	Array<Ps4CountryAgeOverrides> m_AgeOverrides; // 0x8
}; // size = 0x10

#endif // FBGEN_Ps4AgeSettings_H
