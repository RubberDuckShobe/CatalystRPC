//
// Generated with FrostbiteGen by Chod
// File: SDK\SpawnRateData.h
// Created: Wed Mar 10 19:01:04 2021
//

#ifndef FBGEN_SpawnRateData_H
#define FBGEN_SpawnRateData_H

#include "ProcessorData.h"

class SpawnRateData :
	public ProcessorData // size = 0x30
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427DC260;
	}
	float m_SpawnRate; // 0x30
	bool m_DistributeOverTime; // 0x34
	bool m_DistributeOverDistance; // 0x35
	unsigned char _0x36[0x2];
}; // size = 0x38

#endif // FBGEN_SpawnRateData_H
