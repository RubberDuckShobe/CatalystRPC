//
// Generated with FrostbiteGen by Chod
// File: SDK\SpawnSpeedData.h
// Created: Wed Mar 10 19:01:03 2021
//

#ifndef FBGEN_SpawnSpeedData_H
#define FBGEN_SpawnSpeedData_H

#include "ProcessorData.h"

class SpawnSpeedData :
	public ProcessorData // size = 0x30
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427DC080;
	}
	float m_Speed; // 0x30
	unsigned char _0x34[0x4];
}; // size = 0x38

#endif // FBGEN_SpawnSpeedData_H
