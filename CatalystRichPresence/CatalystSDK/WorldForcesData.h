//
// Generated with FrostbiteGen by Chod
// File: SDK\WorldForcesData.h
// Created: Wed Mar 10 18:58:44 2021
//

#ifndef FBGEN_WorldForcesData_H
#define FBGEN_WorldForcesData_H

#include "ProcessorData.h"

class WorldForcesData :
	public ProcessorData // size = 0x30
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427DBBA0;
	}
	float m_ForcesMultiplier; // 0x30
	float m_PerParticleRandomness; // 0x34
}; // size = 0x38

#endif // FBGEN_WorldForcesData_H
