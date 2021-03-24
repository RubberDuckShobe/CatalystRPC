//
// Generated with FrostbiteGen by Chod
// File: SDK\MorphConfigEntry.h
// Created: Wed Mar 10 19:05:48 2021
//

#ifndef FBGEN_MorphConfigEntry_H
#define FBGEN_MorphConfigEntry_H

#include "MorphTargetGender.h"
#include "MorphTargetRace.h"
struct MorphConfigEntry
{
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142825750;
	}
	MorphTargetGender m_Gender; // 0x0
	MorphTargetRace m_Race; // 0x4
}; // size = 0x8

#endif // FBGEN_MorphConfigEntry_H
