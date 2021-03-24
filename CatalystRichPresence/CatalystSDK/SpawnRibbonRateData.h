//
// Generated with FrostbiteGen by Chod
// File: SDK\SpawnRibbonRateData.h
// Created: Wed Mar 10 19:01:04 2021
//

#ifndef FBGEN_SpawnRibbonRateData_H
#define FBGEN_SpawnRibbonRateData_H

#include "ProcessorData.h"

class SpawnRibbonRateData :
	public ProcessorData // size = 0x30
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427DC200;
	}
	float m_SpawnRate; // 0x30
	float m_AngleDeviation; // 0x34
	bool m_DistributeOverDistance; // 0x38
	unsigned char _0x39[0x7];
}; // size = 0x40

#endif // FBGEN_SpawnRibbonRateData_H
