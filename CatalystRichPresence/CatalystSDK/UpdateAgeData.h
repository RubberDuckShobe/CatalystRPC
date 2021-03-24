//
// Generated with FrostbiteGen by Chod
// File: SDK\UpdateAgeData.h
// Created: Wed Mar 10 18:59:40 2021
//

#ifndef FBGEN_UpdateAgeData_H
#define FBGEN_UpdateAgeData_H

#include "ProcessorData.h"

class UpdateAgeData :
	public ProcessorData // size = 0x30
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427DBD20;
	}
	float m_Lifetime; // 0x30
	float m_RandomLifetimeScale; // 0x34
	float m_MaxFactor; // 0x38
	unsigned char _0x3c[0x4];
}; // size = 0x40

#endif // FBGEN_UpdateAgeData_H
