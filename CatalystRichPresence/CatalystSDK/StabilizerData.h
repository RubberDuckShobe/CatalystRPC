//
// Generated with FrostbiteGen by Chod
// File: SDK\StabilizerData.h
// Created: Wed Mar 10 19:00:59 2021
//

#ifndef FBGEN_StabilizerData_H
#define FBGEN_StabilizerData_H

#include "DataContainer.h"

class StabilizerData :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014282CC80;
	}
	float m_PitchStrength; // 0x10
	float m_RollStrength; // 0x14
	float m_YawStrength; // 0x18
	float m_VerticalVelocityStrength; // 0x1c
	bool m_Advanced; // 0x20
	bool m_AdvancedYaw; // 0x21
	unsigned char _0x22[0x6];
}; // size = 0x28

#endif // FBGEN_StabilizerData_H
