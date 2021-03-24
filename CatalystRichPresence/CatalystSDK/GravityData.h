//
// Generated with FrostbiteGen by Chod
// File: SDK\GravityData.h
// Created: Wed Mar 10 19:06:37 2021
//

#ifndef FBGEN_GravityData_H
#define FBGEN_GravityData_H

#include "ProcessorData.h"

class GravityData :
	public ProcessorData // size = 0x30
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427DBCC0;
	}
	float m_Gravity; // 0x30
	float m_PerParticleRandomness; // 0x34
}; // size = 0x38

#endif // FBGEN_GravityData_H
