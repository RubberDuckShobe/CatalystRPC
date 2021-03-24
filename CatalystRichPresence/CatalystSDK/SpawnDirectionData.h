//
// Generated with FrostbiteGen by Chod
// File: SDK\SpawnDirectionData.h
// Created: Wed Mar 10 19:01:05 2021
//

#ifndef FBGEN_SpawnDirectionData_H
#define FBGEN_SpawnDirectionData_H

#include "ProcessorData.h"

class SpawnDirectionData :
	public ProcessorData // size = 0x30
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427DC0E0;
	}
	float m_DirectionFromEmitterOrigin; // 0x30
	float m_InheritSpeedAmount; // 0x34
	float m_InheritSpeedSmoothingFactor; // 0x38
	float m_InheritSpeedRandomness; // 0x3c
	bool m_InheritSpeedAndDirectionFromEmitter; // 0x40
	unsigned char _0x41[0x7];
}; // size = 0x48

#endif // FBGEN_SpawnDirectionData_H
