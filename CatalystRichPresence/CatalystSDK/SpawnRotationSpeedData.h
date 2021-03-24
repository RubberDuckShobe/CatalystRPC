//
// Generated with FrostbiteGen by Chod
// File: SDK\SpawnRotationSpeedData.h
// Created: Wed Mar 10 19:01:03 2021
//

#ifndef FBGEN_SpawnRotationSpeedData_H
#define FBGEN_SpawnRotationSpeedData_H

#include "ProcessorData.h"

class SpawnRotationSpeedData :
	public ProcessorData // size = 0x30
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427DBDE0;
	}
	float m_RotationSpeed; // 0x30
	unsigned char _0x34[0x4];
}; // size = 0x38

#endif // FBGEN_SpawnRotationSpeedData_H
