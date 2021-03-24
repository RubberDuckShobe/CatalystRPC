//
// Generated with FrostbiteGen by Chod
// File: SDK\HealthUnlock.h
// Created: Wed Mar 10 19:06:35 2021
//

#ifndef FBGEN_HealthUnlock_H
#define FBGEN_HealthUnlock_H

#include "PamProgressionFlagGroup.h"
#include "PamProgressionFlag.h"
#include "AISpecialization.h"
#include "DataContainer.h"

class HealthUnlock :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286E530;
	}
	PamProgressionFlagGroup* m_FlagGroup; // 0x10
	PamProgressionFlag* m_Flag; // 0x18
	AISpecialization* m_Specialization; // 0x20
}; // size = 0x28

#endif // FBGEN_HealthUnlock_H
