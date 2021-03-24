//
// Generated with FrostbiteGen by Chod
// File: SDK\SpawnRotationData.h
// Created: Wed Mar 10 19:01:04 2021
//

#ifndef FBGEN_SpawnRotationData_H
#define FBGEN_SpawnRotationData_H

#include "ProcessorData.h"

class SpawnRotationData :
	public ProcessorData // size = 0x30
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427DBEA0;
	}
	float m_Rotation; // 0x30
	unsigned char _0x34[0x4];
}; // size = 0x38

#endif // FBGEN_SpawnRotationData_H
