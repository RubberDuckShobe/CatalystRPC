//
// Generated with FrostbiteGen by Chod
// File: SDK\WorldWindData.h
// Created: Wed Mar 10 18:58:43 2021
//

#ifndef FBGEN_WorldWindData_H
#define FBGEN_WorldWindData_H

#include "ProcessorData.h"

class WorldWindData :
	public ProcessorData // size = 0x30
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427DBC00;
	}
	float m_WindMultiplier; // 0x30
	float m_PerParticleRandomness; // 0x34
}; // size = 0x38

#endif // FBGEN_WorldWindData_H
